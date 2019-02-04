/*
** Automatically generated from `module_deps_graph.m'
** by the Mercury compiler,
** version rotd-2018-09-11
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


#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.compiler_util.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
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
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__114__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_15,
  MR_Word HeadVar__3_16,
  MR_Word * HeadVar__4_17);

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__97__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_68,
  MR_Word HeadVar__3_69,
  MR_Word * HeadVar__4_70);

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
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(
  MR_Word LookupModuleImports_6,
  MR_Word ModuleKey_7,
  MR_Word Parent_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_11,
  MR_Word * STATE_VARIABLE_DepsGraph_12);

static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1(
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
  MR_Word LookupModuleImports_6,
  MR_Word ModuleKey_7,
  MR_Word Parents_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_10,
  MR_Word * STATE_VARIABLE_DepsGraph_11);

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word ModuleImports_6,
  MR_Word STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * STATE_VARIABLE_DepsGraph_10);

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word ModuleImports_6,
  MR_Word STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * STATE_VARIABLE_DepsGraph_10);

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
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][7];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[1][8];




static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_key_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_func_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "deps_graph",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_deps_graph_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "deps_graph_key",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_lookup_module_and_imports_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001)),
  ((MR_Box) (parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001)),
  (MR_String) "parse_tree.module_deps_graph",
  (MR_String) "lookup_module_and_imports",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__114__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_15,
  MR_Word HeadVar__3_16,
  MR_Word * HeadVar__4_17)
{
  {
    MR_Word DepKey_27;
    MR_Word STATE_VARIABLE_DepsGraph_11_28;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__2_15)), &DepKey_27, HeadVar__3_16, &STATE_VARIABLE_DepsGraph_11_28);
    mercury__digraph__add_edge_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleKey_5, DepKey_27, STATE_VARIABLE_DepsGraph_11_28, HeadVar__4_17);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__97__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_68,
  MR_Word HeadVar__3_69,
  MR_Word * HeadVar__4_70)
{
  {
    MR_Word DepKey_80;
    MR_Word STATE_VARIABLE_DepsGraph_11_81;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (HeadVar__2_68)), &DepKey_80, HeadVar__3_69, &STATE_VARIABLE_DepsGraph_11_81);
    mercury__digraph__add_edge_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleKey_5, DepKey_80, STATE_VARIABLE_DepsGraph_11_81, HeadVar__4_70);
  }
}

void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(
  MR_Word LookupModuleImports_6,
  MR_Word ModuleKey_7,
  MR_Word Parent_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_11,
  MR_Word * STATE_VARIABLE_DepsGraph_12)
{
  {
    MR_Word ParentModuleImports_10;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), LookupModuleImports_6, (MR_Integer) 1))));
    MR_Box conv1_ParentModuleImports_10;

    conv1_ParentModuleImports_10 = func_0(((MR_Box) (LookupModuleImports_6)), ((MR_Box) (Parent_8)));
    ParentModuleImports_10 = ((MR_Word) (conv1_ParentModuleImports_10));
    parse_tree__module_deps_graph__add_imp_deps_4_p_0(ModuleKey_7, ParentModuleImports_10, STATE_VARIABLE_DepsGraph_0_11, STATE_VARIABLE_DepsGraph_12);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DepsGraph_12;

    parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DepsGraph_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DepsGraph_12));
  }
}

void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(
  MR_Word ModuleImports_7,
  MR_Word LookupModuleImports_8,
  MR_Word STATE_VARIABLE_IntDepsGraph_0_15,
  MR_Word * STATE_VARIABLE_IntDepsGraph_16,
  MR_Word STATE_VARIABLE_ImpDepsGraph_0_17,
  MR_Word * STATE_VARIABLE_ImpDepsGraph_18)
{
  {
    MR_Word ModuleName_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 2))));
    MR_Word ParentDeps_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 4))));
    MR_Word IntModuleKey_13;
    MR_Word ImpModuleKey_14;
    MR_Word STATE_VARIABLE_IntDepsGraph_19_19;
    MR_Word STATE_VARIABLE_IntDepsGraph_20_20;
    MR_Word STATE_VARIABLE_ImpDepsGraph_22_22;
    MR_Word STATE_VARIABLE_ImpDepsGraph_23_23;
    MR_Word Var_84;
    MR_Unsigned packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 15)));
    MR_Unsigned packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 25)));
    MR_Box conv1_STATE_VARIABLE_IntDepsGraph_16;

    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), &IntModuleKey_13, STATE_VARIABLE_IntDepsGraph_0_15, &STATE_VARIABLE_IntDepsGraph_19_19);
    parse_tree__module_deps_graph__add_int_deps_4_p_0(IntModuleKey_13, ModuleImports_7, STATE_VARIABLE_IntDepsGraph_19_19, &STATE_VARIABLE_IntDepsGraph_20_20);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (LookupModuleImports_8));
      MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (IntModuleKey_13));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), Var_84, ParentDeps_12, ((MR_Box) (STATE_VARIABLE_IntDepsGraph_20_20)), &conv1_STATE_VARIABLE_IntDepsGraph_16);
    *STATE_VARIABLE_IntDepsGraph_16 = ((MR_Word) (conv1_STATE_VARIABLE_IntDepsGraph_16));
    mercury__digraph__add_vertex_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_11)), &ImpModuleKey_14, STATE_VARIABLE_ImpDepsGraph_0_17, &STATE_VARIABLE_ImpDepsGraph_22_22);
    parse_tree__module_deps_graph__add_imp_deps_4_p_0(ImpModuleKey_14, ModuleImports_7, STATE_VARIABLE_ImpDepsGraph_22_22, &STATE_VARIABLE_ImpDepsGraph_23_23);
    parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(LookupModuleImports_8, ImpModuleKey_14, ParentDeps_12, STATE_VARIABLE_ImpDepsGraph_23_23, STATE_VARIABLE_ImpDepsGraph_18);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_DepsGraph_12;

    parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_DepsGraph_12);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_DepsGraph_12));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(
  MR_Word LookupModuleImports_6,
  MR_Word ModuleKey_7,
  MR_Word Parents_8,
  MR_Word STATE_VARIABLE_DepsGraph_0_10,
  MR_Word * STATE_VARIABLE_DepsGraph_11)
{
  {
    MR_Word Var_12;
    MR_Box conv1_STATE_VARIABLE_DepsGraph_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (LookupModuleImports_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ModuleKey_7));
    }
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), Var_12, Parents_8, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_10)), &conv1_STATE_VARIABLE_DepsGraph_11);
    *STATE_VARIABLE_DepsGraph_11 = ((MR_Word) (conv1_STATE_VARIABLE_DepsGraph_11));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv3_HeadVar__4_17;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__114__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_HeadVar__4_17);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_17));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_70;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__97__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_70);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_70));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word ModuleImports_6,
  MR_Word STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * STATE_VARIABLE_DepsGraph_10)
{
  {
    MR_Word ImpDeps_8;
    MR_Word STATE_VARIABLE_DepsGraph_11_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word AddDep_27;
    MR_Word Var_28;
    MR_Word STATE_VARIABLE_DepsGraph_12_29;
    MR_Word Var_30;
    MR_Word Var_32;
    MR_Unsigned packed_word_0;
    MR_Unsigned packed_word_1;
    MR_Box conv1_STATE_VARIABLE_DepsGraph_12_29;
    MR_Unsigned packed_word_2;
    MR_Unsigned packed_word_3;
    MR_Box conv2_STATE_VARIABLE_DepsGraph_11_11;
    MR_Box conv4_STATE_VARIABLE_DepsGraph_10;

    {
      AddDep_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddDep_27, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), AddDep_27, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_imp_deps_4_p_0_1));
      MR_hl_field(MR_mktag(0), AddDep_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), AddDep_27, 3) = ((MR_Box) (ModuleKey_5));
    }
    Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 4))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_27, Var_28, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_9)), &conv1_STATE_VARIABLE_DepsGraph_12_29);
    STATE_VARIABLE_DepsGraph_12_29 = ((MR_Word) (conv1_STATE_VARIABLE_DepsGraph_12_29));
    Var_32 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 5))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    Var_30 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_32);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_27, Var_30, ((MR_Box) (STATE_VARIABLE_DepsGraph_12_29)), &conv2_STATE_VARIABLE_DepsGraph_11_11);
    STATE_VARIABLE_DepsGraph_11_11 = ((MR_Word) (conv2_STATE_VARIABLE_DepsGraph_11_11));
    parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(ModuleImports_6, &ImpDeps_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_imp_deps_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleKey_5));
    }
    Var_13 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), ImpDeps_8);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), Var_12, Var_13, ((MR_Box) (STATE_VARIABLE_DepsGraph_11_11)), &conv4_STATE_VARIABLE_DepsGraph_10);
    *STATE_VARIABLE_DepsGraph_10 = ((MR_Word) (conv4_STATE_VARIABLE_DepsGraph_10));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_70;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__97__1_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__4_70);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_70));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word ModuleImports_6,
  MR_Word STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * STATE_VARIABLE_DepsGraph_10)
{
  {
    MR_Word AddDep_8;
    MR_Word Var_11;
    MR_Word STATE_VARIABLE_DepsGraph_12_12;
    MR_Word Var_13;
    MR_Word Var_15;
    MR_Unsigned packed_word_0;
    MR_Unsigned packed_word_1;
    MR_Box conv1_STATE_VARIABLE_DepsGraph_12_12;
    MR_Unsigned packed_word_2;
    MR_Unsigned packed_word_3;
    MR_Box conv2_STATE_VARIABLE_DepsGraph_10;

    {
      AddDep_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddDep_8, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), AddDep_8, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_int_deps_4_p_0_1));
      MR_hl_field(MR_mktag(0), AddDep_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), AddDep_8, 3) = ((MR_Box) (ModuleKey_5));
    }
    Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 4))));
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    mercury__set__fold_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_8, Var_11, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_9)), &conv1_STATE_VARIABLE_DepsGraph_12_12);
    STATE_VARIABLE_DepsGraph_12_12 = ((MR_Word) (conv1_STATE_VARIABLE_DepsGraph_12_12));
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 5))));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    packed_word_3 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    Var_13 = mercury__multi_map__keys_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__term__term__type_ctor_info_context_0), Var_15);
    mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__module_deps_graph_scalar_common_1[0]), AddDep_8, Var_13, ((MR_Box) (STATE_VARIABLE_DepsGraph_12_12)), &conv2_STATE_VARIABLE_DepsGraph_10);
    *STATE_VARIABLE_DepsGraph_10 = ((MR_Word) (conv2_STATE_VARIABLE_DepsGraph_10));
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_deps_graph____Unify____deps_graph_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_deps_graph____Compare____deps_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
	MR_register_type_ctor_info(&parse_tree__module_deps_graph__parse_tree__module_deps_graph__type_ctor_info_lookup_module_and_imports_0);
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
