/*
** Automatically generated from `make_module_file_names.m'
** by the Mercury compiler,
** version rotd-2025-11-16
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
#include "mdbcomp.feedback.feedback_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__make_module_file_names__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0;

static const MR_PseudoTypeInfo parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_types_cache_stats_0_0[2];

static const MR_ConstString parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_names_cache_stats_0_0[2];

static const MR_DuFunctorDesc parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_cache_stats_0_0;

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_stag_ordered_cache_stats_0_0[1];

static const MR_DuPtagLayout parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_ptag_ordered_cache_stats_0[1];

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_name_ordered_cache_stats_0[1];

static const MR_Integer parse_tree__make_module_file_names__parse_tree__make_module_file_names__functor_number_map_cache_stats_0[1];

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__make_module_file_names__type_ctor_info_cache_stats_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0;

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_types_module_name_info_0_0[2];

static const MR_ConstString parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_names_module_name_info_0_0[2];

static const MR_DuFunctorDesc parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_module_name_info_0_0;

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_stag_ordered_module_name_info_0_0[1];

static const MR_DuPtagLayout parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_ptag_ordered_module_name_info_0[1];

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_name_ordered_module_name_info_0[1];

static const MR_Integer parse_tree__make_module_file_names__parse_tree__make_module_file_names__functor_number_map_module_name_info_0[1];

static void MR_CALL 
parse_tree__make_module_file_names____Compare____ext_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____ext_stats_0_0(
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
parse_tree__make_module_file_names__unsafe_set_ext_cache_stats_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_get_ext_cache_stats_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__make_module_file_names__unlock_ext_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__lock_ext_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__pre_initialise_mutable_ext_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__initialise_mutable_ext_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_set_module_name_cache_stats_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_get_module_name_cache_stats_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__make_module_file_names__unlock_module_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__lock_module_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__pre_initialise_mutable_module_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__initialise_mutable_module_name_cache_stats_0_p_0(void);

static void MR_CALL 
parse_tree__make_module_file_names__write_cache_stats_entry_5_p_0(
  MR_Word OutStream_6,
  MR_Word Ext_7,
  MR_Word Stats_8);

static void MR_CALL 
parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_to_file_name_base_7_p_0(
  MR_Word Ext_8,
  MR_String ExtStr_9,
  MR_Word ExtDirNames_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Cache_0_39,
  MR_Word * STATE_VARIABLE_Cache_40);

static void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_list_to_file_names_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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
parse_tree__make_module_file_names____Unify____ext_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__make_module_file_names____Compare____ext_stats_0_0_10001(
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

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____module_name_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__make_module_file_names____Compare____module_name_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_1[4][3];

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_2[2][1];

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_4[1][10];

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_5[1][8];




static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_1[4][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_1[0]))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_2[2][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 1U << 1)))))))) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_3[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_4[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)),
    ((MR_Box) (&parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0))
  },
};

static /* final */ const MR_Box parse_tree__make_module_file_names_scalar_common_5[1][8] = {
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
#line 314 "make_module_file_names.m"
MR_Word parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock;
#endif

#line 317 "make_module_file_names.m"
MR_Word parse_tree__make_module_file_names__mutable_variable_ext_cache_stats;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock;
#endif


#line 314 "make_module_file_names.m"
void 
parse_tree__make_module_file_names__user_init_pred_35_0(void)
#line 314 "make_module_file_names.m"
{
#line 314 "make_module_file_names.m"
	parse_tree__make_module_file_names__initialise_mutable_module_name_cache_stats_0_p_0();
}

#line 317 "make_module_file_names.m"
void 
parse_tree__make_module_file_names__user_init_pred_36_0(void)
#line 317 "make_module_file_names.m"
{
#line 317 "make_module_file_names.m"
	parse_tree__make_module_file_names__initialise_mutable_ext_cache_stats_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct1 parse_tree__make_module_file_names__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_TypeInfo) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__make_module_file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)
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

