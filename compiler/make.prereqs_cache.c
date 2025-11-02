/*
** Automatically generated from `make.prereqs_cache.m'
** by the Mercury compiler,
** version rotd-2025-11-02
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


// :- module make.prereqs_cache.
// :- implementation.

/*
INIT mercury__make__prereqs_cache__init
REQUIRED_INIT mercury__make__prereqs_cache__required_init
ENDINIT
*/

#include "make.prereqs_cache.mih"
#include "make.prereqs_cache.mh"


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
#include "backend_libs.link_target_code.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.timestamp.mih"
#include "make.build.mih"
#include "make.index_set.mih"
#include "make.make_info.mih"
#include "make.options_file.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.module_dep_info.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.read_modules.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_VA_PseudoTypeInfo_Struct3 make__prereqs_cache____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_uint_0__plain_builtin__type_ctor_info_uint_0;

static const MR_FA_TypeInfo_Struct1 make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct2 make__prereqs_cache__tree234__ti_tree234_2make__index_set__type_ctor_info_module_index_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0;

static const MR_FA_TypeInfo_Struct1 make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_target_id_index_0;

static const MR_FA_TypeInfo_Struct2 make__prereqs_cache__tree234__ti_tree234_2make__index_set__type_ctor_info_module_index_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_target_id_index_0;

static const MR_PseudoTypeInfo make__prereqs_cache__make__prereqs_cache__field_types_prereqs_cache_stats_0_0[16];

static const MR_ConstString make__prereqs_cache__make__prereqs_cache__field_names_prereqs_cache_stats_0_0[16];

static const MR_DuFunctorDesc make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_cache_stats_0_0;

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_stag_ordered_prereqs_cache_stats_0_0[1];

static const MR_DuPtagLayout make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_prereqs_cache_stats_0[1];

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_name_ordered_prereqs_cache_stats_0[1];

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_prereqs_cache_stats_0[1];

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs_cache__sparse_bitset__pti_sparse_bitset_1__pseudo_1;

static const MR_PseudoTypeInfo make__prereqs_cache__make__prereqs_cache__field_types_prereqs_result_1_0[2];

static const MR_ConstString make__prereqs_cache__make__prereqs_cache__field_names_prereqs_result_1_0[2];

static const MR_DuArgLocn make__prereqs_cache__make__prereqs_cache__field_locns_prereqs_result_1_0[2];

static const MR_DuFunctorDesc make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_result_1_0;

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_stag_ordered_prereqs_result_1_0[1];

static const MR_DuPtagLayout make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_prereqs_result_1[1];

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_name_ordered_prereqs_result_1[1];

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_prereqs_result_1[1];

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_0;

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_1;

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_ordinal_ordered_process_modules_where_0[2];

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_name_ordered_process_modules_where_0[2];

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_process_modules_where_0[2];

static const MR_FA_TypeInfo_Struct2 make__prereqs_cache__tree234__ti_tree234_2make__prereqs_cache__type_ctor_info_trans_prereqs_key_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0;

static const MR_PseudoTypeInfo make__prereqs_cache__make__prereqs_cache__field_types_trans_prereqs_key_0_0[3];

static const MR_DuArgLocn make__prereqs_cache__make__prereqs_cache__field_locns_trans_prereqs_key_0_0[3];

static const MR_DuFunctorDesc make__prereqs_cache__make__prereqs_cache__du_functor_desc_trans_prereqs_key_0_0;

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_stag_ordered_trans_prereqs_key_0_0[1];

static const MR_DuPtagLayout make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_trans_prereqs_key_0[1];

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_name_ordered_trans_prereqs_key_0[1];

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_trans_prereqs_key_0[1];

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_0;

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_1;

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_2;

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_ordinal_ordered_transitive_dependencies_type_0[3];

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_name_ordered_transitive_dependencies_type_0[3];

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_transitive_dependencies_type_0[3];

static void MR_CALL 
make__prereqs_cache____Compare____prereqs_cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____prereqs_cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
make__prereqs_cache__unsafe_set_prereqs_cache_stats_1_p_0(
  MR_Word X_1);

static void MR_CALL 
make__prereqs_cache__unsafe_get_prereqs_cache_stats_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
make__prereqs_cache__unlock_prereqs_cache_stats_0_p_0(void);

static void MR_CALL 
make__prereqs_cache__lock_prereqs_cache_stats_0_p_0(void);

static void MR_CALL 
make__prereqs_cache__pre_initialise_mutable_prereqs_cache_stats_0_p_0(void);

static void MR_CALL 
make__prereqs_cache__initialise_mutable_prereqs_cache_stats_0_p_0(void);

static void MR_CALL 
make__prereqs_cache__desc_cache_stat_2_p_0(
  MR_Tuple HeadVar__1_1,
  MR_String * Desc_6);

static void MR_CALL 
make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____module_prereqs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____module_prereqs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____module_to_module_set_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____module_to_module_set_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____module_to_target_id_set_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____module_to_target_id_set_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____prereqs_cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____prereqs_cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____prereqs_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
make__prereqs_cache____Compare____prereqs_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____process_modules_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____process_modules_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____target_id_prereqs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____target_id_prereqs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____trans_prereqs_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____trans_prereqs_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____trans_prereqs_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____trans_prereqs_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
make__prereqs_cache____Unify____transitive_dependencies_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
make__prereqs_cache____Compare____transitive_dependencies_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box make__prereqs_cache_scalar_common_1[2][2];

static /* final */ const MR_Box make__prereqs_cache_scalar_common_2[2][5];

static /* final */ const MR_Box make__prereqs_cache_scalar_common_3[4][3];

static /* final */ const MR_Box make__prereqs_cache_scalar_common_4[1][16];

static /* final */ const MR_Box make__prereqs_cache_scalar_common_5[2][1];




static /* final */ const MR_Box make__prereqs_cache_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_result_1)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_module_index_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_result_1)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0))
  },
};

