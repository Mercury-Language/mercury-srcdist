/*
** Automatically generated from `module_deps_graph.m'
** by the Mercury compiler,
** version rotd-2022-05-17
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


// :- module parse_tree.module_deps_graph.
// :- implementation.

/*
INIT mercury__parse_tree__module_deps_graph__init
ENDINIT
*/

#include "parse_tree.module_deps_graph.mih"


#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "digraph.mih"
#include "enum.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.module_baggage.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_item.mih"




static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_dep_info__type_ctor_info_module_dep_info_0;

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__113__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_14,
  MR_Word HeadVar__3_15,
  MR_Word * HeadVar__4_16);

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__94__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_16,
  MR_Word HeadVar__3_17,
  MR_Word * HeadVar__4_18);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(
  MR_Word LookupModuleDepInfo_6,
  MR_Word ModuleKey_7,
  MR_Word Parent_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_11,
  MR_Word * STATE_VARIABLE_DepsGraph_12);

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(
  MR_Word LookupModuleDepInfo_6,
  MR_Word ModuleKey_7,
  MR_Word Parents_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_10,
  MR_Word * STATE_VARIABLE_DepsGraph_11);

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[1][7];




static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};






static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_dep_info__type_ctor_info_module_dep_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "deps_graph",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "deps_graph_key",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_dep_info__type_ctor_info_module_dep_info_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_dep_info__parse_tree__module_dep_info__type_ctor_info_module_dep_info_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_lookup_module_dep_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____lookup_module_dep_info_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____lookup_module_dep_info_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "lookup_module_dep_info",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_dep_info__type_ctor_info_module_dep_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__113__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_14,
  MR_Word HeadVar__3_15,
  MR_Word * HeadVar__4_16)
{
  MR_Word DepKey_23;
  MR_Word STATE_VARIABLE_DepsGraph_11_24;

  mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__2_14)), &DepKey_23, HeadVar__3_15, &STATE_VARIABLE_DepsGraph_11_24);
  mercury__digraph__add_edge_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleKey_5, DepKey_23, STATE_VARIABLE_DepsGraph_11_24, HeadVar__4_16);
}

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__94__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_16,
  MR_Word HeadVar__3_17,
  MR_Word * HeadVar__4_18)
{
  MR_Word DepKey_25;
  MR_Word STATE_VARIABLE_DepsGraph_11_26;

  mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__2_16)), &DepKey_25, HeadVar__3_17, &STATE_VARIABLE_DepsGraph_11_26);
  mercury__digraph__add_edge_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleKey_5, DepKey_25, STATE_VARIABLE_DepsGraph_11_26, HeadVar__4_18);
}

void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_dep_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_dep_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__4_16;

  parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__113__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_16);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_16));
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__4_18;

  parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__94__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_HeadVar__4_18);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_18));
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(
  MR_Word LookupModuleDepInfo_6,
  MR_Word ModuleKey_7,
  MR_Word Parent_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_11,
  MR_Word * STATE_VARIABLE_DepsGraph_12)
{
  MR_Word ParentModuleDepInfo_10;
  MR_Word ImpDeps_19;
  MR_Word STATE_VARIABLE_DepsGraph_11_20;
  MR_Word Var_21;
  MR_Word AddDep_34;
  MR_Word ModuleName_35;
  MR_Word Ancestors_36;
  MR_Word IntDeps_37;
  MR_Word STATE_VARIABLE_DepsGraph_14_38;
  MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), LookupModuleDepInfo_6, (MR_Integer) 1))));
  MR_Box conv1_ParentModuleDepInfo_10;
  MR_Box conv3_STATE_VARIABLE_DepsGraph_14_38;
  MR_Box conv4_STATE_VARIABLE_DepsGraph_11_20;
  MR_Box conv6_STATE_VARIABLE_DepsGraph_12;

  conv1_ParentModuleDepInfo_10 = func_0(((MR_Box) (LookupModuleDepInfo_6)), ((MR_Box) (Parent_8)));
  ParentModuleDepInfo_10 = ((MR_Word) (conv1_ParentModuleDepInfo_10));
  {
    AddDep_34 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), AddDep_34, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), AddDep_34, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1));
    MR_hl_field(MR_mktag(0), AddDep_34, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), AddDep_34, 3) = ((MR_Box) (ModuleKey_7));
  }
  parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ParentModuleDepInfo_10, &ModuleName_35);
  Ancestors_36 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_35);
  parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ParentModuleDepInfo_10, &IntDeps_37);
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_34, Ancestors_36, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_11)), &conv3_STATE_VARIABLE_DepsGraph_14_38);
  STATE_VARIABLE_DepsGraph_14_38 = ((MR_Word) (conv3_STATE_VARIABLE_DepsGraph_14_38));
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_34, IntDeps_37, ((MR_Box) (STATE_VARIABLE_DepsGraph_14_38)), &conv4_STATE_VARIABLE_DepsGraph_11_20);
  STATE_VARIABLE_DepsGraph_11_20 = ((MR_Word) (conv4_STATE_VARIABLE_DepsGraph_11_20));
  parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ParentModuleDepInfo_10, &ImpDeps_19);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2));
    MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleKey_7));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), Var_21, ImpDeps_19, ((MR_Box) (STATE_VARIABLE_DepsGraph_11_20)), &conv6_STATE_VARIABLE_DepsGraph_12);
  *STATE_VARIABLE_DepsGraph_12 = ((MR_Word) (conv6_STATE_VARIABLE_DepsGraph_12));
}

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv8_HeadVar__4_16;

  parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__113__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv8_HeadVar__4_16);
  *wrapper_arg_3 = ((MR_Box) (conv8_HeadVar__4_16));
}

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv5_HeadVar__4_18;

  parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__94__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv5_HeadVar__4_18);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_18));
}

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_DepsGraph_12;

  parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_DepsGraph_12);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_DepsGraph_12));
}

