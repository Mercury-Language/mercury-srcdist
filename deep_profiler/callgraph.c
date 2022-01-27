/*
** Automatically generated from `callgraph.m'
** by the Mercury compiler,
** version rotd-2017-01-16
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


/* :- module callgraph. */
/* :- implementation. */

/*
INIT mercury__callgraph__init
ENDINIT
*/

#include "callgraph.mih"


#include "array_util.mih"
#include "cliques.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0;

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box * callgraph__wrapper_arg_2);

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0(
  MR_Integer callgraph__Depth_7,
  MR_Word callgraph__STATE_VARIABLE_Xs_0_12,
  MR_Word * callgraph__STATE_VARIABLE_Xs_13,
  MR_Word callgraph__STATE_VARIABLE_A_0_14,
  MR_Word * callgraph__STATE_VARIABLE_A_15);

static void MR_CALL 
callgraph__foldl__ho1_4_p_0(
  MR_Word callgraph__STATE_VARIABLE_L_0_10,
  MR_Word callgraph__STATE_VARIABLE_A_0_11,
  MR_Word * callgraph__STATE_VARIABLE_A_12);

static void MR_CALL 
callgraph__index_clique_member_4_p_0(
  MR_Integer callgraph__CliqueNum_5,
  MR_Word callgraph__PDPtr_6,
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_10,
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_11);

static void MR_CALL 
callgraph__index_clique_4_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box * callgraph__wrapper_arg_3);

static void MR_CALL 
callgraph__index_clique_4_p_0(
  MR_Integer callgraph__CliqueNum_5,
  MR_Word callgraph__CliqueMembers_6,
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_8,
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_9);

static void MR_CALL 
callgraph__add_csd_arcs_5_p_0(
  MR_Word callgraph__InitDeep_6,
  MR_Integer callgraph__FromPDI_7,
  MR_Word callgraph__CSDPtr_8,
  MR_Word callgraph__STATE_VARIABLE_Graph_0_15,
  MR_Word * callgraph__STATE_VARIABLE_Graph_16);

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box * callgraph__wrapper_arg_3);

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0(
  MR_Word callgraph__InitDeep_6,
  MR_Integer callgraph__FromPDI_7,
  MR_Word callgraph__CallSiteSlot_8,
  MR_Word callgraph__STATE_VARIABLE_Graph_0_14,
  MR_Word * callgraph__STATE_VARIABLE_Graph_15);

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box * callgraph__wrapper_arg_3);

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0(
  MR_Word callgraph__InitDeep_6,
  MR_Integer callgraph__PDI_7,
  MR_Word callgraph__PD_8,
  MR_Word callgraph__STATE_VARIABLE_Graph_0_12,
  MR_Word * callgraph__STATE_VARIABLE_Graph_13);

static void MR_CALL 
callgraph__pdi_to_pdptr_2_p_0(
  MR_Integer callgraph__PDI_3,
  MR_Word * callgraph__HeadVar__2_2);

static void MR_CALL 
callgraph__make_clique_indexes_4_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box callgraph__wrapper_arg_3,
  MR_Box * callgraph__wrapper_arg_4);