static /* final */ const MR_Box make__prereqs_cache_scalar_common_2[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&make__prereqs_cache____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_uint_0__plain_builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box make__prereqs_cache_scalar_common_3[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__prereqs_cache_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__index_set__make__index_set__type_ctor_info_module_index_0)),
    ((MR_Box) (&make__prereqs_cache_scalar_common_1[1]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_key_0)),
    ((MR_Box) (&make__prereqs_cache_scalar_common_1[0]))
  },
  /* row   3 */
  {
    ((MR_Box) (&make__prereqs_cache_scalar_common_2[1])),
    ((MR_Box) (make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box make__prereqs_cache_scalar_common_4[1][16] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box make__prereqs_cache_scalar_common_5[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.stream_ops.mh"
#include "make.build.mh"
#include "make.prereqs_cache.mh"
#line 412 "make.prereqs_cache.m"
MR_Word make__prereqs_cache__mutable_variable_prereqs_cache_stats;
#ifdef MR_THREAD_SAFE
    MercuryLock make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock;
#endif


#line 412 "make.prereqs_cache.m"
void 
make__prereqs_cache__user_init_pred_55_0(void)
#line 412 "make.prereqs_cache.m"
{
#line 412 "make.prereqs_cache.m"
	make__prereqs_cache__initialise_mutable_prereqs_cache_stats_0_p_0();
}


static const MR_VA_PseudoTypeInfo_Struct3 make__prereqs_cache____vpti_tuple_3__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_uint_0__plain_builtin__type_ctor_info_uint_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
  }
};

static const MR_FA_TypeInfo_Struct1 make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0 = {
  &make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_result_1,
  { (MR_TypeInfo) (&make__index_set__make__index_set__type_ctor_info_module_index_0) }
};

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_module_prereqs_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__prereqs_cache____Unify____module_prereqs_result_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____module_prereqs_result_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "module_prereqs_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 make__prereqs_cache__tree234__ti_tree234_2make__index_set__type_ctor_info_module_index_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__index_set__make__index_set__type_ctor_info_module_index_0),
    (MR_TypeInfo) (&make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_module_to_module_set_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__prereqs_cache____Unify____module_to_module_set_cache_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____module_to_module_set_cache_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "module_to_module_set_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__prereqs_cache__tree234__ti_tree234_2make__index_set__type_ctor_info_module_index_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_target_id_index_0 = {
  &make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_result_1,
  { (MR_TypeInfo) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0) }
};

static const MR_FA_TypeInfo_Struct2 make__prereqs_cache__tree234__ti_tree234_2make__index_set__type_ctor_info_module_index_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_target_id_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__index_set__make__index_set__type_ctor_info_module_index_0),
    (MR_TypeInfo) (&make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_target_id_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_module_to_target_id_set_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__prereqs_cache____Unify____module_to_target_id_set_cache_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____module_to_target_id_set_cache_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "module_to_target_id_set_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__prereqs_cache__tree234__ti_tree234_2make__index_set__type_ctor_info_module_index_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_target_id_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo make__prereqs_cache__make__prereqs_cache__field_types_prereqs_cache_stats_0_0[16] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString make__prereqs_cache__make__prereqs_cache__field_names_prereqs_cache_stats_0_0[16] = {
  (MR_String) "direct_non_intermod_accesses",
  (MR_String) "direct_non_intermod_misses",
  (MR_String) "direct_intermod_accesses",
  (MR_String) "direct_intermod_misses",
  (MR_String) "indirect_non_intermod_accesses",
  (MR_String) "indirect_non_intermod_misses",
  (MR_String) "indirect_intermod_accesses",
  (MR_String) "indirect_intermod_misses",
  (MR_String) "foreign_non_intermod_accesses",
  (MR_String) "foreign_non_intermod_misses",
  (MR_String) "anc0_dir1_indir2_non_intermod_accesses",
  (MR_String) "anc0_dir1_indir2_non_intermod_misses",
  (MR_String) "anc0_dir1_indir2_intermod_accesses",
  (MR_String) "anc0_dir1_indir2_intermod_misses",
  (MR_String) "trans_prereqs_accesses",
  (MR_String) "trans_prereqs_misses"
};

