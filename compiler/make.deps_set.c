/*
** Automatically generated from `make.deps_set.m'
** by the Mercury compiler,
** version rotd-2020-03-27
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


// :- module make.deps_set.
// :- implementation.

/*
INIT mercury__make__deps_set__init
ENDINIT
*/

#include "make.deps_set.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.handle_options.mih"
#include "libs.md4.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "make.build.mih"
#include "make.dependencies.mih"
#include "make.module_dep_file.mih"
#include "make.module_target.mih"
#include "make.options_file.mih"
#include "make.program_target.mih"
#include "make.util.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.parse_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.read_modules.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0;

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_dependency_file_index_0[1];

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_module_index_0[1];

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_module_index_0;

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2);

static MR_Integer MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2);

static MR_Integer MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__deps_set__dependency_file_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word DepIndex_6,
  MR_Word List0_7,
  MR_Word * List_8);

static void MR_CALL 
make__deps_set__dependency_files_to_index_set_2_5_p_0(
  MR_Word DepFiles_6,
  MR_Word STATE_VARIABLE_Set_0_10,
  MR_Word * STATE_VARIABLE_Set_11,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13);

static void MR_CALL 
make__deps_set__module_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word ModuleIndex_6,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10);

static void MR_CALL 
make__deps_set__dependency_file_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__deps_set__dependency_files_to_index_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
make__deps_set__module_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
make__deps_set__module_names_to_index_set_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5);

static MR_bool MR_CALL 
make__deps_set____Unify____dependency_file_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_set____Compare____dependency_file_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_set____Unify____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__deps_set____Compare____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__deps_set____Unify____module_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_set____Compare____module_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box make__deps_set_scalar_common_1[5][2];

static /* final */ const MR_Box make__deps_set_scalar_common_2[2][7];

static /* final */ const MR_Box make__deps_set_scalar_common_3[1][8];

static /* final */ const MR_Box make__deps_set_scalar_common_4[1][3];




static /* final */ const MR_Box make__deps_set_scalar_common_1[5][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row 3 */
  {
    ((MR_Box) (base_typeclass_info_enum__enum__arity1__make__deps_set__dependency_file_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__deps_set_scalar_common_2[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__deps_set__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__deps_set__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__deps_set_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__deps_set_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&make__deps_set_scalar_common_3[0])),
    ((MR_Box) (make__deps_set__dependency_files_to_index_set_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "make.build.mh"



static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__list__pti_list_1__plain_make__dependencies__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0)
  }
};

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_dependency_file_index_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0 = {
  (MR_String) "dependency_file_index",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__deps_set____Unify____dependency_file_index_0_0_10001)),
  ((MR_Box) (make__deps_set____Compare____dependency_file_index_0_0_10001)),
  (MR_String) "make.deps_set",
  (MR_String) "dependency_file_index",
  {     &make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0 },
  {     &make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__deps_set__make__deps_set__functor_number_map_dependency_file_index_0
};

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

const MR_TypeCtorInfo_Struct make__deps_set__make__deps_set__type_ctor_info_deps_set_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__deps_set____Unify____deps_set_1_0_10001)),
  ((MR_Box) (make__deps_set____Compare____deps_set_1_0_10001)),
  (MR_String) "make.deps_set",
  (MR_String) "deps_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_module_index_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_module_index_0 = {
  (MR_String) "module_index",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__deps_set__make__deps_set__type_ctor_info_module_index_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__deps_set____Unify____module_index_0_0_10001)),
  ((MR_Box) (make__deps_set____Compare____module_index_0_0_10001)),
  (MR_String) "make.deps_set",
  (MR_String) "module_index",
  {     &make__deps_set__make__deps_set__notag_functor_desc_module_index_0 },
  {     &make__deps_set__make__deps_set__notag_functor_desc_module_index_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__deps_set__make__deps_set__functor_number_map_module_index_0
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__make__deps_set__dependency_file_index__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__from_int_1_1_f_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__make__deps_set__module_index__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__from_int_1_1_f_0_10001))
};

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = (MR_Word) (I_3);
    return MR_TRUE;
  }
}

static MR_Integer MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer I_3 = (MR_Integer) (HeadVar__1_1);

    return I_3;
  }
}

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__from_int_1_1_f_0(
  MR_Integer I_3,
  MR_Word * HeadVar__2_2)
{
  {
    *HeadVar__2_2 = (MR_Word) (I_3);
    return MR_TRUE;
  }
}

