/*
** Automatically generated from `file_util.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.options.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 88 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 91 "libs.file_util.c"
static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_include_file_error_0_0[2];

#line 94 "libs.file_util.c"
static const MR_DuFunctorDesc libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0;

#line 97 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0[1];

#line 100 "libs.file_util.c"
static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0[1];

#line 103 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_include_file_error_0[1];

#line 106 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_include_file_error_0[1];

#line 109 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0;

#line 112 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1;

#line 115 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2];

#line 118 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2];

#line 121 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2];

#line 124 "libs.file_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0;

#line 127 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

#line 130 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
#line 133 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 135 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 138 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
#line 141 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 143 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 145 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 148 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
#line 151 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 153 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 156 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
#line 159 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 161 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 163 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 166 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0_10001(
#line 169 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 171 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 174 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0_10001(
#line 177 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 179 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 181 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 184 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
#line 187 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 189 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2);

#line 192 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
#line 195 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 197 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 199 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 202 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
#line 205 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 207 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 209 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3);

#line 212 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
#line 215 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 217 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_2,
#line 219 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3,
#line 221 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_4);

#line 220 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(
#line 220 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 220 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 220 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 220 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4);

#line 220 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho1_6_p_0(
#line 220 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 220 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 220 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4);

#line 252 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__252__1_4_p_0(
#line 252 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 252 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_19);

#line 147 "file_util.m"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0(
#line 147 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3);

#line 147 "file_util.m"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0(
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2);

#line 350 "file_util.m"
static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
#line 350 "file_util.m"
  MR_Word libs__file_util__OutputStream_6,
#line 350 "file_util.m"
  MR_Word libs__file_util__InputStream_7,
#line 350 "file_util.m"
  MR_Word * libs__file_util__Res_8);

#line 213 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 213 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 213 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 213 "file_util.m"
  MR_Word * libs__file_util__Result_8);

#line 180 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 180 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 180 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 180 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 180 "file_util.m"
  MR_Word * libs__file_util__Result_10);

#line 439 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
#line 439 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 439 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1);

#line 425 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
#line 425 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 425 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1);

#line 333 "file_util.m"
static void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0_1(
#line 333 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 333 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 333 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 333 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_3);

#line 252 "file_util.m"
static void MR_CALL 
libs__file_util__output_to_file_6_p_0_1(
#line 252 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 252 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 252 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 252 "file_util.m"
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



#line 438 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct2 libs__file_util____vpti_pred_2__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 448 "libs.file_util.c"
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

#line 465 "libs.file_util.c"
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

#line 482 "libs.file_util.c"
static const MR_PseudoTypeInfo libs__file_util__libs__file_util__field_types_include_file_error_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 488 "libs.file_util.c"
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

#line 503 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0
};

#line 508 "libs.file_util.c"
static const MR_DuPtagLayout libs__file_util__libs__file_util__du_ptag_ordered_include_file_error_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    libs__file_util__libs__file_util__du_stag_ordered_include_file_error_0_0
  }
};

#line 517 "libs.file_util.c"
static const MR_DuFunctorDescPtr libs__file_util__libs__file_util__du_name_ordered_include_file_error_0[1] = {
  &libs__file_util__libs__file_util__du_functor_desc_include_file_error_0_0
};

#line 522 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_include_file_error_0[1] = {
  (MR_Integer) 0
};

#line 527 "libs.file_util.c"
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

#line 544 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0 = {
  (MR_String) "open_file",
  (MR_Integer) 0
};

#line 550 "libs.file_util.c"
static const MR_EnumFunctorDesc libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1 = {
  (MR_String) "do_not_open_file",
  (MR_Integer) 1
};

#line 556 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_value_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1
};

#line 562 "libs.file_util.c"
static const MR_EnumFunctorDescPtr libs__file_util__libs__file_util__enum_name_ordered_maybe_open_file_0[2] = {
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_1,
  &libs__file_util__libs__file_util__enum_functor_desc_maybe_open_file_0_0
};

#line 568 "libs.file_util.c"
static const MR_Integer libs__file_util__libs__file_util__functor_number_map_maybe_open_file_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 574 "libs.file_util.c"
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

#line 591 "libs.file_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_error_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 600 "libs.file_util.c"
static const MR_VA_PseudoTypeInfo_Struct3 libs__file_util____vpti_pred_3__pseudo_maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &libs__file_util__maybe__pti_maybe_error_2__pseudo_1__plain_builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

#line 611 "libs.file_util.c"
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

#line 628 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0_10001(
#line 631 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 633 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 635 "libs.file_util.c"
{
#line 637 "libs.file_util.c"
  {
#line 639 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 642 "libs.file_util.c"
    {
#line 644 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____dir_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 647 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 649 "libs.file_util.c"
  }
#line 651 "libs.file_util.c"
}

#line 654 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____dir_name_0_0_10001(
#line 657 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 659 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 661 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 663 "libs.file_util.c"
{
#line 665 "libs.file_util.c"
  {
#line 667 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 670 "libs.file_util.c"
    {
#line 672 "libs.file_util.c"
      libs__file_util____Compare____dir_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 675 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 677 "libs.file_util.c"
  }
#line 679 "libs.file_util.c"
}

#line 682 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0_10001(
#line 685 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 687 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 689 "libs.file_util.c"
{
#line 691 "libs.file_util.c"
  {
#line 693 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 696 "libs.file_util.c"
    {
#line 698 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____file_name_0_0(((MR_String) libs__file_util__wrapper_arg_1), ((MR_String) libs__file_util__wrapper_arg_2));
    }
#line 701 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 703 "libs.file_util.c"
  }
#line 705 "libs.file_util.c"
}

#line 708 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____file_name_0_0_10001(
#line 711 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 713 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 715 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 717 "libs.file_util.c"
{
#line 719 "libs.file_util.c"
  {
#line 721 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 724 "libs.file_util.c"
    {
#line 726 "libs.file_util.c"
      libs__file_util____Compare____file_name_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_String) libs__file_util__wrapper_arg_2), ((MR_String) libs__file_util__wrapper_arg_3));
    }
#line 729 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 731 "libs.file_util.c"
  }
#line 733 "libs.file_util.c"
}

#line 736 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0_10001(
#line 739 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 741 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 743 "libs.file_util.c"
{
#line 745 "libs.file_util.c"
  {
#line 747 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 750 "libs.file_util.c"
    {
#line 752 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____include_file_error_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
#line 755 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 757 "libs.file_util.c"
  }
#line 759 "libs.file_util.c"
}

#line 762 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0_10001(
#line 765 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 767 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 769 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 771 "libs.file_util.c"
{
#line 773 "libs.file_util.c"
  {
#line 775 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 778 "libs.file_util.c"
    {
#line 780 "libs.file_util.c"
      libs__file_util____Compare____include_file_error_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 783 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 785 "libs.file_util.c"
  }
#line 787 "libs.file_util.c"
}

#line 790 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0_10001(
#line 793 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 795 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2)
#line 797 "libs.file_util.c"
{
#line 799 "libs.file_util.c"
  {
#line 801 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 804 "libs.file_util.c"
    {
#line 806 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____maybe_open_file_0_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2));
    }
#line 809 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 811 "libs.file_util.c"
  }
#line 813 "libs.file_util.c"
}

#line 816 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0_10001(
#line 819 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 821 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 823 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 825 "libs.file_util.c"
{
#line 827 "libs.file_util.c"
  {
#line 829 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 832 "libs.file_util.c"
    {
#line 834 "libs.file_util.c"
      libs__file_util____Compare____maybe_open_file_0_0(&libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 837 "libs.file_util.c"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 839 "libs.file_util.c"
  }
#line 841 "libs.file_util.c"
}

#line 844 "libs.file_util.c"
static MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0_10001(
#line 847 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 849 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_2,
#line 851 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3)
#line 853 "libs.file_util.c"
{
#line 855 "libs.file_util.c"
  {
#line 857 "libs.file_util.c"
    MR_bool libs__file_util__succeeded;

#line 860 "libs.file_util.c"
    {
#line 862 "libs.file_util.c"
      libs__file_util__succeeded = libs__file_util____Unify____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), ((MR_Word) libs__file_util__wrapper_arg_2), ((MR_Word) libs__file_util__wrapper_arg_3));
    }
#line 865 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 867 "libs.file_util.c"
  }
#line 869 "libs.file_util.c"
}

#line 872 "libs.file_util.c"
static void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0_10001(
#line 875 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_1,
#line 877 "libs.file_util.c"
  MR_Box * libs__file_util__wrapper_arg_2,
#line 879 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_3,
#line 881 "libs.file_util.c"
  MR_Box libs__file_util__wrapper_arg_4)
#line 883 "libs.file_util.c"
{
#line 885 "libs.file_util.c"
  {
#line 887 "libs.file_util.c"
    MR_Word libs__file_util__conv0_HeadVar__1_1;

#line 890 "libs.file_util.c"
    {
#line 892 "libs.file_util.c"
      libs__file_util____Compare____open_file_pred_1_0(((MR_Word) libs__file_util__wrapper_arg_1), &libs__file_util__conv0_HeadVar__1_1, ((MR_Word) libs__file_util__wrapper_arg_3), ((MR_Word) libs__file_util__wrapper_arg_4));
    }
#line 895 "libs.file_util.c"
    *libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__1_1));
#line 897 "libs.file_util.c"
  }
#line 899 "libs.file_util.c"
}

#line 220 "file_util.m"
static void MR_CALL 
libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(
#line 220 "file_util.m"
  MR_Word libs__file_util__V_26_26,
#line 220 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 220 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 220 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 220 "file_util.m"
{
#line 225 "file_util.m"
  while (MR_TRUE)
#line 225 "file_util.m"
    {
#line 225 "file_util.m"
      /* tailcall optimized into a loop */