const MR_TypeCtorInfo_Struct parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_ext_stats_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (parse_tree__make_module_file_names____Unify____ext_stats_0_0_10001)),
  ((MR_Box) (parse_tree__make_module_file_names____Compare____ext_stats_0_0_10001)),
  (MR_String) "parse_tree.make_module_file_names",
  (MR_String) "ext_stats",
  { NULL },
  { (MR_PseudoTypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0parse_tree__make_module_file_names__type_ctor_info_cache_stats_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0)
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
  { (MR_PseudoTypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2builtin__type_ctor_info_string_0tree234__ti_tree234_2mdbcomp__sym_name__type_ctor_info_sym_name_0parse_tree__make_module_file_names__type_ctor_info_module_name_info_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct2 parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_types_module_name_info_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__make_module_file_names__tree234__ti_tree234_2parse_tree__file_names__type_ctor_info_ext_0builtin__type_ctor_info_string_0)
};

static const MR_ConstString parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_names_module_name_info_0_0[2] = {
  (MR_String) "base_file_name_no_ext_non_java",
  (MR_String) "ext_map"
};

static const MR_DuFunctorDesc parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_module_name_info_0_0 = {
  (MR_String) "module_name_info",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_types_module_name_info_0_0,
  parse_tree__make_module_file_names__parse_tree__make_module_file_names__field_names_module_name_info_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_stag_ordered_module_name_info_0_0[1] = { &parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_module_name_info_0_0 };

static const MR_DuPtagLayout parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_ptag_ordered_module_name_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_stag_ordered_module_name_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_name_ordered_module_name_info_0[1] = { &parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_functor_desc_module_name_info_0_0 };

static const MR_Integer parse_tree__make_module_file_names__parse_tree__make_module_file_names__functor_number_map_module_name_info_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__make_module_file_names____Unify____module_name_info_0_0_10001)),
  ((MR_Box) (parse_tree__make_module_file_names____Compare____module_name_info_0_0_10001)),
  (MR_String) "parse_tree.make_module_file_names",
  (MR_String) "module_name_info",
  { parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_name_ordered_module_name_info_0 },
  { parse_tree__make_module_file_names__parse_tree__make_module_file_names__du_ptag_ordered_module_name_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__make_module_file_names__parse_tree__make_module_file_names__functor_number_map_module_name_info_0,

};

void MR_CALL 
parse_tree__make_module_file_names____Compare____module_name_info_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
    MR_Word SubResult1_6;

    mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
      mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
  }
}

MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____module_name_info_0_0(
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
    MR_Word TypeInfo_9_9;
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      TypeInfo_9_9 = (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[3]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
    }
  }
  return succeeded;
}

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
parse_tree__make_module_file_names____Compare____ext_stats_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____ext_stats_0_0(
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
    MR_Unsigned ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Unsigned ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Unsigned ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))));
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
    MR_Unsigned ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Unsigned ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Unsigned ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Unsigned ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_set_ext_cache_stats_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unsafe_set_ext_cache_stats_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__make_module_file_names__mutable_variable_ext_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_get_ext_cache_stats_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unsafe_get_ext_cache_stats_1_p_0

	MR_Word X;

		{
X = parse_tree__make_module_file_names__mutable_variable_ext_cache_stats;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__make_module_file_names__unlock_ext_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unlock_ext_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__lock_ext_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__lock_ext_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__pre_initialise_mutable_ext_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__pre_initialise_mutable_ext_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__initialise_mutable_ext_cache_stats_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_ext_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0));
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_ext_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_ext_cache_stats_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__make_module_file_names__mutable_variable_ext_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_ext_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_set_module_name_cache_stats_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unsafe_set_module_name_cache_stats_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__unsafe_get_module_name_cache_stats_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unsafe_get_module_name_cache_stats_1_p_0

	MR_Word X;

		{
X = parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__make_module_file_names__unlock_module_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__unlock_module_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__lock_module_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__lock_module_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__pre_initialise_mutable_module_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__pre_initialise_mutable_module_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__make_module_file_names__initialise_mutable_module_name_cache_stats_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_name_cache_stats_0_p_0

	MR_Word X;

	X = (MR_Word) (&parse_tree__make_module_file_names_scalar_common_3[0]) ;
		{
parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__initialise_mutable_module_name_cache_stats_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock");
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
  MR_String ExtStr_11;
  MR_Unsigned Lookups_12;
  MR_Unsigned Misses_13;
  MR_String Var_47;
  MR_String Var_59;
  MR_String Var_71;

  switch (MR_tag((MR_Word) Ext_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word ExtSub_10 = ((MR_Unsigned) ((MR_hl_field(0, Ext_7, 0))) & (MR_Integer) 15);

        ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_0), ((MR_Box) (ExtSub_10)));
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ExtSub_25 = ((MR_Unsigned) ((MR_hl_field(1, Ext_7, 0))) & (MR_Integer) 15);

        ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_0), ((MR_Box) (ExtSub_25)));
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ExtSub_26 = ((MR_Unsigned) ((MR_hl_field(2, Ext_7, 0))) & (MR_Integer) 3);

        ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gs_0), ((MR_Box) (ExtSub_26)));
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Ext_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ExtSub_27 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, 1))) & (MR_Integer) 15);

            ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_gas_0), ((MR_Box) (ExtSub_27)));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ExtSub_28 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, 1))) & (MR_Integer) 15);

            ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_0), ((MR_Box) (ExtSub_28)));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ExtSub_29 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, 1))) & (MR_Integer) 15);

            ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gas_0), ((MR_Box) (ExtSub_29)));
          }
          break;
        case (MR_Integer) 3:
          ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_err_0), ((MR_Box) ((MR_Integer) 0)));
          break;
        case (MR_Integer) 4:
          {
            MR_Word ExtSub_31 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, 1))) & (MR_Integer) 1);

            ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_java_0), ((MR_Box) (ExtSub_31)));
          }
          break;
        case (MR_Integer) 5:
          ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_pgs_max_cur_0), ((MR_Box) ((MR_Integer) 0)));
          break;
        case (MR_Integer) 6:
          ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_cur_0), ((MR_Box) ((MR_Integer) 0)));
          break;
        case (MR_Integer) 7:
          {
            MR_Word ExtSub_34 = ((MR_Unsigned) ((MR_hl_field(3, Ext_7, 1))) & (MR_Integer) 7);

            ExtStr_11 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_cur_ngs_gs_max_ngs_0), ((MR_Box) (ExtSub_34)));
          }
          break;
      }
      break;
  }
  Lookups_12 = ((MR_Unsigned) ((MR_hl_field(0, Stats_8, 0))));
  Misses_13 = ((MR_Unsigned) ((MR_hl_field(0, Stats_8, 1))));
  mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[0]), (MR_Integer) 55, ExtStr_11, &Var_47);
  mercury__io__write_string_4_p_0(OutStream_6, Var_47);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[1]), (MR_Integer) 8, (MR_Integer) 1, Lookups_12, &Var_59);
  mercury__io__write_string_4_p_0(OutStream_6, Var_59);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) " ");
  mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[1]), (MR_Integer) 8, (MR_Integer) 1, Misses_13, &Var_71);
  mercury__io__write_string_4_p_0(OutStream_6, Var_71);
  mercury__io__write_string_4_p_0(OutStream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__make_module_file_names__write_cache_stats_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word ModuleNameStats_4;
  MR_Unsigned MNLookups_5;
  MR_Unsigned MNMisses_6;
  MR_Word ExtMap_7;
  MR_Word TypeCtorInfo_29_29;
  MR_Word TypeCtorInfo_30_30;

{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0

	MR_Word X;

		{
X = parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats;


		;}
#undef MR_PROC_LABEL
	ModuleNameStats_4  = X;
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_module_name_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  MNLookups_5 = ((MR_Unsigned) ((MR_hl_field(0, ModuleNameStats_4, 0))));
  MNMisses_6 = ((MR_Unsigned) ((MR_hl_field(0, ModuleNameStats_4, 1))));
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0

	MR_Word X;

		{
X = parse_tree__make_module_file_names__mutable_variable_ext_cache_stats;


		;}
#undef MR_PROC_LABEL
	ExtMap_7  = X;
}
{
#define MR_PROC_LABEL parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock, "parse_tree__make_module_file_names__mutable_variable_ext_cache_stats_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  succeeded = (MNLookups_5 == (MR_Unsigned) 0U);
  if (succeeded)
  {
    succeeded = (MNMisses_6 == (MR_Unsigned) 0U);
    if (succeeded)
    {
      TypeCtorInfo_29_29 = (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0);
      TypeCtorInfo_30_30 = (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0);
      succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_29_29, TypeCtorInfo_30_30, ExtMap_7);
    }
  }
  if (!(succeeded))
  {
    MR_Word Result_8;

    mercury__io__open_append_4_p_0((MR_String) "/tmp/MODULE_EXT_CACHE_STATS", &Result_8);
    if (!(((MR_tag((MR_Word) Result_8)) == (MR_Integer) 1)))
    {
      MR_Word OutStream_10 = ((MR_Word) ((MR_hl_field(0, Result_8, 0))));
      MR_Word Var_27;
      MR_String Var_39;
      MR_String Var_51;
      MR_String Var_63;
      MR_Box conv0_STATE_VARIABLE_IO_5_28;

      mercury__string__format__format_string_component_width_noprec_4_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[0]), (MR_Integer) 55, (MR_String) "module_name", &Var_39);
      mercury__io__write_string_4_p_0(OutStream_10, Var_39);
      mercury__io__write_string_4_p_0(OutStream_10, (MR_String) " ");
      mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[1]), (MR_Integer) 8, (MR_Integer) 1, MNLookups_5, &Var_51);
      mercury__io__write_string_4_p_0(OutStream_10, Var_51);
      mercury__io__write_string_4_p_0(OutStream_10, (MR_String) " ");
      mercury__string__format__format_uint_component_width_noprec_5_p_0((MR_Word) (&parse_tree__make_module_file_names_scalar_common_2[1]), (MR_Integer) 8, (MR_Integer) 1, MNMisses_6, &Var_63);
      mercury__io__write_string_4_p_0(OutStream_10, Var_63);
      mercury__io__write_string_4_p_0(OutStream_10, (MR_String) "\n");
      {
        Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_27, 0) = ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_5[0]));
        MR_hl_field(0, Var_27, 1) = ((MR_Box) (parse_tree__make_module_file_names__record_module_ext_cache_stats_2_p_0_1));
        MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_27, 3) = ((MR_Box) (OutStream_10));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_cache_stats_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, ExtMap_7, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_5_28);
      mercury__io__close_output_3_p_0(OutStream_10);
    }
  }
}