static void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_18;

  parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__94__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_18);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_18));
}

void MR_CALL 
parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0(
  MR_Word ModuleDepInfo_7,
  MR_Word LookupModuleDepInfo_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_15,
  MR_Word * STATE_VARIABLE_IntDepsGraph_16,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_17,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_18)
{
  MR_Word ModuleName_11;
  MR_Word Ancestors_12;
  MR_Word IntModuleKey_13;
  MR_Word ImpModuleKey_14;
  MR_Word STATE_VARIABLE_IntDepsGraph_19_19;
  MR_Word STATE_VARIABLE_IntDepsGraph_20_20;
  MR_Word STATE_VARIABLE_ImpDepsGraph_22_22;
  MR_Word STATE_VARIABLE_ImpDepsGraph_23_23;
  MR_Word AddDep_31;
  MR_Word ModuleName_32;
  MR_Word Ancestors_33;
  MR_Word IntDeps_34;
  MR_Word STATE_VARIABLE_DepsGraph_14_35;
  MR_Word Var_49;
  MR_Word ImpDeps_61;
  MR_Word STATE_VARIABLE_DepsGraph_11_62;
  MR_Word Var_63;
  MR_Word AddDep_76;
  MR_Word ModuleName_77;
  MR_Word Ancestors_78;
  MR_Word IntDeps_79;
  MR_Word STATE_VARIABLE_DepsGraph_14_80;
  MR_Box conv1_STATE_VARIABLE_DepsGraph_14_35;
  MR_Box conv2_STATE_VARIABLE_IntDepsGraph_20_20;
  MR_Box conv4_STATE_VARIABLE_IntDepsGraph_16;
  MR_Box conv6_STATE_VARIABLE_DepsGraph_14_80;
  MR_Box conv7_STATE_VARIABLE_DepsGraph_11_62;
  MR_Box conv9_STATE_VARIABLE_ImpDepsGraph_23_23;

  parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_7, &ModuleName_11);
  Ancestors_12 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_11);
  mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), &IntModuleKey_13, STATE_VARIABLE_IntDepsGraph_0_15, &STATE_VARIABLE_IntDepsGraph_19_19);
  {
    AddDep_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), AddDep_31, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), AddDep_31, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_1));
    MR_hl_field(MR_mktag(0), AddDep_31, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), AddDep_31, 3) = ((MR_Box) (IntModuleKey_13));
  }
  parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_7, &ModuleName_32);
  Ancestors_33 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_32);
  parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_7, &IntDeps_34);
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_31, Ancestors_33, ((MR_Box) (STATE_VARIABLE_IntDepsGraph_19_19)), &conv1_STATE_VARIABLE_DepsGraph_14_35);
  STATE_VARIABLE_DepsGraph_14_35 = ((MR_Word) (conv1_STATE_VARIABLE_DepsGraph_14_35));
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_31, IntDeps_34, ((MR_Box) (STATE_VARIABLE_DepsGraph_14_35)), &conv2_STATE_VARIABLE_IntDepsGraph_20_20);
  STATE_VARIABLE_IntDepsGraph_20_20 = ((MR_Word) (conv2_STATE_VARIABLE_IntDepsGraph_20_20));
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_2));
    MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (LookupModuleDepInfo_8));
    MR_hl_field(MR_mktag(0), Var_49, 4) = ((MR_Box) (IntModuleKey_13));
  }
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), Var_49, Ancestors_12, ((MR_Box) (STATE_VARIABLE_IntDepsGraph_20_20)), &conv4_STATE_VARIABLE_IntDepsGraph_16);
  *STATE_VARIABLE_IntDepsGraph_16 = ((MR_Word) (conv4_STATE_VARIABLE_IntDepsGraph_16));
  mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), &ImpModuleKey_14, STATE_VARIABLE_ImpDepsGraph_0_17, &STATE_VARIABLE_ImpDepsGraph_22_22);
  {
    AddDep_76 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), AddDep_76, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), AddDep_76, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_3));
    MR_hl_field(MR_mktag(0), AddDep_76, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), AddDep_76, 3) = ((MR_Box) (ImpModuleKey_14));
  }
  parse_tree__module_dep_info__module_dep_info_get_module_name_2_p_0(ModuleDepInfo_7, &ModuleName_77);
  Ancestors_78 = mdbcomp__sym_name__get_ancestors_set_1_f_0(ModuleName_77);
  parse_tree__module_dep_info__module_dep_info_get_int_deps_2_p_0(ModuleDepInfo_7, &IntDeps_79);
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_76, Ancestors_78, ((MR_Box) (STATE_VARIABLE_ImpDepsGraph_22_22)), &conv6_STATE_VARIABLE_DepsGraph_14_80);
  STATE_VARIABLE_DepsGraph_14_80 = ((MR_Word) (conv6_STATE_VARIABLE_DepsGraph_14_80));
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_76, IntDeps_79, ((MR_Box) (STATE_VARIABLE_DepsGraph_14_80)), &conv7_STATE_VARIABLE_DepsGraph_11_62);
  STATE_VARIABLE_DepsGraph_11_62 = ((MR_Word) (conv7_STATE_VARIABLE_DepsGraph_11_62));
  parse_tree__module_dep_info__module_dep_info_get_imp_deps_2_p_0(ModuleDepInfo_7, &ImpDeps_61);
  {
    Var_63 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_63, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
    MR_hl_field(MR_mktag(0), Var_63, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_dep_info_to_deps_graph_6_p_0_4));
    MR_hl_field(MR_mktag(0), Var_63, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(MR_mktag(0), Var_63, 3) = ((MR_Box) (ImpModuleKey_14));
  }
  mercury__set__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), Var_63, ImpDeps_61, ((MR_Box) (STATE_VARIABLE_DepsGraph_11_62)), &conv9_STATE_VARIABLE_ImpDepsGraph_23_23);
  STATE_VARIABLE_ImpDepsGraph_23_23 = ((MR_Word) (conv9_STATE_VARIABLE_ImpDepsGraph_23_23));
  parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(LookupModuleDepInfo_8, ImpModuleKey_14, Ancestors_12, STATE_VARIABLE_ImpDepsGraph_23_23, STATE_VARIABLE_ImpDepsGraph_18);
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_DepsGraph_12;

  parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DepsGraph_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DepsGraph_12));
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(
  MR_Word LookupModuleDepInfo_6,
  MR_Word ModuleKey_7,
  MR_Word Parents_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_10,
  MR_Word * STATE_VARIABLE_DepsGraph_11)
{
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_DepsGraph_11;

  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
    MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1));
    MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (LookupModuleDepInfo_6));
    MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ModuleKey_7));
  }
  mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), Var_12, Parents_8, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_10)), &conv1_STATE_VARIABLE_DepsGraph_11);
  *STATE_VARIABLE_DepsGraph_11 = ((MR_Word) (conv1_STATE_VARIABLE_DepsGraph_11));
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_deps_graph____Unify____deps_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_deps_graph____Compare____deps_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_dep_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__module_deps_graph____Unify____lookup_module_dep_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_dep_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__module_deps_graph____Compare____lookup_module_dep_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__module_deps_graph__init(void)
{
}

void mercury__parse_tree__module_deps_graph__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_0);
	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_key_0);
	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_lookup_module_dep_info_0);
}

void mercury__parse_tree__module_deps_graph__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__module_deps_graph__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.module_deps_graph.