static void MR_CALL 
callgraph__find_cliques_2_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box callgraph__wrapper_arg_3,
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
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_proc_dynamic_ptr_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &profile__profile__type_ctor_info_clique_ptr_0
  }
};

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box * callgraph__wrapper_arg_2)
{
  {
    MR_Box callgraph__closure = callgraph__closure_arg;
    MR_Word callgraph__conv0_HeadVar__2_2;

    {
      callgraph__pdi_to_pdptr_2_p_0(((MR_Integer) callgraph__wrapper_arg_1), &callgraph__conv0_HeadVar__2_2);
    }
    *callgraph__wrapper_arg_2 = ((MR_Box) (callgraph__conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0(
  MR_Integer callgraph__Depth_7,
  MR_Word callgraph__STATE_VARIABLE_Xs_0_12,
  MR_Word * callgraph__STATE_VARIABLE_Xs_13,
  MR_Word callgraph__STATE_VARIABLE_A_0_14,
  MR_Word * callgraph__STATE_VARIABLE_A_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool callgraph__succeeded = (callgraph__Depth_7 > (MR_Integer) 0);

        if (callgraph__succeeded)
          if ((callgraph__STATE_VARIABLE_Xs_0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *callgraph__STATE_VARIABLE_Xs_13 = callgraph__STATE_VARIABLE_Xs_0_12;
              *callgraph__STATE_VARIABLE_A_15 = callgraph__STATE_VARIABLE_A_0_14;
            }
          else
            {
              MR_Word callgraph__TypeCtorInfo_7_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              MR_Word callgraph__X_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_Xs_0_12, (MR_Integer) 0)));
              MR_Word callgraph__STATE_VARIABLE_Xs_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_Xs_0_12, (MR_Integer) 1)));
              MR_Word callgraph__STATE_VARIABLE_A_18_18;
              MR_Integer callgraph__V_19_19;
              MR_Word callgraph__PDPtrList_28;
              MR_Word callgraph__PDIList_31;

              {
                mercury__set__to_sorted_list_2_p_0(callgraph__TypeCtorInfo_7_33, callgraph__X_11, &callgraph__PDIList_31);
              }
              {
                mercury__list__map_3_p_0(callgraph__TypeCtorInfo_7_33, (MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &callgraph_scalar_common_4[1], callgraph__PDIList_31, &callgraph__PDPtrList_28);
              }
              {
                callgraph__STATE_VARIABLE_A_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_A_18_18, 0) = ((MR_Box) (callgraph__PDPtrList_28));
                MR_hl_field(MR_mktag(1), callgraph__STATE_VARIABLE_A_18_18, 1) = ((MR_Box) (callgraph__STATE_VARIABLE_A_0_14));
              }
              callgraph__V_19_19 = (callgraph__Depth_7 - (MR_Integer) 1);
              /* direct tailcall eliminated */
              {
                MR_Integer callgraph__Depth__tmp_copy_7 = callgraph__V_19_19;
                MR_Word callgraph__STATE_VARIABLE_Xs_0__tmp_copy_12 = callgraph__STATE_VARIABLE_Xs_17_17;
                MR_Word callgraph__STATE_VARIABLE_A_0__tmp_copy_14 = callgraph__STATE_VARIABLE_A_18_18;

                callgraph__STATE_VARIABLE_A_0_14 = callgraph__STATE_VARIABLE_A_0__tmp_copy_14;
                callgraph__STATE_VARIABLE_Xs_0_12 = callgraph__STATE_VARIABLE_Xs_0__tmp_copy_12;
                callgraph__Depth_7 = callgraph__Depth__tmp_copy_7;
              }
              continue;
            }
        else
          {
            *callgraph__STATE_VARIABLE_A_15 = callgraph__STATE_VARIABLE_A_0_14;
            *callgraph__STATE_VARIABLE_Xs_13 = callgraph__STATE_VARIABLE_Xs_0_12;
          }
      }
      break;
    }
}

static void MR_CALL 
callgraph__foldl__ho1_4_p_0(
  MR_Word callgraph__STATE_VARIABLE_L_0_10,
  MR_Word callgraph__STATE_VARIABLE_A_0_11,
  MR_Word * callgraph__STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool callgraph__succeeded;
        MR_Word callgraph__STATE_VARIABLE_L_14_14;
        MR_Word callgraph__STATE_VARIABLE_A_15_15;

        {
          callgraph__foldl_2__ho2_6_p_0((MR_Integer) 100000, callgraph__STATE_VARIABLE_L_0_10, &callgraph__STATE_VARIABLE_L_14_14, callgraph__STATE_VARIABLE_A_0_11, &callgraph__STATE_VARIABLE_A_15_15);
        }
        if ((callgraph__STATE_VARIABLE_L_14_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *callgraph__STATE_VARIABLE_A_12 = callgraph__STATE_VARIABLE_A_15_15;
        else
          {
            /* direct tailcall eliminated */
            {
              MR_Word callgraph__STATE_VARIABLE_L_0__tmp_copy_10 = callgraph__STATE_VARIABLE_L_14_14;
              MR_Word callgraph__STATE_VARIABLE_A_0__tmp_copy_11 = callgraph__STATE_VARIABLE_A_15_15;

              callgraph__STATE_VARIABLE_A_0_11 = callgraph__STATE_VARIABLE_A_0__tmp_copy_11;
              callgraph__STATE_VARIABLE_L_0_10 = callgraph__STATE_VARIABLE_L_0__tmp_copy_10;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
callgraph__index_clique_member_4_p_0(
  MR_Integer callgraph__CliqueNum_5,
  MR_Word callgraph__PDPtr_6,
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_10,
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_11)
{
  {
    MR_bool callgraph__succeeded;
    MR_Integer callgraph__PDI_8 = (MR_Integer) callgraph__PDPtr_6;
    MR_Word callgraph__V_14_14 = (MR_Word) callgraph__CliqueNum_5;
    MR_ArrayPtr callgraph__conv0_STATE_VARIABLE_CliqueIndex_11;

    {
      mercury__array__set_4_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, callgraph__PDI_8, ((MR_Box) (callgraph__V_14_14)), (MR_ArrayPtr) callgraph__STATE_VARIABLE_CliqueIndex_0_10, &callgraph__conv0_STATE_VARIABLE_CliqueIndex_11);
    }
    *callgraph__STATE_VARIABLE_CliqueIndex_11 = (MR_ArrayPtr) callgraph__conv0_STATE_VARIABLE_CliqueIndex_11;
  }
}

static void MR_CALL 
callgraph__index_clique_4_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box * callgraph__wrapper_arg_3)
{
  {
    MR_Box callgraph__closure = callgraph__closure_arg;
    MR_ArrayPtr callgraph__conv0_STATE_VARIABLE_CliqueIndex_11;

    {
      callgraph__index_clique_member_4_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Word) callgraph__wrapper_arg_1), ((MR_ArrayPtr) callgraph__wrapper_arg_2), &callgraph__conv0_STATE_VARIABLE_CliqueIndex_11);
    }
    *callgraph__wrapper_arg_3 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_CliqueIndex_11));
  }
}

