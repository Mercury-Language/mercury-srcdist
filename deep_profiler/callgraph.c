/*
** Automatically generated from `callgraph.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module callgraph. */
/* :- implementation. */

/*
INIT mercury__callgraph__init
ENDINIT
*/

#include "callgraph.mih"


#include "array.mih"
#include "array_util.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "cliques.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "exclude.mih"
#include "int.mih"
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




#line 80 "callgraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

#line 83 "callgraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0;

#line 102 "callgraph.m"
static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0_1(
#line 102 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 102 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 102 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_2);

#line 74 "callgraph.m"
static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0(
#line 74 "callgraph.m"
  MR_Integer callgraph__Depth_7,
#line 74 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Xs_0_12,
#line 74 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Xs_13,
#line 74 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_A_0_14,
#line 74 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_A_15);

#line 62 "callgraph.m"
static void MR_CALL 
callgraph__foldl__ho1_4_p_0(
#line 62 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_L_0_10,
#line 62 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_A_0_11,
#line 62 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_A_12);

#line 173 "callgraph.m"
static void MR_CALL 
callgraph__index_clique_member_4_p_0(
#line 173 "callgraph.m"
  MR_Integer callgraph__CliqueNum_5,
#line 173 "callgraph.m"
  MR_Word callgraph__PDPtr_6,
#line 173 "callgraph.m"
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_10,
#line 173 "callgraph.m"
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_11);

#line 170 "callgraph.m"
static void MR_CALL 
callgraph__index_clique_4_p_0_1(
#line 170 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 170 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 170 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 170 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_3);

#line 166 "callgraph.m"
static void MR_CALL 
callgraph__index_clique_4_p_0(
#line 166 "callgraph.m"
  MR_Integer callgraph__CliqueNum_5,
#line 166 "callgraph.m"
  MR_Word callgraph__CliqueMembers_6,
#line 166 "callgraph.m"
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_8,
#line 166 "callgraph.m"
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_9);

#line 139 "callgraph.m"
static void MR_CALL 
callgraph__add_csd_arcs_5_p_0(
#line 139 "callgraph.m"
  MR_Word callgraph__InitDeep_6,
#line 139 "callgraph.m"
  MR_Integer callgraph__FromPDI_7,
#line 139 "callgraph.m"
  MR_Word callgraph__CSDPtr_8,
#line 139 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Graph_0_15,
#line 139 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Graph_16);

#line 136 "callgraph.m"
static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0_1(
#line 136 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 136 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 136 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 136 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_3);

#line 126 "callgraph.m"
static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0(
#line 126 "callgraph.m"
  MR_Word callgraph__InitDeep_6,
#line 126 "callgraph.m"
  MR_Integer callgraph__FromPDI_7,
#line 126 "callgraph.m"
  MR_Word callgraph__CallSiteSlot_8,
#line 126 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Graph_0_14,
#line 126 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Graph_15);

#line 123 "callgraph.m"
static void MR_CALL 
callgraph__add_pd_arcs_5_p_0_1(
#line 123 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 123 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 123 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 123 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_3);

#line 117 "callgraph.m"
static void MR_CALL 
callgraph__add_pd_arcs_5_p_0(
#line 117 "callgraph.m"
  MR_Word callgraph__InitDeep_6,
#line 117 "callgraph.m"
  MR_Integer callgraph__PDI_7,
#line 117 "callgraph.m"
  MR_Word callgraph__PD_8,
#line 117 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Graph_0_12,
#line 117 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Graph_13);

#line 104 "callgraph.m"
static void MR_CALL 
callgraph__pdi_to_pdptr_2_p_0(
#line 104 "callgraph.m"
  MR_Integer callgraph__PDI_3,
#line 104 "callgraph.m"
  MR_Word * callgraph__HeadVar__2_2);

#line 164 "callgraph.m"
static void MR_CALL 
callgraph__make_clique_indexes_4_p_0_1(
#line 164 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 164 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 164 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 164 "callgraph.m"
  MR_Box callgraph__wrapper_arg_3,
#line 164 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_4);

#line 114 "callgraph.m"
static void MR_CALL 
callgraph__find_cliques_2_p_0_1(
#line 114 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 114 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 114 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 114 "callgraph.m"
  MR_Box callgraph__wrapper_arg_3,
#line 114 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_4);


static /* final */ const MR_Box callgraph_scalar_common_1[2][2];

static /* final */ const MR_Box callgraph_scalar_common_2[3][8];

static /* final */ const MR_Box callgraph_scalar_common_3[2][7];

static /* final */ const MR_Box callgraph_scalar_common_4[2][3];

static /* final */ const MR_Box callgraph_scalar_common_5[1][5];




static /* final */ const MR_Box callgraph_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_2[3][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_3[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_4[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&callgraph_scalar_common_3[0])),
    ((MR_Box) (callgraph__make_clique_indexes_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&callgraph_scalar_common_5[0])),
    ((MR_Box) (callgraph__foldl_2__ho2_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "profile.mh"
#include "profile.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 389 "callgraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

#line 397 "callgraph.c"
static const MR_FA_PseudoTypeInfo_Struct1 callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

#line 102 "callgraph.m"
static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0_1(
#line 102 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 102 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 102 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_2)
#line 102 "callgraph.m"
{
#line 102 "callgraph.m"
  {
#line 102 "callgraph.m"
    MR_Box callgraph__closure = callgraph__closure_arg;
#line 102 "callgraph.m"
    MR_Word callgraph__conv0_HeadVar__2_2;

#line 102 "callgraph.m"
    {
#line 102 "callgraph.m"
      callgraph__pdi_to_pdptr_2_p_0(((MR_Integer) callgraph__wrapper_arg_1), &callgraph__conv0_HeadVar__2_2);
    }
#line 102 "callgraph.m"
    *callgraph__wrapper_arg_2 = ((MR_Box) (callgraph__conv0_HeadVar__2_2));
#line 102 "callgraph.m"
  }
#line 102 "callgraph.m"
}

#line 74 "callgraph.m"
static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0(
#line 74 "callgraph.m"
  MR_Integer callgraph__Depth_7,
#line 74 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Xs_0_12,
#line 74 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Xs_13,
#line 74 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_A_0_14,
#line 74 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_A_15)
#line 74 "callgraph.m"
{
#line 86 "callgraph.m"
  while (MR_TRUE)
#line 86 "callgraph.m"
    {
#line 86 "callgraph.m"
      /* tailcall optimized into a loop */
#line 86 "callgraph.m"
      {
#line 86 "callgraph.m"
        MR_bool callgraph__succeeded = (callgraph__Depth_7 > (MR_Integer) 0);

#line 86 "callgraph.m"
        if (callgraph__succeeded)
#line 81 "callgraph.m"
          if ((callgraph__STATE_VARIABLE_Xs_0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 80 "callgraph.m"
            {
#line 80 "callgraph.m"
              *callgraph__STATE_VARIABLE_Xs_13 = callgraph__STATE_VARIABLE_Xs_0_12;
#line 80 "callgraph.m"
              *callgraph__STATE_VARIABLE_A_15 = callgraph__STATE_VARIABLE_A_0_14;
#line 80 "callgraph.m"
            }
#line 81 "callgraph.m"
          else
#line 82 "callgraph.m"
            {
#line 82 "callgraph.m"
              MR_Word callgraph__TypeCtorInfo_7_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 82 "callgraph.m"
              MR_Word callgraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_Xs_0_12, (MR_Integer) 0)));
#line 82 "callgraph.m"
              MR_Word callgraph__STATE_VARIABLE_Xs_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_Xs_0_12, (MR_Integer) 1)));
#line 82 "callgraph.m"
              MR_Word callgraph__STATE_VARIABLE_A_18_18;
#line 82 "callgraph.m"
              MR_Integer callgraph__V_19_19;
#line 82 "callgraph.m"
              MR_Word callgraph__PDPtrList_28;
#line 82 "callgraph.m"
              MR_Word callgraph__PDIList_31;

#line 101 "callgraph.m"
              {
#line 101 "callgraph.m"
                mercury__set__to_sorted_list_2_p_0(callgraph__TypeCtorInfo_7_33, callgraph__X_11, &callgraph__PDIList_31);
              }
#line 102 "callgraph.m"
              {
#line 102 "callgraph.m"
                mercury__list__map_3_p_0(callgraph__TypeCtorInfo_7_33, (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &callgraph_scalar_common_4[1], callgraph__PDIList_31, &callgraph__PDPtrList_28);
              }
#line 95 "callgraph.m"
              {
#line 95 "callgraph.m"
                callgraph__STATE_VARIABLE_A_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 95 "callgraph.m"
                MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_A_18_18, 0) = ((MR_Box) (callgraph__PDPtrList_28));
#line 95 "callgraph.m"
                MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_A_18_18, 1) = ((MR_Box) (callgraph__STATE_VARIABLE_A_0_14));
#line 95 "callgraph.m"
              }
#line 84 "callgraph.m"
              callgraph__V_19_19 = (callgraph__Depth_7 - (MR_Integer) 1);
#line 84 "callgraph.m"
              /* direct tailcall eliminated */
#line 84 "callgraph.m"
              {
#line 84 "callgraph.m"
                MR_Integer callgraph__Depth__tmp_copy_7 = callgraph__V_19_19;
#line 84 "callgraph.m"
                MR_Word callgraph__STATE_VARIABLE_Xs_0__tmp_copy_12 = callgraph__STATE_VARIABLE_Xs_17_17;
#line 84 "callgraph.m"
                MR_Word callgraph__STATE_VARIABLE_A_0__tmp_copy_14 = callgraph__STATE_VARIABLE_A_18_18;

#line 84 "callgraph.m"
                callgraph__STATE_VARIABLE_A_0_14 = callgraph__STATE_VARIABLE_A_0__tmp_copy_14;
#line 84 "callgraph.m"
                callgraph__STATE_VARIABLE_Xs_0_12 = callgraph__STATE_VARIABLE_Xs_0__tmp_copy_12;
#line 84 "callgraph.m"
                callgraph__Depth_7 = callgraph__Depth__tmp_copy_7;
#line 84 "callgraph.m"
              }
#line 84 "callgraph.m"
              continue;
#line 82 "callgraph.m"
            }
#line 86 "callgraph.m"
        else
#line 87 "callgraph.m"
          {
#line 87 "callgraph.m"
            *callgraph__STATE_VARIABLE_A_15 = callgraph__STATE_VARIABLE_A_0_14;
#line 87 "callgraph.m"
            *callgraph__STATE_VARIABLE_Xs_13 = callgraph__STATE_VARIABLE_Xs_0_12;
#line 87 "callgraph.m"
          }
#line 86 "callgraph.m"
      }
#line 86 "callgraph.m"
      break;
#line 86 "callgraph.m"
    }
#line 74 "callgraph.m"
}

#line 62 "callgraph.m"
static void MR_CALL 
callgraph__foldl__ho1_4_p_0(
#line 62 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_L_0_10,
#line 62 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_A_0_11,
#line 62 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_A_12)
#line 62 "callgraph.m"
{
#line 65 "callgraph.m"
  while (MR_TRUE)
#line 65 "callgraph.m"
    {
#line 65 "callgraph.m"
      /* tailcall optimized into a loop */
#line 65 "callgraph.m"
      {
#line 65 "callgraph.m"
        MR_bool callgraph__succeeded;
#line 65 "callgraph.m"
        MR_Word callgraph__STATE_VARIABLE_L_14_14;
#line 65 "callgraph.m"
        MR_Word callgraph__STATE_VARIABLE_A_15_15;

#line 66 "callgraph.m"
        {
#line 66 "callgraph.m"
          callgraph__foldl_2__ho2_6_p_0((MR_Integer) 100000, callgraph__STATE_VARIABLE_L_0_10, &callgraph__STATE_VARIABLE_L_14_14, callgraph__STATE_VARIABLE_A_0_11, &callgraph__STATE_VARIABLE_A_15_15);
        }
#line 69 "callgraph.m"
        if ((callgraph__STATE_VARIABLE_L_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "callgraph.m"
          *callgraph__STATE_VARIABLE_A_12 = callgraph__STATE_VARIABLE_A_15_15;
#line 69 "callgraph.m"
        else
#line 71 "callgraph.m"
          {
#line 71 "callgraph.m"
            /* direct tailcall eliminated */
#line 71 "callgraph.m"
            {
#line 71 "callgraph.m"
              MR_Word callgraph__STATE_VARIABLE_L_0__tmp_copy_10 = callgraph__STATE_VARIABLE_L_14_14;
#line 71 "callgraph.m"
              MR_Word callgraph__STATE_VARIABLE_A_0__tmp_copy_11 = callgraph__STATE_VARIABLE_A_15_15;

#line 71 "callgraph.m"
              callgraph__STATE_VARIABLE_A_0_11 = callgraph__STATE_VARIABLE_A_0__tmp_copy_11;
#line 71 "callgraph.m"
              callgraph__STATE_VARIABLE_L_0_10 = callgraph__STATE_VARIABLE_L_0__tmp_copy_10;
#line 71 "callgraph.m"
            }
#line 71 "callgraph.m"
            continue;
#line 71 "callgraph.m"
          }
#line 65 "callgraph.m"
      }
#line 65 "callgraph.m"
      break;
#line 65 "callgraph.m"
    }
#line 62 "callgraph.m"
}

#line 173 "callgraph.m"
static void MR_CALL 
callgraph__index_clique_member_4_p_0(
#line 173 "callgraph.m"
  MR_Integer callgraph__CliqueNum_5,
#line 173 "callgraph.m"
  MR_Word callgraph__PDPtr_6,
#line 173 "callgraph.m"
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_10,
#line 173 "callgraph.m"
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_11)
#line 173 "callgraph.m"
{
#line 176 "callgraph.m"
  {
#line 176 "callgraph.m"
    MR_bool callgraph__succeeded;
#line 176 "callgraph.m"
    MR_Integer callgraph__PDI_8 = (MR_Integer) callgraph__PDPtr_6;
#line 176 "callgraph.m"
    MR_Word callgraph__V_14_14 = (MR_Word) callgraph__CliqueNum_5;
#line 181 "callgraph.m"
    MR_ArrayPtr callgraph__conv0_STATE_VARIABLE_CliqueIndex_11;

#line 181 "callgraph.m"
    {
#line 181 "callgraph.m"
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, callgraph__PDI_8, ((MR_Box) (callgraph__V_14_14)), (MR_ArrayPtr) callgraph__STATE_VARIABLE_CliqueIndex_0_10, &callgraph__conv0_STATE_VARIABLE_CliqueIndex_11);
    }
#line 181 "callgraph.m"
    *callgraph__STATE_VARIABLE_CliqueIndex_11 = (MR_ArrayPtr) callgraph__conv0_STATE_VARIABLE_CliqueIndex_11;
#line 176 "callgraph.m"
  }
#line 173 "callgraph.m"
}

#line 170 "callgraph.m"
static void MR_CALL 
callgraph__index_clique_4_p_0_1(
#line 170 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 170 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 170 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 170 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_3)
#line 170 "callgraph.m"
{
#line 170 "callgraph.m"
  {
#line 170 "callgraph.m"
    MR_Box callgraph__closure = callgraph__closure_arg;
#line 170 "callgraph.m"
    MR_ArrayPtr callgraph__conv0_STATE_VARIABLE_CliqueIndex_11;

#line 170 "callgraph.m"
    {
#line 170 "callgraph.m"
      callgraph__index_clique_member_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Word) callgraph__wrapper_arg_1), ((MR_ArrayPtr) callgraph__wrapper_arg_2), &callgraph__conv0_STATE_VARIABLE_CliqueIndex_11);
    }
#line 170 "callgraph.m"
    *callgraph__wrapper_arg_3 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_CliqueIndex_11));
#line 170 "callgraph.m"
  }
#line 170 "callgraph.m"
}

#line 166 "callgraph.m"
static void MR_CALL 
callgraph__index_clique_4_p_0(
#line 166 "callgraph.m"
  MR_Integer callgraph__CliqueNum_5,
#line 166 "callgraph.m"
  MR_Word callgraph__CliqueMembers_6,
#line 166 "callgraph.m"
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_8,
#line 166 "callgraph.m"
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_9)
#line 166 "callgraph.m"
{
#line 169 "callgraph.m"
  {
#line 169 "callgraph.m"
    MR_bool callgraph__succeeded;
#line 169 "callgraph.m"
    MR_Word callgraph__V_10_10;
#line 170 "callgraph.m"
    MR_ArrayPtr callgraph__conv1_STATE_VARIABLE_CliqueIndex_9;

#line 170 "callgraph.m"
    {
#line 170 "callgraph.m"
      callgraph__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 170 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 0) = ((MR_Box) (&callgraph_scalar_common_3[1]));
#line 170 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 1) = ((MR_Box) (callgraph__index_clique_4_p_0_1));
#line 170 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 170 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 3) = ((MR_Box) (callgraph__CliqueNum_5));
#line 170 "callgraph.m"
    }
#line 170 "callgraph.m"
    {
#line 170 "callgraph.m"
      array_util__array_list_foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, callgraph__V_10_10, callgraph__CliqueMembers_6, (MR_ArrayPtr) callgraph__STATE_VARIABLE_CliqueIndex_0_8, &callgraph__conv1_STATE_VARIABLE_CliqueIndex_9);
    }
#line 170 "callgraph.m"
    *callgraph__STATE_VARIABLE_CliqueIndex_9 = (MR_ArrayPtr) callgraph__conv1_STATE_VARIABLE_CliqueIndex_9;
#line 169 "callgraph.m"
  }
#line 166 "callgraph.m"
}

#line 139 "callgraph.m"
static void MR_CALL 
callgraph__add_csd_arcs_5_p_0(
#line 139 "callgraph.m"
  MR_Word callgraph__InitDeep_6,
#line 139 "callgraph.m"
  MR_Integer callgraph__FromPDI_7,
#line 139 "callgraph.m"
  MR_Word callgraph__CSDPtr_8,
#line 139 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Graph_0_15,
#line 139 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Graph_16)
#line 139 "callgraph.m"
{
#line 142 "callgraph.m"
  {
#line 142 "callgraph.m"
    MR_bool callgraph__succeeded;
#line 142 "callgraph.m"
    MR_Integer callgraph__CSDI_10 = (MR_Integer) callgraph__CSDPtr_8;

#line 144 "callgraph.m"
    callgraph__succeeded = (callgraph__CSDI_10 > (MR_Integer) 0);
#line 152 "callgraph.m"
    if (callgraph__succeeded)
#line 145 "callgraph.m"
      {
#line 145 "callgraph.m"
        MR_Word callgraph__CSD_11;
#line 145 "callgraph.m"
        MR_Word callgraph__ToPDPtr_12;
#line 145 "callgraph.m"
        MR_Integer callgraph__ToPDI_13;
#line 145 "callgraph.m"
        MR_ArrayPtr callgraph__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 2)));
#line 145 "callgraph.m"
        MR_Word callgraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 0)));
#line 145 "callgraph.m"
        MR_Word callgraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 1)));
#line 145 "callgraph.m"
        MR_ArrayPtr callgraph__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 3)));