#line 225 "file_util.m"
      {
#line 225 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 225 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 225 "file_util.m"
        else
#line 226 "file_util.m"
          {
#line 226 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 226 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 226 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 227 "file_util.m"
            {
#line 227 "file_util.m"
              libs__file_util__check_file_return_dir_6_p_0(libs__file_util__V_26_26, libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 231 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 233 "file_util.m"
              {
#line 233 "file_util.m"
                /* direct tailcall eliminated */
#line 233 "file_util.m"
                {
#line 233 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 233 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 233 "file_util.m"
                }
#line 233 "file_util.m"
                continue;
#line 233 "file_util.m"
              }
#line 231 "file_util.m"
            else
#line 229 "file_util.m"
              {
#line 229 "file_util.m"
                MR_String libs__file_util__TimeT_19 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 230 "file_util.m"
                {
#line 230 "file_util.m"
                  MR_Word base;
#line 230 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 230 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 230 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 230 "file_util.m"
                }
#line 229 "file_util.m"
              }
#line 226 "file_util.m"
          }
#line 225 "file_util.m"
      }
#line 225 "file_util.m"
      break;
#line 225 "file_util.m"
    }
#line 220 "file_util.m"
}

#line 220 "file_util.m"
static void MR_CALL 
libs__file_util__do_search_for_file__ho1_6_p_0(
#line 220 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 220 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3,
#line 220 "file_util.m"
  MR_Word * libs__file_util__HeadVar__4_4)
#line 220 "file_util.m"
{
#line 225 "file_util.m"
  while (MR_TRUE)
#line 225 "file_util.m"
    {
#line 225 "file_util.m"
      /* tailcall optimized into a loop */
#line 225 "file_util.m"
      {
#line 225 "file_util.m"
        MR_bool libs__file_util__succeeded;

#line 225 "file_util.m"
        if ((libs__file_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "file_util.m"
          *libs__file_util__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 225 "file_util.m"
        else
#line 226 "file_util.m"
          {
#line 226 "file_util.m"
            MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 226 "file_util.m"
            MR_Word libs__file_util__Dirs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 226 "file_util.m"
            MR_Word libs__file_util__Result0_18;

#line 227 "file_util.m"
            {
#line 227 "file_util.m"
              libs__file_util__check_file_mod_time_5_p_0(libs__file_util__Dir_13, libs__file_util__HeadVar__3_3, &libs__file_util__Result0_18);
            }
#line 231 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__Result0_18)) == (MR_mktag((MR_Integer) 1))))
#line 233 "file_util.m"
              {
#line 233 "file_util.m"
                /* direct tailcall eliminated */
#line 233 "file_util.m"
                {
#line 233 "file_util.m"
                  MR_Word libs__file_util__HeadVar__2__tmp_copy_2 = libs__file_util__Dirs_14;

#line 233 "file_util.m"
                  libs__file_util__HeadVar__2_2 = libs__file_util__HeadVar__2__tmp_copy_2;
#line 233 "file_util.m"
                }
#line 233 "file_util.m"
                continue;
#line 233 "file_util.m"
              }
#line 231 "file_util.m"
            else
#line 229 "file_util.m"
              {
#line 229 "file_util.m"
                MR_Word libs__file_util__TimeT_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_18, (MR_Integer) 0)));

#line 230 "file_util.m"
                {
#line 230 "file_util.m"
                  MR_Word base;
#line 230 "file_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 230 "file_util.m"
                  *libs__file_util__HeadVar__4_4 = base;
#line 230 "file_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__TimeT_19));
#line 230 "file_util.m"
                }
#line 229 "file_util.m"
              }
#line 226 "file_util.m"
          }
#line 225 "file_util.m"
      }
#line 225 "file_util.m"
      break;
#line 225 "file_util.m"
    }
#line 220 "file_util.m"
}

#line 252 "file_util.m"
static void MR_CALL 
libs__file_util__IntroducedFrom__pred__output_to_file__252__1_4_p_0(
#line 252 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 252 "file_util.m"
  MR_Integer * libs__file_util__HeadVar__2_19)
#line 252 "file_util.m"
{
#line 252 "file_util.m"
  {
#line 252 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 252 "file_util.m"
    void MR_CALL (* libs__file_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), libs__file_util__Action_9, (MR_Integer) 1)));
#line 252 "file_util.m"
    MR_Box libs__file_util__conv1_HeadVar__4_21;

#line 252 "file_util.m"
    {
#line 252 "file_util.m"
      libs__file_util__func_0(((MR_Box) libs__file_util__Action_9), ((MR_Box) ((MR_Integer) 0)), &libs__file_util__conv1_HeadVar__4_21);
    }
#line 252 "file_util.m"
    *libs__file_util__HeadVar__2_19 = (MR_Integer) 0;
#line 252 "file_util.m"
  }
#line 252 "file_util.m"
}

#line 35 "file_util.m"
void MR_CALL 
libs__file_util____Compare____open_file_pred_1_0(
#line 35 "file_util.m"
  MR_Word libs__file_util__TypeInfo_for_FileInfo_6,
#line 35 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3)
#line 35 "file_util.m"
{
#line 35 "file_util.m"
  {
#line 35 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

#line 35 "file_util.m"
    {
#line 35 "file_util.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(libs__file_util__HeadVar__1_1, (MR_Word) libs__file_util__Cast_HeadVar1_4, (MR_Word) libs__file_util__Cast_HeadVar2_5);
#line 35 "file_util.m"
      return;
    }
#line 35 "file_util.m"
  }
#line 35 "file_util.m"
}

#line 35 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____open_file_pred_1_0(
#line 35 "file_util.m"
  MR_Word libs__file_util__TypeInfo_for_FileInfo_5,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 35 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2)
#line 35 "file_util.m"
{
#line 35 "file_util.m"
  {
#line 35 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
#line 35 "file_util.m"
    MR_Word libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

#line 35 "file_util.m"
    {
#line 35 "file_util.m"
      return libs__file_util__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) libs__file_util__Cast_HeadVar1_3, (MR_Word) libs__file_util__Cast_HeadVar2_4);
    }
#line 35 "file_util.m"
    return libs__file_util__succeeded;
#line 35 "file_util.m"
  }
#line 35 "file_util.m"
}

#line 38 "file_util.m"
void MR_CALL 
libs__file_util____Compare____maybe_open_file_0_0(
#line 38 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3)
#line 38 "file_util.m"
{
#line 38 "file_util.m"
  {
#line 38 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 38 "file_util.m"
    MR_Integer libs__file_util__Cast_HeadVar1_4 = (MR_Integer) libs__file_util__HeadVar__2_2;
#line 38 "file_util.m"
    MR_Integer libs__file_util__Cast_HeadVar2_5 = (MR_Integer) libs__file_util__HeadVar__3_3;

#line 38 "file_util.m"
    {
#line 38 "file_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
#line 38 "file_util.m"
      return;
    }
#line 38 "file_util.m"
  }
#line 38 "file_util.m"
}

#line 38 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____maybe_open_file_0_0(
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_1,
#line 38 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2)
#line 38 "file_util.m"
{
#line 1227 "libs.file_util.c"
  {
#line 1229 "libs.file_util.c"
    MR_bool libs__file_util__succeeded = (libs__file_util__HeadVar__2_1 == libs__file_util__HeadVar__2_2);

#line 1232 "libs.file_util.c"
    return libs__file_util__succeeded;
#line 1234 "libs.file_util.c"
  }
#line 38 "file_util.m"
}

#line 147 "file_util.m"
static void MR_CALL 
libs__file_util____Compare____include_file_error_0_0(
#line 147 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2,
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__3_3)
#line 147 "file_util.m"
{
#line 147 "file_util.m"
  {
#line 147 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 147 "file_util.m"
    MR_Integer libs__file_util__CastX_9 = (MR_Integer) libs__file_util__HeadVar__2_2;
#line 147 "file_util.m"
    MR_Integer libs__file_util__CastY_10 = (MR_Integer) libs__file_util__HeadVar__3_3;

#line 147 "file_util.m"
    libs__file_util__succeeded = (libs__file_util__CastX_9 == libs__file_util__CastY_10);
#line 147 "file_util.m"
    if (libs__file_util__succeeded)
#line 1263 "libs.file_util.c"
      *libs__file_util__HeadVar__1_1 = (MR_Integer) 0;
#line 147 "file_util.m"
    else
#line 147 "file_util.m"
      {
#line 147 "file_util.m"
        MR_String libs__file_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "file_util.m"
        MR_String libs__file_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "file_util.m"
        MR_String libs__file_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__3_3, (MR_Integer) 0)));
#line 147 "file_util.m"
        MR_String libs__file_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__3_3, (MR_Integer) 1)));
#line 147 "file_util.m"
        MR_Word libs__file_util__V_8_8;

#line 147 "file_util.m"
        {
#line 147 "file_util.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&libs__file_util__V_8_8, libs__file_util__V_4_4, libs__file_util__V_6_6);
        }
#line 1285 "libs.file_util.c"
        libs__file_util__succeeded = (libs__file_util__V_8_8 == (MR_Integer) 0);
#line 147 "file_util.m"
        libs__file_util__succeeded = !(libs__file_util__succeeded);
#line 147 "file_util.m"
        if (libs__file_util__succeeded)
#line 147 "file_util.m"
          *libs__file_util__HeadVar__1_1 = libs__file_util__V_8_8;
#line 147 "file_util.m"
        else
#line 147 "file_util.m"
          {
#line 147 "file_util.m"
            mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__V_5_5, libs__file_util__V_7_7);
#line 147 "file_util.m"
            return;
          }
#line 147 "file_util.m"
      }
#line 147 "file_util.m"
  }
#line 147 "file_util.m"
}

#line 147 "file_util.m"
static MR_bool MR_CALL 
libs__file_util____Unify____include_file_error_0_0(
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 147 "file_util.m"
  MR_Word libs__file_util__HeadVar__2_2)
