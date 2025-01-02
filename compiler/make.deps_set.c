/*
** Automatically generated from `make.deps_set.m'
** by the Mercury compiler,
** version rotd-2025-01-02
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
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
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
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "version_hash_table.mih"
#include "backend_libs.compile_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.timestamp.mih"
#include "make.build.mih"
#include "make.deps_cache.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"




static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0;

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_dependency_file_index_0[1];

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0;

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_module_index_0[1];

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_module_index_0;

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__from_uint_2_2_p_0(
  MR_Unsigned U_3,
  MR_Word * HeadVar__2_2);

static MR_Unsigned MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__to_uint_1_1_f_0(
  MR_Word HeadVar__1_1);

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__from_uint_2_2_p_0(
  MR_Unsigned U_3,
  MR_Word * HeadVar__2_2);

static MR_Unsigned MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__to_uint_1_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
make__deps_set__acc_dependency_file_index_set_to_plain_set_4_p_0(
  MR_Word Info_5,
  MR_Word DepIndex_6,
  MR_Word List0_7,
  MR_Word * List_8);

static void MR_CALL 
make__deps_set__acc_file_names_to_index_set_5_p_0(
  MR_String FileName_6,
  MR_Word STATE_VARIABLE_Set_0_11,
  MR_Word * STATE_VARIABLE_Set_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14);

static void MR_CALL 
make__deps_set__acc_dependency_files_to_index_set_5_p_0(
  MR_Word DepFile0_6,
  MR_Word STATE_VARIABLE_Set_0_15,
  MR_Word * STATE_VARIABLE_Set_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18);

static void MR_CALL 
make__deps_set__acc_module_index_set_to_plain_set_4_p_0(
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
make__deps_set__file_names_to_index_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

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
make__deps_set__module_names_to_index_set_loop_5_p_0(
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
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box make__deps_set_scalar_common_1[5][2];

static /* final */ const MR_Box make__deps_set_scalar_common_2[2][7];

static /* final */ const MR_Box make__deps_set_scalar_common_3[2][8];

static /* final */ const MR_Box make__deps_set_scalar_common_4[2][3];




static /* final */ const MR_Box make__deps_set_scalar_common_1[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   3 */
  {
    ((MR_Box) (base_typeclass_info_enum__uenum__arity1__make__deps_set__dependency_file_index__arity0__)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__deps_set_scalar_common_2[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__deps_set__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__deps_set__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0))
  },
};

static /* final */ const MR_Box make__deps_set_scalar_common_3[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0)),
    ((MR_Box) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0)),
    ((MR_Box) (&make__make_info__make__make_info__type_ctor_info_make_info_0))
  },
};

static /* final */ const MR_Box make__deps_set_scalar_common_4[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&make__deps_set_scalar_common_3[0])),
    ((MR_Box) (make__deps_set__dependency_files_to_index_set_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__deps_set_scalar_common_3[1])),
    ((MR_Box) (make__deps_set__file_names_to_index_set_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"


static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__set_ordlist__pti_set_ordlist_1__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__plain_make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__list__pti_list_1__plain_make__make_info__type_ctor_info_dependency_file_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0) }
};

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_dependency_file_index_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0 = {
  (MR_String) "dependency_file_index",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__deps_set____Unify____dependency_file_index_0_0_10001)),
  ((MR_Box) (make__deps_set____Compare____dependency_file_index_0_0_10001)),
  (MR_String) "make.deps_set",
  (MR_String) "dependency_file_index",
  { &make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0 },
  { &make__deps_set__make__deps_set__notag_functor_desc_dependency_file_index_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__deps_set__make__deps_set__functor_number_map_dependency_file_index_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_set__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

const MR_TypeCtorInfo_Struct make__deps_set__make__deps_set__type_ctor_info_deps_set_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (make__deps_set____Unify____deps_set_1_0_10001)),
  ((MR_Box) (make__deps_set____Compare____deps_set_1_0_10001)),
  (MR_String) "make.deps_set",
  (MR_String) "deps_set",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__deps_set__sparse_bitset__pti_sparse_bitset_1__pseudo_1) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_Integer make__deps_set__make__deps_set__functor_number_map_module_index_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc make__deps_set__make__deps_set__notag_functor_desc_module_index_0 = {
  (MR_String) "module_index",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct make__deps_set__make__deps_set__type_ctor_info_module_index_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (make__deps_set____Unify____module_index_0_0_10001)),
  ((MR_Box) (make__deps_set____Compare____module_index_0_0_10001)),
  (MR_String) "make.deps_set",
  (MR_String) "module_index",
  { &make__deps_set__make__deps_set__notag_functor_desc_module_index_0 },
  { &make__deps_set__make__deps_set__notag_functor_desc_module_index_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  make__deps_set__make__deps_set__functor_number_map_module_index_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_enum__uenum__arity1__make__deps_set__dependency_file_index__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__to_uint_1_1_f_0_10001)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__from_uint_2_2_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_enum__uenum__arity1__make__deps_set__module_index__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__to_uint_1_1_f_0_10001)),
  ((MR_Box) (make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__from_uint_2_2_p_0_10001))
};

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__from_uint_2_2_p_0(
  MR_Unsigned U_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) (U_3);
  return MR_TRUE;
}

