/*
** Automatically generated from `mdprof_procrep.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module mdprof_procrep. */
/* :- implementation. */

/*
INIT mercury__mdprof_procrep__init
ENDINIT
*/

#include "mdprof_procrep.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "program_representation_utils.mih"
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
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



#line 47 "mdprof_procrep.m"
struct mdprof_procrep__main_2_p_0_4_env_0_s {
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_1;
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_2;
#line 47 "mdprof_procrep.m"
  MR_Cont mdprof_procrep__main_2_p_0_4_env_0__cont;
#line 47 "mdprof_procrep.m"
  void * mdprof_procrep__main_2_p_0_4_env_0__cont_env_ptr;
#line 47 "mdprof_procrep.m"
  MR_Word mdprof_procrep__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
#line 47 "mdprof_procrep.m"
  MR_Word mdprof_procrep__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
#line 47 "mdprof_procrep.m"
};


#line 95 "mdprof_procrep.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__pti_module_rep_1__plain_unit__type_ctor_info_unit_0;

#line 98 "mdprof_procrep.c"
static const MR_FA_TypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0;

#line 101 "mdprof_procrep.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_procrep__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0;

#line 104 "mdprof_procrep.c"
static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0;

#line 107 "mdprof_procrep.c"
static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1;

#line 110 "mdprof_procrep.c"
static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_value_ordered_option_0[2];

#line 113 "mdprof_procrep.c"
static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_name_ordered_option_0[2];

#line 116 "mdprof_procrep.c"
static const MR_Integer mdprof_procrep__mdprof_procrep__functor_number_map_option_0[2];

#line 119 "mdprof_procrep.c"
static MR_bool MR_CALL 
mdprof_procrep____Unify____option_0_0_10001(
#line 122 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 124 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_2);

#line 127 "mdprof_procrep.c"
static void MR_CALL 
mdprof_procrep____Compare____option_0_0_10001(
#line 130 "mdprof_procrep.c"
  MR_Box * mdprof_procrep__wrapper_arg_1,
#line 132 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_2,
#line 134 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_3);

#line 113 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_115_101_108_101_99_116_101_100_95_109_111_100_117_108_101_115_95_95_49_49_51_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 113 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_23);

#line 121 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__121__1_4_p_0(
#line 121 "mdprof_procrep.m"
  MR_Word mdprof_procrep__ModuleReps_5,
#line 121 "mdprof_procrep.m"
  MR_String mdprof_procrep__HeadVar__2_17);

#line 113 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__113__1_4_p_0(
#line 113 "mdprof_procrep.m"
  MR_String mdprof_procrep__HeadVar__1_22,
#line 113 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_23);

#line 85 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep____Compare____option_0_0(
#line 85 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__1_1,
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_2,
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__3_3);

#line 85 "mdprof_procrep.m"
static MR_bool MR_CALL 
mdprof_procrep____Unify____option_0_0(
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_1,
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_2);

#line 98 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__defaults_2_p_0(
#line 98 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__1_1,
#line 98 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__2_2,
#line 98 "mdprof_procrep.m"
  MR_Cont mdprof_procrep__cont,
#line 98 "mdprof_procrep.m"
  void * mdprof_procrep__cont_env_ptr);

#line 94 "mdprof_procrep.m"
static MR_bool MR_CALL 
mdprof_procrep__long_2_p_0(
#line 94 "mdprof_procrep.m"
  MR_String mdprof_procrep__HeadVar__1_1,
#line 94 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__2_2);

#line 90 "mdprof_procrep.m"
static MR_bool MR_CALL 
mdprof_procrep__short_2_p_0(
#line 90 "mdprof_procrep.m"
  MR_Char mdprof_procrep__HeadVar__1_1,
#line 90 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__2_2);

#line 78 "mdprof_procrep.m"
static MR_String MR_CALL 
mdprof_procrep__help_message_1_f_0(
#line 78 "mdprof_procrep.m"
  MR_String mdprof_procrep__ProgName_3);

#line 117 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_6(
#line 117 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 117 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 117 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_2,
#line 117 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_3);

#line 111 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_5(
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_2,
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_3,
#line 111 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_4);

#line 47 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_3(
#line 47 "mdprof_procrep.m"
  void * mdprof_procrep__env_ptr_arg);

#line 47 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_4(
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_1,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_2,
#line 47 "mdprof_procrep.m"
  MR_Cont mdprof_procrep__cont,
#line 47 "mdprof_procrep.m"
  void * mdprof_procrep__cont_env_ptr);

#line 47 "mdprof_procrep.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_2);

#line 47 "mdprof_procrep.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_2);


static /* final */ const MR_Box mdprof_procrep_scalar_common_1[3][2];

static /* final */ const MR_Box mdprof_procrep_scalar_common_2[3][5];

static /* final */ const MR_Box mdprof_procrep_scalar_common_3[5][3];

static /* final */ const MR_Box mdprof_procrep_scalar_common_4[1][1];

static /* final */ const MR_Box mdprof_procrep_scalar_common_5[2][7];


#line 100 "mdprof_procrep.m"
/* sealed */ struct mdprof_procrep__vector_common_type_6_0_s {
#line 100 "mdprof_procrep.m"
  const MR_Word mdprof_procrep__vector_common_type_6_0__vct_6_f_0;
#line 100 "mdprof_procrep.m"
  const MR_Word mdprof_procrep__vector_common_type_6_0__vct_6_f_1;
#line 100 "mdprof_procrep.m"
};

