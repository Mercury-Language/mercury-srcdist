/*
** Automatically generated from `make.deps_cache.m'
** by the Mercury compiler,
** version rotd-2023-09-26
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


// :- module make.deps_cache.
// :- implementation.

/*
INIT mercury__make__deps_cache__init
ENDINIT
*/

#include "make.deps_cache.mih"


#include "assoc_list.mih"
#include "builtin.mih"
#include "enum.mih"
#include "libs.mih"
#include "list.mih"
#include "make.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "version_hash_table.mih"
#include "libs.maybe_util.mih"
#include "libs.timestamp.mih"
#include "make.deps_set.mih"
#include "make.make_info.mih"
#include "mdbcomp.sym_name.mih"




static const MR_FA_TypeInfo_Struct1 make__deps_cache__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct2 make__deps_cache__tree234__ti_tree234_2make__deps_cache__type_ctor_info_computed_module_deps_key_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0;

static const MR_FA_TypeInfo_Struct1 make__deps_cache__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__deps_cache__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0;

static const MR_PseudoTypeInfo make__deps_cache__make__deps_cache__field_types_computed_module_deps_key_0_0[2];

static const MR_DuFunctorDesc make__deps_cache__make__deps_cache__du_functor_desc_computed_module_deps_key_0_0;

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_stag_ordered_computed_module_deps_key_0_0[1];

static const MR_DuPtagLayout make__deps_cache__make__deps_cache__du_ptag_ordered_computed_module_deps_key_0[1];

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_name_ordered_computed_module_deps_key_0[1];

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_computed_module_deps_key_0[1];

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_computed_module_deps_label_0_0;

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_ordinal_ordered_computed_module_deps_label_0[1];

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_name_ordered_computed_module_deps_label_0[1];

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_computed_module_deps_label_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_cache__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_PseudoTypeInfo make__deps_cache__make__deps_cache__field_types_deps_result_1_0[2];

static const MR_ConstString make__deps_cache__make__deps_cache__field_names_deps_result_1_0[2];

static const MR_DuArgLocn make__deps_cache__make__deps_cache__field_locns_deps_result_1_0[2];

static const MR_DuFunctorDesc make__deps_cache__make__deps_cache__du_functor_desc_deps_result_1_0;

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_stag_ordered_deps_result_1_0[1];

static const MR_DuPtagLayout make__deps_cache__make__deps_cache__du_ptag_ordered_deps_result_1[1];

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_name_ordered_deps_result_1[1];

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_deps_result_1[1];

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_0;

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_1;

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_ordinal_ordered_process_modules_where_0[2];

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_name_ordered_process_modules_where_0[2];

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_process_modules_where_0[2];

static const MR_PseudoTypeInfo make__deps_cache__make__deps_cache__field_types_transitive_dependencies_root_0_0[3];

static const MR_DuArgLocn make__deps_cache__make__deps_cache__field_locns_transitive_dependencies_root_0_0[3];

static const MR_DuFunctorDesc make__deps_cache__make__deps_cache__du_functor_desc_transitive_dependencies_root_0_0;

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_stag_ordered_transitive_dependencies_root_0_0[1];

static const MR_DuPtagLayout make__deps_cache__make__deps_cache__du_ptag_ordered_transitive_dependencies_root_0[1];

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_name_ordered_transitive_dependencies_root_0[1];

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_transitive_dependencies_root_0[1];

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_0;

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_1;

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_2;

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_ordinal_ordered_transitive_dependencies_type_0[3];

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_name_ordered_transitive_dependencies_type_0[3];

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_transitive_dependencies_type_0[3];

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_computed_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____cached_computed_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_direct_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____cached_direct_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_indirect_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____cached_indirect_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_transitive_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____cached_transitive_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____computed_module_deps_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____computed_module_deps_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____computed_module_deps_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____computed_module_deps_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__deps_cache____Compare____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__deps_cache____Unify____module_deps_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____module_deps_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____process_modules_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____process_modules_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____transitive_dependencies_root_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____transitive_dependencies_root_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__deps_cache____Unify____transitive_dependencies_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__deps_cache____Compare____transitive_dependencies_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__deps_cache_scalar_common_1[2][2];

static /* final */ const MR_Box make__deps_cache_scalar_common_2[2][3];




static /* final */ const MR_Box make__deps_cache_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0))
  },
};

static /* final */ const MR_Box make__deps_cache_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_key_0)),
    ((MR_Box) (&make__deps_cache_scalar_common_1[1]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__deps_cache_scalar_common_1[0]))
  },
};





static const MR_FA_TypeInfo_Struct1 make__deps_cache__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1,
  { (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_dependency_file_index_0) }
};