static MR_Unsigned MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__to_uint_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Unsigned U_3 = (MR_Unsigned) (HeadVar__1_1);

  return U_3;
}

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__from_uint_2_2_p_0(
  MR_Unsigned U_3,
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) (U_3);
  return MR_TRUE;
}

static MR_Unsigned MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__to_uint_1_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_Unsigned U_3 = (MR_Unsigned) (HeadVar__1_1);

  return U_3;
}

void MR_CALL 
make__deps_set____Compare____module_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Unsigned ArgX1_4 = (MR_Unsigned) (HeadVar__2_2);
    MR_Unsigned ArgY1_5 = (MR_Unsigned) (HeadVar__3_3);

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

MR_bool MR_CALL 
make__deps_set____Unify____module_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Unsigned ArgX1_3 = (MR_Unsigned) (HeadVar__1_1);
    MR_Unsigned ArgY1_4 = (MR_Unsigned) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
make__deps_set____Compare____deps_set_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_6, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
make__deps_set____Unify____deps_set_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_5, Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
make__deps_set____Compare____dependency_file_index_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Unsigned ArgX1_4 = (MR_Unsigned) (HeadVar__2_2);
    MR_Unsigned ArgY1_5 = (MR_Unsigned) (HeadVar__3_3);

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

MR_bool MR_CALL 
make__deps_set____Unify____dependency_file_index_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Unsigned ArgX1_3 = (MR_Unsigned) (HeadVar__1_1);
    MR_Unsigned ArgY1_4 = (MR_Unsigned) (HeadVar__2_2);

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

static void MR_CALL 
make__deps_set__acc_dependency_file_index_set_to_plain_set_4_p_0(
  MR_Word Info_5,
  MR_Word DepIndex_6,
  MR_Word List0_7,
  MR_Word * List_8)
{
  MR_Word DepFile_9;
  MR_Box ReverseMap_11;
  MR_Unsigned I_13;
  MR_Word DepFile0_14;
  MR_Word Var_19;
  MR_Integer Var_20;
  MR_Box conv0_DepFile0_14;

  Var_19 = make__make_info__make_info_get_dep_file_index_map_1_f_0(Info_5);
  ReverseMap_11 = ((MR_Box) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
  I_13 = (MR_Unsigned) (DepIndex_6);
  Var_20 = mercury__uint__cast_to_int_1_f_0(I_13);
  mercury__version_array__lookup_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), ReverseMap_11, Var_20, &conv0_DepFile0_14);
  DepFile0_14 = ((MR_Word) (conv0_DepFile0_14));
  if (((MR_tag((MR_Word) DepFile0_14)) == (MR_Integer) 1))
  {
    MR_String FileName_18 = ((MR_String) ((MR_hl_field(1, DepFile0_14, (MR_Integer) 0))));

    {
      DepFile_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DepFile_9, 0) = ((MR_Box) (FileName_18));
    }
  }
  else
  {
    MR_Word ModuleIndex_15 = ((MR_Word) ((MR_hl_field(0, DepFile0_14, (MR_Integer) 0))));
    MR_Word FileType_16 = ((MR_Word) ((MR_hl_field(0, DepFile0_14, (MR_Integer) 1))));
    MR_Word ModuleName_17;
    MR_Word Var_21;
    MR_Box ReverseMap_24;
    MR_Unsigned I_26;
    MR_Word Var_27;
    MR_Integer Var_28;
    MR_Box conv1_ModuleName_17;

    Var_27 = make__make_info__make_info_get_module_index_map_1_f_0(Info_5);
    ReverseMap_24 = ((MR_Box) ((MR_hl_field(0, Var_27, (MR_Integer) 1))));
    I_26 = (MR_Unsigned) (ModuleIndex_15);
    Var_28 = mercury__uint__cast_to_int_1_f_0(I_26);
    conv1_ModuleName_17 = mercury__version_array__lookup_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReverseMap_24, Var_28);
    ModuleName_17 = ((MR_Word) (conv1_ModuleName_17));
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_21, 0) = ((MR_Box) (ModuleName_17));
      MR_hl_field(0, Var_21, 1) = ((MR_Box) (FileType_16));
    }
    DepFile_9 = (MR_Word) ((MR_Word) (Var_21));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *List_8 = base;
    MR_hl_field(1, base, 0) = ((MR_Box) (DepFile_9));
    MR_hl_field(1, base, 1) = ((MR_Box) (List0_7));
  }
}