static MR_Integer MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__to_int_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer I_3 = (MR_Integer) (HeadVar__1_1);

    return I_3;
  }
}

void MR_CALL 
make__deps_set____Compare____module_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
make__deps_set____Unify____module_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

void MR_CALL 
make__deps_set____Compare____deps_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
make__deps_set____Unify____deps_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
make__deps_set____Compare____dependency_file_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_6 == CastY_7);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = (MR_Integer) (HeadVar__2_2);
      MR_Integer ArgY1_5 = (MR_Integer) (HeadVar__3_3);

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

MR_bool MR_CALL 
make__deps_set____Unify____dependency_file_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_5 == CastY_6);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer ArgY1_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (ArgX1_3 == ArgY1_4);
    }
    return succeeded;
  }
}

static void MR_CALL 
make__deps_set__dependency_file_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word DepIndex_6,
  MR_Word List0_7,
  MR_Word * List_8)
{
  {
    MR_Word DepFile_9;
    MR_Box Reverse_14;
    MR_Integer I_16;
    MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))));
    MR_Box conv0_DepFile_9;

    Reverse_14 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 1))));
    I_16 = (MR_Integer) (DepIndex_6);
    conv0_DepFile_9 = mercury__version_array__lookup_2_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Reverse_14, I_16);
    DepFile_9 = ((MR_Word) (conv0_DepFile_9));
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DepFile_9));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (List0_7));
    }
  }
}

static void MR_CALL 
make__deps_set__dependency_files_to_index_set_2_5_p_0(
  MR_Word DepFiles_6,
  MR_Word STATE_VARIABLE_Set_0_10,
  MR_Word * STATE_VARIABLE_Set_11,
  MR_Word STATE_VARIABLE_Info_0_12,
  MR_Word * STATE_VARIABLE_Info_13)
{
  {
    MR_Word DepIndex_9;

    make__deps_set__dependency_file_to_index_4_p_0(DepFiles_6, &DepIndex_9, STATE_VARIABLE_Info_0_12, STATE_VARIABLE_Info_13);
    mercury__sparse_bitset__insert_3_p_0((MR_Word) (&make__deps_set_scalar_common_1[3]), ((MR_Box) (DepIndex_9)), STATE_VARIABLE_Set_0_10, STATE_VARIABLE_Set_11);
  }
}

static void MR_CALL 
make__deps_set__module_index_set_to_plain_set_2_4_p_0(
  MR_Word Info_5,
  MR_Word ModuleIndex_6,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10)
{
  {
    MR_Word ModuleName_8;
    MR_Box Reverse_17;
    MR_Integer I_19;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6))));
    MR_Box conv0_ModuleName_8;

    Reverse_17 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 1))));
    I_19 = (MR_Integer) (ModuleIndex_6);
    conv0_ModuleName_8 = mercury__version_array__lookup_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Reverse_17, I_19);
    ModuleName_8 = ((MR_Word) (conv0_ModuleName_8));
    mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Set_0_9, STATE_VARIABLE_Set_10);
  }
}

static void MR_CALL 
make__deps_set__dependency_file_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_List_8;

    make__deps_set__dependency_file_index_set_to_plain_set_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_List_8);
    *wrapper_arg_3 = ((MR_Box) (conv0_List_8));
  }
}

void MR_CALL 
make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(
  MR_Word Info_4,
  MR_Word DepIndices_5,
  MR_Word * DepFiles_6)
{
  {
    MR_Word DepFilesList_7;
    MR_Word Var_8;
    MR_Box conv1_DepFilesList_7;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_8, 0) = ((MR_Box) (&make__deps_set_scalar_common_2[1]));
      MR_hl_field(MR_mktag(0), Var_8, 1) = ((MR_Box) (make__deps_set__dependency_file_index_set_to_plain_set_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_8, 3) = ((MR_Box) (Info_4));
    }
    mercury__sparse_bitset__foldl_4_p_0((MR_Word) (&make__deps_set_scalar_common_1[4]), (MR_Word) (&make__deps_set_scalar_common_1[3]), Var_8, DepIndices_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DepFilesList_7);
    DepFilesList_7 = ((MR_Word) (conv1_DepFilesList_7));
    *DepFiles_6 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), DepFilesList_7);
  }
}