static /* final */ const struct mdprof_procrep__vector_common_type_6_0_s mdprof_procrep_vector_common_6[2];



static /* final */ const MR_Box mdprof_procrep_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "Deep.procrep"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "dummy"))
  },
};

static /* final */ const MR_Box mdprof_procrep_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_procrep_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_3[0])),
    ((MR_Box) (&mdprof_procrep_scalar_common_3[1])),
    ((MR_Box) (&mdprof_procrep_scalar_common_3[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_5[0])),
    ((MR_Box) (main_2_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_procrep_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box mdprof_procrep_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_procrep__mdbcomp__program_representation__pti_module_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdprof_procrep__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mdprof_procrep__vector_common_type_6_0_s mdprof_procrep_vector_common_6[2] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_procrep_scalar_common_1[1])
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) MR_mkword(MR_mktag(3), &mdprof_procrep_scalar_common_1[2])
  },
};


#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "array.mh"
#include "array.mh"



#line 442 "mdprof_procrep.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__pti_module_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1,
  {
    (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 450 "mdprof_procrep.c"
static const MR_FA_TypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1,
  {
    (MR_TypeInfo) &mercury__unit__unit__type_ctor_info_unit_0
  }
};

#line 458 "mdprof_procrep.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdprof_procrep__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mdprof_procrep__mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0
  }
};

#line 467 "mdprof_procrep.c"
static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0 = {
  (MR_String) "filename",
  (MR_Integer) 0
};

#line 473 "mdprof_procrep.c"
static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1 = {
  (MR_String) "dummy",
  (MR_Integer) 1
};

#line 479 "mdprof_procrep.c"
static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_value_ordered_option_0[2] = {
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0,
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1
};

#line 485 "mdprof_procrep.c"
static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_name_ordered_option_0[2] = {
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1,
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0
};

#line 491 "mdprof_procrep.c"
static const MR_Integer mdprof_procrep__mdprof_procrep__functor_number_map_option_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 497 "mdprof_procrep.c"
const MR_TypeCtorInfo_Struct mdprof_procrep__mdprof_procrep__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_procrep____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_procrep____Compare____option_0_0_10001)),
  (MR_String) "mdprof_procrep",
  (MR_String) "option",
  {
    mdprof_procrep__mdprof_procrep__enum_name_ordered_option_0
  },
  {
    mdprof_procrep__mdprof_procrep__enum_value_ordered_option_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdprof_procrep__mdprof_procrep__functor_number_map_option_0
};

#line 518 "mdprof_procrep.c"
static MR_bool MR_CALL 
mdprof_procrep____Unify____option_0_0_10001(
#line 521 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 523 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_2)
#line 525 "mdprof_procrep.c"
{
#line 527 "mdprof_procrep.c"
  {
#line 529 "mdprof_procrep.c"
    MR_bool mdprof_procrep__succeeded;

#line 532 "mdprof_procrep.c"
    {
#line 534 "mdprof_procrep.c"
      mdprof_procrep__succeeded = mdprof_procrep____Unify____option_0_0(((MR_Word) mdprof_procrep__wrapper_arg_1), ((MR_Word) mdprof_procrep__wrapper_arg_2));
    }
#line 537 "mdprof_procrep.c"
    return mdprof_procrep__succeeded;
#line 539 "mdprof_procrep.c"
  }
#line 541 "mdprof_procrep.c"
}

#line 544 "mdprof_procrep.c"
static void MR_CALL 
mdprof_procrep____Compare____option_0_0_10001(
#line 547 "mdprof_procrep.c"
  MR_Box * mdprof_procrep__wrapper_arg_1,
#line 549 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_2,
#line 551 "mdprof_procrep.c"
  MR_Box mdprof_procrep__wrapper_arg_3)
#line 553 "mdprof_procrep.c"
{
#line 555 "mdprof_procrep.c"
  {
#line 557 "mdprof_procrep.c"
    MR_Word mdprof_procrep__conv0_HeadVar__1_1;

#line 560 "mdprof_procrep.c"
    {
#line 562 "mdprof_procrep.c"
      mdprof_procrep____Compare____option_0_0(&mdprof_procrep__conv0_HeadVar__1_1, ((MR_Word) mdprof_procrep__wrapper_arg_2), ((MR_Word) mdprof_procrep__wrapper_arg_3));
    }
#line 565 "mdprof_procrep.c"
    *mdprof_procrep__wrapper_arg_1 = ((MR_Box) (mdprof_procrep__conv0_HeadVar__1_1));
#line 567 "mdprof_procrep.c"
  }
#line 569 "mdprof_procrep.c"
}

#line 113 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_115_101_108_101_99_116_101_100_95_109_111_100_117_108_101_115_95_95_49_49_51_95_95_49_95_95_91_49_93_95_48_4_p_0(
#line 113 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_23)
#line 113 "mdprof_procrep.m"
{
#line 129 "mdprof_procrep.m"
  {
#line 129 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;
#line 129 "mdprof_procrep.m"
    MR_Word mdprof_procrep__Strings_50;
#line 129 "mdprof_procrep.m"
    MR_String mdprof_procrep__V_51_51;
#line 129 "mdprof_procrep.m"
    MR_Word mdprof_procrep__V_53_53;

#line 130 "mdprof_procrep.m"
    {
#line 130 "mdprof_procrep.m"
      program_representation_utils__print_module_to_strings_2_p_0(mdprof_procrep__HeadVar__2_23, &mdprof_procrep__Strings_50);
    }
#line 131 "mdprof_procrep.m"
    {
#line 131 "mdprof_procrep.m"
      mdprof_procrep__V_53_53 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdprof_procrep__Strings_50);
    }
#line 131 "mdprof_procrep.m"
    {
#line 131 "mdprof_procrep.m"
      mdprof_procrep__V_51_51 = mercury__string__append_list_1_f_0(mdprof_procrep__V_53_53);
    }
#line 131 "mdprof_procrep.m"
    {
#line 131 "mdprof_procrep.m"
      mercury__io__write_string_3_p_0(mdprof_procrep__V_51_51);
#line 131 "mdprof_procrep.m"
      return;
    }
#line 129 "mdprof_procrep.m"
  }
#line 113 "mdprof_procrep.m"
}

