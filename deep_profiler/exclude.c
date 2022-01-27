/*
** Automatically generated from `exclude.m'
** by the Mercury compiler,
** version rotd-2016-05-05
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


/* :- module exclude. */
/* :- implementation. */

/*
INIT mercury__exclude__init
ENDINIT
*/

#include "exclude.mih"


#include "mdbcomp.mih"
#include "measurement_units.mih"
#include "measurements.mih"
#include "profile.mih"
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
#include "enum.mih"
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



struct exclude__apply_contour_exclusion_4_f_0_env_0_s {
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6;
  MR_bool exclude__apply_contour_exclusion_4_f_0_env_0__succeeded;
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__PS_13;
  MR_String exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14;
  jmp_buf exclude__apply_contour_exclusion_4_f_0_env_0__commit_0;
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15;
  MR_Word exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16;
  MR_String exclude__apply_contour_exclusion_4_f_0_env_0__V_47_47;
  MR_Box exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15;
};


static const MR_FA_PseudoTypeInfo_Struct2 exclude__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0;

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_0;

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_1[1];

static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_1[1];

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_1;

static const MR_FA_TypeInfo_Struct1 exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0;

static const MR_FA_TypeInfo_Struct1 exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_2[2];

static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_2[2];

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_2;

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_0[1];

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_1[1];

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_2[1];

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_contents_0[3];

static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_contents_0[3];

static const MR_Integer exclude__exclude__functor_number_map_exclude_contents_0[3];

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_file_0_0[2];

static const MR_ConstString exclude__exclude__field_names_exclude_file_0_0[2];

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_file_0_0;

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_file_0_0[1];

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_file_0[1];

static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_file_0[1];

static const MR_Integer exclude__exclude__functor_number_map_exclude_file_0[1];

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_spec_0_0[2];

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_spec_0_0;

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_spec_0_0[1];

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_spec_0[1];

static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_spec_0[1];

static const MR_Integer exclude__exclude__functor_number_map_exclude_spec_0[1];

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_0;

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_1;

static const MR_EnumFunctorDescPtr exclude__exclude__enum_value_ordered_exclusion_type_0[2];

static const MR_EnumFunctorDescPtr exclude__exclude__enum_name_ordered_exclusion_type_0[2];

static const MR_Integer exclude__exclude__functor_number_map_exclusion_type_0[2];

static MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclude_contents_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclude_file_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclude_spec_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2);

static void MR_CALL 
exclude____Compare____excluded_modules_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclusion_type_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3);

static void MR_CALL 
exclude____Compare____exclusion_type_0_0(
  MR_Word * exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2,
  MR_Word exclude__HeadVar__3_3);

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0(
  MR_Word exclude__HeadVar__2_1,
  MR_Word exclude__HeadVar__2_2);

static MR_String MR_CALL 
exclude__spec_to_module_name_1_f_0(
  MR_Word exclude__HeadVar__1_1);

static MR_bool MR_CALL 
exclude__has_valid_module_name_2_p_0(
  MR_Word exclude__ModuleDataMap_3,
  MR_Word exclude__Spec_4);

static MR_bool MR_CALL 
exclude__read_exclude_lines_6_p_0_1(
  MR_Box exclude__closure_arg,
  MR_Box exclude__wrapper_arg_1);

static void MR_CALL 
exclude__read_exclude_lines_6_p_0(
  MR_String exclude__FileName_7,
  MR_Word exclude__InputStream_8,
  MR_Word exclude__RevSpecs0_9,
  MR_Word * exclude__Res_10);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_1(
  void * exclude__env_ptr_arg);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_3(
  void * exclude__env_ptr_arg);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_2(
  void * exclude__env_ptr_arg);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_4(
  void * exclude__env_ptr_arg);

static MR_Box MR_CALL 
exclude__read_exclude_file_5_p_0_2(
  MR_Box exclude__closure_arg,
  MR_Box exclude__wrapper_arg_1);

static MR_bool MR_CALL 
exclude__read_exclude_file_5_p_0_1(
  MR_Box exclude__closure_arg,
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
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 exclude__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_module_data_0
  }
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_1[1] = {
  (MR_String) "exclude_syntax_error"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &exclude__exclude__type_ctor_info_exclude_spec_0
  }
};

static const MR_FA_TypeInfo_Struct1 exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_2[2] = {
  (MR_PseudoTypeInfo) &exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0,
  (MR_PseudoTypeInfo) &exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_2[2] = {
  (MR_String) "exclude_specs",
  (MR_String) "exclude_maybe_error"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_0
};

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_1[1] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_1
};

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_contents_0_2[1] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_2
};

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

static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_contents_0[3] = {
  &exclude__exclude__du_functor_desc_exclude_contents_0_0,
  &exclude__exclude__du_functor_desc_exclude_contents_0_2,
  &exclude__exclude__du_functor_desc_exclude_contents_0_1
};