static const MR_DuFunctorDesc make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_cache_stats_0_0 = {
  (MR_String) "prereqs_cache_stats",
  INT16_C(16),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__prereqs_cache__make__prereqs_cache__field_types_prereqs_cache_stats_0_0,
  make__prereqs_cache__make__prereqs_cache__field_names_prereqs_cache_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_stag_ordered_prereqs_cache_stats_0_0[1] = { &make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_cache_stats_0_0 };

static const MR_DuPtagLayout make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_prereqs_cache_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__prereqs_cache__make__prereqs_cache__du_stag_ordered_prereqs_cache_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_name_ordered_prereqs_cache_stats_0[1] = { &make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_cache_stats_0_0 };

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_prereqs_cache_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_cache_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__prereqs_cache____Unify____prereqs_cache_stats_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____prereqs_cache_stats_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "prereqs_cache_stats",
  { make__prereqs_cache__make__prereqs_cache__du_name_ordered_prereqs_cache_stats_0 },
  { make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_prereqs_cache_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__prereqs_cache__make__prereqs_cache__functor_number_map_prereqs_cache_stats_0,

};

static const MR_FA_PseudoTypeInfo_Struct1 make__prereqs_cache__sparse_bitset__pti_sparse_bitset_1__pseudo_1 = {
  &mercury__sparse_bitset__sparse_bitset__type_ctor_info_sparse_bitset_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo make__prereqs_cache__make__prereqs_cache__field_types_prereqs_result_1_0[2] = {
  (MR_PseudoTypeInfo) (&libs__maybe_util__libs__maybe_util__type_ctor_info_maybe_succeeded_0),
  (MR_PseudoTypeInfo) (&make__prereqs_cache__sparse_bitset__pti_sparse_bitset_1__pseudo_1)
};

static const MR_ConstString make__prereqs_cache__make__prereqs_cache__field_names_prereqs_result_1_0[2] = {
  (MR_String) "pr_success",
  (MR_String) "pr_set"
};

static const MR_DuArgLocn make__prereqs_cache__make__prereqs_cache__field_locns_prereqs_result_1_0[2] = {
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

static const MR_DuFunctorDesc make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_result_1_0 = {
  (MR_String) "prereqs_result",
  INT16_C(2),
  UINT16_C(2),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__prereqs_cache__make__prereqs_cache__field_types_prereqs_result_1_0,
  make__prereqs_cache__make__prereqs_cache__field_names_prereqs_result_1_0,
  make__prereqs_cache__make__prereqs_cache__field_locns_prereqs_result_1_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_stag_ordered_prereqs_result_1_0[1] = { &make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_result_1_0 };

static const MR_DuPtagLayout make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_prereqs_result_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__prereqs_cache__make__prereqs_cache__du_stag_ordered_prereqs_result_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_name_ordered_prereqs_result_1[1] = { &make__prereqs_cache__make__prereqs_cache__du_functor_desc_prereqs_result_1_0 };

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_prereqs_result_1[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_result_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__prereqs_cache____Unify____prereqs_result_1_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____prereqs_result_1_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "prereqs_result",
  { make__prereqs_cache__make__prereqs_cache__du_name_ordered_prereqs_result_1 },
  { make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_prereqs_result_1 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__prereqs_cache__make__prereqs_cache__functor_number_map_prereqs_result_1,

};

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_0 = {
  (MR_String) "process_only_modules_in_cur_dir",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_1 = {
  (MR_String) "process_modules_anywhere",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_ordinal_ordered_process_modules_where_0[2] = {
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_0,
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_1
};

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_name_ordered_process_modules_where_0[2] = {
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_1,
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_process_modules_where_0_0
};

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_process_modules_where_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_process_modules_where_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__prereqs_cache____Unify____process_modules_where_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____process_modules_where_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "process_modules_where",
  { make__prereqs_cache__make__prereqs_cache__enum_name_ordered_process_modules_where_0 },
  { make__prereqs_cache__make__prereqs_cache__enum_ordinal_ordered_process_modules_where_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  make__prereqs_cache__make__prereqs_cache__functor_number_map_process_modules_where_0,

};

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_target_id_prereqs_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__prereqs_cache____Unify____target_id_prereqs_result_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____target_id_prereqs_result_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "target_id_prereqs_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_target_id_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 make__prereqs_cache__tree234__ti_tree234_2make__prereqs_cache__type_ctor_info_trans_prereqs_key_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_key_0),
    (MR_TypeInfo) (&make__prereqs_cache__make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0)
  }
};

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (make__prereqs_cache____Unify____trans_prereqs_cache_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____trans_prereqs_cache_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "trans_prereqs_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&make__prereqs_cache__tree234__ti_tree234_2make__prereqs_cache__type_ctor_info_trans_prereqs_key_0make__prereqs_cache__ti_prereqs_result_1make__index_set__type_ctor_info_module_index_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_PseudoTypeInfo make__prereqs_cache__make__prereqs_cache__field_types_trans_prereqs_key_0_0[3] = {
  (MR_PseudoTypeInfo) (&make__index_set__make__index_set__type_ctor_info_module_index_0),
  (MR_PseudoTypeInfo) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_transitive_dependencies_type_0),
  (MR_PseudoTypeInfo) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_process_modules_where_0)
};

static const MR_DuArgLocn make__prereqs_cache__make__prereqs_cache__field_locns_trans_prereqs_key_0_0[3] = {
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

static const MR_DuFunctorDesc make__prereqs_cache__make__prereqs_cache__du_functor_desc_trans_prereqs_key_0_0 = {
  (MR_String) "trans_prereqs_key",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  make__prereqs_cache__make__prereqs_cache__field_types_trans_prereqs_key_0_0,
  NULL,
  make__prereqs_cache__make__prereqs_cache__field_locns_trans_prereqs_key_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_stag_ordered_trans_prereqs_key_0_0[1] = { &make__prereqs_cache__make__prereqs_cache__du_functor_desc_trans_prereqs_key_0_0 };

static const MR_DuPtagLayout make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_trans_prereqs_key_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    make__prereqs_cache__make__prereqs_cache__du_stag_ordered_trans_prereqs_key_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr make__prereqs_cache__make__prereqs_cache__du_name_ordered_trans_prereqs_key_0[1] = { &make__prereqs_cache__make__prereqs_cache__du_functor_desc_trans_prereqs_key_0_0 };

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_trans_prereqs_key_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_key_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (make__prereqs_cache____Unify____trans_prereqs_key_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____trans_prereqs_key_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "trans_prereqs_key",
  { make__prereqs_cache__make__prereqs_cache__du_name_ordered_trans_prereqs_key_0 },
  { make__prereqs_cache__make__prereqs_cache__du_ptag_ordered_trans_prereqs_key_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  make__prereqs_cache__make__prereqs_cache__functor_number_map_trans_prereqs_key_0,

};

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_0 = {
  (MR_String) "interface_imports",
  INT32_C(0)
};

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_1 = {
  (MR_String) "all_imports",
  INT32_C(1)
};

static const MR_EnumFunctorDesc make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_2 = {
  (MR_String) "all_dependencies",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_ordinal_ordered_transitive_dependencies_type_0[3] = {
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_0,
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_1,
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_2
};

static const MR_EnumFunctorDescPtr make__prereqs_cache__make__prereqs_cache__enum_name_ordered_transitive_dependencies_type_0[3] = {
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_2,
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_1,
  &make__prereqs_cache__make__prereqs_cache__enum_functor_desc_transitive_dependencies_type_0_0
};

static const MR_Integer make__prereqs_cache__make__prereqs_cache__functor_number_map_transitive_dependencies_type_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct make__prereqs_cache__make__prereqs_cache__type_ctor_info_transitive_dependencies_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (make__prereqs_cache____Unify____transitive_dependencies_type_0_0_10001)),
  ((MR_Box) (make__prereqs_cache____Compare____transitive_dependencies_type_0_0_10001)),
  (MR_String) "make.prereqs_cache",
  (MR_String) "transitive_dependencies_type",
  { make__prereqs_cache__make__prereqs_cache__enum_name_ordered_transitive_dependencies_type_0 },
  { make__prereqs_cache__make__prereqs_cache__enum_ordinal_ordered_transitive_dependencies_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  make__prereqs_cache__make__prereqs_cache__functor_number_map_transitive_dependencies_type_0,

};

void MR_CALL 
make__prereqs_cache____Compare____transitive_dependencies_type_0_0(
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
make__prereqs_cache____Unify____transitive_dependencies_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__prereqs_cache____Compare____trans_prereqs_key_0_0(
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
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    make__index_set____Compare____module_index_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
make__prereqs_cache____Unify____trans_prereqs_key_0_0(
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
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) >> 1)) & (MR_Integer) 3);
    MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = make__index_set____Unify____module_index_0_0(ArgX1_3, ArgY1_4);
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
make__prereqs_cache____Compare____trans_prereqs_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__prereqs_cache_scalar_common_3[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__prereqs_cache____Unify____trans_prereqs_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__prereqs_cache_scalar_common_3[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__prereqs_cache____Compare____target_id_prereqs_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__prereqs_cache_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__prereqs_cache____Unify____target_id_prereqs_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = make__prereqs_cache____Unify____prereqs_result_1_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_target_id_index_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
make__prereqs_cache____Compare____process_modules_where_0_0(
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
make__prereqs_cache____Unify____process_modules_where_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
make__prereqs_cache____Compare____prereqs_result_1_0(
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
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__sparse_bitset____Compare____sparse_bitset_1_0(TypeInfo_for_T_11, HeadVar__1_1, ArgX2_7, ArgY2_8);
  }
}

static void MR_CALL 
make__prereqs_cache____Compare____prereqs_cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_51 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_52 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_51 == CastY_52);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Unsigned ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Unsigned ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Unsigned ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Unsigned ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 3))));
    MR_Unsigned ArgX5_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Unsigned ArgY5_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 4))));
    MR_Unsigned ArgX6_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Unsigned ArgY6_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 5))));
    MR_Unsigned ArgX7_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Unsigned ArgY7_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 6))));
    MR_Unsigned ArgX8_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Unsigned ArgY8_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 7))));
    MR_Unsigned ArgX9_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Unsigned ArgY9_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 8))));
    MR_Unsigned ArgX10_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Unsigned ArgY10_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 9))));
    MR_Unsigned ArgX11_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Unsigned ArgY11_35 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 10))));
    MR_Unsigned ArgX12_37 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Unsigned ArgY12_38 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 11))));
    MR_Unsigned ArgX13_40 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Unsigned ArgY13_41 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 12))));
    MR_Unsigned ArgX14_43 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Unsigned ArgY14_44 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 13))));
    MR_Unsigned ArgX15_46 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Unsigned ArgY15_47 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 14))));
    MR_Unsigned ArgX16_49 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 15))));
    MR_Unsigned ArgY16_50 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 15))));
    MR_Word SubResult1_6;

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
    {
      SubResult1_6 = (MR_Integer) 1;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (ArgX1_4 > ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 2;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
      {
        SubResult2_9 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
        {
          SubResult2_9 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        succeeded = (ArgX3_10 < ArgY3_11);
        if (succeeded)
        {
          SubResult3_12 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (ArgX3_10 > ArgY3_11);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
        {
          MR_Word SubResult4_15;

          succeeded = (ArgX4_13 < ArgY4_14);
          if (succeeded)
          {
            SubResult4_15 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (ArgX4_13 > ArgY4_14);
            if (succeeded)
            {
              SubResult4_15 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult4_15;
          else
          {
            MR_Word SubResult5_18;

            succeeded = (ArgX5_16 < ArgY5_17);
            if (succeeded)
            {
              SubResult5_18 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (ArgX5_16 > ArgY5_17);
              if (succeeded)
              {
                SubResult5_18 = (MR_Integer) 2;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
              *HeadVar__1_1 = SubResult5_18;
            else
            {
              MR_Word SubResult6_21;

              succeeded = (ArgX6_19 < ArgY6_20);
              if (succeeded)
              {
                SubResult6_21 = (MR_Integer) 1;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (ArgX6_19 > ArgY6_20);
                if (succeeded)
                {
                  SubResult6_21 = (MR_Integer) 2;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
                *HeadVar__1_1 = SubResult6_21;
              else
              {
                MR_Word SubResult7_24;

                succeeded = (ArgX7_22 < ArgY7_23);
                if (succeeded)
                {
                  SubResult7_24 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = (ArgX7_22 > ArgY7_23);
                  if (succeeded)
                  {
                    SubResult7_24 = (MR_Integer) 2;
                    succeeded = MR_TRUE;
                  }
                }
                if (succeeded)
                  *HeadVar__1_1 = SubResult7_24;
                else
                {
                  MR_Word SubResult8_27;

                  succeeded = (ArgX8_25 < ArgY8_26);
                  if (succeeded)
                  {
                    SubResult8_27 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = (ArgX8_25 > ArgY8_26);
                    if (succeeded)
                    {
                      SubResult8_27 = (MR_Integer) 2;
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                    *HeadVar__1_1 = SubResult8_27;
                  else
                  {
                    MR_Word SubResult9_30;

                    succeeded = (ArgX9_28 < ArgY9_29);
                    if (succeeded)
                    {
                      SubResult9_30 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      succeeded = (ArgX9_28 > ArgY9_29);
                      if (succeeded)
                      {
                        SubResult9_30 = (MR_Integer) 2;
                        succeeded = MR_TRUE;
                      }
                    }
                    if (succeeded)
                      *HeadVar__1_1 = SubResult9_30;
                    else
                    {
                      MR_Word SubResult10_33;

                      succeeded = (ArgX10_31 < ArgY10_32);
                      if (succeeded)
                      {
                        SubResult10_33 = (MR_Integer) 1;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        succeeded = (ArgX10_31 > ArgY10_32);
                        if (succeeded)
                        {
                          SubResult10_33 = (MR_Integer) 2;
                          succeeded = MR_TRUE;
                        }
                      }
                      if (succeeded)
                        *HeadVar__1_1 = SubResult10_33;
                      else
                      {
                        MR_Word SubResult11_36;

                        succeeded = (ArgX11_34 < ArgY11_35);
                        if (succeeded)
                        {
                          SubResult11_36 = (MR_Integer) 1;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          succeeded = (ArgX11_34 > ArgY11_35);
                          if (succeeded)
                          {
                            SubResult11_36 = (MR_Integer) 2;
                            succeeded = MR_TRUE;
                          }
                        }
                        if (succeeded)
                          *HeadVar__1_1 = SubResult11_36;
                        else
                        {
                          MR_Word SubResult12_39;

                          succeeded = (ArgX12_37 < ArgY12_38);
                          if (succeeded)
                          {
                            SubResult12_39 = (MR_Integer) 1;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            succeeded = (ArgX12_37 > ArgY12_38);
                            if (succeeded)
                            {
                              SubResult12_39 = (MR_Integer) 2;
                              succeeded = MR_TRUE;
                            }
                          }
                          if (succeeded)
                            *HeadVar__1_1 = SubResult12_39;
                          else
                          {
                            MR_Word SubResult13_42;

                            succeeded = (ArgX13_40 < ArgY13_41);
                            if (succeeded)
                            {
                              SubResult13_42 = (MR_Integer) 1;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              succeeded = (ArgX13_40 > ArgY13_41);
                              if (succeeded)
                              {
                                SubResult13_42 = (MR_Integer) 2;
                                succeeded = MR_TRUE;
                              }
                            }
                            if (succeeded)
                              *HeadVar__1_1 = SubResult13_42;
                            else
                            {
                              MR_Word SubResult14_45;

                              succeeded = (ArgX14_43 < ArgY14_44);
                              if (succeeded)
                              {
                                SubResult14_45 = (MR_Integer) 1;
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                succeeded = (ArgX14_43 > ArgY14_44);
                                if (succeeded)
                                {
                                  SubResult14_45 = (MR_Integer) 2;
                                  succeeded = MR_TRUE;
                                }
                              }
                              if (succeeded)
                                *HeadVar__1_1 = SubResult14_45;
                              else
                              {
                                MR_Word SubResult15_48;

                                succeeded = (ArgX15_46 < ArgY15_47);
                                if (succeeded)
                                {
                                  SubResult15_48 = (MR_Integer) 1;
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  succeeded = (ArgX15_46 > ArgY15_47);
                                  if (succeeded)
                                  {
                                    SubResult15_48 = (MR_Integer) 2;
                                    succeeded = MR_TRUE;
                                  }
                                }
                                if (succeeded)
                                  *HeadVar__1_1 = SubResult15_48;
                                else
                                {
                                  succeeded = (ArgX16_49 < ArgY16_50);
                                  if (succeeded)
                                    *HeadVar__1_1 = (MR_Integer) 1;
                                  else
                                  {
                                    succeeded = (ArgX16_49 > ArgY16_50);
                                    if (succeeded)
                                      *HeadVar__1_1 = (MR_Integer) 2;
                                    else
                                      *HeadVar__1_1 = (MR_Integer) 0;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____prereqs_cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_35 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_36 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_35 == CastY_36);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Unsigned ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Unsigned ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 3))));
    MR_Unsigned ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 3))));
    MR_Unsigned ArgX5_11 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 4))));
    MR_Unsigned ArgY5_12 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 4))));
    MR_Unsigned ArgX6_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 5))));
    MR_Unsigned ArgY6_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 5))));
    MR_Unsigned ArgX7_15 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 6))));
    MR_Unsigned ArgY7_16 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 6))));
    MR_Unsigned ArgX8_17 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 7))));
    MR_Unsigned ArgY8_18 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 7))));
    MR_Unsigned ArgX9_19 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 8))));
    MR_Unsigned ArgY9_20 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 8))));
    MR_Unsigned ArgX10_21 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 9))));
    MR_Unsigned ArgY10_22 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 9))));
    MR_Unsigned ArgX11_23 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 10))));
    MR_Unsigned ArgY11_24 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 10))));
    MR_Unsigned ArgX12_25 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 11))));
    MR_Unsigned ArgY12_26 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 11))));
    MR_Unsigned ArgX13_27 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 12))));
    MR_Unsigned ArgY13_28 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 12))));
    MR_Unsigned ArgX14_29 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 13))));
    MR_Unsigned ArgY14_30 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 13))));
    MR_Unsigned ArgX15_31 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 14))));
    MR_Unsigned ArgY15_32 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 14))));
    MR_Unsigned ArgX16_33 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 15))));
    MR_Unsigned ArgY16_34 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 15))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
      {
        succeeded = (ArgX3_7 == ArgY3_8);
        if (succeeded)
        {
          succeeded = (ArgX4_9 == ArgY4_10);
          if (succeeded)
          {
            succeeded = (ArgX5_11 == ArgY5_12);
            if (succeeded)
            {
              succeeded = (ArgX6_13 == ArgY6_14);
              if (succeeded)
              {
                succeeded = (ArgX7_15 == ArgY7_16);
                if (succeeded)
                {
                  succeeded = (ArgX8_17 == ArgY8_18);
                  if (succeeded)
                  {
                    succeeded = (ArgX9_19 == ArgY9_20);
                    if (succeeded)
                    {
                      succeeded = (ArgX10_21 == ArgY10_22);
                      if (succeeded)
                      {
                        succeeded = (ArgX11_23 == ArgY11_24);
                        if (succeeded)
                        {
                          succeeded = (ArgX12_25 == ArgY12_26);
                          if (succeeded)
                          {
                            succeeded = (ArgX13_27 == ArgY13_28);
                            if (succeeded)
                            {
                              succeeded = (ArgX14_29 == ArgY14_30);
                              if (succeeded)
                              {
                                succeeded = (ArgX15_31 == ArgY15_32);
                                if (succeeded)
                                  succeeded = (ArgX16_33 == ArgY16_34);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return succeeded;
}

void MR_CALL 
make__prereqs_cache____Compare____module_to_target_id_set_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__prereqs_cache_scalar_common_3[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__prereqs_cache____Unify____module_to_target_id_set_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__prereqs_cache_scalar_common_3[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__prereqs_cache____Compare____module_to_module_set_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__prereqs_cache_scalar_common_3[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__prereqs_cache____Unify____module_to_module_set_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&make__prereqs_cache_scalar_common_3[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
make__prereqs_cache____Compare____module_prereqs_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&make__prereqs_cache_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
make__prereqs_cache____Unify____module_prereqs_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = make__prereqs_cache____Unify____prereqs_result_1_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

MR_bool MR_CALL 
make__prereqs_cache____Unify____prereqs_result_1_0(
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
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = mercury__sparse_bitset____Unify____sparse_bitset_1_0(TypeInfo_for_T_9, ArgX2_5, ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache__unsafe_set_prereqs_cache_stats_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL make__prereqs_cache__unsafe_set_prereqs_cache_stats_1_p_0

	MR_Word X;

	X = X_1 ;
		{
make__prereqs_cache__mutable_variable_prereqs_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__prereqs_cache__unsafe_get_prereqs_cache_stats_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL make__prereqs_cache__unsafe_get_prereqs_cache_stats_1_p_0

	MR_Word X;

		{
X = make__prereqs_cache__mutable_variable_prereqs_cache_stats;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
make__prereqs_cache__unlock_prereqs_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL make__prereqs_cache__unlock_prereqs_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, "make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__prereqs_cache__lock_prereqs_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL make__prereqs_cache__lock_prereqs_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, "make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__prereqs_cache__pre_initialise_mutable_prereqs_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL make__prereqs_cache__pre_initialise_mutable_prereqs_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__prereqs_cache__initialise_mutable_prereqs_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL make__prereqs_cache__initialise_mutable_prereqs_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL make__prereqs_cache__initialise_mutable_prereqs_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, "make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL make__prereqs_cache__initialise_mutable_prereqs_cache_stats_0_p_0

	MR_Word X;

	X = (MR_Word) (&make__prereqs_cache_scalar_common_4[0]) ;
		{
make__prereqs_cache__mutable_variable_prereqs_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL make__prereqs_cache__initialise_mutable_prereqs_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, "make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
make__prereqs_cache__desc_cache_stat_2_p_0(
  MR_Tuple HeadVar__1_1,
  MR_String * Desc_6)
{
  MR_bool succeeded;
  MR_String Name_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
  MR_Unsigned Acc_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
  MR_Unsigned Miss_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 2))));

  succeeded = (Acc_4 == (MR_Unsigned) 0U);
  if (succeeded)
    succeeded = (Miss_5 == (MR_Unsigned) 0U);
  if (succeeded)
    *Desc_6 = (MR_String) "";
  else
  {
    MR_String Var_17;
    MR_String Var_25;
    MR_String Var_27;
    MR_String Var_29;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;

    mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&make__prereqs_cache_scalar_common_5[0]), (MR_Integer) 12, (MR_Integer) 1, Miss_5, &Var_17);
    Var_25 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) "\n");
    Var_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_25);
    mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&make__prereqs_cache_scalar_common_5[0]), (MR_Integer) 12, (MR_Integer) 1, Acc_4, &Var_29);
    Var_37 = mercury__string__f_43_43_2_f_0(Var_29, Var_27);
    Var_39 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_37);
    mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&make__prereqs_cache_scalar_common_5[1]), (MR_Integer) 36, Name_3, &Var_40);
    *Desc_6 = mercury__string__f_43_43_2_f_0(Var_40, Var_39);
  }
}

static void MR_CALL 
make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_String conv0_Desc_6;

  make__prereqs_cache__desc_cache_stat_2_p_0(((MR_Tuple) (wrapper_arg_1)), &conv0_Desc_6);
  *wrapper_arg_2 = ((MR_Box) (conv0_Desc_6));
}

void MR_CALL 
make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word Stats_4;
  MR_Unsigned DirectNIAcc_5;
  MR_Unsigned DirectNIMiss_6;
  MR_Unsigned DirectIAcc_7;
  MR_Unsigned DirectIMiss_8;
  MR_Unsigned IndirectNIAcc_9;
  MR_Unsigned IndirectNIMiss_10;
  MR_Unsigned IndirectIAcc_11;
  MR_Unsigned IndirectIMiss_12;
  MR_Unsigned ForeignNIAcc_13;
  MR_Unsigned ForeignNIMiss_14;
  MR_Unsigned Import012NIAcc_15;
  MR_Unsigned Import012NIMiss_16;
  MR_Unsigned Import012IAcc_17;
  MR_Unsigned Import012IMiss_18;
  MR_Unsigned TransPrereqsAcc_19;
  MR_Unsigned TransPrereqsMiss_20;
  MR_Word StatTuples_21;
  MR_Word DescStrs_22;
  MR_String DescsStr_23;
  MR_Tuple Var_30;
  MR_Word Var_32;
  MR_Tuple Var_33;
  MR_Word Var_35;
  MR_Tuple Var_36;
  MR_Word Var_38;
  MR_Tuple Var_39;
  MR_Word Var_41;
  MR_Tuple Var_42;
  MR_Word Var_44;
  MR_Tuple Var_45;
  MR_Word Var_47;
  MR_Tuple Var_48;
  MR_Word Var_50;
  MR_Tuple Var_51;

{
#define MR_PROC_LABEL make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, "make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0

	MR_Word X;

		{
X = make__prereqs_cache__mutable_variable_prereqs_cache_stats;


		;}
#undef MR_PROC_LABEL
	Stats_4  = X;
}
{
#define MR_PROC_LABEL make__prereqs_cache__record_make_prereqs_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock, "make__prereqs_cache__mutable_variable_prereqs_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  DirectNIAcc_5 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 0))));
  DirectNIMiss_6 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 1))));
  DirectIAcc_7 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 2))));
  DirectIMiss_8 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 3))));
  IndirectNIAcc_9 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 4))));
  IndirectNIMiss_10 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 5))));
  IndirectIAcc_11 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 6))));
  IndirectIMiss_12 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 7))));
  ForeignNIAcc_13 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 8))));
  ForeignNIMiss_14 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 9))));
  Import012NIAcc_15 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 10))));
  Import012NIMiss_16 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 11))));
  Import012IAcc_17 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 12))));
  Import012IMiss_18 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 13))));
  TransPrereqsAcc_19 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 14))));
  TransPrereqsMiss_20 = ((MR_Unsigned) ((MR_hl_field(0, Stats_4, 15))));
  {
    Var_30 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) ((MR_String) "direct_imports_non_intermod"));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (DirectNIAcc_5));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) (DirectNIMiss_6));
  }
  {
    Var_33 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) ((MR_String) "direct_imports_intermod"));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (DirectIAcc_7));
    MR_hl_field(0, Var_33, 2) = ((MR_Box) (DirectIMiss_8));
  }
  {
    Var_36 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_36, 0) = ((MR_Box) ((MR_String) "indirect_imports_non_intermod"));
    MR_hl_field(0, Var_36, 1) = ((MR_Box) (IndirectNIAcc_9));
    MR_hl_field(0, Var_36, 2) = ((MR_Box) (IndirectNIMiss_10));
  }
  {
    Var_39 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_39, 0) = ((MR_Box) ((MR_String) "indirect_imports_intermod"));
    MR_hl_field(0, Var_39, 1) = ((MR_Box) (IndirectIAcc_11));
    MR_hl_field(0, Var_39, 2) = ((MR_Box) (IndirectIMiss_12));
  }
  {
    Var_42 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_42, 0) = ((MR_Box) ((MR_String) "foreign_imports_non_intermod"));
    MR_hl_field(0, Var_42, 1) = ((MR_Box) (ForeignNIAcc_13));
    MR_hl_field(0, Var_42, 2) = ((MR_Box) (ForeignNIMiss_14));
  }
  {
    Var_45 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_45, 0) = ((MR_Box) ((MR_String) "anc0_dir1_indir2_non_intermod"));
    MR_hl_field(0, Var_45, 1) = ((MR_Box) (Import012NIAcc_15));
    MR_hl_field(0, Var_45, 2) = ((MR_Box) (Import012NIMiss_16));
  }
  {
    Var_48 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) ((MR_String) "anc0_dir1_indir2_intermod"));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (Import012IAcc_17));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) (Import012IMiss_18));
  }
  {
    Var_51 = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) ((MR_String) "trans_prereqs"));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (TransPrereqsAcc_19));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) (TransPrereqsMiss_20));
  }
  {
    Var_50 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_50, 0) = ((MR_Box) (Var_51));
    MR_hl_field(1, Var_50, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_47, 0) = ((MR_Box) (Var_48));
    MR_hl_field(1, Var_47, 1) = ((MR_Box) (Var_50));
  }
  {
    Var_44 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_44, 0) = ((MR_Box) (Var_45));
    MR_hl_field(1, Var_44, 1) = ((MR_Box) (Var_47));
  }
  {
    Var_41 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_41, 0) = ((MR_Box) (Var_42));
    MR_hl_field(1, Var_41, 1) = ((MR_Box) (Var_44));
  }
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Var_39));
    MR_hl_field(1, Var_38, 1) = ((MR_Box) (Var_41));
  }
  {
    Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_35, 0) = ((MR_Box) (Var_36));
    MR_hl_field(1, Var_35, 1) = ((MR_Box) (Var_38));
  }
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Var_33));
    MR_hl_field(1, Var_32, 1) = ((MR_Box) (Var_35));
  }
  {
    StatTuples_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, StatTuples_21, 0) = ((MR_Box) (Var_30));
    MR_hl_field(1, StatTuples_21, 1) = ((MR_Box) (Var_32));
  }
  mercury__list__map_3_p_0((MR_Word) (&make__prereqs_cache_scalar_common_2[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&make__prereqs_cache_scalar_common_3[3]), StatTuples_21, &DescStrs_22);
  mercury__string__append_list_2_p_0(DescStrs_22, &DescsStr_23);
  succeeded = (strcmp(DescsStr_23, (MR_String) "") == 0);
  if (!(succeeded))
  {
    MR_Word Result_24;

    mercury__io__open_append_4_p_0((MR_String) "/tmp/MAKE_PREREQS_CACHE_STATS", &Result_24);
    if (!(((MR_tag((MR_Word) Result_24)) == (MR_Integer) 1)))
    {
      MR_Word OutStream_26 = ((MR_Word) ((MR_hl_field(0, Result_24, 0))));

      mercury__io__write_string_4_p_0(OutStream_26, DescsStr_23);
      mercury__io__close_output_3_p_0(OutStream_26);
    }
  }
}