static void MR_CALL 
make__deps_set__dependency_files_to_index_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Set_11;
    MR_Word conv0_STATE_VARIABLE_Info_13;

    make__deps_set__dependency_files_to_index_set_2_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Set_11, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_13);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Set_11));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_13));
  }
}

void MR_CALL 
make__deps_set__dependency_files_to_index_set_4_p_0(
  MR_Word DepFiles_5,
  MR_Word * DepIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Var_11;
    MR_Box conv3_DepIndexSet_6;
    MR_Box conv2_STATE_VARIABLE_Info_9;

    Var_11 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
    mercury__list__foldl2_6_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__deps_set_scalar_common_1[2]), (MR_Word) (&make__make__type_ctor_info_make_info_0), (MR_Word) (&make__deps_set_scalar_common_4[0]), DepFiles_5, ((MR_Box) (Var_11)), &conv3_DepIndexSet_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_9);
    *DepIndexSet_6 = ((MR_Word) (conv3_DepIndexSet_6));
    *STATE_VARIABLE_Info_9 = ((MR_Word) (conv2_STATE_VARIABLE_Info_9));
  }
}

void MR_CALL 
make__deps_set__dependency_file_to_index_4_p_0(
  MR_Word DepFile_5,
  MR_Word * Index_6,
  MR_Word STATE_VARIABLE_Info_0_20,
  MR_Word * STATE_VARIABLE_Info_21)
{
  {
    MR_bool succeeded;
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 7))));
    MR_Word ForwardMap0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 0))));
    MR_Word Index0_10;
    MR_Box conv0_Index0_10;

    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), ForwardMap0_9, ((MR_Box) (DepFile_5)), &conv0_Index0_10);
    if (succeeded)
    {
      Index0_10 = ((MR_Word) (conv0_Index0_10));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Index_6 = Index0_10;
      *STATE_VARIABLE_Info_21 = STATE_VARIABLE_Info_0_20;
    }
    else
    {
      MR_Word Forward0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 0))));
      MR_Box Reverse0_12 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 1))));
      MR_Integer Size0_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 2))));
      MR_Integer Size_14;
      MR_Word Forward_15;
      MR_Integer TrueSize_16;
      MR_Box Reverse_18;
      MR_Word Map_19;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Integer Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Unsigned packed_word_1;

      *Index_6 = (MR_Word) (Size0_13);
      Size_14 = (MR_Integer) ((MR_Unsigned) Size0_13 + (MR_Unsigned) 1);
      mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), ((MR_Box) (DepFile_5)), ((MR_Box) (*Index_6)), Forward0_11, &Forward_15);
      TrueSize_16 = mercury__version_array__size_1_f_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Reverse0_12);
      succeeded = (Size_14 > TrueSize_16);
      if (succeeded)
      {
        MR_Integer NewSize_17;

        succeeded = (TrueSize_16 == (MR_Integer) 0);
        if (succeeded)
          NewSize_17 = (MR_Integer) 1;
        else
          NewSize_17 = (MR_Integer) ((MR_Unsigned) TrueSize_16 * (MR_Unsigned) 2);
        mercury__version_array__resize_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), NewSize_17, ((MR_Box) (DepFile_5)), Reverse0_12, &Reverse_18);
      }
      else
        mercury__version_array__set_4_p_0((MR_Word) (&make__dependencies__make__dependencies__type_ctor_info_dependency_file_0), Size0_13, ((MR_Box) (DepFile_5)), Reverse0_12, &Reverse_18);
      {
        Map_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Map_19, 0) = ((MR_Box) (Forward_15));
        MR_hl_field(MR_mktag(0), Map_19, 1) = ((MR_Box) (Reverse_18));
        MR_hl_field(MR_mktag(0), Map_19, 2) = ((MR_Box) (Size_14));
      }
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 1))));
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 2))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 3))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 4))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 5))));
      Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 6))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 8))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 9))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 10))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 11))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 12))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 13)));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 14))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 15))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 16))));
      Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 17))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 18))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_20, (MR_Integer) 19))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_21 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Map_19));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_66));
      }
    }
  }
}

static void MR_CALL 
make__deps_set__module_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Set_10;

    make__deps_set__module_index_set_to_plain_set_2_4_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_10);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_10));
  }
}

