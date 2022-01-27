/*
** Automatically generated from `exclude.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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


/* :- module exclude. */
/* :- implementation. */

/*
INIT mercury__exclude__init
ENDINIT
*/

#include "exclude.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 75 "exclude.m"
struct exclude__apply_contour_exclusion_4_f_0_env_0_s {
#line 75 "exclude.m"
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6;
#line 245 "exclude.m"
  MR_bool exclude__apply_contour_exclusion_4_f_0_env_0__succeeded;
#line 223 "exclude.m"
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__PS_13;
#line 223 "exclude.m"
  MR_String exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14;
#line 230 "exclude.m"
  jmp_buf exclude__apply_contour_exclusion_4_f_0_env_0__commit_0;
#line 230 "exclude.m"
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15;
#line 230 "exclude.m"
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16;
#line 230 "exclude.m"
  MR_String exclude__apply_contour_exclusion_4_f_0_env_0__V_47_47;
#line 230 "exclude.m"
  MR_Box exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15;
#line 75 "exclude.m"
};


#line 99 "exclude.c"
static const MR_FA_PseudoTypeInfo_Struct2 exclude__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

#line 102 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_0;

#line 105 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_1[1];

#line 108 "exclude.c"
static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_1[1];

#line 111 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_1;

#line 114 "exclude.c"
static const MR_FA_TypeInfo_Struct1 exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0;

#line 117 "exclude.c"
static const MR_FA_TypeInfo_Struct1 exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

#line 120 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_2[2];

#line 123 "exclude.c"
static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_2[2];

#line 126 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_2;

#line 129 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_0[1];

#line 132 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_1[1];

#line 135 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_2[1];

#line 138 "exclude.c"
static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_contents_0[3];

#line 141 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_contents_0[3];

#line 144 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclude_contents_0[3];

#line 147 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_file_0_0[2];

#line 150 "exclude.c"
static const MR_ConstString exclude__exclude__field_names_exclude_file_0_0[2];

#line 153 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_file_0_0;

#line 156 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_file_0_0[1];

#line 159 "exclude.c"
static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_file_0[1];

#line 162 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_file_0[1];

#line 165 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclude_file_0[1];

#line 168 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_spec_0_0[2];

#line 171 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_spec_0_0;

#line 174 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_spec_0_0[1];

#line 177 "exclude.c"
static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_spec_0[1];

#line 180 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_spec_0[1];

#line 183 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclude_spec_0[1];

#line 186 "exclude.c"
static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_0;

#line 189 "exclude.c"
static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_1;

#line 192 "exclude.c"
static const MR_EnumFunctorDescPtr exclude__exclude__enum_value_ordered_exclusion_type_0[2];

#line 195 "exclude.c"
static const MR_EnumFunctorDescPtr exclude__exclude__enum_name_ordered_exclusion_type_0[2];

#line 198 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclusion_type_0[2];

#line 201 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0_10001(
#line 204 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 206 "exclude.c"
  MR_Box exclude__wrapper_arg_2);

#line 209 "exclude.c"
static void MR_CALL 
exclude____Compare____exclude_contents_0_0_10001(
#line 212 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 214 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 216 "exclude.c"
  MR_Box exclude__wrapper_arg_3);

#line 219 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0_10001(
#line 222 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 224 "exclude.c"
  MR_Box exclude__wrapper_arg_2);

#line 227 "exclude.c"
static void MR_CALL 
exclude____Compare____exclude_file_0_0_10001(
#line 230 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 232 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 234 "exclude.c"
  MR_Box exclude__wrapper_arg_3);

#line 237 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0_10001(
#line 240 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 242 "exclude.c"
  MR_Box exclude__wrapper_arg_2);

#line 245 "exclude.c"
static void MR_CALL 
exclude____Compare____exclude_spec_0_0_10001(
#line 248 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 250 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 252 "exclude.c"
  MR_Box exclude__wrapper_arg_3);

#line 255 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0_10001(
#line 258 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 260 "exclude.c"
  MR_Box exclude__wrapper_arg_2);

#line 263 "exclude.c"
static void MR_CALL 
exclude____Compare____excluded_modules_0_0_10001(
#line 266 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 268 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 270 "exclude.c"
  MR_Box exclude__wrapper_arg_3);

#line 273 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0_10001(
#line 276 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 278 "exclude.c"
  MR_Box exclude__wrapper_arg_2);

#line 281 "exclude.c"
static void MR_CALL 
exclude____Compare____exclusion_type_0_0_10001(
#line 284 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 286 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 288 "exclude.c"
  MR_Box exclude__wrapper_arg_3);

#line 100 "exclude.m"
static void MR_CALL 
exclude____Compare____exclusion_type_0_0(
#line 100 "exclude.m"
  MR_Word * exclude__HeadVar__1_1,
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__2_2,
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__3_3);

#line 100 "exclude.m"
static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0(
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__2_1,
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__2_2);

#line 215 "exclude.m"
static MR_String MR_CALL 
exclude__spec_to_module_name_1_f_0(
#line 215 "exclude.m"
  MR_Word exclude__HeadVar__1_1);

#line 209 "exclude.m"
static MR_bool MR_CALL 
exclude__has_valid_module_name_2_p_0(
#line 209 "exclude.m"
  MR_Word exclude__ModuleDataMap_3,
#line 209 "exclude.m"
  MR_Word exclude__Spec_4);

#line 145 "exclude.m"
static MR_bool MR_CALL 
exclude__read_exclude_lines_6_p_0_1(
#line 145 "exclude.m"
  MR_Box exclude__closure_arg,
#line 145 "exclude.m"
  MR_Box exclude__wrapper_arg_1);

#line 131 "exclude.m"
static void MR_CALL 
exclude__read_exclude_lines_6_p_0(
#line 131 "exclude.m"
  MR_String exclude__FileName_7,
#line 131 "exclude.m"
  MR_Word exclude__InputStream_8,
#line 131 "exclude.m"
  MR_Word exclude__RevSpecs0_9,
#line 131 "exclude.m"
  MR_Word * exclude__Res_10);

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_1(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg);

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_3(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg);

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_2(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg);

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_4(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg);

#line 187 "exclude.m"
static MR_Box MR_CALL 
exclude__read_exclude_file_5_p_0_2(
#line 187 "exclude.m"
  MR_Box exclude__closure_arg,
#line 187 "exclude.m"
  MR_Box exclude__wrapper_arg_1);

#line 176 "exclude.m"
static MR_bool MR_CALL 
exclude__read_exclude_file_5_p_0_1(
#line 176 "exclude.m"
  MR_Box exclude__closure_arg,
#line 176 "exclude.m"
  MR_Box exclude__wrapper_arg_1);


static /* final */ const MR_Box exclude_scalar_common_1[2][2];

static /* final */ const MR_Box exclude_scalar_common_2[2][5];

static /* final */ const MR_Box exclude_scalar_common_3[2][3];

static /* final */ const MR_Box exclude_scalar_common_4[1][4];




static /* final */ const MR_Box exclude_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&exclude__exclude__type_ctor_info_exclude_spec_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box exclude_scalar_common_2[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&exclude__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&exclude__exclude__type_ctor_info_exclude_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&exclude__exclude__type_ctor_info_exclude_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box exclude_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&exclude_scalar_common_2[1])),
    ((MR_Box) (exclude__read_exclude_file_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&exclude_scalar_common_4[0])),
    ((MR_Box) (exclude__read_exclude_lines_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box exclude_scalar_common_4[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "profile.mh"
#include "profile.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 471 "exclude.c"
static const MR_FA_PseudoTypeInfo_Struct2 exclude__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

#line 480 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_0 = {
  (MR_String) "no_exclude_file",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 495 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 500 "exclude.c"
static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_1[1] = {
  (MR_String) "exclude_syntax_error"
};

#line 505 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_1 = {
  (MR_String) "unreadable_exclude_file",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  exclude__exclude__field_types_exclude_contents_0_1,
  exclude__exclude__field_names_exclude_contents_0_1,
  NULL,
  NULL
};

#line 520 "exclude.c"
static const MR_FA_TypeInfo_Struct1 exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &exclude__exclude__type_ctor_info_exclude_spec_0
  }
};

#line 528 "exclude.c"
static const MR_FA_TypeInfo_Struct1 exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 536 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_2[2] = {
  (MR_PseudoTypeInfo) &exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0,
  (MR_PseudoTypeInfo) &exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

#line 542 "exclude.c"
static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_2[2] = {
  (MR_String) "exclude_specs",
  (MR_String) "exclude_maybe_error"
};

#line 548 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_2 = {
  (MR_String) "readable_exclude_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  exclude__exclude__field_types_exclude_contents_0_2,
  exclude__exclude__field_names_exclude_contents_0_2,
  NULL,
  NULL
};

#line 563 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_0
};

#line 568 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_1[1] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_1
};

#line 573 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_2[1] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_2
};

#line 578 "exclude.c"
static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_contents_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    exclude__exclude__du_stag_ordered_exclude_contents_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_contents_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_contents_0_2
  }
};

#line 597 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_contents_0[3] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_0,
  &exclude__exclude__du_functor_desc_exclude_contents_0_2,
  &exclude__exclude__du_functor_desc_exclude_contents_0_1
};