static const MR_Integer exclude__exclude__functor_number_map_exclude_contents_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclude_contents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_contents_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_contents_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_contents",
  {     exclude__exclude__du_name_ordered_exclude_contents_0 },
  {     exclude__exclude__du_ptag_ordered_exclude_contents_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclude_contents_0
};

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_file_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &exclude__exclude__type_ctor_info_exclude_contents_0
};

static const MR_ConstString exclude__exclude__field_names_exclude_file_0_0[2] = {
  (MR_String) "exclude_filename",
  (MR_String) "exclude_file_contents"
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_file_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_file_0_0
};

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_file_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_file_0_0
  }
};

static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_file_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_file_0_0
};

static const MR_Integer exclude__exclude__functor_number_map_exclude_file_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclude_file_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_file_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_file_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_file",
  {     exclude__exclude__du_name_ordered_exclude_file_0 },
  {     exclude__exclude__du_ptag_ordered_exclude_file_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclude_file_0
};

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_spec_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &exclude__exclude__type_ctor_info_exclusion_type_0
};

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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_spec_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_spec_0_0
};

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_spec_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_spec_0_0
  }
};

static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_spec_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_spec_0_0
};

static const MR_Integer exclude__exclude__functor_number_map_exclude_spec_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclude_spec_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_spec_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_spec_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_spec",
  {     exclude__exclude__du_name_ordered_exclude_spec_0 },
  {     exclude__exclude__du_ptag_ordered_exclude_spec_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclude_spec_0
};