void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_to_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String _From_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18)
{
  parse_tree__make_module_file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0(Globals_8, Ext_10, ModuleName_11, FileName_12, STATE_VARIABLE_Cache_0_17, STATE_VARIABLE_Cache_18);
}

void MR_CALL 
parse_tree__make_module_file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_118_101_114_116_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Cache_0_17,
  MR_Word * STATE_VARIABLE_Cache_18)
{
  MR_Word ExtDirNamesLegacy_14;
  MR_String ExtStr_16;
  MR_Word _ExtDirNamesProposed_15;

  parse_tree__file_names__ext_to_dir_path_extstr_6_p_0(Globals_8, (MR_Integer) 0, Ext_10, &ExtDirNamesLegacy_14, &_ExtDirNamesProposed_15, &ExtStr_16);
  parse_tree__make_module_file_names__convert_module_name_to_file_name_base_7_p_0(Ext_10, ExtStr_16, ExtDirNamesLegacy_14, ModuleName_11, FileName_12, STATE_VARIABLE_Cache_0_17, STATE_VARIABLE_Cache_18);
}

static void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_to_file_name_base_7_p_0(
  MR_Word Ext_8,
  MR_String ExtStr_9,
  MR_Word ExtDirNames_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12,
  MR_Word STATE_VARIABLE_Cache_0_39,
  MR_Word * STATE_VARIABLE_Cache_40)
{
  MR_bool succeeded;
  MR_String ModuleBaseName_14;
  MR_Word ModuleNameMap0_17;
  MR_String BaseFileNameNoExtNonJava_20;
  MR_Word ExtMap0_21;
  MR_Word ModuleNameMap0Prime_16;
  MR_Box conv0_ModuleNameMap0Prime_16;
  MR_String CachedFileName_22;
  MR_Box conv2_CachedFileName_22;

  if (((MR_tag((MR_Word) ModuleName_11)) == (MR_Integer) 1))
    ModuleBaseName_14 = ((MR_String) ((MR_hl_field(1, ModuleName_11, 1))));
  else
    ModuleBaseName_14 = ((MR_String) ((MR_hl_field(0, ModuleName_11, 0))));
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[0]), STATE_VARIABLE_Cache_0_39, ((MR_Box) (ModuleBaseName_14)), &conv0_ModuleNameMap0Prime_16);
  if (succeeded)
  {
    ModuleNameMap0Prime_16 = ((MR_Word) (conv0_ModuleNameMap0Prime_16));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ModuleNameInfo0_18;
    MR_Box conv1_ModuleNameInfo0_18;

    ModuleNameMap0_17 = ModuleNameMap0Prime_16;
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0), ModuleNameMap0_17, ((MR_Box) (ModuleName_11)), &conv1_ModuleNameInfo0_18);
    if (succeeded)
    {
      ModuleNameInfo0_18 = ((MR_Word) (conv1_ModuleNameInfo0_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      BaseFileNameNoExtNonJava_20 = ((MR_String) ((MR_hl_field(0, ModuleNameInfo0_18, 0))));
      ExtMap0_21 = ((MR_Word) ((MR_hl_field(0, ModuleNameInfo0_18, 1))));
    }
    else
    {
      BaseFileNameNoExtNonJava_20 = parse_tree__file_names__module_name_to_base_file_name_no_ext_non_java_1_f_0(ModuleName_11);
      mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &ExtMap0_21);
    }
  }
  else
  {
    BaseFileNameNoExtNonJava_20 = parse_tree__file_names__module_name_to_base_file_name_no_ext_non_java_1_f_0(ModuleName_11);
    mercury__map__init_1_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0), &ModuleNameMap0_17);
    mercury__map__init_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &ExtMap0_21);
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ExtMap0_21, ((MR_Box) (Ext_8)), &conv2_CachedFileName_22);
  if (succeeded)
  {
    CachedFileName_22 = ((MR_String) (conv2_CachedFileName_22));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    *FileName_12 = CachedFileName_22;
    *STATE_VARIABLE_Cache_40 = STATE_VARIABLE_Cache_0_39;
  }
  else
  {
    MR_String BaseFileNameNoExt_33;
    MR_String CurDirFileName_35;
    MR_Word ExtMap_36;
    MR_Word ModuleNameInfo_37;
    MR_Word ModuleNameMap_38;

    switch (MR_tag((MR_Word) Ext_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        BaseFileNameNoExt_33 = BaseFileNameNoExtNonJava_20;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Ext_8, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
            BaseFileNameNoExt_33 = BaseFileNameNoExtNonJava_20;
            break;
          case (MR_Integer) 4:
            BaseFileNameNoExt_33 = parse_tree__file_names__module_name_to_base_file_name_no_ext_java_1_f_0(ModuleName_11);
            break;
        }
        break;
    }
    CurDirFileName_35 = mercury__string__f_43_43_2_f_0(BaseFileNameNoExt_33, ExtStr_9);
    *FileName_12 = parse_tree__file_names__glue_dir_names_base_name_2_f_0(ExtDirNames_10, CurDirFileName_35);
    mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (Ext_8)), ((MR_Box) (*FileName_12)), ExtMap0_21, &ExtMap_36);
    {
      ModuleNameInfo_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, ModuleNameInfo_37, 0) = ((MR_Box) (BaseFileNameNoExtNonJava_20));
      MR_hl_field(0, ModuleNameInfo_37, 1) = ((MR_Box) (ExtMap_36));
    }
    mercury__map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0), ((MR_Box) (ModuleName_11)), ((MR_Box) (ModuleNameInfo_37)), ModuleNameMap0_17, &ModuleNameMap_38);
    mercury__map__set_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[0]), ((MR_Box) (ModuleBaseName_14)), ((MR_Box) (ModuleNameMap_38)), STATE_VARIABLE_Cache_0_39, STATE_VARIABLE_Cache_40);
  }
}