static void MR_CALL 
callgraph__index_clique_4_p_0(
  MR_Integer callgraph__CliqueNum_5,
  MR_Word callgraph__CliqueMembers_6,
  MR_ArrayPtr callgraph__STATE_VARIABLE_CliqueIndex_0_8,
  MR_ArrayPtr * callgraph__STATE_VARIABLE_CliqueIndex_9)
{
  {
    MR_bool callgraph__succeeded;
    MR_Word callgraph__V_10_10;
    MR_ArrayPtr callgraph__conv1_STATE_VARIABLE_CliqueIndex_9;

    {
      callgraph__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 0) = ((MR_Box) (&callgraph_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 1) = ((MR_Box) (callgraph__index_clique_4_p_0_1));
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), callgraph__V_10_10, 3) = ((MR_Box) (callgraph__CliqueNum_5));
    }
    {
      array_util__array_list_foldl_4_p_0((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_ptr_0, (MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, callgraph__V_10_10, callgraph__CliqueMembers_6, (MR_ArrayPtr) callgraph__STATE_VARIABLE_CliqueIndex_0_8, &callgraph__conv1_STATE_VARIABLE_CliqueIndex_9);
    }
    *callgraph__STATE_VARIABLE_CliqueIndex_9 = (MR_ArrayPtr) callgraph__conv1_STATE_VARIABLE_CliqueIndex_9;
  }
}

