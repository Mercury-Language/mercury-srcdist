/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version rotd-2016-02-08
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module libs.file_util. */
/* :- implementation. */

/*
INIT mercury__libs__file_util__init
ENDINIT
*/

#include "libs.file_util.mih"


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.compute_grade.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_VA_PseudoTypeInfo_Struct2 libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_include_file_error_0_0[2];

static const MR_DuFunctorDesc libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0;

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0[1];

static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0[1];

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_include_file_error_0[1];

static const MR_Integer libs__file_util__libs__file_util__functor_number_map_include_file_error_0[1];

static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0;

static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1;

static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2];

static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2];

static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2];

static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2);

static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3);

static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3);

static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box * libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3,
  MR_Box libs__file_util__wrapper_arg_4);

static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(
  MR_Word libs__file_util__V_26_26,
  MR_Word libs__file_util__HeadVar__2_2,
  MR_String libs__file_util__HeadVar__3_3,
  MR_Word * libs__file_util__HeadVar__4_4);

static void MR_CALL 
libs__file_util__do_search_for_file__ho1_6_p_0(
  MR_Word libs__file_util__HeadVar__2_2,
  MR_String libs__file_util__HeadVar__3_3,
  MR_Word * libs__file_util__HeadVar__4_4);

static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__252__1_4_p_0(
  MR_Word libs__file_util__Action_9,
  MR_Integer * libs__file_util__LambdaHeadVar__1_19);

static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0(
  MR_Word * libs__file_util__HeadVar__1_1,
  MR_Word libs__file_util__HeadVar__2_2,
  MR_Word libs__file_util__HeadVar__3_3);

static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0(
  MR_Word libs__file_util__HeadVar__1_1,
  MR_Word libs__file_util__HeadVar__2_2);

static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
  MR_Word libs__file_util__OutputStream_6,
  MR_Word libs__file_util__InputStream_7,
  MR_Word * libs__file_util__Res_8);

static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
  MR_String libs__file_util__Dir_6,
  MR_String libs__file_util__FileName_7,
  MR_Word * libs__file_util__Result_8);

static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
  MR_Word libs__file_util__MaybeOpen_7,
  MR_String libs__file_util__Dir_8,
  MR_String libs__file_util__FileName_9,
  MR_Word * libs__file_util__Result_10);

static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box libs__file_util__wrapper_arg_1);

static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box libs__file_util__wrapper_arg_1);

static void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box * libs__file_util__wrapper_arg_3);

static void MR_CALL 
libs__file_util__output_to_file_6_p_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box * libs__file_util__wrapper_arg_3);


static /* final */ const MR_Box libs__file_util_scalar_common_1[1][7];

static /* final */ const MR_Box libs__file_util_scalar_common_2[1][2];

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][1];

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][8];

static /* final */ const MR_Box libs__file_util_scalar_common_5[1][5];

static /* final */ const MR_Box libs__file_util_scalar_common_6[2][3];




static /* final */ const MR_Box libs__file_util_scalar_common_1[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "\' for output.")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_input_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box libs__file_util_scalar_common_6[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_5[0])),
    ((MR_Box) (libs__file_util__make_install_file_command_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&libs__file_util_scalar_common_5[0])),
    ((MR_Box) (libs__file_util__make_install_dir_command_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};



#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_VA_PseudoTypeInfo_Struct2 libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_dir_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____dir_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____dir_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "dir_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (libs__file_util____Unify____file_name_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____file_name_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "file_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_include_file_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0 = {
  (MR_String) "include_file_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  libs__file_util__libs__file_util__field_types_include_file_error_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0
};

static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0
  }
};

static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_include_file_error_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0
};