#line 121 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__121__1_4_p_0(
#line 121 "mdprof_procrep.m"
  MR_Word mdprof_procrep__ModuleReps_5,
#line 121 "mdprof_procrep.m"
  MR_String mdprof_procrep__HeadVar__2_17)
#line 121 "mdprof_procrep.m"
{
#line 121 "mdprof_procrep.m"
  {
#line 121 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;
#line 121 "mdprof_procrep.m"
    MR_Word mdprof_procrep__ModuleRep_31;
#line 119 "mdprof_procrep.m"
    MR_Box mdprof_procrep__conv0_ModuleRep_31;

#line 119 "mdprof_procrep.m"
    {
#line 119 "mdprof_procrep.m"
      mdprof_procrep__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdprof_procrep_scalar_common_1[0], mdprof_procrep__ModuleReps_5, ((MR_Box) (mdprof_procrep__HeadVar__2_17)), &mdprof_procrep__conv0_ModuleRep_31);
    }
#line 119 "mdprof_procrep.m"
    if (mdprof_procrep__succeeded)
#line 119 "mdprof_procrep.m"
      {
#line 119 "mdprof_procrep.m"
        mdprof_procrep__ModuleRep_31 = ((MR_Word) mdprof_procrep__conv0_ModuleRep_31);
#line 119 "mdprof_procrep.m"
        mdprof_procrep__succeeded = MR_TRUE;
#line 119 "mdprof_procrep.m"
      }
#line 121 "mdprof_procrep.m"
    if (mdprof_procrep__succeeded)
#line 129 "mdprof_procrep.m"
      {
#line 129 "mdprof_procrep.m"
        MR_Word mdprof_procrep__Strings_50;
#line 129 "mdprof_procrep.m"
        MR_String mdprof_procrep__V_51_51;
#line 129 "mdprof_procrep.m"
        MR_Word mdprof_procrep__V_53_53;

#line 130 "mdprof_procrep.m"
        {
#line 130 "mdprof_procrep.m"
          program_representation_utils__print_module_to_strings_2_p_0(mdprof_procrep__ModuleRep_31, &mdprof_procrep__Strings_50);
        }
#line 131 "mdprof_procrep.m"
        {
#line 131 "mdprof_procrep.m"
          mdprof_procrep__V_53_53 = mercury__cord__list_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdprof_procrep__Strings_50);
        }
#line 131 "mdprof_procrep.m"
        {
#line 131 "mdprof_procrep.m"
          mdprof_procrep__V_51_51 = mercury__string__append_list_1_f_0(mdprof_procrep__V_53_53);
        }
#line 131 "mdprof_procrep.m"
        {
#line 131 "mdprof_procrep.m"
          mercury__io__write_string_3_p_0(mdprof_procrep__V_51_51);
#line 131 "mdprof_procrep.m"
          return;
        }
#line 129 "mdprof_procrep.m"
      }
#line 121 "mdprof_procrep.m"
    else
#line 122 "mdprof_procrep.m"
      {
#line 122 "mdprof_procrep.m"
      }
#line 121 "mdprof_procrep.m"
  }
#line 121 "mdprof_procrep.m"
}

#line 113 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__113__1_4_p_0(
#line 113 "mdprof_procrep.m"
  MR_String mdprof_procrep__HeadVar__1_22,
#line 113 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_23)
#line 113 "mdprof_procrep.m"
{
#line 129 "mdprof_procrep.m"
  {
#line 129 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;

#line 129 "mdprof_procrep.m"
    {
#line 129 "mdprof_procrep.m"
      mdprof_procrep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_115_101_108_101_99_116_101_100_95_109_111_100_117_108_101_115_95_95_49_49_51_95_95_49_95_95_91_49_93_95_48_4_p_0(mdprof_procrep__HeadVar__2_23);
#line 129 "mdprof_procrep.m"
      return;
    }
#line 129 "mdprof_procrep.m"
  }
#line 113 "mdprof_procrep.m"
}

