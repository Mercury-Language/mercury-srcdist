/*
** Automatically generated from `generate_output.m'
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


/* :- module generate_output. */
/* :- implementation. */

/*
INIT mercury__generate_output__init
ENDINIT
*/

#include "generate_output.mih"


#include "globals.mih"
#include "options.mih"
#include "output_prof_info.mih"
#include "prof_info.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "float.mih"
#include "getopt.mih"
#include "int.mih"
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
#include "rbtree.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




static const MR_PseudoTypeInfo generate_output__generate_output__field_types_flat_key_0_0[2];

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_flat_key_0_0;

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_flat_key_0_0[1];

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_flat_key_0[1];

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_flat_key_0[1];

static const MR_Integer generate_output__generate_output__functor_number_map_flat_key_0[1];

static const MR_FA_TypeInfo_Struct2 generate_output__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0;

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo generate_output__generate_output__field_types_profiling_0_0[3];

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_profiling_0_0;

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_profiling_0_0[1];

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_profiling_0[1];

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_profiling_0[1];

static const MR_Integer generate_output__generate_output__functor_number_map_profiling_0[1];

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0_10001(
  MR_Box generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2);

static void MR_CALL 
generate_output____Compare____flat_key_0_0_10001(
  MR_Box * generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2,
  MR_Box generate_output__wrapper_arg_3);

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0_10001(
  MR_Box generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2);

static void MR_CALL 
generate_output____Compare____profiling_0_0_10001(
  MR_Box * generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2,
  MR_Box generate_output__wrapper_arg_3);

static void MR_CALL 
generate_output____Compare____profiling_0_0(
  MR_Word * generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2,
  MR_Word generate_output__HeadVar__3_3);

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2);

static void MR_CALL 
generate_output____Compare____flat_key_0_0(
  MR_Word * generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2,
  MR_Word generate_output__HeadVar__3_3);

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2);

static void MR_CALL 
generate_output__assign_index_numbers_2_4_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__N_2,
  MR_Word generate_output__STATE_VARIABLE_IndexMap_0_3,
  MR_Word * generate_output__STATE_VARIABLE_IndexMap_4);

static void MR_CALL 
generate_output__process_prof_node_children_2_4_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__Prof_2,
  MR_Word generate_output__STATE_VARIABLE_Output_0_3,
  MR_Word * generate_output__STATE_VARIABLE_Output_4);

static void MR_CALL 
generate_output__remove_child_cycle_members_5_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__CycleNum_2,
  MR_Word generate_output__CycleMap_3,
  MR_Word * generate_output__HeadVar__4_4,
  MR_Word * generate_output__HeadVar__5_5);

static void MR_CALL 
generate_output__process_prof_node_children_6_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__CycleNum_2,
  MR_Word generate_output__CycleMap_3,
  MR_Word generate_output__Prof_4,
  MR_Word * generate_output__HeadVar__5_5,
  MR_Word * generate_output__HeadVar__6_6);

static void MR_CALL 
generate_output__process_prof_node_parents_3_7_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Float generate_output__SelfTime_2,
  MR_Float generate_output__DescTime_3,
  MR_Float generate_output__TotalCalls_4,
  MR_Word generate_output__CycleMap_5,
  MR_Word generate_output__STATE_VARIABLE_Output_0_6,
  MR_Word * generate_output__STATE_VARIABLE_Output_7);

static void MR_CALL 
generate_output__remove_cycle_members_7_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__CycleNum_2,
  MR_Word generate_output__CycleMap_3,
  MR_Integer generate_output__STATE_VARIABLE_TotalCalls_0_4,
  MR_Integer * generate_output__STATE_VARIABLE_TotalCalls_5,
  MR_Word * generate_output__HeadVar__6_6,
  MR_Word * generate_output__HeadVar__7_7);

static MR_String MR_CALL 
generate_output__construct_name_1_f_0(
  MR_Word generate_output__HeadVar__1_1);

static void MR_CALL 
generate_output__process_prof_node_4_p_0(
  MR_Word generate_output__ProfNode_5,
  MR_Word generate_output__Prof_6,
  MR_Word generate_output__STATE_VARIABLE_OutputProf_0_9,
  MR_Word * generate_output__STATE_VARIABLE_OutputProf_10);

static void MR_CALL 
generate_output__process_prof_node_list_7_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__Prof_2,
  MR_Word generate_output__VeryVerbose_3,
  MR_Word generate_output__STATE_VARIABLE_OutputProf_0_4,
  MR_Word * generate_output__STATE_VARIABLE_OutputProf_5);


static /* final */ const MR_Box generate_output_scalar_common_1[3][3];




static /* final */ const MR_Box generate_output_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&output_prof_info__output_prof_info__type_ctor_info_output_prof_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__rbtree__rbtree__type_ctor_info_rbtree_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_float_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__rbtree__rbtree__type_ctor_info_rbtree_2)),
    ((MR_Box) (&generate_output__generate_output__type_ctor_info_flat_key_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_PseudoTypeInfo generate_output__generate_output__field_types_flat_key_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_flat_key_0_0 = {
  (MR_String) "flat_key",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  generate_output__generate_output__field_types_flat_key_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_flat_key_0_0[1] = {
  &generate_output__generate_output__du_functor_desc_flat_key_0_0
};

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_flat_key_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    generate_output__generate_output__du_stag_ordered_flat_key_0_0
  }
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_flat_key_0[1] = {
  &generate_output__generate_output__du_functor_desc_flat_key_0_0
};

static const MR_Integer generate_output__generate_output__functor_number_map_flat_key_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct generate_output__generate_output__type_ctor_info_flat_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (generate_output____Unify____flat_key_0_0_10001)),
  ((MR_Box) (generate_output____Compare____flat_key_0_0_10001)),
  (MR_String) "generate_output",
  (MR_String) "flat_key",
  {     generate_output__generate_output__du_name_ordered_flat_key_0 },
  {     generate_output__generate_output__du_ptag_ordered_flat_key_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  generate_output__generate_output__functor_number_map_flat_key_0
};

static const MR_FA_TypeInfo_Struct2 generate_output__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_TypeInfo) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0
  }
};

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_float_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_TypeInfo_Struct2 generate_output__rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_TypeInfo) &generate_output__generate_output__type_ctor_info_flat_key_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo generate_output__generate_output__field_types_profiling_0_0[3] = {
  (MR_PseudoTypeInfo) &generate_output__tree234__ti_tree234_2builtin__type_ctor_info_string_0output_prof_info__type_ctor_info_output_prof_0,
  (MR_PseudoTypeInfo) &generate_output__rbtree__ti_rbtree_2builtin__type_ctor_info_float_0builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &generate_output__rbtree__ti_rbtree_2generate_output__type_ctor_info_flat_key_0builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc generate_output__generate_output__du_functor_desc_profiling_0_0 = {
  (MR_String) "profiling",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  generate_output__generate_output__field_types_profiling_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_stag_ordered_profiling_0_0[1] = {
  &generate_output__generate_output__du_functor_desc_profiling_0_0
};

static const MR_DuPtagLayout generate_output__generate_output__du_ptag_ordered_profiling_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    generate_output__generate_output__du_stag_ordered_profiling_0_0
  }
};

