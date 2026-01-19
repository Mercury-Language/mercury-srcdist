/*
** Automatically generated from `callgraph.m'
** by the Mercury compiler,
** version rotd-2026-01-19
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


// :- module callgraph.
// :- implementation.

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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.program_representation.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_PseudoTypeInfo_Struct1 callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0;

static void MR_CALL 
callgraph__index_clique_member_4_p_0(
  MR_Integer CliqueNum_5,
  MR_Word PDPtr_6,
  MR_ArrayPtr STATE_VARIABLE_CliqueIndex_0_11,
  MR_ArrayPtr * STATE_VARIABLE_CliqueIndex_12);

static void MR_CALL 
callgraph__index_clique_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
callgraph__index_clique_4_p_0(
  MR_Integer CliqueNum_5,
  MR_Word CliqueMembers_6,
  MR_ArrayPtr STATE_VARIABLE_CliqueIndex_0_8,
  MR_ArrayPtr * STATE_VARIABLE_CliqueIndex_9);

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer FromPDI_7,
  MR_Word CallSiteSlot_8,
  MR_Word STATE_VARIABLE_Graph_0_14,
  MR_Word * STATE_VARIABLE_Graph_15);

static void MR_CALL 
callgraph__add_csd_arcs_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer FromPDI_7,
  MR_Word CSDPtr_8,
  MR_Word STATE_VARIABLE_Graph_0_16,
  MR_Word * STATE_VARIABLE_Graph_17);

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer PDI_7,
  MR_Word PD_8,
  MR_Word STATE_VARIABLE_Graph_0_12,
  MR_Word * STATE_VARIABLE_Graph_13);

static void MR_CALL 
callgraph__pdi_to_pdptr_2_p_0(
  MR_Integer PDI_3,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
callgraph__make_clique_indexes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
callgraph__find_cliques_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
callgraph__foldl__ho1_4_p_0(
  MR_Word STATE_VARIABLE_L_0_10,
  MR_Word STATE_VARIABLE_A_0_11,
  MR_Word * STATE_VARIABLE_A_12);

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0(
  MR_Integer Depth_7,
  MR_Word STATE_VARIABLE_Xs_0_12,
  MR_Word * STATE_VARIABLE_Xs_13,
  MR_Word STATE_VARIABLE_A_0_14,
  MR_Word * STATE_VARIABLE_A_15);


static /* final */ const MR_Box callgraph_scalar_common_1[2][2];

static /* final */ const MR_Box callgraph_scalar_common_2[1][5];

static /* final */ const MR_Box callgraph_scalar_common_3[2][3];

static /* final */ const MR_Box callgraph_scalar_common_4[3][8];

static /* final */ const MR_Box callgraph_scalar_common_5[2][7];




static /* final */ const MR_Box callgraph_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&profile__profile__type_ctor_info_clique_ptr_0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_2[1][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_3[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&callgraph_scalar_common_2[0])),
    ((MR_Box) (callgraph__foldl_2__ho2_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&callgraph_scalar_common_5[0])),
    ((MR_Box) (callgraph__make_clique_indexes_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_4[3][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_array_slot_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&profile__profile__type_ctor_info_initial_deep_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0)),
    ((MR_Box) (&cliques__cliques__type_ctor_info_graph_0))
  },
};

static /* final */ const MR_Box callgraph_scalar_common_5[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0)),
    ((MR_Box) (&callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "profile.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 callgraph__list__pti_list_1__plain_profile__type_ctor_info_proc_dynamic_ptr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 callgraph__array__pti_array_1__plain_profile__type_ctor_info_clique_ptr_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_PseudoTypeInfo) (&profile__profile__type_ctor_info_clique_ptr_0) }
};

static void MR_CALL 
callgraph__index_clique_member_4_p_0(
  MR_Integer CliqueNum_5,
  MR_Word PDPtr_6,
  MR_ArrayPtr STATE_VARIABLE_CliqueIndex_0_11,
  MR_ArrayPtr * STATE_VARIABLE_CliqueIndex_12)
{
  MR_Integer PDI_8 = (MR_Integer) (PDPtr_6);
  MR_Word Var_16 = (MR_Word) (CliqueNum_5);
  MR_ArrayPtr conv0_STATE_VARIABLE_CliqueIndex_12;

  mercury__array__set_4_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), PDI_8, ((MR_Box) (Var_16)), (MR_ArrayPtr) (STATE_VARIABLE_CliqueIndex_0_11), &conv0_STATE_VARIABLE_CliqueIndex_12);
  *STATE_VARIABLE_CliqueIndex_12 = (MR_ArrayPtr) (conv0_STATE_VARIABLE_CliqueIndex_12);
}