#line 147 "file_util.m"
{
#line 147 "file_util.m"
  {
#line 147 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 147 "file_util.m"
    MR_Integer libs__file_util__CastX_7 = (MR_Integer) libs__file_util__HeadVar__1_1;
#line 147 "file_util.m"
    MR_Integer libs__file_util__CastY_8 = (MR_Integer) libs__file_util__HeadVar__2_2;

#line 147 "file_util.m"
    libs__file_util__succeeded = (libs__file_util__CastX_7 == libs__file_util__CastY_8);
#line 147 "file_util.m"
    if (libs__file_util__succeeded)
#line 147 "file_util.m"
      libs__file_util__succeeded = MR_TRUE;
#line 147 "file_util.m"
    else
#line 147 "file_util.m"
      {
#line 147 "file_util.m"
        MR_String libs__file_util__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "file_util.m"
        MR_String libs__file_util__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__1_1, (MR_Integer) 1)));
#line 147 "file_util.m"
        MR_String libs__file_util__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 0)));
#line 147 "file_util.m"
        MR_String libs__file_util__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__HeadVar__2_2, (MR_Integer) 1)));

#line 1346 "libs.file_util.c"
        libs__file_util__succeeded = (strcmp(libs__file_util__V_3_3, libs__file_util__V_5_5) == 0);
#line 147 "file_util.m"
        if (libs__file_util__succeeded)
#line 1350 "libs.file_util.c"
          libs__file_util__succeeded = (strcmp(libs__file_util__V_4_4, libs__file_util__V_6_6) == 0);
#line 147 "file_util.m"
      }
#line 147 "file_util.m"
    return libs__file_util__succeeded;
#line 147 "file_util.m"
  }
#line 147 "file_util.m"
}

#line 29 "file_util.m"
void MR_CALL 
libs__file_util____Compare____file_name_0_0(
#line 29 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2,
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3)
#line 29 "file_util.m"
{
#line 29 "file_util.m"
  {
#line 29 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

#line 29 "file_util.m"
    {
#line 29 "file_util.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
#line 29 "file_util.m"
      return;
    }
#line 29 "file_util.m"
  }
#line 29 "file_util.m"
}

#line 29 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____file_name_0_0(
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__1_1,
#line 29 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2)
#line 29 "file_util.m"
{
#line 29 "file_util.m"
  {
#line 29 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
#line 29 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

#line 29 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Cast_HeadVar1_3, libs__file_util__Cast_HeadVar2_4) == 0);
#line 29 "file_util.m"
    return libs__file_util__succeeded;
#line 29 "file_util.m"
  }
#line 29 "file_util.m"
}

#line 30 "file_util.m"
void MR_CALL 
libs__file_util____Compare____dir_name_0_0(
#line 30 "file_util.m"
  MR_Word * libs__file_util__HeadVar__1_1,
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2,
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__3_3)
#line 30 "file_util.m"
{
#line 30 "file_util.m"
  {
#line 30 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_4 = libs__file_util__HeadVar__2_2;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_5 = libs__file_util__HeadVar__3_3;

#line 30 "file_util.m"
    {
#line 30 "file_util.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(libs__file_util__HeadVar__1_1, libs__file_util__Cast_HeadVar1_4, libs__file_util__Cast_HeadVar2_5);
#line 30 "file_util.m"
      return;
    }
#line 30 "file_util.m"
  }
#line 30 "file_util.m"
}

#line 30 "file_util.m"
MR_bool MR_CALL 
libs__file_util____Unify____dir_name_0_0(
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__1_1,
#line 30 "file_util.m"
  MR_String libs__file_util__HeadVar__2_2)
#line 30 "file_util.m"
{
#line 30 "file_util.m"
  {
#line 30 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar1_3 = libs__file_util__HeadVar__1_1;
#line 30 "file_util.m"
    MR_String libs__file_util__Cast_HeadVar2_4 = libs__file_util__HeadVar__2_2;

#line 30 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Cast_HeadVar1_3, libs__file_util__Cast_HeadVar2_4) == 0);
#line 30 "file_util.m"
    return libs__file_util__succeeded;
#line 30 "file_util.m"
  }
#line 30 "file_util.m"
}

#line 350 "file_util.m"
static void MR_CALL 
libs__file_util__copy_stream_5_p_0(
#line 350 "file_util.m"
  MR_Word libs__file_util__OutputStream_6,
#line 350 "file_util.m"
  MR_Word libs__file_util__InputStream_7,
#line 350 "file_util.m"
  MR_Word * libs__file_util__Res_8)
#line 350 "file_util.m"
{
#line 353 "file_util.m"
  {
#line 353 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 353 "file_util.m"
    MR_Word libs__file_util__ReadRes_10;

#line 354 "file_util.m"
    {
#line 354 "file_util.m"
      mercury__io__read_file_as_string_4_p_0(libs__file_util__InputStream_7, &libs__file_util__ReadRes_10);
    }
#line 359 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__ReadRes_10)) == (MR_mktag((MR_Integer) 1))))
#line 360 "file_util.m"
      {
#line 360 "file_util.m"
        MR_Word libs__file_util__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__ReadRes_10, (MR_Integer) 1)));
#line 360 "file_util.m"
        MR_String libs__file_util___Partial_12 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__ReadRes_10, (MR_Integer) 0)));

#line 361 "file_util.m"
        {
#line 361 "file_util.m"
          MR_Word base;
#line 361 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 361 "file_util.m"
          *libs__file_util__Res_8 = base;
#line 361 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Error_13));
#line 361 "file_util.m"
        }
#line 360 "file_util.m"
      }
#line 359 "file_util.m"
    else
#line 356 "file_util.m"
      {
#line 356 "file_util.m"
        MR_String libs__file_util__InputContents_11 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__ReadRes_10, (MR_Integer) 0)));

#line 357 "file_util.m"
        {
#line 357 "file_util.m"
          mercury__io__write_string_4_p_0(libs__file_util__OutputStream_6, libs__file_util__InputContents_11);
        }
#line 358 "file_util.m"
        *libs__file_util__Res_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 356 "file_util.m"
      }
#line 353 "file_util.m"
  }
#line 350 "file_util.m"
}

#line 213 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_mod_time_5_p_0(
#line 213 "file_util.m"
  MR_String libs__file_util__Dir_6,
#line 213 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 213 "file_util.m"
  MR_Word * libs__file_util__Result_8)
#line 213 "file_util.m"
{
#line 216 "file_util.m"
  {
#line 216 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 216 "file_util.m"
    MR_String libs__file_util__PathName_10;
#line 240 "file_util.m"
    MR_String libs__file_util__V_23_23;

#line 240 "file_util.m"
    {
#line 240 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_23_23);
    }
#line 240 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_6, libs__file_util__V_23_23) == 0);
#line 242 "file_util.m"
    if (libs__file_util__succeeded)
#line 241 "file_util.m"
      libs__file_util__PathName_10 = libs__file_util__FileName_7;
#line 242 "file_util.m"
    else
#line 245 "file_util.m"
      {
#line 245 "file_util.m"
        MR_String libs__file_util__Sep_17;
#line 245 "file_util.m"
        MR_Char libs__file_util__V_18_18;
#line 245 "file_util.m"
        MR_Word libs__file_util__V_19_19;
#line 245 "file_util.m"
        MR_Word libs__file_util__V_20_20;
#line 245 "file_util.m"
        MR_Word libs__file_util__V_21_21;

#line 245 "file_util.m"
        {
#line 245 "file_util.m"
          libs__file_util__V_18_18 = mercury__dir__directory_separator_0_f_0();
        }
#line 245 "file_util.m"
        {
#line 245 "file_util.m"
          libs__file_util__Sep_17 = mercury__string__from_char_1_f_0(libs__file_util__V_18_18);
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 0) = ((MR_Box) (libs__file_util__FileName_7));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "file_util.m"
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__Sep_17));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_20_20, 1) = ((MR_Box) (libs__file_util__V_21_21));
#line 246 "file_util.m"
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 0) = ((MR_Box) (libs__file_util__Dir_6));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_19_19, 1) = ((MR_Box) (libs__file_util__V_20_20));
#line 246 "file_util.m"
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__PathName_10 = mercury__string__append_list_1_f_0(libs__file_util__V_19_19);
        }
#line 245 "file_util.m"
      }
#line 218 "file_util.m"
    {
#line 218 "file_util.m"
      mercury__io__file_modification_time_4_p_0(libs__file_util__PathName_10, libs__file_util__Result_8);
#line 218 "file_util.m"
      return;
    }
#line 216 "file_util.m"
  }
#line 213 "file_util.m"
}

#line 180 "file_util.m"
static void MR_CALL 
libs__file_util__check_file_return_dir_6_p_0(
#line 180 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 180 "file_util.m"
  MR_String libs__file_util__Dir_8,
#line 180 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 180 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 180 "file_util.m"
{
#line 183 "file_util.m"
  {
#line 183 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 183 "file_util.m"
    MR_String libs__file_util__PathName_12;
#line 183 "file_util.m"
    MR_Word libs__file_util__OpenResult_13;
#line 240 "file_util.m"
    MR_String libs__file_util__V_31_31;

#line 240 "file_util.m"
    {
#line 240 "file_util.m"
      mercury__dir__this_directory_1_p_0(&libs__file_util__V_31_31);
    }
#line 240 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__Dir_8, libs__file_util__V_31_31) == 0);
#line 242 "file_util.m"
    if (libs__file_util__succeeded)
#line 241 "file_util.m"
      libs__file_util__PathName_12 = libs__file_util__FileName_9;
#line 242 "file_util.m"
    else
#line 245 "file_util.m"
      {
#line 245 "file_util.m"
        MR_String libs__file_util__Sep_25;
#line 245 "file_util.m"
        MR_Char libs__file_util__V_26_26;
#line 245 "file_util.m"
        MR_Word libs__file_util__V_27_27;
#line 245 "file_util.m"
        MR_Word libs__file_util__V_28_28;
#line 245 "file_util.m"
        MR_Word libs__file_util__V_29_29;

#line 245 "file_util.m"
        {
#line 245 "file_util.m"
          libs__file_util__V_26_26 = mercury__dir__directory_separator_0_f_0();
        }
#line 245 "file_util.m"
        {
#line 245 "file_util.m"
          libs__file_util__Sep_25 = mercury__string__from_char_1_f_0(libs__file_util__V_26_26);
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 0) = ((MR_Box) (libs__file_util__FileName_9));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_29_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "file_util.m"
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 0) = ((MR_Box) (libs__file_util__Sep_25));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_28_28, 1) = ((MR_Box) (libs__file_util__V_29_29));
#line 246 "file_util.m"
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 246 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_27_27, 1) = ((MR_Box) (libs__file_util__V_28_28));
#line 246 "file_util.m"
        }