const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_excluded_modules_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (exclude____Unify____excluded_modules_0_0_10001)),
  ((MR_Box) (exclude____Compare____excluded_modules_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "excluded_modules",
  {     NULL },
  {     (MR_PseudoTypeInfo) &exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_0 = {
  (MR_String) "exclude_all_procedures",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_1 = {
  (MR_String) "exclude_internal_procedures",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr exclude__exclude__enum_value_ordered_exclusion_type_0[2] = {
  &exclude__exclude__enum_functor_desc_exclusion_type_0_0,
  &exclude__exclude__enum_functor_desc_exclusion_type_0_1
};

static const MR_EnumFunctorDescPtr exclude__exclude__enum_name_ordered_exclusion_type_0[2] = {
  &exclude__exclude__enum_functor_desc_exclusion_type_0_0,
  &exclude__exclude__enum_functor_desc_exclusion_type_0_1
};

static const MR_Integer exclude__exclude__functor_number_map_exclusion_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_exclusion_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (exclude____Unify____exclusion_type_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclusion_type_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclusion_type",
  {     exclude__exclude__enum_name_ordered_exclusion_type_0 },
  {     exclude__exclude__enum_value_ordered_exclusion_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  exclude__exclude__functor_number_map_exclusion_type_0
};

static MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2)
{
  {
    MR_bool exclude__succeeded;

    {
      exclude__succeeded = exclude____Unify____exclude_contents_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
    return exclude__succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclude_contents_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3)
{
  {
    MR_Word exclude__conv0_HeadVar__1_1;

    {
      exclude____Compare____exclude_contents_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2)
{
  {
    MR_bool exclude__succeeded;

    {
      exclude__succeeded = exclude____Unify____exclude_file_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
    return exclude__succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclude_file_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3)
{
  {
    MR_Word exclude__conv0_HeadVar__1_1;

    {
      exclude____Compare____exclude_file_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2)
{
  {
    MR_bool exclude__succeeded;

    {
      exclude__succeeded = exclude____Unify____exclude_spec_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
    return exclude__succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclude_spec_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3)
{
  {
    MR_Word exclude__conv0_HeadVar__1_1;

    {
      exclude____Compare____exclude_spec_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2)
{
  {
    MR_bool exclude__succeeded;

    {
      exclude__succeeded = exclude____Unify____excluded_modules_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
    return exclude__succeeded;
  }
}

static void MR_CALL 
exclude____Compare____excluded_modules_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3)
{
  {
    MR_Word exclude__conv0_HeadVar__1_1;

    {
      exclude____Compare____excluded_modules_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0_10001(
  MR_Box exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2)
{
  {
    MR_bool exclude__succeeded;

    {
      exclude__succeeded = exclude____Unify____exclusion_type_0_0(((MR_Word) exclude__wrapper_arg_1), ((MR_Word) exclude__wrapper_arg_2));
    }
    return exclude__succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclusion_type_0_0_10001(
  MR_Box * exclude__wrapper_arg_1,
  MR_Box exclude__wrapper_arg_2,
  MR_Box exclude__wrapper_arg_3)
{
  {
    MR_Word exclude__conv0_HeadVar__1_1;

    {
      exclude____Compare____exclusion_type_0_0(&exclude__conv0_HeadVar__1_1, ((MR_Word) exclude__wrapper_arg_2), ((MR_Word) exclude__wrapper_arg_3));
    }
    *exclude__wrapper_arg_1 = ((MR_Box) (exclude__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
exclude____Compare____exclusion_type_0_0(
  MR_Word * exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2,
  MR_Word exclude__HeadVar__3_3)
{
  {
    MR_bool exclude__succeeded;
    MR_Integer exclude__Cast_HeadVar1_4 = (MR_Integer) exclude__HeadVar__2_2;
    MR_Integer exclude__Cast_HeadVar2_5 = (MR_Integer) exclude__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(exclude__HeadVar__1_1, exclude__Cast_HeadVar1_4, exclude__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0(
  MR_Word exclude__HeadVar__2_1,
  MR_Word exclude__HeadVar__2_2)
{
  {
    MR_bool exclude__succeeded = (exclude__HeadVar__2_1 == exclude__HeadVar__2_2);

    return exclude__succeeded;
  }
}

void MR_CALL 
exclude____Compare____excluded_modules_0_0(
  MR_Word * exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2,
  MR_Word exclude__HeadVar__3_3)
{
  {
    MR_bool exclude__succeeded;
    MR_Word exclude__Cast_HeadVar1_4 = exclude__HeadVar__2_2;
    MR_Word exclude__Cast_HeadVar2_5 = exclude__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &exclude_scalar_common_1[0], exclude__HeadVar__1_1, ((MR_Box) (exclude__Cast_HeadVar1_4)), ((MR_Box) (exclude__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0(
  MR_Word exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2)
{
  {
    MR_bool exclude__succeeded;
    MR_Word exclude__Cast_HeadVar1_3 = exclude__HeadVar__1_1;
    MR_Word exclude__Cast_HeadVar2_4 = exclude__HeadVar__2_2;

    {
      exclude__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &exclude_scalar_common_1[0], ((MR_Box) (exclude__Cast_HeadVar1_3)), ((MR_Box) (exclude__Cast_HeadVar2_4)));
    }
    return exclude__succeeded;
  }
}

void MR_CALL 
exclude____Compare____exclude_spec_0_0(
  MR_Word * exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2,
  MR_Word exclude__HeadVar__3_3)
{
  {
    MR_bool exclude__succeeded;
    MR_Integer exclude__CastX_9 = (MR_Integer) exclude__HeadVar__2_2;
    MR_Integer exclude__CastY_10 = (MR_Integer) exclude__HeadVar__3_3;

    exclude__succeeded = (exclude__CastX_9 == exclude__CastY_10);
    if (exclude__succeeded)
      *exclude__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String exclude__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word exclude__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));
        MR_String exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word exclude__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word exclude__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&exclude__V_8_8, exclude__V_4_4, exclude__V_6_6);
        }
        exclude__succeeded = (exclude__V_8_8 == (MR_Integer) 0);
        exclude__succeeded = !(exclude__succeeded);
        if (exclude__succeeded)
          *exclude__HeadVar__1_1 = exclude__V_8_8;
        else
          {
            MR_Integer exclude__V_13_13 = (MR_Integer) exclude__V_5_5;
            MR_Integer exclude__V_14_14 = (MR_Integer) exclude__V_7_7;

            {
              mercury__private_builtin__builtin_compare_int_3_p_0(exclude__HeadVar__1_1, exclude__V_13_13, exclude__V_14_14);
            }
          }
      }
  }
}

MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0(
  MR_Word exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2)
{
  {
    MR_bool exclude__succeeded;
    MR_Integer exclude__CastX_7 = (MR_Integer) exclude__HeadVar__1_1;
    MR_Integer exclude__CastY_8 = (MR_Integer) exclude__HeadVar__2_2;

    exclude__succeeded = (exclude__CastX_7 == exclude__CastY_8);
    if (exclude__succeeded)
      exclude__succeeded = MR_TRUE;
    else
      {
        MR_String exclude__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word exclude__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 1)));
        MR_String exclude__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word exclude__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));

        exclude__succeeded = (strcmp(exclude__V_3_3, exclude__V_5_5) == 0);
        if (exclude__succeeded)
          exclude__succeeded = (exclude__V_4_4 == exclude__V_6_6);
      }
    return exclude__succeeded;
  }
}

void MR_CALL 
exclude____Compare____exclude_file_0_0(
  MR_Word * exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2,
  MR_Word exclude__HeadVar__3_3)
{
  {
    MR_bool exclude__succeeded;
    MR_Integer exclude__CastX_9 = (MR_Integer) exclude__HeadVar__2_2;
    MR_Integer exclude__CastY_10 = (MR_Integer) exclude__HeadVar__3_3;

    exclude__succeeded = (exclude__CastX_9 == exclude__CastY_10);
    if (exclude__succeeded)
      *exclude__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String exclude__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word exclude__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));
        MR_String exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word exclude__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word exclude__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&exclude__V_8_8, exclude__V_4_4, exclude__V_6_6);
        }
        exclude__succeeded = (exclude__V_8_8 == (MR_Integer) 0);
        exclude__succeeded = !(exclude__succeeded);
        if (exclude__succeeded)
          *exclude__HeadVar__1_1 = exclude__V_8_8;
        else
          {
            exclude____Compare____exclude_contents_0_0(exclude__HeadVar__1_1, exclude__V_5_5, exclude__V_7_7);
          }
      }
  }
}

MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0(
  MR_Word exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2)
{
  {
    MR_bool exclude__succeeded;
    MR_Integer exclude__CastX_7 = (MR_Integer) exclude__HeadVar__1_1;
    MR_Integer exclude__CastY_8 = (MR_Integer) exclude__HeadVar__2_2;

    exclude__succeeded = (exclude__CastX_7 == exclude__CastY_8);
    if (exclude__succeeded)
      exclude__succeeded = MR_TRUE;
    else
      {
        MR_String exclude__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word exclude__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 1)));
        MR_String exclude__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word exclude__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__2_2, (MR_Integer) 1)));

        exclude__succeeded = (strcmp(exclude__V_3_3, exclude__V_5_5) == 0);
        if (exclude__succeeded)
          {
            exclude__succeeded = exclude____Unify____exclude_contents_0_0(exclude__V_4_4, exclude__V_6_6);
          }
      }
    return exclude__succeeded;
  }
}

void MR_CALL 
exclude____Compare____exclude_contents_0_0(
  MR_Word * exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2,
  MR_Word exclude__HeadVar__3_3)
{
  {
    MR_bool exclude__succeeded;
    MR_Integer exclude__CastX_23 = (MR_Integer) exclude__HeadVar__2_2;
    MR_Integer exclude__CastY_24 = (MR_Integer) exclude__HeadVar__3_3;

    exclude__succeeded = (exclude__CastX_23 == exclude__CastY_24);
    if (exclude__succeeded)
      *exclude__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) exclude__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) exclude__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *exclude__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *exclude__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *exclude__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String exclude__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) exclude__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *exclude__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String exclude__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(exclude__HeadVar__1_1, exclude__V_30_30, exclude__V_9_9);
                  }
                }
                break;
              case (MR_Integer) 2:
                *exclude__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word exclude__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word exclude__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) exclude__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *exclude__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *exclude__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word exclude__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word exclude__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word exclude__V_22_22;

                  {
                    mercury__builtin__compare_3_p_0((MR_Word) &exclude_scalar_common_1[0], &exclude__V_22_22, ((MR_Box) (exclude__V_29_29)), ((MR_Box) (exclude__V_20_20)));
                  }
                  exclude__succeeded = (exclude__V_22_22 == (MR_Integer) 0);
                  exclude__succeeded = !(exclude__succeeded);
                  if (exclude__succeeded)
                    *exclude__HeadVar__1_1 = exclude__V_22_22;
                  else
                    {
                      {
                        mercury__builtin__compare_3_p_0((MR_Word) &exclude_scalar_common_1[1], exclude__HeadVar__1_1, ((MR_Box) (exclude__V_28_28)), ((MR_Box) (exclude__V_21_21)));
                      }
                    }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0(
  MR_Word exclude__HeadVar__1_1,
  MR_Word exclude__HeadVar__2_2)
{
  {
    MR_bool exclude__succeeded;
    MR_Integer exclude__CastX_11 = (MR_Integer) exclude__HeadVar__1_1;
    MR_Integer exclude__CastY_12 = (MR_Integer) exclude__HeadVar__2_2;

    exclude__succeeded = (exclude__CastX_11 == exclude__CastY_12);
    if (exclude__succeeded)
      exclude__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) exclude__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer exclude__CastX_3 = (MR_Integer) exclude__HeadVar__1_1;
            MR_Integer exclude__CastY_4 = (MR_Integer) exclude__HeadVar__2_2;

            exclude__succeeded = (exclude__CastY_4 == exclude__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String exclude__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__1_1, (MR_Integer) 0)));
            MR_String exclude__V_6_6;

            exclude__succeeded = ((MR_tag((MR_Word) exclude__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (exclude__succeeded)
              {
                exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__HeadVar__2_2, (MR_Integer) 0)));
                exclude__succeeded = (strcmp(exclude__V_5_5, exclude__V_6_6) == 0);
              }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word exclude__TypeInfo_13_13;
            MR_Word exclude__TypeInfo_14_14;
            MR_Word exclude__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word exclude__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word exclude__V_9_9;
            MR_Word exclude__V_10_10;

            exclude__succeeded = ((MR_tag((MR_Word) exclude__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (exclude__succeeded)
              {
                exclude__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 0)));
                exclude__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__HeadVar__2_2, (MR_Integer) 1)));
                exclude__TypeInfo_13_13 = (MR_Word) &exclude_scalar_common_1[0];
                {
                  exclude__succeeded = mercury__builtin__unify_2_p_0(exclude__TypeInfo_13_13, ((MR_Box) (exclude__V_7_7)), ((MR_Box) (exclude__V_9_9)));
                }
                if (exclude__succeeded)
                  {
                    exclude__TypeInfo_14_14 = (MR_Word) &exclude_scalar_common_1[1];
                    {
                      exclude__succeeded = mercury__builtin__unify_2_p_0(exclude__TypeInfo_14_14, ((MR_Box) (exclude__V_8_8)), ((MR_Box) (exclude__V_10_10)));
                    }
                  }
              }
          }
          break;
      }
    return exclude__succeeded;
  }
}

