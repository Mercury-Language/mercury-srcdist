/*
** Automatically generated from `exclude.m'
** by the Mercury compiler,
** version rotd-2022-01-09
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


// :- module exclude.
// :- implementation.

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
#include "measurements.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "profile.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.program_representation.mih"
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
  MR_String exclude__apply_contour_exclusion_4_f_0_env_0__Var_47;
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

static const MR_DuArgLocn exclude__exclude__field_locns_exclude_spec_0_0[2];

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_spec_0_0;

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_spec_0_0[1];

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_spec_0[1];

static const MR_DuFunctorDescPtr exclude__exclude__du_name_ordered_exclude_spec_0[1];

static const MR_Integer exclude__exclude__functor_number_map_exclude_spec_0[1];

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_0;

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_1;

static const MR_EnumFunctorDescPtr exclude__exclude__enum_ordinal_ordered_exclusion_type_0[2];

static const MR_EnumFunctorDescPtr exclude__exclude__enum_name_ordered_exclusion_type_0[2];

static const MR_Integer exclude__exclude__functor_number_map_exclusion_type_0[2];

static void MR_CALL 
exclude____Compare____exclusion_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
exclude__spec_to_module_name_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
exclude__has_valid_module_name_2_p_0(
  MR_Word ModuleDataMap_3,
  MR_Word Spec_4);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_1(
  void * env_ptr_arg);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_3(
  void * env_ptr_arg);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_2(
  void * env_ptr_arg);

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_4(
  void * env_ptr_arg);

static MR_Box MR_CALL 
exclude__read_exclude_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
exclude__read_exclude_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
exclude__read_exclude_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
exclude__read_exclude_lines_6_p_0(
  MR_String FileName_7,
  MR_Word InputStream_8,
  MR_Word RevSpecs0_9,
  MR_Word * Res_10);

static MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclude_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclude_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclude_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
exclude____Compare____excluded_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
exclude____Compare____exclusion_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box exclude_scalar_common_1[2][2];

static /* final */ const MR_Box exclude_scalar_common_2[1][4];

static /* final */ const MR_Box exclude_scalar_common_3[2][3];

static /* final */ const MR_Box exclude_scalar_common_4[2][5];




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

static /* final */ const MR_Box exclude_scalar_common_2[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
};

static /* final */ const MR_Box exclude_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&exclude_scalar_common_2[0])),
    ((MR_Box) (exclude__read_exclude_lines_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&exclude_scalar_common_4[1])),
    ((MR_Box) (exclude__read_exclude_file_5_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box exclude_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&exclude__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0)),
    ((MR_Box) (&exclude__exclude__type_ctor_info_exclude_spec_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&exclude__exclude__type_ctor_info_exclude_spec_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct2 exclude__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_profile__type_ctor_info_module_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_module_data_0)
  }
};

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_0 = {
  (MR_String) "no_exclude_file",
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

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_1[1] = {
  (MR_String) "exclude_syntax_error"
};

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_1 = {
  (MR_String) "unreadable_exclude_file",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  exclude__exclude__field_types_exclude_contents_0_1,
  exclude__exclude__field_names_exclude_contents_0_1,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) (&exclude__exclude__type_ctor_info_exclude_spec_0)
  }
};

