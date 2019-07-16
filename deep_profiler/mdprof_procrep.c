/*
** Automatically generated from `mdprof_procrep.m'
** by the Mercury compiler,
** version rotd-2019-07-16
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


// :- module mdprof_procrep.
// :- implementation.

/*
INIT mercury__mdprof_procrep__init
ENDINIT
*/

#include "mdprof_procrep.mih"


#include "mdbcomp.mih"
#include "program_representation_utils.mih"
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
#include "enum.mih"
#include "getopt.mih"
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
#include "string.format.mih"
#include "string.parse_util.mih"



struct mdprof_procrep__main_2_p_0_4_env_0_s {
  MR_Box * mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_1;
  MR_Box * mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_2;
  MR_Cont mdprof_procrep__main_2_p_0_4_env_0__cont;
  void * mdprof_procrep__main_2_p_0_4_env_0__cont_env_ptr;
  MR_Word mdprof_procrep__main_2_p_0_4_env_0__conv3_HeadVar__1_1;
  MR_Word mdprof_procrep__main_2_p_0_4_env_0__conv2_HeadVar__2_2;
};


static const MR_FA_PseudoTypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__pti_module_rep_1__plain_unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0;

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_procrep__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0;

static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0;

static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1;

static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_value_ordered_option_0[2];

static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_name_ordered_option_0[2];

static const MR_Integer mdprof_procrep__mdprof_procrep__functor_number_map_option_0[2];

static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__119__1_4_p_0(
  MR_Word ModuleReps_5,
  MR_String LambdaHeadVar__1_17);

static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__113__1_4_p_0(
  MR_String LambdaHeadVar__1_22,
  MR_Word LambdaHeadVar__2_23);

static void MR_CALL 
mdprof_procrep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_115_101_108_101_99_116_101_100_95_109_111_100_117_108_101_115_95_95_49_49_51_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word LambdaHeadVar__2_23);

static void MR_CALL 
mdprof_procrep____Compare____option_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdprof_procrep____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdprof_procrep__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mdprof_procrep__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static MR_bool MR_CALL 
mdprof_procrep__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
main_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
main_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
mdprof_procrep____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdprof_procrep____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdprof_procrep_scalar_common_1[3][2];

static /* final */ const MR_Box mdprof_procrep_scalar_common_2[3][5];

static /* final */ const MR_Box mdprof_procrep_scalar_common_3[5][3];

static /* final */ const MR_Box mdprof_procrep_scalar_common_4[2][7];


/* sealed */ struct mdprof_procrep__vector_common_type_5_0_s {
  const MR_Word mdprof_procrep__vector_common_type_5_0__vct_5_f_0;
  const MR_Word mdprof_procrep__vector_common_type_5_0__vct_5_f_1;
};

static /* final */ const struct mdprof_procrep__vector_common_type_5_0_s mdprof_procrep_vector_common_5[2];



static /* final */ const MR_Box mdprof_procrep_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "Deep.procrep"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "dummy"))
  },
};