#line 604 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclude_contents_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 611 "exclude.c"
const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclude_contents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_contents_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_contents_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_contents",
  {
    exclude__exclude__du_name_ordered_exclude_contents_0
  },
  {
    exclude__exclude__du_ptag_ordered_exclude_contents_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclude_contents_0
};

#line 632 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &exclude__exclude__type_ctor_info_exclude_contents_0
};

#line 638 "exclude.c"
static const MR_ConstString exclude__exclude__field_names_exclude_file_0_0[2] = {
  (MR_String) "exclude_filename",
  (MR_String) "exclude_file_contents"
};

#line 644 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_file_0_0 = {
  (MR_String) "exclude_file",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  exclude__exclude__field_types_exclude_file_0_0,
  exclude__exclude__field_names_exclude_file_0_0,
  NULL,
  NULL
};

#line 659 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_file_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_file_0_0
};

#line 664 "exclude.c"
static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_file_0_0
  }
};

#line 673 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_file_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_file_0_0
};

#line 678 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclude_file_0[1] = {
  (MR_Integer) 0
};

#line 683 "exclude.c"
const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclude_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_file_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_file_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_file",
  {
    exclude__exclude__du_name_ordered_exclude_file_0
  },
  {
    exclude__exclude__du_ptag_ordered_exclude_file_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclude_file_0
};

#line 704 "exclude.c"
static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &exclude__exclude__type_ctor_info_exclusion_type_0
};

#line 710 "exclude.c"
static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_spec_0_0 = {
  (MR_String) "exclude_spec",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  exclude__exclude__field_types_exclude_spec_0_0,
  NULL,
  NULL,
  NULL
};

#line 725 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_spec_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_spec_0_0
};

#line 730 "exclude.c"
static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_spec_0_0
  }
};

#line 739 "exclude.c"
static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_spec_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_spec_0_0
};

#line 744 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclude_spec_0[1] = {
  (MR_Integer) 0
};

#line 749 "exclude.c"
const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclude_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_spec_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_spec_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_spec",
  {
    exclude__exclude__du_name_ordered_exclude_spec_0
  },
  {
    exclude__exclude__du_ptag_ordered_exclude_spec_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclude_spec_0
};