static const MR_DuFunctorDescPtr generate_output__generate_output__du_name_ordered_profiling_0[1] = {
  &generate_output__generate_output__du_functor_desc_profiling_0_0
};

static const MR_Integer generate_output__generate_output__functor_number_map_profiling_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct generate_output__generate_output__type_ctor_info_profiling_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (generate_output____Unify____profiling_0_0_10001)),
  ((MR_Box) (generate_output____Compare____profiling_0_0_10001)),
  (MR_String) "generate_output",
  (MR_String) "profiling",
  {     generate_output__generate_output__du_name_ordered_profiling_0 },
  {     generate_output__generate_output__du_ptag_ordered_profiling_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  generate_output__generate_output__functor_number_map_profiling_0
};

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0_10001(
  MR_Box generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2)
{
  {
    MR_bool generate_output__succeeded;

    {
      generate_output__succeeded = generate_output____Unify____flat_key_0_0(((MR_Word) generate_output__wrapper_arg_1), ((MR_Word) generate_output__wrapper_arg_2));
    }
    return generate_output__succeeded;
  }
}

static void MR_CALL 
generate_output____Compare____flat_key_0_0_10001(
  MR_Box * generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2,
  MR_Box generate_output__wrapper_arg_3)
{
  {
    MR_Word generate_output__conv0_HeadVar__1_1;

    {
      generate_output____Compare____flat_key_0_0(&generate_output__conv0_HeadVar__1_1, ((MR_Word) generate_output__wrapper_arg_2), ((MR_Word) generate_output__wrapper_arg_3));
    }
    *generate_output__wrapper_arg_1 = ((MR_Box) (generate_output__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0_10001(
  MR_Box generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2)
{
  {
    MR_bool generate_output__succeeded;

    {
      generate_output__succeeded = generate_output____Unify____profiling_0_0(((MR_Word) generate_output__wrapper_arg_1), ((MR_Word) generate_output__wrapper_arg_2));
    }
    return generate_output__succeeded;
  }
}

static void MR_CALL 
generate_output____Compare____profiling_0_0_10001(
  MR_Box * generate_output__wrapper_arg_1,
  MR_Box generate_output__wrapper_arg_2,
  MR_Box generate_output__wrapper_arg_3)
{
  {
    MR_Word generate_output__conv0_HeadVar__1_1;

    {
      generate_output____Compare____profiling_0_0(&generate_output__conv0_HeadVar__1_1, ((MR_Word) generate_output__wrapper_arg_2), ((MR_Word) generate_output__wrapper_arg_3));
    }
    *generate_output__wrapper_arg_1 = ((MR_Box) (generate_output__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
generate_output____Compare____profiling_0_0(
  MR_Word * generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2,
  MR_Word generate_output__HeadVar__3_3)
{
  {
    MR_bool generate_output__succeeded;
    MR_Integer generate_output__CastX_12 = (MR_Integer) generate_output__HeadVar__2_2;
    MR_Integer generate_output__CastY_13 = (MR_Integer) generate_output__HeadVar__3_3;

    generate_output__succeeded = (generate_output__CastX_12 == generate_output__CastY_13);
    if (generate_output__succeeded)
      *generate_output__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word generate_output__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word generate_output__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word generate_output__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word generate_output__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word generate_output__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word generate_output__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word generate_output__V_10_10;

        {
          mercury__builtin__compare_3_p_0((MR_Word) &generate_output_scalar_common_1[0], &generate_output__V_10_10, ((MR_Box) (generate_output__V_4_4)), ((MR_Box) (generate_output__V_7_7)));
        }
        generate_output__succeeded = (generate_output__V_10_10 == (MR_Integer) 0);
        generate_output__succeeded = !(generate_output__succeeded);
        if (generate_output__succeeded)
          *generate_output__HeadVar__1_1 = generate_output__V_10_10;
        else
          {
            MR_Word generate_output__V_11_11;

            {
              mercury__builtin__compare_3_p_0((MR_Word) &generate_output_scalar_common_1[1], &generate_output__V_11_11, ((MR_Box) (generate_output__V_5_5)), ((MR_Box) (generate_output__V_8_8)));
            }
            generate_output__succeeded = (generate_output__V_11_11 == (MR_Integer) 0);
            generate_output__succeeded = !(generate_output__succeeded);
            if (generate_output__succeeded)
              *generate_output__HeadVar__1_1 = generate_output__V_11_11;
            else
              {
                {
                  mercury__builtin__compare_3_p_0((MR_Word) &generate_output_scalar_common_1[2], generate_output__HeadVar__1_1, ((MR_Box) (generate_output__V_6_6)), ((MR_Box) (generate_output__V_9_9)));
                }
              }
          }
      }
  }
}

static MR_bool MR_CALL 
generate_output____Unify____profiling_0_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2)
{
  {
    MR_bool generate_output__succeeded;
    MR_Integer generate_output__CastX_9 = (MR_Integer) generate_output__HeadVar__1_1;
    MR_Integer generate_output__CastY_10 = (MR_Integer) generate_output__HeadVar__2_2;

    generate_output__succeeded = (generate_output__CastX_9 == generate_output__CastY_10);
    if (generate_output__succeeded)
      generate_output__succeeded = MR_TRUE;
    else
      {
        MR_Word generate_output__TypeInfo_12_12;
        MR_Word generate_output__TypeInfo_13_13;
        MR_Word generate_output__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word generate_output__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word generate_output__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word generate_output__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word generate_output__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word generate_output__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 2)));

        {
          generate_output__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &generate_output_scalar_common_1[0], ((MR_Box) (generate_output__V_3_3)), ((MR_Box) (generate_output__V_6_6)));
        }
        if (generate_output__succeeded)
          {
            generate_output__TypeInfo_12_12 = (MR_Word) &generate_output_scalar_common_1[1];
            {
              generate_output__succeeded = mercury__builtin__unify_2_p_0(generate_output__TypeInfo_12_12, ((MR_Box) (generate_output__V_4_4)), ((MR_Box) (generate_output__V_7_7)));
            }
            if (generate_output__succeeded)
              {
                generate_output__TypeInfo_13_13 = (MR_Word) &generate_output_scalar_common_1[2];
                {
                  generate_output__succeeded = mercury__builtin__unify_2_p_0(generate_output__TypeInfo_13_13, ((MR_Box) (generate_output__V_5_5)), ((MR_Box) (generate_output__V_8_8)));
                }
              }
          }
      }
    return generate_output__succeeded;
  }
}

static void MR_CALL 
generate_output____Compare____flat_key_0_0(
  MR_Word * generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2,
  MR_Word generate_output__HeadVar__3_3)
{
  {
    MR_bool generate_output__succeeded;
    MR_Integer generate_output__CastX_9 = (MR_Integer) generate_output__HeadVar__2_2;
    MR_Integer generate_output__CastY_10 = (MR_Integer) generate_output__HeadVar__3_3;

    generate_output__succeeded = (generate_output__CastX_9 == generate_output__CastY_10);
    if (generate_output__succeeded)
      *generate_output__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Float generate_output__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer generate_output__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 1)));
        MR_Float generate_output__V_6_6 = MR_unbox_float((MR_hl_field(MR_mktag(0), generate_output__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer generate_output__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word generate_output__V_8_8;

        {
          mercury__private_builtin__builtin_compare_float_3_p_0(&generate_output__V_8_8, generate_output__V_4_4, generate_output__V_6_6);
        }
        generate_output__succeeded = (generate_output__V_8_8 == (MR_Integer) 0);
        generate_output__succeeded = !(generate_output__succeeded);
        if (generate_output__succeeded)
          *generate_output__HeadVar__1_1 = generate_output__V_8_8;
        else
          {
            mercury__private_builtin__builtin_compare_int_3_p_0(generate_output__HeadVar__1_1, generate_output__V_5_5, generate_output__V_7_7);
          }
      }
  }
}

static MR_bool MR_CALL 
generate_output____Unify____flat_key_0_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__HeadVar__2_2)
{
  {
    MR_bool generate_output__succeeded;
    MR_Integer generate_output__CastX_7 = (MR_Integer) generate_output__HeadVar__1_1;
    MR_Integer generate_output__CastY_8 = (MR_Integer) generate_output__HeadVar__2_2;

    generate_output__succeeded = (generate_output__CastX_7 == generate_output__CastY_8);
    if (generate_output__succeeded)
      generate_output__succeeded = MR_TRUE;
    else
      {
        MR_Float generate_output__V_3_3 = MR_unbox_float((MR_hl_field(MR_mktag(0), generate_output__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer generate_output__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__1_1, (MR_Integer) 1)));
        MR_Float generate_output__V_5_5 = MR_unbox_float((MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 0)));
        MR_Integer generate_output__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), generate_output__HeadVar__2_2, (MR_Integer) 1)));

        generate_output__succeeded = (generate_output__V_3_3 == generate_output__V_5_5);
        if (generate_output__succeeded)
          generate_output__succeeded = (generate_output__V_4_4 == generate_output__V_6_6);
      }
    return generate_output__succeeded;
  }
}