static /* final */ const MR_Box mdprof_procrep_scalar_common_2[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0)),
    ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mdprof_procrep_scalar_common_3[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_2[0])),
    ((MR_Box) (main_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_2[1])),
    ((MR_Box) (main_2_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_2[2])),
    ((MR_Box) (main_2_p_0_4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_3[0])),
    ((MR_Box) (&mdprof_procrep_scalar_common_3[1])),
    ((MR_Box) (&mdprof_procrep_scalar_common_3[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdprof_procrep_scalar_common_4[0])),
    ((MR_Box) (main_2_p_0_5)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdprof_procrep_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdprof_procrep__mdbcomp__program_representation__pti_module_rep_1__plain_unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdprof_procrep__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct mdprof_procrep__vector_common_type_5_0_s mdprof_procrep_vector_common_5[2] = {
  /* row 0 */
  {
    (MR_Integer) 0,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdprof_procrep_scalar_common_1[1]))
  },
  /* row 1 */
  {
    (MR_Integer) 1,
    (MR_Word) (MR_mkword(MR_mktag(3), &mdprof_procrep_scalar_common_1[2]))
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__pti_module_rep_1__plain_unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1,
  {
    (MR_PseudoTypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_TypeInfo_Struct1 mdprof_procrep__mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0 = {
  &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_module_rep_1,
  {
    (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mdprof_procrep__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mdprof_procrep__mdbcomp__program_representation__ti_module_rep_1unit__type_ctor_info_unit_0)
  }
};

static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0 = {
  (MR_String) "filename",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1 = {
  (MR_String) "dummy",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_value_ordered_option_0[2] = {
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0,
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1
};

static const MR_EnumFunctorDescPtr mdprof_procrep__mdprof_procrep__enum_name_ordered_option_0[2] = {
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_1,
  &mdprof_procrep__mdprof_procrep__enum_functor_desc_option_0_0
};

static const MR_Integer mdprof_procrep__mdprof_procrep__functor_number_map_option_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdprof_procrep__mdprof_procrep__type_ctor_info_option_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdprof_procrep____Unify____option_0_0_10001)),
  ((MR_Box) (mdprof_procrep____Compare____option_0_0_10001)),
  (MR_String) "mdprof_procrep",
  (MR_String) "option",
  {     mdprof_procrep__mdprof_procrep__enum_name_ordered_option_0 },
  {     mdprof_procrep__mdprof_procrep__enum_value_ordered_option_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdprof_procrep__mdprof_procrep__functor_number_map_option_0
};

static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__119__1_4_p_0(
  MR_Word ModuleReps_5,
  MR_String LambdaHeadVar__1_17)
{
  {
    MR_bool succeeded;
    MR_Word ModuleRep_31;
    MR_Box conv0_ModuleRep_31;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_procrep_scalar_common_1[0]), ModuleReps_5, ((MR_Box) (LambdaHeadVar__1_17)), &conv0_ModuleRep_31);
    if (succeeded)
    {
      ModuleRep_31 = ((MR_Word) (conv0_ModuleRep_31));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word Strings_50;
      MR_String Var_51;
      MR_Word Var_53;

      program_representation_utils__print_module_to_strings_2_p_0(ModuleRep_31, &Strings_50);
      Var_53 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Strings_50);
      Var_51 = mercury__string__append_list_1_f_0(Var_53);
      mercury__io__write_string_3_p_0(Var_51);
    }
  }
}

static void MR_CALL 
mdprof_procrep__IntroducedFrom__pred__print_selected_modules__113__1_4_p_0(
  MR_String LambdaHeadVar__1_22,
  MR_Word LambdaHeadVar__2_23)
{
  mdprof_procrep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_115_101_108_101_99_116_101_100_95_109_111_100_117_108_101_115_95_95_49_49_51_95_95_49_95_95_91_49_93_95_48_4_p_0(LambdaHeadVar__2_23);
}

static void MR_CALL 
mdprof_procrep__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_112_114_105_110_116_95_115_101_108_101_99_116_101_100_95_109_111_100_117_108_101_115_95_95_49_49_51_95_95_49_95_95_91_49_93_95_48_4_p_0(
  MR_Word LambdaHeadVar__2_23)
{
  {
    MR_Word Strings_50;
    MR_String Var_51;
    MR_Word Var_53;

    program_representation_utils__print_module_to_strings_2_p_0(LambdaHeadVar__2_23, &Strings_50);
    Var_53 = mercury__cord__list_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Strings_50);
    Var_51 = mercury__string__append_list_1_f_0(Var_53);
    mercury__io__write_string_3_p_0(Var_51);
  }
}

static void MR_CALL 
mdprof_procrep____Compare____option_0_0(
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
mdprof_procrep____Unify____option_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
mdprof_procrep__defaults_2_p_0(
  MR_Word * HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_Integer slot_0 = (MR_Integer) 0;

    do
    {
      *HeadVar__1_1 = ((&mdprof_procrep_vector_common_5[0 + slot_0]))->mdprof_procrep__vector_common_type_5_0__vct_5_f_0;
      *HeadVar__2_2 = ((&mdprof_procrep_vector_common_5[0 + slot_0]))->mdprof_procrep__vector_common_type_5_0__vct_5_f_1;
      cont(cont_env_ptr);
      slot_0 = (MR_Integer) ((MR_Unsigned) slot_0 + (MR_Unsigned) (MR_Integer) 1);
    }
    while ((slot_0 < (MR_Integer) 2));
  }
}

static MR_bool MR_CALL 
mdprof_procrep__long_2_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = (strcmp(HeadVar__1_1, (MR_String) "file") == 0);

    if (succeeded)
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdprof_procrep__short_2_p_0(
  MR_Char HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == (MR_Char) 102);

    if (succeeded)
    {
      *HeadVar__2_2 = (MR_Integer) 0;
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static void MR_CALL 
main_2_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    mdprof_procrep__IntroducedFrom__pred__print_selected_modules__119__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)));
  }
}