static void MR_CALL 
callgraph__index_clique_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv0_STATE_VARIABLE_CliqueIndex_12;

  callgraph__index_clique_member_4_p_0(((MR_Integer) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_ArrayPtr) (wrapper_arg_2)), &conv0_STATE_VARIABLE_CliqueIndex_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_CliqueIndex_12));
}

static void MR_CALL 
callgraph__index_clique_4_p_0(
  MR_Integer CliqueNum_5,
  MR_Word CliqueMembers_6,
  MR_ArrayPtr STATE_VARIABLE_CliqueIndex_0_8,
  MR_ArrayPtr * STATE_VARIABLE_CliqueIndex_9)
{
  MR_Word Var_10;
  MR_ArrayPtr conv1_STATE_VARIABLE_CliqueIndex_9;

  {
    Var_10 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_10, 0) = ((MR_Box) (&callgraph_scalar_common_5[1]));
    MR_hl_field(0, Var_10, 1) = ((MR_Box) (callgraph__index_clique_4_p_0_1));
    MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_10, 3) = ((MR_Box) (CliqueNum_5));
  }
  array_util__array_list_foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), Var_10, CliqueMembers_6, (MR_ArrayPtr) (STATE_VARIABLE_CliqueIndex_0_8), &conv1_STATE_VARIABLE_CliqueIndex_9);
  *STATE_VARIABLE_CliqueIndex_9 = (MR_ArrayPtr) (conv1_STATE_VARIABLE_CliqueIndex_9);
}

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Graph_17;

  callgraph__add_csd_arcs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Graph_17);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_17));
}

static void MR_CALL 
callgraph__add_call_site_arcs_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer FromPDI_7,
  MR_Word CallSiteSlot_8,
  MR_Word STATE_VARIABLE_Graph_0_14,
  MR_Word * STATE_VARIABLE_Graph_15)
{
  if (((MR_tag((MR_Word) CallSiteSlot_8)) == (MR_Integer) 1))
  {
    MR_ArrayPtr CSDPtrArray_12 = ((MR_ArrayPtr) ((MR_hl_field(1, CallSiteSlot_8, 1))));
    MR_Word CSDPtrs_13;
    MR_Word Var_17;
    MR_Box conv1_STATE_VARIABLE_Graph_15;

    mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_ArrayPtr) (CSDPtrArray_12), &CSDPtrs_13);
    {
      Var_17 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_17, 0) = ((MR_Box) (&callgraph_scalar_common_4[2]));
      MR_hl_field(0, Var_17, 1) = ((MR_Box) (callgraph__add_call_site_arcs_5_p_0_1));
      MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_17, 3) = ((MR_Box) (InitDeep_6));
      MR_hl_field(0, Var_17, 4) = ((MR_Box) (FromPDI_7));
    }
    mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_ptr_0), (MR_Word) (&cliques__cliques__type_ctor_info_graph_0), Var_17, CSDPtrs_13, ((MR_Box) (STATE_VARIABLE_Graph_0_14)), &conv1_STATE_VARIABLE_Graph_15);
    *STATE_VARIABLE_Graph_15 = ((MR_Word) (conv1_STATE_VARIABLE_Graph_15));
  }
  else
  {
    MR_Word CSDPtr_10 = ((MR_Word) ((MR_hl_field(0, CallSiteSlot_8, 0))));

    callgraph__add_csd_arcs_5_p_0(InitDeep_6, FromPDI_7, CSDPtr_10, STATE_VARIABLE_Graph_0_14, STATE_VARIABLE_Graph_15);
  }
}

static void MR_CALL 
callgraph__add_csd_arcs_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer FromPDI_7,
  MR_Word CSDPtr_8,
  MR_Word STATE_VARIABLE_Graph_0_16,
  MR_Word * STATE_VARIABLE_Graph_17)
{
  MR_bool succeeded;
  MR_Integer CSDI_10 = (MR_Integer) (CSDPtr_8);

  succeeded = (CSDI_10 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word CSD_11;
    MR_Word ToPDPtr_12;
    MR_Integer ToPDI_13;
    MR_ArrayPtr Var_19 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_6, 2))));
    MR_Box conv0_CSD_11;

    mercury__array__lookup_3_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_dynamic_0), (MR_ArrayPtr) (Var_19), CSDI_10, &conv0_CSD_11);
    CSD_11 = ((MR_Word) (conv0_CSD_11));
    ToPDPtr_12 = ((MR_Word) ((MR_hl_field(0, CSD_11, 1))));
    ToPDI_13 = (MR_Integer) (ToPDPtr_12);
    cliques__add_arc_4_p_0(STATE_VARIABLE_Graph_0_16, FromPDI_7, ToPDI_13, STATE_VARIABLE_Graph_17);
  }
  else
    *STATE_VARIABLE_Graph_17 = STATE_VARIABLE_Graph_0_16;
}

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Graph_15;

  callgraph__add_call_site_arcs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Graph_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_15));
}