static const MR_FA_TypeInfo_Struct1 exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_contents_0_2[2] = {
  (MR_PseudoTypeInfo) (&exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0),
  (MR_PseudoTypeInfo) (&exclude__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_ConstString exclude__exclude__field_names_exclude_contents_0_2[2] = {
  (MR_String) "exclude_specs",
  (MR_String) "exclude_maybe_error"
};

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_contents_0_2 = {
  (MR_String) "readable_exclude_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  exclude__exclude__field_types_exclude_contents_0_2,
  exclude__exclude__field_names_exclude_contents_0_2,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
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
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    exclude__exclude__du_stag_ordered_exclude_contents_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_contents_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_contents_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_contents_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_contents_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_contents",
  {     exclude__exclude__du_name_ordered_exclude_contents_0 },
  {     exclude__exclude__du_ptag_ordered_exclude_contents_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  exclude__exclude__functor_number_map_exclude_contents_0,

};

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_file_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&exclude__exclude__type_ctor_info_exclude_contents_0)
};

static const MR_ConstString exclude__exclude__field_names_exclude_file_0_0[2] = {
  (MR_String) "exclude_filename",
  (MR_String) "exclude_file_contents"
};

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_file_0_0 = {
  (MR_String) "exclude_file",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  exclude__exclude__field_types_exclude_file_0_0,
  exclude__exclude__field_names_exclude_file_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_file_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_file_0_0
};

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_file_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_file_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_file_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_file_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_file",
  {     exclude__exclude__du_name_ordered_exclude_file_0 },
  {     exclude__exclude__du_ptag_ordered_exclude_file_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  exclude__exclude__functor_number_map_exclude_file_0,

};

static const MR_PseudoTypeInfo exclude__exclude__field_types_exclude_spec_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&exclude__exclude__type_ctor_info_exclusion_type_0)
};

static const MR_DuArgLocn exclude__exclude__field_locns_exclude_spec_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc exclude__exclude__du_functor_desc_exclude_spec_0_0 = {
  (MR_String) "exclude_spec",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  exclude__exclude__field_types_exclude_spec_0_0,
  NULL,
  exclude__exclude__field_locns_exclude_spec_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr exclude__exclude__du_stag_ordered_exclude_spec_0_0[1] = {
  &exclude__exclude__du_functor_desc_exclude_spec_0_0
};

static const MR_DuPtagLayout exclude__exclude__du_ptag_ordered_exclude_spec_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    exclude__exclude__du_stag_ordered_exclude_spec_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (exclude____Unify____exclude_spec_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclude_spec_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclude_spec",
  {     exclude__exclude__du_name_ordered_exclude_spec_0 },
  {     exclude__exclude__du_ptag_ordered_exclude_spec_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  exclude__exclude__functor_number_map_exclude_spec_0,

};

const MR_TypeCtorInfo_Struct exclude__exclude__type_ctor_info_excluded_modules_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (exclude____Unify____excluded_modules_0_0_10001)),
  ((MR_Box) (exclude____Compare____excluded_modules_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "excluded_modules",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&exclude__set_ordlist__ti_set_ordlist_1exclude__type_ctor_info_exclude_spec_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_0 = {
  (MR_String) "exclude_all_procedures",
  INT32_C(0)
};

static const MR_EnumFunctorDesc exclude__exclude__enum_functor_desc_exclusion_type_0_1 = {
  (MR_String) "exclude_internal_procedures",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr exclude__exclude__enum_ordinal_ordered_exclusion_type_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (exclude____Unify____exclusion_type_0_0_10001)),
  ((MR_Box) (exclude____Compare____exclusion_type_0_0_10001)),
  (MR_String) "exclude",
  (MR_String) "exclusion_type",
  {     exclude__exclude__enum_name_ordered_exclusion_type_0 },
  {     exclude__exclude__enum_ordinal_ordered_exclusion_type_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  exclude__exclude__functor_number_map_exclusion_type_0,

};

static void MR_CALL 
exclude____Compare____exclusion_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
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
}

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
exclude____Compare____excluded_modules_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&exclude_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&exclude_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
exclude____Compare____exclude_spec_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
        MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

        succeeded = (Var_13 < Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_13 > Var_14);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
exclude____Compare____exclude_file_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        exclude____Compare____exclude_contents_0_0(HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
  }
}

MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = exclude____Unify____exclude_contents_0_0(ArgX2_5, ArgY2_6);
    }
    return succeeded;
  }
}