#line 770 "exclude.c"
const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_excluded_modules_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (exclude____Unify____excluded_modules_0_0_10001)),
  ((MR_Box) (exclude____Compare____excluded_modules_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "excluded_modules",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 791 "exclude.c"
static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_0 = {
  (MR_String) "exclude_all_procedures",
  (MR_Integer) 0
};

#line 797 "exclude.c"
static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_1 = {
  (MR_String) "exclude_internal_procedures",
  (MR_Integer) 1
};

#line 803 "exclude.c"
static const MR_EnumFunctorDescPtr exclude__exclude__enum_value_ordered_exclusion_type_0[2] = {
  &exclude__exclude__enum_functor_desc_exclusion_type_0_0,
  &exclude__exclude__enum_functor_desc_exclusion_type_0_1
};

#line 809 "exclude.c"
static const MR_EnumFunctorDescPtr exclude__exclude__enum_name_ordered_exclusion_type_0[2] = {
  &exclude__exclude__enum_functor_desc_exclusion_type_0_0,
  &exclude__exclude__enum_functor_desc_exclusion_type_0_1
};

#line 815 "exclude.c"
static const MR_Integer exclude__exclude__functor_number_map_exclusion_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 821 "exclude.c"
const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclusion_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (exclude____Unify____exclusion_type_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclusion_type_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclusion_type",
  {
    exclude__exclude__enum_name_ordered_exclusion_type_0
  },
  {
    exclude__exclude__enum_value_ordered_exclusion_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclusion_type_0
};

#line 842 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0_10001(
#line 845 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 847 "exclude.c"
  MR_Box exclude__wrapper_arg_2)
#line 849 "exclude.c"
{
#line 851 "exclude.c"
  {
#line 853 "exclude.c"
    MR_bool exclude__succeeded;

#line 856 "exclude.c"
    {
#line 858 "exclude.c"
      exclude__succeeded = exclude____Unify____exclude_contents_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
#line 861 "exclude.c"
    return exclude__succeeded;
#line 863 "exclude.c"
  }
#line 865 "exclude.c"
}

#line 868 "exclude.c"
static void MR_CALL 
exclude____Compare____exclude_contents_0_0_10001(
#line 871 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 873 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 875 "exclude.c"
  MR_Box exclude__wrapper_arg_3)
#line 877 "exclude.c"
{
#line 879 "exclude.c"
  {
#line 881 "exclude.c"
    MR_Word exclude__conv0_HeadVar__1_1;

#line 884 "exclude.c"
    {
#line 886 "exclude.c"
      exclude____Compare____exclude_contents_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
#line 889 "exclude.c"
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
#line 891 "exclude.c"
  }
#line 893 "exclude.c"
}

#line 896 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0_10001(
#line 899 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 901 "exclude.c"
  MR_Box exclude__wrapper_arg_2)
#line 903 "exclude.c"
{
#line 905 "exclude.c"
  {
#line 907 "exclude.c"
    MR_bool exclude__succeeded;

#line 910 "exclude.c"
    {
#line 912 "exclude.c"
      exclude__succeeded = exclude____Unify____exclude_file_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
#line 915 "exclude.c"
    return exclude__succeeded;
#line 917 "exclude.c"
  }
#line 919 "exclude.c"
}

#line 922 "exclude.c"
static void MR_CALL 
exclude____Compare____exclude_file_0_0_10001(
#line 925 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 927 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 929 "exclude.c"
  MR_Box exclude__wrapper_arg_3)
#line 931 "exclude.c"
{
#line 933 "exclude.c"
  {
#line 935 "exclude.c"
    MR_Word exclude__conv0_HeadVar__1_1;

#line 938 "exclude.c"
    {
#line 940 "exclude.c"
      exclude____Compare____exclude_file_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
#line 943 "exclude.c"
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
#line 945 "exclude.c"
  }
#line 947 "exclude.c"
}

#line 950 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0_10001(
#line 953 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 955 "exclude.c"
  MR_Box exclude__wrapper_arg_2)
#line 957 "exclude.c"
{
#line 959 "exclude.c"
  {
#line 961 "exclude.c"
    MR_bool exclude__succeeded;

#line 964 "exclude.c"
    {
#line 966 "exclude.c"
      exclude__succeeded = exclude____Unify____exclude_spec_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
#line 969 "exclude.c"
    return exclude__succeeded;
#line 971 "exclude.c"
  }
#line 973 "exclude.c"
}

#line 976 "exclude.c"
static void MR_CALL 
exclude____Compare____exclude_spec_0_0_10001(
#line 979 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 981 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 983 "exclude.c"
  MR_Box exclude__wrapper_arg_3)
#line 985 "exclude.c"
{
#line 987 "exclude.c"
  {
#line 989 "exclude.c"
    MR_Word exclude__conv0_HeadVar__1_1;

#line 992 "exclude.c"
    {
#line 994 "exclude.c"
      exclude____Compare____exclude_spec_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
#line 997 "exclude.c"
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
#line 999 "exclude.c"
  }
#line 1001 "exclude.c"
}

#line 1004 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0_10001(
#line 1007 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 1009 "exclude.c"
  MR_Box exclude__wrapper_arg_2)
#line 1011 "exclude.c"
{
#line 1013 "exclude.c"
  {
#line 1015 "exclude.c"
    MR_bool exclude__succeeded;

#line 1018 "exclude.c"
    {
#line 1020 "exclude.c"
      exclude__succeeded = exclude____Unify____excluded_modules_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
#line 1023 "exclude.c"
    return exclude__succeeded;
#line 1025 "exclude.c"
  }
#line 1027 "exclude.c"
}

#line 1030 "exclude.c"
static void MR_CALL 
exclude____Compare____excluded_modules_0_0_10001(
#line 1033 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 1035 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 1037 "exclude.c"
  MR_Box exclude__wrapper_arg_3)
#line 1039 "exclude.c"
{
#line 1041 "exclude.c"
  {
#line 1043 "exclude.c"
    MR_Word exclude__conv0_HeadVar__1_1;

#line 1046 "exclude.c"
    {
#line 1048 "exclude.c"
      exclude____Compare____excluded_modules_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
#line 1051 "exclude.c"
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
#line 1053 "exclude.c"
  }
#line 1055 "exclude.c"
}

#line 1058 "exclude.c"
static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0_10001(
#line 1061 "exclude.c"
  MR_Box exclude__wrapper_arg_1,
#line 1063 "exclude.c"
  MR_Box exclude__wrapper_arg_2)
#line 1065 "exclude.c"
{
#line 1067 "exclude.c"
  {
#line 1069 "exclude.c"
    MR_bool exclude__succeeded;

#line 1072 "exclude.c"
    {
#line 1074 "exclude.c"
      exclude__succeeded = exclude____Unify____exclusion_type_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
#line 1077 "exclude.c"
    return exclude__succeeded;
#line 1079 "exclude.c"
  }
#line 1081 "exclude.c"
}

#line 1084 "exclude.c"
static void MR_CALL 
exclude____Compare____exclusion_type_0_0_10001(
#line 1087 "exclude.c"
  MR_Box * exclude__wrapper_arg_1,
#line 1089 "exclude.c"
  MR_Box exclude__wrapper_arg_2,
#line 1091 "exclude.c"
  MR_Box exclude__wrapper_arg_3)
#line 1093 "exclude.c"
{
#line 1095 "exclude.c"
  {
#line 1097 "exclude.c"
    MR_Word exclude__conv0_HeadVar__1_1;

#line 1100 "exclude.c"
    {
#line 1102 "exclude.c"
      exclude____Compare____exclusion_type_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
#line 1105 "exclude.c"
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
#line 1107 "exclude.c"
  }
#line 1109 "exclude.c"
}

#line 100 "exclude.m"
static void MR_CALL 
exclude____Compare____exclusion_type_0_0(
#line 100 "exclude.m"
  MR_Word * exclude__HeadVar__1_1,
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__2_2,
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__3_3)
#line 100 "exclude.m"
{
#line 100 "exclude.m"
  {
#line 100 "exclude.m"
    MR_bool exclude__succeeded;
#line 100 "exclude.m"
    MR_Integer exclude__Cast_HeadVar1_4 = (MR_Integer) exclude__HeadVar__2_2;
#line 100 "exclude.m"
    MR_Integer exclude__Cast_HeadVar2_5 = (MR_Integer) exclude__HeadVar__3_3;

#line 100 "exclude.m"
    {
#line 100 "exclude.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(exclude__HeadVar__1_1, exclude__Cast_HeadVar1_4, exclude__Cast_HeadVar2_5);
#line 100 "exclude.m"
      return;
    }
#line 100 "exclude.m"
  }
#line 100 "exclude.m"
}

#line 100 "exclude.m"
static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0(
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__2_1,
#line 100 "exclude.m"
  MR_Word exclude__HeadVar__2_2)
#line 100 "exclude.m"
{
#line 1153 "exclude.c"
  {
#line 1155 "exclude.c"
    MR_bool exclude__succeeded = (exclude__HeadVar__2_1 == exclude__HeadVar__2_2);

#line 1158 "exclude.c"
    return exclude__succeeded;
#line 1160 "exclude.c"
  }
#line 100 "exclude.m"
}

#line 91 "exclude.m"
void MR_CALL 
exclude____Compare____excluded_modules_0_0(
#line 91 "exclude.m"
  MR_Word * exclude__HeadVar__1_1,
#line 91 "exclude.m"
  MR_Word exclude__HeadVar__2_2,
#line 91 "exclude.m"
  MR_Word exclude__HeadVar__3_3)
#line 91 "exclude.m"
{
#line 91 "exclude.m"
  {
#line 91 "exclude.m"
    MR_bool exclude__succeeded;
#line 91 "exclude.m"
    MR_Word exclude__Cast_HeadVar1_4 = exclude__HeadVar__2_2;
#line 91 "exclude.m"
    MR_Word exclude__Cast_HeadVar2_5 = exclude__HeadVar__3_3;

#line 91 "exclude.m"
    {
#line 91 "exclude.m"
      mercury__builtin__compare_3_p_0((MR_Word) &exclude_scalar_common_1[0], exclude__HeadVar__1_1, ((MR_Box) (exclude__Cast_HeadVar1_4)), ((MR_Box) (exclude__Cast_HeadVar2_5)));
#line 91 "exclude.m"
      return;
    }
#line 91 "exclude.m"
  }
#line 91 "exclude.m"
}

#line 91 "exclude.m"
MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0(
#line 91 "exclude.m"
  MR_Word exclude__HeadVar__1_1,
#line 91 "exclude.m"
  MR_Word exclude__HeadVar__2_2)
#line 91 "exclude.m"
{
#line 91 "exclude.m"
  {
#line 91 "exclude.m"
    MR_bool exclude__succeeded;
#line 91 "exclude.m"
    MR_Word exclude__Cast_HeadVar1_3 = exclude__HeadVar__1_1;
#line 91 "exclude.m"
    MR_Word exclude__Cast_HeadVar2_4 = exclude__HeadVar__2_2;

#line 91 "exclude.m"
    {
#line 91 "exclude.m"
      return exclude__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &exclude_scalar_common_1[0], ((MR_Box) (exclude__Cast_HeadVar1_3)), ((MR_Box) (exclude__Cast_HeadVar2_4)));
    }
#line 91 "exclude.m"
    return exclude__succeeded;
#line 91 "exclude.m"
  }
#line 91 "exclude.m"
}

#line 93 "exclude.m"
void MR_CALL 
exclude____Compare____exclude_spec_0_0(
#line 93 "exclude.m"
  MR_Word * exclude__HeadVar__1_1,
#line 93 "exclude.m"
  MR_Word exclude__HeadVar__2_2,
#line 93 "exclude.m"
  MR_Word exclude__HeadVar__3_3)
#line 93 "exclude.m"
{
#line 93 "exclude.m"
  {
#line 93 "exclude.m"
    MR_bool exclude__succeeded;
#line 93 "exclude.m"
    MR_Integer exclude__CastX_9 = (MR_Integer) exclude__HeadVar__2_2;
#line 93 "exclude.m"
    MR_Integer exclude__CastY_10 = (MR_Integer) exclude__HeadVar__3_3;

#line 93 "exclude.m"
    exclude__succeeded = (exclude__CastX_9 == exclude__CastY_10);
#line 93 "exclude.m"
    if (exclude__succeeded)
#line 1251 "exclude.c"
      *exclude__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "exclude.m"
    else
#line 93 "exclude.m"
      {
#line 93 "exclude.m"
        MR_String exclude__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "exclude.m"
        MR_Word exclude__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "exclude.m"
        MR_String exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "exclude.m"
        MR_Word exclude__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "exclude.m"
        MR_Word exclude__V_8_8;

#line 93 "exclude.m"
        {
#line 93 "exclude.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&exclude__V_8_8, exclude__V_4_4, exclude__V_6_6);
        }
#line 1273 "exclude.c"
        exclude__succeeded = (exclude__V_8_8 == (MR_Integer) 0);
#line 93 "exclude.m"
        exclude__succeeded = !(exclude__succeeded);
#line 93 "exclude.m"
        if (exclude__succeeded)
#line 93 "exclude.m"
          *exclude__HeadVar__1_1 = exclude__V_8_8;
#line 93 "exclude.m"
        else
#line 93 "exclude.m"
          {
#line 93 "exclude.m"
            MR_Integer exclude__V_13_13 = (MR_Integer) exclude__V_5_5;
#line 93 "exclude.m"
            MR_Integer exclude__V_14_14 = (MR_Integer) exclude__V_7_7;

#line 93 "exclude.m"
            {
#line 93 "exclude.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(exclude__HeadVar__1_1, exclude__V_13_13, exclude__V_14_14);
#line 93 "exclude.m"
              return;
            }
#line 93 "exclude.m"
          }
#line 93 "exclude.m"
      }
#line 93 "exclude.m"
  }
#line 93 "exclude.m"
}

#line 93 "exclude.m"
MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0(
#line 93 "exclude.m"
  MR_Word exclude__HeadVar__1_1,
#line 93 "exclude.m"
  MR_Word exclude__HeadVar__2_2)
#line 93 "exclude.m"
{
#line 93 "exclude.m"
  {
#line 93 "exclude.m"
    MR_bool exclude__succeeded;
#line 93 "exclude.m"
    MR_Integer exclude__CastX_7 = (MR_Integer) exclude__HeadVar__1_1;
#line 93 "exclude.m"
    MR_Integer exclude__CastY_8 = (MR_Integer) exclude__HeadVar__2_2;

#line 93 "exclude.m"
    exclude__succeeded = (exclude__CastX_7 == exclude__CastY_8);
#line 93 "exclude.m"
    if (exclude__succeeded)
#line 93 "exclude.m"
      exclude__succeeded = MR_TRUE;
#line 93 "exclude.m"
    else
#line 93 "exclude.m"
      {
#line 93 "exclude.m"
        MR_String exclude__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "exclude.m"
        MR_Word exclude__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "exclude.m"
        MR_String exclude__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "exclude.m"
        MR_Word exclude__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));

#line 1343 "exclude.c"
        exclude__succeeded = (strcmp(exclude__V_3_3, exclude__V_5_5) == 0);
#line 93 "exclude.m"
        if (exclude__succeeded)
#line 1347 "exclude.c"
          exclude__succeeded = (exclude__V_4_4 == exclude__V_6_6);
#line 93 "exclude.m"
      }
#line 93 "exclude.m"
    return exclude__succeeded;
#line 93 "exclude.m"
  }
#line 93 "exclude.m"
}

#line 54 "exclude.m"
void MR_CALL 
exclude____Compare____exclude_file_0_0(
#line 54 "exclude.m"
  MR_Word * exclude__HeadVar__1_1,
#line 54 "exclude.m"
  MR_Word exclude__HeadVar__2_2,
#line 54 "exclude.m"
  MR_Word exclude__HeadVar__3_3)
#line 54 "exclude.m"
{
#line 54 "exclude.m"
  {
#line 54 "exclude.m"
    MR_bool exclude__succeeded;
#line 54 "exclude.m"
    MR_Integer exclude__CastX_9 = (MR_Integer) exclude__HeadVar__2_2;
#line 54 "exclude.m"
    MR_Integer exclude__CastY_10 = (MR_Integer) exclude__HeadVar__3_3;

#line 54 "exclude.m"
    exclude__succeeded = (exclude__CastX_9 == exclude__CastY_10);
#line 54 "exclude.m"
    if (exclude__succeeded)
#line 1382 "exclude.c"
      *exclude__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "exclude.m"
    else
#line 54 "exclude.m"
      {
#line 54 "exclude.m"
        MR_String exclude__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "exclude.m"
        MR_Word exclude__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "exclude.m"
        MR_String exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "exclude.m"
        MR_Word exclude__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "exclude.m"
        MR_Word exclude__V_8_8;

#line 54 "exclude.m"
        {
#line 54 "exclude.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&exclude__V_8_8, exclude__V_4_4, exclude__V_6_6);
        }
#line 1404 "exclude.c"
        exclude__succeeded = (exclude__V_8_8 == (MR_Integer) 0);
#line 54 "exclude.m"
        exclude__succeeded = !(exclude__succeeded);
#line 54 "exclude.m"
        if (exclude__succeeded)
#line 54 "exclude.m"
          *exclude__HeadVar__1_1 = exclude__V_8_8;
#line 54 "exclude.m"
        else
#line 54 "exclude.m"
          {
#line 54 "exclude.m"
            exclude____Compare____exclude_contents_0_0(exclude__HeadVar__1_1, exclude__V_5_5, exclude__V_7_7);
#line 54 "exclude.m"
            return;
          }
#line 54 "exclude.m"
      }
#line 54 "exclude.m"
  }
#line 54 "exclude.m"
}

#line 54 "exclude.m"
MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0(
#line 54 "exclude.m"
  MR_Word exclude__HeadVar__1_1,
#line 54 "exclude.m"
  MR_Word exclude__HeadVar__2_2)
#line 54 "exclude.m"
{
#line 54 "exclude.m"
  {
#line 54 "exclude.m"
    MR_bool exclude__succeeded;
#line 54 "exclude.m"
    MR_Integer exclude__CastX_7 = (MR_Integer) exclude__HeadVar__1_1;
#line 54 "exclude.m"
    MR_Integer exclude__CastY_8 = (MR_Integer) exclude__HeadVar__2_2;

#line 54 "exclude.m"
    exclude__succeeded = (exclude__CastX_7 == exclude__CastY_8);
#line 54 "exclude.m"
    if (exclude__succeeded)
#line 54 "exclude.m"
      exclude__succeeded = MR_TRUE;
#line 54 "exclude.m"
    else
#line 54 "exclude.m"
      {
#line 54 "exclude.m"
        MR_String exclude__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "exclude.m"
        MR_Word exclude__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "exclude.m"
        MR_String exclude__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "exclude.m"
        MR_Word exclude__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));

#line 1465 "exclude.c"
        exclude__succeeded = (strcmp(exclude__V_3_3, exclude__V_5_5) == 0);
#line 54 "exclude.m"
        if (exclude__succeeded)
#line 1469 "exclude.c"
          {
#line 1471 "exclude.c"
            return exclude__succeeded = exclude____Unify____exclude_contents_0_0(exclude__V_4_4, exclude__V_6_6);
          }
#line 54 "exclude.m"
      }
#line 54 "exclude.m"
    return exclude__succeeded;
#line 54 "exclude.m"
  }
#line 54 "exclude.m"
}

#line 60 "exclude.m"
void MR_CALL 
exclude____Compare____exclude_contents_0_0(
#line 60 "exclude.m"
  MR_Word * exclude__HeadVar__1_1,
#line 60 "exclude.m"
  MR_Word exclude__HeadVar__2_2,
#line 60 "exclude.m"
  MR_Word exclude__HeadVar__3_3)
#line 60 "exclude.m"
{
#line 60 "exclude.m"
  {
#line 60 "exclude.m"
    MR_bool exclude__succeeded;
#line 60 "exclude.m"
    MR_Integer exclude__CastX_23 = (MR_Integer) exclude__HeadVar__2_2;
#line 60 "exclude.m"
    MR_Integer exclude__CastY_24 = (MR_Integer) exclude__HeadVar__3_3;

#line 60 "exclude.m"
    exclude__succeeded = (exclude__CastX_23 == exclude__CastY_24);
#line 60 "exclude.m"
    if (exclude__succeeded)
#line 1507 "exclude.c"
      *exclude__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "exclude.m"
    else
#line 60 "exclude.m"
      if ((exclude__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 60 "exclude.m"
        if ((exclude__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 60 "exclude.m"
          *exclude__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "exclude.m"
        else
#line 60 "exclude.m"
          if (((MR_tag((MR_Word) exclude__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1521 "exclude.c"
            *exclude__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "exclude.m"
          else
#line 1525 "exclude.c"
            *exclude__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "exclude.m"
      else
#line 60 "exclude.m"
        if (((MR_tag((MR_Word) exclude__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 60 "exclude.m"
          {
#line 60 "exclude.m"
            MR_Word exclude__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 1)));
#line 60 "exclude.m"
            MR_Word exclude__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "exclude.m"
            if ((exclude__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1540 "exclude.c"
              *exclude__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "exclude.m"
            else
#line 60 "exclude.m"
              if (((MR_tag((MR_Word) exclude__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 60 "exclude.m"
                {
#line 60 "exclude.m"
                  MR_Word exclude__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__3_3, (MR_Integer) 0)));
#line 60 "exclude.m"
                  MR_Word exclude__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__3_3, (MR_Integer) 1)));
#line 60 "exclude.m"
                  MR_Word exclude__V_22_22;

#line 60 "exclude.m"
                  {
#line 60 "exclude.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &exclude_scalar_common_1[0], &exclude__V_22_22, ((MR_Box) (exclude__V_29_29)), ((MR_Box) (exclude__V_20_20)));
                  }
#line 1560 "exclude.c"
                  exclude__succeeded = (exclude__V_22_22 == (MR_Integer) 0);
#line 60 "exclude.m"
                  exclude__succeeded = !(exclude__succeeded);
#line 60 "exclude.m"
                  if (exclude__succeeded)
#line 60 "exclude.m"
                    *exclude__HeadVar__1_1 = exclude__V_22_22;
#line 60 "exclude.m"
                  else
#line 60 "exclude.m"
                    {
#line 60 "exclude.m"
                      {
#line 60 "exclude.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &exclude_scalar_common_1[1], exclude__HeadVar__1_1, ((MR_Box) (exclude__V_28_28)), ((MR_Box) (exclude__V_21_21)));
#line 60 "exclude.m"
                        return;
                      }
#line 60 "exclude.m"
                    }
#line 60 "exclude.m"
                }
#line 60 "exclude.m"
              else
#line 1585 "exclude.c"
                *exclude__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "exclude.m"
          }
#line 60 "exclude.m"
        else
#line 60 "exclude.m"
          {
#line 60 "exclude.m"
            MR_String exclude__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__2_2, (MR_Integer) 0)));

#line 60 "exclude.m"
            if ((exclude__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1598 "exclude.c"
              *exclude__HeadVar__1_1 = (MR_Integer) 2;
#line 60 "exclude.m"
            else
#line 60 "exclude.m"
              if (((MR_tag((MR_Word) exclude__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1604 "exclude.c"
                *exclude__HeadVar__1_1 = (MR_Integer) 1;
#line 60 "exclude.m"
              else
#line 60 "exclude.m"
                {
#line 60 "exclude.m"
                  MR_String exclude__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__3_3, (MR_Integer) 0)));

#line 60 "exclude.m"
                  {
#line 60 "exclude.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(exclude__HeadVar__1_1, exclude__V_30_30, exclude__V_9_9);
#line 60 "exclude.m"
                    return;
                  }
#line 60 "exclude.m"
                }
#line 60 "exclude.m"
          }
#line 60 "exclude.m"
  }
#line 60 "exclude.m"
}

#line 60 "exclude.m"
MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0(
#line 60 "exclude.m"
  MR_Word exclude__HeadVar__1_1,
#line 60 "exclude.m"
  MR_Word exclude__HeadVar__2_2)
#line 60 "exclude.m"
{
#line 60 "exclude.m"
  {
#line 60 "exclude.m"
    MR_bool exclude__succeeded;
#line 60 "exclude.m"
    MR_Integer exclude__CastX_11 = (MR_Integer) exclude__HeadVar__1_1;
#line 60 "exclude.m"
    MR_Integer exclude__CastY_12 = (MR_Integer) exclude__HeadVar__2_2;

#line 60 "exclude.m"
    exclude__succeeded = (exclude__CastX_11 == exclude__CastY_12);
#line 60 "exclude.m"
    if (exclude__succeeded)
#line 60 "exclude.m"
      exclude__succeeded = MR_TRUE;
#line 60 "exclude.m"
    else
#line 60 "exclude.m"
      if ((exclude__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 60 "exclude.m"
        {
#line 60 "exclude.m"
          MR_Integer exclude__CastX_3 = (MR_Integer) exclude__HeadVar__1_1;
#line 60 "exclude.m"
          MR_Integer exclude__CastY_4 = (MR_Integer) exclude__HeadVar__2_2;

#line 60 "exclude.m"
          exclude__succeeded = (exclude__CastY_4 == exclude__CastX_3);
#line 60 "exclude.m"
        }
#line 60 "exclude.m"
      else
#line 60 "exclude.m"
        if (((MR_tag((MR_Word) exclude__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 60 "exclude.m"
          {
#line 60 "exclude.m"
            MR_Word exclude__TypeInfo_13_13;
#line 60 "exclude.m"
            MR_Word exclude__TypeInfo_14_14;
#line 60 "exclude.m"
            MR_Word exclude__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "exclude.m"
            MR_Word exclude__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__1_1, (MR_Integer) 1)));
#line 60 "exclude.m"
            MR_Word exclude__V_9_9;
#line 60 "exclude.m"
            MR_Word exclude__V_10_10;

#line 60 "exclude.m"
            exclude__succeeded = ((MR_tag((MR_Word) exclude__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 60 "exclude.m"
            if (exclude__succeeded)
#line 60 "exclude.m"
              {
#line 60 "exclude.m"
                exclude__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "exclude.m"
                exclude__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 1)));
#line 1697 "exclude.c"
                exclude__TypeInfo_13_13 = (MR_Word) &exclude_scalar_common_1[0];
#line 1699 "exclude.c"
                {
#line 1701 "exclude.c"
                  exclude__succeeded = mercury__builtin__unify_2_p_0(exclude__TypeInfo_13_13, ((MR_Box) (exclude__V_7_7)), ((MR_Box) (exclude__V_9_9)));
                }
#line 60 "exclude.m"
                if (exclude__succeeded)
#line 60 "exclude.m"
                  {
#line 1708 "exclude.c"
                    exclude__TypeInfo_14_14 = (MR_Word) &exclude_scalar_common_1[1];
#line 1710 "exclude.c"
                    {
#line 1712 "exclude.c"
                      return exclude__succeeded = mercury__builtin__unify_2_p_0(exclude__TypeInfo_14_14, ((MR_Box) (exclude__V_8_8)), ((MR_Box) (exclude__V_10_10)));
                    }
#line 60 "exclude.m"
                  }
#line 60 "exclude.m"
              }
#line 60 "exclude.m"
          }
#line 60 "exclude.m"
        else
#line 60 "exclude.m"
          {
#line 60 "exclude.m"
            MR_String exclude__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "exclude.m"
            MR_String exclude__V_6_6;

#line 60 "exclude.m"
            exclude__succeeded = ((MR_tag((MR_Word) exclude__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 60 "exclude.m"
            if (exclude__succeeded)
#line 60 "exclude.m"
              {
#line 60 "exclude.m"
                exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__2_2, (MR_Integer) 0)));
#line 1738 "exclude.c"
                exclude__succeeded = (strcmp(exclude__V_5_5, exclude__V_6_6) == 0);
#line 60 "exclude.m"
              }
#line 60 "exclude.m"
          }
#line 60 "exclude.m"
    return exclude__succeeded;
#line 60 "exclude.m"
  }
#line 60 "exclude.m"
}

#line 215 "exclude.m"
static MR_String MR_CALL 
exclude__spec_to_module_name_1_f_0(
#line 215 "exclude.m"
  MR_Word exclude__HeadVar__1_1)
#line 215 "exclude.m"
{
#line 217 "exclude.m"
  {
#line 217 "exclude.m"
    MR_bool exclude__succeeded;
#line 217 "exclude.m"
    MR_String exclude__ModuleName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "exclude.m"
    MR_Word exclude__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 1)));

#line 217 "exclude.m"
    return exclude__ModuleName_3;
#line 217 "exclude.m"
  }
#line 215 "exclude.m"
}

#line 209 "exclude.m"
static MR_bool MR_CALL 
exclude__has_valid_module_name_2_p_0(
#line 209 "exclude.m"
  MR_Word exclude__ModuleDataMap_3,
#line 209 "exclude.m"
  MR_Word exclude__Spec_4)
#line 209 "exclude.m"
{
#line 212 "exclude.m"
  {
#line 212 "exclude.m"
    MR_bool exclude__succeeded;
#line 212 "exclude.m"
    MR_String exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__Spec_4, (MR_Integer) 0)));
#line 217 "exclude.m"
    MR_Word exclude__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__Spec_4, (MR_Integer) 1)));
#line 213 "exclude.m"
    MR_Word exclude__V_5_5;
#line 213 "exclude.m"
    MR_Box exclude__conv0_V_5_5;

#line 213 "exclude.m"
    {
#line 213 "exclude.m"
      exclude__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, exclude__ModuleDataMap_3, ((MR_Box) (exclude__V_6_6)), &exclude__conv0_V_5_5);
    }
#line 213 "exclude.m"
    if (exclude__succeeded)
#line 213 "exclude.m"
      {
#line 213 "exclude.m"
        exclude__V_5_5 = ((MR_Word) exclude__conv0_V_5_5);
#line 213 "exclude.m"
        exclude__succeeded = MR_TRUE;
#line 213 "exclude.m"
      }
#line 212 "exclude.m"
    return exclude__succeeded;
#line 212 "exclude.m"
  }
#line 209 "exclude.m"
}

#line 145 "exclude.m"
static MR_bool MR_CALL 
exclude__read_exclude_lines_6_p_0_1(
#line 145 "exclude.m"
  MR_Box exclude__closure_arg,
#line 145 "exclude.m"
  MR_Box exclude__wrapper_arg_1)
#line 145 "exclude.m"
{
#line 145 "exclude.m"
  {
#line 145 "exclude.m"
    MR_bool exclude__succeeded;
#line 145 "exclude.m"
    MR_Box exclude__closure = exclude__closure_arg;

#line 145 "exclude.m"
    {
#line 145 "exclude.m"
      return exclude__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) exclude__wrapper_arg_1));
    }
#line 145 "exclude.m"
    return exclude__succeeded;
#line 145 "exclude.m"
  }
#line 145 "exclude.m"
}

#line 131 "exclude.m"
static void MR_CALL 
exclude__read_exclude_lines_6_p_0(
#line 131 "exclude.m"
  MR_String exclude__FileName_7,
#line 131 "exclude.m"
  MR_Word exclude__InputStream_8,
#line 131 "exclude.m"
  MR_Word exclude__RevSpecs0_9,
#line 131 "exclude.m"
  MR_Word * exclude__Res_10)
#line 131 "exclude.m"
{
#line 135 "exclude.m"
  while (MR_TRUE)
#line 135 "exclude.m"
    {
#line 135 "exclude.m"
      /* tailcall optimized into a loop */
#line 135 "exclude.m"
      {
#line 135 "exclude.m"
        MR_bool exclude__succeeded;
#line 135 "exclude.m"
        MR_Word exclude__Res0_12;

#line 136 "exclude.m"
        {
#line 136 "exclude.m"
          mercury__io__read_line_as_string_4_p_0(exclude__InputStream_8, &exclude__Res0_12);
        }
#line 163 "exclude.m"
        if ((exclude__Res0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "exclude.m"
          {
#line 165 "exclude.m"
            MR_Word base;
#line 165 "exclude.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 165 "exclude.m"
            *exclude__Res_10 = base;
#line 165 "exclude.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (exclude__RevSpecs0_9));
#line 165 "exclude.m"
          }
#line 163 "exclude.m"
        else
#line 163 "exclude.m"
          if (((MR_tag((MR_Word) exclude__Res0_12)) == (MR_mktag((MR_Integer) 2))))
#line 167 "exclude.m"
            {
#line 167 "exclude.m"
              MR_Word exclude__Err_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__Res0_12, (MR_Integer) 0)));
#line 167 "exclude.m"
              MR_String exclude__Msg_38;

#line 168 "exclude.m"
              {
#line 168 "exclude.m"
                mercury__io__error_message_2_p_0(exclude__Err_23, &exclude__Msg_38);
              }
#line 169 "exclude.m"
              {
#line 169 "exclude.m"
                MR_Word base;
#line 169 "exclude.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 169 "exclude.m"
                *exclude__Res_10 = base;
#line 169 "exclude.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (exclude__Msg_38));
#line 169 "exclude.m"
              }
#line 167 "exclude.m"
            }
#line 163 "exclude.m"
          else
#line 138 "exclude.m"
            {
#line 138 "exclude.m"
              MR_String exclude__Line0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__Res0_12, (MR_Integer) 0)));
#line 138 "exclude.m"
              MR_String exclude__Line_15;
#line 141 "exclude.m"
              MR_String exclude__LinePrime_14;
#line 158 "exclude.m"
              MR_String exclude__ModuleName_18;
#line 158 "exclude.m"
              MR_Word exclude__ExclType_19;
#line 145 "exclude.m"
              MR_Word exclude__Words_16;
#line 145 "exclude.m"
              MR_String exclude__Scope_17;
#line 145 "exclude.m"
              MR_Word exclude__V_29_29;
#line 145 "exclude.m"
              MR_Word exclude__V_30_30;

#line 139 "exclude.m"
              {
#line 139 "exclude.m"
                exclude__succeeded = mercury__string__remove_suffix_3_p_0(exclude__Line0_13, (MR_String) "\n", &exclude__LinePrime_14);
              }
#line 141 "exclude.m"
              if (exclude__succeeded)
#line 140 "exclude.m"
                exclude__Line_15 = exclude__LinePrime_14;
#line 141 "exclude.m"
              else
#line 142 "exclude.m"
                exclude__Line_15 = exclude__Line0_13;
#line 145 "exclude.m"
              {
#line 145 "exclude.m"
                exclude__Words_16 = mercury__string__words_separator_2_f_0((MR_Word) &exclude_scalar_common_3[1], exclude__Line_15);
              }
#line 146 "exclude.m"
              exclude__succeeded = ((MR_tag((MR_Word) exclude__Words_16)) == (MR_mktag((MR_Integer) 1)));
#line 146 "exclude.m"
              if (exclude__succeeded)
#line 146 "exclude.m"
                {
#line 146 "exclude.m"
                  exclude__Scope_17 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__Words_16, (MR_Integer) 0)));
#line 146 "exclude.m"
                  exclude__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), exclude__Words_16, (MR_Integer) 1)));