#line 145 "callgraph.m"
        MR_ArrayPtr callgraph__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 4)));
#line 145 "callgraph.m"
        MR_ArrayPtr callgraph__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 5)));
#line 145 "callgraph.m"
        MR_Box callgraph__conv0_CSD_11;
#line 146 "callgraph.m"
        MR_Word callgraph__V_27_27;
#line 146 "callgraph.m"
        MR_Word callgraph__V_28_28;

#line 145 "callgraph.m"
        {
#line 145 "callgraph.m"
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) callgraph__V_18_18, callgraph__CSDI_10, &callgraph__conv0_CSD_11);
        }
#line 145 "callgraph.m"
        callgraph__CSD_11 = ((MR_Word) callgraph__conv0_CSD_11);
#line 146 "callgraph.m"
        callgraph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CSD_11, (MR_Integer) 0)));
#line 146 "callgraph.m"
        callgraph__ToPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CSD_11, (MR_Integer) 1)));
#line 146 "callgraph.m"
        callgraph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CSD_11, (MR_Integer) 2)));
#line 147 "callgraph.m"
        callgraph__ToPDI_13 = (MR_Integer) callgraph__ToPDPtr_12;
#line 151 "callgraph.m"
        {
#line 151 "callgraph.m"
          cliques__add_arc_4_p_0(callgraph__STATE_VARIABLE_Graph_0_15, callgraph__FromPDI_7, callgraph__ToPDI_13, callgraph__STATE_VARIABLE_Graph_16);
#line 151 "callgraph.m"
          return;
        }