#line 246 "file_util.m"
        {
#line 246 "file_util.m"
          libs__file_util__PathName_12 = mercury__string__append_list_1_f_0(libs__file_util__V_27_27);
        }
#line 245 "file_util.m"
      }
#line 185 "file_util.m"
    {
#line 185 "file_util.m"
      mercury__io__open_input_4_p_0(libs__file_util__PathName_12, &libs__file_util__OpenResult_13);
    }
#line 196 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__OpenResult_13)) == (MR_mktag((MR_Integer) 1))))
#line 198 "file_util.m"
      *libs__file_util__Result_10 = (MR_Word) libs__file_util__OpenResult_13;
#line 196 "file_util.m"
    else
#line 187 "file_util.m"
      {
#line 187 "file_util.m"
        MR_Word libs__file_util__Stream_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenResult_13, (MR_Integer) 0)));

#line 191 "file_util.m"
#line 191 "file_util.m"
        switch (libs__file_util__MaybeOpen_7) {
#line 191 "file_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 191 "file_util.m"
          case (MR_Integer) 1:
#line 193 "file_util.m"
            {
#line 193 "file_util.m"
              mercury__io__close_input_3_p_0(libs__file_util__Stream_14);
            }
#line 191 "file_util.m"
            break;
#line 191 "file_util.m"
          case (MR_Integer) 0:
#line 190 "file_util.m"
            {
#line 190 "file_util.m"
              MR_Word libs__file_util__V_15_15;

#line 190 "file_util.m"
              {
#line 190 "file_util.m"
                mercury__io__set_input_stream_4_p_0(libs__file_util__Stream_14, &libs__file_util__V_15_15);
              }
#line 190 "file_util.m"
            }
#line 191 "file_util.m"
            break;
#line 191 "file_util.m"
        }
#line 195 "file_util.m"
        {
#line 195 "file_util.m"
          MR_Word base;
#line 195 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 195 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 195 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_8));
#line 195 "file_util.m"
        }
#line 187 "file_util.m"
      }
#line 183 "file_util.m"
  }
#line 180 "file_util.m"
}

#line 439 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_dir_command_3_f_0_1(
#line 439 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 439 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1)
#line 439 "file_util.m"
{
#line 439 "file_util.m"
  {
#line 439 "file_util.m"
    MR_Box libs__file_util__wrapper_arg_2;
#line 439 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 439 "file_util.m"
    MR_String libs__file_util__conv0_HeadVar__2_2;

#line 439 "file_util.m"
    {
#line 439 "file_util.m"
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
#line 439 "file_util.m"
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
#line 439 "file_util.m"
    return libs__file_util__wrapper_arg_2;
#line 439 "file_util.m"
  }
#line 439 "file_util.m"
}

#line 132 "file_util.m"
MR_String MR_CALL 
libs__file_util__make_install_dir_command_3_f_0(
#line 132 "file_util.m"
  MR_Word libs__file_util__Globals_5,
#line 132 "file_util.m"
  MR_String libs__file_util__SourceDirName_6,
#line 132 "file_util.m"
  MR_String libs__file_util__InstallDir_7)
#line 132 "file_util.m"
{
#line 428 "file_util.m"
  {
#line 428 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 428 "file_util.m"
    MR_String libs__file_util__Command_8;
#line 428 "file_util.m"
    MR_Word libs__file_util__TypeCtorInfo_20_20;
#line 428 "file_util.m"
    MR_Word libs__file_util__FileInstallCmd_9;
#line 428 "file_util.m"
    MR_String libs__file_util__InstallCmd_10;
#line 428 "file_util.m"
    MR_String libs__file_util__InstallCmdDirOpt_11;
#line 428 "file_util.m"
    MR_Word libs__file_util__V_13_13;
#line 428 "file_util.m"
    MR_Word libs__file_util__V_15_15;
#line 428 "file_util.m"
    MR_Word libs__file_util__V_16_16;
#line 428 "file_util.m"
    MR_Word libs__file_util__V_17_17;
#line 428 "file_util.m"
    MR_Word libs__file_util__V_18_18;

#line 429 "file_util.m"
    {
#line 429 "file_util.m"
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
#line 432 "file_util.m"
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 433 "file_util.m"
      {
#line 434 "file_util.m"
        libs__file_util__InstallCmd_10 = (MR_String) "cp";
#line 437 "file_util.m"
        libs__file_util__InstallCmdDirOpt_11 = (MR_String) "-R";
#line 433 "file_util.m"
      }
#line 432 "file_util.m"
    else
#line 431 "file_util.m"
      {
#line 431 "file_util.m"
        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
#line 431 "file_util.m"
        libs__file_util__InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
#line 431 "file_util.m"
      }
#line 1908 "libs.file_util.c"
    libs__file_util__TypeCtorInfo_20_20 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 440 "file_util.m"
    {
#line 440 "file_util.m"
      libs__file_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 440 "file_util.m"
    }
#line 440 "file_util.m"
    {
#line 440 "file_util.m"
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__SourceDirName_6));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (libs__file_util__V_18_18));
#line 440 "file_util.m"
    }
#line 440 "file_util.m"
    {
#line 440 "file_util.m"
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__InstallCmdDirOpt_11));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
#line 440 "file_util.m"
    }
#line 440 "file_util.m"
    {
#line 440 "file_util.m"
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
#line 440 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
#line 440 "file_util.m"
    }
#line 439 "file_util.m"
    {
#line 439 "file_util.m"
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_20_20, libs__file_util__TypeCtorInfo_20_20, (MR_Word) &libs__file_util_scalar_common_6[1], libs__file_util__V_15_15);
    }
#line 439 "file_util.m"
    {
#line 439 "file_util.m"
      return libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
#line 428 "file_util.m"
    return libs__file_util__Command_8;
#line 428 "file_util.m"
  }
#line 132 "file_util.m"
}

#line 425 "file_util.m"
static MR_Box MR_CALL 
libs__file_util__make_install_file_command_3_f_0_1(
#line 425 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 425 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_1)
#line 425 "file_util.m"
{
#line 425 "file_util.m"
  {
#line 425 "file_util.m"
    MR_Box libs__file_util__wrapper_arg_2;
#line 425 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 425 "file_util.m"
    MR_String libs__file_util__conv0_HeadVar__2_2;

#line 425 "file_util.m"
    {
#line 425 "file_util.m"
      libs__file_util__conv0_HeadVar__2_2 = libs__options__quote_arg_1_f_0(((MR_String) libs__file_util__wrapper_arg_1));
    }
#line 425 "file_util.m"
    libs__file_util__wrapper_arg_2 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_2));
#line 425 "file_util.m"
    return libs__file_util__wrapper_arg_2;
#line 425 "file_util.m"
  }
#line 425 "file_util.m"
}

#line 126 "file_util.m"
MR_String MR_CALL 
libs__file_util__make_install_file_command_3_f_0(
#line 126 "file_util.m"
  MR_Word libs__file_util__Globals_5,
#line 126 "file_util.m"
  MR_String libs__file_util__FileName_6,
#line 126 "file_util.m"
  MR_String libs__file_util__InstallDir_7)
#line 126 "file_util.m"
{
#line 417 "file_util.m"
  {
#line 417 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 417 "file_util.m"
    MR_String libs__file_util__Command_8;
#line 417 "file_util.m"
    MR_Word libs__file_util__TypeCtorInfo_19_19;
#line 417 "file_util.m"
    MR_Word libs__file_util__FileInstallCmd_9;
#line 417 "file_util.m"
    MR_String libs__file_util__InstallCmd_10;
#line 417 "file_util.m"
    MR_Word libs__file_util__V_13_13;
#line 417 "file_util.m"
    MR_Word libs__file_util__V_15_15;
#line 417 "file_util.m"
    MR_Word libs__file_util__V_16_16;
#line 417 "file_util.m"
    MR_Word libs__file_util__V_17_17;

#line 418 "file_util.m"
    {
#line 418 "file_util.m"
      libs__globals__get_file_install_cmd_2_p_0(libs__file_util__Globals_5, &libs__file_util__FileInstallCmd_9);
    }
#line 421 "file_util.m"
    if ((libs__file_util__FileInstallCmd_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "file_util.m"
      libs__file_util__InstallCmd_10 = (MR_String) "cp";
#line 421 "file_util.m"
    else
#line 420 "file_util.m"
      {
#line 420 "file_util.m"
        MR_String libs__file_util___InstallCmdDirOpt_11;

#line 420 "file_util.m"
        libs__file_util__InstallCmd_10 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 0)));
#line 420 "file_util.m"
        libs__file_util___InstallCmdDirOpt_11 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__FileInstallCmd_9, (MR_Integer) 1)));
#line 420 "file_util.m"
      }
#line 2053 "libs.file_util.c"
    libs__file_util__TypeCtorInfo_19_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 426 "file_util.m"
    {
#line 426 "file_util.m"
      libs__file_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__InstallDir_7));
#line 426 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 426 "file_util.m"
    }
#line 426 "file_util.m"
    {
#line 426 "file_util.m"
      libs__file_util__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 0) = ((MR_Box) (libs__file_util__FileName_6));
#line 426 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_16_16, 1) = ((MR_Box) (libs__file_util__V_17_17));
#line 426 "file_util.m"
    }
#line 426 "file_util.m"
    {
#line 426 "file_util.m"
      libs__file_util__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 0) = ((MR_Box) (libs__file_util__InstallCmd_10));
#line 426 "file_util.m"
      MR_hl_field(MR_mktag(1), libs__file_util__V_15_15, 1) = ((MR_Box) (libs__file_util__V_16_16));