#line 146 "exclude.m"
                  exclude__succeeded = ((MR_tag((MR_Word) exclude__V_29_29)) == (MR_mktag((MR_Integer) 1)));
#line 146 "exclude.m"
                  if (exclude__succeeded)
#line 146 "exclude.m"
                    {
#line 146 "exclude.m"
                      exclude__ModuleName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__V_29_29, (MR_Integer) 0)));
#line 146 "exclude.m"
                      exclude__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), exclude__V_29_29, (MR_Integer) 1)));
#line 146 "exclude.m"
                      exclude__succeeded = (exclude__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 145 "exclude.m"
                      if (exclude__succeeded)
#line 150 "exclude.m"
                        {
#line 150 "exclude.m"
                          if ((strcmp(exclude__Scope_17, (MR_String) "all") == 0))
#line 149 "exclude.m"
                            {
#line 149 "exclude.m"
                              exclude__ExclType_19 = (MR_Integer) 0;
#line 149 "exclude.m"
                              exclude__succeeded = MR_TRUE;
#line 149 "exclude.m"
                            }
#line 150 "exclude.m"
                          else
#line 150 "exclude.m"
                            if ((strcmp(exclude__Scope_17, (MR_String) "internal") == 0))
#line 152 "exclude.m"
                              {
#line 152 "exclude.m"
                                exclude__ExclType_19 = (MR_Integer) 1;
#line 152 "exclude.m"
                                exclude__succeeded = MR_TRUE;
#line 152 "exclude.m"
                              }
#line 150 "exclude.m"
                            else
#line 150 "exclude.m"
                              exclude__succeeded = MR_FALSE;
#line 150 "exclude.m"
                        }
#line 146 "exclude.m"
                    }