#line 145 "callgraph.m"
      }
#line 152 "callgraph.m"
    else
#line 151 "callgraph.m"
      *callgraph__STATE_VARIABLE_Graph_16 = callgraph__STATE_VARIABLE_Graph_0_15;
#line 142 "callgraph.m"
  }
#line 139 "callgraph.m"
}

#line 136 "callgraph.m"
static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0_1(
#line 136 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 136 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 136 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 136 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_3)
#line 136 "callgraph.m"
{
#line 136 "callgraph.m"
  {
#line 136 "callgraph.m"
    MR_Box callgraph__closure = callgraph__closure_arg;
#line 136 "callgraph.m"
    MR_Word callgraph__conv0_STATE_VARIABLE_Graph_16;

#line 136 "callgraph.m"
    {
#line 136 "callgraph.m"
      callgraph__add_csd_arcs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 4))), ((MR_Word) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), &callgraph__conv0_STATE_VARIABLE_Graph_16);
    }
#line 136 "callgraph.m"
    *callgraph__wrapper_arg_3 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_Graph_16));
#line 136 "callgraph.m"
  }
#line 136 "callgraph.m"
}

#line 126 "callgraph.m"
static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0(
#line 126 "callgraph.m"
  MR_Word callgraph__InitDeep_6,
#line 126 "callgraph.m"
  MR_Integer callgraph__FromPDI_7,
#line 126 "callgraph.m"
  MR_Word callgraph__CallSiteSlot_8,
#line 126 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Graph_0_14,
#line 126 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Graph_15)
#line 126 "callgraph.m"
{
#line 131 "callgraph.m"
  {
#line 131 "callgraph.m"
    MR_bool callgraph__succeeded;

#line 131 "callgraph.m"
    if (((MR_tag((MR_Word) callgraph__CallSiteSlot_8)) == (MR_mktag((MR_Integer) 1))))
#line 134 "callgraph.m"
      {
#line 134 "callgraph.m"
        MR_Word callgraph__TypeCtorInfo_19_19 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
#line 134 "callgraph.m"
        MR_ArrayPtr callgraph__CSDPtrArray_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), callgraph__CallSiteSlot_8, (MR_Integer) 1)));