void MR_CALL 
make__prereqs_cache__add_to_trans_prereqs_cache_4_p_0(
  MR_Word Key_5,
  MR_Word Result_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word CacheMap0_12;
  MR_Word CacheMap_13;

  CacheMap0_12 = make__make_info__make_info_get_trans_prereqs_cache_1_f_0(STATE_VARIABLE_Info_0_14);
  mercury__map__det_insert_4_p_0((MR_Word) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_key_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), ((MR_Box) (Key_5)), ((MR_Box) (Result_6)), CacheMap0_12, &CacheMap_13);
  make__make_info__make_info_set_trans_prereqs_cache_3_p_0(CacheMap_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

MR_bool MR_CALL 
make__prereqs_cache__search_trans_prereqs_cache_3_p_0(
  MR_Word Info_4,
  MR_Word Key_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word CacheMap_11;
  MR_Box conv0_Result_6;

  CacheMap_11 = make__make_info__make_info_get_trans_prereqs_cache_1_f_0(Info_4);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_key_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), CacheMap_11, ((MR_Box) (Key_5)), &conv0_Result_6);
  if (succeeded)
  {
    *Result_6 = ((MR_Word) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
make__prereqs_cache__add_to_anc0_dir1_indir2_intermod_cache_4_p_0(
  MR_Word Key_5,
  MR_Word Result_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word CacheMap0_12;
  MR_Word CacheMap_13;

  CacheMap0_12 = make__make_info__make_info_get_anc0_dir1_indir2_intermod_cache_1_f_0(STATE_VARIABLE_Info_0_14);
  mercury__map__det_insert_4_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[1]), ((MR_Box) (Key_5)), ((MR_Box) (Result_6)), CacheMap0_12, &CacheMap_13);
  make__make_info__make_info_set_anc0_dir1_indir2_intermod_cache_3_p_0(CacheMap_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

MR_bool MR_CALL 
make__prereqs_cache__search_anc0_dir1_indir2_intermod_cache_3_p_0(
  MR_Word Info_4,
  MR_Word Key_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word CacheMap_11;
  MR_Box conv0_Result_6;

  CacheMap_11 = make__make_info__make_info_get_anc0_dir1_indir2_intermod_cache_1_f_0(Info_4);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[1]), CacheMap_11, ((MR_Box) (Key_5)), &conv0_Result_6);
  if (succeeded)
  {
    *Result_6 = ((MR_Word) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
make__prereqs_cache__add_to_foreign_imports_non_intermod_trans_cache_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word Result_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word CacheMap0_12;
  MR_Word CacheMap_13;

  CacheMap0_12 = make__make_info__make_info_get_foreign_imports_non_intermod_trans_cache_1_f_0(STATE_VARIABLE_Info_0_14);
  mercury__map__det_insert_4_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), ((MR_Box) (ModuleIndex_5)), ((MR_Box) (Result_6)), CacheMap0_12, &CacheMap_13);
  make__make_info__make_info_set_foreign_imports_non_intermod_trans_cache_3_p_0(CacheMap_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

MR_bool MR_CALL 
make__prereqs_cache__search_foreign_imports_non_intermod_trans_cache_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleIndex_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word CacheMap_11;
  MR_Box conv0_Result_6;

  CacheMap_11 = make__make_info__make_info_get_foreign_imports_non_intermod_trans_cache_1_f_0(Info_4);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), CacheMap_11, ((MR_Box) (ModuleIndex_5)), &conv0_Result_6);
  if (succeeded)
  {
    *Result_6 = ((MR_Word) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
make__prereqs_cache__add_to_indirect_imports_intermod_cache_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word Result_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word CacheMap0_12;
  MR_Word CacheMap_13;

  CacheMap0_12 = make__make_info__make_info_get_indirect_imports_intermod_cache_1_f_0(STATE_VARIABLE_Info_0_14);
  mercury__map__det_insert_4_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), ((MR_Box) (ModuleIndex_5)), ((MR_Box) (Result_6)), CacheMap0_12, &CacheMap_13);
  make__make_info__make_info_set_indirect_imports_intermod_cache_3_p_0(CacheMap_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

MR_bool MR_CALL 
make__prereqs_cache__search_indirect_imports_intermod_cache_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleIndex_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word CacheMap_11;
  MR_Box conv0_Result_6;

  CacheMap_11 = make__make_info__make_info_get_indirect_imports_intermod_cache_1_f_0(Info_4);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), CacheMap_11, ((MR_Box) (ModuleIndex_5)), &conv0_Result_6);
  if (succeeded)
  {
    *Result_6 = ((MR_Word) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
make__prereqs_cache__add_to_direct_imports_intermod_cache_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word Result_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word CacheMap0_12;
  MR_Word CacheMap_13;

  CacheMap0_12 = make__make_info__make_info_get_direct_imports_intermod_cache_1_f_0(STATE_VARIABLE_Info_0_14);
  mercury__map__det_insert_4_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), ((MR_Box) (ModuleIndex_5)), ((MR_Box) (Result_6)), CacheMap0_12, &CacheMap_13);
  make__make_info__make_info_set_direct_imports_intermod_cache_3_p_0(CacheMap_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

MR_bool MR_CALL 
make__prereqs_cache__search_direct_imports_intermod_cache_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleIndex_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word CacheMap_11;
  MR_Box conv0_Result_6;

  CacheMap_11 = make__make_info__make_info_get_direct_imports_intermod_cache_1_f_0(Info_4);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), CacheMap_11, ((MR_Box) (ModuleIndex_5)), &conv0_Result_6);
  if (succeeded)
  {
    *Result_6 = ((MR_Word) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
make__prereqs_cache__add_to_direct_imports_non_intermod_cache_4_p_0(
  MR_Word ModuleIndex_5,
  MR_Word Result_6,
  MR_Word STATE_VARIABLE_Info_0_14,
  MR_Word * STATE_VARIABLE_Info_15)
{
  MR_Word CacheMap0_12;
  MR_Word CacheMap_13;

  CacheMap0_12 = make__make_info__make_info_get_direct_imports_non_intermod_cache_1_f_0(STATE_VARIABLE_Info_0_14);
  mercury__map__det_insert_4_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), ((MR_Box) (ModuleIndex_5)), ((MR_Box) (Result_6)), CacheMap0_12, &CacheMap_13);
  make__make_info__make_info_set_direct_imports_non_intermod_cache_3_p_0(CacheMap_13, STATE_VARIABLE_Info_0_14, STATE_VARIABLE_Info_15);
}