static void MR_CALL 
callgraph__add_csd_arcs_5_p_0(
  MR_Word callgraph__InitDeep_6,
  MR_Integer callgraph__FromPDI_7,
  MR_Word callgraph__CSDPtr_8,
  MR_Word callgraph__STATE_VARIABLE_Graph_0_15,
  MR_Word * callgraph__STATE_VARIABLE_Graph_16)
{
  {
    MR_bool callgraph__succeeded;
    MR_Integer callgraph__CSDI_10 = (MR_Integer) callgraph__CSDPtr_8;

    callgraph__succeeded = (callgraph__CSDI_10 > (MR_Integer) 0);
    if (callgraph__succeeded)
      {
        MR_Word callgraph__CSD_11;
        MR_Word callgraph__ToPDPtr_12;
        MR_Integer callgraph__ToPDI_13;
        MR_ArrayPtr callgraph__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 2)));
        MR_Word callgraph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 0)));
        MR_Word callgraph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 1)));
        MR_ArrayPtr callgraph__V_24_24 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 3)));
        MR_ArrayPtr callgraph__V_25_25 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 4)));
        MR_ArrayPtr callgraph__V_26_26 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_6, (MR_Integer) 5)));
        MR_Box callgraph__conv0_CSD_11;
        MR_Word callgraph__V_27_27;
        MR_Word callgraph__V_28_28;

        {
          mercury__array__lookup_3_p_0((MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_0, (MR_ArrayPtr) callgraph__V_18_18, callgraph__CSDI_10, &callgraph__conv0_CSD_11);
        }
        callgraph__CSD_11 = ((MR_Word) callgraph__conv0_CSD_11);
        callgraph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CSD_11, (MR_Integer) 0)));
        callgraph__ToPDPtr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CSD_11, (MR_Integer) 1)));
        callgraph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CSD_11, (MR_Integer) 2)));
        callgraph__ToPDI_13 = (MR_Integer) callgraph__ToPDPtr_12;
        {
          cliques__add_arc_4_p_0(callgraph__STATE_VARIABLE_Graph_0_15, callgraph__FromPDI_7, callgraph__ToPDI_13, callgraph__STATE_VARIABLE_Graph_16);
        }
      }
    else
      *callgraph__STATE_VARIABLE_Graph_16 = callgraph__STATE_VARIABLE_Graph_0_15;
  }
}

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box * callgraph__wrapper_arg_3)
{
  {
    MR_Box callgraph__closure = callgraph__closure_arg;
    MR_Word callgraph__conv0_STATE_VARIABLE_Graph_16;

    {
      callgraph__add_csd_arcs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 4))), ((MR_Word) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), &callgraph__conv0_STATE_VARIABLE_Graph_16);
    }
    *callgraph__wrapper_arg_3 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_Graph_16));
  }
}

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0(
  MR_Word callgraph__InitDeep_6,
  MR_Integer callgraph__FromPDI_7,
  MR_Word callgraph__CallSiteSlot_8,
  MR_Word callgraph__STATE_VARIABLE_Graph_0_14,
  MR_Word * callgraph__STATE_VARIABLE_Graph_15)
{
  {
    MR_bool callgraph__succeeded;

    if (((MR_tag((MR_Word) callgraph__CallSiteSlot_8)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word callgraph__TypeCtorInfo_19_19 = (MR_Word) &profile__profile__type_ctor_info_call_site_dynamic_ptr_0;
        MR_ArrayPtr callgraph__CSDPtrArray_12 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(1), callgraph__CallSiteSlot_8, (MR_Integer) 1)));
        MR_Word callgraph__CSDPtrs_13;
        MR_Word callgraph__V_16_16;
        MR_Word callgraph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), callgraph__CallSiteSlot_8, (MR_Integer) 0)));
        MR_Box callgraph__conv1_STATE_VARIABLE_Graph_15;

        {
          mercury__array__to_list_2_p_0(callgraph__TypeCtorInfo_19_19, (MR_ArrayPtr) callgraph__CSDPtrArray_12, &callgraph__CSDPtrs_13);
        }
        {
          callgraph__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 0) = ((MR_Box) (&callgraph_scalar_common_2[2]));
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 1) = ((MR_Box) (callgraph__add_call_site_arcs_5_p_0_1));
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 3) = ((MR_Box) (callgraph__InitDeep_6));
          MR_hl_field(MR_mktag(0), callgraph__V_16_16, 4) = ((MR_Box) (callgraph__FromPDI_7));
        }
        {
          mercury__list__foldl_4_p_0(callgraph__TypeCtorInfo_19_19, (MR_Word) &cliques__cliques__type_ctor_info_graph_0, callgraph__V_16_16, callgraph__CSDPtrs_13, ((MR_Box) (callgraph__STATE_VARIABLE_Graph_0_14)), &callgraph__conv1_STATE_VARIABLE_Graph_15);
        }
        *callgraph__STATE_VARIABLE_Graph_15 = ((MR_Word) callgraph__conv1_STATE_VARIABLE_Graph_15);
      }
    else
      {
        MR_Word callgraph__CSDPtr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__CallSiteSlot_8, (MR_Integer) 0)));

        {
          callgraph__add_csd_arcs_5_p_0(callgraph__InitDeep_6, callgraph__FromPDI_7, callgraph__CSDPtr_10, callgraph__STATE_VARIABLE_Graph_0_14, callgraph__STATE_VARIABLE_Graph_15);
        }
      }
  }
}

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box * callgraph__wrapper_arg_3)
{
  {
    MR_Box callgraph__closure = callgraph__closure_arg;
    MR_Word callgraph__conv0_STATE_VARIABLE_Graph_15;

    {
      callgraph__add_call_site_arcs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 4))), ((MR_Word) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), &callgraph__conv0_STATE_VARIABLE_Graph_15);
    }
    *callgraph__wrapper_arg_3 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_Graph_15));
  }
}

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0(
  MR_Word callgraph__InitDeep_6,
  MR_Integer callgraph__PDI_7,
  MR_Word callgraph__PD_8,
  MR_Word callgraph__STATE_VARIABLE_Graph_0_12,
  MR_Word * callgraph__STATE_VARIABLE_Graph_13)
{
  {
    MR_bool callgraph__succeeded;
    MR_Word callgraph__TypeCtorInfo_18_18 = (MR_Word) &profile__profile__type_ctor_info_call_site_array_slot_0;
    MR_ArrayPtr callgraph__CallSiteRefArray_10 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__PD_8, (MR_Integer) 1)));
    MR_Word callgraph__CallSiteRefList_11;
    MR_Word callgraph__V_14_14;
    MR_Word callgraph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__PD_8, (MR_Integer) 0)));
    MR_Word callgraph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__PD_8, (MR_Integer) 2)));
    MR_Box callgraph__conv1_STATE_VARIABLE_Graph_13;

    {
      mercury__array__to_list_2_p_0(callgraph__TypeCtorInfo_18_18, (MR_ArrayPtr) callgraph__CallSiteRefArray_10, &callgraph__CallSiteRefList_11);
    }
    {
      callgraph__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 0) = ((MR_Box) (&callgraph_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 1) = ((MR_Box) (callgraph__add_pd_arcs_5_p_0_1));
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 3) = ((MR_Box) (callgraph__InitDeep_6));
      MR_hl_field(MR_mktag(0), callgraph__V_14_14, 4) = ((MR_Box) (callgraph__PDI_7));
    }
    {
      mercury__list__foldl_4_p_0(callgraph__TypeCtorInfo_18_18, (MR_Word) &cliques__cliques__type_ctor_info_graph_0, callgraph__V_14_14, callgraph__CallSiteRefList_11, ((MR_Box) (callgraph__STATE_VARIABLE_Graph_0_12)), &callgraph__conv1_STATE_VARIABLE_Graph_13);
    }
    *callgraph__STATE_VARIABLE_Graph_13 = ((MR_Word) callgraph__conv1_STATE_VARIABLE_Graph_13);
  }
}