static void MR_CALL 
generate_output__assign_index_numbers_2_4_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__N_2,
  MR_Word generate_output__STATE_VARIABLE_IndexMap_0_3,
  MR_Word * generate_output__STATE_VARIABLE_IndexMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool generate_output__succeeded;

        if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *generate_output__STATE_VARIABLE_IndexMap_4 = generate_output__STATE_VARIABLE_IndexMap_0_3;
        else
          {
            MR_String generate_output__X0_9 = ((MR_String) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word generate_output__Xs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word generate_output__STATE_VARIABLE_IndexMap_15_15;
            MR_Integer generate_output__V_16_16;

            {
              mercury__map__det_insert_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (generate_output__X0_9)), ((MR_Box) (generate_output__N_2)), generate_output__STATE_VARIABLE_IndexMap_0_3, &generate_output__STATE_VARIABLE_IndexMap_15_15);
            }
            generate_output__V_16_16 = (generate_output__N_2 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word generate_output__HeadVar__1__tmp_copy_1 = generate_output__Xs0_10;
              MR_Integer generate_output__N__tmp_copy_2 = generate_output__V_16_16;
              MR_Word generate_output__STATE_VARIABLE_IndexMap_0__tmp_copy_3 = generate_output__STATE_VARIABLE_IndexMap_15_15;

              generate_output__STATE_VARIABLE_IndexMap_0_3 = generate_output__STATE_VARIABLE_IndexMap_0__tmp_copy_3;
              generate_output__N_2 = generate_output__N__tmp_copy_2;
              generate_output__HeadVar__1_1 = generate_output__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
generate_output__process_prof_node_children_2_4_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__Prof_2,
  MR_Word generate_output__STATE_VARIABLE_Output_0_3,
  MR_Word * generate_output__STATE_VARIABLE_Output_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool generate_output__succeeded;

        if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *generate_output__STATE_VARIABLE_Output_4 = generate_output__STATE_VARIABLE_Output_0_3;
        else
          {
            MR_Word generate_output__PN_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word generate_output__PNs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 1)));
            MR_String generate_output__LabelName_13;
            MR_Integer generate_output__Calls_14;
            MR_Float generate_output__Scale_15;
            MR_Word generate_output__AddrMap_18;
            MR_Word generate_output__ProfNodeMap_19;
            MR_Word generate_output__CycleMap_20;
            MR_Integer generate_output__CycleNum_22;
            MR_Word generate_output__ProfNode_23;
            MR_Integer generate_output__Initial_24;
            MR_Float generate_output__Prop_25;
            MR_Integer generate_output__TotalCalls_26;
            MR_Float generate_output__CurrentCount_27;
            MR_Float generate_output__Proportion_28;
            MR_Float generate_output__SelfTime_29;
            MR_Float generate_output__DescTime_30;
            MR_Float generate_output__PropSelfTime_31;
            MR_Float generate_output__PropDescTime_32;
            MR_Word generate_output__Child_33;
            MR_Float generate_output__V_36_36;
            MR_Float generate_output__V_37_37;
            MR_Float generate_output__V_38_38;
            MR_Float generate_output__V_39_39;
            MR_Word generate_output__STATE_VARIABLE_Output_40_40;
            MR_String generate_output___Units_16;
            MR_Integer generate_output__V_17_17;
            MR_Integer generate_output__CycleNum0_21;
            MR_Box generate_output__conv0_CycleNum0_21;

            {
              prof_info__pred_info_get_entire_3_p_0(generate_output__PN_9, &generate_output__LabelName_13, &generate_output__Calls_14);
            }
            {
              prof_info__prof_get_entire_7_p_0(generate_output__Prof_2, &generate_output__Scale_15, &generate_output___Units_16, &generate_output__V_17_17, &generate_output__AddrMap_18, &generate_output__ProfNodeMap_19, &generate_output__CycleMap_20);
            }
            {
              generate_output__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, generate_output__CycleMap_20, ((MR_Box) (generate_output__LabelName_13)), &generate_output__conv0_CycleNum0_21);
            }
            if (generate_output__succeeded)
              {
                generate_output__CycleNum0_21 = ((MR_Integer) generate_output__conv0_CycleNum0_21);
                generate_output__succeeded = MR_TRUE;
              }
            if (generate_output__succeeded)
              generate_output__CycleNum_22 = generate_output__CycleNum0_21;
            else
              generate_output__CycleNum_22 = (MR_Integer) 0;
            {
              prof_info__get_prof_node_4_p_0(generate_output__LabelName_13, generate_output__AddrMap_18, generate_output__ProfNodeMap_19, &generate_output__ProfNode_23);
            }
            {
              prof_info__prof_node_get_initial_counts_2_p_0(generate_output__ProfNode_23, &generate_output__Initial_24);
            }
            {
              prof_info__prof_node_get_propagated_counts_2_p_0(generate_output__ProfNode_23, &generate_output__Prop_25);
            }
            {
              prof_info__prof_node_get_total_calls_2_p_0(generate_output__ProfNode_23, &generate_output__TotalCalls_26);
            }
            {
              generate_output__V_36_36 = mercury__float__float_1_f_0(generate_output__Initial_24);
            }
            generate_output__CurrentCount_27 = (generate_output__V_36_36 + generate_output__Prop_25);
            {
              generate_output__V_37_37 = mercury__float__float_1_f_0(generate_output__Calls_14);
            }
            {
              generate_output__V_38_38 = mercury__float__float_1_f_0(generate_output__TotalCalls_26);
            }
            generate_output__succeeded = (generate_output__V_38_38 == ((MR_Float) 0.0000000000000000));
            if (generate_output__succeeded)
              generate_output__Proportion_28 = (MR_Float) 0.0000000000000000;
            else
              {
                generate_output__Proportion_28 = mercury__float__f_slash_2_f_0(generate_output__V_37_37, generate_output__V_38_38);
              }
            {
              generate_output__V_39_39 = mercury__float__float_1_f_0(generate_output__Initial_24);
            }
            generate_output__SelfTime_29 = (generate_output__V_39_39 * generate_output__Scale_15);
            generate_output__DescTime_30 = (generate_output__CurrentCount_27 * generate_output__Scale_15);
            generate_output__PropSelfTime_31 = (generate_output__SelfTime_29 * generate_output__Proportion_28);
            generate_output__PropDescTime_32 = (generate_output__DescTime_30 * generate_output__Proportion_28);
            {
              generate_output__Child_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), generate_output__Child_33, 0) = ((MR_Box) (generate_output__LabelName_13));
              MR_hl_field(MR_mktag(0), generate_output__Child_33, 1) = ((MR_Box) (generate_output__CycleNum_22));
              MR_hl_field(MR_mktag(0), generate_output__Child_33, 2) = MR_box_float(generate_output__PropSelfTime_31);
              MR_hl_field(MR_mktag(0), generate_output__Child_33, 3) = MR_box_float(generate_output__PropDescTime_32);
              MR_hl_field(MR_mktag(0), generate_output__Child_33, 4) = ((MR_Box) (generate_output__Calls_14));
              MR_hl_field(MR_mktag(0), generate_output__Child_33, 5) = ((MR_Box) (generate_output__TotalCalls_26));
            }
            {
              mercury__rbtree__insert_duplicate_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_child_0, ((MR_Box) (generate_output__Calls_14)), ((MR_Box) (generate_output__Child_33)), generate_output__STATE_VARIABLE_Output_0_3, &generate_output__STATE_VARIABLE_Output_40_40);
            }
            /* direct tailcall eliminated */
            {
              MR_Word generate_output__HeadVar__1__tmp_copy_1 = generate_output__PNs_10;
              MR_Word generate_output__STATE_VARIABLE_Output_0__tmp_copy_3 = generate_output__STATE_VARIABLE_Output_40_40;

              generate_output__STATE_VARIABLE_Output_0_3 = generate_output__STATE_VARIABLE_Output_0__tmp_copy_3;
              generate_output__HeadVar__1_1 = generate_output__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
generate_output__remove_child_cycle_members_5_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__CycleNum_2,
  MR_Word generate_output__CycleMap_3,
  MR_Word * generate_output__HeadVar__4_4,
  MR_Word * generate_output__HeadVar__5_5)
{
  {
    MR_bool generate_output__succeeded;

    if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *generate_output__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *generate_output__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word generate_output__PN_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word generate_output__PNs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 1)));
        MR_String generate_output__LabelName_14;
        MR_Integer generate_output__Calls_15;
        MR_Integer generate_output__ChildCycleNum_16;
        MR_Box generate_output__conv0_ChildCycleNum_16;

        {
          prof_info__pred_info_get_entire_3_p_0(generate_output__PN_8, &generate_output__LabelName_14, &generate_output__Calls_15);
        }
        {
          generate_output__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, generate_output__CycleMap_3, ((MR_Box) (generate_output__LabelName_14)), &generate_output__conv0_ChildCycleNum_16);
        }
        if (generate_output__succeeded)
          {
            generate_output__ChildCycleNum_16 = ((MR_Integer) generate_output__conv0_ChildCycleNum_16);
            generate_output__succeeded = MR_TRUE;
          }
        if (generate_output__succeeded)
          {
            generate_output__succeeded = (generate_output__ChildCycleNum_16 == generate_output__CycleNum_2);
            if (generate_output__succeeded)
              {
                MR_Word generate_output__OC0_17;
                MR_Word generate_output__Child_18;

                {
                  generate_output__remove_child_cycle_members_5_p_0(generate_output__PNs_9, generate_output__CycleNum_2, generate_output__CycleMap_3, generate_output__HeadVar__4_4, &generate_output__OC0_17);
                }
                {
                  generate_output__Child_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), generate_output__Child_18, 0) = ((MR_Box) (generate_output__LabelName_14));
                  MR_hl_field(MR_mktag(0), generate_output__Child_18, 1) = ((MR_Box) (generate_output__CycleNum_2));
                  MR_hl_field(MR_mktag(0), generate_output__Child_18, 2) = MR_box_float((MR_Float) 0.0000000000000000);
                  MR_hl_field(MR_mktag(0), generate_output__Child_18, 3) = MR_box_float((MR_Float) 0.0000000000000000);
                  MR_hl_field(MR_mktag(0), generate_output__Child_18, 4) = ((MR_Box) (generate_output__Calls_15));
                  MR_hl_field(MR_mktag(0), generate_output__Child_18, 5) = ((MR_Box) ((MR_Integer) 0));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *generate_output__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (generate_output__Child_18));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (generate_output__OC0_17));
                }
              }
            else
              {
                MR_Word generate_output__List0_19;

                {
                  generate_output__remove_child_cycle_members_5_p_0(generate_output__PNs_9, generate_output__CycleNum_2, generate_output__CycleMap_3, &generate_output__List0_19, generate_output__HeadVar__5_5);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *generate_output__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (generate_output__PN_8));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (generate_output__List0_19));
                }
              }
          }
        else
          {
            MR_Word generate_output__List0_24;

            {
              generate_output__remove_child_cycle_members_5_p_0(generate_output__PNs_9, generate_output__CycleNum_2, generate_output__CycleMap_3, &generate_output__List0_24, generate_output__HeadVar__5_5);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *generate_output__HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (generate_output__PN_8));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (generate_output__List0_24));
            }
          }
      }
  }
}