static void MR_CALL 
make__deps_set__acc_file_names_to_index_set_5_p_0(
  MR_String FileName_6,
  MR_Word STATE_VARIABLE_Set_0_11,
  MR_Word * STATE_VARIABLE_Set_12,
  MR_Word STATE_VARIABLE_Info_0_13,
  MR_Word * STATE_VARIABLE_Info_14)
{
  MR_Word DepFile_9;
  MR_Word DepIndex_10;

  {
    DepFile_9 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, DepFile_9, 0) = ((MR_Box) (FileName_6));
  }
  make__deps_set__dependency_file_to_index_4_p_0(DepFile_9, &DepIndex_10, STATE_VARIABLE_Info_0_13, STATE_VARIABLE_Info_14);
  mercury__sparse_bitset__insert_3_p_0((MR_Word) (&make__deps_set_scalar_common_1[3]), ((MR_Box) (DepIndex_10)), STATE_VARIABLE_Set_0_11, STATE_VARIABLE_Set_12);
}

static void MR_CALL 
make__deps_set__acc_dependency_files_to_index_set_5_p_0(
  MR_Word DepFile0_6,
  MR_Word STATE_VARIABLE_Set_0_15,
  MR_Word * STATE_VARIABLE_Set_16,
  MR_Word STATE_VARIABLE_Info_0_17,
  MR_Word * STATE_VARIABLE_Info_18)
{
  MR_Word DepFile_12;
  MR_Word DepIndex_14;
  MR_Word STATE_VARIABLE_Info_20_20;

  if (((MR_tag((MR_Word) DepFile0_6)) == (MR_Integer) 1))
  {
    MR_String FileName_13 = ((MR_String) ((MR_hl_field(1, DepFile0_6, (MR_Integer) 0))));

    {
      DepFile_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, DepFile_12, 0) = ((MR_Box) (FileName_13));
    }
    STATE_VARIABLE_Info_20_20 = STATE_VARIABLE_Info_0_17;
  }
  else
  {
    MR_Word ModuleName_9;
    MR_Word TargetType_10;
    MR_Word ModuleIndex_11;
    MR_Word Var_19 = (MR_Word) ((MR_Word) (DepFile0_6));

    ModuleName_9 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 0))));
    TargetType_10 = ((MR_Word) ((MR_hl_field(0, Var_19, (MR_Integer) 1))));
    make__deps_set__module_name_to_index_4_p_0(ModuleName_9, &ModuleIndex_11, STATE_VARIABLE_Info_0_17, &STATE_VARIABLE_Info_20_20);
    {
      DepFile_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, DepFile_12, 0) = ((MR_Box) (ModuleIndex_11));
      MR_hl_field(0, DepFile_12, 1) = ((MR_Box) (TargetType_10));
    }
  }
  make__deps_set__dependency_file_to_index_4_p_0(DepFile_12, &DepIndex_14, STATE_VARIABLE_Info_20_20, STATE_VARIABLE_Info_18);
  mercury__sparse_bitset__insert_3_p_0((MR_Word) (&make__deps_set_scalar_common_1[3]), ((MR_Box) (DepIndex_14)), STATE_VARIABLE_Set_0_15, STATE_VARIABLE_Set_16);
}