void MR_CALL 
make__deps_set__module_index_set_to_plain_set_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleIndices_5,
  MR_Word * Modules_6)
{
  {
    MR_Word Var_7;
    MR_Word Var_8;
    MR_Box conv1_Modules_6;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_7, 0) = ((MR_Box) (&make__deps_set_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), Var_7, 1) = ((MR_Box) (make__deps_set__module_index_set_to_plain_set_3_p_0_1));
      MR_hl_field(MR_mktag(0), Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_7, 3) = ((MR_Box) (Info_4));
    }
    Var_8 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
    mercury__sparse_bitset__foldl_4_p_0((MR_Word) (&make__deps_set_scalar_common_1[1]), (MR_Word) (&make__deps_set_scalar_common_1[0]), Var_7, ModuleIndices_5, ((MR_Box) (Var_8)), &conv1_Modules_6);
    *Modules_6 = ((MR_Word) (conv1_Modules_6));
  }
}

void MR_CALL 
make__deps_set__module_index_to_name_3_p_0(
  MR_Word Info_4,
  MR_Word Index_5,
  MR_Word * ModuleName_6)
{
  {
    MR_Box Reverse_8;
    MR_Integer I_10;
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_4, (MR_Integer) 6))));
    MR_Box conv0_ModuleName_6;

    Reverse_8 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1))));
    I_10 = (MR_Integer) (Index_5);
    conv0_ModuleName_6 = mercury__version_array__lookup_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Reverse_8, I_10);
    *ModuleName_6 = ((MR_Word) (conv0_ModuleName_6));
  }
}

