/*
** Automatically generated from `make_module_file_names.m'
** by the Mercury compiler,
** version rotd-2024-12-16
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


// :- module parse_tree.make_module_file_names.
// :- implementation.

/*
INIT mercury__parse_tree__make_module_file_names__init
REQUIRED_INIT mercury__parse_tree__make_module_file_names__required_init
ENDINIT
*/

#include "parse_tree.make_module_file_names.mih"
#include "parse_tree.make_module_file_names.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_util.mih"
#include "libs.mmakefiles.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_types_cache_stats_0_0[2];

static const MR_ConstString parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_names_cache_stats_0_0[2];

static const MR_DuFunctorDesc parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_cache_stats_0_0;

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_stag_ordered_cache_stats_0_0[1];

static const MR_DuPtagLayout parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_ptag_ordered_cache_stats_0[1];

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_name_ordered_cache_stats_0[1];

static const MR_Integer parse_tree__make_module_file_names__parse_tree__make_module_file_names__functor_number_map_cache_stats_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__make_module_file_names__type_ctor_info_cache_stats_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0;

static void MR_CALL 
parse_tree__make_module_file_names____Compare____file_name_cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____file_name_cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__make_module_file_names____Compare____cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_set_module_file_name_cache_stats_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_get_module_file_name_cache_stats_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__make_module_file_names__unlock_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__lock_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__pre_initialise_mutable_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__initialise_mutable_module_file_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__write_cache_stats_entry_5_p_0(
  MR_Word OutStream_6,
  MR_Word Ext_7,
  MR_Word Stats_8);

static void MR_CALL 
parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__make_module_file_names____Compare____cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____file_name_cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__make_module_file_names____Compare____file_name_cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____module_file_name_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__make_module_file_names____Compare____module_file_name_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_1[3][3];

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_2[2][1];

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_3[1][12];

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_4[1][8];




static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0))
  },
};

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_3[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_globals_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_4[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "parse_tree.make_module_file_names.mh"
#line 230 "make_module_file_names.m"
MR_Word parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock;
#endif


#line 230 "make_module_file_names.m"
void 
parse_tree__make_module_file_names__user_init_pred_27_0(void)
#line 230 "make_module_file_names.m"
{
#line 230 "make_module_file_names.m"
	parse_tree__make_module_file_names__initialise_mutable_module_file_name_cache_stats_0_p_0();
}


static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_parse_tree__file_names__type_ctor_info_ext_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_PseudoTypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_types_cache_stats_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint_0)
};

static const MR_ConstString parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_names_cache_stats_0_0[2] = {
  (MR_String) "lookups",
  (MR_String) "misses"
};

static const MR_DuFunctorDesc parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_cache_stats_0_0 = {
  (MR_String) "cache_stats",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_types_cache_stats_0_0,
  parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_names_cache_stats_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_stag_ordered_cache_stats_0_0[1] = { &parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_cache_stats_0_0 };

static const MR_DuPtagLayout parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_ptag_ordered_cache_stats_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_stag_ordered_cache_stats_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_name_ordered_cache_stats_0[1] = { &parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_cache_stats_0_0 };

static const MR_Integer parse_tree__make_module_file_names__parse_tree__make_module_file_names__functor_number_map_cache_stats_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__make_module_file_names____Unify____cache_stats_0_0_10001)),
  ((MR_Box) (parse_tree__make_module_file_names____Compare____cache_stats_0_0_10001)),
  (MR_String) "parse_tree.make_module_file_names",
  (MR_String) "cache_stats",
  { parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_name_ordered_cache_stats_0 },
  { parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_ptag_ordered_cache_stats_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__make_module_file_names__parse_tree__make_module_file_names__functor_number_map_cache_stats_0,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__make_module_file_names__type_ctor_info_cache_stats_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_TypeInfo) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_file_name_cache_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__make_module_file_names____Unify____file_name_cache_stats_0_0_10001)),
  ((MR_Box) (parse_tree__make_module_file_names____Compare____file_name_cache_stats_0_0_10001)),
  (MR_String) "parse_tree.make_module_file_names",
  (MR_String) "file_name_cache_stats",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__make_module_file_names__type_ctor_info_cache_stats_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_TypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_file_name_cache_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__make_module_file_names____Unify____module_file_name_cache_0_0_10001)),
  ((MR_Box) (parse_tree__make_module_file_names____Compare____module_file_name_cache_0_0_10001)),
  (MR_String) "parse_tree.make_module_file_names",
  (MR_String) "module_file_name_cache",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