#line 146 "exclude.m"
                }
#line 158 "exclude.m"
              if (exclude__succeeded)
#line 155 "exclude.m"
                {
#line 155 "exclude.m"
                  MR_Word exclude__Spec_20;
#line 155 "exclude.m"
                  MR_Word exclude__RevSpecs1_21;

#line 155 "exclude.m"
                  {
#line 155 "exclude.m"
                    exclude__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 155 "exclude.m"
                    MR_hl_field(MR_mktag(0), exclude__Spec_20, 0) = ((MR_Box) (exclude__ModuleName_18));
#line 155 "exclude.m"
                    MR_hl_field(MR_mktag(0), exclude__Spec_20, 1) = ((MR_Box) (exclude__ExclType_19));
#line 155 "exclude.m"
                  }
#line 156 "exclude.m"
                  {
#line 156 "exclude.m"
                    exclude__RevSpecs1_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 156 "exclude.m"
                    MR_hl_field(MR_mktag(1), exclude__RevSpecs1_21, 0) = ((MR_Box) (exclude__Spec_20));
#line 156 "exclude.m"
                    MR_hl_field(MR_mktag(1), exclude__RevSpecs1_21, 1) = ((MR_Box) (exclude__RevSpecs0_9));
#line 156 "exclude.m"
                  }
#line 157 "exclude.m"
                  /* direct tailcall eliminated */
#line 157 "exclude.m"
                  {
#line 157 "exclude.m"
                    MR_Word exclude__RevSpecs0__tmp_copy_9 = exclude__RevSpecs1_21;

#line 157 "exclude.m"
                    exclude__RevSpecs0_9 = exclude__RevSpecs0__tmp_copy_9;
#line 157 "exclude.m"
                  }
#line 157 "exclude.m"
                  continue;
#line 155 "exclude.m"
                }