MR_bool MR_CALL 
make__prereqs_cache__search_direct_imports_non_intermod_cache_3_p_0(
  MR_Word Info_4,
  MR_Word ModuleIndex_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Word CacheMap_11;
  MR_Box conv0_Result_6;

  CacheMap_11 = make__make_info__make_info_get_direct_imports_non_intermod_cache_1_f_0(Info_4);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]), CacheMap_11, ((MR_Box) (ModuleIndex_5)), &conv0_Result_6);
  if (succeeded)
  {
    *Result_6 = ((MR_Word) (conv0_Result_6));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Word MR_CALL 
make__prereqs_cache__init_trans_prereqs_cache_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_key_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__prereqs_cache__init_module_to_target_id_set_cache_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[1]));
  return HeadVar__1_1;
}

MR_Word MR_CALL 
make__prereqs_cache__init_module_to_module_set_cache_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&make__index_set__make__index_set__type_ctor_info_module_index_0), (MR_Word) (&make__prereqs_cache_scalar_common_1[0]));
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____module_prereqs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____module_prereqs_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____module_prereqs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____module_prereqs_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____module_to_module_set_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____module_to_module_set_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____module_to_module_set_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____module_to_module_set_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____module_to_target_id_set_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____module_to_target_id_set_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____module_to_target_id_set_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____module_to_target_id_set_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____prereqs_cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____prereqs_cache_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____prereqs_cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____prereqs_cache_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____prereqs_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____prereqs_result_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____prereqs_result_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____prereqs_result_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____process_modules_where_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____process_modules_where_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____process_modules_where_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____process_modules_where_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____target_id_prereqs_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____target_id_prereqs_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____target_id_prereqs_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____target_id_prereqs_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____trans_prereqs_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____trans_prereqs_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____trans_prereqs_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____trans_prereqs_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____trans_prereqs_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____trans_prereqs_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____trans_prereqs_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____trans_prereqs_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
make__prereqs_cache____Unify____transitive_dependencies_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = make__prereqs_cache____Unify____transitive_dependencies_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
make__prereqs_cache____Compare____transitive_dependencies_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  make__prereqs_cache____Compare____transitive_dependencies_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__make__prereqs_cache__init(void)
{
}

void mercury__make__prereqs_cache__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_module_prereqs_result_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_module_to_module_set_cache_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_module_to_target_id_set_cache_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_cache_stats_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_prereqs_result_1);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_process_modules_where_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_target_id_prereqs_result_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_cache_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_trans_prereqs_key_0);
  MR_register_type_ctor_info(&make__prereqs_cache__make__prereqs_cache__type_ctor_info_transitive_dependencies_type_0);
}

void mercury__make__prereqs_cache__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__make__prereqs_cache__required_init(void)
{
  make__prereqs_cache__user_init_pred_55_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__make__prereqs_cache__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module make.prereqs_cache.
