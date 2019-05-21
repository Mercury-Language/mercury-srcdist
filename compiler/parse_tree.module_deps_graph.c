/*
** Automatically generated from `module_deps_graph.m'
** by the Mercury compiler,
** version rotd-2017-09-13
** configured for x86_64-pc-linux-gnu.
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
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_14,
  MR_Word HeadVar__3_15,
  MR_Word * HeadVar__4_16);

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_67,
  MR_Word HeadVar__3_68,
  MR_Word * HeadVar__4_69);

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
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
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
  {     (MR_PseudoTypeInfo) &parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_key_1,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
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
  {     (MR_PseudoTypeInfo) &parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_TypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
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
  {     (MR_PseudoTypeInfo) &parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_14,
  MR_Word HeadVar__3_15,
  MR_Word * HeadVar__4_16)
{
  {
    MR_Word TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word DepKey_25;
    MR_Word STATE_VARIABLE_DepsGraph_11_26;

    mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_17_17, ((MR_Box) (HeadVar__2_14)), &DepKey_25, HeadVar__3_15, &STATE_VARIABLE_DepsGraph_11_26);
    mercury__digraph__add_edge_4_p_0(TypeCtorInfo_17_17, ModuleKey_5, DepKey_25, STATE_VARIABLE_DepsGraph_11_26, HeadVar__4_16);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(
  MR_Word ModuleKey_5,
  MR_Word HeadVar__2_67,
  MR_Word HeadVar__3_68,
  MR_Word * HeadVar__4_69)
{
  {
    MR_Word TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word DepKey_78;
    MR_Word STATE_VARIABLE_DepsGraph_11_79;

    mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_70_70, ((MR_Box) (HeadVar__2_67)), &DepKey_78, HeadVar__3_68, &STATE_VARIABLE_DepsGraph_11_79);
    mercury__digraph__add_edge_4_p_0(TypeCtorInfo_70_70, ModuleKey_5, DepKey_78, STATE_VARIABLE_DepsGraph_11_79, HeadVar__4_69);
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

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_2[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) Cast_HeadVar1_3, (MR_Word) Cast_HeadVar2_4);
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

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[1], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[1], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
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

    mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
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

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv5_HeadVar__4_16;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv5_HeadVar__4_16);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__4_16));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_HeadVar__4_69;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_HeadVar__4_69);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__4_69));
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
    MR_Word TypeCtorInfo_71_95;
    MR_Word TypeInfo_72_96;
    MR_Word ParentModuleImports_10;
    MR_Word ImpDeps_19;
    MR_Word STATE_VARIABLE_DepsGraph_11_20;
    MR_Word Var_21;
    MR_Word AddDep_34;
    MR_Word Var_35;
    MR_Word STATE_VARIABLE_DepsGraph_12_36;
    MR_Word Var_37;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), LookupModuleImports_6, (MR_Integer) 1)));
    MR_Box conv1_ParentModuleImports_10;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_String Var_64;
    MR_Box conv3_STATE_VARIABLE_DepsGraph_12_36;
    MR_String Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Word Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;
    MR_Word Var_86;
    MR_Word Var_87;
    MR_Word Var_88;
    MR_Word Var_89;
    MR_String Var_90;
    MR_Box conv4_STATE_VARIABLE_DepsGraph_11_20;
    MR_Box conv6_STATE_VARIABLE_DepsGraph_12;

    conv1_ParentModuleImports_10 = func_0(((MR_Box) LookupModuleImports_6), ((MR_Box) (Parent_8)));
    ParentModuleImports_10 = ((MR_Word) conv1_ParentModuleImports_10);
    {
      AddDep_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddDep_34, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), AddDep_34, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1));
      MR_hl_field(MR_mktag(0), AddDep_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), AddDep_34, 3) = ((MR_Box) (ModuleKey_7));
    }
    Var_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 0)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 1)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 2)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 3)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 4)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 5)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 6)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 7)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 8)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 9)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 10)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 11)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 12)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 13)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 14)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 15)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 16)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 17)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 18)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 19)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 20)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 21)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 22)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 23)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 24)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 25)));
    Var_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 26)));
    TypeCtorInfo_71_95 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_72_96 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0];
    mercury__set__fold_4_p_0(TypeCtorInfo_71_95, TypeInfo_72_96, AddDep_34, Var_35, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_11)), &conv3_STATE_VARIABLE_DepsGraph_12_36);
    STATE_VARIABLE_DepsGraph_12_36 = ((MR_Word) conv3_STATE_VARIABLE_DepsGraph_12_36);
    Var_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 0)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 1)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 2)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 3)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 4)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 5)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 6)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 7)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 8)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 9)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 10)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 11)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 12)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 13)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 14)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 15)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 16)));
    Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 17)));
    Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 18)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 19)));
    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 20)));
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 21)));
    Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 22)));
    Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 23)));
    Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 24)));
    Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 25)));
    Var_90 = ((MR_String) (MR_hl_field(MR_mktag(0), ParentModuleImports_10, (MR_Integer) 26)));
    mercury__set__fold_4_p_0(TypeCtorInfo_71_95, TypeInfo_72_96, AddDep_34, Var_37, ((MR_Box) (STATE_VARIABLE_DepsGraph_12_36)), &conv4_STATE_VARIABLE_DepsGraph_11_20);
    STATE_VARIABLE_DepsGraph_11_20 = ((MR_Word) conv4_STATE_VARIABLE_DepsGraph_11_20);
    parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(ParentModuleImports_10, &ImpDeps_19);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (ModuleKey_7));
    }
    mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], Var_21, ImpDeps_19, ((MR_Box) (STATE_VARIABLE_DepsGraph_11_20)), &conv6_STATE_VARIABLE_DepsGraph_12);
    *STATE_VARIABLE_DepsGraph_12 = ((MR_Word) conv6_STATE_VARIABLE_DepsGraph_12);
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

    parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DepsGraph_12);
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
    MR_Word TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 2)));
    MR_Word ParentDeps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 4)));
    MR_Word IntModuleKey_13;
    MR_Word ImpModuleKey_14;
    MR_Word STATE_VARIABLE_IntDepsGraph_19_19;
    MR_Word STATE_VARIABLE_IntDepsGraph_20_20;
    MR_Word STATE_VARIABLE_ImpDepsGraph_22_22;
    MR_Word STATE_VARIABLE_ImpDepsGraph_23_23;
    MR_Word Var_84;
    MR_String Var_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 0)));
    MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 1)));
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 3)));
    MR_Word Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 5)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 6)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 7)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 8)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 9)));
    MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 10)));
    MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 11)));
    MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 12)));
    MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 13)));
    MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 14)));
    MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 15)));
    MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 16)));
    MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 17)));
    MR_Word Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 18)));
    MR_Word Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 19)));
    MR_Word Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 20)));
    MR_Word Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 21)));
    MR_Word Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 22)));
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 23)));
    MR_Word Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 24)));
    MR_Word Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 25)));
    MR_String Var_50 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_7, (MR_Integer) 26)));
    MR_Box conv1_STATE_VARIABLE_IntDepsGraph_16;

    mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_77_77, ((MR_Box) (ModuleName_11)), &IntModuleKey_13, STATE_VARIABLE_IntDepsGraph_0_15, &STATE_VARIABLE_IntDepsGraph_19_19);
    parse_tree__module_deps_graph__add_int_deps_4_p_0(IntModuleKey_13, ModuleImports_7, STATE_VARIABLE_IntDepsGraph_19_19, &STATE_VARIABLE_IntDepsGraph_20_20);
    {
      Var_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_84, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_84, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1));
      MR_hl_field(MR_mktag(0), Var_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_84, 3) = ((MR_Box) (LookupModuleImports_8));
      MR_hl_field(MR_mktag(0), Var_84, 4) = ((MR_Box) (IntModuleKey_13));
    }
    mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], Var_84, ParentDeps_12, ((MR_Box) (STATE_VARIABLE_IntDepsGraph_20_20)), &conv1_STATE_VARIABLE_IntDepsGraph_16);
    *STATE_VARIABLE_IntDepsGraph_16 = ((MR_Word) conv1_STATE_VARIABLE_IntDepsGraph_16);
    mercury__digraph__add_vertex_4_p_0(TypeCtorInfo_77_77, ((MR_Box) (ModuleName_11)), &ImpModuleKey_14, STATE_VARIABLE_ImpDepsGraph_0_17, &STATE_VARIABLE_ImpDepsGraph_22_22);
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

    parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_DepsGraph_12);
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
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (LookupModuleImports_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (ModuleKey_7));
    }
    mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], Var_12, Parents_8, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_10)), &conv1_STATE_VARIABLE_DepsGraph_11);
    *STATE_VARIABLE_DepsGraph_11 = ((MR_Word) conv1_STATE_VARIABLE_DepsGraph_11);
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
    MR_Word conv3_HeadVar__4_16;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv3_HeadVar__4_16);
    *wrapper_arg_3 = ((MR_Box) (conv3_HeadVar__4_16));
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
    MR_Word conv0_HeadVar__4_69;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__4_69);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_69));
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
    MR_Word TypeCtorInfo_71_86;
    MR_Word TypeInfo_72_87;
    MR_Word ImpDeps_8;
    MR_Word STATE_VARIABLE_DepsGraph_11_11;
    MR_Word Var_12;
    MR_Word AddDep_25;
    MR_Word Var_26;
    MR_Word STATE_VARIABLE_DepsGraph_12_27;
    MR_Word Var_28;
    MR_String Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_String Var_55;
    MR_Box conv1_STATE_VARIABLE_DepsGraph_12_27;
    MR_String Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_70;
    MR_Word Var_71;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_78;
    MR_Word Var_79;
    MR_Word Var_80;
    MR_String Var_81;
    MR_Box conv2_STATE_VARIABLE_DepsGraph_11_11;
    MR_Box conv4_STATE_VARIABLE_DepsGraph_10;

    {
      AddDep_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddDep_25, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), AddDep_25, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_imp_deps_4_p_0_1));
      MR_hl_field(MR_mktag(0), AddDep_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), AddDep_25, 3) = ((MR_Box) (ModuleKey_5));
    }
    Var_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 0)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 1)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 2)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 3)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 4)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 5)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 6)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 7)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 8)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 9)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 10)));
    Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 11)));
    Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 12)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 13)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 14)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 16)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 17)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 18)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 19)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 20)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 21)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 22)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 23)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 24)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 26)));
    TypeCtorInfo_71_86 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_72_87 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0];
    mercury__set__fold_4_p_0(TypeCtorInfo_71_86, TypeInfo_72_87, AddDep_25, Var_26, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_9)), &conv1_STATE_VARIABLE_DepsGraph_12_27);
    STATE_VARIABLE_DepsGraph_12_27 = ((MR_Word) conv1_STATE_VARIABLE_DepsGraph_12_27);
    Var_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 0)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 1)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 2)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 3)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 4)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 5)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 6)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 7)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 8)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 9)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 10)));
    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 11)));
    Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 12)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 13)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 14)));
    Var_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 16)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 17)));
    Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 18)));
    Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 19)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 20)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 21)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 22)));
    Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 23)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 24)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    Var_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 26)));
    mercury__set__fold_4_p_0(TypeCtorInfo_71_86, TypeInfo_72_87, AddDep_25, Var_28, ((MR_Box) (STATE_VARIABLE_DepsGraph_12_27)), &conv2_STATE_VARIABLE_DepsGraph_11_11);
    STATE_VARIABLE_DepsGraph_11_11 = ((MR_Word) conv2_STATE_VARIABLE_DepsGraph_11_11);
    parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(ModuleImports_6, &ImpDeps_8);
    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_imp_deps_4_p_0_2));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleKey_5));
    }
    mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], Var_12, ImpDeps_8, ((MR_Box) (STATE_VARIABLE_DepsGraph_11_11)), &conv4_STATE_VARIABLE_DepsGraph_10);
    *STATE_VARIABLE_DepsGraph_10 = ((MR_Word) conv4_STATE_VARIABLE_DepsGraph_10);
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
    MR_Word conv0_HeadVar__4_69;

    parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_HeadVar__4_69);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__4_69));
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
    MR_Word TypeCtorInfo_71_71;
    MR_Word TypeInfo_72_72;
    MR_Word AddDep_8;
    MR_Word Var_11;
    MR_Word STATE_VARIABLE_DepsGraph_12_12;
    MR_Word Var_13;
    MR_String Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;
    MR_String Var_40;
    MR_Box conv1_STATE_VARIABLE_DepsGraph_12_12;
    MR_String Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_Word Var_46;
    MR_Word Var_47;
    MR_Word Var_48;
    MR_Word Var_49;
    MR_Word Var_50;
    MR_Word Var_51;
    MR_Word Var_52;
    MR_Word Var_53;
    MR_Word Var_54;
    MR_Word Var_55;
    MR_Word Var_56;
    MR_Word Var_57;
    MR_Word Var_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_61;
    MR_Word Var_62;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_String Var_66;
    MR_Box conv2_STATE_VARIABLE_DepsGraph_10;

    {
      AddDep_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), AddDep_8, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), AddDep_8, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_int_deps_4_p_0_1));
      MR_hl_field(MR_mktag(0), AddDep_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), AddDep_8, 3) = ((MR_Box) (ModuleKey_5));
    }
    Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 0)));
    Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 1)));
    Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 2)));
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 3)));
    Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 4)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 5)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 6)));
    Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 7)));
    Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 8)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 9)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 10)));
    Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 11)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 12)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 13)));
    Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 14)));
    Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 16)));
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 17)));
    Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 18)));
    Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 19)));
    Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 20)));
    Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 21)));
    Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 22)));
    Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 23)));
    Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 24)));
    Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    Var_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 26)));
    TypeCtorInfo_71_71 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    TypeInfo_72_72 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0];
    mercury__set__fold_4_p_0(TypeCtorInfo_71_71, TypeInfo_72_72, AddDep_8, Var_11, ((MR_Box) (STATE_VARIABLE_DepsGraph_0_9)), &conv1_STATE_VARIABLE_DepsGraph_12_12);
    STATE_VARIABLE_DepsGraph_12_12 = ((MR_Word) conv1_STATE_VARIABLE_DepsGraph_12_12);
    Var_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 0)));
    Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 1)));
    Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 2)));
    Var_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 3)));
    Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 4)));
    Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 5)));
    Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 6)));
    Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 7)));
    Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 8)));
    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 9)));
    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 10)));
    Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 11)));
    Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 12)));
    Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 13)));
    Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 14)));
    Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 15)));
    Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 16)));
    Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 17)));
    Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 18)));
    Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 19)));
    Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 20)));
    Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 21)));
    Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 22)));
    Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 23)));
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 24)));
    Var_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 25)));
    Var_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ModuleImports_6, (MR_Integer) 26)));
    mercury__set__fold_4_p_0(TypeCtorInfo_71_71, TypeInfo_72_72, AddDep_8, Var_13, ((MR_Box) (STATE_VARIABLE_DepsGraph_12_12)), &conv2_STATE_VARIABLE_DepsGraph_10);
    *STATE_VARIABLE_DepsGraph_10 = ((MR_Word) conv2_STATE_VARIABLE_DepsGraph_10);
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__module_deps_graph____Unify____deps_graph_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__module_deps_graph____Compare____deps_graph_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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