static const MR_Integer libs__file_util__libs__file_util__functor_number_map_include_file_error_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_include_file_error_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (libs__file_util____Unify____include_file_error_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____include_file_error_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "include_file_error",
  {     libs__file_util__libs__file_util__du_name_ordered_include_file_error_0 },
  {     libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  libs__file_util__libs__file_util__functor_number_map_include_file_error_0
};

static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0 = {
  (MR_String) "open_file",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1 = {
  (MR_String) "do_not_open_file",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1
};

static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0
};

static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (libs__file_util____Unify____maybe_open_file_0_0_10001)),
  ((MR_Box) (libs__file_util____Compare____maybe_open_file_0_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "maybe_open_file",
  {     libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0 },
  {     libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0
};

static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

const MR_TypeCtorInfo_Struct libs__file_util__libs__file_util__type_ctor_info_open_file_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (libs__file_util____Unify____open_file_pred_1_0_10001)),
  ((MR_Box) (libs__file_util____Compare____open_file_pred_1_0_10001)),
  (MR_String) "libs.file_util",
  (MR_String) "open_file_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) &libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2)
{
  {
    MR_bool libs__file_util__succeeded;

    {
      libs__file_util__succeeded = libs__file_util____Unify____dir_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
    return libs__file_util__succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3)
{
  {
    MR_Word libs__file_util__conv0_HeadVar__1_1;

    {
      libs__file_util____Compare____dir_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2)
{
  {
    MR_bool libs__file_util__succeeded;

    {
      libs__file_util__succeeded = libs__file_util____Unify____file_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
    return libs__file_util__succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3)
{
  {
    MR_Word libs__file_util__conv0_HeadVar__1_1;

    {
      libs__file_util____Compare____file_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2)
{
  {
    MR_bool libs__file_util__succeeded;

    {
      libs__file_util__succeeded = libs__file_util____Unify____include_file_error_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
    return libs__file_util__succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3)
{
  {
    MR_Word libs__file_util__conv0_HeadVar__1_1;

    {
      libs__file_util____Compare____include_file_error_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2)
{
  {
    MR_bool libs__file_util__succeeded;

    {
      libs__file_util__succeeded = libs__file_util____Unify____maybe_open_file_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
    return libs__file_util__succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3)
{
  {
    MR_Word libs__file_util__conv0_HeadVar__1_1;

    {
      libs__file_util____Compare____maybe_open_file_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3)
{
  {
    MR_bool libs__file_util__succeeded;

    {
      libs__file_util__succeeded = libs__file_util____Unify____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
    return libs__file_util__succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
  MR_Box libs__file_util__wrapper_arg_1,
  MR_Box * libs__file_util__wrapper_arg_2,
  MR_Box libs__file_util__wrapper_arg_3,
  MR_Box libs__file_util__wrapper_arg_4)
{
  {
    MR_Word libs__file_util__conv0_HeadVar__1_1;

    {
      libs__file_util____Compare____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), &libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_3), ((MR_Word) libs__file_util__wrapper_arg_4));
    }
    *libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(
  MR_Word libs__file_util__V_26_26,
  MR_Word libs__file_util__HeadVar__2_2,
  MR_String libs__file_util__HeadVar__3_3,
  MR_Word * libs__file_util__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__file_util__succeeded;

        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word libs__file_util__Result0_18;

            {
              libs__file_util__check_file_return_dir_6_p_0(libs__file_util__V_26_26, libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                MR_String libs__file_util__TimeT_19 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *libs__file_util__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
libs__file_util__do_search_for_file__ho1_6_p_0(
  MR_Word libs__file_util__HeadVar__2_2,
  MR_String libs__file_util__HeadVar__3_3,
  MR_Word * libs__file_util__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool libs__file_util__succeeded;

        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word libs__file_util__Result0_18;

            {
              libs__file_util__check_file_mod_time_5_p_0(libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
              {
                /* direct tailcall eliminated */
                {
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                MR_Word libs__file_util__TimeT_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *libs__file_util__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
                }
              }
          }
      }
      break;
    }
}

static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__252__1_4_p_0(
  MR_Word libs__file_util__Action_9,
  MR_Integer * libs__file_util__LambdaHeadVar__1_19)
{
  {
    MR_bool libs__file_util__succeeded;
    void MR_CALL (* libs__file_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__file_util__Action_9, (MR_Integer) 1)));
    MR_Box libs__file_util__conv1_LambdaHeadVar__3_21;

    {
      libs__file_util__func_0(((MR_Box) libs__file_util__Action_9), ((MR_Box) ((MR_Integer) 0)), &libs__file_util__conv1_LambdaHeadVar__3_21);
    }
    *libs__file_util__LambdaHeadVar__1_19 = (MR_Integer) 0;
  }
}

void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0(
  MR_Word libs__file_util__TypeInfo_for_FileInfo_6,
  MR_Word * libs__file_util__HeadVar__1_1,
  MR_Word libs__file_util__HeadVar__2_2,
  MR_Word libs__file_util__HeadVar__3_3)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
    MR_Word libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(libs__file_util__HeadVar__1_1, (MR_Word) libs__file_util__Cast_HeadVar1_4, (MR_Word) libs__file_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0(
  MR_Word libs__file_util__TypeInfo_for_FileInfo_5,
  MR_Word libs__file_util__HeadVar__1_1,
  MR_Word libs__file_util__HeadVar__2_2)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
    MR_Word libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

    {
      libs__file_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__file_util__Cast_HeadVar1_3, (MR_Word) libs__file_util__Cast_HeadVar2_4);
    }
    return libs__file_util__succeeded;
  }
}

void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0(
  MR_Word * libs__file_util__HeadVar__1_1,
  MR_Word libs__file_util__HeadVar__2_2,
  MR_Word libs__file_util__HeadVar__3_3)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Integer libs__file_util__Cast_HeadVar1_4 = (MR_Integer) libs__file_util__HeadVar__2_2;
    MR_Integer libs__file_util__Cast_HeadVar2_5 = (MR_Integer) libs__file_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0(
  MR_Word libs__file_util__HeadVar__2_1,
  MR_Word libs__file_util__HeadVar__2_2)
{
  {
    MR_bool libs__file_util__succeeded = (libs__file_util__HeadVar__2_1 == libs__file_util__HeadVar__2_2);

    return libs__file_util__succeeded;
  }
}

static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0(
  MR_Word * libs__file_util__HeadVar__1_1,
  MR_Word libs__file_util__HeadVar__2_2,
  MR_Word libs__file_util__HeadVar__3_3)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Integer libs__file_util__CastX_9 = (MR_Integer) libs__file_util__HeadVar__2_2;
    MR_Integer libs__file_util__CastY_10 = (MR_Integer) libs__file_util__HeadVar__3_3;

    libs__file_util__succeeded = (libs__file_util__CastX_9 == libs__file_util__CastY_10);
    if (libs__file_util__succeeded)
      *libs__file_util__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String libs__file_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_String libs__file_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
        MR_String libs__file_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__3_3, (MR_Integer) 0)));
        MR_String libs__file_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word libs__file_util__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&libs__file_util__V_8_8, libs__file_util__V_4_4, libs__file_util__V_6_6);
        }
        libs__file_util__succeeded = (libs__file_util__V_8_8 == (MR_Integer) 0);
        libs__file_util__succeeded = !(libs__file_util__succeeded);
        if (libs__file_util__succeeded)
          *libs__file_util__HeadVar__1_1 = libs__file_util__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__V_5_5, libs__file_util__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0(
  MR_Word libs__file_util__HeadVar__1_1,
  MR_Word libs__file_util__HeadVar__2_2)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Integer libs__file_util__CastX_7 = (MR_Integer) libs__file_util__HeadVar__1_1;
    MR_Integer libs__file_util__CastY_8 = (MR_Integer) libs__file_util__HeadVar__2_2;

    libs__file_util__succeeded = (libs__file_util__CastX_7 == libs__file_util__CastY_8);
    if (libs__file_util__succeeded)
      libs__file_util__succeeded = MR_TRUE;
    else
      {
        MR_String libs__file_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_String libs__file_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_String libs__file_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
        MR_String libs__file_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));

        libs__file_util__succeeded = (strcmp(libs__file_util__V_3_3, libs__file_util__V_5_5) == 0);
        if (libs__file_util__succeeded)
          libs__file_util__succeeded = (strcmp(libs__file_util__V_4_4, libs__file_util__V_6_6) == 0);
      }
    return libs__file_util__succeeded;
  }
}

void MR_CALL 
libs__file_util____Compare____file_name_0_0(
  MR_Word * libs__file_util__HeadVar__1_1,
  MR_String libs__file_util__HeadVar__2_2,
  MR_String libs__file_util__HeadVar__3_3)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
    MR_String libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0(
  MR_String libs__file_util__HeadVar__1_1,
  MR_String libs__file_util__HeadVar__2_2)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
    MR_String libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

    libs__file_util__succeeded = (strcmp(libs__file_util__Cast_HeadVar1_3, libs__file_util__Cast_HeadVar2_4) == 0);
    return libs__file_util__succeeded;
  }
}

void MR_CALL 
libs__file_util____Compare____dir_name_0_0(
  MR_Word * libs__file_util__HeadVar__1_1,
  MR_String libs__file_util__HeadVar__2_2,
  MR_String libs__file_util__HeadVar__3_3)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
    MR_String libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0(
  MR_String libs__file_util__HeadVar__1_1,
  MR_String libs__file_util__HeadVar__2_2)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
    MR_String libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

    libs__file_util__succeeded = (strcmp(libs__file_util__Cast_HeadVar1_3, libs__file_util__Cast_HeadVar2_4) == 0);
    return libs__file_util__succeeded;
  }
}

static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
  MR_Word libs__file_util__OutputStream_6,
  MR_Word libs__file_util__InputStream_7,
  MR_Word * libs__file_util__Res_8)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__ReadRes_10;

    {
      mercury__io__read_file_as_string_4_p_0(libs__file_util__InputStream_7, &libs__file_util__ReadRes_10);
    }
    if (((MR_tag((MR_Word) libs__file_util__ReadRes_10)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word libs__file_util__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__ReadRes_10, (MR_Integer) 1)));
        MR_String libs__file_util___Partial_12 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__ReadRes_10, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *libs__file_util__Res_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Error_13));
        }
      }
    else
      {
        MR_String libs__file_util__InputContents_11 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__ReadRes_10, (MR_Integer) 0)));

        {
          mercury__io__write_string_4_p_0(libs__file_util__OutputStream_6, libs__file_util__InputContents_11);
        }
        *libs__file_util__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
  }
}