#line 134 "callgraph.m"
        MR_Word callgraph__CSDPtrs_13;
#line 134 "callgraph.m"
        MR_Word callgraph__V_16_16;
#line 134 "callgraph.m"
        MR_Word callgraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), callgraph__CallSiteSlot_8, (MR_Integer) 0)));
#line 136 "callgraph.m"
        MR_Box callgraph__conv1_STATE_VARIABLE_Graph_15;

#line 135 "callgraph.m"
        {
#line 135 "callgraph.m"
          mercury__array__to_list_2_p_0(callgraph__TypeCtorInfo_19_19, (MR_ArrayPtr) callgraph__CSDPtrArray_12, &callgraph__CSDPtrs_13);
        }
#line 136 "callgraph.m"
        {
#line 136 "callgraph.m"
          callgraph__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 136 "callgraph.m"
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 0) = ((MR_Box) (&callgraph_scalar_common_2[2]));
#line 136 "callgraph.m"
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 1) = ((MR_Box) (callgraph__add_call_site_arcs_5_p_0_1));
#line 136 "callgraph.m"
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 136 "callgraph.m"
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 3) = ((MR_Box) (callgraph__InitDeep_6));
#line 136 "callgraph.m"
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 4) = ((MR_Box) (callgraph__FromPDI_7));
#line 136 "callgraph.m"
        }