static void MR_CALL 
generate_output__process_prof_node_children_6_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__CycleNum_2,
  MR_Word generate_output__CycleMap_3,
  MR_Word generate_output__Prof_4,
  MR_Word * generate_output__HeadVar__5_5,
  MR_Word * generate_output__HeadVar__6_6)
{
  {
    MR_bool generate_output__succeeded;

    if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *generate_output__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *generate_output__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word generate_output__TypeCtorInfo_21_21;
        MR_Word generate_output__TypeCtorInfo_22_22;
        MR_Word generate_output__Children_17;
        MR_Word generate_output__Output0_18;
        MR_Word generate_output__Output_19;

        {
          generate_output__remove_child_cycle_members_5_p_0(generate_output__HeadVar__1_1, generate_output__CycleNum_2, generate_output__CycleMap_3, &generate_output__Children_17, generate_output__HeadVar__6_6);
        }
        generate_output__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
        generate_output__TypeCtorInfo_22_22 = (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_child_0;
        {
          mercury__rbtree__init_1_p_0(generate_output__TypeCtorInfo_21_21, generate_output__TypeCtorInfo_22_22, &generate_output__Output0_18);
        }
        {
          generate_output__process_prof_node_children_2_4_p_0(generate_output__Children_17, generate_output__Prof_4, generate_output__Output0_18, &generate_output__Output_19);
        }
        {
          mercury__rbtree__values_2_p_0(generate_output__TypeCtorInfo_21_21, generate_output__TypeCtorInfo_22_22, generate_output__Output_19, generate_output__HeadVar__5_5);
        }
      }
  }
}