static void MR_CALL 
callgraph__add_pd_arcs_5_p_0(
  MR_Word InitDeep_6,
  MR_Integer PDI_7,
  MR_Word PD_8,
  MR_Word STATE_VARIABLE_Graph_0_12,
  MR_Word * STATE_VARIABLE_Graph_13)
{
  MR_ArrayPtr CallSiteRefArray_10 = ((MR_ArrayPtr) ((MR_hl_field(0, PD_8, 1))));
  MR_Word CallSiteRefList_11;
  MR_Word Var_14;
  MR_Box conv1_STATE_VARIABLE_Graph_13;

  mercury__array__to_list_2_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_ArrayPtr) (CallSiteRefArray_10), &CallSiteRefList_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&callgraph_scalar_common_4[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (callgraph__add_pd_arcs_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (InitDeep_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (PDI_7));
  }
  mercury__list__foldl_4_p_0((MR_Word) (&profile__profile__type_ctor_info_call_site_array_slot_0), (MR_Word) (&cliques__cliques__type_ctor_info_graph_0), Var_14, CallSiteRefList_11, ((MR_Box) (STATE_VARIABLE_Graph_0_12)), &conv1_STATE_VARIABLE_Graph_13);
  *STATE_VARIABLE_Graph_13 = ((MR_Word) (conv1_STATE_VARIABLE_Graph_13));
}

static void MR_CALL 
callgraph__pdi_to_pdptr_2_p_0(
  MR_Integer PDI_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) (PDI_3);
}

static void MR_CALL 
callgraph__make_clique_indexes_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_ArrayPtr conv2_STATE_VARIABLE_CliqueIndex_9;

  callgraph__index_clique_4_p_0(((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_ArrayPtr) (wrapper_arg_3)), &conv2_STATE_VARIABLE_CliqueIndex_9);
  *wrapper_arg_4 = ((MR_Box) (conv2_STATE_VARIABLE_CliqueIndex_9));
}

void MR_CALL 
callgraph__make_clique_indexes_4_p_0(
  MR_Integer NPDs_5,
  MR_Word CliqueList_6,
  MR_ArrayPtr * Cliques_7,
  MR_ArrayPtr * CliqueIndex_8)
{
  MR_ArrayPtr CliqueIndex0_9;
  MR_ArrayPtr conv0_Cliques_7;
  MR_ArrayPtr conv1_CliqueIndex0_9;
  MR_Box conv3_CliqueIndex_8;

  conv0_Cliques_7 = mercury__array__array_1_f_0((MR_Word) (&callgraph_scalar_common_1[0]), CliqueList_6);
  *Cliques_7 = (MR_ArrayPtr) (conv0_Cliques_7);
  mercury__array__init_3_p_0((MR_Word) (&profile__profile__type_ctor_info_clique_ptr_0), NPDs_5, ((MR_Box) (((MR_Box) ((MR_Integer) -1)))), &conv1_CliqueIndex0_9);
  CliqueIndex0_9 = (MR_ArrayPtr) (conv1_CliqueIndex0_9);
  array_util__array_foldl_from_1_4_p_1((MR_Word) (&callgraph_scalar_common_1[0]), (MR_Word) (&callgraph_scalar_common_1[1]), (MR_Word) (&callgraph_scalar_common_3[1]), (MR_ArrayPtr) (*Cliques_7), ((MR_Box) (CliqueIndex0_9)), &conv3_CliqueIndex_8);
  *CliqueIndex_8 = ((MR_ArrayPtr) (conv3_CliqueIndex_8));
}

static void MR_CALL 
callgraph__find_cliques_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Graph_13;

  callgraph__add_pd_arcs_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Graph_13);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Graph_13));
}