static void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_list_to_file_names_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_12;
  MR_Word conv0_STATE_VARIABLE_Cache_40;

  parse_tree__make_module_file_names__convert_module_name_to_file_name_base_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_40);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_40));
}

void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_list_to_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_8,
  MR_Word ModuleNames_9,
  MR_Word * FileNames_10,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16)
{
  MR_Word ExtDirNamesLegacy_12;
  MR_String ExtStr_14;
  MR_Word Var_18;
  MR_Word _ExtDirNamesProposed_13;
  MR_Box conv2_STATE_VARIABLE_Cache_16;

  parse_tree__file_names__ext_to_dir_path_extstr_6_p_0(Globals_7, (MR_Integer) 0, Ext_8, &ExtDirNamesLegacy_12, &_ExtDirNamesProposed_13, &ExtStr_14);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_4[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__make_module_file_names__convert_module_name_list_to_file_names_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Ext_8));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (ExtStr_14));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (ExtDirNamesLegacy_12));
  }
  mercury__list__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[1]), Var_18, ModuleNames_9, FileNames_10, ((MR_Box) (STATE_VARIABLE_Cache_0_15)), &conv2_STATE_VARIABLE_Cache_16);
  *STATE_VARIABLE_Cache_16 = ((MR_Word) (conv2_STATE_VARIABLE_Cache_16));
}