void MR_CALL 
make__deps_set__module_names_to_index_set_4_p_0(
  MR_Word ModuleNames_5,
  MR_Word * IndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  {
    MR_Word Var_10;

    Var_10 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
    make__deps_set__module_names_to_index_set_2_5_p_0(ModuleNames_5, Var_10, IndexSet_6, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
  }
}

static void MR_CALL 
make__deps_set__module_names_to_index_set_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_Info_0_4,
  MR_Word * STATE_VARIABLE_Info_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Info_5 = STATE_VARIABLE_Info_0_4;
      *HeadVar__3_3 = HeadVar__2_2;
    }
    else
    {
      MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ModuleNames_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ModuleIndex_16;
      MR_Word STATE_VARIABLE_Info_21_21;
      MR_Word STATE_VARIABLE_Set_22_22;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_Info_0_4;

      make__deps_set__module_name_to_index_4_p_0(ModuleName_12, &ModuleIndex_16, STATE_VARIABLE_Info_0_4, &STATE_VARIABLE_Info_21_21);
      mercury__sparse_bitset__insert_3_p_0((MR_Word) (&make__deps_set_scalar_common_1[0]), ((MR_Box) (ModuleIndex_16)), HeadVar__2_2, &STATE_VARIABLE_Set_22_22);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = ModuleNames_13;
      next_value_of_HeadVar__2_2 = STATE_VARIABLE_Set_22_22;
      next_value_of_STATE_VARIABLE_Info_0_4 = STATE_VARIABLE_Info_21_21;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_Info_0_4 = next_value_of_STATE_VARIABLE_Info_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
make__deps_set__module_name_to_index_4_p_0(
  MR_Word ModuleName_5,
  MR_Word * Index_6,
  MR_Word STATE_VARIABLE_Info_0_22,
  MR_Word * STATE_VARIABLE_Info_23)
{
  {
    MR_bool succeeded;
    MR_Word Map0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 6))));
    MR_Word Forward0_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 0))));
    MR_Word Index0_12;
    MR_Box conv0_Index0_12;

    succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Forward0_9, ((MR_Box) (ModuleName_5)), &conv0_Index0_12);
    if (succeeded)
    {
      Index0_12 = ((MR_Word) (conv0_Index0_12));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *Index_6 = Index0_12;
      *STATE_VARIABLE_Info_23 = STATE_VARIABLE_Info_0_22;
    }
    else
    {
      MR_Box Reverse0_14 = ((MR_Box) ((MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 1))));
      MR_Integer Size0_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Map0_8, (MR_Integer) 2))));
      MR_Integer Size_16;
      MR_Word Forward_17;
      MR_Integer TrueSize_18;
      MR_Box Reverse_20;
      MR_Word Map_21;
      MR_Word Var_46;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_50;
      MR_Word Var_51;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Integer Var_64;
      MR_Word Var_65;
      MR_Word Var_66;
      MR_Unsigned packed_word_1;

      *Index_6 = (MR_Word) (Size0_15);
      Size_16 = (MR_Integer) ((MR_Unsigned) Size0_15 + (MR_Unsigned) 1);
      mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (*Index_6)), Forward0_9, &Forward_17);
      TrueSize_18 = mercury__version_array__size_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Reverse0_14);
      succeeded = (Size_16 > TrueSize_18);
      if (succeeded)
      {
        MR_Integer NewSize_19;

        succeeded = (TrueSize_18 == (MR_Integer) 0);
        if (succeeded)
          NewSize_19 = (MR_Integer) 1;
        else
          NewSize_19 = (MR_Integer) ((MR_Unsigned) TrueSize_18 * (MR_Unsigned) 2);
        mercury__version_array__resize_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), NewSize_19, ((MR_Box) (ModuleName_5)), Reverse0_14, &Reverse_20);
      }
      else
        mercury__version_array__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Size0_15, ((MR_Box) (ModuleName_5)), Reverse0_14, &Reverse_20);
      {
        Map_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Map_21, 0) = ((MR_Box) (Forward_17));
        MR_hl_field(MR_mktag(0), Map_21, 1) = ((MR_Box) (Reverse_20));
        MR_hl_field(MR_mktag(0), Map_21, 2) = ((MR_Box) (Size_16));
      }
      Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 0))));
      Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 1))));
      Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 2))));
      Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 3))));
      Var_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 4))));
      Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 5))));
      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 7))));
      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 8))));
      Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 9))));
      Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 10))));
      Var_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 11))));
      Var_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 12))));
      packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 13)));
      Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 14))));
      Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 15))));
      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 16))));
      Var_64 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 17))));
      Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 18))));
      Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_Info_0_22, (MR_Integer) 19))));
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (20 * sizeof(MR_Word)), NULL, NULL);
        *STATE_VARIABLE_Info_23 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_47));
        MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_49));
        MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_50));
        MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Map_21));
        MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_53));
        MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_55));
        MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (Var_56));
        MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (Var_58));
        MR_hl_field(MR_mktag(0), base, 13) = (MR_Box) (packed_word_1);
        MR_hl_field(MR_mktag(0), base, 14) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(0), base, 15) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(0), base, 16) = ((MR_Box) (Var_63));
        MR_hl_field(MR_mktag(0), base, 17) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(0), base, 18) = ((MR_Box) (Var_65));
        MR_hl_field(MR_mktag(0), base, 19) = ((MR_Box) (Var_66));
      }
    }
  }
}

static MR_bool MR_CALL 
make__deps_set____Unify____dependency_file_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__deps_set____Unify____dependency_file_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__deps_set____Compare____dependency_file_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__deps_set____Compare____dependency_file_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__deps_set____Unify____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = make__deps_set____Unify____deps_set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
make__deps_set____Compare____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__deps_set____Compare____deps_set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
make__deps_set____Unify____module_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = make__deps_set____Unify____module_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
make__deps_set____Compare____module_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    make__deps_set____Compare____module_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_Box MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_I_3;

    conv0_I_3 = make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__to_int_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_I_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = make__deps_set__ClassMethod_for_enum__enum____make__deps_set__dependency_file_index__arity0______enum__from_int_1_1_f_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Integer conv0_I_3;

    conv0_I_3 = make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__to_int_1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv0_I_3));
    return wrapper_arg_2;
  }
}

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__from_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    succeeded = make__deps_set__ClassMethod_for_enum__enum____make__deps_set__module_index__arity0______enum__from_int_1_1_f_0(((MR_Integer) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    if (succeeded)
    {
      *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
      succeeded = MR_TRUE;
    }
    return succeeded;
  }
}

void mercury__make__deps_set__init(void)
{
}

void mercury__make__deps_set__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0);
	MR_register_type_ctor_info(&make__deps_set__make__deps_set__type_ctor_info_deps_set_1);
	MR_register_type_ctor_info(&make__deps_set__make__deps_set__type_ctor_info_module_index_0);
}

void mercury__make__deps_set__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__deps_set__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.deps_set.