#line 136 "callgraph.m"
        {
#line 136 "callgraph.m"
          mercury__list__foldl_4_p_0(callgraph__TypeCtorInfo_19_19, (MR_Word) &cliques__cliques__type_ctor_info_graph_0, callgraph__V_16_16, callgraph__CSDPtrs_13, ((MR_Box) (callgraph__STATE_VARIABLE_Graph_0_14)), &callgraph__conv1_STATE_VARIABLE_Graph_15);
        }
#line 136 "callgraph.m"
        *callgraph__STATE_VARIABLE_Graph_15 = ((MR_Word) callgraph__conv1_STATE_VARIABLE_Graph_15);
#line 134 "callgraph.m"
      }
#line 131 "callgraph.m"
    else
#line 131 "callgraph.m"
      {
#line 131 "callgraph.m"
        MR_Word callgraph__CSDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CallSiteSlot_8, (MR_Integer) 0)));

#line 132 "callgraph.m"
        {
#line 132 "callgraph.m"
          callgraph__add_csd_arcs_5_p_0(callgraph__InitDeep_6, callgraph__FromPDI_7, callgraph__CSDPtr_10, callgraph__STATE_VARIABLE_Graph_0_14, callgraph__STATE_VARIABLE_Graph_15);
#line 132 "callgraph.m"
          return;
        }