static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
  MR_String libs__file_util__Dir_6,
  MR_String libs__file_util__FileName_7,
  MR_Word * libs__file_util__Result_8)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__PathName_10;
    MR_String libs__file_util__V_23_23;

    {
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_23_23);
    }
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_6, libs__file_util__V_23_23) == 0);
    if (libs__file_util__succeeded)
      libs__file_util__PathName_10 = libs__file_util__FileName_7;
    else
      {
        MR_String libs__file_util__Sep_17;
        MR_Char libs__file_util__V_18_18;
        MR_Word libs__file_util__V_19_19;
        MR_Word libs__file_util__V_20_20;
        MR_Word libs__file_util__V_21_21;

        {
          libs__file_util__V_18_18 = mercury__dir__directory_separator_0_f_0();
        }
        {
          libs__file_util__Sep_17 = mercury__string__from_char_1_f_0(libs__file_util__V_18_18);
        }
        {
          libs__file_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 0) = ((MR_Box) (libs__file_util__FileName_7));
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__file_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__Sep_17));
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 1) = ((MR_Box) (libs__file_util__V_21_21));
        }
        {
          libs__file_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 0) = ((MR_Box) (libs__file_util__Dir_6));
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 1) = ((MR_Box) (libs__file_util__V_20_20));
        }
        {
          libs__file_util__PathName_10 = mercury__string__append_list_1_f_0(libs__file_util__V_19_19);
        }
      }
    {
      mercury__io__file_modification_time_4_p_0(libs__file_util__PathName_10, libs__file_util__Result_8);
    }
  }
}

