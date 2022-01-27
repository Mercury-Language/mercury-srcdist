/*
** Automatically generated from `module_deps_graph.m'
** by the Mercury compiler,
** version rotd-2017-01-21
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


/* :- module parse_tree.module_deps_graph. */
/* :- implementation. */

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




static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_key_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__module_deps_graph__digraph__pti_digraph_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 parse_tree__module_deps_graph__digraph__ti_digraph_key_1mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_VA_TypeInfo_Struct2 parse_tree__module_deps_graph____vti_func_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__module_imports__type_ctor_info_module_and_imports_0;

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001(
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001(
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001(
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001(
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001(
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_14,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_15,
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_16);

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_67,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_68,
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_69);

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_6,
  MR_Word parse_tree__module_deps_graph__ModuleKey_7,
  MR_Word parse_tree__module_deps_graph__Parents_8,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_10,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_6,
  MR_Word parse_tree__module_deps_graph__ModuleKey_7,
  MR_Word parse_tree__module_deps_graph__Parent_8,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_11,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12);

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_2(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10);

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10);

static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3);


static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_1[2][2];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_2[1][4];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][8];

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[1][7];




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

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_3[1][8] = {
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

static /* final */ const MR_Box parse_tree__module_deps_graph_scalar_common_4[1][7] = {
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_VA_PseudoTypeInfo_Struct2 parse_tree__module_deps_graph____vpti_func_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_parse_tree__module_imports__type_ctor_info_module_and_imports_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &parse_tree__module_imports__parse_tree__module_imports__type_ctor_info_module_and_imports_0
  }
};

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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
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

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0_10001(
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;

    {
      parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph____Unify____deps_graph_0_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
    return parse_tree__module_deps_graph__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0_10001(
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__1_1;

    {
      parse_tree__module_deps_graph____Compare____deps_graph_0_0(&parse_tree__module_deps_graph__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3));
    }
    *parse_tree__module_deps_graph__wrapper_arg_1 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0_10001(
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;

    {
      parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
    return parse_tree__module_deps_graph__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0_10001(
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__1_1;

    {
      parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(&parse_tree__module_deps_graph__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3));
    }
    *parse_tree__module_deps_graph__wrapper_arg_1 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0_10001(
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;

    {
      parse_tree__module_deps_graph__succeeded = parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0(((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2));
    }
    return parse_tree__module_deps_graph__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0_10001(
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__1_1;

    {
      parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0(&parse_tree__module_deps_graph__conv0_HeadVar__1_1, ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_3));
    }
    *parse_tree__module_deps_graph__wrapper_arg_1 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_14,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_15,
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_16)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__module_deps_graph__DepKey_25;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_26;

    {
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_17_17, ((MR_Box) (parse_tree__module_deps_graph__HeadVar__2_14)), &parse_tree__module_deps_graph__DepKey_25, parse_tree__module_deps_graph__HeadVar__3_15, &parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_26);
    }
    {
      mercury__digraph__add_edge_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_17_17, parse_tree__module_deps_graph__ModuleKey_5, parse_tree__module_deps_graph__DepKey_25, parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_26, parse_tree__module_deps_graph__HeadVar__4_16);
    }
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_67,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_68,
  MR_Word * parse_tree__module_deps_graph__HeadVar__4_69)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_70_70 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__module_deps_graph__DepKey_78;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_79;

    {
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_70_70, ((MR_Box) (parse_tree__module_deps_graph__HeadVar__2_67)), &parse_tree__module_deps_graph__DepKey_78, parse_tree__module_deps_graph__HeadVar__3_68, &parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_79);
    }
    {
      mercury__digraph__add_edge_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_70_70, parse_tree__module_deps_graph__ModuleKey_5, parse_tree__module_deps_graph__DepKey_78, parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_79, parse_tree__module_deps_graph__HeadVar__4_69);
    }
  }
}

void MR_CALL 
parse_tree__module_deps_graph____Compare____lookup_module_and_imports_0_0(
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_4 = parse_tree__module_deps_graph__HeadVar__2_2;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_5 = parse_tree__module_deps_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_2[0], parse_tree__module_deps_graph__HeadVar__1_1, ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____lookup_module_and_imports_0_0(
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_3 = parse_tree__module_deps_graph__HeadVar__1_1;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_4 = parse_tree__module_deps_graph__HeadVar__2_2;

    {
      parse_tree__module_deps_graph__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) parse_tree__module_deps_graph__Cast_HeadVar1_3, (MR_Word) parse_tree__module_deps_graph__Cast_HeadVar2_4);
    }
    return parse_tree__module_deps_graph__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_key_0_0(
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_4 = parse_tree__module_deps_graph__HeadVar__2_2;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_5 = parse_tree__module_deps_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[1], parse_tree__module_deps_graph__HeadVar__1_1, ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_5)));
    }
  }
}

static MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_key_0_0(
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_3 = parse_tree__module_deps_graph__HeadVar__1_1;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_4 = parse_tree__module_deps_graph__HeadVar__2_2;

    {
      parse_tree__module_deps_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[1], ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_4)));
    }
    return parse_tree__module_deps_graph__succeeded;
  }
}

void MR_CALL 
parse_tree__module_deps_graph____Compare____deps_graph_0_0(
  MR_Word * parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2,
  MR_Word parse_tree__module_deps_graph__HeadVar__3_3)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_4 = parse_tree__module_deps_graph__HeadVar__2_2;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_5 = parse_tree__module_deps_graph__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], parse_tree__module_deps_graph__HeadVar__1_1, ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_4)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
parse_tree__module_deps_graph____Unify____deps_graph_0_0(
  MR_Word parse_tree__module_deps_graph__HeadVar__1_1,
  MR_Word parse_tree__module_deps_graph__HeadVar__2_2)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar1_3 = parse_tree__module_deps_graph__HeadVar__1_1;
    MR_Word parse_tree__module_deps_graph__Cast_HeadVar2_4 = parse_tree__module_deps_graph__HeadVar__2_2;

    {
      parse_tree__module_deps_graph__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar1_3)), ((MR_Box) (parse_tree__module_deps_graph__Cast_HeadVar2_4)));
    }
    return parse_tree__module_deps_graph__succeeded;
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
    MR_Word parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12;

    {
      parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12);
    }
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_6,
  MR_Word parse_tree__module_deps_graph__ModuleKey_7,
  MR_Word parse_tree__module_deps_graph__Parents_8,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_10,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__V_12_12;
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_11;

    {
      parse_tree__module_deps_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 3) = ((MR_Box) (parse_tree__module_deps_graph__LookupModuleImports_6));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 4) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_7));
    }
    {
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], parse_tree__module_deps_graph__V_12_12, parse_tree__module_deps_graph__Parents_8, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_10)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_11);
    }
    *parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_11);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
    MR_Word parse_tree__module_deps_graph__conv5_HeadVar__4_16;

    {
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv5_HeadVar__4_16);
    }
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv5_HeadVar__4_16));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
    MR_Word parse_tree__module_deps_graph__conv2_HeadVar__4_69;

    {
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv2_HeadVar__4_69);
    }
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv2_HeadVar__4_69));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_6,
  MR_Word parse_tree__module_deps_graph__ModuleKey_7,
  MR_Word parse_tree__module_deps_graph__Parent_8,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_11,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_71_95;
    MR_Word parse_tree__module_deps_graph__TypeInfo_72_96;
    MR_Word parse_tree__module_deps_graph__ParentModuleImports_10;
    MR_Word parse_tree__module_deps_graph__ImpDeps_19;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_20;
    MR_Word parse_tree__module_deps_graph__V_21_21;
    MR_Word parse_tree__module_deps_graph__AddDep_34;
    MR_Word parse_tree__module_deps_graph__V_35_35;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_36;
    MR_Word parse_tree__module_deps_graph__V_37_37;
    MR_Box MR_CALL (* parse_tree__module_deps_graph__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__LookupModuleImports_6, (MR_Integer) 1)));
    MR_Box parse_tree__module_deps_graph__conv1_ParentModuleImports_10;
    MR_String parse_tree__module_deps_graph__V_39_39;
    MR_Word parse_tree__module_deps_graph__V_40_40;
    MR_Word parse_tree__module_deps_graph__V_41_41;
    MR_Word parse_tree__module_deps_graph__V_42_42;
    MR_Word parse_tree__module_deps_graph__V_43_43;
    MR_Word parse_tree__module_deps_graph__V_44_44;
    MR_Word parse_tree__module_deps_graph__V_45_45;
    MR_Word parse_tree__module_deps_graph__V_46_46;
    MR_Word parse_tree__module_deps_graph__V_47_47;
    MR_Word parse_tree__module_deps_graph__V_48_48;
    MR_Word parse_tree__module_deps_graph__V_49_49;
    MR_Word parse_tree__module_deps_graph__V_50_50;
    MR_Word parse_tree__module_deps_graph__V_51_51;
    MR_Word parse_tree__module_deps_graph__V_52_52;
    MR_Word parse_tree__module_deps_graph__V_53_53;
    MR_Word parse_tree__module_deps_graph__V_54_54;
    MR_Word parse_tree__module_deps_graph__V_55_55;
    MR_Word parse_tree__module_deps_graph__V_56_56;
    MR_Word parse_tree__module_deps_graph__V_57_57;
    MR_Word parse_tree__module_deps_graph__V_58_58;
    MR_Word parse_tree__module_deps_graph__V_59_59;
    MR_Word parse_tree__module_deps_graph__V_60_60;
    MR_Word parse_tree__module_deps_graph__V_61_61;
    MR_Word parse_tree__module_deps_graph__V_62_62;
    MR_Word parse_tree__module_deps_graph__V_63_63;
    MR_String parse_tree__module_deps_graph__V_64_64;
    MR_Box parse_tree__module_deps_graph__conv3_STATE_VARIABLE_DepsGraph_12_36;
    MR_String parse_tree__module_deps_graph__V_65_65;
    MR_Word parse_tree__module_deps_graph__V_66_66;
    MR_Word parse_tree__module_deps_graph__V_67_67;
    MR_Word parse_tree__module_deps_graph__V_68_68;
    MR_Word parse_tree__module_deps_graph__V_69_69;
    MR_Word parse_tree__module_deps_graph__V_70_70;
    MR_Word parse_tree__module_deps_graph__V_71_71;
    MR_Word parse_tree__module_deps_graph__V_72_72;
    MR_Word parse_tree__module_deps_graph__V_73_73;
    MR_Word parse_tree__module_deps_graph__V_74_74;
    MR_Word parse_tree__module_deps_graph__V_75_75;
    MR_Word parse_tree__module_deps_graph__V_76_76;
    MR_Word parse_tree__module_deps_graph__V_77_77;
    MR_Word parse_tree__module_deps_graph__V_78_78;
    MR_Word parse_tree__module_deps_graph__V_79_79;
    MR_Word parse_tree__module_deps_graph__V_80_80;
    MR_Word parse_tree__module_deps_graph__V_81_81;
    MR_Word parse_tree__module_deps_graph__V_82_82;
    MR_Word parse_tree__module_deps_graph__V_83_83;
    MR_Word parse_tree__module_deps_graph__V_84_84;
    MR_Word parse_tree__module_deps_graph__V_85_85;
    MR_Word parse_tree__module_deps_graph__V_86_86;
    MR_Word parse_tree__module_deps_graph__V_87_87;
    MR_Word parse_tree__module_deps_graph__V_88_88;
    MR_Word parse_tree__module_deps_graph__V_89_89;
    MR_String parse_tree__module_deps_graph__V_90_90;
    MR_Box parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_11_20;
    MR_Box parse_tree__module_deps_graph__conv6_STATE_VARIABLE_DepsGraph_12;

    {
      parse_tree__module_deps_graph__conv1_ParentModuleImports_10 = parse_tree__module_deps_graph__func_0(((MR_Box) parse_tree__module_deps_graph__LookupModuleImports_6), ((MR_Box) (parse_tree__module_deps_graph__Parent_8)));
    }
    parse_tree__module_deps_graph__ParentModuleImports_10 = ((MR_Word) parse_tree__module_deps_graph__conv1_ParentModuleImports_10);
    {
      parse_tree__module_deps_graph__AddDep_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_34, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_7));
    }
    parse_tree__module_deps_graph__V_39_39 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 0)));
    parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 1)));
    parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 2)));
    parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 3)));
    parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 4)));
    parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 5)));
    parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 6)));
    parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 7)));
    parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 8)));
    parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 9)));
    parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 10)));
    parse_tree__module_deps_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 11)));
    parse_tree__module_deps_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 12)));
    parse_tree__module_deps_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 13)));
    parse_tree__module_deps_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 14)));
    parse_tree__module_deps_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 15)));
    parse_tree__module_deps_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 16)));
    parse_tree__module_deps_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 17)));
    parse_tree__module_deps_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 18)));
    parse_tree__module_deps_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 19)));
    parse_tree__module_deps_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 20)));
    parse_tree__module_deps_graph__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 21)));
    parse_tree__module_deps_graph__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 22)));
    parse_tree__module_deps_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 23)));
    parse_tree__module_deps_graph__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 24)));
    parse_tree__module_deps_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 25)));
    parse_tree__module_deps_graph__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 26)));
    parse_tree__module_deps_graph__TypeCtorInfo_71_95 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__module_deps_graph__TypeInfo_72_96 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0];
    {
      mercury__set__fold_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_71_95, parse_tree__module_deps_graph__TypeInfo_72_96, parse_tree__module_deps_graph__AddDep_34, parse_tree__module_deps_graph__V_35_35, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_11)), &parse_tree__module_deps_graph__conv3_STATE_VARIABLE_DepsGraph_12_36);
    }
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_36 = ((MR_Word) parse_tree__module_deps_graph__conv3_STATE_VARIABLE_DepsGraph_12_36);
    parse_tree__module_deps_graph__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 0)));
    parse_tree__module_deps_graph__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 1)));
    parse_tree__module_deps_graph__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 2)));
    parse_tree__module_deps_graph__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 3)));
    parse_tree__module_deps_graph__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 4)));
    parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 5)));
    parse_tree__module_deps_graph__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 6)));
    parse_tree__module_deps_graph__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 7)));
    parse_tree__module_deps_graph__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 8)));
    parse_tree__module_deps_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 9)));
    parse_tree__module_deps_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 10)));
    parse_tree__module_deps_graph__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 11)));
    parse_tree__module_deps_graph__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 12)));
    parse_tree__module_deps_graph__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 13)));
    parse_tree__module_deps_graph__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 14)));
    parse_tree__module_deps_graph__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 15)));
    parse_tree__module_deps_graph__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 16)));
    parse_tree__module_deps_graph__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 17)));
    parse_tree__module_deps_graph__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 18)));
    parse_tree__module_deps_graph__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 19)));
    parse_tree__module_deps_graph__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 20)));
    parse_tree__module_deps_graph__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 21)));
    parse_tree__module_deps_graph__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 22)));
    parse_tree__module_deps_graph__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 23)));
    parse_tree__module_deps_graph__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 24)));
    parse_tree__module_deps_graph__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 25)));
    parse_tree__module_deps_graph__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ParentModuleImports_10, (MR_Integer) 26)));
    {
      mercury__set__fold_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_71_95, parse_tree__module_deps_graph__TypeInfo_72_96, parse_tree__module_deps_graph__AddDep_34, parse_tree__module_deps_graph__V_37_37, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_36)), &parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_11_20);
    }
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_20 = ((MR_Word) parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_11_20);
    {
      parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(parse_tree__module_deps_graph__ParentModuleImports_10, &parse_tree__module_deps_graph__ImpDeps_19);
    }
    {
      parse_tree__module_deps_graph__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_21_21, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_7));
    }
    {
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], parse_tree__module_deps_graph__V_21_21, parse_tree__module_deps_graph__ImpDeps_19, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_20)), &parse_tree__module_deps_graph__conv6_STATE_VARIABLE_DepsGraph_12);
    }
    *parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12 = ((MR_Word) parse_tree__module_deps_graph__conv6_STATE_VARIABLE_DepsGraph_12);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_2(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
    MR_Word parse_tree__module_deps_graph__conv3_HeadVar__4_16;

    {
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_imp_deps__111__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv3_HeadVar__4_16);
    }
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv3_HeadVar__4_16));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__4_69;

    {
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_HeadVar__4_69);
    }
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__4_69));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_imp_deps_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_71_86;
    MR_Word parse_tree__module_deps_graph__TypeInfo_72_87;
    MR_Word parse_tree__module_deps_graph__ImpDeps_8;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_11;
    MR_Word parse_tree__module_deps_graph__V_12_12;
    MR_Word parse_tree__module_deps_graph__AddDep_25;
    MR_Word parse_tree__module_deps_graph__V_26_26;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_27;
    MR_Word parse_tree__module_deps_graph__V_28_28;
    MR_String parse_tree__module_deps_graph__V_30_30;
    MR_Word parse_tree__module_deps_graph__V_31_31;
    MR_Word parse_tree__module_deps_graph__V_32_32;
    MR_Word parse_tree__module_deps_graph__V_33_33;
    MR_Word parse_tree__module_deps_graph__V_34_34;
    MR_Word parse_tree__module_deps_graph__V_35_35;
    MR_Word parse_tree__module_deps_graph__V_36_36;
    MR_Word parse_tree__module_deps_graph__V_37_37;
    MR_Word parse_tree__module_deps_graph__V_38_38;
    MR_Word parse_tree__module_deps_graph__V_39_39;
    MR_Word parse_tree__module_deps_graph__V_40_40;
    MR_Word parse_tree__module_deps_graph__V_41_41;
    MR_Word parse_tree__module_deps_graph__V_42_42;
    MR_Word parse_tree__module_deps_graph__V_43_43;
    MR_Word parse_tree__module_deps_graph__V_44_44;
    MR_Word parse_tree__module_deps_graph__V_45_45;
    MR_Word parse_tree__module_deps_graph__V_46_46;
    MR_Word parse_tree__module_deps_graph__V_47_47;
    MR_Word parse_tree__module_deps_graph__V_48_48;
    MR_Word parse_tree__module_deps_graph__V_49_49;
    MR_Word parse_tree__module_deps_graph__V_50_50;
    MR_Word parse_tree__module_deps_graph__V_51_51;
    MR_Word parse_tree__module_deps_graph__V_52_52;
    MR_Word parse_tree__module_deps_graph__V_53_53;
    MR_Word parse_tree__module_deps_graph__V_54_54;
    MR_String parse_tree__module_deps_graph__V_55_55;
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_27;
    MR_String parse_tree__module_deps_graph__V_56_56;
    MR_Word parse_tree__module_deps_graph__V_57_57;
    MR_Word parse_tree__module_deps_graph__V_58_58;
    MR_Word parse_tree__module_deps_graph__V_59_59;
    MR_Word parse_tree__module_deps_graph__V_60_60;
    MR_Word parse_tree__module_deps_graph__V_61_61;
    MR_Word parse_tree__module_deps_graph__V_62_62;
    MR_Word parse_tree__module_deps_graph__V_63_63;
    MR_Word parse_tree__module_deps_graph__V_64_64;
    MR_Word parse_tree__module_deps_graph__V_65_65;
    MR_Word parse_tree__module_deps_graph__V_66_66;
    MR_Word parse_tree__module_deps_graph__V_67_67;
    MR_Word parse_tree__module_deps_graph__V_68_68;
    MR_Word parse_tree__module_deps_graph__V_69_69;
    MR_Word parse_tree__module_deps_graph__V_70_70;
    MR_Word parse_tree__module_deps_graph__V_71_71;
    MR_Word parse_tree__module_deps_graph__V_72_72;
    MR_Word parse_tree__module_deps_graph__V_73_73;
    MR_Word parse_tree__module_deps_graph__V_74_74;
    MR_Word parse_tree__module_deps_graph__V_75_75;
    MR_Word parse_tree__module_deps_graph__V_76_76;
    MR_Word parse_tree__module_deps_graph__V_77_77;
    MR_Word parse_tree__module_deps_graph__V_78_78;
    MR_Word parse_tree__module_deps_graph__V_79_79;
    MR_Word parse_tree__module_deps_graph__V_80_80;
    MR_String parse_tree__module_deps_graph__V_81_81;
    MR_Box parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_11_11;
    MR_Box parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_10;

    {
      parse_tree__module_deps_graph__AddDep_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_imp_deps_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_25, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_5));
    }
    parse_tree__module_deps_graph__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
    parse_tree__module_deps_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
    parse_tree__module_deps_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
    parse_tree__module_deps_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
    parse_tree__module_deps_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
    parse_tree__module_deps_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
    parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
    parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
    parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
    parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
    parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
    parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
    parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
    parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
    parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
    parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
    parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
    parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
    parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
    parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
    parse_tree__module_deps_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
    parse_tree__module_deps_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 21)));
    parse_tree__module_deps_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 22)));
    parse_tree__module_deps_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 23)));
    parse_tree__module_deps_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 24)));
    parse_tree__module_deps_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 25)));
    parse_tree__module_deps_graph__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 26)));
    parse_tree__module_deps_graph__TypeCtorInfo_71_86 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__module_deps_graph__TypeInfo_72_87 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0];
    {
      mercury__set__fold_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_71_86, parse_tree__module_deps_graph__TypeInfo_72_87, parse_tree__module_deps_graph__AddDep_25, parse_tree__module_deps_graph__V_26_26, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_27);
    }
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_27 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_27);
    parse_tree__module_deps_graph__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
    parse_tree__module_deps_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
    parse_tree__module_deps_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
    parse_tree__module_deps_graph__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
    parse_tree__module_deps_graph__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
    parse_tree__module_deps_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
    parse_tree__module_deps_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
    parse_tree__module_deps_graph__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
    parse_tree__module_deps_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
    parse_tree__module_deps_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
    parse_tree__module_deps_graph__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
    parse_tree__module_deps_graph__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
    parse_tree__module_deps_graph__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
    parse_tree__module_deps_graph__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
    parse_tree__module_deps_graph__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
    parse_tree__module_deps_graph__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
    parse_tree__module_deps_graph__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
    parse_tree__module_deps_graph__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
    parse_tree__module_deps_graph__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
    parse_tree__module_deps_graph__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
    parse_tree__module_deps_graph__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
    parse_tree__module_deps_graph__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 21)));
    parse_tree__module_deps_graph__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 22)));
    parse_tree__module_deps_graph__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 23)));
    parse_tree__module_deps_graph__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 24)));
    parse_tree__module_deps_graph__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 25)));
    parse_tree__module_deps_graph__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 26)));
    {
      mercury__set__fold_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_71_86, parse_tree__module_deps_graph__TypeInfo_72_87, parse_tree__module_deps_graph__AddDep_25, parse_tree__module_deps_graph__V_28_28, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_27)), &parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_11_11);
    }
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_11 = ((MR_Word) parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_11_11);
    {
      parse_tree__module_imports__module_and_imports_get_imp_deps_2_p_0(parse_tree__module_deps_graph__ModuleImports_6, &parse_tree__module_deps_graph__ImpDeps_8);
    }
    {
      parse_tree__module_deps_graph__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_imp_deps_4_p_0_2));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_12_12, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_5));
    }
    {
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], parse_tree__module_deps_graph__V_12_12, parse_tree__module_deps_graph__ImpDeps_8, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_11_11)), &parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_10);
    }
    *parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10 = ((MR_Word) parse_tree__module_deps_graph__conv4_STATE_VARIABLE_DepsGraph_10);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
    MR_Word parse_tree__module_deps_graph__conv0_HeadVar__4_69;

    {
      parse_tree__module_deps_graph__IntroducedFrom__pred__add_int_deps__95__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_HeadVar__4_69);
    }
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_HeadVar__4_69));
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_int_deps_4_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleKey_5,
  MR_Word parse_tree__module_deps_graph__ModuleImports_6,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_71_71;
    MR_Word parse_tree__module_deps_graph__TypeInfo_72_72;
    MR_Word parse_tree__module_deps_graph__AddDep_8;
    MR_Word parse_tree__module_deps_graph__V_11_11;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_12;
    MR_Word parse_tree__module_deps_graph__V_13_13;
    MR_String parse_tree__module_deps_graph__V_15_15;
    MR_Word parse_tree__module_deps_graph__V_16_16;
    MR_Word parse_tree__module_deps_graph__V_17_17;
    MR_Word parse_tree__module_deps_graph__V_18_18;
    MR_Word parse_tree__module_deps_graph__V_19_19;
    MR_Word parse_tree__module_deps_graph__V_20_20;
    MR_Word parse_tree__module_deps_graph__V_21_21;
    MR_Word parse_tree__module_deps_graph__V_22_22;
    MR_Word parse_tree__module_deps_graph__V_23_23;
    MR_Word parse_tree__module_deps_graph__V_24_24;
    MR_Word parse_tree__module_deps_graph__V_25_25;
    MR_Word parse_tree__module_deps_graph__V_26_26;
    MR_Word parse_tree__module_deps_graph__V_27_27;
    MR_Word parse_tree__module_deps_graph__V_28_28;
    MR_Word parse_tree__module_deps_graph__V_29_29;
    MR_Word parse_tree__module_deps_graph__V_30_30;
    MR_Word parse_tree__module_deps_graph__V_31_31;
    MR_Word parse_tree__module_deps_graph__V_32_32;
    MR_Word parse_tree__module_deps_graph__V_33_33;
    MR_Word parse_tree__module_deps_graph__V_34_34;
    MR_Word parse_tree__module_deps_graph__V_35_35;
    MR_Word parse_tree__module_deps_graph__V_36_36;
    MR_Word parse_tree__module_deps_graph__V_37_37;
    MR_Word parse_tree__module_deps_graph__V_38_38;
    MR_Word parse_tree__module_deps_graph__V_39_39;
    MR_String parse_tree__module_deps_graph__V_40_40;
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_12;
    MR_String parse_tree__module_deps_graph__V_41_41;
    MR_Word parse_tree__module_deps_graph__V_42_42;
    MR_Word parse_tree__module_deps_graph__V_43_43;
    MR_Word parse_tree__module_deps_graph__V_44_44;
    MR_Word parse_tree__module_deps_graph__V_45_45;
    MR_Word parse_tree__module_deps_graph__V_46_46;
    MR_Word parse_tree__module_deps_graph__V_47_47;
    MR_Word parse_tree__module_deps_graph__V_48_48;
    MR_Word parse_tree__module_deps_graph__V_49_49;
    MR_Word parse_tree__module_deps_graph__V_50_50;
    MR_Word parse_tree__module_deps_graph__V_51_51;
    MR_Word parse_tree__module_deps_graph__V_52_52;
    MR_Word parse_tree__module_deps_graph__V_53_53;
    MR_Word parse_tree__module_deps_graph__V_54_54;
    MR_Word parse_tree__module_deps_graph__V_55_55;
    MR_Word parse_tree__module_deps_graph__V_56_56;
    MR_Word parse_tree__module_deps_graph__V_57_57;
    MR_Word parse_tree__module_deps_graph__V_58_58;
    MR_Word parse_tree__module_deps_graph__V_59_59;
    MR_Word parse_tree__module_deps_graph__V_60_60;
    MR_Word parse_tree__module_deps_graph__V_61_61;
    MR_Word parse_tree__module_deps_graph__V_62_62;
    MR_Word parse_tree__module_deps_graph__V_63_63;
    MR_Word parse_tree__module_deps_graph__V_64_64;
    MR_Word parse_tree__module_deps_graph__V_65_65;
    MR_String parse_tree__module_deps_graph__V_66_66;
    MR_Box parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_10;

    {
      parse_tree__module_deps_graph__AddDep_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_int_deps_4_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__AddDep_8, 3) = ((MR_Box) (parse_tree__module_deps_graph__ModuleKey_5));
    }
    parse_tree__module_deps_graph__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
    parse_tree__module_deps_graph__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
    parse_tree__module_deps_graph__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
    parse_tree__module_deps_graph__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
    parse_tree__module_deps_graph__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
    parse_tree__module_deps_graph__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
    parse_tree__module_deps_graph__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
    parse_tree__module_deps_graph__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
    parse_tree__module_deps_graph__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
    parse_tree__module_deps_graph__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
    parse_tree__module_deps_graph__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
    parse_tree__module_deps_graph__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
    parse_tree__module_deps_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
    parse_tree__module_deps_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
    parse_tree__module_deps_graph__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
    parse_tree__module_deps_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
    parse_tree__module_deps_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
    parse_tree__module_deps_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
    parse_tree__module_deps_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
    parse_tree__module_deps_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
    parse_tree__module_deps_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
    parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 21)));
    parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 22)));
    parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 23)));
    parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 24)));
    parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 25)));
    parse_tree__module_deps_graph__V_40_40 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 26)));
    parse_tree__module_deps_graph__TypeCtorInfo_71_71 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    parse_tree__module_deps_graph__TypeInfo_72_72 = (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0];
    {
      mercury__set__fold_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_71_71, parse_tree__module_deps_graph__TypeInfo_72_72, parse_tree__module_deps_graph__AddDep_8, parse_tree__module_deps_graph__V_11_11, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_0_9)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_12);
    }
    parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_12 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_DepsGraph_12_12);
    parse_tree__module_deps_graph__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 0)));
    parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 1)));
    parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 2)));
    parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 3)));
    parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 4)));
    parse_tree__module_deps_graph__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 5)));
    parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 6)));
    parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 7)));
    parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 8)));
    parse_tree__module_deps_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 9)));
    parse_tree__module_deps_graph__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 10)));
    parse_tree__module_deps_graph__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 11)));
    parse_tree__module_deps_graph__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 12)));
    parse_tree__module_deps_graph__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 13)));
    parse_tree__module_deps_graph__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 14)));
    parse_tree__module_deps_graph__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 15)));
    parse_tree__module_deps_graph__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 16)));
    parse_tree__module_deps_graph__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 17)));
    parse_tree__module_deps_graph__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 18)));
    parse_tree__module_deps_graph__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 19)));
    parse_tree__module_deps_graph__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 20)));
    parse_tree__module_deps_graph__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 21)));
    parse_tree__module_deps_graph__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 22)));
    parse_tree__module_deps_graph__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 23)));
    parse_tree__module_deps_graph__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 24)));
    parse_tree__module_deps_graph__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 25)));
    parse_tree__module_deps_graph__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_6, (MR_Integer) 26)));
    {
      mercury__set__fold_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_71_71, parse_tree__module_deps_graph__TypeInfo_72_72, parse_tree__module_deps_graph__AddDep_8, parse_tree__module_deps_graph__V_13_13, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_12_12)), &parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_10);
    }
    *parse_tree__module_deps_graph__STATE_VARIABLE_DepsGraph_10 = ((MR_Word) parse_tree__module_deps_graph__conv2_STATE_VARIABLE_DepsGraph_10);
  }
}

