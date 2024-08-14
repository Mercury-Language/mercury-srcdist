/*
** Automatically generated from `find_module.m'
** by the Mercury compiler,
** version rotd-2024-08-14
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
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "io.file.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.options.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.parse_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.var_table.mih"
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

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__377__1_1_f_0(
  MR_String LambdaHeadVar__1_15);

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__323__1_1_f_0(
  MR_String LambdaHeadVar__1_26);

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_5_p_0_1(
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


static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_2[1][5];

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[5][3];




static /* final */ const MR_Box parse_tree__find_module_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 6U)),
    ((MR_Box) ((MR_String) "error opening"))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row   4 */
  {
    ((MR_Box) (MR_mkword(3, &parse_tree__find_module_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(1, &parse_tree__find_module_scalar_common_1[2])))
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

static /* final */ const MR_Box parse_tree__find_module_scalar_common_3[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_and_stream_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_file_mod_time_loop_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&parse_tree__find_module_scalar_common_2[0])),
    ((MR_Box) (parse_tree__find_module__search_for_module_source_and_stream_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__find_source_error__377__1_1_f_0(
  MR_String LambdaHeadVar__1_15)
{
  MR_String LambdaHeadVar__2_16;
  MR_String Var_18;

  Var_18 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_15, (MR_String) "\'");
  LambdaHeadVar__2_16 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_18);
  return LambdaHeadVar__2_16;
}

static MR_String MR_CALL 
parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__323__1_1_f_0(
  MR_String LambdaHeadVar__1_26)
{
  MR_String LambdaHeadVar__2_27;
  MR_String Var_29;

  Var_29 = mercury__string__f_43_43_2_f_0(LambdaHeadVar__1_26, (MR_String) "\'");
  LambdaHeadVar__2_27 = mercury__string__f_43_43_2_f_0((MR_String) "\140", Var_29);
  return LambdaHeadVar__2_27;
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
parse_tree__find_module__find_module_name_4_p_0(
  MR_String FileName_5,
  MR_Word * MaybeModuleName_6)
{
  MR_bool succeeded;
  MR_Word OpenRes_8;

  mercury__io__open_input_4_p_0(FileName_5, &OpenRes_8);
  if (((MR_tag((MR_Word) OpenRes_8)) == (MR_Integer) 1))
  {
    MR_Word Error_15 = ((MR_Word) ((MR_hl_field(1, OpenRes_8, (MR_Integer) 0))));
    MR_String ErrorMsg_16;
    MR_String Progname_17;
    MR_Word Pieces_18;
    MR_Word Spec_19;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_51;

    ErrorMsg_16 = mercury__io__error_message_1_f_0(Error_15);
    mercury__io__progname_base_4_p_0((MR_String) "mercury_compile", &Progname_17);
    {
      Var_28 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_28, 0) = ((MR_Box) (Progname_17));
    }
    Var_30 = (MR_Word) (MR_mkword(3, &parse_tree__find_module_scalar_common_1[0]));
    {
      Var_36 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_36, 1) = ((MR_Box) (FileName_5));
    }
    {
      Var_41 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_41, 0) = ((MR_Box) ((MR_Unsigned) 6U));
      MR_hl_field(3, Var_41, 1) = ((MR_Box) (ErrorMsg_16));
    }
    {
      Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_40, 0) = ((MR_Box) (Var_41));
      MR_hl_field(1, Var_40, 1) = ((MR_Box) (MR_mkword(1, &parse_tree__find_module_scalar_common_1[4])));
    }
    {
      Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_37, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_37, 1) = ((MR_Box) (Var_40));
    }
    {
      Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
      MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_37));
    }
    {
      Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_32, 0) = ((MR_Box) (MR_mkword(3, &parse_tree__find_module_scalar_common_1[1])));
      MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
    }
    {
      Var_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_29, 0) = ((MR_Box) (Var_30));
      MR_hl_field(1, Var_29, 1) = ((MR_Box) (Var_32));
    }
    {
      Pieces_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Pieces_18, 0) = ((MR_Box) (Var_28));
      MR_hl_field(1, Pieces_18, 1) = ((MR_Box) (Var_29));
    }
    {
      Spec_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Spec_19, 0) = ((MR_Box) ((MR_String) "predicate \140parse_tree.find_module.find_module_name\'/4"));
      MR_hl_field(1, Spec_19, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(1, Spec_19, 2) = ((MR_Box) ((MR_Unsigned) 16U));
      MR_hl_field(1, Spec_19, 3) = ((MR_Box) (Pieces_18));
    }
    {
      Var_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_51, 0) = ((MR_Box) (Spec_19));
      MR_hl_field(1, Var_51, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeModuleName_6 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (Var_51));
    }
  }
  else
  {
    MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(0, OpenRes_8, (MR_Integer) 0))));
    MR_String PartialFileName_11;
    MR_String BaseName_13;
    MR_Word DefaultModuleName_14;
    MR_String PartialFileName0_10;
    MR_String BaseName0_12;

    succeeded = mercury__string__remove_suffix_3_p_0(FileName_5, (MR_String) ".m", &PartialFileName0_10);
    if (succeeded)
      PartialFileName_11 = PartialFileName0_10;
    else
      PartialFileName_11 = FileName_5;
    succeeded = mercury__dir__basename_2_p_0(PartialFileName_11, &BaseName0_12);
    if (succeeded)
      BaseName_13 = BaseName0_12;
    else
      BaseName_13 = (MR_String) "";
    parse_tree__file_names__file_name_to_module_name_2_p_0(BaseName_13, &DefaultModuleName_14);
    parse_tree__parse_module__peek_at_file_6_p_0(FileStream_9, FileName_5, DefaultModuleName_14, MaybeModuleName_6);
    mercury__io__close_input_3_p_0(FileStream_9);
  }
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_5_p_0(
  MR_Word Dirs_6,
  MR_Word ModuleName_7,
  MR_Word * MaybeFileName_8)
{
  MR_Word MaybeFileNameAndStream_10;

  parse_tree__find_module__search_for_module_source_and_stream_5_p_0(Dirs_6, ModuleName_7, &MaybeFileNameAndStream_10);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream_10)) == (MR_Integer) 1))
    *MaybeFileName_8 = (MR_Word) (MaybeFileNameAndStream_10);
  else
  {
    MR_String SourceFileName_11;
    MR_Word SourceStream_12;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, MaybeFileNameAndStream_10, (MR_Integer) 0))));

    SourceFileName_11 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    SourceStream_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(SourceStream_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFileName_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (SourceFileName_11));
    }
  }
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_16;

  conv0_LambdaHeadVar__2_16 = parse_tree__find_module__IntroducedFrom__func__find_source_error__377__1_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_LambdaHeadVar__2_16));
  return wrapper_arg_2;
}