void MR_CALL 
exclude____Compare____exclude_contents_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_24 = (MR_Integer) (HeadVar__3_3);

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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_30 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_30, ArgY1_9);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_20;

                  mercury__builtin__compare_3_p_0((MR_Word) (&exclude_scalar_common_1[0]), &SubResult1_20, ((MR_Box) (Var_29)), ((MR_Box) (ArgY1_19)));
                  succeeded = (SubResult1_20 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_20;
                  else
                    mercury__builtin__compare_3_p_0((MR_Word) (&exclude_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_28)), ((MR_Box) (ArgY2_22)));
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
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
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
            MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word TypeInfo_13_13;
            MR_Word TypeInfo_14_14;
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              TypeInfo_13_13 = (MR_Word) (&exclude_scalar_common_1[0]);
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX1_7)), ((MR_Box) (ArgY1_8)));
              if (succeeded)
              {
                TypeInfo_14_14 = (MR_Word) (&exclude_scalar_common_1[1]);
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_14_14, ((MR_Box) (ArgX2_9)), ((MR_Box) (ArgY2_10)));
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

static MR_String MR_CALL 
exclude__spec_to_module_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String ModuleName_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));

    return ModuleName_3;
  }
}

static MR_bool MR_CALL 
exclude__has_valid_module_name_2_p_0(
  MR_Word ModuleDataMap_3,
  MR_Word Spec_4)
{
  {
    MR_bool succeeded;
    MR_String Var_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), Spec_4, (MR_Integer) 0))));
    MR_Box conv0_Var_5;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&profile__profile__type_ctor_info_module_data_0), ModuleDataMap_3, ((MR_Box) (Var_6)), &conv0_Var_5);
    if (succeeded)
      succeeded = MR_TRUE;
    return succeeded;
  }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_1(
  void * env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_3(
  void * env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15 = ((MR_Word) ((env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15));
    exclude__apply_contour_exclusion_3_f_0_2(env_ptr);
  }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_2(
  void * env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) (env_ptr_arg);

    {
      MR_Unsigned packed_word_2;

      (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__Var_47 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15, (MR_Integer) 0))));
      packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15, (MR_Integer) 1)));
      (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclSpec_15, (MR_Integer) 1))) & (MR_Integer) 1);
      (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = (strcmp((env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14, (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__Var_47) == 0);
      if ((env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
      {
        switch ((env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExclType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7))) & (MR_Integer) 1);
              MR_Word Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 0))));
              MR_String Var_36 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 1))));
              MR_String Var_37 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 2))));
              MR_String Var_38 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 3))));
              MR_String Var_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 4))));
              MR_String Var_40 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 5))));
              MR_Integer Var_41 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 6))));
              MR_ArrayPtr Var_42 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 8))));
              MR_ArrayPtr Var_43 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 9))));
              MR_Word Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 10))));
              MR_Word Var_45 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11))) & (MR_Integer) 1);
              MR_Unsigned packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7)));
              MR_Unsigned packed_word_4 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11)));

              (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = (Var_19 == (MR_Integer) 0);
            }
            break;
        }
        if ((env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
          exclude__apply_contour_exclusion_3_f_0_1(env_ptr);
      }
    }
  }
}