parse_tree__make_module_file_names____Compare____module_file_name_cache_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____module_file_name_cache_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names____Compare____file_name_cache_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____file_name_cache_stats_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[2]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names____Compare____cache_stats_0_0(
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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
    {
      succeeded = (ArgX2_7 < ArgY2_8);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (ArgX2_7 > ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 2;
        else
          *HeadVar__1_1 = (MR_Integer) 0;
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____cache_stats_0_0(
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
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_set_module_file_name_cache_stats_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unsafe_set_module_file_name_cache_stats_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_get_module_file_name_cache_stats_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unsafe_get_module_file_name_cache_stats_1_p_0

	MR_Word X;

		{
X = parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__make_module_file_names__unlock_module_file_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unlock_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__lock_module_file_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__lock_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__pre_initialise_mutable_module_file_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__pre_initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__initialise_mutable_module_file_name_cache_stats_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0));
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_file_name_cache_stats_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_file_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__write_cache_stats_entry_5_p_0(
  MR_Word OutStream_6,
  MR_Word Ext_7,
  MR_Word Stats_8)
{
  MR_Unsigned Lookups_10 = ((MR_Unsigned) ((MR_hl_field(0, Stats_8, (MR_Integer) 0))));
  MR_Unsigned Misses_11 = ((MR_Unsigned) ((MR_hl_field(0, Stats_8, (MR_Integer) 1))));
  MR_String Var_18;
  MR_String Var_26;
  MR_String Var_38;
  MR_String Var_50;

  Var_18 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), ((MR_Box) (Ext_7)));
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[0]), (MR_Integer) 55, Var_18, &Var_26);
  mercury__io__write_string_4_p_0(OutStream_6, Var_26);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[1]), (MR_Integer) 8, (MR_Integer) 1, Lookups_10, &Var_38);
  mercury__io__write_string_4_p_0(OutStream_6, Var_38);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[1]), (MR_Integer) 8, (MR_Integer) 1, Misses_11, &Var_50);
  mercury__io__write_string_4_p_0(OutStream_6, Var_50);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__make_module_file_names__write_cache_stats_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word Map_4;

{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0

	MR_Word X;

		{
X = parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats;


		;}
#undef MR_PROC_LABEL
	Map_4  = X;
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_file_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0), Map_4);
  if (!(succeeded))
  {
    MR_Word Result_5;

    mercury__io__open_append_4_p_0((MR_String) "/tmp/WRITE_DEPS_FILE_CACHE_STATS", &Result_5);
    if (!(((MR_tag((MR_Word) Result_5)) == (MR_Integer) 1)))
    {
      MR_Word OutStream_7 = ((MR_Word) ((MR_hl_field(0, Result_5, (MR_Integer) 0))));
      MR_Word Var_13;
      MR_Box conv0_STATE_VARIABLE_IO_14_14;

      {
        Var_13 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_13, 0) = ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_4[0]));
        MR_hl_field(0, Var_13, 1) = ((MR_Box) (parse_tree__make_module_file_names__record_write_deps_file_cache_stats_2_p_0_1));
        MR_hl_field(0, Var_13, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_13, 3) = ((MR_Box) (OutStream_7));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_13, Map_4, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14_14);
      mercury__io__close_output_3_p_0(OutStream_7);
    }
  }
}

void MR_CALL 
parse_tree__make_module_file_names__make_module_file_name_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14,
  MR_Word STATE_VARIABLE_Cache_0_22,
  MR_Word * STATE_VARIABLE_Cache_23)
{
  MR_bool succeeded;
  MR_Word ExtMap0_17;
  MR_Box conv0_ExtMap0_17;

  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[0]), STATE_VARIABLE_Cache_0_22, ((MR_Box) (Ext_12)), &conv0_ExtMap0_17);
  if (succeeded)
  {
    ExtMap0_17 = ((MR_Word) (conv0_ExtMap0_17));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_String CachedFileName_18;
    MR_Box conv1_CachedFileName_18;

    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtMap0_17, ((MR_Box) (ModuleName_13)), &conv1_CachedFileName_18);
    if (succeeded)
    {
      CachedFileName_18 = ((MR_String) (conv1_CachedFileName_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      *FileName_14 = CachedFileName_18;
      *STATE_VARIABLE_Cache_23 = STATE_VARIABLE_Cache_0_22;
    }
    else
    {
      MR_Word ExtMap_21;
      MR_String _FileNameProposed_20;

      parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_10, From_11, Ext_12, ModuleName_13, FileName_14, &_FileNameProposed_20);
      mercury__map__det_insert_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (*FileName_14)), ExtMap0_17, &ExtMap_21);
      mercury__map__det_update_4_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[0]), ((MR_Box) (Ext_12)), ((MR_Box) (ExtMap_21)), STATE_VARIABLE_Cache_0_22, STATE_VARIABLE_Cache_23);
    }
  }
  else
  {
    MR_Word ExtMap_36;
    MR_String _FileNameProposed_34;

    parse_tree__file_names__module_name_to_file_name_6_p_0(Globals_10, From_11, Ext_12, ModuleName_13, FileName_14, &_FileNameProposed_34);
    ExtMap_36 = mercury__map__singleton_2_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (ModuleName_13)), ((MR_Box) (*FileName_14)));
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[0]), ((MR_Box) (Ext_12)), ((MR_Box) (ExtMap_36)), STATE_VARIABLE_Cache_0_22, STATE_VARIABLE_Cache_23);
  }
}