static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
  MR_Word libs__file_util__MaybeOpen_7,
  MR_String libs__file_util__Dir_8,
  MR_String libs__file_util__FileName_9,
  MR_Word * libs__file_util__Result_10)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__PathName_12;
    MR_Word libs__file_util__OpenResult_13;
    MR_String libs__file_util__V_31_31;

    {
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_31_31);
    }
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_8, libs__file_util__V_31_31) == 0);
    if (libs__file_util__succeeded)
      libs__file_util__PathName_12 = libs__file_util__FileName_9;
    else
      {
        MR_String libs__file_util__Sep_25;
        MR_Char libs__file_util__V_26_26;
        MR_Word libs__file_util__V_27_27;
        MR_Word libs__file_util__V_28_28;
        MR_Word libs__file_util__V_29_29;

        {
          libs__file_util__V_26_26 = mercury__dir__directory_separator_0_f_0();
        }
        {
          libs__file_util__Sep_25 = mercury__string__from_char_1_f_0(libs__file_util__V_26_26);
        }
        {
          libs__file_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 0) = ((MR_Box) (libs__file_util__FileName_9));
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          libs__file_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 0) = ((MR_Box) (libs__file_util__Sep_25));
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 1) = ((MR_Box) (libs__file_util__V_29_29));
        }
        {
          libs__file_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 0) = ((MR_Box) (libs__file_util__Dir_8));
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 1) = ((MR_Box) (libs__file_util__V_28_28));
        }
        {
          libs__file_util__PathName_12 = mercury__string__append_list_1_f_0(libs__file_util__V_27_27);
        }
      }
    {
      mercury__io__open_input_4_p_0(libs__file_util__PathName_12, &libs__file_util__OpenResult_13);
    }
    if (((MR_tag((MR_Word) libs__file_util__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
      *libs__file_util__Result_10 = (MR_Word) libs__file_util__OpenResult_13;
    else
      {
        MR_Word libs__file_util__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenResult_13, (MR_Integer) 0)));

        switch (libs__file_util__MaybeOpen_7) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__close_input_3_p_0(libs__file_util__Stream_14);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Word libs__file_util__V_15_15;

              {
                mercury__io__set_input_stream_4_p_0(libs__file_util__Stream_14, &libs__file_util__V_15_15);
              }
            }
            break;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *libs__file_util__Result_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_8));
        }
      }
  }
}

static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box libs__file_util__wrapper_arg_1)
{
  {
    MR_Box libs__file_util__wrapper_arg_2;
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
    MR_String libs__file_util__conv0_HeadVar__2_2;

    {
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
    return libs__file_util__wrapper_arg_2;
  }
}

MR_String MR_CALL 
libs__file_util__make_install_dir_command_3_f_0(
  MR_Word libs__file_util__Globals_5,
  MR_String libs__file_util__SourceDirName_6,
  MR_String libs__file_util__InstallDir_7)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__Command_8;
    MR_Word libs__file_util__TypeCtorInfo_20_20;
    MR_Word libs__file_util__FileInstallCmd_9;
    MR_String libs__file_util__InstallCmd_10;
    MR_String libs__file_util__InstallCmdDirOpt_11;
    MR_Word libs__file_util__V_13_13;
    MR_Word libs__file_util__V_15_15;
    MR_Word libs__file_util__V_16_16;
    MR_Word libs__file_util__V_17_17;
    MR_Word libs__file_util__V_18_18;

    {
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        libs__file_util__InstallCmd_10 = (MR_String) "cp";
        libs__file_util__InstallCmdDirOpt_11 = (MR_String) "-R";
      }
    else
      {
        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
        libs__file_util__InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
      }
    libs__file_util__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      libs__file_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__SourceDirName_6));
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (libs__file_util__V_18_18));
    }
    {
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__InstallCmdDirOpt_11));
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
    }
    {
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
    }
    {
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_20_20, libs__file_util__TypeCtorInfo_20_20, (MR_Word) &libs__file_util_scalar_common_6[1], libs__file_util__V_15_15);
    }
    {
      libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
    return libs__file_util__Command_8;
  }
}