static void MR_CALL 
callgraph__pdi_to_pdptr_2_p_0(
  MR_Integer callgraph__PDI_3,
  MR_Word * callgraph__HeadVar__2_2)
{
  {
    MR_bool callgraph__succeeded;

    *callgraph__HeadVar__2_2 = (MR_Word) callgraph__PDI_3;
  }
}

static void MR_CALL 
callgraph__make_clique_indexes_4_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box callgraph__wrapper_arg_3,
  MR_Box * callgraph__wrapper_arg_4)
{
  {
    MR_Box callgraph__closure = callgraph__closure_arg;
    MR_ArrayPtr callgraph__conv2_STATE_VARIABLE_CliqueIndex_9;

    {
      callgraph__index_clique_4_p_0(((MR_Integer) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), ((MR_ArrayPtr) callgraph__wrapper_arg_3), &callgraph__conv2_STATE_VARIABLE_CliqueIndex_9);
    }
    *callgraph__wrapper_arg_4 = ((MR_Box) (callgraph__conv2_STATE_VARIABLE_CliqueIndex_9));
  }
}

void MR_CALL 
callgraph__make_clique_indexes_4_p_0(
  MR_Integer callgraph__NPDs_5,
  MR_Word callgraph__CliqueList_6,
  MR_ArrayPtr * callgraph__Cliques_7,
  MR_ArrayPtr * callgraph__CliqueIndex_8)
{
  {
    MR_bool callgraph__succeeded;
    MR_Word callgraph__TypeInfo_13_13 = (MR_Word) &callgraph_scalar_common_1[0];
    MR_ArrayPtr callgraph__CliqueIndex0_9;
    MR_ArrayPtr callgraph__conv0_Cliques_7;
    MR_ArrayPtr callgraph__conv1_CliqueIndex0_9;
    MR_Box callgraph__conv3_CliqueIndex_8;

    {
      callgraph__conv0_Cliques_7 = mercury__array__array_1_f_0(callgraph__TypeInfo_13_13, callgraph__CliqueList_6);
    }
    *callgraph__Cliques_7 = (MR_ArrayPtr) callgraph__conv0_Cliques_7;
    {
      mercury__array__init_3_p_0((MR_Word) &profile__profile__type_ctor_info_clique_ptr_0, callgraph__NPDs_5, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &callgraph__conv1_CliqueIndex0_9);
    }
    callgraph__CliqueIndex0_9 = (MR_ArrayPtr) callgraph__conv1_CliqueIndex0_9;
    {
      array_util__array_foldl_from_1_4_p_1(callgraph__TypeInfo_13_13, (MR_Word) &callgraph_scalar_common_1[1], (MR_Word) &callgraph_scalar_common_4[0], (MR_ArrayPtr) *callgraph__Cliques_7, ((MR_Box) (callgraph__CliqueIndex0_9)), &callgraph__conv3_CliqueIndex_8);
    }
    *callgraph__CliqueIndex_8 = ((MR_ArrayPtr) callgraph__conv3_CliqueIndex_8);
  }
}