#line 158 "exclude.m"
              else
#line 160 "exclude.m"
                {
#line 160 "exclude.m"
                  MR_String exclude__Msg_22;
#line 160 "exclude.m"
                  MR_String exclude__V_41_41;
#line 160 "exclude.m"
                  MR_String exclude__V_42_42;

#line 2075 "exclude.c"
                  {
#line 2077 "exclude.c"
                    exclude__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) " contains badly formatted line: ", exclude__Line_15);
                  }
#line 2080 "exclude.c"
                  {
#line 2082 "exclude.c"
                    exclude__V_42_42 = mercury__string__f_43_43_2_f_0(exclude__FileName_7, exclude__V_41_41);
                  }
#line 2085 "exclude.c"
                  {
#line 2087 "exclude.c"
                    exclude__Msg_22 = mercury__string__f_43_43_2_f_0((MR_String) "file ", exclude__V_42_42);
                  }
#line 161 "exclude.m"
                  {
#line 161 "exclude.m"
                    MR_Word base;
#line 161 "exclude.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 161 "exclude.m"
                    *exclude__Res_10 = base;
#line 161 "exclude.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (exclude__Msg_22));
#line 161 "exclude.m"
                  }
#line 160 "exclude.m"
                }
#line 138 "exclude.m"
            }
#line 135 "exclude.m"
      }
#line 135 "exclude.m"
      break;
#line 135 "exclude.m"
    }
#line 131 "exclude.m"
}

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_1(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg)
#line 230 "exclude.m"
{
#line 230 "exclude.m"
  {
#line 230 "exclude.m"
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

#line 230 "exclude.m"
    MR_builtin_longjmp((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__commit_0, 1);
#line 230 "exclude.m"
  }
#line 230 "exclude.m"
}

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_3(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg)
#line 230 "exclude.m"
{
#line 230 "exclude.m"
  {
#line 230 "exclude.m"
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

#line 230 "exclude.m"
    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15 = ((MR_Word) (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15);
#line 230 "exclude.m"
    {
#line 230 "exclude.m"
      exclude__apply_contour_exclusion_3_f_0_2(exclude__env_ptr);
#line 230 "exclude.m"
      return;
    }
#line 230 "exclude.m"
  }
#line 230 "exclude.m"
}

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_2(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg)
#line 230 "exclude.m"
{
#line 230 "exclude.m"
  {
#line 230 "exclude.m"
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

#line 231 "exclude.m"
    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15, (MR_Integer) 0)));
#line 231 "exclude.m"
    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15, (MR_Integer) 1)));
#line 231 "exclude.m"
    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = (strcmp((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14, (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__V_47_47) == 0);
#line 230 "exclude.m"
    if ((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
#line 230 "exclude.m"
      {
#line 234 "exclude.m"
        if (((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16 == (MR_Integer) 0))
#line 233 "exclude.m"
          (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_TRUE;
#line 234 "exclude.m"
        else
#line 235 "exclude.m"
          {
#line 235 "exclude.m"
            MR_Word exclude__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7)));
#line 236 "exclude.m"
            MR_Word exclude__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 0)));
#line 236 "exclude.m"
            MR_String exclude__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 1)));
#line 236 "exclude.m"
            MR_String exclude__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 2)));
#line 236 "exclude.m"
            MR_String exclude__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 3)));
#line 236 "exclude.m"
            MR_String exclude__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 4)));
#line 236 "exclude.m"
            MR_String exclude__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 5)));
#line 236 "exclude.m"
            MR_Integer exclude__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 6)));
#line 236 "exclude.m"
            MR_ArrayPtr exclude__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 8)));
#line 236 "exclude.m"
            MR_ArrayPtr exclude__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 9)));
#line 236 "exclude.m"
            MR_Word exclude__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 10)));
#line 236 "exclude.m"
            MR_Word exclude__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11)));

#line 236 "exclude.m"
            (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = (exclude__V_19_19 == (MR_Integer) 0);
#line 235 "exclude.m"
          }
#line 234 "exclude.m"
        if ((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
#line 234 "exclude.m"
          {
#line 234 "exclude.m"
            exclude__apply_contour_exclusion_3_f_0_1(exclude__env_ptr);
#line 234 "exclude.m"
            return;
          }
#line 230 "exclude.m"
      }
#line 230 "exclude.m"
  }
#line 230 "exclude.m"
}

#line 230 "exclude.m"
static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_4(
#line 230 "exclude.m"
  void * exclude__env_ptr_arg)