static void MR_CALL 
generate_output__process_prof_node_parents_3_7_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Float generate_output__SelfTime_2,
  MR_Float generate_output__DescTime_3,
  MR_Float generate_output__TotalCalls_4,
  MR_Word generate_output__CycleMap_5,
  MR_Word generate_output__STATE_VARIABLE_Output_0_6,
  MR_Word * generate_output__STATE_VARIABLE_Output_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool generate_output__succeeded;

        if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *generate_output__STATE_VARIABLE_Output_7 = generate_output__STATE_VARIABLE_Output_0_6;
        else
          {
            MR_Word generate_output__PN_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word generate_output__PNs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 1)));
            MR_String generate_output__LabelName_22;
            MR_Integer generate_output__Calls_23;
            MR_Integer generate_output__ParentCycleNum_25;
            MR_Float generate_output__Proportion_26;
            MR_Float generate_output__PropSelfTime_27;
            MR_Float generate_output__PropDescTime_28;
            MR_Word generate_output__Parent_29;
            MR_Float generate_output__V_32_32;
            MR_Word generate_output__STATE_VARIABLE_Output_33_33;
            MR_Integer generate_output__ParentCycleNum0_24;
            MR_Box generate_output__conv0_ParentCycleNum0_24;

            {
              prof_info__pred_info_get_entire_3_p_0(generate_output__PN_15, &generate_output__LabelName_22, &generate_output__Calls_23);
            }
            {
              generate_output__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, generate_output__CycleMap_5, ((MR_Box) (generate_output__LabelName_22)), &generate_output__conv0_ParentCycleNum0_24);
            }
            if (generate_output__succeeded)
              {
                generate_output__ParentCycleNum0_24 = ((MR_Integer) generate_output__conv0_ParentCycleNum0_24);
                generate_output__succeeded = MR_TRUE;
              }
            if (generate_output__succeeded)
              generate_output__ParentCycleNum_25 = generate_output__ParentCycleNum0_24;
            else
              generate_output__ParentCycleNum_25 = (MR_Integer) 0;
            {
              generate_output__V_32_32 = mercury__float__float_1_f_0(generate_output__Calls_23);
            }
            generate_output__succeeded = (generate_output__TotalCalls_4 == ((MR_Float) 0.0000000000000000));
            if (generate_output__succeeded)
              generate_output__Proportion_26 = (MR_Float) 0.0000000000000000;
            else
              {
                generate_output__Proportion_26 = mercury__float__f_slash_2_f_0(generate_output__V_32_32, generate_output__TotalCalls_4);
              }
            generate_output__PropSelfTime_27 = (generate_output__SelfTime_2 * generate_output__Proportion_26);
            generate_output__PropDescTime_28 = (generate_output__DescTime_3 * generate_output__Proportion_26);
            {
              generate_output__Parent_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), generate_output__Parent_29, 0) = ((MR_Box) (generate_output__LabelName_22));
              MR_hl_field(MR_mktag(0), generate_output__Parent_29, 1) = ((MR_Box) (generate_output__ParentCycleNum_25));
              MR_hl_field(MR_mktag(0), generate_output__Parent_29, 2) = MR_box_float(generate_output__PropSelfTime_27);
              MR_hl_field(MR_mktag(0), generate_output__Parent_29, 3) = MR_box_float(generate_output__PropDescTime_28);
              MR_hl_field(MR_mktag(0), generate_output__Parent_29, 4) = ((MR_Box) (generate_output__Calls_23));
            }
            {
              mercury__rbtree__insert_duplicate_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_parent_0, ((MR_Box) (generate_output__Calls_23)), ((MR_Box) (generate_output__Parent_29)), generate_output__STATE_VARIABLE_Output_0_6, &generate_output__STATE_VARIABLE_Output_33_33);
            }
            /* direct tailcall eliminated */
            {
              MR_Word generate_output__HeadVar__1__tmp_copy_1 = generate_output__PNs_16;
              MR_Word generate_output__STATE_VARIABLE_Output_0__tmp_copy_6 = generate_output__STATE_VARIABLE_Output_33_33;

              generate_output__STATE_VARIABLE_Output_0_6 = generate_output__STATE_VARIABLE_Output_0__tmp_copy_6;
              generate_output__HeadVar__1_1 = generate_output__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
generate_output__remove_cycle_members_7_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Integer generate_output__CycleNum_2,
  MR_Word generate_output__CycleMap_3,
  MR_Integer generate_output__STATE_VARIABLE_TotalCalls_0_4,
  MR_Integer * generate_output__STATE_VARIABLE_TotalCalls_5,
  MR_Word * generate_output__HeadVar__6_6,
  MR_Word * generate_output__HeadVar__7_7)
{
  {
    MR_bool generate_output__succeeded;

    if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *generate_output__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *generate_output__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *generate_output__STATE_VARIABLE_TotalCalls_5 = generate_output__STATE_VARIABLE_TotalCalls_0_4;
      }
    else
      {
        MR_Word generate_output__PN_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word generate_output__PNs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 1)));
        MR_String generate_output__LabelName_20;
        MR_Integer generate_output__Calls_21;
        MR_Integer generate_output__ParentCycleNum_22;
        MR_Box generate_output__conv0_ParentCycleNum_22;

        {
          prof_info__pred_info_get_entire_3_p_0(generate_output__PN_13, &generate_output__LabelName_20, &generate_output__Calls_21);
        }
        {
          generate_output__succeeded = mercury__map__search_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, generate_output__CycleMap_3, ((MR_Box) (generate_output__LabelName_20)), &generate_output__conv0_ParentCycleNum_22);
        }
        if (generate_output__succeeded)
          {
            generate_output__ParentCycleNum_22 = ((MR_Integer) generate_output__conv0_ParentCycleNum_22);
            generate_output__succeeded = MR_TRUE;
          }
        if (generate_output__succeeded)
          {
            generate_output__succeeded = (generate_output__ParentCycleNum_22 == generate_output__CycleNum_2);
            if (generate_output__succeeded)
              {
                MR_Word generate_output__OC0_23;
                MR_Word generate_output__Parent_24;
                MR_Integer generate_output__STATE_VARIABLE_TotalCalls_28_28 = (generate_output__STATE_VARIABLE_TotalCalls_0_4 - generate_output__Calls_21);

                {
                  generate_output__remove_cycle_members_7_p_0(generate_output__PNs_14, generate_output__CycleNum_2, generate_output__CycleMap_3, generate_output__STATE_VARIABLE_TotalCalls_28_28, generate_output__STATE_VARIABLE_TotalCalls_5, generate_output__HeadVar__6_6, &generate_output__OC0_23);
                }
                {
                  generate_output__Parent_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), generate_output__Parent_24, 0) = ((MR_Box) (generate_output__LabelName_20));
                  MR_hl_field(MR_mktag(0), generate_output__Parent_24, 1) = ((MR_Box) (generate_output__CycleNum_2));
                  MR_hl_field(MR_mktag(0), generate_output__Parent_24, 2) = MR_box_float((MR_Float) 0.0000000000000000);
                  MR_hl_field(MR_mktag(0), generate_output__Parent_24, 3) = MR_box_float((MR_Float) 0.0000000000000000);
                  MR_hl_field(MR_mktag(0), generate_output__Parent_24, 4) = ((MR_Box) (generate_output__Calls_21));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *generate_output__HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (generate_output__Parent_24));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (generate_output__OC0_23));
                }
              }
            else
              {
                MR_Word generate_output__List0_25;

                {
                  generate_output__remove_cycle_members_7_p_0(generate_output__PNs_14, generate_output__CycleNum_2, generate_output__CycleMap_3, generate_output__STATE_VARIABLE_TotalCalls_0_4, generate_output__STATE_VARIABLE_TotalCalls_5, &generate_output__List0_25, generate_output__HeadVar__7_7);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *generate_output__HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (generate_output__PN_13));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (generate_output__List0_25));
                }
              }
          }
        else
          {
            MR_Word generate_output__List0_35;

            {
              generate_output__remove_cycle_members_7_p_0(generate_output__PNs_14, generate_output__CycleNum_2, generate_output__CycleMap_3, generate_output__STATE_VARIABLE_TotalCalls_0_4, generate_output__STATE_VARIABLE_TotalCalls_5, &generate_output__List0_35, generate_output__HeadVar__7_7);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *generate_output__HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (generate_output__PN_13));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (generate_output__List0_35));
            }
          }
      }
  }
}