static MR_String MR_CALL 
exclude__spec_to_module_name_1_f_0(
  MR_Word exclude__HeadVar__1_1)
{
  {
    MR_bool exclude__succeeded;
    MR_String exclude__ModuleName_3 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word exclude__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__HeadVar__1_1, (MR_Integer) 1)));

    return exclude__ModuleName_3;
  }
}

static MR_bool MR_CALL 
exclude__has_valid_module_name_2_p_0(
  MR_Word exclude__ModuleDataMap_3,
  MR_Word exclude__Spec_4)
{
  {
    MR_bool exclude__succeeded;
    MR_String exclude__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), exclude__Spec_4, (MR_Integer) 0)));
    MR_Word exclude__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__Spec_4, (MR_Integer) 1)));
    MR_Word exclude__V_5_5;
    MR_Box exclude__conv0_V_5_5;

    {
      exclude__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &profile__profile__type_ctor_info_module_data_0, exclude__ModuleDataMap_3, ((MR_Box) (exclude__V_6_6)), &exclude__conv0_V_5_5);
    }
    if (exclude__succeeded)
      {
        exclude__V_5_5 = ((MR_Word) exclude__conv0_V_5_5);
        exclude__succeeded = MR_TRUE;
      }
    return exclude__succeeded;
  }
}