static void MR_CALL 
parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__make_module_file_names__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

void MR_CALL 
parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0(
  MR_Word Globals_9,
  MR_Word Ext_10,
  MR_Word Modules_11,
  MR_Word * FileNames_12,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16)
{
  MR_Word Var_19;
  MR_Box conv3_STATE_VARIABLE_Cache_16;
  MR_Box conv2_STATE_VARIABLE_IO_18;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_3[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (parse_tree__make_module_file_names__make_module_file_names_with_ext_8_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Globals_9));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.make_module_file_names.make_module_file_names_with_ext\'/8"));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (Ext_10));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, Modules_11, FileNames_12, ((MR_Box) (STATE_VARIABLE_Cache_0_15)), &conv3_STATE_VARIABLE_Cache_16, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_18);
  *STATE_VARIABLE_Cache_16 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_16));
}

static void MR_CALL 
parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_14;
  MR_Word conv0_STATE_VARIABLE_Cache_23;

  parse_tree__make_module_file_names__make_module_file_name_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_14, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_23);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_14));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_23));
}

void MR_CALL 
parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0(
  MR_Word Globals_10,
  MR_String GroupName_11,
  MR_Word Ext_12,
  MR_Word ModuleSet_13,
  MR_Word * Groups_14,
  MR_Word STATE_VARIABLE_Cache_0_19,
  MR_Word * STATE_VARIABLE_Cache_20)
{
  MR_Word Modules_17;
  MR_Word FileNames_18;
  MR_Word Var_24;
  MR_Box conv3_STATE_VARIABLE_Cache_20;
  MR_Box conv2_STATE_VARIABLE_IO_22;

  mercury__set__to_sorted_list_2_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleSet_13, &Modules_17);
  {
    Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_24, 0) = ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_3[0]));
    MR_hl_field(0, Var_24, 1) = ((MR_Box) (parse_tree__make_module_file_names__make_module_file_name_group_with_ext_9_p_0_1));
    MR_hl_field(0, Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_24, 3) = ((MR_Box) (Globals_10));
    MR_hl_field(0, Var_24, 4) = ((MR_Box) ((MR_String) "predicate \140parse_tree.make_module_file_names.make_module_file_names_with_ext\'/8"));
    MR_hl_field(0, Var_24, 5) = ((MR_Box) (Ext_12));
  }
  mercury__list__map_foldl2_7_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Modules_17, &FileNames_18, ((MR_Box) (STATE_VARIABLE_Cache_0_19)), &conv3_STATE_VARIABLE_Cache_20, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_22);
  *STATE_VARIABLE_Cache_20 = ((MR_Word) (conv3_STATE_VARIABLE_Cache_20));
  *Groups_14 = libs__mmakefiles__make_file_name_group_2_f_0(GroupName_11, FileNames_18);
}

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__make_module_file_names____Unify____cache_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names____Compare____cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__make_module_file_names____Compare____cache_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____file_name_cache_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__make_module_file_names____Unify____file_name_cache_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names____Compare____file_name_cache_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__make_module_file_names____Compare____file_name_cache_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____module_file_name_cache_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__make_module_file_names____Unify____module_file_name_cache_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names____Compare____module_file_name_cache_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__make_module_file_names____Compare____module_file_name_cache_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__parse_tree__make_module_file_names__init(void)
{
}

void mercury__parse_tree__make_module_file_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0);
	MR_register_type_ctor_info(&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_file_name_cache_stats_0);
	MR_register_type_ctor_info(&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_file_name_cache_0);
}

void mercury__parse_tree__make_module_file_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__make_module_file_names__required_init(void)
{
	parse_tree__make_module_file_names__user_init_pred_27_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__make_module_file_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.make_module_file_names.