static MR_String MR_CALL 
generate_output__construct_name_1_f_0(
  MR_Word generate_output__HeadVar__1_1)
{
  {
    MR_bool generate_output__succeeded;
    MR_String generate_output__HeadVar__2_2;

    if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      generate_output__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_String generate_output__Name_3 = ((MR_String) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word generate_output__Names_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 1)));
        MR_String generate_output__NameStr0_6;
        MR_String generate_output__NameStr1_7;

        {
          generate_output__NameStr0_6 = generate_output__construct_name_1_f_0(generate_output__Names_4);
        }
        {
          mercury__string__append_3_p_2((MR_String) " or ", generate_output__Name_3, &generate_output__NameStr1_7);
        }
        {
          mercury__string__append_3_p_2(generate_output__NameStr1_7, generate_output__NameStr0_6, &generate_output__HeadVar__2_2);
        }
      }
    return generate_output__HeadVar__2_2;
  }
}

static void MR_CALL 
generate_output__process_prof_node_4_p_0(
  MR_Word generate_output__ProfNode_5,
  MR_Word generate_output__Prof_6,
  MR_Word generate_output__STATE_VARIABLE_OutputProf_0_9,
  MR_Word * generate_output__STATE_VARIABLE_OutputProf_10)
{
  {
    MR_bool generate_output__succeeded;
    MR_Word generate_output__ProfNodeType_8;

    {
      prof_info__prof_node_type_2_p_0(generate_output__ProfNode_5, &generate_output__ProfNodeType_8);
    }
    generate_output__succeeded = (generate_output__ProfNodeType_8 == (MR_Integer) 0);
    if (generate_output__succeeded)
      {
        MR_Float generate_output__Scale_17;
        MR_Integer generate_output__IntTotalCounts_19;
        MR_Word generate_output__CycleMap_22;
        MR_Float generate_output__TotalCounts_23;
        MR_String generate_output__LabelName_24;
        MR_Integer generate_output__CycleNum_25;
        MR_Integer generate_output__Initial_26;
        MR_Float generate_output__Prop_27;
        MR_Word generate_output__ParentList_28;
        MR_Word generate_output__ChildList_29;
        MR_Integer generate_output__TotalCalls_30;
        MR_Integer generate_output__SelfCalls_31;
        MR_Word generate_output__NameList_32;
        MR_String generate_output___Units_18;
        MR_Word generate_output__V_20_20;
        MR_Word generate_output__V_21_21;

        {
          prof_info__prof_get_entire_7_p_0(generate_output__Prof_6, &generate_output__Scale_17, &generate_output___Units_18, &generate_output__IntTotalCounts_19, &generate_output__V_20_20, &generate_output__V_21_21, &generate_output__CycleMap_22);
        }
        {
          generate_output__TotalCounts_23 = mercury__float__float_1_f_0(generate_output__IntTotalCounts_19);
        }
        {
          prof_info__prof_node_get_entire_pred_10_p_0(generate_output__ProfNode_5, &generate_output__LabelName_24, &generate_output__CycleNum_25, &generate_output__Initial_26, &generate_output__Prop_27, &generate_output__ParentList_28, &generate_output__ChildList_29, &generate_output__TotalCalls_30, &generate_output__SelfCalls_31, &generate_output__NameList_32);
        }
        generate_output__succeeded = (generate_output__ParentList_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (generate_output__succeeded)
          generate_output__succeeded = (generate_output__ChildList_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (generate_output__succeeded)
          *generate_output__STATE_VARIABLE_OutputProf_10 = generate_output__STATE_VARIABLE_OutputProf_0_9;
        else
          {
            MR_Word generate_output__TypeCtorInfo_52_59;
            MR_Word generate_output__InfoMap0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 0)));
            MR_Word generate_output__CallTree0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 1)));
            MR_Word generate_output__FlatTree0_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__STATE_VARIABLE_OutputProf_0_9, (MR_Integer) 2)));
            MR_String generate_output__Name_36;
            MR_Float generate_output__InitialFloat_37;
            MR_Float generate_output__DescPercentage_38;
            MR_Float generate_output__FlatPercentage_39;
            MR_Float generate_output__SelfTime_40;
            MR_Float generate_output__DescTime_41;
            MR_Word generate_output__OutputParentList_42;
            MR_Word generate_output__OutputCycleParentList_43;
            MR_Word generate_output__OutputChildList_44;
            MR_Word generate_output__OutputCycleChildList_45;
            MR_Word generate_output__OutputProfNode_46;
            MR_Word generate_output__InfoMap_47;
            MR_Word generate_output__CallTree_48;
            MR_Word generate_output__FlatTree_49;
            MR_String generate_output__V_50_50;
            MR_Float generate_output__V_56_56;
            MR_Word generate_output__V_57_57;
            MR_Integer generate_output__TotalCalls_71;
            MR_Word generate_output__Parents_72;
            MR_Float generate_output__FltTotalCalls_73;

            {
              generate_output__V_50_50 = generate_output__construct_name_1_f_0(generate_output__NameList_32);
            }
            {
              generate_output__Name_36 = mercury__string__f_43_43_2_f_0(generate_output__LabelName_24, generate_output__V_50_50);
            }
            {
              generate_output__InitialFloat_37 = mercury__float__float_1_f_0(generate_output__Initial_26);
            }
            generate_output__succeeded = (generate_output__TotalCounts_23 == ((MR_Float) 0.0000000000000000));
            if (generate_output__succeeded)
              {
                generate_output__DescPercentage_38 = (MR_Float) 0.0000000000000000;
                generate_output__FlatPercentage_39 = (MR_Float) 0.0000000000000000;
              }
            else
              {
                MR_Float generate_output__V_51_51;
                MR_Float generate_output__V_52_52 = (generate_output__InitialFloat_37 + generate_output__Prop_27);
                MR_Float generate_output__V_54_54;

                {
                  generate_output__V_51_51 = mercury__float__f_slash_2_f_0(generate_output__V_52_52, generate_output__TotalCounts_23);
                }
                generate_output__DescPercentage_38 = (generate_output__V_51_51 * ((MR_Float) 100.00000000000000));
                {
                  generate_output__V_54_54 = mercury__float__f_slash_2_f_0(generate_output__InitialFloat_37, generate_output__TotalCounts_23);
                }
                generate_output__FlatPercentage_39 = (generate_output__V_54_54 * ((MR_Float) 100.00000000000000));
              }
            generate_output__SelfTime_40 = (generate_output__InitialFloat_37 * generate_output__Scale_17);
            generate_output__V_56_56 = (generate_output__InitialFloat_37 + generate_output__Prop_27);
            generate_output__DescTime_41 = (generate_output__V_56_56 * generate_output__Scale_17);
            {
              generate_output__remove_cycle_members_7_p_0(generate_output__ParentList_28, generate_output__CycleNum_25, generate_output__CycleMap_22, generate_output__TotalCalls_30, &generate_output__TotalCalls_71, &generate_output__Parents_72, &generate_output__OutputCycleParentList_43);
            }
            {
              generate_output__FltTotalCalls_73 = mercury__float__float_1_f_0(generate_output__TotalCalls_71);
            }
            if ((generate_output__Parents_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              generate_output__OutputParentList_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word generate_output__TypeCtorInfo_21_88 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
                MR_Word generate_output__TypeCtorInfo_22_89 = (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_parent_0;
                MR_Word generate_output__Output0_85;
                MR_Word generate_output__Output_86;

                {
                  mercury__rbtree__init_1_p_0(generate_output__TypeCtorInfo_21_88, generate_output__TypeCtorInfo_22_89, &generate_output__Output0_85);
                }
                {
                  generate_output__process_prof_node_parents_3_7_p_0(generate_output__Parents_72, generate_output__SelfTime_40, generate_output__DescTime_41, generate_output__FltTotalCalls_73, generate_output__CycleMap_22, generate_output__Output0_85, &generate_output__Output_86);
                }
                {
                  mercury__rbtree__values_2_p_0(generate_output__TypeCtorInfo_21_88, generate_output__TypeCtorInfo_22_89, generate_output__Output_86, &generate_output__OutputParentList_42);
                }
              }
            {
              generate_output__process_prof_node_children_6_p_0(generate_output__ChildList_29, generate_output__CycleNum_25, generate_output__CycleMap_22, generate_output__Prof_6, &generate_output__OutputChildList_44, &generate_output__OutputCycleChildList_45);
            }
            {
              generate_output__OutputProfNode_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 0) = ((MR_Box) (generate_output__Name_36));
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 1) = ((MR_Box) (generate_output__CycleNum_25));
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 2) = MR_box_float(generate_output__DescPercentage_38);
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 3) = MR_box_float(generate_output__FlatPercentage_39);
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 4) = MR_box_float(generate_output__SelfTime_40);
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 5) = MR_box_float(generate_output__DescTime_41);
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 6) = ((MR_Box) (generate_output__TotalCalls_30));
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 7) = ((MR_Box) (generate_output__SelfCalls_31));
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 8) = ((MR_Box) (generate_output__OutputParentList_42));
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 9) = ((MR_Box) (generate_output__OutputChildList_44));
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 10) = ((MR_Box) (generate_output__OutputCycleParentList_43));
              MR_hl_field(MR_mktag(0), generate_output__OutputProfNode_46, 11) = ((MR_Box) (generate_output__OutputCycleChildList_45));
            }
            generate_output__TypeCtorInfo_52_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
            {
              mercury__map__det_insert_4_p_0(generate_output__TypeCtorInfo_52_59, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0, ((MR_Box) (generate_output__LabelName_24)), ((MR_Box) (generate_output__OutputProfNode_46)), generate_output__InfoMap0_33, &generate_output__InfoMap_47);
            }
            {
              mercury__rbtree__insert_duplicate_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, generate_output__TypeCtorInfo_52_59, MR_box_float(generate_output__DescPercentage_38), ((MR_Box) (generate_output__LabelName_24)), generate_output__CallTree0_34, &generate_output__CallTree_48);
            }
            {
              generate_output__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), generate_output__V_57_57, 0) = MR_box_float(generate_output__FlatPercentage_39);
              MR_hl_field(MR_mktag(0), generate_output__V_57_57, 1) = ((MR_Box) (generate_output__TotalCalls_30));
            }
            {
              mercury__rbtree__insert_duplicate_4_p_0((MR_Word) &generate_output__generate_output__type_ctor_info_flat_key_0, generate_output__TypeCtorInfo_52_59, ((MR_Box) (generate_output__V_57_57)), ((MR_Box) (generate_output__LabelName_24)), generate_output__FlatTree0_35, &generate_output__FlatTree_49);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              *generate_output__STATE_VARIABLE_OutputProf_10 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (generate_output__InfoMap_47));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (generate_output__CallTree_48));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (generate_output__FlatTree_49));
            }
          }
      }
    else
      *generate_output__STATE_VARIABLE_OutputProf_10 = generate_output__STATE_VARIABLE_OutputProf_0_9;
  }
}