static void MR_CALL 
callgraph__find_cliques_2_p_0_1(
  MR_Box callgraph__closure_arg,
  MR_Box callgraph__wrapper_arg_1,
  MR_Box callgraph__wrapper_arg_2,
  MR_Box callgraph__wrapper_arg_3,
  MR_Box * callgraph__wrapper_arg_4)
{
  {
    MR_Box callgraph__closure = callgraph__closure_arg;
    MR_Word callgraph__conv0_STATE_VARIABLE_Graph_13;

    {
      callgraph__add_pd_arcs_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__closure, (MR_Integer) 3))), ((MR_Integer) callgraph__wrapper_arg_1), ((MR_Word) callgraph__wrapper_arg_2), ((MR_Word) callgraph__wrapper_arg_3), &callgraph__conv0_STATE_VARIABLE_Graph_13);
    }
    *callgraph__wrapper_arg_4 = ((MR_Box) (callgraph__conv0_STATE_VARIABLE_Graph_13));
  }
}

void MR_CALL 
callgraph__find_cliques_2_p_0(
  MR_Word callgraph__InitDeep_3,
  MR_Word * callgraph__BottomUpPDPtrCliqueList_4)
{
  {
    MR_bool callgraph__succeeded;
    MR_Word callgraph__Graph_5;
    MR_Word callgraph__TopDownPDICliqueList_6;
    MR_Word callgraph__Graph0_16;
    MR_Word callgraph__V_17_17;
    MR_ArrayPtr callgraph__V_18_18;
    MR_Word callgraph__V_19_19;
    MR_Word callgraph__V_20_20;
    MR_ArrayPtr callgraph__V_21_21;
    MR_ArrayPtr callgraph__V_22_22;
    MR_ArrayPtr callgraph__V_23_23;
    MR_Box callgraph__conv1_Graph_5;

    {
      cliques__init_1_p_0(&callgraph__Graph0_16);
    }
    {
      callgraph__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 0) = ((MR_Box) (&callgraph_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 1) = ((MR_Box) (callgraph__find_cliques_2_p_0_1));
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), callgraph__V_17_17, 3) = ((MR_Box) (callgraph__InitDeep_3));
    }
    callgraph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 0)));
    callgraph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 1)));
    callgraph__V_21_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 2)));
    callgraph__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 3)));
    callgraph__V_22_22 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 4)));
    callgraph__V_23_23 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), callgraph__InitDeep_3, (MR_Integer) 5)));
    {
      array_util__array_foldl_from_1_4_p_1((MR_Word) &profile__profile__type_ctor_info_proc_dynamic_0, (MR_Word) &cliques__cliques__type_ctor_info_graph_0, callgraph__V_17_17, (MR_ArrayPtr) callgraph__V_18_18, ((MR_Box) (callgraph__Graph0_16)), &callgraph__conv1_Graph_5);
    }
    callgraph__Graph_5 = ((MR_Word) callgraph__conv1_Graph_5);
    {
      cliques__topological_sort_2_p_0(callgraph__Graph_5, &callgraph__TopDownPDICliqueList_6);
    }
    {
      callgraph__foldl__ho1_4_p_0(callgraph__TopDownPDICliqueList_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), callgraph__BottomUpPDPtrCliqueList_4);
    }
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__callgraph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module callgraph. */