static void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1(
  MR_Box parse_tree__module_deps_graph__closure_arg,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_1,
  MR_Box parse_tree__module_deps_graph__wrapper_arg_2,
  MR_Box * parse_tree__module_deps_graph__wrapper_arg_3)
{
  {
    MR_Box parse_tree__module_deps_graph__closure = parse_tree__module_deps_graph__closure_arg;
    MR_Word parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12;

    {
      parse_tree__module_deps_graph__add_parent_imp_deps_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__closure, (MR_Integer) 4))), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_1), ((MR_Word) parse_tree__module_deps_graph__wrapper_arg_2), &parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12);
    }
    *parse_tree__module_deps_graph__wrapper_arg_3 = ((MR_Box) (parse_tree__module_deps_graph__conv0_STATE_VARIABLE_DepsGraph_12));
  }
}

void MR_CALL 
parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0(
  MR_Word parse_tree__module_deps_graph__ModuleImports_7,
  MR_Word parse_tree__module_deps_graph__LookupModuleImports_8,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16,
  MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_0_17,
  MR_Word * parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_18)
{
  {
    MR_bool parse_tree__module_deps_graph__succeeded;
    MR_Word parse_tree__module_deps_graph__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0;
    MR_Word parse_tree__module_deps_graph__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 2)));
    MR_Word parse_tree__module_deps_graph__ParentDeps_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 4)));
    MR_Word parse_tree__module_deps_graph__IntModuleKey_13;
    MR_Word parse_tree__module_deps_graph__ImpModuleKey_14;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_22_22;
    MR_Word parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_23_23;
    MR_Word parse_tree__module_deps_graph__V_84_84;
    MR_String parse_tree__module_deps_graph__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 0)));
    MR_Word parse_tree__module_deps_graph__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 1)));
    MR_Word parse_tree__module_deps_graph__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 3)));
    MR_Word parse_tree__module_deps_graph__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 5)));
    MR_Word parse_tree__module_deps_graph__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 6)));
    MR_Word parse_tree__module_deps_graph__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 7)));
    MR_Word parse_tree__module_deps_graph__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 8)));
    MR_Word parse_tree__module_deps_graph__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 9)));
    MR_Word parse_tree__module_deps_graph__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 10)));
    MR_Word parse_tree__module_deps_graph__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 11)));
    MR_Word parse_tree__module_deps_graph__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 12)));
    MR_Word parse_tree__module_deps_graph__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 13)));
    MR_Word parse_tree__module_deps_graph__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 14)));
    MR_Word parse_tree__module_deps_graph__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 15)));
    MR_Word parse_tree__module_deps_graph__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 16)));
    MR_Word parse_tree__module_deps_graph__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 17)));
    MR_Word parse_tree__module_deps_graph__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 18)));
    MR_Word parse_tree__module_deps_graph__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 19)));
    MR_Word parse_tree__module_deps_graph__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 20)));
    MR_Word parse_tree__module_deps_graph__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 21)));
    MR_Word parse_tree__module_deps_graph__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 22)));
    MR_Word parse_tree__module_deps_graph__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 23)));
    MR_Word parse_tree__module_deps_graph__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 24)));
    MR_Word parse_tree__module_deps_graph__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 25)));
    MR_String parse_tree__module_deps_graph__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__ModuleImports_7, (MR_Integer) 26)));
    MR_Box parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16;

    {
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_77_77, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_11)), &parse_tree__module_deps_graph__IntModuleKey_13, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_0_15, &parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19);
    }
    {
      parse_tree__module_deps_graph__add_int_deps_4_p_0(parse_tree__module_deps_graph__IntModuleKey_13, parse_tree__module_deps_graph__ModuleImports_7, parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_19_19, &parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20);
    }
    {
      parse_tree__module_deps_graph__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_84_84, 0) = ((MR_Box) (&parse_tree__module_deps_graph_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_84_84, 1) = ((MR_Box) (parse_tree__module_deps_graph__add_module_and_imports_to_deps_graph_6_p_0_1));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_84_84, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_84_84, 3) = ((MR_Box) (parse_tree__module_deps_graph__LookupModuleImports_8));
      MR_hl_field(MR_mktag(0), parse_tree__module_deps_graph__V_84_84, 4) = ((MR_Box) (parse_tree__module_deps_graph__IntModuleKey_13));
    }
    {
      mercury__set__fold_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &parse_tree__module_deps_graph_scalar_common_1[0], parse_tree__module_deps_graph__V_84_84, parse_tree__module_deps_graph__ParentDeps_12, ((MR_Box) (parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_20_20)), &parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16);
    }
    *parse_tree__module_deps_graph__STATE_VARIABLE_IntDepsGraph_16 = ((MR_Word) parse_tree__module_deps_graph__conv1_STATE_VARIABLE_IntDepsGraph_16);
    {
      mercury__digraph__add_vertex_4_p_0(parse_tree__module_deps_graph__TypeCtorInfo_77_77, ((MR_Box) (parse_tree__module_deps_graph__ModuleName_11)), &parse_tree__module_deps_graph__ImpModuleKey_14, parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_0_17, &parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_22_22);
    }
    {
      parse_tree__module_deps_graph__add_imp_deps_4_p_0(parse_tree__module_deps_graph__ImpModuleKey_14, parse_tree__module_deps_graph__ModuleImports_7, parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_22_22, &parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_23_23);
    }
    {
      parse_tree__module_deps_graph__add_parent_imp_deps_set_5_p_0(parse_tree__module_deps_graph__LookupModuleImports_8, parse_tree__module_deps_graph__ImpModuleKey_14, parse_tree__module_deps_graph__ParentDeps_12, parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_23_23, parse_tree__module_deps_graph__STATE_VARIABLE_ImpDepsGraph_18);
    }
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

/* :- end_module parse_tree.module_deps_graph. */