static void MR_CALL 
generate_output__process_prof_node_list_7_p_0(
  MR_Word generate_output__HeadVar__1_1,
  MR_Word generate_output__Prof_2,
  MR_Word generate_output__VeryVerbose_3,
  MR_Word generate_output__STATE_VARIABLE_OutputProf_0_4,
  MR_Word * generate_output__STATE_VARIABLE_OutputProf_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool generate_output__succeeded;

        if ((generate_output__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *generate_output__STATE_VARIABLE_OutputProf_5 = generate_output__STATE_VARIABLE_OutputProf_0_4;
        else
          {
            MR_Word generate_output__PN_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word generate_output__PNs_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), generate_output__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word generate_output__STATE_VARIABLE_OutputProf_30_30;

            switch (generate_output__VeryVerbose_3) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String generate_output__LabelName_22;
                  MR_String generate_output__V_27_27;

                  {
                    prof_info__prof_node_get_pred_name_2_p_0(generate_output__PN_16, &generate_output__LabelName_22);
                  }
                  {
                    generate_output__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t% Processing ", generate_output__LabelName_22);
                  }
                  {
                    mercury__io__write_string_3_p_0(generate_output__V_27_27);
                  }
                }
                break;
            }
            {
              generate_output__process_prof_node_4_p_0(generate_output__PN_16, generate_output__Prof_2, generate_output__STATE_VARIABLE_OutputProf_0_4, &generate_output__STATE_VARIABLE_OutputProf_30_30);
            }
            /* direct tailcall eliminated */
            {
              MR_Word generate_output__HeadVar__1__tmp_copy_1 = generate_output__PNs_17;
              MR_Word generate_output__STATE_VARIABLE_OutputProf_0__tmp_copy_4 = generate_output__STATE_VARIABLE_OutputProf_30_30;

              generate_output__STATE_VARIABLE_OutputProf_0_4 = generate_output__STATE_VARIABLE_OutputProf_0__tmp_copy_4;
              generate_output__HeadVar__1_1 = generate_output__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Float MR_CALL 
generate_output__checked_float_divide_2_f_0(
  MR_Float generate_output__A_4,
  MR_Float generate_output__B_5)
{
  {
    MR_bool generate_output__succeeded = (generate_output__B_5 == ((MR_Float) 0.0000000000000000));
    MR_Float generate_output__HeadVar__3_3;

    if (generate_output__succeeded)
      generate_output__HeadVar__3_3 = (MR_Float) 0.0000000000000000;
    else
      {
        generate_output__HeadVar__3_3 = mercury__float__f_slash_2_f_0(generate_output__A_4, generate_output__B_5);
      }
    return generate_output__HeadVar__3_3;
  }
}

void MR_CALL 
generate_output__generate_prof_output_5_p_0(
  MR_Word generate_output__Prof_6,
  MR_Word * generate_output__IndexMap_7,
  MR_Word * generate_output__Output_8)
{
  {
    MR_bool generate_output__succeeded;
    MR_Word generate_output__TypeCtorInfo_35_35;
    MR_Word generate_output__TypeCtorInfo_6_41;
    MR_Word generate_output__TypeCtorInfo_9_50;
    MR_Word generate_output__VeryVerbose_10;
    MR_Word generate_output__ProfNodeMap_15;
    MR_Word generate_output__ProfNodeList_17;
    MR_Word generate_output__OutputProf0_18;
    MR_Word generate_output__OutputProf_19;
    MR_Word generate_output__InfoMap_20;
    MR_Word generate_output__CallTree_21;
    MR_Word generate_output__FlatTree_22;
    MR_Word generate_output__CallList0_23;
    MR_Word generate_output__FlatList0_24;
    MR_Word generate_output__CallList_25;
    MR_Word generate_output__FlatList_26;
    MR_Word generate_output__InfoMap_38;
    MR_Word generate_output__CallTree_39;
    MR_Word generate_output__FlatTree_40;
    MR_Word generate_output__V_49_49;
    MR_Float generate_output__V_11_11;
    MR_String generate_output__V_12_12;
    MR_Integer generate_output___IntTotalCounts_13;
    MR_Word generate_output__V_14_14;
    MR_Word generate_output__V_16_16;

    {
      globals__io_lookup_bool_option_4_p_0((MR_Integer) 1, &generate_output__VeryVerbose_10);
    }
    {
      prof_info__prof_get_entire_7_p_0(generate_output__Prof_6, &generate_output__V_11_11, &generate_output__V_12_12, &generate_output___IntTotalCounts_13, &generate_output__V_14_14, &generate_output__ProfNodeMap_15, &generate_output__V_16_16);
    }
    {
      generate_output__ProfNodeList_17 = mercury__map__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &prof_info__prof_info__type_ctor_info_prof_node_0, generate_output__ProfNodeMap_15);
    }
    generate_output__TypeCtorInfo_6_41 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__map__init_1_p_0(generate_output__TypeCtorInfo_6_41, (MR_Word) &output_prof_info__output_prof_info__type_ctor_info_output_prof_0, &generate_output__InfoMap_38);
    }
    {
      mercury__rbtree__init_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, generate_output__TypeCtorInfo_6_41, &generate_output__CallTree_39);
    }
    {
      mercury__rbtree__init_1_p_0((MR_Word) &generate_output__generate_output__type_ctor_info_flat_key_0, generate_output__TypeCtorInfo_6_41, &generate_output__FlatTree_40);
    }
    {
      generate_output__OutputProf0_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), generate_output__OutputProf0_18, 0) = ((MR_Box) (generate_output__InfoMap_38));
      MR_hl_field(MR_mktag(0), generate_output__OutputProf0_18, 1) = ((MR_Box) (generate_output__CallTree_39));
      MR_hl_field(MR_mktag(0), generate_output__OutputProf0_18, 2) = ((MR_Box) (generate_output__FlatTree_40));
    }
    {
      generate_output__process_prof_node_list_7_p_0(generate_output__ProfNodeList_17, generate_output__Prof_6, generate_output__VeryVerbose_10, generate_output__OutputProf0_18, &generate_output__OutputProf_19);
    }
    generate_output__InfoMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__OutputProf_19, (MR_Integer) 0)));
    generate_output__CallTree_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__OutputProf_19, (MR_Integer) 1)));
    generate_output__FlatTree_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), generate_output__OutputProf_19, (MR_Integer) 2)));
    generate_output__TypeCtorInfo_35_35 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      generate_output__CallList0_23 = mercury__rbtree__values_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_float_0, generate_output__TypeCtorInfo_35_35, generate_output__CallTree_21);
    }
    {
      generate_output__FlatList0_24 = mercury__rbtree__values_1_f_0((MR_Word) &generate_output__generate_output__type_ctor_info_flat_key_0, generate_output__TypeCtorInfo_35_35, generate_output__FlatTree_22);
    }
    generate_output__TypeCtorInfo_9_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    {
      mercury__list__reverse_2_p_0(generate_output__TypeCtorInfo_9_50, generate_output__CallList0_23, &generate_output__CallList_25);
    }
    {
      generate_output__V_49_49 = mercury__map__init_0_f_0(generate_output__TypeCtorInfo_9_50, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0);
    }
    {
      generate_output__assign_index_numbers_2_4_p_0(generate_output__CallList_25, (MR_Integer) 1, generate_output__V_49_49, generate_output__IndexMap_7);
    }
    {
      generate_output__FlatList_26 = mercury__list__reverse_1_f_0(generate_output__TypeCtorInfo_35_35, generate_output__FlatList0_24);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *generate_output__Output_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (generate_output__InfoMap_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (generate_output__CallList_25));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (generate_output__FlatList_26));
    }
  }
}

void mercury__generate_output__init(void)
{
}

void mercury__generate_output__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&generate_output__generate_output__type_ctor_info_flat_key_0);
	MR_register_type_ctor_info(&generate_output__generate_output__type_ctor_info_profiling_0);
}

void mercury__generate_output__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module generate_output. */