static void MR_CALL 
exclude__apply_contour_exclusion_3_f_0_4(
  void * env_ptr_arg)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s * env_ptr = (struct exclude__apply_contour_exclusion_4_f_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__commit_0) == 0)
      {
        mercury__set__member_2_p_1((MR_Word) (&exclude__exclude__type_ctor_info_exclude_spec_0), &(env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__conv0_ExclSpec_15, (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6, exclude__apply_contour_exclusion_3_f_0_3, env_ptr);
        (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
exclude__apply_contour_exclusion_3_f_0(
  MR_Word Deep_5,
  MR_Word ExcludedSpecs_6,
  MR_Word CSDPtr0_7)
{
  {
    struct exclude__apply_contour_exclusion_4_f_0_env_0_s env;

    (env).exclude__apply_contour_exclusion_4_f_0_env_0__ExcludedSpecs_6 = ExcludedSpecs_6;
    while (MR_TRUE)
    {
      MR_Word CSDPtr_8;

      // setup for model_det tailcalls optimized into a loop
      ;
      (env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded = profile__valid_call_site_dynamic_ptr_2_p_0(Deep_5, CSDPtr0_7);
      if ((env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
      {
        MR_Word CSD_9;
        MR_Word PDPtr_10;
        MR_Word PD_11;
        MR_Word PSPtr_12;
        MR_Word Var_20;
        MR_Word Var_21;
        MR_ArrayPtr Var_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_String Var_25;
        MR_String Var_26;
        MR_String Var_27;
        MR_String Var_28;
        MR_Integer Var_29;
        MR_Word Var_30;
        MR_ArrayPtr Var_31;
        MR_ArrayPtr Var_32;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Unsigned packed_word_0;
        MR_Unsigned packed_word_1;

        profile__deep_lookup_call_site_dynamics_3_p_0(Deep_5, CSDPtr0_7, &CSD_9);
        PDPtr_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_9, (MR_Integer) 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_9, (MR_Integer) 1))));
        Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CSD_9, (MR_Integer) 2))));
        profile__deep_lookup_proc_dynamics_3_p_0(Deep_5, PDPtr_10, &PD_11);
        PSPtr_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_11, (MR_Integer) 0))));
        Var_22 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), PD_11, (MR_Integer) 1))));
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), PD_11, (MR_Integer) 2))));
        profile__deep_lookup_proc_statics_3_p_0(Deep_5, PSPtr_12, &(env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13);
        Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 0))));
        (env).exclude__apply_contour_exclusion_4_f_0_env_0__ModuleName_14 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 1))));
        Var_25 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 2))));
        Var_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 3))));
        Var_27 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 4))));
        Var_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 5))));
        Var_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 6))));
        packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7)));
        Var_30 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 7))) & (MR_Integer) 1);
        Var_31 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 8))));
        Var_32 = ((MR_ArrayPtr) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 9))));
        Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 10))));
        packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11)));
        Var_34 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), (env).exclude__apply_contour_exclusion_4_f_0_env_0__PS_13, (MR_Integer) 11))) & (MR_Integer) 1);
        exclude__apply_contour_exclusion_3_f_0_4(&env);
        if ((env).exclude__apply_contour_exclusion_4_f_0_env_0__succeeded)
        {
          MR_Word CliquePtr_17;
          MR_Word EntryCSDPtr_18;
          MR_Word next_value_of_CSDPtr0_7;

          profile__deep_lookup_clique_index_3_p_0(Deep_5, PDPtr_10, &CliquePtr_17);
          profile__deep_lookup_clique_parents_3_p_0(Deep_5, CliquePtr_17, &EntryCSDPtr_18);
          // direct tailcall eliminated
          ;
          next_value_of_CSDPtr0_7 = EntryCSDPtr_18;
          CSDPtr0_7 = next_value_of_CSDPtr0_7;
          continue;
        }
        else
          CSDPtr_8 = CSDPtr0_7;
      }
      else
        CSDPtr_8 = CSDPtr0_7;
      return CSDPtr_8;
      break;
    }
  }
}

static MR_Box MR_CALL 
exclude__read_exclude_file_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_ModuleName_3;

    conv0_ModuleName_3 = exclude__spec_to_module_name_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_ModuleName_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
exclude__read_exclude_file_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = exclude__has_valid_module_name_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