static void MR_CALL 
make__deps_set__acc_module_index_set_to_plain_set_4_p_0(
  MR_Word Info_5,
  MR_Word ModuleIndex_6,
  MR_Word STATE_VARIABLE_Set_0_9,
  MR_Word * STATE_VARIABLE_Set_10)
{
  MR_Word ModuleName_8;
  MR_Box ReverseMap_13;
  MR_Unsigned I_15;
  MR_Word Var_16;
  MR_Integer Var_17;
  MR_Box conv0_ModuleName_8;

  Var_16 = make__make_info__make_info_get_module_index_map_1_f_0(Info_5);
  ReverseMap_13 = ((MR_Box) ((MR_hl_field(0, Var_16, (MR_Integer) 1))));
  I_15 = (MR_Unsigned) (ModuleIndex_6);
  Var_17 = mercury__uint__cast_to_int_1_f_0(I_15);
  conv0_ModuleName_8 = mercury__version_array__lookup_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReverseMap_13, Var_17);
  ModuleName_8 = ((MR_Word) (conv0_ModuleName_8));
  mercury__set__insert_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ((MR_Box) (ModuleName_8)), STATE_VARIABLE_Set_0_9, STATE_VARIABLE_Set_10);
}

static void MR_CALL 
make__deps_set__dependency_file_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_List_8;

  make__deps_set__acc_dependency_file_index_set_to_plain_set_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_List_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_List_8));
}

void MR_CALL 
make__deps_set__dependency_file_index_set_to_plain_set_3_p_0(
  MR_Word Info_4,
  MR_Word DepIndices_5,
  MR_Word * DepFiles_6)
{
  MR_Word DepFilesList_7;
  MR_Word Var_8;
  MR_Box conv1_DepFilesList_7;

  {
    Var_8 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_8, 0) = ((MR_Box) (&make__deps_set_scalar_common_2[1]));
    MR_hl_field(0, Var_8, 1) = ((MR_Box) (make__deps_set__dependency_file_index_set_to_plain_set_3_p_0_1));
    MR_hl_field(0, Var_8, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_8, 3) = ((MR_Box) (Info_4));
  }
  mercury__sparse_bitset__foldl_4_p_0((MR_Word) (&make__deps_set_scalar_common_1[4]), (MR_Word) (&make__deps_set_scalar_common_1[3]), Var_8, DepIndices_5, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_DepFilesList_7);
  DepFilesList_7 = ((MR_Word) (conv1_DepFilesList_7));
  *DepFiles_6 = mercury__set__list_to_set_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), DepFilesList_7);
}

static void MR_CALL 
make__deps_set__file_names_to_index_set_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Set_12;
  MR_Word conv0_STATE_VARIABLE_Info_14;

  make__deps_set__acc_file_names_to_index_set_5_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Set_12, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_14);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Set_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_14));
}

void MR_CALL 
make__deps_set__file_names_to_index_set_4_p_0(
  MR_Word FileNames_5,
  MR_Word * DepIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Var_11;
  MR_Box conv3_DepIndexSet_6;
  MR_Box conv2_STATE_VARIABLE_Info_9;

  Var_11 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__deps_set_scalar_common_1[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__deps_set_scalar_common_4[1]), FileNames_5, ((MR_Box) (Var_11)), &conv3_DepIndexSet_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_9);
  *DepIndexSet_6 = ((MR_Word) (conv3_DepIndexSet_6));
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv2_STATE_VARIABLE_Info_9));
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Set_16;
  MR_Word conv0_STATE_VARIABLE_Info_18;

  make__deps_set__acc_dependency_files_to_index_set_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_Set_16, ((MR_Word) (wrapper_arg_4)), &conv0_STATE_VARIABLE_Info_18);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Set_16));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Info_18));
}