#line 131 "callgraph.m"
      }
#line 131 "callgraph.m"
  }
#line 126 "callgraph.m"
}

#line 123 "callgraph.m"
static void MR_CALL 
callgraph__add_pd_arcs_5_p_0_1(
#line 123 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 123 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 123 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 123 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_3)
#line 123 "callgraph.m"
{
#line 123 "callgraph.m"
  {
#line 123 "callgraph.m"
    MR_Box callgraph__closure = callgraph__closure_arg;
#line 123 "callgraph.m"
    MR_Word callgraph__conv0_STATE_VARIABLE_Graph_15;

#line 123 "callgraph.m"
    {
#line 123 "callgraph.m"
      callgraph__add_call_site_arcs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 4))), ((MR_Word) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), &callgraph__conv0_STATE_VARIABLE_Graph_15);
    }
#line 123 "callgraph.m"
    *callgraph__wrapper_arg_3 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_Graph_15));
#line 123 "callgraph.m"
  }
#line 123 "callgraph.m"
}

#line 117 "callgraph.m"
static void MR_CALL 
callgraph__add_pd_arcs_5_p_0(
#line 117 "callgraph.m"
  MR_Word callgraph__InitDeep_6,
#line 117 "callgraph.m"
  MR_Integer callgraph__PDI_7,
#line 117 "callgraph.m"
  MR_Word callgraph__PD_8,
#line 117 "callgraph.m"
  MR_Word callgraph__STATE_VARIABLE_Graph_0_12,
#line 117 "callgraph.m"
  MR_Word * callgraph__STATE_VARIABLE_Graph_13)
#line 117 "callgraph.m"
{
#line 120 "callgraph.m"
  {
#line 120 "callgraph.m"
    MR_bool callgraph__succeeded;
#line 120 "callgraph.m"
    MR_Word callgraph__TypeCtorInfo_18_18 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
#line 120 "callgraph.m"
    MR_ArrayPtr callgraph__CallSiteRefArray_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__PD_8, (MR_Integer) 1)));
#line 120 "callgraph.m"
    MR_Word callgraph__CallSiteRefList_11;
#line 120 "callgraph.m"
    MR_Word callgraph__V_14_14;
#line 121 "callgraph.m"
    MR_Word callgraph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__PD_8, (MR_Integer) 0)));
#line 121 "callgraph.m"
    MR_Word callgraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__PD_8, (MR_Integer) 2)));
#line 123 "callgraph.m"
    MR_Box callgraph__conv1_STATE_VARIABLE_Graph_13;

#line 122 "callgraph.m"
    {
#line 122 "callgraph.m"
      mercury__array__to_list_2_p_0(callgraph__TypeCtorInfo_18_18, (MR_ArrayPtr) callgraph__CallSiteRefArray_10, &callgraph__CallSiteRefList_11);
    }
#line 123 "callgraph.m"
    {
#line 123 "callgraph.m"
      callgraph__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 123 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 0) = ((MR_Box) (&callgraph_scalar_common_2[1]));
#line 123 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 1) = ((MR_Box) (callgraph__add_pd_arcs_5_p_0_1));
#line 123 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 123 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 3) = ((MR_Box) (callgraph__InitDeep_6));
#line 123 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 4) = ((MR_Box) (callgraph__PDI_7));
#line 123 "callgraph.m"
    }
#line 123 "callgraph.m"
    {
#line 123 "callgraph.m"
      mercury__list__foldl_4_p_0(callgraph__TypeCtorInfo_18_18, (MR_Word) &cliques__cliques__type_ctor_info_graph_0, callgraph__V_14_14, callgraph__CallSiteRefList_11, ((MR_Box) (callgraph__STATE_VARIABLE_Graph_0_12)), &callgraph__conv1_STATE_VARIABLE_Graph_13);
    }
