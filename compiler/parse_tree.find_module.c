/*
** Automatically generated from `find_module.m'
** by the Mercury compiler,
** version rotd-2024-11-01
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




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

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_1[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_1;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_2[2];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_2;

static const MR_FA_TypeInfo_Struct2 parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_3[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_3;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_4[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_4;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_5[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_5;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_6[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_6;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_7[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_7;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_8[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_8;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_2[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_3[6];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_which_dirs_0[4];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_which_dirs_0[9];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_which_dirs_0[9];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_0;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_1[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_1;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_2[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_2;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_3[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_3;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_4[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_4;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_5[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_5;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_6[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_6;

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_7[1];

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_7;

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_1[1];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_3[6];

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_which_tail_dirs_0[3];

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_which_tail_dirs_0[8];

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_which_tail_dirs_0[8];

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__487__1_2_f_0(
  MR_String GradeDir_12,
  MR_String LambdaHeadVar__1_24);

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__420__1_1_f_0(
  MR_String LambdaHeadVar__1_15);

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__364__1_1_f_0(
  MR_String LambdaHeadVar__1_26);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_mod_time_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__search_for_file_mod_time_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeModTime_10);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeDirNameAndContents_10);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeDirNameAndStream_10);

static MR_Box MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0(
  MR_Word SearchWhich_3,
  MR_Word * Dirs_4);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_and_stream_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeFilePathNameAndStream_10);

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
parse_tree__find_module____Unify____search_which_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____search_which_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_which_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__find_module____Compare____search_which_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[6][3];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[1][6];




static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[6][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&libs__options__libs__options__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_and_stream_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_mod_time_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_and_stream_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[1][6] = {
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

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_0 = {
  (MR_String) "search_cur_dir",
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

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_1 = {
  (MR_String) "search_this_dir",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_which_tail_dirs_0)
};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_2 = {
  (MR_String) "search_this_dir_and",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_2,
  NULL,
  NULL,
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

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_3 = {
  (MR_String) "search_normal_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_4 = {
  (MR_String) "search_intermod_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_5[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_5 = {
  (MR_String) "search_init_file_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(5),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_6[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_6 = {
  (MR_String) "search_c_include_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(6),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_7[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_7 = {
  (MR_String) "search_options_file_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(7),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_8[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_8 = {
  (MR_String) "search_mercury_library_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(8),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_dirs_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_0 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_1[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_1 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_2[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_2 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_3[6] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_3,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_4,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_5,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_6,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_7,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_8
};

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_which_dirs_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_dirs_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_which_dirs_0[9] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_6,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_0,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_5,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_4,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_8,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_3,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_7,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_1,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_dirs_0_2
};

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_which_dirs_0[9] = {
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 8,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_which_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____search_which_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____search_which_dirs_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "search_which_dirs",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_which_dirs_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_which_dirs_0 },
  (MR_Integer) 9,
  UINT16_C(12),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_search_which_dirs_0,

};

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_0 = {
  (MR_String) "search_cur_dir",
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

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_1 = {
  (MR_String) "search_this_dir",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_2[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_2 = {
  (MR_String) "search_normal_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_3[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_3 = {
  (MR_String) "search_intermod_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_4[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_4 = {
  (MR_String) "search_init_file_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_5[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_5 = {
  (MR_String) "search_c_include_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_6[1] = { (MR_PseudoTypeInfo) (&parse_tree__find_module__tree234__ti_tree234_2libs__options__type_ctor_info_option_0getopt__type_ctor_info_option_data_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_6 = {
  (MR_String) "search_options_file_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(6),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_7[1] = { (MR_PseudoTypeInfo) (&libs__globals__libs__globals__type_ctor_info_globals_0) };

static const MR_DuFunctorDesc parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_7 = {
  (MR_String) "search_mercury_library_dirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 5,
  INT32_C(7),
  parse_tree__find_module__parse_tree__find_module__field_types_search_which_tail_dirs_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_0[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_0 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_1[1] = { &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_1 };

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_3[6] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_2,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_3,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_4,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_5,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_6,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_7
};

static const MR_DuPtagLayout parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_which_tail_dirs_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(6),
    MR_SECTAG_REMOTE_FULL_WORD,
    parse_tree__find_module__parse_tree__find_module__du_stag_ordered_search_which_tail_dirs_0_3,
    INT8_C(-1),
    UINT8_C(3),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_which_tail_dirs_0[8] = {
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_5,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_0,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_4,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_3,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_7,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_2,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_6,
  &parse_tree__find_module__parse_tree__find_module__du_functor_desc_search_which_tail_dirs_0_1
};

static const MR_Integer parse_tree__find_module__parse_tree__find_module__functor_number_map_search_which_tail_dirs_0[8] = {
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_which_tail_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__find_module____Unify____search_which_tail_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__find_module____Compare____search_which_tail_dirs_0_0_10001)),
  (MR_String) "parse_tree.find_module",
  (MR_String) "search_which_tail_dirs",
  { parse_tree__find_module__parse_tree__find_module__du_name_ordered_search_which_tail_dirs_0 },
  { parse_tree__find_module__parse_tree__find_module__du_ptag_ordered_search_which_tail_dirs_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  parse_tree__find_module__parse_tree__find_module__functor_number_map_search_which_tail_dirs_0,

};

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__487__1_2_f_0(
  MR_String GradeDir_12,
  MR_String LambdaHeadVar__1_24)
{
  MR_String LambdaHeadVar__2_25;
  MR_String Var_26;

  Var_26 = mercury__dir__f_slash_2_f_0(LambdaHeadVar__1_24, (MR_String) "lib");
  LambdaHeadVar__2_25 = mercury__dir__f_slash_2_f_0(Var_26, GradeDir_12);
  return LambdaHeadVar__2_25;
}

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__420__1_1_f_0(
  MR_String LambdaHeadVar__1_15)
{
  MR_String LambdaHeadVar__2_16;
  MR_String Var_18;

  Var_18 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_15, (MR_String) "\'");
  LambdaHeadVar__2_16 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_18);
  return LambdaHeadVar__2_16;
}

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__364__1_1_f_0(
  MR_String LambdaHeadVar__1_26)
{
  MR_String LambdaHeadVar__2_27;
  MR_String Var_29;

  Var_29 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_26, (MR_String) "\'");
  LambdaHeadVar__2_27 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_29);
  return LambdaHeadVar__2_27;
}

void MR_CALL 
parse_tree__find_module____Compare____search_which_tail_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  parse_tree__find_module____Compare____search_which_dirs_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
parse_tree__find_module____Unify____search_which_tail_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = parse_tree__find_module____Unify____search_which_dirs_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
parse_tree__find_module____Compare____search_which_dirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_23 == CastY_24);
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
                MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
                MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

                mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
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
                MR_String ArgX1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
                MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 0))));
                MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
                MR_Word ArgY2_10 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, (MR_Integer) 1))));
                MR_Word SubResult1_8;

                mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_8, ArgX1_6, ArgY1_7);
                succeeded = (SubResult1_8 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_8;
                else
                {
                  MR_Word Cast_HeadVar1_34 = (MR_Word) (ArgX2_9);
                  MR_Word Cast_HeadVar2_35 = (MR_Word) (ArgY2_10);
                  MR_Word next_value_of_HeadVar__2_2 = Cast_HeadVar1_34;
                  MR_Word next_value_of_HeadVar__3_3 = Cast_HeadVar2_35;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  HeadVar__3_3 = next_value_of_HeadVar__3_3;
                  continue;
                }
              }
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0))))) {
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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                        MR_Word ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__find_module_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                        MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__find_module_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                      }
                      break;
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
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
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                        MR_Word ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__find_module_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
                      }
                      break;
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                        MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__find_module_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
                      }
                      break;
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                        MR_Word ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__find_module_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_19)), ((MR_Box) (ArgY1_20)));
                      }
                      break;
                    case (MR_Integer) 5:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 5:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word ArgX1_21 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                        MR_Word ArgY1_22 = ((MR_Word) ((MR_hl_field(3, HeadVar__3_3, (MR_Integer) 1))));

                        libs__globals____Compare____globals_0_0(HeadVar__1_1, ArgX1_21, ArgY1_22);
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

MR_bool MR_CALL 
parse_tree__find_module____Unify____search_which_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_22 == CastX_21);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;
            MR_Word Cast_HeadVar1_31;
            MR_Word Cast_HeadVar2_32;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 1))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
              if (succeeded)
              {
                Cast_HeadVar1_31 = (MR_Word) (ArgX2_7);
                Cast_HeadVar2_32 = (MR_Word) (ArgY2_8);
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = Cast_HeadVar1_31;
                next_value_of_HeadVar__2_2 = Cast_HeadVar2_32;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word TypeInfo_29_29;
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_29_29 = (MR_Word) (&parse_tree__find_module_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_27_27;
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_27_27 = (MR_Word) (&parse_tree__find_module_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_26_26;
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_26_26 = (MR_Word) (&parse_tree__find_module_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_26_26, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_25_25;
                MR_Word ArgX1_15 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_16;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_16 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_25_25 = (MR_Word) (&parse_tree__find_module_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_25_25, ((MR_Box) (ArgX1_15)), ((MR_Box) (ArgY1_16)));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word TypeInfo_30_30;
                MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_30_30 = (MR_Word) (&parse_tree__find_module_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX1_17)), ((MR_Box) (ArgY1_18)));
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word ArgX1_19 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_Word) ((MR_hl_field(3, HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = libs__globals____Unify____globals_0_0(ArgX1_19, ArgY1_20);
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_6_p_0(
  MR_Word SearchWhichDirs_7,
  MR_Word ModuleName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeFileName_10)
{
  MR_Word MaybeFileNameAndStream_12;

  parse_tree__find_module__search_for_module_source_and_stream_6_p_0(SearchWhichDirs_7, ModuleName_8, SearchDirs_9, &MaybeFileNameAndStream_12);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_12)) == (MR_Integer) 1))
    *MaybeFileName_10 = (MR_Word) (MaybeFileNameAndStream_12);
  else
  {
    MR_String SourceFileName_13;
    MR_Word SourceStream_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MaybeFileNameAndStream_12, (MR_Integer) 0))));

    SourceFileName_13 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    SourceStream_14 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
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

  conv0_LambdaHeadVar__2_16 = parse_tree__find_module__IntroducedFrom__func__find_source_error__420__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_16));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_6_p_0(
  MR_Word SearchWhichDirs_7,
  MR_Word ModuleName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeFileNameAndStream_10)
{
  MR_String FileName0_12;
  MR_Word MaybeFileNameAndStream0_13;

  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_8, &FileName0_12);
  parse_tree__find_module__compute_search_dirs_2_p_0(SearchWhichDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(*SearchDirs_9, *SearchDirs_9, FileName0_12, &MaybeFileNameAndStream0_13);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream0_13)) == (MR_Integer) 1))
  {
    MR_String Error_16;
    MR_String ModuleNameStr_23;
    MR_String DirsStr_25;
    MR_Word Var_29;
    MR_String Var_32;
    MR_String Var_33;

    ModuleNameStr_23 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_8);
    Var_29 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[5]), *SearchDirs_9);
    DirsStr_25 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_29);
    Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_25);
    Var_33 = mercury__string__f_43_43_2_f_0(ModuleNameStr_23, Var_32);
    Error_16 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", Var_33);
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
  MR_Word SearchWhichDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * Result_10)
{
  parse_tree__find_module__compute_search_dirs_2_p_0(SearchWhichDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_mod_time_loop_6_p_0(*SearchDirs_9, *SearchDirs_9, FileName_8, Result_10);
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_mod_time_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__364__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__find_module__search_for_file_mod_time_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeModTime_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Msg_12;

      if ((AllDirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_40;

        Var_40 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' in the empty list of directories");
        Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_40);
      }
      else
      {
        MR_Word Var_27 = ((MR_Word) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 1))));
        MR_String Var_28 = ((MR_String) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 0))));

        if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_34;
          MR_String Var_36;
          MR_String Var_37;

          Var_34 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) "\'");
          Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directory \140", Var_34);
          Var_37 = mercury__string__f_43_43_2_f_0(FileName_9, Var_36);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_37);
        }
        else
        {
          MR_String DirsStr_23;
          MR_Word Var_25;
          MR_String Var_30;
          MR_String Var_31;

          Var_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[4]), AllDirs_7);
          DirsStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_25);
          Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_23);
          Var_31 = mercury__string__f_43_43_2_f_0(FileName_9, Var_30);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_31);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeModTime_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_String HeadDir_13 = ((MR_String) ((MR_hl_field(1, Dirs_8, (MR_Integer) 0))));
      MR_Word TailDirs_14 = ((MR_Word) ((MR_hl_field(1, Dirs_8, (MR_Integer) 1))));
      MR_String HeadFilePathNameNC_15;
      MR_Word MaybeHeadModTime_16;
      MR_String Var_48;

      mercury__dir__this_directory_1_p_0(&Var_48);
      succeeded = (strcmp(HeadDir_13, Var_48) == 0);
      if (succeeded)
        HeadFilePathNameNC_15 = FileName_9;
      else
      {
        MR_String Sep_42;
        MR_Char Var_43;
        MR_Word Var_44;
        MR_Word Var_45;
        MR_Word Var_46;

        Var_43 = mercury__dir__directory_separator_0_f_0();
        Sep_42 = mercury__string__from_char_1_f_0(Var_43);
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (Sep_42));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
        }
        {
          Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_44, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_45));
        }
        HeadFilePathNameNC_15 = mercury__string__append_list_1_f_0(Var_44);
      }
      mercury__io__file__file_modification_time_4_p_0(HeadFilePathNameNC_15, &MaybeHeadModTime_16);
      if (((MR_tag((MR_Word) MaybeHeadModTime_16)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_8 = TailDirs_14;

        // direct tailcall eliminated
        ;
        Dirs_8 = next_value_of_Dirs_8;
        continue;
      }
      else
      {
        MR_Word HeadModTime_17 = ((MR_Word) ((MR_hl_field(0, MaybeHeadModTime_16, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeModTime_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (HeadModTime_17));
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_6_p_0(
  MR_Word SearchWhichDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeDirPathNameAndContents_10)
{
  parse_tree__find_module__compute_search_dirs_2_p_0(SearchWhichDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0(*SearchDirs_9, *SearchDirs_9, FileName_8, MaybeDirPathNameAndContents_10);
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__364__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeDirNameAndContents_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Msg_12;

      if ((AllDirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_41;

        Var_41 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' in the empty list of directories");
        Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_41);
      }
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 1))));
        MR_String Var_29 = ((MR_String) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 0))));

        if ((Var_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_35;
          MR_String Var_37;
          MR_String Var_38;

          Var_35 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) "\'");
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directory \140", Var_35);
          Var_38 = mercury__string__f_43_43_2_f_0(FileName_9, Var_37);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_38);
        }
        else
        {
          MR_String DirsStr_24;
          MR_Word Var_26;
          MR_String Var_31;
          MR_String Var_32;

          Var_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[3]), AllDirs_7);
          DirsStr_24 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_26);
          Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_24);
          Var_32 = mercury__string__f_43_43_2_f_0(FileName_9, Var_31);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_32);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDirNameAndContents_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_String HeadDir_13 = ((MR_String) ((MR_hl_field(1, Dirs_8, (MR_Integer) 0))));
      MR_Word TailDirs_14 = ((MR_Word) ((MR_hl_field(1, Dirs_8, (MR_Integer) 1))));
      MR_String HeadFilePathNameNC_15;
      MR_Word MaybeHeadContents_16;
      MR_String Var_49;

      mercury__dir__this_directory_1_p_0(&Var_49);
      succeeded = (strcmp(HeadDir_13, Var_49) == 0);
      if (succeeded)
        HeadFilePathNameNC_15 = FileName_9;
      else
      {
        MR_String Sep_43;
        MR_Char Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;

        Var_44 = mercury__dir__directory_separator_0_f_0();
        Sep_43 = mercury__string__from_char_1_f_0(Var_44);
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (Sep_43));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
        }
        HeadFilePathNameNC_15 = mercury__string__append_list_1_f_0(Var_45);
      }
      mercury__io__read_named_file_as_string_wf_4_p_0(HeadFilePathNameNC_15, &MaybeHeadContents_16);
      if (((MR_tag((MR_Word) MaybeHeadContents_16)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_8 = TailDirs_14;

        // direct tailcall eliminated
        ;
        Dirs_8 = next_value_of_Dirs_8;
        continue;
      }
      else
      {
        MR_String HeadContents_17 = ((MR_String) ((MR_hl_field(0, MaybeHeadContents_16, (MR_Integer) 0))));
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (HeadContents_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDirNameAndContents_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_6_p_0(
  MR_Word SearchWhichDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeDirPathNameAndStream_10)
{
  parse_tree__find_module__compute_search_dirs_2_p_0(SearchWhichDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0(*SearchDirs_9, *SearchDirs_9, FileName_8, MaybeDirPathNameAndStream_10);
}

void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_6_p_0(
  MR_Word SearchWhichDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeDirPathName_10)
{
  MR_Word MaybeDirPathNameAndStream_12;

  parse_tree__find_module__compute_search_dirs_2_p_0(SearchWhichDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0(*SearchDirs_9, *SearchDirs_9, FileName_8, &MaybeDirPathNameAndStream_12);
  if (((MR_tag((MR_Word) MaybeDirPathNameAndStream_12)) == (MR_Integer) 1))
    *MaybeDirPathName_10 = (MR_Word) (MaybeDirPathNameAndStream_12);
  else
  {
    MR_String DirPathName_13;
    MR_Word Stream_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MaybeDirPathNameAndStream_12, (MR_Integer) 0))));

    DirPathName_13 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    Stream_14 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(Stream_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDirPathName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (DirPathName_13));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__364__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeDirNameAndStream_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Msg_12;

      if ((AllDirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_41;

        Var_41 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' in the empty list of directories");
        Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_41);
      }
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 1))));
        MR_String Var_29 = ((MR_String) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 0))));

        if ((Var_28 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_35;
          MR_String Var_37;
          MR_String Var_38;

          Var_35 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) "\'");
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directory \140", Var_35);
          Var_38 = mercury__string__f_43_43_2_f_0(FileName_9, Var_37);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_38);
        }
        else
        {
          MR_String DirsStr_24;
          MR_Word Var_26;
          MR_String Var_31;
          MR_String Var_32;

          Var_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[2]), AllDirs_7);
          DirsStr_24 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_26);
          Var_31 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_24);
          Var_32 = mercury__string__f_43_43_2_f_0(FileName_9, Var_31);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_32);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeDirNameAndStream_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_String HeadDir_13 = ((MR_String) ((MR_hl_field(1, Dirs_8, (MR_Integer) 0))));
      MR_Word TailDirs_14 = ((MR_Word) ((MR_hl_field(1, Dirs_8, (MR_Integer) 1))));
      MR_String HeadFilePathNameNC_15;
      MR_Word MaybeHeadStream_16;
      MR_String Var_49;

      mercury__dir__this_directory_1_p_0(&Var_49);
      succeeded = (strcmp(HeadDir_13, Var_49) == 0);
      if (succeeded)
        HeadFilePathNameNC_15 = FileName_9;
      else
      {
        MR_String Sep_43;
        MR_Char Var_44;
        MR_Word Var_45;
        MR_Word Var_46;
        MR_Word Var_47;

        Var_44 = mercury__dir__directory_separator_0_f_0();
        Sep_43 = mercury__string__from_char_1_f_0(Var_44);
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_46, 0) = ((MR_Box) (Sep_43));
          MR_hl_field(1, Var_46, 1) = ((MR_Box) (Var_47));
        }
        {
          Var_45 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_45, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(1, Var_45, 1) = ((MR_Box) (Var_46));
        }
        HeadFilePathNameNC_15 = mercury__string__append_list_1_f_0(Var_45);
      }
      mercury__io__open_input_4_p_0(HeadFilePathNameNC_15, &MaybeHeadStream_16);
      if (((MR_tag((MR_Word) MaybeHeadStream_16)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_8 = TailDirs_14;

        // direct tailcall eliminated
        ;
        Dirs_8 = next_value_of_Dirs_8;
        continue;
      }
      else
      {
        MR_Word HeadStream_17 = ((MR_Word) ((MR_hl_field(0, MaybeHeadStream_16, (MR_Integer) 0))));
        MR_Word Var_22;

        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_22, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(0, Var_22, 1) = ((MR_Box) (HeadStream_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeDirNameAndStream_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_22));
        }
      }
    }
    break;
  }
}

void MR_CALL 
parse_tree__find_module__search_for_file_and_stream_6_p_0(
  MR_Word SearchWhichDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeFilePathNameAndStream_10)
{
  parse_tree__find_module__compute_search_dirs_2_p_0(SearchWhichDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(*SearchDirs_9, *SearchDirs_9, FileName_8, MaybeFilePathNameAndStream_10);
}

void MR_CALL 
parse_tree__find_module__search_for_file_6_p_0(
  MR_Word SearchWhichDirs_7,
  MR_String FileName_8,
  MR_Word * SearchDirs_9,
  MR_Word * MaybeFilePathName_10)
{
  MR_Word MaybeFilePathNameAndStream_12;

  parse_tree__find_module__compute_search_dirs_2_p_0(SearchWhichDirs_7, SearchDirs_9);
  parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(*SearchDirs_9, *SearchDirs_9, FileName_8, &MaybeFilePathNameAndStream_12);
  if (((MR_tag((MR_Word) MaybeFilePathNameAndStream_12)) == (MR_Integer) 1))
    *MaybeFilePathName_10 = (MR_Word) (MaybeFilePathNameAndStream_12);
  else
  {
    MR_String FilePathName_13;
    MR_Word Stream_14;
    MR_Word Var_19 = ((MR_Word) ((MR_hl_field(0, MaybeFilePathNameAndStream_12, (MR_Integer) 0))));

    FilePathName_13 = ((MR_String) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    Stream_14 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(Stream_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFilePathName_10 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (FilePathName_13));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_25;

  conv0_LambdaHeadVar__2_25 = parse_tree__find_module__IntroducedFrom__func__compute_search_dirs__487__1_2_f_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_25));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__find_module__compute_search_dirs_2_p_0(
  MR_Word SearchWhich_3,
  MR_Word * Dirs_4)
{
  switch (MR_tag((MR_Word) SearchWhich_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String CurDir_5;

        mercury__dir__this_directory_1_p_0(&CurDir_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dirs_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (CurDir_5));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Dir_6 = ((MR_String) ((MR_hl_field(1, SearchWhich_3, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dirs_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Dir_6));
          MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TailSearchWhich_7 = ((MR_Word) ((MR_hl_field(2, SearchWhich_3, (MR_Integer) 1))));
        MR_Word TailDirs_8;
        MR_Word Var_16 = (MR_Word) (TailSearchWhich_7);
        MR_String Dir_28 = ((MR_String) ((MR_hl_field(2, SearchWhich_3, (MR_Integer) 0))));

        parse_tree__find_module__compute_search_dirs_2_p_0(Var_16, &TailDirs_8);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *Dirs_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Dir_28));
          MR_hl_field(1, base, 1) = ((MR_Box) (TailDirs_8));
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, SearchWhich_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OptionTable_9 = ((MR_Word) ((MR_hl_field(3, SearchWhich_3, (MR_Integer) 1))));

            mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_9, ((MR_Box) ((MR_Integer) 710)), Dirs_4);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OptionTable_29 = ((MR_Word) ((MR_hl_field(3, SearchWhich_3, (MR_Integer) 1))));

            mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_29, ((MR_Box) ((MR_Integer) 711)), Dirs_4);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word OptionTable_30 = ((MR_Word) ((MR_hl_field(3, SearchWhich_3, (MR_Integer) 1))));

            mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_30, ((MR_Box) ((MR_Integer) 613)), Dirs_4);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word OptionTable_31 = ((MR_Word) ((MR_hl_field(3, SearchWhich_3, (MR_Integer) 1))));

            mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_31, ((MR_Box) ((MR_Integer) 561)), Dirs_4);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word OptionTable_32 = ((MR_Word) ((MR_hl_field(3, SearchWhich_3, (MR_Integer) 1))));

            mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_32, ((MR_Box) ((MR_Integer) 705)), Dirs_4);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Globals_10 = ((MR_Word) ((MR_hl_field(3, SearchWhich_3, (MR_Integer) 1))));
            MR_Word LibDirs_11;
            MR_String GradeDir_12;
            MR_Word Var_23;
            MR_Word OptionTable_34;

            libs__globals__get_options_2_p_0(Globals_10, &OptionTable_34);
            mercury__getopt__lookup_accumulating_option_3_p_0((MR_Word) (&libs__options__libs__options__type_ctor_info_option_0), OptionTable_34, ((MR_Box) ((MR_Integer) 605)), &LibDirs_11);
            libs__globals__get_grade_dir_2_p_0(Globals_10, &GradeDir_12);
            {
              Var_23 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_23, 0) = ((MR_Box) (&parse_tree__find_module_scalar_common_3[0]));
              MR_hl_field(0, Var_23, 1) = ((MR_Box) (parse_tree__find_module__compute_search_dirs_2_p_0_1));
              MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(0, Var_23, 3) = ((MR_Box) (GradeDir_12));
            }
            *Dirs_4 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_23, LibDirs_11);
          }
          break;
      }
      break;
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_and_stream_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__364__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_27));
  return wrapper_arg_2;
}

static void MR_CALL 
parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(
  MR_Word AllDirs_7,
  MR_Word Dirs_8,
  MR_String FileName_9,
  MR_Word * MaybeFilePathNameAndStream_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Dirs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Msg_12;

      if ((AllDirs_7 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_43;

        Var_43 = mercury__string__f_43_43_2_f_0(FileName_9, (MR_String) "\' in the empty list of directories");
        Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_43);
      }
      else
      {
        MR_Word Var_30 = ((MR_Word) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 1))));
        MR_String Var_31 = ((MR_String) ((MR_hl_field(1, AllDirs_7, (MR_Integer) 0))));

        if ((Var_30 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_37;
          MR_String Var_39;
          MR_String Var_40;

          Var_37 = mercury__string__f_43_43_2_f_0(Var_31, (MR_String) "\'");
          Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directory \140", Var_37);
          Var_40 = mercury__string__f_43_43_2_f_0(FileName_9, Var_39);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_40);
        }
        else
        {
          MR_String DirsStr_26;
          MR_Word Var_28;
          MR_String Var_33;
          MR_String Var_34;

          Var_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_1[1]), AllDirs_7);
          DirsStr_26 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_28);
          Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_26);
          Var_34 = mercury__string__f_43_43_2_f_0(FileName_9, Var_33);
          Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", Var_34);
        }
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeFilePathNameAndStream_10 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_String HeadDir_13 = ((MR_String) ((MR_hl_field(1, Dirs_8, (MR_Integer) 0))));
      MR_Word TailDirs_14 = ((MR_Word) ((MR_hl_field(1, Dirs_8, (MR_Integer) 1))));
      MR_String HeadFilePathNameNC_15;
      MR_Word MaybeHeadStream_16;
      MR_String Var_51;

      mercury__dir__this_directory_1_p_0(&Var_51);
      succeeded = (strcmp(HeadDir_13, Var_51) == 0);
      if (succeeded)
        HeadFilePathNameNC_15 = FileName_9;
      else
      {
        MR_String Sep_45;
        MR_Char Var_46;
        MR_Word Var_47;
        MR_Word Var_48;
        MR_Word Var_49;

        Var_46 = mercury__dir__directory_separator_0_f_0();
        Sep_45 = mercury__string__from_char_1_f_0(Var_46);
        {
          Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_49, 0) = ((MR_Box) (FileName_9));
          MR_hl_field(1, Var_49, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_48, 0) = ((MR_Box) (Sep_45));
          MR_hl_field(1, Var_48, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_47, 0) = ((MR_Box) (HeadDir_13));
          MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_48));
        }
        HeadFilePathNameNC_15 = mercury__string__append_list_1_f_0(Var_47);
      }
      mercury__io__open_input_4_p_0(HeadFilePathNameNC_15, &MaybeHeadStream_16);
      if (((MR_tag((MR_Word) MaybeHeadStream_16)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_Dirs_8 = TailDirs_14;

        // direct tailcall eliminated
        ;
        Dirs_8 = next_value_of_Dirs_8;
        continue;
      }
      else
      {
        MR_Word HeadStream_17 = ((MR_Word) ((MR_hl_field(0, MaybeHeadStream_16, (MR_Integer) 0))));
        MR_String HeadFilePathName_18;
        MR_Word Var_23;
        MR_String Var_24;

        mercury__dir__this_directory_1_p_0(&Var_24);
        succeeded = (strcmp(HeadDir_13, Var_24) == 0);
        if (succeeded)
          HeadFilePathName_18 = FileName_9;
        else
          HeadFilePathName_18 = mercury__dir__make_path_name_2_f_0(HeadDir_13, FileName_9);
        {
          Var_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (HeadFilePathName_18));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (HeadStream_17));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *MaybeFilePathNameAndStream_10 = base;
          MR_hl_field(0, base, 0) = ((MR_Box) (Var_23));
        }
      }
    }
    break;
  }
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
parse_tree__find_module____Unify____search_which_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____search_which_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____search_which_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____search_which_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__find_module____Unify____search_which_tail_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__find_module____Unify____search_which_tail_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__find_module____Compare____search_which_tail_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__find_module____Compare____search_which_tail_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
	MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_which_dirs_0);
	MR_register_type_ctor_info(&parse_tree__find_module__parse_tree__find_module__type_ctor_info_search_which_tail_dirs_0);
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