static MR_bool MR_CALL 
exclude__read_exclude_lines_6_p_0_1(
  MR_Box exclude__closure_arg,
  MR_Box exclude__wrapper_arg_1)
{
  {
    MR_bool exclude__succeeded;
    MR_Box exclude__closure = exclude__closure_arg;

    {
      exclude__succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) exclude__wrapper_arg_1));
    }
    return exclude__succeeded;
  }
}

static void MR_CALL 
exclude__read_exclude_lines_6_p_0(
  MR_String exclude__FileName_7,
  MR_Word exclude__InputStream_8,
  MR_Word exclude__RevSpecs0_9,
  MR_Word * exclude__Res_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool exclude__succeeded;
        MR_Word exclude__Res0_12;

        {
          mercury__io__read_line_as_string_4_p_0(exclude__InputStream_8, &exclude__Res0_12);
        }
        switch (MR_tag((MR_Word) exclude__Res0_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *exclude__Res_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (exclude__RevSpecs0_9));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String exclude__Line0_13 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__Res0_12, (MR_Integer) 0)));
              MR_String exclude__Line_15;
              MR_String exclude__LinePrime_14;
              MR_String exclude__ModuleName_18;
              MR_Word exclude__ExclType_19;
              MR_Word exclude__Words_16;
              MR_String exclude__Scope_17;
              MR_Word exclude__V_29_29;
              MR_Word exclude__V_30_30;

              {
                exclude__succeeded = mercury__string__remove_suffix_3_p_0(exclude__Line0_13, (MR_String) "\n", &exclude__LinePrime_14);
              }
              if (exclude__succeeded)
                exclude__Line_15 = exclude__LinePrime_14;
              else
                exclude__Line_15 = exclude__Line0_13;
              {
                exclude__Words_16 = mercury__string__words_separator_2_f_0((MR_Word) &exclude_scalar_common_3[1], exclude__Line_15);
              }
              exclude__succeeded = ((MR_tag((MR_Word) exclude__Words_16)) == (MR_mktag((MR_Integer) 1)));
              if (exclude__succeeded)
                {
                  exclude__Scope_17 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__Words_16, (MR_Integer) 0)));
                  exclude__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), exclude__Words_16, (MR_Integer) 1)));
                  exclude__succeeded = ((MR_tag((MR_Word) exclude__V_29_29)) == (MR_mktag((MR_Integer) 1)));
                  if (exclude__succeeded)
                    {
                      exclude__ModuleName_18 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__V_29_29, (MR_Integer) 0)));
                      exclude__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), exclude__V_29_29, (MR_Integer) 1)));
                      exclude__succeeded = (exclude__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      if (exclude__succeeded)
                        {
                          if ((strcmp(exclude__Scope_17, (MR_String) "all") == 0))
                            {
                              exclude__ExclType_19 = (MR_Integer) 0;
                              exclude__succeeded = MR_TRUE;
                            }
                          else
                          if ((strcmp(exclude__Scope_17, (MR_String) "internal") == 0))
                            {
                              exclude__ExclType_19 = (MR_Integer) 1;
                              exclude__succeeded = MR_TRUE;
                            }
                          else
                            exclude__succeeded = MR_FALSE;
                        }
                    }
                }
              if (exclude__succeeded)
                {
                  MR_Word exclude__Spec_20;
                  MR_Word exclude__RevSpecs1_21;

                  {
                    exclude__Spec_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), exclude__Spec_20, 0) = ((MR_Box) (exclude__ModuleName_18));
                    MR_hl_field(MR_mktag(0), exclude__Spec_20, 1) = ((MR_Box) (exclude__ExclType_19));
                  }
                  {
                    exclude__RevSpecs1_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), exclude__RevSpecs1_21, 0) = ((MR_Box) (exclude__Spec_20));
                    MR_hl_field(MR_mktag(1), exclude__RevSpecs1_21, 1) = ((MR_Box) (exclude__RevSpecs0_9));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word exclude__RevSpecs0__tmp_copy_9 = exclude__RevSpecs1_21;

                    exclude__RevSpecs0_9 = exclude__RevSpecs0__tmp_copy_9;
                  }
                  continue;
                }
              else
                {
                  MR_String exclude__Msg_22;
                  MR_String exclude__V_41_41;
                  MR_String exclude__V_42_42;

                  {
                    exclude__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) " contains badly formatted line: ", exclude__Line_15);
                  }
                  {
                    exclude__V_42_42 = mercury__string__f_43_43_2_f_0(exclude__FileName_7, exclude__V_41_41);
                  }
                  {
                    exclude__Msg_22 = mercury__string__f_43_43_2_f_0((MR_String) "file ", exclude__V_42_42);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *exclude__Res_10 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (exclude__Msg_22));
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word exclude__Err_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), exclude__Res0_12, (MR_Integer) 0)));
              MR_String exclude__Msg_38;

              {
                mercury__io__error_message_2_p_0(exclude__Err_23, &exclude__Msg_38);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *exclude__Res_10 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (exclude__Msg_38));
              }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_1(
  void * exclude__env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

    MR_builtin_longjmp((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_3(
  void * exclude__env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15 = ((MR_Word) (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15);
    {
      exclude__apply_contour_exclusion_3_f_0_2(exclude__env_ptr);
    }
  }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_2(
  void * exclude__env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15, (MR_Integer) 0)));
    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15, (MR_Integer) 1)));
    (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = (strcmp((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14, (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__V_47_47) == 0);
    if ((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
      {
        switch ((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word exclude__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7)));
              MR_Word exclude__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 0)));
              MR_String exclude__V_36_36 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 1)));
              MR_String exclude__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 2)));
              MR_String exclude__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 3)));
              MR_String exclude__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 4)));
              MR_String exclude__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 5)));
              MR_Integer exclude__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 6)));
              MR_ArrayPtr exclude__V_42_42 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 8)));
              MR_ArrayPtr exclude__V_43_43 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 9)));
              MR_Word exclude__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 10)));
              MR_Word exclude__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11)));

              (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = (exclude__V_19_19 == (MR_Integer) 0);
            }
            break;
        }
        if ((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
          {
            exclude__apply_contour_exclusion_3_f_0_1(exclude__env_ptr);
          }
      }
  }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_4(
  void * exclude__env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * exclude__env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) exclude__env_ptr_arg;

    if (MR_builtin_setjmp((exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__set__member_2_p_1((MR_Word) &exclude__exclude__type_ctor_info_exclude_spec_0, &(exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15, (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6, exclude__apply_contour_exclusion_3_f_0_3, exclude__env_ptr);
          }
        }
        (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (exclude__env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
exclude__apply_contour_exclusion_3_f_0(
  MR_Word exclude__Deep_5,
  MR_Word exclude__ExcludedSpecs_6,
  MR_Word exclude__CSDPtr0_7)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s exclude__env;

    (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6 = exclude__ExcludedSpecs_6;
    while (MR_TRUE)
      {
        /* tailcall optimized into a loop */
        {
          MR_Word exclude__CSDPtr_8;

          {
            (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(exclude__Deep_5, exclude__CSDPtr0_7);
          }
          if ((exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
            {
              MR_Word exclude__CSD_9;
              MR_Word exclude__PDPtr_10;
              MR_Word exclude__PD_11;
              MR_Word exclude__PSPtr_12;
              MR_Word exclude__V_20_20;
              MR_Word exclude__V_21_21;
              MR_ArrayPtr exclude__V_22_22;
              MR_Word exclude__V_23_23;
              MR_Word exclude__V_24_24;
              MR_String exclude__V_25_25;
              MR_String exclude__V_26_26;
              MR_String exclude__V_27_27;
              MR_String exclude__V_28_28;
              MR_Integer exclude__V_29_29;
              MR_Word exclude__V_30_30;
              MR_ArrayPtr exclude__V_31_31;
              MR_ArrayPtr exclude__V_32_32;
              MR_Word exclude__V_33_33;
              MR_Word exclude__V_34_34;

              {
                profile__deep_lookup_call_site_dynamics_3_p_0(exclude__Deep_5, exclude__CSDPtr0_7, &exclude__CSD_9);
              }
              exclude__PDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__CSD_9, (MR_Integer) 0)));
              exclude__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__CSD_9, (MR_Integer) 1)));
              exclude__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__CSD_9, (MR_Integer) 2)));
              {
                profile__deep_lookup_proc_dynamics_3_p_0(exclude__Deep_5, exclude__PDPtr_10, &exclude__PD_11);
              }
              exclude__PSPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__PD_11, (MR_Integer) 0)));
              exclude__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), exclude__PD_11, (MR_Integer) 1)));
              exclude__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__PD_11, (MR_Integer) 2)));
              {
                profile__deep_lookup_proc_statics_3_p_0(exclude__Deep_5, exclude__PSPtr_12, &(exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13);
              }
              exclude__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 0)));
              (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 1)));
              exclude__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 2)));
              exclude__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 3)));
              exclude__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 4)));
              exclude__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 5)));
              exclude__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 6)));
              exclude__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7)));
              exclude__V_31_31 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 8)));
              exclude__V_32_32 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 9)));
              exclude__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 10)));
              exclude__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), (exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11)));
              {
                exclude__apply_contour_exclusion_3_f_0_4(&exclude__env);
              }
              if ((exclude__env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
                {
                  MR_Word exclude__CliquePtr_17;
                  MR_Word exclude__EntryCSDPtr_18;

                  {
                    profile__deep_lookup_clique_index_3_p_0(exclude__Deep_5, exclude__PDPtr_10, &exclude__CliquePtr_17);
                  }
                  {
                    profile__deep_lookup_clique_parents_3_p_0(exclude__Deep_5, exclude__CliquePtr_17, &exclude__EntryCSDPtr_18);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word exclude__CSDPtr0__tmp_copy_7 = exclude__EntryCSDPtr_18;

                    exclude__CSDPtr0_7 = exclude__CSDPtr0__tmp_copy_7;
                  }
                  continue;
                }
              else
                exclude__CSDPtr_8 = exclude__CSDPtr0_7;
            }
          else
            exclude__CSDPtr_8 = exclude__CSDPtr0_7;
          return exclude__CSDPtr_8;
        }
        break;
      }
  }
}