#line 426 "file_util.m"
    }
#line 425 "file_util.m"
    {
#line 425 "file_util.m"
      libs__file_util__V_13_13 = mercury__list__map_2_f_0(libs__file_util__TypeCtorInfo_19_19, libs__file_util__TypeCtorInfo_19_19, (MR_Word) &libs__file_util_scalar_common_6[0], libs__file_util__V_15_15);
    }
#line 425 "file_util.m"
    {
#line 425 "file_util.m"
      return libs__file_util__Command_8 = mercury__string__join_list_2_f_0((MR_String) "   ", libs__file_util__V_13_13);
    }
#line 417 "file_util.m"
    return libs__file_util__Command_8;
#line 417 "file_util.m"
  }
#line 126 "file_util.m"
}

#line 117 "file_util.m"
void MR_CALL 
libs__file_util__report_error_to_stream_4_p_0(
#line 117 "file_util.m"
  MR_Word libs__file_util__Stream_5,
#line 117 "file_util.m"
  MR_String libs__file_util__ErrorMessage_6)
#line 117 "file_util.m"
{
#line 410 "file_util.m"
  {
#line 410 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 410 "file_util.m"
    MR_Word libs__file_util__OldStream_8;
#line 413 "file_util.m"
    MR_Word libs__file_util__V_9_9;

#line 411 "file_util.m"
    {
#line 411 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__Stream_5, &libs__file_util__OldStream_8);
    }
#line 412 "file_util.m"
    {
#line 412 "file_util.m"
      libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_6);
    }
#line 413 "file_util.m"
    {
#line 413 "file_util.m"
      mercury__io__set_output_stream_4_p_0(libs__file_util__OldStream_8, &libs__file_util__V_9_9);
    }
#line 410 "file_util.m"
  }
#line 117 "file_util.m"
}

#line 116 "file_util.m"
void MR_CALL 
libs__file_util__report_error_3_p_0(
#line 116 "file_util.m"
  MR_String libs__file_util__ErrorMessage_4)
#line 116 "file_util.m"
{
#line 403 "file_util.m"
  {
#line 403 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 404 "file_util.m"
    {
#line 404 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "Error: ");
    }
#line 405 "file_util.m"
    {
#line 405 "file_util.m"
      mercury__io__write_string_3_p_0(libs__file_util__ErrorMessage_4);
    }
#line 406 "file_util.m"
    {
#line 406 "file_util.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
    }
#line 407 "file_util.m"
    {
#line 407 "file_util.m"
      mercury__io__flush_output_2_p_0();
    }
#line 408 "file_util.m"
    {
#line 408 "file_util.m"
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 408 "file_util.m"
      return;
    }
#line 403 "file_util.m"
  }
#line 116 "file_util.m"
}

#line 114 "file_util.m"
void MR_CALL 
libs__file_util__maybe_flush_output_3_p_0(
#line 114 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1)
#line 114 "file_util.m"
{
#line 399 "file_util.m"
  {
#line 399 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 399 "file_util.m"
#line 399 "file_util.m"
    switch (libs__file_util__HeadVar__1_1) {
#line 399 "file_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 399 "file_util.m"
      case (MR_Integer) 0:
#line 401 "file_util.m"
        {
#line 401 "file_util.m"
        }
#line 399 "file_util.m"
        break;
#line 399 "file_util.m"
      case (MR_Integer) 1:
#line 400 "file_util.m"
        {
#line 400 "file_util.m"
          mercury__io__flush_output_2_p_0();
#line 400 "file_util.m"
          return;
        }
#line 399 "file_util.m"
        break;
#line 399 "file_util.m"
    }
#line 399 "file_util.m"
  }
#line 114 "file_util.m"
}

#line 113 "file_util.m"
void MR_CALL 
libs__file_util__maybe_write_string_4_p_0(
#line 113 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1,
#line 113 "file_util.m"
  MR_String libs__file_util__String_2)
#line 113 "file_util.m"
{
#line 395 "file_util.m"
  {
#line 395 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 395 "file_util.m"
#line 395 "file_util.m"
    switch (libs__file_util__HeadVar__1_1) {
#line 395 "file_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 395 "file_util.m"
      case (MR_Integer) 0:
#line 397 "file_util.m"
        {
#line 397 "file_util.m"
        }
#line 395 "file_util.m"
        break;
#line 395 "file_util.m"
      case (MR_Integer) 1:
#line 396 "file_util.m"
        {
#line 396 "file_util.m"
          mercury__io__write_string_3_p_0(libs__file_util__String_2);
#line 396 "file_util.m"
          return;
        }
#line 395 "file_util.m"
        break;
#line 395 "file_util.m"
    }
#line 395 "file_util.m"
  }
#line 113 "file_util.m"
}

#line 112 "file_util.m"
void MR_CALL 
libs__file_util__maybe_report_stats_3_p_0(
#line 112 "file_util.m"
  MR_Word libs__file_util__HeadVar__1_1)
#line 112 "file_util.m"
{
#line 391 "file_util.m"
  {
#line 391 "file_util.m"
    MR_bool libs__file_util__succeeded;

#line 391 "file_util.m"
#line 391 "file_util.m"
    switch (libs__file_util__HeadVar__1_1) {
#line 391 "file_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 391 "file_util.m"
      case (MR_Integer) 0:
#line 393 "file_util.m"
        {
#line 393 "file_util.m"
        }
#line 391 "file_util.m"
        break;
#line 391 "file_util.m"
      case (MR_Integer) 1:
#line 392 "file_util.m"
        {
#line 392 "file_util.m"
          mercury__io__report_stats_2_p_0();
#line 392 "file_util.m"
          return;
        }
#line 391 "file_util.m"
        break;
#line 391 "file_util.m"
    }
#line 391 "file_util.m"
  }
#line 112 "file_util.m"
}

#line 108 "file_util.m"
void MR_CALL 
libs__file_util__get_install_name_option_3_p_0(
#line 108 "file_util.m"
  MR_Word libs__file_util__Globals_4,
#line 108 "file_util.m"
  MR_String libs__file_util__OutputFileName_5,
#line 108 "file_util.m"
  MR_String * libs__file_util__InstallNameOpt_6)
#line 108 "file_util.m"
{
#line 374 "file_util.m"
  {
#line 374 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 374 "file_util.m"
    MR_String libs__file_util__InstallNameFlag_7;
#line 374 "file_util.m"
    MR_String libs__file_util__InstallNamePath0_8;
#line 374 "file_util.m"
    MR_String libs__file_util__InstallNamePath_11;
#line 374 "file_util.m"
    MR_String libs__file_util__V_21_21;
#line 374 "file_util.m"
    MR_String libs__file_util__V_22_22;

#line 375 "file_util.m"
    {
#line 375 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 619, &libs__file_util__InstallNameFlag_7);
    }
#line 377 "file_util.m"
    {
#line 377 "file_util.m"
      libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 620, &libs__file_util__InstallNamePath0_8);
    }
#line 379 "file_util.m"
    libs__file_util__succeeded = (strcmp(libs__file_util__InstallNamePath0_8, (MR_String) "") == 0);
#line 383 "file_util.m"
    if (libs__file_util__succeeded)
#line 380 "file_util.m"
      {
#line 380 "file_util.m"
        MR_String libs__file_util__InstallPrefix_9;
#line 380 "file_util.m"
        MR_String libs__file_util__GradeDir_10;
#line 380 "file_util.m"
        MR_String libs__file_util__V_15_15;
#line 380 "file_util.m"
        MR_String libs__file_util__V_16_16;
#line 380 "file_util.m"
        MR_String libs__file_util__V_17_17;

#line 380 "file_util.m"
        {
#line 380 "file_util.m"
          libs__globals__lookup_string_option_3_p_0(libs__file_util__Globals_4, (MR_Integer) 633, &libs__file_util__InstallPrefix_9);
        }
#line 381 "file_util.m"
        {
#line 381 "file_util.m"
          libs__handle_options__grade_directory_component_2_p_0(libs__file_util__Globals_4, &libs__file_util__GradeDir_10);
        }
#line 382 "file_util.m"
        {
#line 382 "file_util.m"
          libs__file_util__V_17_17 = mercury__dir__f_slash_2_f_0(libs__file_util__InstallPrefix_9, (MR_String) "lib");
        }
#line 382 "file_util.m"
        {
#line 382 "file_util.m"
          libs__file_util__V_16_16 = mercury__dir__f_slash_2_f_0(libs__file_util__V_17_17, (MR_String) "mercury");
        }
#line 382 "file_util.m"
        {
#line 382 "file_util.m"
          libs__file_util__V_15_15 = mercury__dir__f_slash_2_f_0(libs__file_util__V_16_16, (MR_String) "lib");
        }
#line 382 "file_util.m"
        {
#line 382 "file_util.m"
          libs__file_util__InstallNamePath_11 = mercury__dir__f_slash_2_f_0(libs__file_util__V_15_15, libs__file_util__GradeDir_10);
        }
#line 380 "file_util.m"
      }
#line 383 "file_util.m"
    else
#line 384 "file_util.m"
      libs__file_util__InstallNamePath_11 = libs__file_util__InstallNamePath0_8;
#line 387 "file_util.m"
    {
#line 387 "file_util.m"
      libs__file_util__V_22_22 = libs__options__quote_arg_1_f_0(libs__file_util__InstallNamePath_11);
    }
#line 387 "file_util.m"
    {
#line 387 "file_util.m"
      libs__file_util__V_21_21 = mercury__dir__f_slash_2_f_0(libs__file_util__V_22_22, libs__file_util__OutputFileName_5);
    }
#line 386 "file_util.m"
    {
#line 386 "file_util.m"
      *libs__file_util__InstallNameOpt_6 = mercury__string__f_43_43_2_f_0(libs__file_util__InstallNameFlag_7, libs__file_util__V_21_21);
    }
#line 374 "file_util.m"
  }
#line 108 "file_util.m"
}