void MR_CALL 
callgraph__find_cliques_2_p_0(
  MR_Word InitDeep_3,
  MR_Word * BottomUpPDPtrCliqueList_4)
{
  MR_Word Graph_5;
  MR_Word TopDownPDICliqueList_6;
  MR_Word Graph0_14;
  MR_Word Var_15;
  MR_ArrayPtr Var_16;
  MR_Box conv1_Graph_5;

  cliques__init_1_p_0(&Graph0_14);
  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&callgraph_scalar_common_4[0]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (callgraph__find_cliques_2_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (InitDeep_3));
  }
  Var_16 = ((MR_ArrayPtr) ((MR_hl_field(0, InitDeep_3, 3))));
  array_util__array_foldl_from_1_4_p_1((MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_0), (MR_Word) (&cliques__cliques__type_ctor_info_graph_0), Var_15, (MR_ArrayPtr) (Var_16), ((MR_Box) (Graph0_14)), &conv1_Graph_5);
  Graph_5 = ((MR_Word) (conv1_Graph_5));
  cliques__topological_sort_2_p_0(Graph_5, &TopDownPDICliqueList_6);
  callgraph__foldl__ho1_4_p_0(TopDownPDICliqueList_6, (MR_Word) ((MR_Unsigned) 0U), BottomUpPDPtrCliqueList_4);
}

static void MR_CALL 
callgraph__foldl__ho1_4_p_0(
  MR_Word STATE_VARIABLE_L_0_10,
  MR_Word STATE_VARIABLE_A_0_11,
  MR_Word * STATE_VARIABLE_A_12)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_L_1_14;
    MR_Word STATE_VARIABLE_A_1_15;

    // setup for model_det tailcalls optimized into a loop
    ;
    callgraph__foldl_2__ho2_6_p_0((MR_Integer) 100000, STATE_VARIABLE_L_0_10, &STATE_VARIABLE_L_1_14, STATE_VARIABLE_A_0_11, &STATE_VARIABLE_A_1_15);
    if ((STATE_VARIABLE_L_1_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_A_12 = STATE_VARIABLE_A_1_15;
    else
    {
      MR_Word next_value_of_STATE_VARIABLE_L_0_10 = STATE_VARIABLE_L_1_14;
      MR_Word next_value_of_STATE_VARIABLE_A_0_11 = STATE_VARIABLE_A_1_15;

      // direct tailcall eliminated
      ;
      STATE_VARIABLE_L_0_10 = next_value_of_STATE_VARIABLE_L_0_10;
      STATE_VARIABLE_A_0_11 = next_value_of_STATE_VARIABLE_A_0_11;
      continue;
    }
    break;
  }
}

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  callgraph__pdi_to_pdptr_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
}

static void MR_CALL 
callgraph__foldl_2__ho2_6_p_0(
  MR_Integer Depth_7,
  MR_Word STATE_VARIABLE_Xs_0_12,
  MR_Word * STATE_VARIABLE_Xs_13,
  MR_Word STATE_VARIABLE_A_0_14,
  MR_Word * STATE_VARIABLE_A_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Depth_7 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      if ((STATE_VARIABLE_Xs_0_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Xs_13 = STATE_VARIABLE_Xs_0_12;
        *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
      }
      else
      {
        MR_Word X_11 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Xs_0_12, 0))));
        MR_Word STATE_VARIABLE_Xs_1_17 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_Xs_0_12, 1))));
        MR_Word STATE_VARIABLE_A_1_18;
        MR_Integer Var_19;
        MR_Word PDPtrList_25;
        MR_Word PDIList_26;
        MR_Integer next_value_of_Depth_7;
        MR_Word next_value_of_STATE_VARIABLE_Xs_0_12;
        MR_Word next_value_of_STATE_VARIABLE_A_0_14;

        mercury__set__to_sorted_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), X_11, &PDIList_26);
        mercury__list__map_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&profile__profile__type_ctor_info_proc_dynamic_ptr_0), (MR_Word) (&callgraph_scalar_common_3[0]), PDIList_26, &PDPtrList_25);
        {
          STATE_VARIABLE_A_1_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_A_1_18, 0) = ((MR_Box) (PDPtrList_25));
          MR_hl_field(1, STATE_VARIABLE_A_1_18, 1) = ((MR_Box) (STATE_VARIABLE_A_0_14));
        }
        Var_19 = (MR_Integer) ((MR_Unsigned) Depth_7 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_Depth_7 = Var_19;
        next_value_of_STATE_VARIABLE_Xs_0_12 = STATE_VARIABLE_Xs_1_17;
        next_value_of_STATE_VARIABLE_A_0_14 = STATE_VARIABLE_A_1_18;
        Depth_7 = next_value_of_Depth_7;
        STATE_VARIABLE_Xs_0_12 = next_value_of_STATE_VARIABLE_Xs_0_12;
        STATE_VARIABLE_A_0_14 = next_value_of_STATE_VARIABLE_A_0_14;
        continue;
      }
    else
    {
      *STATE_VARIABLE_A_15 = STATE_VARIABLE_A_0_14;
      *STATE_VARIABLE_Xs_13 = STATE_VARIABLE_Xs_0_12;
    }
    break;
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

// :- end_module callgraph.