#line 85 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep____Compare____option_0_0(
#line 85 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__1_1,
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_2,
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__3_3)
#line 85 "mdprof_procrep.m"
{
#line 85 "mdprof_procrep.m"
  {
#line 85 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;
#line 85 "mdprof_procrep.m"
    MR_Integer mdprof_procrep__Cast_HeadVar1_4 = (MR_Integer) mdprof_procrep__HeadVar__2_2;
#line 85 "mdprof_procrep.m"
    MR_Integer mdprof_procrep__Cast_HeadVar2_5 = (MR_Integer) mdprof_procrep__HeadVar__3_3;

#line 85 "mdprof_procrep.m"
    {
#line 85 "mdprof_procrep.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdprof_procrep__HeadVar__1_1, mdprof_procrep__Cast_HeadVar1_4, mdprof_procrep__Cast_HeadVar2_5);
#line 85 "mdprof_procrep.m"
      return;
    }
#line 85 "mdprof_procrep.m"
  }
#line 85 "mdprof_procrep.m"
}

#line 85 "mdprof_procrep.m"
static MR_bool MR_CALL 
mdprof_procrep____Unify____option_0_0(
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_1,
#line 85 "mdprof_procrep.m"
  MR_Word mdprof_procrep__HeadVar__2_2)
#line 85 "mdprof_procrep.m"
{
#line 763 "mdprof_procrep.c"
  {
#line 765 "mdprof_procrep.c"
    MR_bool mdprof_procrep__succeeded = (mdprof_procrep__HeadVar__2_1 == mdprof_procrep__HeadVar__2_2);

#line 768 "mdprof_procrep.c"
    return mdprof_procrep__succeeded;
#line 770 "mdprof_procrep.c"
  }
#line 85 "mdprof_procrep.m"
}

#line 98 "mdprof_procrep.m"
static void MR_CALL 
mdprof_procrep__defaults_2_p_0(
#line 98 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__1_1,
#line 98 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__2_2,
#line 98 "mdprof_procrep.m"
  MR_Cont mdprof_procrep__cont,
#line 98 "mdprof_procrep.m"
  void * mdprof_procrep__cont_env_ptr)
#line 98 "mdprof_procrep.m"
{
#line 100 "mdprof_procrep.m"
  {
#line 100 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;

#line 100 "mdprof_procrep.m"
    {
#line 100 "mdprof_procrep.m"
      MR_Integer mdprof_procrep__slot_0 = (MR_Integer) 0;

#line 100 "mdprof_procrep.m"
      do
#line 100 "mdprof_procrep.m"
        {
#line 100 "mdprof_procrep.m"
          *mdprof_procrep__HeadVar__1_1 = ((&mdprof_procrep_vector_common_6[0 + mdprof_procrep__slot_0]))->mdprof_procrep__vector_common_type_6_0__vct_6_f_0;
#line 100 "mdprof_procrep.m"
          *mdprof_procrep__HeadVar__2_2 = ((&mdprof_procrep_vector_common_6[0 + mdprof_procrep__slot_0]))->mdprof_procrep__vector_common_type_6_0__vct_6_f_1;
#line 100 "mdprof_procrep.m"
          {
#line 100 "mdprof_procrep.m"
            mdprof_procrep__cont(mdprof_procrep__cont_env_ptr);
          }
#line 100 "mdprof_procrep.m"
          mdprof_procrep__slot_0 = (mdprof_procrep__slot_0 + (MR_Integer) 1);
#line 100 "mdprof_procrep.m"
        }
#line 100 "mdprof_procrep.m"
      while ((mdprof_procrep__slot_0 < (MR_Integer) 2));
#line 100 "mdprof_procrep.m"
    }
#line 100 "mdprof_procrep.m"
  }
#line 98 "mdprof_procrep.m"
}