void MR_CALL 
make__deps_set__dependency_files_to_index_set_4_p_0(
  MR_Word DepFiles_5,
  MR_Word * DepIndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Var_11;
  MR_Box conv3_DepIndexSet_6;
  MR_Box conv2_STATE_VARIABLE_Info_9;

  Var_11 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0));
  mercury__list__foldl2_6_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_0), (MR_Word) (&make__deps_set_scalar_common_1[2]), (MR_Word) (&make__make_info__make__make_info__type_ctor_info_make_info_0), (MR_Word) (&make__deps_set_scalar_common_4[0]), DepFiles_5, ((MR_Box) (Var_11)), &conv3_DepIndexSet_6, ((MR_Box) (STATE_VARIABLE_Info_0_8)), &conv2_STATE_VARIABLE_Info_9);
  *DepIndexSet_6 = ((MR_Word) (conv3_DepIndexSet_6));
  *STATE_VARIABLE_Info_9 = ((MR_Word) (conv2_STATE_VARIABLE_Info_9));
}

void MR_CALL 
make__deps_set__dependency_file_to_index_4_p_0(
  MR_Word DepFile_5,
  MR_Word * Index_6,
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word Map0_8;
  MR_Word ForwardMap0_9;
  MR_Word Index0_12;
  MR_Box conv0_Index0_12;

  Map0_8 = make__make_info__make_info_get_dep_file_index_map_1_f_0(STATE_VARIABLE_Info_0_23);
  ForwardMap0_9 = ((MR_Word) ((MR_hl_field(0, Map0_8, (MR_Integer) 0))));
  succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), ForwardMap0_9, ((MR_Box) (DepFile_5)), &conv0_Index0_12);
  if (succeeded)
  {
    Index0_12 = ((MR_Word) (conv0_Index0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Index_6 = Index0_12;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Box ReverseMap0_14 = ((MR_Box) ((MR_hl_field(0, Map0_8, (MR_Integer) 1))));
    MR_Unsigned Slot_16 = ((MR_Unsigned) ((MR_hl_field(0, Map0_8, (MR_Integer) 2))));
    MR_Unsigned USize_17;
    MR_Word ForwardMap_18;
    MR_Integer RevSize0_19;
    MR_Box ReverseMap_21;
    MR_Word Map_22;
    MR_Integer Var_26;

    *Index_6 = (MR_Word) (Slot_16);
    USize_17 = (Slot_16 + (MR_Unsigned) 1U);
    mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0), ((MR_Box) (DepFile_5)), ((MR_Box) (*Index_6)), ForwardMap0_9, &ForwardMap_18);
    RevSize0_19 = mercury__version_array__size_1_f_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), ReverseMap0_14);
    Var_26 = mercury__uint__cast_to_int_1_f_0(USize_17);
    succeeded = (Var_26 > RevSize0_19);
    if (succeeded)
    {
      MR_Integer RevSize_20;

      succeeded = (RevSize0_19 == (MR_Integer) 0);
      if (succeeded)
        RevSize_20 = (MR_Integer) 1;
      else
        RevSize_20 = (MR_Integer) ((MR_Unsigned) RevSize0_19 * (MR_Unsigned) 2);
      mercury__version_array__resize_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), RevSize_20, ((MR_Box) (DepFile_5)), ReverseMap0_14, &ReverseMap_21);
    }
    else
    {
      MR_Integer Var_27;

      Var_27 = mercury__uint__cast_to_int_1_f_0(Slot_16);
      mercury__version_array__set_4_p_0((MR_Word) (&make__make_info__make__make_info__type_ctor_info_dependency_file_with_module_index_0), Var_27, ((MR_Box) (DepFile_5)), ReverseMap0_14, &ReverseMap_21);
    }
    {
      Map_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Map_22, 0) = ((MR_Box) (ForwardMap_18));
      MR_hl_field(0, Map_22, 1) = ((MR_Box) (ReverseMap_21));
      MR_hl_field(0, Map_22, 2) = ((MR_Box) (USize_17));
    }
    make__make_info__make_info_set_dep_file_index_map_3_p_0(Map_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
  }
}