static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box libs__file_util__wrapper_arg_1)
{
  {
    MR_Box libs__file_util__wrapper_arg_2;
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
    MR_String libs__file_util__conv0_HeadVar__2_2;

    {
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
    return libs__file_util__wrapper_arg_2;
  }
}

MR_String MR_CALL 
libs__file_util__make_install_file_command_3_f_0(
  MR_Word libs__file_util__Globals_5,
  MR_String libs__file_util__FileName_6,
  MR_String libs__file_util__InstallDir_7)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__Command_8;
    MR_Word libs__file_util__TypeCtorInfo_19_19;
    MR_Word libs__file_util__FileInstallCmd_9;
    MR_String libs__file_util__InstallCmd_10;
    MR_Word libs__file_util__V_13_13;
    MR_Word libs__file_util__V_15_15;
    MR_Word libs__file_util__V_16_16;
    MR_Word libs__file_util__V_17_17;

    {
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      libs__file_util__InstallCmd_10 = (MR_String) "cp";
    else
      {
        MR_String libs__file_util___InstallCmdDirOpt_11;

        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
        libs__file_util___InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
      }
    libs__file_util__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__FileName_6));
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
    }
    {
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
    }
    {
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_19_19, libs__file_util__TypeCtorInfo_19_19, (MR_Word) &libs__file_util_scalar_common_6[0], libs__file_util__V_15_15);
    }
    {
      libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
    return libs__file_util__Command_8;
  }
}

void MR_CALL 
libs__file_util__report_error_to_stream_4_p_0(
  MR_Word libs__file_util__Stream_5,
  MR_String libs__file_util__ErrorMessage_6)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__OldStream_8;
    MR_Word libs__file_util__V_9_9;

    {
      mercury__io__set_output_stream_4_p_0(libs__file_util__Stream_5, &libs__file_util__OldStream_8);
    }
    {
      libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_6);
    }
    {
      mercury__io__set_output_stream_4_p_0(libs__file_util__OldStream_8, &libs__file_util__V_9_9);
    }
  }
}

void MR_CALL 
libs__file_util__report_error_3_p_0(
  MR_String libs__file_util__ErrorMessage_4)
{
  {
    MR_bool libs__file_util__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "Error: ");
    }
    {
      mercury__io__write_string_3_p_0(libs__file_util__ErrorMessage_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
    {
      mercury__io__flush_output_2_p_0();
    }
    {
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
  }
}

void MR_CALL 
libs__file_util__maybe_flush_output_3_p_0(
  MR_Word libs__file_util__HeadVar__1_1)
{
  {
    MR_bool libs__file_util__succeeded;

    switch (libs__file_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__flush_output_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
libs__file_util__maybe_write_string_4_p_0(
  MR_Word libs__file_util__HeadVar__1_1,
  MR_String libs__file_util__String_2)
{
  {
    MR_bool libs__file_util__succeeded;

    switch (libs__file_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0(libs__file_util__String_2);
        }
        break;
    }
  }
}

void MR_CALL 
libs__file_util__maybe_report_stats_3_p_0(
  MR_Word libs__file_util__HeadVar__1_1)
{
  {
    MR_bool libs__file_util__succeeded;

    switch (libs__file_util__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__report_stats_2_p_0();
        }
        break;
    }
  }
}

void MR_CALL 
libs__file_util__get_install_name_option_3_p_0(
  MR_Word libs__file_util__Globals_4,
  MR_String libs__file_util__OutputFileName_5,
  MR_String * libs__file_util__InstallNameOpt_6)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_String libs__file_util__InstallNameFlag_7;
    MR_String libs__file_util__InstallNamePath0_8;
    MR_String libs__file_util__InstallNamePath_11;
    MR_String libs__file_util__V_21_21;
    MR_String libs__file_util__V_22_22;

    {
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 605, &libs__file_util__InstallNameFlag_7);
    }
    {
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 606, &libs__file_util__InstallNamePath0_8);
    }
    libs__file_util__succeeded = (strcmp(libs__file_util__InstallNamePath0_8, (MR_String) "") == 0);
    if (libs__file_util__succeeded)
      {
        MR_String libs__file_util__InstallPrefix_9;
        MR_String libs__file_util__GradeDir_10;
        MR_String libs__file_util__V_15_15;
        MR_String libs__file_util__V_16_16;
        MR_String libs__file_util__V_17_17;

        {
          libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 619, &libs__file_util__InstallPrefix_9);
        }
        {
          libs__compute_grade__grade_directory_component_2_p_0(libs__file_util__Globals_4, &libs__file_util__GradeDir_10);
        }
        {
          libs__file_util__V_17_17 = mercury__dir__f_slash_2_f_0(libs__file_util__InstallPrefix_9, (MR_String) "lib");
        }
        {
          libs__file_util__V_16_16 = mercury__dir__f_slash_2_f_0(libs__file_util__V_17_17, (MR_String) "mercury");
        }
        {
          libs__file_util__V_15_15 = mercury__dir__f_slash_2_f_0(libs__file_util__V_16_16, (MR_String) "lib");
        }
        {
          libs__file_util__InstallNamePath_11 = mercury__dir__f_slash_2_f_0(libs__file_util__V_15_15, libs__file_util__GradeDir_10);
        }
      }
    else
      libs__file_util__InstallNamePath_11 = libs__file_util__InstallNamePath0_8;
    {
      libs__file_util__V_22_22 = libs__options__quote_arg_1_f_0(libs__file_util__InstallNamePath_11);
    }
    {
      libs__file_util__V_21_21 = mercury__dir__f_slash_2_f_0(libs__file_util__V_22_22, libs__file_util__OutputFileName_5);
    }
    {
      *libs__file_util__InstallNameOpt_6 = mercury__string__f_43_43_2_f_0(libs__file_util__InstallNameFlag_7, libs__file_util__V_21_21);
    }
  }
}