static const MR_FA_TypeInfo_Struct2 make__deps_cache__tree234__ti_tree234_2make__deps_cache__type_ctor_info_computed_module_deps_key_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_key_0),
    (MR_TypeInfo) (&make__deps_cache__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_cached_computed_module_deps_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__deps_cache____Unify____cached_computed_module_deps_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____cached_computed_module_deps_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "cached_computed_module_deps",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__deps_cache__tree234__ti_tree234_2make__deps_cache__type_ctor_info_computed_module_deps_key_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_dependency_file_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__deps_cache__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1,
  { (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0) }
};

static const MR_FA_TypeInfo_Struct2 make__deps_cache__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
    (MR_TypeInfo) (&make__deps_cache__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_cached_direct_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__deps_cache____Unify____cached_direct_imports_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____cached_direct_imports_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "cached_direct_imports",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__deps_cache__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_cached_indirect_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__deps_cache____Unify____cached_indirect_imports_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____cached_indirect_imports_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "cached_indirect_imports",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__deps_cache__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_cached_transitive_foreign_imports_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__deps_cache____Unify____cached_transitive_foreign_imports_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____cached_transitive_foreign_imports_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "cached_transitive_foreign_imports",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__deps_cache__tree234__ti_tree234_2make__deps_set__type_ctor_info_module_index_0make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo make__deps_cache__make__deps_cache__field_types_computed_module_deps_key_0_0[2] = {
  (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_label_0)
};

static const MR_DuFunctorDesc make__deps_cache__make__deps_cache__du_functor_desc_computed_module_deps_key_0_0 = {
  (MR_String) "computed_module_deps_key",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__deps_cache__make__deps_cache__field_types_computed_module_deps_key_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_stag_ordered_computed_module_deps_key_0_0[1] = { &make__deps_cache__make__deps_cache__du_functor_desc_computed_module_deps_key_0_0 };

static const MR_DuPtagLayout make__deps_cache__make__deps_cache__du_ptag_ordered_computed_module_deps_key_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__deps_cache__make__deps_cache__du_stag_ordered_computed_module_deps_key_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_name_ordered_computed_module_deps_key_0[1] = { &make__deps_cache__make__deps_cache__du_functor_desc_computed_module_deps_key_0_0 };

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_computed_module_deps_key_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__deps_cache____Unify____computed_module_deps_key_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____computed_module_deps_key_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "computed_module_deps_key",
  { make__deps_cache__make__deps_cache__du_name_ordered_computed_module_deps_key_0 },
  { make__deps_cache__make__deps_cache__du_ptag_ordered_computed_module_deps_key_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__deps_cache__make__deps_cache__functor_number_map_computed_module_deps_key_0,

};

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_computed_module_deps_label_0_0 = {
  (MR_String) "computed_module_deps_import_012",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_ordinal_ordered_computed_module_deps_label_0[1] = { &make__deps_cache__make__deps_cache__enum_functor_desc_computed_module_deps_label_0_0 };

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_name_ordered_computed_module_deps_label_0[1] = { &make__deps_cache__make__deps_cache__enum_functor_desc_computed_module_deps_label_0_0 };

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_computed_module_deps_label_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_label_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (make__deps_cache____Unify____computed_module_deps_label_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____computed_module_deps_label_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "computed_module_deps_label",
  { make__deps_cache__make__deps_cache__enum_name_ordered_computed_module_deps_label_0 },
  { make__deps_cache__make__deps_cache__enum_ordinal_ordered_computed_module_deps_label_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__deps_cache__make__deps_cache__functor_number_map_computed_module_deps_label_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 make__deps_cache__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo make__deps_cache__make__deps_cache__field_types_deps_result_1_0[2] = {
  (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
  (MR_PseudoTypeInfo) (&make__deps_cache__sparse_bitset__pti_sparse_bitset_1__pseudo_1)
};

static const MR_ConstString make__deps_cache__make__deps_cache__field_names_deps_result_1_0[2] = {
  (MR_String) "dr_success",
  (MR_String) "dr_set"
};

static const MR_DuArgLocn make__deps_cache__make__deps_cache__field_locns_deps_result_1_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc make__deps_cache__make__deps_cache__du_functor_desc_deps_result_1_0 = {
  (MR_String) "deps_result",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__deps_cache__make__deps_cache__field_types_deps_result_1_0,
  make__deps_cache__make__deps_cache__field_names_deps_result_1_0,
  make__deps_cache__make__deps_cache__field_locns_deps_result_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_stag_ordered_deps_result_1_0[1] = { &make__deps_cache__make__deps_cache__du_functor_desc_deps_result_1_0 };

static const MR_DuPtagLayout make__deps_cache__make__deps_cache__du_ptag_ordered_deps_result_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__deps_cache__make__deps_cache__du_stag_ordered_deps_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_name_ordered_deps_result_1[1] = { &make__deps_cache__make__deps_cache__du_functor_desc_deps_result_1_0 };

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_deps_result_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__deps_cache____Unify____deps_result_1_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____deps_result_1_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "deps_result",
  { make__deps_cache__make__deps_cache__du_name_ordered_deps_result_1 },
  { make__deps_cache__make__deps_cache__du_ptag_ordered_deps_result_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__deps_cache__make__deps_cache__functor_number_map_deps_result_1,

};

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_module_deps_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__deps_cache____Unify____module_deps_result_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____module_deps_result_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "module_deps_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__deps_cache__make__deps_cache__ti_deps_result_1make__deps_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_0 = {
  (MR_String) "process_only_modules_in_cur_dir",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_1 = {
  (MR_String) "process_modules_anywhere",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_ordinal_ordered_process_modules_where_0[2] = {
  &make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_0,
  &make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_1
};

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_name_ordered_process_modules_where_0[2] = {
  &make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_1,
  &make__deps_cache__make__deps_cache__enum_functor_desc_process_modules_where_0_0
};

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_process_modules_where_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_process_modules_where_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__deps_cache____Unify____process_modules_where_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____process_modules_where_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "process_modules_where",
  { make__deps_cache__make__deps_cache__enum_name_ordered_process_modules_where_0 },
  { make__deps_cache__make__deps_cache__enum_ordinal_ordered_process_modules_where_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__deps_cache__make__deps_cache__functor_number_map_process_modules_where_0,

};

static const MR_PseudoTypeInfo make__deps_cache__make__deps_cache__field_types_transitive_dependencies_root_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_type_0),
  (MR_PseudoTypeInfo) (&make__deps_cache__make__deps_cache__type_ctor_info_process_modules_where_0)
};

static const MR_DuArgLocn make__deps_cache__make__deps_cache__field_locns_transitive_dependencies_root_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 2
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc make__deps_cache__make__deps_cache__du_functor_desc_transitive_dependencies_root_0_0 = {
  (MR_String) "transitive_dependencies_root",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__deps_cache__make__deps_cache__field_types_transitive_dependencies_root_0_0,
  NULL,
  make__deps_cache__make__deps_cache__field_locns_transitive_dependencies_root_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_stag_ordered_transitive_dependencies_root_0_0[1] = { &make__deps_cache__make__deps_cache__du_functor_desc_transitive_dependencies_root_0_0 };

static const MR_DuPtagLayout make__deps_cache__make__deps_cache__du_ptag_ordered_transitive_dependencies_root_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__deps_cache__make__deps_cache__du_stag_ordered_transitive_dependencies_root_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__deps_cache__make__deps_cache__du_name_ordered_transitive_dependencies_root_0[1] = { &make__deps_cache__make__deps_cache__du_functor_desc_transitive_dependencies_root_0_0 };

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_transitive_dependencies_root_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__deps_cache____Unify____transitive_dependencies_root_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____transitive_dependencies_root_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "transitive_dependencies_root",
  { make__deps_cache__make__deps_cache__du_name_ordered_transitive_dependencies_root_0 },
  { make__deps_cache__make__deps_cache__du_ptag_ordered_transitive_dependencies_root_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__deps_cache__make__deps_cache__functor_number_map_transitive_dependencies_root_0,

};

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_0 = {
  (MR_String) "interface_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_1 = {
  (MR_String) "all_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_2 = {
  (MR_String) "all_dependencies",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_ordinal_ordered_transitive_dependencies_type_0[3] = {
  &make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_0,
  &make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_1,
  &make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_2
};

static const MR_EnumFunctorDescPtr make__deps_cache__make__deps_cache__enum_name_ordered_transitive_dependencies_type_0[3] = {
  &make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_2,
  &make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_1,
  &make__deps_cache__make__deps_cache__enum_functor_desc_transitive_dependencies_type_0_0
};

static const MR_Integer make__deps_cache__make__deps_cache__functor_number_map_transitive_dependencies_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__deps_cache____Unify____transitive_dependencies_type_0_0_10001)),
  ((MR_Box) (make__deps_cache____Compare____transitive_dependencies_type_0_0_10001)),
  (MR_String) "make.deps_cache",
  (MR_String) "transitive_dependencies_type",
  { make__deps_cache__make__deps_cache__enum_name_ordered_transitive_dependencies_type_0 },
  { make__deps_cache__make__deps_cache__enum_ordinal_ordered_transitive_dependencies_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__deps_cache__make__deps_cache__functor_number_map_transitive_dependencies_type_0,

};

void MR_CALL 
make__deps_cache____Compare____transitive_dependencies_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
make__deps_cache____Unify____transitive_dependencies_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____transitive_dependencies_root_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    make__deps_set____Compare____module_index_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (Var_17 > Var_18);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
        MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

        succeeded = (Var_19 < Var_20);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_19 > Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

MR_bool MR_CALL 
make__deps_cache____Unify____transitive_dependencies_root_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

    succeeded = make__deps_set____Unify____module_index_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = (ArgX3_7 == ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____process_modules_where_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
make__deps_cache____Unify____process_modules_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____module_deps_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__deps_cache_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__deps_cache____Unify____module_deps_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = make__deps_cache____Unify____deps_result_1_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____deps_result_1_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word SubResult1_6;
    MR_Integer Var_15 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_16 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_15 < Var_16);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Var_15 > Var_16);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = MR_TRUE;
        succeeded = !(succeeded);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 0;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

MR_bool MR_CALL 
make__deps_cache____Unify____deps_result_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____computed_module_deps_label_0_0(
  MR_Word * HeadVar__1_1)
{
  make__deps_cache__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_115_95_99_97_99_104_101_95_95_99_111_109_112_117_116_101_100_95_109_111_100_117_108_101_95_100_101_112_115_95_108_97_98_101_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
make__deps_cache__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_97_107_101_95_95_100_101_112_115_95_99_97_99_104_101_95_95_99_111_109_112_117_116_101_100_95_109_111_100_117_108_101_95_100_101_112_115_95_108_97_98_101_108_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
make__deps_cache____Unify____computed_module_deps_label_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
make__deps_cache____Compare____computed_module_deps_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word SubResult1_6;

    make__deps_set____Compare____module_index_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
make__deps_cache____Unify____computed_module_deps_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));

    succeeded = make__deps_set____Unify____module_index_0_0(ArgX1_3, ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____cached_transitive_foreign_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__deps_cache_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__deps_cache____Unify____cached_transitive_foreign_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__deps_cache_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____cached_indirect_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__deps_cache_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__deps_cache____Unify____cached_indirect_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__deps_cache_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____cached_direct_imports_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__deps_cache_scalar_common_2[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__deps_cache____Unify____cached_direct_imports_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__deps_cache_scalar_common_2[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__deps_cache____Compare____cached_computed_module_deps_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__deps_cache_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__deps_cache____Unify____cached_computed_module_deps_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__deps_cache_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

MR_Word MR_CALL 
make__deps_cache__init_cached_computed_module_deps_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_key_0), (MR_Word) (&make__deps_cache_scalar_common_1[1]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__deps_cache__init_cached_transitive_foreign_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_cache_scalar_common_1[0]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__deps_cache__init_cached_indirect_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_cache_scalar_common_1[0]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__deps_cache__init_cached_direct_imports_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__deps_set__make__deps_set__type_ctor_info_module_index_0), (MR_Word) (&make__deps_cache_scalar_common_1[0]));
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_computed_module_deps_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____cached_computed_module_deps_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____cached_computed_module_deps_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____cached_computed_module_deps_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_direct_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____cached_direct_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____cached_direct_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____cached_direct_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_indirect_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____cached_indirect_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____cached_indirect_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____cached_indirect_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____cached_transitive_foreign_imports_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____cached_transitive_foreign_imports_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____cached_transitive_foreign_imports_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____cached_transitive_foreign_imports_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____computed_module_deps_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____computed_module_deps_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____computed_module_deps_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____computed_module_deps_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____computed_module_deps_label_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____computed_module_deps_label_0_0();
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____computed_module_deps_label_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____computed_module_deps_label_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____deps_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____deps_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____deps_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____module_deps_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____module_deps_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____module_deps_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____module_deps_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____process_modules_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____process_modules_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____process_modules_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____process_modules_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____transitive_dependencies_root_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____transitive_dependencies_root_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____transitive_dependencies_root_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____transitive_dependencies_root_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__deps_cache____Unify____transitive_dependencies_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__deps_cache____Unify____transitive_dependencies_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__deps_cache____Compare____transitive_dependencies_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__deps_cache____Compare____transitive_dependencies_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__deps_cache__init(void)
{
}

void mercury__make__deps_cache__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_cached_computed_module_deps_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_cached_direct_imports_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_cached_indirect_imports_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_cached_transitive_foreign_imports_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_key_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_computed_module_deps_label_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_deps_result_1);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_module_deps_result_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_process_modules_where_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_root_0);
	MR_register_type_ctor_info(&make__deps_cache__make__deps_cache__type_ctor_info_transitive_dependencies_type_0);
}

void mercury__make__deps_cache__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__deps_cache__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module make.deps_cache.