static void MR_CALL 
make__deps_set__module_index_set_to_plain_set_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_Set_10;

  make__deps_set__acc_module_index_set_to_plain_set_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_Set_10);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Set_10));
}

void MR_CALL 
make__deps_set__module_index_set_to_plain_set_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleIndices_5,
  MR_Word * Modules_6)
{
  MR_Word Var_7;
  MR_Word Var_8;
  MR_Box conv1_Modules_6;

  {
    Var_7 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_7, 0) = ((MR_Box) (&make__deps_set_scalar_common_2[0]));
    MR_hl_field(0, Var_7, 1) = ((MR_Box) (make__deps_set__module_index_set_to_plain_set_3_p_0_1));
    MR_hl_field(0, Var_7, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_7, 3) = ((MR_Box) (Info_4));
  }
  Var_8 = mercury__set__init_0_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0));
  mercury__sparse_bitset__foldl_4_p_0((MR_Word) (&make__deps_set_scalar_common_1[1]), (MR_Word) (&make__deps_set_scalar_common_1[0]), Var_7, ModuleIndices_5, ((MR_Box) (Var_8)), &conv1_Modules_6);
  *Modules_6 = ((MR_Word) (conv1_Modules_6));
}

void MR_CALL 
make__deps_set__module_index_to_name_3_p_0(
  MR_Word Info_4,
  MR_Word Index_5,
  MR_Word * ModuleName_6)
{
  MR_Box ReverseMap_8;
  MR_Unsigned I_10;
  MR_Word Var_11;
  MR_Integer Var_12;
  MR_Box conv0_ModuleName_6;

  Var_11 = make__make_info__make_info_get_module_index_map_1_f_0(Info_4);
  ReverseMap_8 = ((MR_Box) ((MR_hl_field(0, Var_11, (MR_Integer) 1))));
  I_10 = (MR_Unsigned) (Index_5);
  Var_12 = mercury__uint__cast_to_int_1_f_0(I_10);
  conv0_ModuleName_6 = mercury__version_array__lookup_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReverseMap_8, Var_12);
  *ModuleName_6 = ((MR_Word) (conv0_ModuleName_6));
}

void MR_CALL 
make__deps_set__module_names_to_index_set_4_p_0(
  MR_Word ModuleNames_5,
  MR_Word * IndexSet_6,
  MR_Word STATE_VARIABLE_Info_0_8,
  MR_Word * STATE_VARIABLE_Info_9)
{
  MR_Word Var_10;

  Var_10 = mercury__sparse_bitset__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0));
  make__deps_set__module_names_to_index_set_loop_5_p_0(ModuleNames_5, Var_10, IndexSet_6, STATE_VARIABLE_Info_0_8, STATE_VARIABLE_Info_9);
}