static void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box * libs__file_util__wrapper_arg_3)
{
  {
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
    MR_Word libs__file_util__conv0_Res_8;

    {
      libs__file_util__copy_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 4))), &libs__file_util__conv0_Res_8);
    }
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_Res_8));
  }
}

void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0(
  MR_String libs__file_util__FileName_4)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__MaybeType_7;

    {
      mercury__io__file_type_5_p_0((MR_Integer) 1, libs__file_util__FileName_4, &libs__file_util__MaybeType_7);
    }
    if (((MR_tag((MR_Word) libs__file_util__MaybeType_7)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word libs__file_util__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeType_7, (MR_Integer) 0)));
        MR_String libs__file_util__Msg_11;
        MR_String libs__file_util__V_16_16;
        MR_Word libs__file_util__V_17_17;

        {
          libs__file_util__V_16_16 = mercury__io__error_message_1_f_0(libs__file_util__Error_10);
        }
        {
          libs__file_util__Msg_11 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "io.file_type failed: ", libs__file_util__V_16_16);
        }
        {
          libs__file_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__FileName_4));
          MR_hl_field(MR_mktag(0), libs__file_util__V_17_17, 1) = ((MR_Box) (libs__file_util__Msg_11));
        }
        {
          mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_17_17)));
          return;
        }
      }
    else
      {
        MR_Word libs__file_util__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__MaybeType_7, (MR_Integer) 0)));

        switch (libs__file_util__Type_8) {
          default:
            libs__file_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            libs__file_util__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 10:
            libs__file_util__succeeded = MR_TRUE;
            break;
        }
        if (libs__file_util__succeeded)
          {
            MR_Word libs__file_util__OutputStream_9;
            MR_Word libs__file_util__OpenRes_29;

            {
              mercury__io__output_stream_3_p_0(&libs__file_util__OutputStream_9);
            }
            {
              mercury__io__open_input_4_p_0(libs__file_util__FileName_4, &libs__file_util__OpenRes_29);
            }
            if (((MR_tag((MR_Word) libs__file_util__OpenRes_29)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word libs__file_util__V_35_35;
                MR_String libs__file_util__V_36_36;
                MR_Word libs__file_util__Error_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__OpenRes_29, (MR_Integer) 0)));

                {
                  libs__file_util__V_36_36 = mercury__io__error_message_1_f_0(libs__file_util__Error_42);
                }
                {
                  libs__file_util__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), libs__file_util__V_35_35, 0) = ((MR_Box) (libs__file_util__FileName_4));
                  MR_hl_field(MR_mktag(0), libs__file_util__V_35_35, 1) = ((MR_Box) (libs__file_util__V_36_36));
                }
                {
                  mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_35_35)));
                  return;
                }
              }
            else
              {
                MR_Word libs__file_util__InputStream_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenRes_29, (MR_Integer) 0)));
                MR_Word libs__file_util__TryResult_31;
                MR_Word libs__file_util__V_37_37;

                {
                  libs__file_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 0) = ((MR_Box) (&libs__file_util_scalar_common_4[0]));
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 1) = ((MR_Box) (libs__file_util__write_include_file_contents_3_p_0_1));
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 3) = ((MR_Box) (libs__file_util__OutputStream_9));
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 4) = ((MR_Box) (libs__file_util__InputStream_30));
                }
                {
                  mercury__exception__try_io_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_res_0, libs__file_util__V_37_37, &libs__file_util__TryResult_31);
                }
                {
                  mercury__io__close_input_3_p_0(libs__file_util__InputStream_30);
                }
                if (((MR_tag((MR_Word) libs__file_util__TryResult_31)) == (MR_mktag((MR_Integer) 2))))
                  {
                    {
                      mercury__exception__rethrow_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_res_0, libs__file_util__TryResult_31);
                      return;
                    }
                  }
                else
                  {
                    MR_Word libs__file_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__TryResult_31, (MR_Integer) 0)));

                    if ((libs__file_util__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                      }
                    else
                      {
                        MR_Word libs__file_util__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__V_50_50, (MR_Integer) 0)));

                        {
                          mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (libs__file_util__Error_32)));
                          return;
                        }
                      }
                  }
              }
          }
        else
          {
            MR_Word libs__file_util__V_20_20;

            {
              libs__file_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__FileName_4));
              MR_hl_field(MR_mktag(0), libs__file_util__V_20_20, 1) = ((MR_Box) ((MR_String) "Not a regular file"));
            }
            {
              mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_20_20)));
              return;
            }
          }
      }
  }
}