static MR_Box MR_CALL 
exclude__read_exclude_file_5_p_0_2(
  MR_Box exclude__closure_arg,
  MR_Box exclude__wrapper_arg_1)
{
  {
    MR_Box exclude__wrapper_arg_2;
    MR_Box exclude__closure = exclude__closure_arg;
    MR_String exclude__conv0_ModuleName_3;

    {
      exclude__conv0_ModuleName_3 = exclude__spec_to_module_name_1_f_0(((MR_Word) exclude__wrapper_arg_1));
    }
    exclude__wrapper_arg_2 = ((MR_Box) (exclude__conv0_ModuleName_3));
    return exclude__wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
exclude__read_exclude_file_5_p_0_1(
  MR_Box exclude__closure_arg,
  MR_Box exclude__wrapper_arg_1)
{
  {
    MR_bool exclude__succeeded;
    MR_Box exclude__closure = exclude__closure_arg;

    {
      exclude__succeeded = exclude__has_valid_module_name_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), exclude__closure, (MR_Integer) 3))), ((MR_Word) exclude__wrapper_arg_1));
    }
    return exclude__succeeded;
  }
}

void MR_CALL 
exclude__read_exclude_file_5_p_0(
  MR_String exclude__FileName_6,
  MR_Word exclude__ModuleDataMap_7,
  MR_Word * exclude__ExcludeFile_8)
{
  {
    MR_bool exclude__succeeded;
    MR_Word exclude__MaybeStream_10;
    MR_Word exclude__ExcludeContents_14;

    {
      mercury__io__open_input_4_p_0(exclude__FileName_6, &exclude__MaybeStream_10);
    }
    if (((MR_tag((MR_Word) exclude__MaybeStream_10)) == (MR_mktag((MR_Integer) 1))))
      exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word exclude__InputStream_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__MaybeStream_10, (MR_Integer) 0)));
        MR_Word exclude__MaybeSpecs_12;

        {
          exclude__read_exclude_lines_6_p_0(exclude__FileName_6, exclude__InputStream_11, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &exclude__MaybeSpecs_12);
        }
        {
          mercury__io__close_input_3_p_0(exclude__InputStream_11);
        }
        if (((MR_tag((MR_Word) exclude__MaybeSpecs_12)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_String exclude__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), exclude__MaybeSpecs_12, (MR_Integer) 0)));

            {
              exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__Msg_15));
            }
          }
        else
          {
            MR_Word exclude__TypeCtorInfo_46_64;
            MR_Word exclude__Specs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), exclude__MaybeSpecs_12, (MR_Integer) 0)));
            MR_Word exclude__ValidSpecs_27;
            MR_Word exclude__InvalidSpecs_28;
            MR_Word exclude__ModuleSpecs_29;
            MR_Word exclude__V_40_40;

            {
              exclude__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 0) = ((MR_Box) (&exclude_scalar_common_2[0]));
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 1) = ((MR_Box) (exclude__read_exclude_file_5_p_0_1));
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(0), exclude__V_40_40, 3) = ((MR_Box) (exclude__ModuleDataMap_7));
            }
            exclude__TypeCtorInfo_46_64 = (MR_Word) &exclude__exclude__type_ctor_info_exclude_spec_0;
            {
              mercury__list__filter_4_p_0(exclude__TypeCtorInfo_46_64, exclude__V_40_40, exclude__Specs_13, &exclude__ValidSpecs_27, &exclude__InvalidSpecs_28);
            }
            {
              mercury__set__list_to_set_2_p_0(exclude__TypeCtorInfo_46_64, exclude__ValidSpecs_27, &exclude__ModuleSpecs_29);
            }
            if ((exclude__InvalidSpecs_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__ModuleSpecs_29));
                  MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            else
            if ((exclude__ValidSpecs_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_String exclude__Msg1_58;
                MR_String exclude__Msg_60;
                MR_String exclude__V_75_75;

                {
                  exclude__V_75_75 = mercury__string__f_43_43_2_f_0(exclude__FileName_6, (MR_String) " contains only unrecognized module names.");
                }
                {
                  exclude__Msg1_58 = mercury__string__f_43_43_2_f_0((MR_String) "Error: file ", exclude__V_75_75);
                }
                {
                  exclude__Msg_60 = mercury__string__f_43_43_2_f_0(exclude__Msg1_58, (MR_String) "These modules either do not exist or have no deep profiled procedures.");
                }
                {
                  exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__Msg_60));
                }
              }
            else
              {
                MR_Word exclude__InvalidModuleNames_35;
                MR_String exclude__BadNames_36;
                MR_String exclude__Msg1_37;
                MR_String exclude__Msg_39;
                MR_Word exclude__MaybeErrorMsg_57;
                MR_String exclude__V_69_69;
                MR_String exclude__V_71_71;
                MR_String exclude__V_72_72;

                {
                  exclude__InvalidModuleNames_35 = mercury__list__map_2_f_0(exclude__TypeCtorInfo_46_64, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &exclude_scalar_common_3[0], exclude__InvalidSpecs_28);
                }
                {
                  exclude__BadNames_36 = mercury__string__join_list_2_f_0((MR_String) ", ", exclude__InvalidModuleNames_35);
                }
                {
                  exclude__V_69_69 = mercury__string__f_43_43_2_f_0(exclude__BadNames_36, (MR_String) ".");
                }
                {
                  exclude__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) " contains unrecognized module names: ", exclude__V_69_69);
                }
                {
                  exclude__V_72_72 = mercury__string__f_43_43_2_f_0(exclude__FileName_6, exclude__V_71_71);
                }
                {
                  exclude__Msg1_37 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: ", exclude__V_72_72);
                }
                {
                  exclude__Msg_39 = mercury__string__f_43_43_2_f_0(exclude__Msg1_37, (MR_String) "These modules either do not exist or have no deep profiled procedures.");
                }
                {
                  exclude__MaybeErrorMsg_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), exclude__MaybeErrorMsg_57, 0) = ((MR_Box) (exclude__Msg_39));
                }
                {
                  exclude__ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 0) = ((MR_Box) (exclude__ModuleSpecs_29));
                  MR_hl_field(MR_mktag(2), exclude__ExcludeContents_14, 1) = ((MR_Box) (exclude__MaybeErrorMsg_57));
                }
              }
          }
      }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *exclude__ExcludeFile_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (exclude__FileName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (exclude__ExcludeContents_14));
    }
  }
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