#line 94 "mdprof_procrep.m"
static MR_bool MR_CALL 
mdprof_procrep__long_2_p_0(
#line 94 "mdprof_procrep.m"
  MR_String mdprof_procrep__HeadVar__1_1,
#line 94 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__2_2)
#line 94 "mdprof_procrep.m"
{
#line 96 "mdprof_procrep.m"
  {
#line 96 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded = (strcmp(mdprof_procrep__HeadVar__1_1, (MR_String) "file") == 0);

#line 96 "mdprof_procrep.m"
    if (mdprof_procrep__succeeded)
#line 96 "mdprof_procrep.m"
      {
#line 96 "mdprof_procrep.m"
        *mdprof_procrep__HeadVar__2_2 = (MR_Integer) 0;
#line 96 "mdprof_procrep.m"
        mdprof_procrep__succeeded = MR_TRUE;
#line 96 "mdprof_procrep.m"
      }
#line 96 "mdprof_procrep.m"
    return mdprof_procrep__succeeded;
#line 96 "mdprof_procrep.m"
  }
#line 94 "mdprof_procrep.m"
}

#line 90 "mdprof_procrep.m"
static MR_bool MR_CALL 
mdprof_procrep__short_2_p_0(
#line 90 "mdprof_procrep.m"
  MR_Char mdprof_procrep__HeadVar__1_1,
#line 90 "mdprof_procrep.m"
  MR_Word * mdprof_procrep__HeadVar__2_2)
#line 90 "mdprof_procrep.m"
{
#line 92 "mdprof_procrep.m"
  {
#line 92 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded = (mdprof_procrep__HeadVar__1_1 == (MR_Char) 102);

#line 92 "mdprof_procrep.m"
    if (mdprof_procrep__succeeded)
#line 92 "mdprof_procrep.m"
      {
#line 92 "mdprof_procrep.m"
        *mdprof_procrep__HeadVar__2_2 = (MR_Integer) 0;
#line 92 "mdprof_procrep.m"
        mdprof_procrep__succeeded = MR_TRUE;
#line 92 "mdprof_procrep.m"
      }
#line 92 "mdprof_procrep.m"
    return mdprof_procrep__succeeded;
#line 92 "mdprof_procrep.m"
  }
#line 90 "mdprof_procrep.m"
}

#line 78 "mdprof_procrep.m"
static MR_String MR_CALL 
mdprof_procrep__help_message_1_f_0(
#line 78 "mdprof_procrep.m"
  MR_String mdprof_procrep__ProgName_3)
#line 78 "mdprof_procrep.m"
{
#line 80 "mdprof_procrep.m"
  {
#line 80 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;
#line 80 "mdprof_procrep.m"
    MR_String mdprof_procrep__HeadVar__2_2;
#line 80 "mdprof_procrep.m"
    MR_String mdprof_procrep__V_9_9;
#line 80 "mdprof_procrep.m"
    MR_String mdprof_procrep__V_16_16;

#line 83 "mdprof_procrep.m"
    {
#line 83 "mdprof_procrep.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &mdprof_procrep_scalar_common_4[0], mdprof_procrep__ProgName_3, &mdprof_procrep__V_9_9);
    }
#line 81 "mdprof_procrep.m"
    {
#line 81 "mdprof_procrep.m"
      mdprof_procrep__V_16_16 = mercury__string__f_43_43_2_f_0(mdprof_procrep__V_9_9, (MR_String) " [-f procrepfilename] [module1, module2, ...]\n");
    }
#line 81 "mdprof_procrep.m"
    {
#line 81 "mdprof_procrep.m"
      return mdprof_procrep__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", mdprof_procrep__V_16_16);
    }
#line 80 "mdprof_procrep.m"
    return mdprof_procrep__HeadVar__2_2;
#line 80 "mdprof_procrep.m"
  }
#line 78 "mdprof_procrep.m"
}

#line 117 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_6(
#line 117 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 117 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 117 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_2,
#line 117 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_3)
#line 117 "mdprof_procrep.m"
{
#line 117 "mdprof_procrep.m"
  {
#line 117 "mdprof_procrep.m"
    MR_Box mdprof_procrep__closure = mdprof_procrep__closure_arg;

#line 117 "mdprof_procrep.m"
    {
#line 117 "mdprof_procrep.m"
      mdprof_procrep__IntroducedFrom__pred__print_selected_modules__121__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_procrep__closure, (MR_Integer) 3))), ((MR_String) mdprof_procrep__wrapper_arg_1));
#line 117 "mdprof_procrep.m"
      return;
    }
#line 117 "mdprof_procrep.m"
  }
#line 117 "mdprof_procrep.m"
}

#line 111 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_5(
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_2,
#line 111 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_3,
#line 111 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_4)
#line 111 "mdprof_procrep.m"
{
#line 111 "mdprof_procrep.m"
  {
#line 111 "mdprof_procrep.m"
    MR_Box mdprof_procrep__closure = mdprof_procrep__closure_arg;

#line 111 "mdprof_procrep.m"
    {
#line 111 "mdprof_procrep.m"
      mdprof_procrep__IntroducedFrom__pred__print_selected_modules__113__1_4_p_0(((MR_String) mdprof_procrep__wrapper_arg_1), ((MR_Word) mdprof_procrep__wrapper_arg_2));
#line 111 "mdprof_procrep.m"
      return;
    }
#line 111 "mdprof_procrep.m"
  }
#line 111 "mdprof_procrep.m"
}

#line 47 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_3(
#line 47 "mdprof_procrep.m"
  void * mdprof_procrep__env_ptr_arg)