#line 333 "file_util.m"
static void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0_1(
#line 333 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 333 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 333 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 333 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_3)
#line 333 "file_util.m"
{
#line 333 "file_util.m"
  {
#line 333 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 333 "file_util.m"
    MR_Word libs__file_util__conv0_Res_8;

#line 333 "file_util.m"
    {
#line 333 "file_util.m"
      libs__file_util__copy_stream_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 4))), &libs__file_util__conv0_Res_8);
    }
#line 333 "file_util.m"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_Res_8));
#line 333 "file_util.m"
  }
#line 333 "file_util.m"
}

#line 98 "file_util.m"
void MR_CALL 
libs__file_util__write_include_file_contents_3_p_0(
#line 98 "file_util.m"
  MR_String libs__file_util__FileName_4)
#line 98 "file_util.m"
{
#line 307 "file_util.m"
  {
#line 307 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 307 "file_util.m"
    MR_Word libs__file_util__MaybeType_7;

#line 309 "file_util.m"
    {
#line 309 "file_util.m"
      mercury__io__file_type_5_p_0((MR_Integer) 1, libs__file_util__FileName_4, &libs__file_util__MaybeType_7);
    }
#line 318 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__MaybeType_7)) == (MR_mktag((MR_Integer) 1))))
#line 319 "file_util.m"
      {
#line 319 "file_util.m"
        MR_Word libs__file_util__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeType_7, (MR_Integer) 0)));
#line 319 "file_util.m"
        MR_String libs__file_util__Msg_11;
#line 319 "file_util.m"
        MR_String libs__file_util__V_16_16;
#line 319 "file_util.m"
        MR_Word libs__file_util__V_17_17;

#line 321 "file_util.m"
        {
#line 321 "file_util.m"
          libs__file_util__V_16_16 = mercury__io__error_message_1_f_0(libs__file_util__Error_10);
        }
#line 320 "file_util.m"
        {
#line 320 "file_util.m"
          libs__file_util__Msg_11 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "io.file_type failed: ", libs__file_util__V_16_16);
        }
#line 322 "file_util.m"
        {
#line 322 "file_util.m"
          libs__file_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 322 "file_util.m"
          MR_hl_field(MR_mktag(0), libs__file_util__V_17_17, 0) = ((MR_Box) (libs__file_util__FileName_4));
#line 322 "file_util.m"
          MR_hl_field(MR_mktag(0), libs__file_util__V_17_17, 1) = ((MR_Box) (libs__file_util__Msg_11));
#line 322 "file_util.m"
        }
#line 322 "file_util.m"
        {
#line 322 "file_util.m"
          mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_17_17)));
#line 322 "file_util.m"
          return;
        }
#line 319 "file_util.m"
      }
#line 318 "file_util.m"
    else
#line 311 "file_util.m"
      {
#line 311 "file_util.m"
        MR_Word libs__file_util__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__MaybeType_7, (MR_Integer) 0)));

#line 366 "file_util.m"
#line 366 "file_util.m"
        switch (libs__file_util__Type_8) {
#line 366 "file_util.m"
          default:
#line 366 "file_util.m"
            libs__file_util__succeeded = MR_FALSE;
#line 366 "file_util.m"
            break;
#line 366 "file_util.m"
          case (MR_Integer) 0:
#line 366 "file_util.m"
            libs__file_util__succeeded = MR_TRUE;
#line 366 "file_util.m"
            break;
#line 366 "file_util.m"
          case (MR_Integer) 10:
#line 367 "file_util.m"
            libs__file_util__succeeded = MR_TRUE;
#line 366 "file_util.m"
            break;
#line 366 "file_util.m"
        }
#line 315 "file_util.m"
        if (libs__file_util__succeeded)
#line 313 "file_util.m"
          {
#line 313 "file_util.m"
            MR_Word libs__file_util__OutputStream_9;
#line 313 "file_util.m"
            MR_Word libs__file_util__OpenRes_29;

#line 313 "file_util.m"
            {
#line 313 "file_util.m"
              mercury__io__output_stream_3_p_0(&libs__file_util__OutputStream_9);
            }
#line 329 "file_util.m"
            {
#line 329 "file_util.m"
              mercury__io__open_input_4_p_0(libs__file_util__FileName_4, &libs__file_util__OpenRes_29);
            }
#line 345 "file_util.m"
            if (((MR_tag((MR_Word) libs__file_util__OpenRes_29)) == (MR_mktag((MR_Integer) 1))))
#line 346 "file_util.m"
              {
#line 346 "file_util.m"
                MR_Word libs__file_util__V_35_35;
#line 346 "file_util.m"
                MR_String libs__file_util__V_36_36;
#line 346 "file_util.m"
                MR_Word libs__file_util__Error_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__OpenRes_29, (MR_Integer) 0)));

#line 347 "file_util.m"
                {
#line 347 "file_util.m"
                  libs__file_util__V_36_36 = mercury__io__error_message_1_f_0(libs__file_util__Error_42);
                }
#line 347 "file_util.m"
                {
#line 347 "file_util.m"
                  libs__file_util__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 347 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_35_35, 0) = ((MR_Box) (libs__file_util__FileName_4));
#line 347 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_35_35, 1) = ((MR_Box) (libs__file_util__V_36_36));
#line 347 "file_util.m"
                }
#line 347 "file_util.m"
                {
#line 347 "file_util.m"
                  mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_35_35)));
#line 347 "file_util.m"
                  return;
                }
#line 346 "file_util.m"
              }
#line 345 "file_util.m"
            else
#line 331 "file_util.m"
              {
#line 331 "file_util.m"
                MR_Word libs__file_util__InputStream_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__OpenRes_29, (MR_Integer) 0)));
#line 331 "file_util.m"
                MR_Word libs__file_util__TryResult_31;
#line 333 "file_util.m"
                MR_Word libs__file_util__V_37_37;

#line 333 "file_util.m"
                {
#line 333 "file_util.m"
                  libs__file_util__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 333 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 0) = ((MR_Box) (&libs__file_util_scalar_common_4[0]));
#line 333 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 1) = ((MR_Box) (libs__file_util__write_include_file_contents_3_p_0_1));
#line 333 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 333 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 3) = ((MR_Box) (libs__file_util__OutputStream_9));
#line 333 "file_util.m"
                  MR_hl_field(MR_mktag(0), libs__file_util__V_37_37, 4) = ((MR_Box) (libs__file_util__InputStream_30));
#line 333 "file_util.m"
                }
#line 333 "file_util.m"
                {
#line 333 "file_util.m"
                  mercury__exception__try_io_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_res_0, libs__file_util__V_37_37, &libs__file_util__TryResult_31);
                }
#line 335 "file_util.m"
                {
#line 335 "file_util.m"
                  mercury__io__close_input_3_p_0(libs__file_util__InputStream_30);
                }
#line 338 "file_util.m"
                if (((MR_tag((MR_Word) libs__file_util__TryResult_31)) == (MR_mktag((MR_Integer) 2))))
#line 342 "file_util.m"
                  {
#line 343 "file_util.m"
                    {
#line 343 "file_util.m"
                      mercury__exception__rethrow_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_res_0, libs__file_util__TryResult_31);
#line 343 "file_util.m"
                      return;
                    }
#line 342 "file_util.m"
                  }
#line 338 "file_util.m"
                else
#line 338 "file_util.m"
                  {
#line 338 "file_util.m"
                    MR_Word libs__file_util__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__TryResult_31, (MR_Integer) 0)));

#line 338 "file_util.m"
                    if ((libs__file_util__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "file_util.m"
                      {
#line 337 "file_util.m"
                      }
#line 338 "file_util.m"
                    else
#line 339 "file_util.m"
                      {
#line 339 "file_util.m"
                        MR_Word libs__file_util__Error_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__V_50_50, (MR_Integer) 0)));

#line 340 "file_util.m"
                        {
#line 340 "file_util.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mercury__io__io__type_ctor_info_error_0, ((MR_Box) (libs__file_util__Error_32)));
#line 340 "file_util.m"
                          return;
                        }
#line 339 "file_util.m"
                      }
#line 338 "file_util.m"
                  }
#line 331 "file_util.m"
              }
#line 313 "file_util.m"
          }
#line 315 "file_util.m"
        else
#line 316 "file_util.m"
          {
#line 316 "file_util.m"
            MR_Word libs__file_util__V_20_20;

#line 316 "file_util.m"
            {
#line 316 "file_util.m"
              libs__file_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 316 "file_util.m"
              MR_hl_field(MR_mktag(0), libs__file_util__V_20_20, 0) = ((MR_Box) (libs__file_util__FileName_4));
#line 316 "file_util.m"
              MR_hl_field(MR_mktag(0), libs__file_util__V_20_20, 1) = ((MR_Box) ((MR_String) "Not a regular file"));
#line 316 "file_util.m"
            }
#line 316 "file_util.m"
            {
#line 316 "file_util.m"
              mercury__exception__throw_1_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, ((MR_Box) (libs__file_util__V_20_20)));
#line 316 "file_util.m"
              return;
            }
#line 316 "file_util.m"
          }
#line 311 "file_util.m"
      }
#line 307 "file_util.m"
  }
#line 98 "file_util.m"
}