static void MR_CALL 
make__deps_set__module_names_to_index_set_loop_5_p_0(
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
      MR_Word ModuleName_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ModuleNames_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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
  MR_Word STATE_VARIABLE_Info_0_23,
  MR_Word * STATE_VARIABLE_Info_24)
{
  MR_bool succeeded;
  MR_Word Map0_8;
  MR_Word ForwardMap0_9;
  MR_Word Index0_12;
  MR_Box conv0_Index0_12;

  Map0_8 = make__make_info__make_info_get_module_index_map_1_f_0(STATE_VARIABLE_Info_0_23);
  ForwardMap0_9 = ((MR_Word) ((MR_hl_field(0, Map0_8, (MR_Integer) 0))));
  succeeded = mercury__version_hash_table__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ForwardMap0_9, ((MR_Box) (ModuleName_5)), &conv0_Index0_12);
  if (succeeded)
  {
    Index0_12 = ((MR_Word) (conv0_Index0_12));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *Index_6 = Index0_12;
    *STATE_VARIABLE_Info_24 = STATE_VARIABLE_Info_0_23;
  }
  else
  {
    MR_Box ReverseMap0_14 = ((MR_Box) ((MR_hl_field(0, Map0_8, (MR_Integer) 1))));
    MR_Unsigned Slot_16 = ((MR_Unsigned) ((MR_hl_field(0, Map0_8, (MR_Integer) 2))));
    MR_Unsigned USize_17;
    MR_Word ForwardMap_18;
    MR_Integer RevSize0_19;
    MR_Box ReverseMap_21;
    MR_Word Map_22;
    MR_Integer Var_26;

    *Index_6 = (MR_Word) (Slot_16);
    USize_17 = (Slot_16 + (MR_Unsigned) 1U);
    mercury__version_hash_table__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), ((MR_Box) (ModuleName_5)), ((MR_Box) (*Index_6)), ForwardMap0_9, &ForwardMap_18);
    RevSize0_19 = mercury__version_array__size_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ReverseMap0_14);
    Var_26 = mercury__uint__cast_to_int_1_f_0(USize_17);
    succeeded = (Var_26 > RevSize0_19);
    if (succeeded)
    {
      MR_Integer RevSize_20;

      succeeded = (RevSize0_19 == (MR_Integer) 0);
      if (succeeded)
        RevSize_20 = (MR_Integer) 1;
      else
        RevSize_20 = (MR_Integer) ((MR_Unsigned) RevSize0_19 * (MR_Unsigned) 2);
      mercury__version_array__resize_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), RevSize_20, ((MR_Box) (ModuleName_5)), ReverseMap0_14, &ReverseMap_21);
    }
    else
    {
      MR_Integer Var_27;

      Var_27 = mercury__uint__cast_to_int_1_f_0(Slot_16);
      mercury__version_array__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), Var_27, ((MR_Box) (ModuleName_5)), ReverseMap0_14, &ReverseMap_21);
    }
    {
      Map_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Map_22, 0) = ((MR_Box) (ForwardMap_18));
      MR_hl_field(0, Map_22, 1) = ((MR_Box) (ReverseMap_21));
      MR_hl_field(0, Map_22, 2) = ((MR_Box) (USize_17));
    }
    make__make_info__make_info_set_module_index_map_3_p_0(Map_22, STATE_VARIABLE_Info_0_23, STATE_VARIABLE_Info_24);
  }
}

MR_bool MR_CALL 
make__deps_set__deps_set_member_2_p_0(
  MR_Word TypeClassInfo_for_uenum_5,
  MR_Box Item_3,
  MR_Word Set_4)
{
  MR_bool succeeded;

  succeeded = mercury__sparse_bitset__member_2_p_0(TypeClassInfo_for_uenum_5, Item_3, Set_4);
  return succeeded;
}

void MR_CALL 
make__deps_set__deps_set_foldl2_6_p_0(
  MR_Word TypeInfo_for_A_16,
  MR_Word TypeInfo_for_B_17,
  MR_Word TypeClassInfo_for_uenum_15,
  MR_Word Pred_7,
  MR_Word Set_8,
  MR_Box STATE_VARIABLE_Acc1_0_11,
  MR_Box * STATE_VARIABLE_Acc1_12,
  MR_Box STATE_VARIABLE_Acc2_0_13,
  MR_Box * STATE_VARIABLE_Acc2_14)
{
  mercury__sparse_bitset__foldl2_6_p_0(TypeInfo_for_A_16, TypeInfo_for_B_17, TypeClassInfo_for_uenum_15, Pred_7, Set_8, STATE_VARIABLE_Acc1_0_11, STATE_VARIABLE_Acc1_12, STATE_VARIABLE_Acc2_0_13, STATE_VARIABLE_Acc2_14);
}

void MR_CALL 
make__deps_set__deps_set_foldl_4_p_0(
  MR_Word TypeInfo_for_A_11,
  MR_Word TypeClassInfo_for_uenum_10,
  MR_Word Pred_5,
  MR_Word Set_6,
  MR_Box STATE_VARIABLE_Acc1_0_8,
  MR_Box * STATE_VARIABLE_Acc1_9)
{
  mercury__sparse_bitset__foldl_4_p_0(TypeInfo_for_A_11, TypeClassInfo_for_uenum_10, Pred_5, Set_6, STATE_VARIABLE_Acc1_0_8, STATE_VARIABLE_Acc1_9);
}