#line 230 "exclude.m"
{
#line 230 "exclude.m"
  {
#line 230 "exclude.m"
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

#line 230 "exclude.m"
    if (MR_builtin_setjmp((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__commit_0) == 0)
#line 230 "exclude.m"
      {
#line 230 "exclude.m"
        {
#line 230 "exclude.m"
          {
#line 230 "exclude.m"
            mercury__set__member_2_p_1((MR_Word) &exclude__exclude__type_ctor_info_exclude_spec_0, &(exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15, (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6, exclude__apply_contour_exclusion_3_f_0_3, exclude__env_ptr);
          }
#line 230 "exclude.m"
        }
#line 230 "exclude.m"
        (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_FALSE;
#line 230 "exclude.m"
      }
#line 230 "exclude.m"
    else
#line 230 "exclude.m"
      (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_TRUE;
#line 230 "exclude.m"
  }
#line 230 "exclude.m"
}

#line 75 "exclude.m"
MR_Word MR_CALL 
exclude__apply_contour_exclusion_3_f_0(
#line 75 "exclude.m"
  MR_Word exclude__Deep_5,
#line 75 "exclude.m"
  MR_Word exclude__ExcludedSpecs_6,
#line 75 "exclude.m"
  MR_Word exclude__CSDPtr0_7)
#line 75 "exclude.m"
{
#line 75 "exclude.m"
  {
#line 75 "exclude.m"
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s exclude__env;

#line 75 "exclude.m"
    (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6 = exclude__ExcludedSpecs_6;
#line 245 "exclude.m"
    while (MR_TRUE)
#line 245 "exclude.m"
      {
#line 245 "exclude.m"
        /* tailcall optimized into a loop */
#line 245 "exclude.m"
        {
#line 245 "exclude.m"
          MR_Word exclude__CSDPtr_8;

#line 222 "exclude.m"
          {
#line 222 "exclude.m"
            (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(exclude__Deep_5, exclude__CSDPtr0_7);
          }
#line 245 "exclude.m"
          if ((exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
#line 223 "exclude.m"
            {
#line 223 "exclude.m"
              MR_Word exclude__CSD_9;
#line 223 "exclude.m"
              MR_Word exclude__PDPtr_10;
#line 223 "exclude.m"
              MR_Word exclude__PD_11;
#line 223 "exclude.m"
              MR_Word exclude__PSPtr_12;
#line 224 "exclude.m"
              MR_Word exclude__V_20_20;
#line 224 "exclude.m"
              MR_Word exclude__V_21_21;
#line 226 "exclude.m"
              MR_ArrayPtr exclude__V_22_22;
#line 226 "exclude.m"
              MR_Word exclude__V_23_23;
#line 228 "exclude.m"
              MR_Word exclude__V_24_24;
#line 228 "exclude.m"
              MR_String exclude__V_25_25;
#line 228 "exclude.m"
              MR_String exclude__V_26_26;
#line 228 "exclude.m"
              MR_String exclude__V_27_27;
#line 228 "exclude.m"
              MR_String exclude__V_28_28;
#line 228 "exclude.m"
              MR_Integer exclude__V_29_29;
#line 228 "exclude.m"
              MR_Word exclude__V_30_30;
#line 228 "exclude.m"
              MR_ArrayPtr exclude__V_31_31;
#line 228 "exclude.m"
              MR_ArrayPtr exclude__V_32_32;
#line 228 "exclude.m"
              MR_Word exclude__V_33_33;
#line 228 "exclude.m"
              MR_Word exclude__V_34_34;

#line 223 "exclude.m"
              {
#line 223 "exclude.m"
                profile__deep_lookup_call_site_dynamics_3_p_0(exclude__Deep_5, exclude__CSDPtr0_7, &exclude__CSD_9);
              }
#line 224 "exclude.m"
              exclude__PDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__CSD_9, (MR_Integer) 0)));
#line 224 "exclude.m"
              exclude__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__CSD_9, (MR_Integer) 1)));
#line 224 "exclude.m"
              exclude__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__CSD_9, (MR_Integer) 2)));
#line 225 "exclude.m"
              {
#line 225 "exclude.m"
                profile__deep_lookup_proc_dynamics_3_p_0(exclude__Deep_5, exclude__PDPtr_10, &exclude__PD_11);
              }
#line 226 "exclude.m"
              exclude__PSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__PD_11, (MR_Integer) 0)));
#line 226 "exclude.m"
              exclude__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), exclude__PD_11, (MR_Integer) 1)));
#line 226 "exclude.m"
              exclude__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__PD_11, (MR_Integer) 2)));
#line 227 "exclude.m"
              {
#line 227 "exclude.m"
                profile__deep_lookup_proc_statics_3_p_0(exclude__Deep_5, exclude__PSPtr_12, &(exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13);
              }
#line 228 "exclude.m"
              exclude__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 0)));
#line 228 "exclude.m"
              (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 1)));
#line 228 "exclude.m"
              exclude__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 2)));
#line 228 "exclude.m"
              exclude__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 3)));
#line 228 "exclude.m"
              exclude__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 4)));
#line 228 "exclude.m"
              exclude__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 5)));
#line 228 "exclude.m"
              exclude__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 6)));
#line 228 "exclude.m"
              exclude__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7)));
#line 228 "exclude.m"
              exclude__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 8)));
#line 228 "exclude.m"
              exclude__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 9)));
#line 228 "exclude.m"
              exclude__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 10)));
#line 228 "exclude.m"
              exclude__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11)));
#line 230 "exclude.m"
              {
#line 230 "exclude.m"
                exclude__apply_contour_exclusion_3_f_0_4(&exclude__env);
              }
#line 242 "exclude.m"
              if ((exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
#line 239 "exclude.m"
                {
#line 239 "exclude.m"
                  MR_Word exclude__CliquePtr_17;
#line 239 "exclude.m"
                  MR_Word exclude__EntryCSDPtr_18;

#line 239 "exclude.m"
                  {
#line 239 "exclude.m"
                    profile__deep_lookup_clique_index_3_p_0(exclude__Deep_5, exclude__PDPtr_10, &exclude__CliquePtr_17);
                  }
#line 240 "exclude.m"
                  {
#line 240 "exclude.m"
                    profile__deep_lookup_clique_parents_3_p_0(exclude__Deep_5, exclude__CliquePtr_17, &exclude__EntryCSDPtr_18);
                  }
#line 241 "exclude.m"
                  /* direct tailcall eliminated */
#line 241 "exclude.m"
                  {
#line 241 "exclude.m"
                    MR_Word exclude__CSDPtr0__tmp_copy_7 = exclude__EntryCSDPtr_18;

#line 241 "exclude.m"
                    exclude__CSDPtr0_7 = exclude__CSDPtr0__tmp_copy_7;
#line 241 "exclude.m"
                  }
#line 241 "exclude.m"
                  continue;
#line 239 "exclude.m"
                }
#line 242 "exclude.m"
              else
#line 243 "exclude.m"
                exclude__CSDPtr_8 = exclude__CSDPtr0_7;
#line 223 "exclude.m"
            }
#line 245 "exclude.m"
          else
#line 246 "exclude.m"
            exclude__CSDPtr_8 = exclude__CSDPtr0_7;
#line 245 "exclude.m"
          return exclude__CSDPtr_8;
#line 245 "exclude.m"
        }
#line 245 "exclude.m"
        break;
#line 245 "exclude.m"
      }
#line 75 "exclude.m"
  }
#line 75 "exclude.m"
}

#line 187 "exclude.m"
static MR_Box MR_CALL 
exclude__read_exclude_file_5_p_0_2(
#line 187 "exclude.m"
  MR_Box exclude__closure_arg,
#line 187 "exclude.m"
  MR_Box exclude__wrapper_arg_1)
#line 187 "exclude.m"
{
#line 187 "exclude.m"
  {
#line 187 "exclude.m"
    MR_Box exclude__wrapper_arg_2;
#line 187 "exclude.m"
    MR_Box exclude__closure = exclude__closure_arg;
#line 187 "exclude.m"
    MR_String exclude__conv0_ModuleName_3;

#line 187 "exclude.m"
    {
#line 187 "exclude.m"
      exclude__conv0_ModuleName_3 = exclude__spec_to_module_name_1_f_0(((MR_Word) exclude__wrapper_arg_1));
    }
#line 187 "exclude.m"
    exclude__wrapper_arg_2 = ((MR_Box) (exclude__conv0_ModuleName_3));
#line 187 "exclude.m"
    return exclude__wrapper_arg_2;
#line 187 "exclude.m"
  }
#line 187 "exclude.m"
}

#line 176 "exclude.m"
static MR_bool MR_CALL 
exclude__read_exclude_file_5_p_0_1(
#line 176 "exclude.m"
  MR_Box exclude__closure_arg,
#line 176 "exclude.m"
  MR_Box exclude__wrapper_arg_1)
#line 176 "exclude.m"
{
#line 176 "exclude.m"
  {
#line 176 "exclude.m"
    MR_bool exclude__succeeded;
#line 176 "exclude.m"
    MR_Box exclude__closure = exclude__closure_arg;

#line 176 "exclude.m"
    {
#line 176 "exclude.m"
      return exclude__succeeded = exclude__has_valid_module_name_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), exclude__closure, (MR_Integer) 3))), ((MR_Word) exclude__wrapper_arg_1));
    }
#line 176 "exclude.m"
    return exclude__succeeded;
#line 176 "exclude.m"
  }
#line 176 "exclude.m"
}

#line 72 "exclude.m"
void MR_CALL 
exclude__read_exclude_file_5_p_0(
#line 72 "exclude.m"
  MR_String exclude__FileName_6,
#line 72 "exclude.m"
  MR_Word exclude__ModuleDataMap_7,
#line 72 "exclude.m"
  MR_Word * exclude__ExcludeFile_8)