static void MR_CALL 
main_2_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    mdprof_procrep__IntroducedFrom__pred__print_selected_modules__113__1_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
main_2_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdprof_procrep__main_2_p_0_4_env_0_s * env_ptr = (struct mdprof_procrep__main_2_p_0_4_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__conv3_HeadVar__1_1));
    *((env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_2) = ((MR_Box) ((env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__conv2_HeadVar__2_2));
    ((env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__cont)((env_ptr)->mdprof_procrep__main_2_p_0_4_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
main_2_p_0_4(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mdprof_procrep__main_2_p_0_4_env_0_s env;

    (env).mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mdprof_procrep__main_2_p_0_4_env_0__wrapper_arg_2 = wrapper_arg_2;
    (env).mdprof_procrep__main_2_p_0_4_env_0__cont = cont;
    (env).mdprof_procrep__main_2_p_0_4_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mdprof_procrep__defaults_2_p_0(&(env).mdprof_procrep__main_2_p_0_4_env_0__conv3_HeadVar__1_1, &(env).mdprof_procrep__main_2_p_0_4_env_0__conv2_HeadVar__2_2, main_2_p_0_3, &env);
    }
  }
}

static MR_bool MR_CALL 
main_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__2_2;

    succeeded = mdprof_procrep__long_2_p_0(((MR_String) (wrapper_arg_1)), &conv1_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
main_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = mdprof_procrep__short_2_p_0(((MR_Char) (MR_Word) wrapper_arg_1), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void MR_CALL 
main_2_p_0(void)
{
  {
    MR_bool succeeded;
    MR_String ProgName_4;
    MR_Word Args0_5;
    MR_Word Args_6;
    MR_Word MaybeOptions_7;
    MR_Word StdErr_8;

    mercury__io__progname_base_4_p_0((MR_String) "mdprof_procrep", &ProgName_4);
    mercury__io__command_line_arguments_3_p_0(&Args0_5);
    mercury__getopt__process_options_4_p_0((MR_Word) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0), (MR_Word) (MR_mkword(MR_mktag(2), &mdprof_procrep_scalar_common_3[3])), Args0_5, &Args_6, &MaybeOptions_7);
    mercury__io__stderr_stream_3_p_0(&StdErr_8);
    if (((MR_tag((MR_Word) MaybeOptions_7)) == (MR_Integer) 1))
    {
      MR_String Msg_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptions_7, (MR_Integer) 0))));
      MR_String Var_46;
      MR_String Var_76;

      mercury__io__write_string_4_p_0(StdErr_8, ProgName_4);
      mercury__io__write_string_4_p_0(StdErr_8, (MR_String) ": error parsing options: ");
      mercury__io__write_string_4_p_0(StdErr_8, Msg_9);
      mercury__io__write_string_4_p_0(StdErr_8, (MR_String) "\n");
      Var_76 = mercury__string__f_43_43_2_f_0(ProgName_4, (MR_String) " [-f procrepfilename] [module1, module2, ...]\n");
      Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "Usage: ", Var_76);
      mercury__io__write_string_3_p_0(Var_46);
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word Options_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeOptions_7, (MR_Integer) 0))));
      MR_String FileName_11;
      MR_Word ProgRepRes_12;

      mercury__getopt__lookup_string_option_3_p_0((MR_Word) (&mdprof_procrep__mdprof_procrep__type_ctor_info_option_0), Options_10, ((MR_Box) ((MR_Integer) 0)), &FileName_11);
      mdbcomp__program_representation__read_prog_rep_file_4_p_0(FileName_11, &ProgRepRes_12);
      if (((MR_tag((MR_Word) ProgRepRes_12)) == (MR_Integer) 1))
      {
        MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ProgRepRes_12, (MR_Integer) 0))));
        MR_String Msg_50;

        mercury__io__error_message_2_p_0(Error_13, &Msg_50);
        mercury__io__write_string_3_p_0(ProgName_4);
        mercury__io__write_string_3_p_0((MR_String) ": ");
        mercury__io__write_string_3_p_0(Msg_50);
        mercury__io__write_string_3_p_0((MR_String) "\n");
      }
      else
      {
        MR_Word ProgRep_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ProgRepRes_12, (MR_Integer) 0))));
        MR_Word ModuleReps_15 = (MR_Word) (ProgRep_14);

        if ((Args_6 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Box conv4_STATE_VARIABLE_IO_20;

          mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mdprof_procrep_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), (MR_Word) (&mdprof_procrep_scalar_common_3[4]), ModuleReps_15, ((MR_Box) ((MR_Integer) 0)), &conv4_STATE_VARIABLE_IO_20);
        }
        else
        {
          MR_Word Var_133;
          MR_Box conv5_STATE_VARIABLE_IO_20;

          {
            Var_133 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_133, 0) = ((MR_Box) (&mdprof_procrep_scalar_common_4[1]));
            MR_hl_field(MR_mktag(0), Var_133, 1) = ((MR_Box) (main_2_p_0_6));
            MR_hl_field(MR_mktag(0), Var_133, 2) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), Var_133, 3) = ((MR_Box) (ModuleReps_15));
          }
          mercury__list__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_133, Args_6, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_20);
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdprof_procrep____Unify____option_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdprof_procrep____Unify____option_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdprof_procrep____Compare____option_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdprof_procrep____Compare____option_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__mdprof_procrep__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdprof_procrep.