#line 123 "callgraph.m"
    *callgraph__STATE_VARIABLE_Graph_13 = ((MR_Word) callgraph__conv1_STATE_VARIABLE_Graph_13);
#line 120 "callgraph.m"
  }
#line 117 "callgraph.m"
}

#line 104 "callgraph.m"
static void MR_CALL 
callgraph__pdi_to_pdptr_2_p_0(
#line 104 "callgraph.m"
  MR_Integer callgraph__PDI_3,
#line 104 "callgraph.m"
  MR_Word * callgraph__HeadVar__2_2)
#line 104 "callgraph.m"
{
#line 106 "callgraph.m"
  {
#line 106 "callgraph.m"
    MR_bool callgraph__succeeded;

#line 106 "callgraph.m"
    *callgraph__HeadVar__2_2 = (MR_Word) callgraph__PDI_3;
#line 106 "callgraph.m"
  }
#line 104 "callgraph.m"
}

#line 164 "callgraph.m"
static void MR_CALL 
callgraph__make_clique_indexes_4_p_0_1(
#line 164 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 164 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 164 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 164 "callgraph.m"
  MR_Box callgraph__wrapper_arg_3,
#line 164 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_4)
#line 164 "callgraph.m"
{
#line 164 "callgraph.m"
  {
#line 164 "callgraph.m"
    MR_Box callgraph__closure = callgraph__closure_arg;
#line 164 "callgraph.m"
    MR_ArrayPtr callgraph__conv2_STATE_VARIABLE_CliqueIndex_9;

#line 164 "callgraph.m"
    {
#line 164 "callgraph.m"
      callgraph__index_clique_4_p_0(((MR_Integer) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), ((MR_ArrayPtr) callgraph__wrapper_arg_3), &callgraph__conv2_STATE_VARIABLE_CliqueIndex_9);
    }
#line 164 "callgraph.m"
    *callgraph__wrapper_arg_4 = ((MR_Box) (callgraph__conv2_STATE_VARIABLE_CliqueIndex_9));
#line 164 "callgraph.m"
  }
#line 164 "callgraph.m"
}

#line 29 "callgraph.m"
void MR_CALL 
callgraph__make_clique_indexes_4_p_0(
#line 29 "callgraph.m"
  MR_Integer callgraph__NPDs_5,
#line 29 "callgraph.m"
  MR_Word callgraph__CliqueList_6,
#line 29 "callgraph.m"
  MR_ArrayPtr * callgraph__Cliques_7,
#line 29 "callgraph.m"
  MR_ArrayPtr * callgraph__CliqueIndex_8)
#line 29 "callgraph.m"
{
#line 158 "callgraph.m"
  {
#line 158 "callgraph.m"
    MR_bool callgraph__succeeded;
#line 158 "callgraph.m"
    MR_Word callgraph__TypeInfo_13_13 = (MR_Word) &callgraph_scalar_common_1[0];
#line 158 "callgraph.m"
    MR_ArrayPtr callgraph__CliqueIndex0_9;
#line 159 "callgraph.m"
    MR_ArrayPtr callgraph__conv0_Cliques_7;
#line 160 "callgraph.m"
    MR_ArrayPtr callgraph__conv1_CliqueIndex0_9;
#line 164 "callgraph.m"
    MR_Box callgraph__conv3_CliqueIndex_8;

#line 159 "callgraph.m"
    {
#line 159 "callgraph.m"
      callgraph__conv0_Cliques_7 = mercury__array__array_1_f_0(callgraph__TypeInfo_13_13, callgraph__CliqueList_6);
    }
#line 159 "callgraph.m"
    *callgraph__Cliques_7 = (MR_ArrayPtr) callgraph__conv0_Cliques_7;
#line 160 "callgraph.m"
    {
#line 160 "callgraph.m"
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, callgraph__NPDs_5, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &callgraph__conv1_CliqueIndex0_9);
    }
#line 160 "callgraph.m"
    callgraph__CliqueIndex0_9 = (MR_ArrayPtr) callgraph__conv1_CliqueIndex0_9;
#line 164 "callgraph.m"
    {
#line 164 "callgraph.m"
      array_util__array_foldl_from_1_4_p_1(callgraph__TypeInfo_13_13, (MR_Word) &callgraph_scalar_common_1[1], (MR_Word) &callgraph_scalar_common_4[0], (MR_ArrayPtr) *callgraph__Cliques_7, ((MR_Box) (callgraph__CliqueIndex0_9)), &callgraph__conv3_CliqueIndex_8);
    }
#line 164 "callgraph.m"
    *callgraph__CliqueIndex_8 = ((MR_ArrayPtr) callgraph__conv3_CliqueIndex_8);
#line 158 "callgraph.m"
  }
#line 29 "callgraph.m"
}