#line 47 "mdprof_procrep.m"
{
#line 47 "mdprof_procrep.m"
  {
#line 47 "mdprof_procrep.m"
    struct mdprof_procrep__main_2_p_0_4_env_0_s * mdprof_procrep__env_ptr = (struct mdprof_procrep__main_2_p_0_4_env_0_s *) mdprof_procrep__env_ptr_arg;

#line 47 "mdprof_procrep.m"
    *((mdprof_procrep__env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((mdprof_procrep__env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
#line 47 "mdprof_procrep.m"
    *((mdprof_procrep__env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((mdprof_procrep__env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
#line 47 "mdprof_procrep.m"
    {
#line 47 "mdprof_procrep.m"
      ((mdprof_procrep__env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__cont)((mdprof_procrep__env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__cont_env_ptr);
#line 47 "mdprof_procrep.m"
      return;
    }
#line 47 "mdprof_procrep.m"
  }
#line 47 "mdprof_procrep.m"
}

#line 47 "mdprof_procrep.m"
static void MR_CALL 
main_2_p_0_4(
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_1,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_2,
#line 47 "mdprof_procrep.m"
  MR_Cont mdprof_procrep__cont,
#line 47 "mdprof_procrep.m"
  void * mdprof_procrep__cont_env_ptr)
#line 47 "mdprof_procrep.m"
{
#line 47 "mdprof_procrep.m"
  {
#line 47 "mdprof_procrep.m"
    struct mdprof_procrep__main_2_p_0_4_env_0_s mdprof_procrep__env;

#line 47 "mdprof_procrep.m"
    (mdprof_procrep__env).mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_1 = mdprof_procrep__wrapper_arg_1;
#line 47 "mdprof_procrep.m"
    (mdprof_procrep__env).mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_2 = mdprof_procrep__wrapper_arg_2;
#line 47 "mdprof_procrep.m"
    (mdprof_procrep__env).mdprof_procrep__main_2_p_0_4_env_0__cont = mdprof_procrep__cont;
#line 47 "mdprof_procrep.m"
    (mdprof_procrep__env).mdprof_procrep__main_2_p_0_4_env_0__cont_env_ptr = mdprof_procrep__cont_env_ptr;
#line 47 "mdprof_procrep.m"
    {
#line 47 "mdprof_procrep.m"
      MR_Box mdprof_procrep__closure = mdprof_procrep__closure_arg;

#line 47 "mdprof_procrep.m"
      {
#line 47 "mdprof_procrep.m"
        mdprof_procrep__defaults_2_p_0(&(mdprof_procrep__env).mdprof_procrep__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(mdprof_procrep__env).mdprof_procrep__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &mdprof_procrep__env);
      }
#line 47 "mdprof_procrep.m"
    }
#line 47 "mdprof_procrep.m"
  }
#line 47 "mdprof_procrep.m"
}

#line 47 "mdprof_procrep.m"
static MR_bool MR_CALL 
main_2_p_0_2(
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_2)
#line 47 "mdprof_procrep.m"
{
#line 47 "mdprof_procrep.m"
  {
#line 47 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;
#line 47 "mdprof_procrep.m"
    MR_Box mdprof_procrep__closure = mdprof_procrep__closure_arg;
#line 47 "mdprof_procrep.m"
    MR_Word mdprof_procrep__conv1_HeadVar__2_2;

#line 47 "mdprof_procrep.m"
    {
#line 47 "mdprof_procrep.m"
      mdprof_procrep__succeeded = mdprof_procrep__long_2_p_0(((MR_String) mdprof_procrep__wrapper_arg_1), &mdprof_procrep__conv1_HeadVar__2_2);
    }
#line 47 "mdprof_procrep.m"
    if (mdprof_procrep__succeeded)
#line 47 "mdprof_procrep.m"
      {
#line 47 "mdprof_procrep.m"
        *mdprof_procrep__wrapper_arg_2 = ((MR_Box) (mdprof_procrep__conv1_HeadVar__2_2));
#line 47 "mdprof_procrep.m"
        mdprof_procrep__succeeded = MR_TRUE;
#line 47 "mdprof_procrep.m"
      }
#line 47 "mdprof_procrep.m"
    return mdprof_procrep__succeeded;
#line 47 "mdprof_procrep.m"
  }
#line 47 "mdprof_procrep.m"
}

#line 47 "mdprof_procrep.m"
static MR_bool MR_CALL 
main_2_p_0_1(
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__closure_arg,
#line 47 "mdprof_procrep.m"
  MR_Box mdprof_procrep__wrapper_arg_1,
#line 47 "mdprof_procrep.m"
  MR_Box * mdprof_procrep__wrapper_arg_2)
#line 47 "mdprof_procrep.m"
{
#line 47 "mdprof_procrep.m"
  {
#line 47 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;
#line 47 "mdprof_procrep.m"
    MR_Box mdprof_procrep__closure = mdprof_procrep__closure_arg;
#line 47 "mdprof_procrep.m"
    MR_Word mdprof_procrep__conv0_HeadVar__2_2;

#line 47 "mdprof_procrep.m"
    {
#line 47 "mdprof_procrep.m"
      mdprof_procrep__succeeded = mdprof_procrep__short_2_p_0(((MR_Char) (MR_Word) mdprof_procrep__wrapper_arg_1), &mdprof_procrep__conv0_HeadVar__2_2);
    }
#line 47 "mdprof_procrep.m"
    if (mdprof_procrep__succeeded)
#line 47 "mdprof_procrep.m"
      {
#line 47 "mdprof_procrep.m"
        *mdprof_procrep__wrapper_arg_2 = ((MR_Box) (mdprof_procrep__conv0_HeadVar__2_2));
#line 47 "mdprof_procrep.m"
        mdprof_procrep__succeeded = MR_TRUE;
#line 47 "mdprof_procrep.m"
      }
#line 47 "mdprof_procrep.m"
    return mdprof_procrep__succeeded;
#line 47 "mdprof_procrep.m"
  }
#line 47 "mdprof_procrep.m"
}

#line 23 "mdprof_procrep.m"
void MR_CALL 
main_2_p_0(void)
#line 23 "mdprof_procrep.m"
{
#line 44 "mdprof_procrep.m"
  {
#line 44 "mdprof_procrep.m"
    MR_bool mdprof_procrep__succeeded;
#line 44 "mdprof_procrep.m"
    MR_Word mdprof_procrep__TypeCtorInfo_59_59;
#line 44 "mdprof_procrep.m"
    MR_String mdprof_procrep__ProgName_4;
#line 44 "mdprof_procrep.m"
    MR_Word mdprof_procrep__Args0_5;
#line 44 "mdprof_procrep.m"
    MR_Word mdprof_procrep__Args_6;
#line 44 "mdprof_procrep.m"
    MR_Word mdprof_procrep__MaybeOptions_7;
#line 44 "mdprof_procrep.m"
    MR_Word mdprof_procrep__StdErr_8;

#line 45 "mdprof_procrep.m"
    {
#line 45 "mdprof_procrep.m"
      mercury__io__progname_base_4_p_0((MR_String) "mdprof_procrep", &mdprof_procrep__ProgName_4);
    }
#line 46 "mdprof_procrep.m"
    {
#line 46 "mdprof_procrep.m"
      mercury__io__command_line_arguments_3_p_0(&mdprof_procrep__Args0_5);
    }
#line 1177 "mdprof_procrep.c"
    mdprof_procrep__TypeCtorInfo_59_59 = (MR_Word) &mdprof_procrep__mdprof_procrep__type_ctor_info_option_0;
#line 47 "mdprof_procrep.m"
    {
#line 47 "mdprof_procrep.m"
      mercury__getopt__process_options_4_p_0(mdprof_procrep__TypeCtorInfo_59_59, (MR_Word) MR_mkword(MR_mktag(2), &mdprof_procrep_scalar_common_3[3]), mdprof_procrep__Args0_5, &mdprof_procrep__Args_6, &mdprof_procrep__MaybeOptions_7);
    }
#line 49 "mdprof_procrep.m"
    {
#line 49 "mdprof_procrep.m"
      mercury__io__stderr_stream_3_p_0(&mdprof_procrep__StdErr_8);
    }
#line 56 "mdprof_procrep.m"
    if (((MR_tag((MR_Word) mdprof_procrep__MaybeOptions_7)) == (MR_mktag((MR_Integer) 1))))
#line 51 "mdprof_procrep.m"
      {
#line 51 "mdprof_procrep.m"
        MR_String mdprof_procrep__Msg_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdprof_procrep__MaybeOptions_7, (MR_Integer) 0)));
#line 51 "mdprof_procrep.m"
        MR_String mdprof_procrep__V_46_46;
#line 51 "mdprof_procrep.m"
        MR_String mdprof_procrep__V_80_80;
#line 51 "mdprof_procrep.m"
        MR_Word mdprof_procrep__V_86_86 = (MR_Word) &mdprof_procrep_scalar_common_4[0];
#line 51 "mdprof_procrep.m"
        MR_String mdprof_procrep__V_90_90;

#line 53 "mdprof_procrep.m"
        {
#line 53 "mdprof_procrep.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_procrep__V_86_86, mdprof_procrep__ProgName_4, &mdprof_procrep__V_80_80);
        }
#line 53 "mdprof_procrep.m"
        {
#line 53 "mdprof_procrep.m"
          mercury__io__write_string_4_p_0(mdprof_procrep__StdErr_8, mdprof_procrep__V_80_80);
        }
#line 52 "mdprof_procrep.m"
        {
#line 52 "mdprof_procrep.m"
          mercury__io__write_string_4_p_0(mdprof_procrep__StdErr_8, (MR_String) ": error parsing options: ");
        }
#line 53 "mdprof_procrep.m"
        {
#line 53 "mdprof_procrep.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_procrep__V_86_86, mdprof_procrep__Msg_9, &mdprof_procrep__V_90_90);
        }
#line 53 "mdprof_procrep.m"
        {
#line 53 "mdprof_procrep.m"
          mercury__io__write_string_4_p_0(mdprof_procrep__StdErr_8, mdprof_procrep__V_90_90);
        }
#line 52 "mdprof_procrep.m"
        {
#line 52 "mdprof_procrep.m"
          mercury__io__write_string_4_p_0(mdprof_procrep__StdErr_8, (MR_String) "\n");
        }
#line 54 "mdprof_procrep.m"
        {
#line 54 "mdprof_procrep.m"
          mdprof_procrep__V_46_46 = mdprof_procrep__help_message_1_f_0(mdprof_procrep__ProgName_4);
        }
#line 54 "mdprof_procrep.m"
        {
#line 54 "mdprof_procrep.m"
          mercury__io__write_string_3_p_0(mdprof_procrep__V_46_46);
        }
#line 55 "mdprof_procrep.m"
        {
#line 55 "mdprof_procrep.m"
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
#line 55 "mdprof_procrep.m"
          return;
        }
#line 51 "mdprof_procrep.m"
      }
#line 56 "mdprof_procrep.m"
    else
#line 57 "mdprof_procrep.m"
      {
#line 57 "mdprof_procrep.m"
        MR_Word mdprof_procrep__Options_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_procrep__MaybeOptions_7, (MR_Integer) 0)));
#line 57 "mdprof_procrep.m"
        MR_String mdprof_procrep__FileName_11;
#line 57 "mdprof_procrep.m"
        MR_Word mdprof_procrep__ProgRepRes_12;

#line 58 "mdprof_procrep.m"
        {
#line 58 "mdprof_procrep.m"
          mercury__getopt__lookup_string_option_3_p_0(mdprof_procrep__TypeCtorInfo_59_59, mdprof_procrep__Options_10, ((MR_Box) ((MR_Integer) 0)), &mdprof_procrep__FileName_11);
        }
#line 59 "mdprof_procrep.m"
        {
#line 59 "mdprof_procrep.m"
          mdbcomp__program_representation__read_prog_rep_file_4_p_0(mdprof_procrep__FileName_11, &mdprof_procrep__ProgRepRes_12);
        }
#line 64 "mdprof_procrep.m"
        if (((MR_tag((MR_Word) mdprof_procrep__ProgRepRes_12)) == (MR_mktag((MR_Integer) 1))))
#line 61 "mdprof_procrep.m"
          {
#line 61 "mdprof_procrep.m"
            MR_Word mdprof_procrep__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdprof_procrep__ProgRepRes_12, (MR_Integer) 0)));
#line 61 "mdprof_procrep.m"
            MR_String mdprof_procrep__Msg_50;
#line 61 "mdprof_procrep.m"
            MR_String mdprof_procrep__V_61_61;
#line 61 "mdprof_procrep.m"
            MR_Word mdprof_procrep__V_67_67;
#line 61 "mdprof_procrep.m"
            MR_String mdprof_procrep__V_71_71;

#line 62 "mdprof_procrep.m"
            {
#line 62 "mdprof_procrep.m"
              mercury__io__error_message_2_p_0(mdprof_procrep__Error_13, &mdprof_procrep__Msg_50);
            }
#line 1294 "mdprof_procrep.c"
            mdprof_procrep__V_67_67 = (MR_Word) &mdprof_procrep_scalar_common_4[0];
#line 63 "mdprof_procrep.m"
            {
#line 63 "mdprof_procrep.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_procrep__V_67_67, mdprof_procrep__ProgName_4, &mdprof_procrep__V_61_61);
            }
#line 63 "mdprof_procrep.m"
            {
#line 63 "mdprof_procrep.m"
              mercury__io__write_string_3_p_0(mdprof_procrep__V_61_61);
            }
#line 63 "mdprof_procrep.m"
            {
#line 63 "mdprof_procrep.m"
              mercury__io__write_string_3_p_0((MR_String) ": ");
            }
#line 63 "mdprof_procrep.m"
            {
#line 63 "mdprof_procrep.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdprof_procrep__V_67_67, mdprof_procrep__Msg_50, &mdprof_procrep__V_71_71);
            }
#line 63 "mdprof_procrep.m"
            {
#line 63 "mdprof_procrep.m"
              mercury__io__write_string_3_p_0(mdprof_procrep__V_71_71);
            }
#line 63 "mdprof_procrep.m"
            {
#line 63 "mdprof_procrep.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
#line 63 "mdprof_procrep.m"
              return;
            }
#line 61 "mdprof_procrep.m"
          }
#line 64 "mdprof_procrep.m"
        else
#line 65 "mdprof_procrep.m"
          {
#line 65 "mdprof_procrep.m"
            MR_Word mdprof_procrep__ProgRep_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdprof_procrep__ProgRepRes_12, (MR_Integer) 0)));
#line 65 "mdprof_procrep.m"
            MR_Word mdprof_procrep__ModuleReps_15 = (MR_Word) mdprof_procrep__ProgRep_14;

#line 1339 "mdprof_procrep.c"
            if ((mdprof_procrep__Args_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1341 "mdprof_procrep.c"
              {
#line 111 "mdprof_procrep.m"
                MR_Box mdprof_procrep__conv4_STATE_VARIABLE_IO_20;

#line 111 "mdprof_procrep.m"
                {
#line 111 "mdprof_procrep.m"
                  mercury__map__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdprof_procrep_scalar_common_1[0], (MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &mdprof_procrep_scalar_common_3[4], mdprof_procrep__ModuleReps_15, ((MR_Box) ((MR_Integer) 0)), &mdprof_procrep__conv4_STATE_VARIABLE_IO_20);
                }
#line 1351 "mdprof_procrep.c"
              }
#line 1353 "mdprof_procrep.c"
            else
#line 1355 "mdprof_procrep.c"
              {
#line 1357 "mdprof_procrep.c"
                MR_Word mdprof_procrep__V_153_153;
#line 117 "mdprof_procrep.m"
                MR_Box mdprof_procrep__conv5_STATE_VARIABLE_IO_20;

#line 117 "mdprof_procrep.m"
                {
#line 117 "mdprof_procrep.m"
                  mdprof_procrep__V_153_153 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 117 "mdprof_procrep.m"
                  MR_hl_field(MR_mktag(0), mdprof_procrep__V_153_153, 0) = ((MR_Box) (&mdprof_procrep_scalar_common_5[1]));
#line 117 "mdprof_procrep.m"
                  MR_hl_field(MR_mktag(0), mdprof_procrep__V_153_153, 1) = ((MR_Box) (main_2_p_0_6));
#line 117 "mdprof_procrep.m"
                  MR_hl_field(MR_mktag(0), mdprof_procrep__V_153_153, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 117 "mdprof_procrep.m"
                  MR_hl_field(MR_mktag(0), mdprof_procrep__V_153_153, 3) = ((MR_Box) (mdprof_procrep__ModuleReps_15));
#line 117 "mdprof_procrep.m"
                }
#line 117 "mdprof_procrep.m"
                {
#line 117 "mdprof_procrep.m"
                  mercury__list__foldl_4_p_2((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, mdprof_procrep__V_153_153, mdprof_procrep__Args_6, ((MR_Box) ((MR_Integer) 0)), &mdprof_procrep__conv5_STATE_VARIABLE_IO_20);
                }
#line 1381 "mdprof_procrep.c"
              }
#line 65 "mdprof_procrep.m"
          }
#line 57 "mdprof_procrep.m"
      }
#line 44 "mdprof_procrep.m"
  }
#line 23 "mdprof_procrep.m"
}

void mercury__mdprof_procrep__init(void)
{
}

void mercury__mdprof_procrep__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0);
}

void mercury__mdprof_procrep__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdprof_procrep. */