#line 90 "file_util.m"
void MR_CALL 
libs__file_util__output_to_file_return_result_6_p_0(
#line 90 "file_util.m"
  MR_Word libs__file_util__TypeInfo_for_T_63,
#line 90 "file_util.m"
  MR_Word libs__file_util__Globals_7,
#line 90 "file_util.m"
  MR_String libs__file_util__FileName_8,
#line 90 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 90 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 90 "file_util.m"
{
#line 262 "file_util.m"
  {
#line 262 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 262 "file_util.m"
    MR_Word libs__file_util__Verbose_12;
#line 262 "file_util.m"
    MR_Word libs__file_util__Stats_13;
#line 262 "file_util.m"
    MR_Word libs__file_util__Res_14;

#line 263 "file_util.m"
    {
#line 263 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 45, &libs__file_util__Verbose_12);
    }
#line 264 "file_util.m"
    {
#line 264 "file_util.m"
      libs__globals__lookup_bool_option_3_p_0(libs__file_util__Globals_7, (MR_Integer) 55, &libs__file_util__Stats_13);
    }
#line 2755 "libs.file_util.c"
#line 2756 "libs.file_util.c"
    switch (libs__file_util__Verbose_12) {
#line 2758 "libs.file_util.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2760 "libs.file_util.c"
      case (MR_Integer) 0:
#line 401 "file_util.m"
        {
#line 401 "file_util.m"
        }
#line 2766 "libs.file_util.c"
        break;
#line 2768 "libs.file_util.c"
      case (MR_Integer) 1:
#line 2770 "libs.file_util.c"
        {
#line 396 "file_util.m"
          {
#line 396 "file_util.m"
            mercury__io__write_string_3_p_0((MR_String) "% Writing to file \140");
          }
#line 396 "file_util.m"
          {
#line 396 "file_util.m"
            mercury__io__write_string_3_p_0(libs__file_util__FileName_8);
          }
#line 396 "file_util.m"
          {
#line 396 "file_util.m"
            mercury__io__write_string_3_p_0((MR_String) "\'...\n");
          }
#line 400 "file_util.m"
          {
#line 400 "file_util.m"
            mercury__io__flush_output_2_p_0();
          }
#line 2792 "libs.file_util.c"
        }
#line 2794 "libs.file_util.c"
        break;
#line 2796 "libs.file_util.c"
    }
#line 269 "file_util.m"
    {
#line 269 "file_util.m"
      mercury__io__open_output_4_p_0(libs__file_util__FileName_8, &libs__file_util__Res_14);
    }
#line 296 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Res_14)) == (MR_mktag((MR_Integer) 1))))
#line 297 "file_util.m"
      {
#line 297 "file_util.m"
        MR_Word libs__file_util__V_39_39;
#line 297 "file_util.m"
        MR_Word libs__file_util__V_41_41;
#line 297 "file_util.m"
        MR_String libs__file_util__ErrorMessage_62;

#line 298 "file_util.m"
        {
#line 298 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "\n");
        }
#line 299 "file_util.m"
        {
#line 299 "file_util.m"
          libs__file_util__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_41_41, 0) = ((MR_Box) (libs__file_util__FileName_8));
#line 299 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &libs__file_util_scalar_common_2[0])));
#line 299 "file_util.m"
        }
#line 299 "file_util.m"
        {
#line 299 "file_util.m"
          libs__file_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_39_39, 0) = ((MR_Box) ((MR_String) "can\'t open file \140"));
#line 299 "file_util.m"
          MR_hl_field(MR_mktag(1), libs__file_util__V_39_39, 1) = ((MR_Box) (libs__file_util__V_41_41));
#line 299 "file_util.m"
        }
#line 299 "file_util.m"
        {
#line 299 "file_util.m"
          mercury__string__append_list_2_p_0(libs__file_util__V_39_39, &libs__file_util__ErrorMessage_62);
        }
#line 301 "file_util.m"
        {
#line 301 "file_util.m"
          libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_62);
        }
#line 302 "file_util.m"
        *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 297 "file_util.m"
      }
#line 296 "file_util.m"
    else
#line 271 "file_util.m"
      {
#line 271 "file_util.m"
        MR_Word libs__file_util__FileStream_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__Res_14, (MR_Integer) 0)));
#line 271 "file_util.m"
        MR_Word libs__file_util__OrigOutputStream_16;
#line 271 "file_util.m"
        MR_Word libs__file_util__TryResult_17;
#line 276 "file_util.m"
        MR_Word libs__file_util__V_18_18;

#line 272 "file_util.m"
        {
#line 272 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__FileStream_15, &libs__file_util__OrigOutputStream_16);
        }
#line 274 "file_util.m"
        {
#line 274 "file_util.m"
          mercury__exception__try_io_4_p_0(libs__file_util__TypeInfo_for_T_63, libs__file_util__Action_9, &libs__file_util__TryResult_17);
        }
#line 276 "file_util.m"
        {
#line 276 "file_util.m"
          mercury__io__set_output_stream_4_p_0(libs__file_util__OrigOutputStream_16, &libs__file_util__V_18_18);
        }
#line 277 "file_util.m"
        {
#line 277 "file_util.m"
          mercury__io__close_output_3_p_0(libs__file_util__FileStream_15);
        }
#line 278 "file_util.m"
        {
#line 278 "file_util.m"
          libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "% done.\n");
        }
#line 279 "file_util.m"
        {
#line 279 "file_util.m"
          libs__file_util__maybe_report_stats_3_p_0(libs__file_util__Stats_13);
        }
#line 283 "file_util.m"
        if (((MR_tag((MR_Word) libs__file_util__TryResult_17)) == (MR_mktag((MR_Integer) 2))))
#line 284 "file_util.m"
          {
#line 284 "file_util.m"
            MR_Word libs__file_util__Univ_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), libs__file_util__TryResult_17, (MR_Integer) 0)));
#line 292 "file_util.m"
            MR_Word libs__file_util__IncludeError_21;
#line 285 "file_util.m"
            MR_Box libs__file_util__conv0_IncludeError_21;

#line 285 "file_util.m"
            {
#line 285 "file_util.m"
              libs__file_util__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &libs__file_util__libs__file_util__type_ctor_info_include_file_error_0, libs__file_util__Univ_20, &libs__file_util__conv0_IncludeError_21);
            }
#line 285 "file_util.m"
            if (libs__file_util__succeeded)
#line 285 "file_util.m"
              {
#line 285 "file_util.m"
                libs__file_util__IncludeError_21 = ((MR_Word) libs__file_util__conv0_IncludeError_21);
#line 285 "file_util.m"
                libs__file_util__succeeded = MR_TRUE;
#line 285 "file_util.m"
              }
#line 292 "file_util.m"
            if (libs__file_util__succeeded)
#line 286 "file_util.m"
              {
#line 286 "file_util.m"
                MR_String libs__file_util__IncludeFileName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__IncludeError_21, (MR_Integer) 0)));
#line 286 "file_util.m"
                MR_String libs__file_util__Detail_23 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__IncludeError_21, (MR_Integer) 1)));
#line 286 "file_util.m"
                MR_String libs__file_util__ErrorMessage_24;
#line 286 "file_util.m"
                MR_String libs__file_util__V_65_65;
#line 286 "file_util.m"
                MR_Word libs__file_util__V_71_71 = (MR_Word) &libs__file_util_scalar_common_3[0];
#line 286 "file_util.m"
                MR_String libs__file_util__V_73_73;
#line 286 "file_util.m"
                MR_String libs__file_util__V_74_74;
#line 286 "file_util.m"
                MR_String libs__file_util__V_81_81;

#line 288 "file_util.m"
                {
#line 288 "file_util.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__file_util__V_71_71, libs__file_util__Detail_23, &libs__file_util__V_65_65);
                }
#line 287 "file_util.m"
                {
#line 287 "file_util.m"
                  libs__file_util__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) "\' for input: ", libs__file_util__V_65_65);
                }
#line 288 "file_util.m"
                {
#line 288 "file_util.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(libs__file_util__V_71_71, libs__file_util__IncludeFileName_22, &libs__file_util__V_74_74);
                }
#line 287 "file_util.m"
                {
#line 287 "file_util.m"
                  libs__file_util__V_81_81 = mercury__string__f_43_43_2_f_0(libs__file_util__V_74_74, libs__file_util__V_73_73);
                }
#line 287 "file_util.m"
                {
#line 287 "file_util.m"
                  libs__file_util__ErrorMessage_24 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open \140", libs__file_util__V_81_81);
                }
#line 289 "file_util.m"
                {
#line 289 "file_util.m"
                  libs__file_util__maybe_write_string_4_p_0(libs__file_util__Verbose_12, (MR_String) "\n");
                }
#line 290 "file_util.m"
                {
#line 290 "file_util.m"
                  libs__file_util__report_error_3_p_0(libs__file_util__ErrorMessage_24);
                }
#line 291 "file_util.m"
                *libs__file_util__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "file_util.m"
              }
#line 292 "file_util.m"
            else
#line 293 "file_util.m"
              {
#line 293 "file_util.m"
                mercury__exception__rethrow_1_p_0(libs__file_util__TypeInfo_for_T_63, libs__file_util__TryResult_17);
#line 293 "file_util.m"
                return;
              }
#line 284 "file_util.m"
          }
#line 283 "file_util.m"
        else
#line 281 "file_util.m"
          {
#line 281 "file_util.m"
            MR_Box libs__file_util__ActionResult_19 = (MR_hl_field(MR_mktag(1), libs__file_util__TryResult_17, (MR_Integer) 0));

#line 282 "file_util.m"
            {
#line 282 "file_util.m"
              MR_Word base;
#line 282 "file_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 282 "file_util.m"
              *libs__file_util__Result_10 = base;
#line 282 "file_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = libs__file_util__ActionResult_19;
#line 282 "file_util.m"
            }
#line 281 "file_util.m"
          }
#line 271 "file_util.m"
      }
#line 262 "file_util.m"
  }
#line 90 "file_util.m"
}

#line 252 "file_util.m"
static void MR_CALL 
libs__file_util__output_to_file_6_p_0_1(
#line 252 "file_util.m"
  MR_Box libs__file_util__closure_arg,
#line 252 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_1,
#line 252 "file_util.m"
  MR_Box libs__file_util__wrapper_arg_2,
#line 252 "file_util.m"
  MR_Box * libs__file_util__wrapper_arg_3)
#line 252 "file_util.m"
{
#line 252 "file_util.m"
  {
#line 252 "file_util.m"
    MR_Box libs__file_util__closure = libs__file_util__closure_arg;
#line 252 "file_util.m"
    MR_Integer libs__file_util__conv0_HeadVar__2_19;

#line 252 "file_util.m"
    {
#line 252 "file_util.m"
      libs__file_util__IntroducedFrom__pred__output_to_file__252__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), libs__file_util__closure, (MR_Integer) 3))), &libs__file_util__conv0_HeadVar__2_19);
    }