void MR_CALL 
exclude__read_exclude_file_5_p_0(
  MR_String FileName_6,
  MR_Word ModuleDataMap_7,
  MR_Word * ExcludeFile_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeStream_10;
    MR_Word ExcludeContents_14;

    mercury__io__open_input_4_p_0(FileName_6, &MaybeStream_10);
    if (((MR_tag((MR_Word) MaybeStream_10)) == (MR_Integer) 1))
      ExcludeContents_14 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word InputStream_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeStream_10, (MR_Integer) 0))));
      MR_Word MaybeSpecs_12;

      exclude__read_exclude_lines_6_p_0(FileName_6, InputStream_11, (MR_Word) ((MR_Unsigned) 0U), &MaybeSpecs_12);
      mercury__io__close_input_3_p_0(InputStream_11);
      if (((MR_tag((MR_Word) MaybeSpecs_12)) == (MR_Integer) 1))
      {
        MR_String Msg_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeSpecs_12, (MR_Integer) 0))));

        {
          ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ExcludeContents_14, 0) = ((MR_Box) (Msg_15));
        }
      }
      else
      {
        MR_Word Specs_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeSpecs_12, (MR_Integer) 0))));
        MR_Word ValidSpecs_27;
        MR_Word InvalidSpecs_28;
        MR_Word ModuleSpecs_29;
        MR_Word Var_40;

        {
          Var_40 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&exclude_scalar_common_4[0]));
          MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (exclude__read_exclude_file_5_p_0_1));
          MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (ModuleDataMap_7));
        }
        mercury__list__filter_4_p_0((MR_Word) (&exclude__exclude__type_ctor_info_exclude_spec_0), Var_40, Specs_13, &ValidSpecs_27, &InvalidSpecs_28);
        mercury__set__list_to_set_2_p_0((MR_Word) (&exclude__exclude__type_ctor_info_exclude_spec_0), ValidSpecs_27, &ModuleSpecs_29);
        if ((InvalidSpecs_28 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ExcludeContents_14, 0) = ((MR_Box) (ModuleSpecs_29));
            MR_hl_field(MR_mktag(2), ExcludeContents_14, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        else
        if ((ValidSpecs_27 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Msg1_58;
          MR_String Msg2_59;
          MR_String Msg_60;
          MR_String Var_75;

          Var_75 = mercury__string__f_43_43_2_f_0(FileName_6, (MR_String) " contains only unrecognized module names.");
          Msg1_58 = mercury__string__f_43_43_2_f_0((MR_String) "Error: file ", Var_75);
          Msg2_59 = mercury__string__f_43_43_2_f_0((MR_String) "These modules either do not exist ", (MR_String) "or have no deep profiled procedures.");
          Msg_60 = mercury__string__f_43_43_2_f_0(Msg1_58, Msg2_59);
          {
            ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ExcludeContents_14, 0) = ((MR_Box) (Msg_60));
          }
        }
        else
        {
          MR_Word InvalidModuleNames_35;
          MR_String BadNames_36;
          MR_String Msg1_37;
          MR_String Msg2_38;
          MR_String Msg_39;
          MR_Word MaybeErrorMsg_57;
          MR_String Var_69;
          MR_String Var_71;
          MR_String Var_72;

          InvalidModuleNames_35 = mercury__list__map_2_f_0((MR_Word) (&exclude__exclude__type_ctor_info_exclude_spec_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&exclude_scalar_common_3[1]), InvalidSpecs_28);
          BadNames_36 = mercury__string__join_list_2_f_0((MR_String) ", ", InvalidModuleNames_35);
          Var_69 = mercury__string__f_43_43_2_f_0(BadNames_36, (MR_String) ".");
          Var_71 = mercury__string__f_43_43_2_f_0((MR_String) " contains unrecognized module names: ", Var_69);
          Var_72 = mercury__string__f_43_43_2_f_0(FileName_6, Var_71);
          Msg1_37 = mercury__string__f_43_43_2_f_0((MR_String) "Warning: ", Var_72);
          Msg2_38 = mercury__string__f_43_43_2_f_0((MR_String) "These modules either do not exist ", (MR_String) "or have no deep profiled procedures.");
          Msg_39 = mercury__string__f_43_43_2_f_0(Msg1_37, Msg2_38);
          {
            MaybeErrorMsg_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeErrorMsg_57, 0) = ((MR_Box) (Msg_39));
          }
          {
            ExcludeContents_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ExcludeContents_14, 0) = ((MR_Box) (ModuleSpecs_29));
            MR_hl_field(MR_mktag(2), ExcludeContents_14, 1) = ((MR_Box) (MaybeErrorMsg_57));
          }
        }
      }
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *ExcludeFile_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileName_6));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ExcludeContents_14));
    }
  }
}