#line 114 "callgraph.m"
static void MR_CALL 
callgraph__find_cliques_2_p_0_1(
#line 114 "callgraph.m"
  MR_Box callgraph__closure_arg,
#line 114 "callgraph.m"
  MR_Box callgraph__wrapper_arg_1,
#line 114 "callgraph.m"
  MR_Box callgraph__wrapper_arg_2,
#line 114 "callgraph.m"
  MR_Box callgraph__wrapper_arg_3,
#line 114 "callgraph.m"
  MR_Box * callgraph__wrapper_arg_4)
#line 114 "callgraph.m"
{
#line 114 "callgraph.m"
  {
#line 114 "callgraph.m"
    MR_Box callgraph__closure = callgraph__closure_arg;
#line 114 "callgraph.m"
    MR_Word callgraph__conv0_STATE_VARIABLE_Graph_13;

#line 114 "callgraph.m"
    {
#line 114 "callgraph.m"
      callgraph__add_pd_arcs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Integer) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), ((MR_Word) callgraph__wrapper_arg_3), &callgraph__conv0_STATE_VARIABLE_Graph_13);
    }
#line 114 "callgraph.m"
    *callgraph__wrapper_arg_4 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_Graph_13));
#line 114 "callgraph.m"
  }
#line 114 "callgraph.m"
}

#line 26 "callgraph.m"
void MR_CALL 
callgraph__find_cliques_2_p_0(
#line 26 "callgraph.m"
  MR_Word callgraph__InitDeep_3,
#line 26 "callgraph.m"
  MR_Word * callgraph__BottomUpPDPtrCliqueList_4)
#line 26 "callgraph.m"
{
#line 49 "callgraph.m"
  {
#line 49 "callgraph.m"
    MR_bool callgraph__succeeded;
#line 49 "callgraph.m"
    MR_Word callgraph__Graph_5;
#line 49 "callgraph.m"
    MR_Word callgraph__TopDownPDICliqueList_6;
#line 49 "callgraph.m"
    MR_Word callgraph__Graph0_16;
#line 49 "callgraph.m"
    MR_Word callgraph__V_17_17;
#line 49 "callgraph.m"
    MR_ArrayPtr callgraph__V_18_18;
#line 114 "callgraph.m"
    MR_Word callgraph__V_19_19;
#line 114 "callgraph.m"
    MR_Word callgraph__V_20_20;
#line 114 "callgraph.m"
    MR_ArrayPtr callgraph__V_21_21;
#line 114 "callgraph.m"
    MR_ArrayPtr callgraph__V_22_22;
#line 114 "callgraph.m"
    MR_ArrayPtr callgraph__V_23_23;
#line 114 "callgraph.m"
    MR_Box callgraph__conv1_Graph_5;

#line 113 "callgraph.m"
    {
#line 113 "callgraph.m"
      cliques__init_1_p_0(&callgraph__Graph0_16);
    }
#line 114 "callgraph.m"
    {
#line 114 "callgraph.m"
      callgraph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 114 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 0) = ((MR_Box) (&callgraph_scalar_common_2[0]));
#line 114 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 1) = ((MR_Box) (callgraph__find_cliques_2_p_0_1));
#line 114 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 114 "callgraph.m"
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 3) = ((MR_Box) (callgraph__InitDeep_3));
#line 114 "callgraph.m"
    }
#line 114 "callgraph.m"
    callgraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 0)));
#line 114 "callgraph.m"
    callgraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 1)));
#line 114 "callgraph.m"
    callgraph__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 2)));
#line 114 "callgraph.m"
    callgraph__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 3)));
#line 114 "callgraph.m"
    callgraph__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 4)));
#line 114 "callgraph.m"
    callgraph__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 5)));
#line 114 "callgraph.m"
    {
#line 114 "callgraph.m"
      array_util__array_foldl_from_1_4_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &cliques__cliques__type_ctor_info_graph_0, callgraph__V_17_17, (MR_ArrayPtr) callgraph__V_18_18, ((MR_Box) (callgraph__Graph0_16)), &callgraph__conv1_Graph_5);
    }
#line 114 "callgraph.m"
    callgraph__Graph_5 = ((MR_Word) callgraph__conv1_Graph_5);
#line 51 "callgraph.m"
    {
#line 51 "callgraph.m"
      cliques__topological_sort_2_p_0(callgraph__Graph_5, &callgraph__TopDownPDICliqueList_6);
    }
#line 57 "callgraph.m"
    {
#line 57 "callgraph.m"
      callgraph__foldl__ho1_4_p_0(callgraph__TopDownPDICliqueList_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), callgraph__BottomUpPDPtrCliqueList_4);
#line 57 "callgraph.m"
      return;
    }
#line 49 "callgraph.m"
  }
#line 26 "callgraph.m"
}

void mercury__callgraph__init(void)
{
}

void mercury__callgraph__init_type_tables(void)
{
}

void mercury__callgraph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module callgraph. */