void MR_CALL 
libs__file_util__output_to_file_return_result_6_p_0(
  MR_Word libs__file_util__TypeInfo_for_T_63,
  MR_Word libs__file_util__Globals_7,
  MR_String libs__file_util__FileName_8,
  MR_Word libs__file_util__Action_9,
  MR_Word * libs__file_util__Result_10)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__Verbose_12;
    MR_Word libs__file_util__Stats_13;
    MR_Word libs__file_util__Res_14;

    {
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 47, &libs__file_util__Verbose_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 57, &libs__file_util__Stats_13);
    }
    switch (libs__file_util__Verbose_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "% Writing to file \140");
          }
          {
            mercury__io__write_string_3_p_0(libs__file_util__FileName_8);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "\'...\n");
          }
          {
            mercury__io__flush_output_2_p_0();
          }
        }
        break;
    }
    {
      mercury__io__open_output_4_p_0(libs__file_util__FileName_8, &libs__file_util__Res_14);
    }
    if (((MR_tag((MR_Word) libs__file_util__Res_14)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word libs__file_util__V_39_39;
        MR_Word libs__file_util__V_41_41;
        MR_String libs__file_util__ErrorMessage_62;

        {
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "\n");
        }
        {
          libs__file_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_41_41, 0) = ((MR_Box) (libs__file_util__FileName_8));
          MR_hl_field(MR_mktag(1), libs__file_util__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__file_util_scalar_common_2[0])));
        }
        {
          libs__file_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), libs__file_util__V_39_39, 0) = ((MR_Box) ((MR_String) "can\'t open file \140"));
          MR_hl_field(MR_mktag(1), libs__file_util__V_39_39, 1) = ((MR_Box) (libs__file_util__V_41_41));
        }
        {
          mercury__string__append_list_2_p_0(libs__file_util__V_39_39, &libs__file_util__ErrorMessage_62);
        }
        {
          libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_62);
        }
        *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word libs__file_util__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Res_14, (MR_Integer) 0)));
        MR_Word libs__file_util__OrigOutputStream_16;
        MR_Word libs__file_util__TryResult_17;
        MR_Word libs__file_util__V_18_18;

        {
          mercury__io__set_output_stream_4_p_0(libs__file_util__FileStream_15, &libs__file_util__OrigOutputStream_16);
        }
        {
          mercury__exception__try_io_4_p_0(libs__file_util__TypeInfo_for_T_63, libs__file_util__Action_9, &libs__file_util__TryResult_17);
        }
        {
          mercury__io__set_output_stream_4_p_0(libs__file_util__OrigOutputStream_16, &libs__file_util__V_18_18);
        }
        {
          mercury__io__close_output_3_p_0(libs__file_util__FileStream_15);
        }
        {
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "% done.\n");
        }
        {
          libs__file_util__maybe_report_stats_3_p_0(libs__file_util__Stats_13);
        }
        if (((MR_tag((MR_Word) libs__file_util__TryResult_17)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Word libs__file_util__Univ_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__file_util__TryResult_17, (MR_Integer) 0)));
            MR_Word libs__file_util__IncludeError_21;
            MR_Box libs__file_util__conv0_IncludeError_21;

            {
              libs__file_util__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, libs__file_util__Univ_20, &libs__file_util__conv0_IncludeError_21);
            }
            if (libs__file_util__succeeded)
              {
                libs__file_util__IncludeError_21 = ((MR_Word) libs__file_util__conv0_IncludeError_21);
                libs__file_util__succeeded = MR_TRUE;
              }
            if (libs__file_util__succeeded)
              {
                MR_String libs__file_util__IncludeFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__IncludeError_21, (MR_Integer) 0)));
                MR_String libs__file_util__Detail_23 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__IncludeError_21, (MR_Integer) 1)));
                MR_String libs__file_util__ErrorMessage_24;
                MR_String libs__file_util__V_65_65;
                MR_Word libs__file_util__V_71_71 = (MR_Word) &libs__file_util_scalar_common_3[0];
                MR_String libs__file_util__V_73_73;
                MR_String libs__file_util__V_74_74;
                MR_String libs__file_util__V_81_81;

                {
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__file_util__V_71_71, libs__file_util__Detail_23, &libs__file_util__V_65_65);
                }
                {
                  libs__file_util__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", libs__file_util__V_65_65);
                }
                {
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__file_util__V_71_71, libs__file_util__IncludeFileName_22, &libs__file_util__V_74_74);
                }
                {
                  libs__file_util__V_81_81 = mercury__string__f_43_43_2_f_0(libs__file_util__V_74_74, libs__file_util__V_73_73);
                }
                {
                  libs__file_util__ErrorMessage_24 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", libs__file_util__V_81_81);
                }
                {
                  libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "\n");
                }
                {
                  libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_24);
                }
                *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            else
              {
                mercury__exception__rethrow_1_p_0(libs__file_util__TypeInfo_for_T_63, libs__file_util__TryResult_17);
                return;
              }
          }
        else
          {
            MR_Box libs__file_util__ActionResult_19 = (MR_hl_field(MR_mktag(1), libs__file_util__TryResult_17, (MR_Integer) 0));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *libs__file_util__Result_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = libs__file_util__ActionResult_19;
            }
          }
      }
  }
}

static void MR_CALL 
libs__file_util__output_to_file_6_p_0_1(
  MR_Box libs__file_util__closure_arg,
  MR_Box * libs__file_util__wrapper_arg_1,
  MR_Box libs__file_util__wrapper_arg_2,
  MR_Box * libs__file_util__wrapper_arg_3)
{
  {
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
    MR_Integer libs__file_util__conv0_LambdaHeadVar__1_19;

    {
      libs__file_util__IntroducedFrom__pred__output_to_file__252__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 3))), &libs__file_util__conv0_LambdaHeadVar__1_19);
    }
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_LambdaHeadVar__1_19));
  }
}