static MR_bool MR_CALL 
exclude__read_exclude_lines_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = mercury__char__is_whitespace_1_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
    return succeeded;
  }
}

static void MR_CALL 
exclude__read_exclude_lines_6_p_0(
  MR_String FileName_7,
  MR_Word InputStream_8,
  MR_Word RevSpecs0_9,
  MR_Word * Res_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res0_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InputStream_8, &Res0_12);
    switch (MR_tag((MR_Word) Res0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *Res_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (RevSpecs0_9));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line0_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), Res0_12, (MR_Integer) 0))));
          MR_String Line_15;
          MR_String LinePrime_14;
          MR_String ModuleName_18;
          MR_Word ExclType_19;
          MR_Word Words_16;
          MR_String Scope_17;
          MR_Word Var_29;
          MR_Word Var_30;

          succeeded = mercury__string__remove_suffix_3_p_0(Line0_13, (MR_String) "\n", &LinePrime_14);
          if (succeeded)
            Line_15 = LinePrime_14;
          else
            Line_15 = Line0_13;
          Words_16 = mercury__string__words_separator_2_f_0((MR_Word) (&exclude_scalar_common_3[0]), Line_15);
          succeeded = (Words_16 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Scope_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), Words_16, (MR_Integer) 0))));
            Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Words_16, (MR_Integer) 1))));
            succeeded = (Var_29 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              ModuleName_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 0))));
              Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_29, (MR_Integer) 1))));
              succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                if ((strcmp(Scope_17, (MR_String) "all") == 0))
                {
                  ExclType_19 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                if ((strcmp(Scope_17, (MR_String) "internal") == 0))
                {
                  ExclType_19 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
              }
            }
          }
          if (succeeded)
          {
            MR_Word Spec_20;
            MR_Word RevSpecs1_21;
            MR_Word next_value_of_RevSpecs0_9;

            {
              Spec_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Spec_20, 0) = ((MR_Box) (ModuleName_18));
              MR_hl_field(MR_mktag(0), Spec_20, 1) = (MR_Box) ((MR_Unsigned) (ExclType_19));
            }
            {
              RevSpecs1_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), RevSpecs1_21, 0) = ((MR_Box) (Spec_20));
              MR_hl_field(MR_mktag(1), RevSpecs1_21, 1) = ((MR_Box) (RevSpecs0_9));
            }
            // direct tailcall eliminated
            ;
            next_value_of_RevSpecs0_9 = RevSpecs1_21;
            RevSpecs0_9 = next_value_of_RevSpecs0_9;
            continue;
          }
          else
          {
            MR_String Msg_22;
            MR_String Var_41;
            MR_String Var_42;

            Var_41 = mercury__string__f_43_43_2_f_0((MR_String) " contains badly formatted line: ", Line_15);
            Var_42 = mercury__string__f_43_43_2_f_0(FileName_7, Var_41);
            Msg_22 = mercury__string__f_43_43_2_f_0((MR_String) "file ", Var_42);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_10 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_22));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Err_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Res0_12, (MR_Integer) 0))));
          MR_String Msg_38;

          mercury__io__error_message_2_p_0(Err_23, &Msg_38);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_10 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_38));
          }
        }
        break;
    }
    break;
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclude_contents_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = exclude____Unify____exclude_contents_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclude_contents_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    exclude____Compare____exclude_contents_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclude_file_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = exclude____Unify____exclude_file_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclude_file_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    exclude____Compare____exclude_file_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclude_spec_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = exclude____Unify____exclude_spec_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclude_spec_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    exclude____Compare____exclude_spec_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____excluded_modules_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = exclude____Unify____excluded_modules_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
exclude____Compare____excluded_modules_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    exclude____Compare____excluded_modules_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
exclude____Unify____exclusion_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = exclude____Unify____exclusion_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
exclude____Compare____exclusion_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    exclude____Compare____exclusion_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// Ensure everything is compiled with the same grade.
const char *mercury__exclude__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module exclude.