#line 252 "file_util.m"
    *libs__file_util__wrapper_arg_1 = ((MR_Box) (libs__file_util__conv0_HeadVar__2_19));
#line 252 "file_util.m"
  }
#line 252 "file_util.m"
}

#line 84 "file_util.m"
void MR_CALL 
libs__file_util__output_to_file_6_p_0(
#line 84 "file_util.m"
  MR_Word libs__file_util__Globals_7,
#line 84 "file_util.m"
  MR_String libs__file_util__FileName_8,
#line 84 "file_util.m"
  MR_Word libs__file_util__Action_9,
#line 84 "file_util.m"
  MR_Word * libs__file_util__Succeeded_10)
#line 84 "file_util.m"
{
#line 251 "file_util.m"
  {
#line 251 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 251 "file_util.m"
    MR_Word libs__file_util__NewAction_12;
#line 251 "file_util.m"
    MR_Word libs__file_util__Result_13;

#line 252 "file_util.m"
    {
#line 252 "file_util.m"
      libs__file_util__NewAction_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 252 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 0) = ((MR_Box) (&libs__file_util_scalar_common_1[0]));
#line 252 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 1) = ((MR_Box) (libs__file_util__output_to_file_6_p_0_1));
#line 252 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 252 "file_util.m"
      MR_hl_field(MR_mktag(0), libs__file_util__NewAction_12, 3) = ((MR_Box) (libs__file_util__Action_9));
#line 252 "file_util.m"
    }
#line 253 "file_util.m"
    {
#line 253 "file_util.m"
      libs__file_util__output_to_file_return_result_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, libs__file_util__Globals_7, libs__file_util__FileName_8, libs__file_util__NewAction_12, &libs__file_util__Result_13);
    }
#line 257 "file_util.m"
    if ((libs__file_util__Result_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "file_util.m"
      *libs__file_util__Succeeded_10 = (MR_Integer) 0;
#line 257 "file_util.m"
    else
#line 256 "file_util.m"
      *libs__file_util__Succeeded_10 = (MR_Integer) 1;
#line 251 "file_util.m"
  }
#line 84 "file_util.m"
}

#line 75 "file_util.m"
void MR_CALL 
libs__file_util__search_for_file_mod_time_5_p_0(
#line 75 "file_util.m"
  MR_Word libs__file_util__Dirs_6,
#line 75 "file_util.m"
  MR_String libs__file_util__FileName_7,
#line 75 "file_util.m"
  MR_Word * libs__file_util__Result_8)
#line 75 "file_util.m"
{
#line 201 "file_util.m"
  {
#line 201 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 201 "file_util.m"
    MR_Word libs__file_util__MaybeTime_10;

#line 202 "file_util.m"
    {
#line 202 "file_util.m"
      libs__file_util__do_search_for_file__ho1_6_p_0(libs__file_util__Dirs_6, libs__file_util__FileName_7, &libs__file_util__MaybeTime_10);
    }
#line 206 "file_util.m"
    if ((libs__file_util__MaybeTime_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 207 "file_util.m"
      {
#line 207 "file_util.m"
        MR_String libs__file_util__Msg_12;
#line 207 "file_util.m"
        MR_String libs__file_util__V_18_18;
#line 207 "file_util.m"
        MR_String libs__file_util__V_19_19;
#line 207 "file_util.m"
        MR_String libs__file_util__V_21_21;

#line 209 "file_util.m"
        {
#line 209 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_6);
        }
#line 208 "file_util.m"
        {
#line 208 "file_util.m"
          libs__file_util__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_21_21);
        }
#line 208 "file_util.m"
        {
#line 208 "file_util.m"
          libs__file_util__V_18_18 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_7, libs__file_util__V_19_19);
        }
#line 208 "file_util.m"
        {
#line 208 "file_util.m"
          libs__file_util__Msg_12 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_18_18);
        }
#line 210 "file_util.m"
        {
#line 210 "file_util.m"
          MR_Word base;
#line 210 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 210 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 210 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_12));
#line 210 "file_util.m"
        }
#line 207 "file_util.m"
      }
#line 206 "file_util.m"
    else
#line 204 "file_util.m"
      {
#line 204 "file_util.m"
        MR_Word libs__file_util__Time_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeTime_10, (MR_Integer) 0)));

#line 205 "file_util.m"
        {
#line 205 "file_util.m"
          MR_Word base;
#line 205 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 205 "file_util.m"
          *libs__file_util__Result_8 = base;
#line 205 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Time_11));
#line 205 "file_util.m"
        }
#line 204 "file_util.m"
      }
#line 201 "file_util.m"
  }
#line 75 "file_util.m"
}

#line 67 "file_util.m"
void MR_CALL 
libs__file_util__search_for_file_returning_dir_6_p_0(
#line 67 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 67 "file_util.m"
  MR_Word libs__file_util__Dirs_8,
#line 67 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 67 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 67 "file_util.m"
{
#line 167 "file_util.m"
  {
#line 167 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 167 "file_util.m"
    MR_Word libs__file_util__MaybeDir_12;

#line 168 "file_util.m"
    {
#line 168 "file_util.m"
      libs__file_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_95_115_101_97_114_99_104_95_102_111_114_95_102_105_108_101_95_95_104_111_50_95_95_91_50_93_95_48_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__MaybeDir_12);
    }
#line 173 "file_util.m"
    if ((libs__file_util__MaybeDir_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "file_util.m"
      {
#line 174 "file_util.m"
        MR_String libs__file_util__Msg_14;
#line 174 "file_util.m"
        MR_String libs__file_util__V_20_20;
#line 174 "file_util.m"
        MR_String libs__file_util__V_21_21;
#line 174 "file_util.m"
        MR_String libs__file_util__V_23_23;

#line 176 "file_util.m"
        {
#line 176 "file_util.m"
          libs__file_util__V_23_23 = mercury__string__join_list_2_f_0((MR_String) ", ", libs__file_util__Dirs_8);
        }
#line 175 "file_util.m"
        {
#line 175 "file_util.m"
          libs__file_util__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) "\' in directories ", libs__file_util__V_23_23);
        }
#line 175 "file_util.m"
        {
#line 175 "file_util.m"
          libs__file_util__V_20_20 = mercury__string__f_43_43_2_f_0(libs__file_util__FileName_9, libs__file_util__V_21_21);
        }
#line 175 "file_util.m"
        {
#line 175 "file_util.m"
          libs__file_util__Msg_14 = mercury__string__f_43_43_2_f_0((MR_String) "cannot find \140", libs__file_util__V_20_20);
        }
#line 177 "file_util.m"
        {
#line 177 "file_util.m"
          MR_Word base;
#line 177 "file_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 177 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 177 "file_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (libs__file_util__Msg_14));
#line 177 "file_util.m"
        }
#line 174 "file_util.m"
      }
#line 173 "file_util.m"
    else
#line 171 "file_util.m"
      {
#line 171 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(1), libs__file_util__MaybeDir_12, (MR_Integer) 0)));

#line 172 "file_util.m"
        {
#line 172 "file_util.m"
          MR_Word base;
#line 172 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 172 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 172 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__Dir_13));
#line 172 "file_util.m"
        }
#line 171 "file_util.m"
      }
#line 167 "file_util.m"
  }
#line 67 "file_util.m"
}

#line 54 "file_util.m"
void MR_CALL 
libs__file_util__search_for_file_6_p_0(
#line 54 "file_util.m"
  MR_Word libs__file_util__MaybeOpen_7,
#line 54 "file_util.m"
  MR_Word libs__file_util__Dirs_8,
#line 54 "file_util.m"
  MR_String libs__file_util__FileName_9,
#line 54 "file_util.m"
  MR_Word * libs__file_util__Result_10)
#line 54 "file_util.m"
{
#line 152 "file_util.m"
  {
#line 152 "file_util.m"
    MR_bool libs__file_util__succeeded;
#line 152 "file_util.m"
    MR_Word libs__file_util__Result0_12;

#line 153 "file_util.m"
    {
#line 153 "file_util.m"
      libs__file_util__search_for_file_returning_dir_6_p_0(libs__file_util__MaybeOpen_7, libs__file_util__Dirs_8, libs__file_util__FileName_9, &libs__file_util__Result0_12);
    }
#line 162 "file_util.m"
    if (((MR_tag((MR_Word) libs__file_util__Result0_12)) == (MR_mktag((MR_Integer) 1))))
#line 164 "file_util.m"
      *libs__file_util__Result_10 = libs__file_util__Result0_12;
#line 162 "file_util.m"
    else
#line 155 "file_util.m"
      {
#line 155 "file_util.m"
        MR_String libs__file_util__Dir_13 = ((MR_String) (MR_hl_field(MR_mktag(0), libs__file_util__Result0_12, (MR_Integer) 0)));
#line 155 "file_util.m"
        MR_String libs__file_util__PathName_14;
#line 156 "file_util.m"
        MR_String libs__file_util__V_19_19;

#line 156 "file_util.m"
        {
#line 156 "file_util.m"
          mercury__dir__this_directory_1_p_0(&libs__file_util__V_19_19);
        }
#line 156 "file_util.m"
        libs__file_util__succeeded = (strcmp(libs__file_util__Dir_13, libs__file_util__V_19_19) == 0);
#line 158 "file_util.m"
        if (libs__file_util__succeeded)
#line 157 "file_util.m"
          libs__file_util__PathName_14 = libs__file_util__FileName_9;
#line 158 "file_util.m"
        else
#line 159 "file_util.m"
          {
#line 159 "file_util.m"
            libs__file_util__PathName_14 = mercury__dir__make_path_name_2_f_0(libs__file_util__Dir_13, libs__file_util__FileName_9);
          }
#line 161 "file_util.m"
        {
#line 161 "file_util.m"
          MR_Word base;
#line 161 "file_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 161 "file_util.m"
          *libs__file_util__Result_10 = base;
#line 161 "file_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (libs__file_util__PathName_14));
#line 161 "file_util.m"
        }
#line 155 "file_util.m"
      }
#line 152 "file_util.m"
  }
#line 54 "file_util.m"
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