void MR_CALL 
libs__file_util__output_to_file_6_p_0(
  MR_Word libs__file_util__Globals_7,
  MR_String libs__file_util__FileName_8,
  MR_Word libs__file_util__Action_9,
  MR_Word * libs__file_util__Succeeded_10)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__NewAction_12;
    MR_Word libs__file_util__Result_13;

    {
      libs__file_util__NewAction_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 0) = ((MR_Box) (&libs__file_util_scalar_common_1[0]));
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 1) = ((MR_Box) (libs__file_util__output_to_file_6_p_0_1));
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 3) = ((MR_Box) (libs__file_util__Action_9));
    }
    {
      libs__file_util__output_to_file_return_result_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__file_util__Globals_7, libs__file_util__FileName_8, libs__file_util__NewAction_12, &libs__file_util__Result_13);
    }
    if ((libs__file_util__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *libs__file_util__Succeeded_10 = (MR_Integer) 0;
    else
      *libs__file_util__Succeeded_10 = (MR_Integer) 1;
  }
}

void MR_CALL 
libs__file_util__search_for_file_mod_time_5_p_0(
  MR_Word libs__file_util__Dirs_6,
  MR_String libs__file_util__FileName_7,
  MR_Word * libs__file_util__Result_8)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__MaybeTime_10;

    {
      libs__file_util__do_search_for_file__ho1_6_p_0(libs__file_util__Dirs_6, libs__file_util__FileName_7, &libs__file_util__MaybeTime_10);
    }
    if ((libs__file_util__MaybeTime_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String libs__file_util__Msg_12;
        MR_String libs__file_util__V_18_18;
        MR_String libs__file_util__V_19_19;
        MR_String libs__file_util__V_21_21;

        {
          libs__file_util__V_21_21 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_6);
        }
        {
          libs__file_util__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_21_21);
        }
        {
          libs__file_util__V_18_18 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_7, libs__file_util__V_19_19);
        }
        {
          libs__file_util__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_18_18);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *libs__file_util__Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_12));
        }
      }
    else
      {
        MR_Word libs__file_util__Time_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeTime_10, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *libs__file_util__Result_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Time_11));
        }
      }
  }
}

void MR_CALL 
libs__file_util__search_for_file_returning_dir_6_p_0(
  MR_Word libs__file_util__MaybeOpen_7,
  MR_Word libs__file_util__Dirs_8,
  MR_String libs__file_util__FileName_9,
  MR_Word * libs__file_util__Result_10)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__MaybeDir_12;

    {
      libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__MaybeDir_12);
    }
    if ((libs__file_util__MaybeDir_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String libs__file_util__Msg_14;
        MR_String libs__file_util__V_20_20;
        MR_String libs__file_util__V_21_21;
        MR_String libs__file_util__V_23_23;

        {
          libs__file_util__V_23_23 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_8);
        }
        {
          libs__file_util__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_23_23);
        }
        {
          libs__file_util__V_20_20 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_9, libs__file_util__V_21_21);
        }
        {
          libs__file_util__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_20_20);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *libs__file_util__Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_14));
        }
      }
    else
      {
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeDir_12, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *libs__file_util__Result_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_13));
        }
      }
  }
}

void MR_CALL 
libs__file_util__search_for_file_6_p_0(
  MR_Word libs__file_util__MaybeOpen_7,
  MR_Word libs__file_util__Dirs_8,
  MR_String libs__file_util__FileName_9,
  MR_Word * libs__file_util__Result_10)
{
  {
    MR_bool libs__file_util__succeeded;
    MR_Word libs__file_util__Result0_12;

    {
      libs__file_util__search_for_file_returning_dir_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__Result0_12);
    }
    if (((MR_tag((MR_Word) libs__file_util__Result0_12)) == (MR_mktag((MR_Integer) 1))))
      *libs__file_util__Result_10 = libs__file_util__Result0_12;
    else
      {
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_12, (MR_Integer) 0)));
        MR_String libs__file_util__PathName_14;
        MR_String libs__file_util__V_19_19;

        {
          mercury__dir__this_directory_1_p_0(&libs__file_util__V_19_19);
        }
        libs__file_util__succeeded = (strcmp(libs__file_util__Dir_13, libs__file_util__V_19_19) == 0);
        if (libs__file_util__succeeded)
          libs__file_util__PathName_14 = libs__file_util__FileName_9;
        else
          {
            libs__file_util__PathName_14 = mercury__dir__make_path_name_2_f_0(libs__file_util__Dir_13, libs__file_util__FileName_9);
          }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *libs__file_util__Result_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__PathName_14));
        }
      }
  }
}

void mercury__libs__file_util__init(void)
{
}

void mercury__libs__file_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_dir_name_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_file_name_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_include_file_error_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_maybe_open_file_0);
	MR_register_type_ctor_info(&libs__file_util__libs__file_util__type_ctor_info_open_file_pred_1);
}

void mercury__libs__file_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module libs.file_util. */