MR_Word MR_CALL 
make__deps_set__deps_set_to_sorted_list_1_f_0(
  MR_Word TypeClassInfo_for_uenum_5,
  MR_Word Set_3)
{
  MR_Word SortedList_4;

  SortedList_4 = mercury__sparse_bitset__to_sorted_list_1_f_0(TypeClassInfo_for_uenum_5, Set_3);
  return SortedList_4;
}

void MR_CALL 
make__deps_set__list_to_deps_set_2_p_0(
  MR_Word TypeClassInfo_for_uenum_5,
  MR_Word List_3,
  MR_Word * Set_4)
{
  mercury__sparse_bitset__list_to_set_2_p_0(TypeClassInfo_for_uenum_5, List_3, Set_4);
}

MR_Word MR_CALL 
make__deps_set__list_to_deps_set_1_f_0(
  MR_Word TypeClassInfo_for_uenum_5,
  MR_Word List_3)
{
  MR_Word Set_4;

  Set_4 = mercury__sparse_bitset__list_to_set_1_f_0(TypeClassInfo_for_uenum_5, List_3);
  return Set_4;
}

MR_Word MR_CALL 
make__deps_set__deps_set_difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5)
{
  MR_Word Set_6;

  Set_6 = mercury__sparse_bitset__difference_2_f_0(TypeInfo_for_T_7, SetA_4, SetB_5);
  return Set_6;
}

MR_Word MR_CALL 
make__deps_set__deps_set_union_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Sets_3)
{
  MR_Word Set_4;

  Set_4 = mercury__sparse_bitset__union_list_1_f_0(TypeInfo_for_T_5, Sets_3);
  return Set_4;
}

void MR_CALL 
make__deps_set__deps_set_union_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  mercury__sparse_bitset__union_3_p_0(TypeInfo_for_T_7, SetA_4, SetB_5, Set_6);
}

MR_Word MR_CALL 
make__deps_set__deps_set_union_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word SetA_4,
  MR_Word SetB_5)
{
  MR_Word Set_6;

  Set_6 = mercury__sparse_bitset__union_2_f_0(TypeInfo_for_T_7, SetA_4, SetB_5);
  return Set_6;
}

void MR_CALL 
make__deps_set__deps_set_delete_3_p_0(
  MR_Word TypeClassInfo_for_uenum_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  mercury__sparse_bitset__delete_3_p_0(TypeClassInfo_for_uenum_8, X_4, STATE_VARIABLE_Set_0_6, STATE_VARIABLE_Set_7);
}

void MR_CALL 
make__deps_set__deps_set_insert_3_p_0(
  MR_Word TypeClassInfo_for_uenum_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_6,
  MR_Word * STATE_VARIABLE_Set_7)
{
  mercury__sparse_bitset__insert_3_p_0(TypeClassInfo_for_uenum_8, X_4, STATE_VARIABLE_Set_0_6, STATE_VARIABLE_Set_7);
}

MR_Word MR_CALL 
make__deps_set__deps_set_init_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__sparse_bitset__init_0_f_0(TypeInfo_for_T_2);
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
make__deps_set____Unify____dependency_file_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_set____Unify____dependency_file_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_set____Compare____dependency_file_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_set____Compare____dependency_file_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_set____Unify____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__deps_set____Unify____deps_set_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__deps_set____Compare____deps_set_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_set____Compare____deps_set_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_set____Unify____module_index_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_set____Unify____module_index_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_set____Compare____module_index_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_set____Compare____module_index_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_U_3;

  conv0_U_3 = make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__to_uint_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_U_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__dependency_file_index__arity0______enum__from_uint_2_2_p_0(((MR_Unsigned) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_Box MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__to_uint_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Unsigned conv0_U_3;

  conv0_U_3 = make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__to_uint_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_U_3));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__from_uint_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__2_2;

  succeeded = make__deps_set__ClassMethod_for_enum__uenum____make__deps_set__module_index__arity0______enum__from_uint_2_2_p_0(((MR_Unsigned) (wrapper_arg_1)), &conv0_HeadVar__2_2);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    succeeded = MR_TRUE;
  }
  return succeeded;
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