void MR_CALL 
parse_tree__find_module__search_for_module_source_and_stream_5_p_0(
  MR_Word Dirs_6,
  MR_Word ModuleName_7,
  MR_Word * MaybeFileNameAndStream_8)
{
  MR_String FileName0_10;
  MR_Word MaybeFileNameAndStream0_11;

  parse_tree__file_names__module_name_to_source_file_name_4_p_0(ModuleName_7, &FileName0_10);
  parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName0_10, &MaybeFileNameAndStream0_11);
  if (((MR_tag((MR_Word) MaybeFileNameAndStream0_11)) == (MR_Integer) 1))
  {
    MR_String Error_14;
    MR_String ModuleNameStr_21;
    MR_String DirsStr_23;
    MR_Word Var_27;
    MR_String Var_30;
    MR_String Var_31;

    ModuleNameStr_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_7);
    Var_27 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[4]), Dirs_6);
    DirsStr_23 = mercury__string__join_list_2_f_0((MR_String) ", ", Var_27);
    Var_30 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", DirsStr_23);
    Var_31 = mercury__string__f_43_43_2_f_0(ModuleNameStr_21, Var_30);
    Error_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find source for module \140", Var_31);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeFileNameAndStream_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_14));
    }
  }
  else
    *MaybeFileNameAndStream_8 = MaybeFileNameAndStream0_11;
}

void MR_CALL 
parse_tree__find_module__search_for_file_mod_time_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  parse_tree__find_module__search_for_file_mod_time_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, Result_8);
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_mod_time_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__323__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

          Var_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[3]), AllDirs_7);
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
parse_tree__find_module__search_for_file_returning_dir_and_contents_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirPathNameAndContents_8)
{
  parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, MaybeDirPathNameAndContents_8);
}

static MR_Box MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_and_contents_loop_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_LambdaHeadVar__2_27;

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__323__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

          Var_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[2]), AllDirs_7);
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
parse_tree__find_module__search_for_file_returning_dir_and_stream_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirPathNameAndStream_8)
{
  parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, MaybeDirPathNameAndStream_8);
}

void MR_CALL 
parse_tree__find_module__search_for_file_returning_dir_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeDirPathName_8)
{
  MR_Word MaybeDirPathNameAndStream_10;

  parse_tree__find_module__search_for_file_returning_dir_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, &MaybeDirPathNameAndStream_10);
  if (((MR_tag((MR_Word) MaybeDirPathNameAndStream_10)) == (MR_Integer) 1))
    *MaybeDirPathName_8 = (MR_Word) (MaybeDirPathNameAndStream_10);
  else
  {
    MR_String DirPathName_11;
    MR_Word Stream_12;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, MaybeDirPathNameAndStream_10, (MR_Integer) 0))));

    DirPathName_11 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    Stream_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(Stream_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeDirPathName_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (DirPathName_11));
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

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__323__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

          Var_26 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[1]), AllDirs_7);
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
parse_tree__find_module__search_for_file_and_stream_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeFilePathNameAndStream_8)
{
  parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, MaybeFilePathNameAndStream_8);
}

void MR_CALL 
parse_tree__find_module__search_for_file_5_p_0(
  MR_Word Dirs_6,
  MR_String FileName_7,
  MR_Word * MaybeFilePathName_8)
{
  MR_Word MaybeFilePathNameAndStream_10;

  parse_tree__find_module__search_for_file_and_stream_loop_6_p_0(Dirs_6, Dirs_6, FileName_7, &MaybeFilePathNameAndStream_10);
  if (((MR_tag((MR_Word) MaybeFilePathNameAndStream_10)) == (MR_Integer) 1))
    *MaybeFilePathName_8 = (MR_Word) (MaybeFilePathNameAndStream_10);
  else
  {
    MR_String FilePathName_11;
    MR_Word Stream_12;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(0, MaybeFilePathNameAndStream_10, (MR_Integer) 0))));

    FilePathName_11 = ((MR_String) ((MR_hl_field(0, Var_17, (MR_Integer) 0))));
    Stream_12 = ((MR_Word) ((MR_hl_field(0, Var_17, (MR_Integer) 1))));
    mercury__io__close_input_3_p_0(Stream_12);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *MaybeFilePathName_8 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (FilePathName_11));
    }
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

  conv0_LambdaHeadVar__2_27 = parse_tree__find_module__IntroducedFrom__func__cannot_find_in_dirs_msg__323__1_1_f_0(((MR_String) (wrapper_arg_1)));
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

          Var_28 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__find_module_scalar_common_3[0]), AllDirs_7);
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