#line 72 "exclude.m"
{
#line 109 "exclude.m"
  {
#line 109 "exclude.m"
    MR_bool exclude__succeeded;
#line 109 "exclude.m"
    MR_Word exclude__MaybeStream_10;
#line 109 "exclude.m"
    MR_Word exclude__ExcludeContents_14;

#line 110 "exclude.m"
    {
#line 110 "exclude.m"
      mercury__io__open_input_4_p_0(exclude__FileName_6, &exclude__MaybeStream_10);
    }
#line 123 "exclude.m"
    if (((MR_tag((MR_Word) exclude__MaybeStream_10)) == (MR_mktag((MR_Integer) 1))))
#line 127 "exclude.m"
      exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 123 "exclude.m"
    else
#line 112 "exclude.m"
      {
#line 112 "exclude.m"
        MR_Word exclude__InputStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__MaybeStream_10, (MR_Integer) 0)));
#line 112 "exclude.m"
        MR_Word exclude__MaybeSpecs_12;

#line 113 "exclude.m"
        {
#line 113 "exclude.m"
          exclude__read_exclude_lines_6_p_0(exclude__FileName_6, exclude__InputStream_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &exclude__MaybeSpecs_12);
        }
#line 114 "exclude.m"
        {
#line 114 "exclude.m"
          mercury__io__close_input_3_p_0(exclude__InputStream_11);
        }
#line 119 "exclude.m"
        if (((MR_tag((MR_Word) exclude__MaybeSpecs_12)) == (MR_mktag((MR_Integer) 1))))
#line 120 "exclude.m"
          {
#line 120 "exclude.m"
            MR_String exclude__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__MaybeSpecs_12, (MR_Integer) 0)));

#line 121 "exclude.m"
            {
#line 121 "exclude.m"
              exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 121 "exclude.m"
              MR_hl_field(MR_mktag(1), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__Msg_15));
#line 121 "exclude.m"
            }
#line 120 "exclude.m"
          }
#line 119 "exclude.m"
        else
#line 116 "exclude.m"
          {
#line 116 "exclude.m"
            MR_Word exclude__TypeCtorInfo_46_64;
#line 116 "exclude.m"
            MR_Word exclude__Specs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__MaybeSpecs_12, (MR_Integer) 0)));
#line 116 "exclude.m"
            MR_Word exclude__ValidSpecs_27;
#line 116 "exclude.m"
            MR_Word exclude__InvalidSpecs_28;
#line 116 "exclude.m"
            MR_Word exclude__ModuleSpecs_29;
#line 116 "exclude.m"
            MR_Word exclude__V_40_40;

#line 176 "exclude.m"
            {
#line 176 "exclude.m"
              exclude__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 176 "exclude.m"
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 0) = ((MR_Box) (&exclude_scalar_common_2[0]));
#line 176 "exclude.m"
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 1) = ((MR_Box) (exclude__read_exclude_file_5_p_0_1));
#line 176 "exclude.m"
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 176 "exclude.m"
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 3) = ((MR_Box) (exclude__ModuleDataMap_7));
#line 176 "exclude.m"
            }
#line 2619 "exclude.c"
            exclude__TypeCtorInfo_46_64 = (MR_Word) &exclude__exclude__type_ctor_info_exclude_spec_0;
#line 176 "exclude.m"
            {
#line 176 "exclude.m"
              mercury__list__filter_4_p_0(exclude__TypeCtorInfo_46_64, exclude__V_40_40, exclude__Specs_13, &exclude__ValidSpecs_27, &exclude__InvalidSpecs_28);
            }
#line 178 "exclude.m"
            {
#line 178 "exclude.m"
              mercury__set__list_to_set_2_p_0(exclude__TypeCtorInfo_46_64, exclude__ValidSpecs_27, &exclude__ModuleSpecs_29);
            }
#line 183 "exclude.m"
            if ((exclude__InvalidSpecs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 180 "exclude.m"
              {
#line 182 "exclude.m"
                {
#line 182 "exclude.m"
                  exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "exclude.m"
                  MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__ModuleSpecs_29));
#line 182 "exclude.m"
                  MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 182 "exclude.m"
                }
#line 180 "exclude.m"
              }
#line 183 "exclude.m"
            else
#line 197 "exclude.m"
              if ((exclude__ValidSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "exclude.m"
                {
#line 198 "exclude.m"
                  MR_String exclude__Msg1_58;
#line 198 "exclude.m"
                  MR_String exclude__Msg_60;
#line 198 "exclude.m"
                  MR_String exclude__V_69_69;

#line 2660 "exclude.c"
                  {
#line 2662 "exclude.c"
                    exclude__V_69_69 = mercury__string__f_43_43_2_f_0(exclude__FileName_6, (MR_String) " contains only unrecognized module names.");
                  }
#line 2665 "exclude.c"
                  {
#line 2667 "exclude.c"
                    exclude__Msg1_58 = mercury__string__f_43_43_2_f_0((MR_String) "Error: file ", exclude__V_69_69);
                  }
#line 204 "exclude.m"
                  {
#line 204 "exclude.m"
                    exclude__Msg_60 = mercury__string__f_43_43_2_f_0(exclude__Msg1_58, (MR_String) "These modules either do not exist or have no deep profiled procedures.");
                  }
#line 205 "exclude.m"
                  {
#line 205 "exclude.m"
                    exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 205 "exclude.m"
                    MR_hl_field(MR_mktag(1), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__Msg_60));
#line 205 "exclude.m"
                  }
#line 198 "exclude.m"
                }
#line 197 "exclude.m"
              else
#line 186 "exclude.m"
                {
#line 186 "exclude.m"
                  MR_Word exclude__InvalidModuleNames_35;
#line 186 "exclude.m"
                  MR_String exclude__BadNames_36;
#line 186 "exclude.m"
                  MR_String exclude__Msg1_37;
#line 186 "exclude.m"
                  MR_String exclude__Msg_39;
#line 186 "exclude.m"
                  MR_Word exclude__MaybeErrorMsg_57;
#line 186 "exclude.m"
                  MR_String exclude__V_72_72;
#line 186 "exclude.m"
                  MR_String exclude__V_74_74;
#line 186 "exclude.m"
                  MR_String exclude__V_75_75;

#line 187 "exclude.m"
                  {
#line 187 "exclude.m"
                    exclude__InvalidModuleNames_35 = mercury__list__map_2_f_0(exclude__TypeCtorInfo_46_64, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &exclude_scalar_common_3[0], exclude__InvalidSpecs_28);
                  }
#line 188 "exclude.m"
                  {
#line 188 "exclude.m"
                    exclude__BadNames_36 = mercury__string__join_list_2_f_0((MR_String) ", ", exclude__InvalidModuleNames_35);
                  }
#line 2716 "exclude.c"
                  {
#line 2718 "exclude.c"
                    exclude__V_72_72 = mercury__string__f_43_43_2_f_0(exclude__BadNames_36, (MR_String) ".");
                  }
#line 2721 "exclude.c"
                  {
#line 2723 "exclude.c"
                    exclude__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " contains unrecognized module names: ", exclude__V_72_72);
                  }
#line 2726 "exclude.c"
                  {
#line 2728 "exclude.c"
                    exclude__V_75_75 = mercury__string__f_43_43_2_f_0(exclude__FileName_6, exclude__V_74_74);
                  }
#line 2731 "exclude.c"
                  {
#line 2733 "exclude.c"
                    exclude__Msg1_37 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: ", exclude__V_75_75);
                  }
#line 194 "exclude.m"
                  {
#line 194 "exclude.m"
                    exclude__Msg_39 = mercury__string__f_43_43_2_f_0(exclude__Msg1_37, (MR_String) "These modules either do not exist or have no deep profiled procedures.");
                  }
#line 195 "exclude.m"
                  {
#line 195 "exclude.m"
                    exclude__MaybeErrorMsg_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 195 "exclude.m"
                    MR_hl_field(MR_mktag(1), exclude__MaybeErrorMsg_57, 0) = ((MR_Box) (exclude__Msg_39));
#line 195 "exclude.m"
                  }
#line 196 "exclude.m"
                  {
#line 196 "exclude.m"
                    exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 196 "exclude.m"
                    MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__ModuleSpecs_29));
#line 196 "exclude.m"
                    MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 1) = ((MR_Box) (exclude__MaybeErrorMsg_57));
#line 196 "exclude.m"
                  }
#line 186 "exclude.m"
                }
#line 116 "exclude.m"
          }
#line 112 "exclude.m"
      }
#line 129 "exclude.m"
    {
#line 129 "exclude.m"
      MR_Word base;
#line 129 "exclude.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "exclude.m"
      *exclude__ExcludeFile_8 = base;
#line 129 "exclude.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (exclude__FileName_6));
#line 129 "exclude.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (exclude__ExcludeContents_14));
#line 129 "exclude.m"
    }
#line 109 "exclude.m"
  }
#line 72 "exclude.m"
}

void mercury__exclude__init(void)
{
}

void mercury__exclude__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&exclude__exclude__type_ctor_info_exclude_contents_0);
	MR_register_type_ctor_info(&exclude__exclude__type_ctor_info_exclude_file_0);
	MR_register_type_ctor_info(&exclude__exclude__type_ctor_info_exclude_spec_0);
	MR_register_type_ctor_info(&exclude__exclude__type_ctor_info_excluded_modules_0);
	MR_register_type_ctor_info(&exclude__exclude__type_ctor_info_exclusion_type_0);
}

void mercury__exclude__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module exclude. */