void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_set_to_file_name_group_7_p_0(
  MR_Word Globals_8,
  MR_String GroupName_9,
  MR_Word Ext_10,
  MR_Word ModuleNameSet_11,
  MR_Word * Groups_12,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16)
{
  MR_Word FileNames_14;

  parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(Globals_8, Ext_10, ModuleNameSet_11, &FileNames_14, STATE_VARIABLE_Cache_0_15, STATE_VARIABLE_Cache_16);
  *Groups_12 = libs__mmakefiles__construct_file_name_maybe_group_2_f_0(GroupName_9, FileNames_14);
}

static void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_String conv1_FileName_12;
  MR_Word conv0_STATE_VARIABLE_Cache_40;

  parse_tree__make_module_file_names__convert_module_name_to_file_name_base_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_String) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), &conv1_FileName_12, ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_Cache_40);
  *wrapper_arg_2 = ((MR_Box) (conv1_FileName_12));
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_Cache_40));
}

void MR_CALL 
parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0(
  MR_Word Globals_7,
  MR_Word Ext_8,
  MR_Word ModuleNameSet_9,
  MR_Word * FileNames_10,
  MR_Word STATE_VARIABLE_Cache_0_15,
  MR_Word * STATE_VARIABLE_Cache_16)
{
  MR_Word ExtDirNamesLegacy_12;
  MR_String ExtStr_14;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word _ExtDirNamesProposed_13;
  MR_Box conv2_STATE_VARIABLE_Cache_16;

  parse_tree__file_names__ext_to_dir_path_extstr_6_p_0(Globals_7, (MR_Integer) 0, Ext_8, &ExtDirNamesLegacy_12, &_ExtDirNamesProposed_13, &ExtStr_14);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&parse_tree__make_module_file_names_scalar_common_4[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (parse_tree__make_module_file_names__convert_module_name_set_to_file_names_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Ext_8));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (ExtStr_14));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (ExtDirNamesLegacy_12));
  }
  Var_19 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), ModuleNameSet_9);
  mercury__list__map_foldl_5_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[1]), Var_18, Var_19, FileNames_10, ((MR_Box) (STATE_VARIABLE_Cache_0_15)), &conv2_STATE_VARIABLE_Cache_16);
  *STATE_VARIABLE_Cache_16 = ((MR_Word) (conv2_STATE_VARIABLE_Cache_16));
}

MR_Word MR_CALL 
parse_tree__make_module_file_names__init_module_file_name_cache_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  HeadVar__1_1 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__make_module_file_names_scalar_common_1[0]));
  return HeadVar__1_1;
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
parse_tree__make_module_file_names____Unify____ext_stats_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__make_module_file_names____Unify____ext_stats_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names____Compare____ext_stats_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__make_module_file_names____Compare____ext_stats_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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

static MR_bool MR_CALL 
parse_tree__make_module_file_names____Unify____module_name_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__make_module_file_names____Unify____module_name_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__make_module_file_names____Compare____module_name_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__make_module_file_names____Compare____module_name_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
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
  MR_register_type_ctor_info(&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_ext_stats_0);
  MR_register_type_ctor_info(&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_file_name_cache_0);
  MR_register_type_ctor_info(&parse_tree__make_module_file_names__parse_tree__make_module_file_names__type_ctor_info_module_name_info_0);
}

void mercury__parse_tree__make_module_file_names__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__make_module_file_names__required_init(void)
{
  parse_tree__make_module_file_names__user_init_pred_35_0();
  parse_tree__make_module_file_names__user_init_pred_36_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__make_module_file_names__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module parse_tree.make_module_file_names.
