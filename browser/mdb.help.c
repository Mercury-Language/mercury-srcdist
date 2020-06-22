/*
** Automatically generated from `help.m'
** by the Mercury compiler,
** version rotd-2020-06-22
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


// :- module mdb.help.
// :- implementation.

/*
INIT mercury__mdb__help__init
ENDINIT
*/

#include "mdb.help.mih"
#include "mdb.help.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"



struct mdb__help__add_node_7_p_0_env_0_s {
  MR_Word mdb__help__add_node_7_p_0_env_0__Nodes0_1;
  MR_Integer mdb__help__add_node_7_p_0_env_0__Index_3;
  MR_String mdb__help__add_node_7_p_0_env_0__Name_4;
  MR_bool mdb__help__add_node_7_p_0_env_0__succeeded;
  jmp_buf mdb__help__add_node_7_p_0_env_0__commit_0;
  MR_Word mdb__help__add_node_7_p_0_env_0__Entry1_33;
  MR_Integer mdb__help__add_node_7_p_0_env_0__Var_44;
  MR_Box mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33;
  jmp_buf mdb__help__add_node_7_p_0_env_0__commit_1;
  MR_Word mdb__help__add_node_7_p_0_env_0__Entry1_40;
  MR_String mdb__help__add_node_7_p_0_env_0__Var_45;
  MR_Box mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40;
};


static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_entry_0_0[3];

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_entry_0_0;

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_entry_0_0[1];

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_entry_0[1];

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_entry_0[1];

static const MR_Integer mdb__help__mdb__help__functor_number_map_entry_0[1];

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_0;

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_res_0_1[1];

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_1;

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_0[1];

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_1[1];

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_res_0[2];

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_help_res_0[2];

static const MR_Integer mdb__help__mdb__help__functor_number_map_help_res_0[2];

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0;

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_node_0_0[2];

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_node_0_0;

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_node_0_0[1];

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_node_0[1];

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_node_0[1];

static const MR_Integer mdb__help__mdb__help__functor_number_map_node_0[1];

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
mdb__help____Compare____text_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3);

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2);

static void MR_CALL 
mdb__help____Compare____node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__help__search_entry_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_2,
  MR_Integer STATE_VARIABLE_C_0_3,
  MR_Integer * STATE_VARIABLE_C_4,
  MR_Word Stream_5);

static void MR_CALL 
mdb__help__print_entry_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_2);

static void MR_CALL 
mdb__help__add_node_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0(
  MR_Word Nodes0_1,
  MR_Word HeadVar__2_2,
  MR_Integer Index_3,
  MR_String Name_4,
  MR_Word HeadVar__5_5,
  MR_Word * Res_6,
  MR_Word * Nodes_7);

static void MR_CALL 
mdb__help__replace_entry_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Entry_2,
  MR_Word * List_3);

static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_6,
  MR_Word * Entry_7);

static void MR_CALL 
mdb__help__insert_into_entry_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Index_2,
  MR_String Name_3,
  MR_Word Node_4,
  MR_Word * HeadVar__5_5);

static MR_bool MR_CALL 
mdb__help____Unify____entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____help_res_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____system_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____text_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__help_scalar_common_1[2][2];

static /* final */ const MR_Box mdb__help_scalar_common_2[3][1];




static /* final */ const MR_Box mdb__help_scalar_common_1[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__help__mdb__help__type_ctor_info_entry_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__help_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "entry with given index already exists"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "entry with given name already exists"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "the path does not go that deep"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.help.mh"

#line 117 "help.m"
void 
ML_HELP_init(
  MR_Word * HeadVar__1_1)
#line 117 "help.m"
{
#line 117 "help.m"
	mdb__help__init_1_p_0((MR_Word *) HeadVar__1_1);
}

#line 118 "help.m"
void 
ML_HELP_add_help_node(
  MR_Word Sys0_8,
  MR_Word Path_9,
  MR_Integer Index_10,
  MR_String Name_11,
  MR_String Text_12,
  MR_Word * Res_13,
  MR_Word * Sys_14)
#line 118 "help.m"
{
#line 118 "help.m"
	mdb__help__add_help_node_7_p_0((MR_Word) Sys0_8, (MR_Word) Path_9, (MR_Integer) Index_10, (MR_String) Name_11, (MR_String) Text_12, (MR_Word *) Res_13, (MR_Word *) Sys_14);
}

#line 120 "help.m"
void 
ML_HELP_help(
  MR_Word Sys_5,
  MR_Word Stream_6)
#line 120 "help.m"
{
#line 120 "help.m"
	mdb__help__help_4_p_0((MR_Word) Sys_5, (MR_Word) Stream_6);
}

#line 121 "help.m"
void 
ML_HELP_path(
  MR_Word Entries_7,
  MR_Word Path_8,
  MR_Word Stream_9,
  MR_Word * Result_10)
#line 121 "help.m"
{
#line 121 "help.m"
	mdb__help__path_6_p_0((MR_Word) Entries_7, (MR_Word) Path_8, (MR_Word) Stream_9, (MR_Word *) Result_10);
}

#line 122 "help.m"
void 
ML_HELP_name(
  MR_Word Sys_6,
  MR_String Name_7,
  MR_Word Stream_8)
#line 122 "help.m"
{
#line 122 "help.m"
	mdb__help__name_5_p_0((MR_Word) Sys_6, (MR_String) Name_7, (MR_Word) Stream_8);
}

#line 123 "help.m"
void 
ML_HELP_help_system_type(
  MR_Word * Type_2)
#line 123 "help.m"
{
#line 123 "help.m"
	mdb__help__help_system_type_1_p_0((MR_Word *) Type_2);
}

#line 125 "help.m"
MR_bool 
ML_HELP_result_is_error(
  MR_Word HeadVar__1_1,
  MR_String * Msg_3)
#line 125 "help.m"
{
#line 125 "help.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__help__result_is_error_2_p_0((MR_Word) HeadVar__1_1, (MR_String *) Msg_3);
	return ret_value;
}


static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_entry_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__help__mdb__help__type_ctor_info_node_0)
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_entry_0_0 = {
  (MR_String) "entry",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__help__mdb__help__field_types_entry_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_entry_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_entry_0_0
};

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_entry_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_entry_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_entry_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_entry_0_0
};

static const MR_Integer mdb__help__mdb__help__functor_number_map_entry_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_entry_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____entry_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____entry_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "entry",
  {     mdb__help__mdb__help__du_name_ordered_entry_0 },
  {     mdb__help__mdb__help__du_ptag_ordered_entry_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__help__mdb__help__functor_number_map_entry_0
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_0 = {
  (MR_String) "help_ok",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_res_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_1 = {
  (MR_String) "help_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mdb__help__mdb__help__field_types_help_res_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_0
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_1[1] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_1
};

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_res_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__help__mdb__help__du_stag_ordered_help_res_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_help_res_0_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_help_res_0[2] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_1,
  &mdb__help__mdb__help__du_functor_desc_help_res_0_0
};

static const MR_Integer mdb__help__mdb__help__functor_number_map_help_res_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_help_res_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____help_res_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____help_res_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "help_res",
  {     mdb__help__mdb__help__du_name_ordered_help_res_0 },
  {     mdb__help__mdb__help__du_ptag_ordered_help_res_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  mdb__help__mdb__help__functor_number_map_help_res_0
};

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mdb__help__mdb__help__type_ctor_info_entry_0)
  }
};

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0)
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_node_0_0 = {
  (MR_String) "node",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__help__mdb__help__field_types_node_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_node_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_node_0_0
};

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_node_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_node_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_node_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_node_0_0
};

static const MR_Integer mdb__help__mdb__help__functor_number_map_node_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_node_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____node_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____node_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "node",
  {     mdb__help__mdb__help__du_name_ordered_node_0 },
  {     mdb__help__mdb__help__du_ptag_ordered_node_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mdb__help__mdb__help__functor_number_map_node_0
};

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____path_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____path_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "path",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__help__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_system_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____system_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____system_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "system",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_text_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____text_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____text_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "text",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static void MR_CALL 
mdb__help____Compare____text_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____system_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__help_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdb__help____Unify____system_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__help_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__help_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdb__help____Unify____path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__help_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____help_res_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_8 == CastY_9);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_String Var_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_11, ArgY1_7);
      }
    }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
      MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____entry_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
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
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mdb__help____Compare____node_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

static void MR_CALL 
mdb__help____Compare____node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__builtin__compare_3_p_0((MR_Word) (&mdb__help_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX2_7)), ((MR_Box) (ArgY2_8)));
    }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____entry_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
          succeeded = mdb__help____Unify____node_0_0(ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
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
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        TypeInfo_9_9 = (MR_Word) (&mdb__help_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_9_9, ((MR_Box) (ArgX2_5)), ((MR_Box) (ArgY2_6)));
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mdb__help__result_is_error_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Msg_3)
{
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

    if (succeeded)
      *Msg_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    return succeeded;
  }
}

void MR_CALL 
mdb__help__help_system_type_1_p_0(
  MR_Word * Type_2)
{
  *Type_2 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mdb__help_scalar_common_1[0]));
}

void MR_CALL 
mdb__help__name_5_p_0(
  MR_Word Sys_6,
  MR_String Name_7,
  MR_Word Stream_8)
{
  {
    MR_bool succeeded;
    MR_Integer Count_10;

    mdb__help__search_entry_list_7_p_0(Sys_6, Name_7, (MR_Integer) 0, &Count_10, Stream_8);
    succeeded = (Count_10 == (MR_Integer) 0);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "There is no such help topic.\n");
      mdb__help__print_entry_list_4_p_0(Sys_6, Stream_8);
    }
  }
}

static void MR_CALL 
mdb__help__search_entry_list_7_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_2,
  MR_Integer STATE_VARIABLE_C_0_3,
  MR_Integer * STATE_VARIABLE_C_4,
  MR_Word Stream_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_C_4 = STATE_VARIABLE_C_0_3;
    else
    {
      MR_Word Entry_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String EntryName_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry_16, (MR_Integer) 1))));
      MR_Word Node_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_16, (MR_Integer) 2))));

      succeeded = (strcmp(Name_2, EntryName_23) == 0);
      if (succeeded)
      {
        MR_String Text_39 = ((MR_String) ((MR_hl_field(MR_mktag(0), Node_24, (MR_Integer) 0))));

        mercury__io__write_string_4_p_0(Stream_5, Text_39);
        *STATE_VARIABLE_C_4 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_C_0_3 + (MR_Unsigned) 1);
      }
      else
      {
        MR_Integer STATE_VARIABLE_C_32_32;
        MR_Word SubNodes_50 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Node_24, (MR_Integer) 1))));
        MR_Word next_value_of_HeadVar__1_1;
        MR_Integer next_value_of_STATE_VARIABLE_C_0_3;

        mdb__help__search_entry_list_7_p_0(SubNodes_50, Name_2, STATE_VARIABLE_C_0_3, &STATE_VARIABLE_C_32_32, Stream_5);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Tail_17;
        next_value_of_STATE_VARIABLE_C_0_3 = STATE_VARIABLE_C_32_32;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_C_0_3 = next_value_of_STATE_VARIABLE_C_0_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mdb__help__path_6_p_0(
  MR_Word Entries_7,
  MR_Word Path_8,
  MR_Word Stream_9,
  MR_Word * Result_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Path_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_10 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[2]));
    else
    {
      MR_String Step_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Path_8, (MR_Integer) 0))));
      MR_Word Tail_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Path_8, (MR_Integer) 1))));
      MR_Word Entry_14;

      succeeded = mdb__help__one_path_step_3_p_0(Entries_7, Step_12, &Entry_14);
      if (succeeded)
      {
        MR_Word EntryNode_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry_14, (MR_Integer) 2))));
        MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryNode_17, (MR_Integer) 1))));
        MR_String Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), EntryNode_17, (MR_Integer) 0))));

        if ((Tail_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(Stream_9, Var_34);
          *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word next_value_of_Entries_7 = Var_33;
          MR_Word next_value_of_Path_8 = Tail_13;

          // direct tailcall eliminated
          ;
          Entries_7 = next_value_of_Entries_7;
          Path_8 = next_value_of_Path_8;
          continue;
        }
      }
      else
      {
        MR_String Msg_24;
        MR_String Var_31;

        Var_31 = mercury__string__f_43_43_2_f_0(Step_12, (MR_String) "\"");
        Msg_24 = mercury__string__f_43_43_2_f_0((MR_String) "error at path component \"", Var_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_24));
        }
      }
    }
    break;
  }
}

void MR_CALL 
mdb__help__help_4_p_0(
  MR_Word Sys_5,
  MR_Word Stream_6)
{
  mdb__help__print_entry_list_4_p_0(Sys_5, Stream_6);
}

static void MR_CALL 
mdb__help__print_entry_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Stream_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Node_11;
      MR_Word Nodes_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String Text_23;
      MR_Word next_value_of_HeadVar__1_1;

      Node_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_17, (MR_Integer) 2))));
      Text_23 = ((MR_String) ((MR_hl_field(MR_mktag(0), Node_11, (MR_Integer) 0))));
      mercury__io__write_string_4_p_0(Stream_2, Text_23);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Nodes_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdb__help__add_help_node_7_p_0(
  MR_Word Sys0_8,
  MR_Word Path_9,
  MR_Integer Index_10,
  MR_String Name_11,
  MR_String Text_12,
  MR_Word * Res_13,
  MR_Word * Sys_14)
{
  {
    MR_Word Node_15;

    {
      Node_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Node_15, 0) = ((MR_Box) (Text_12));
      MR_hl_field(MR_mktag(0), Node_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mdb__help__add_node_7_p_0(Sys0_8, Path_9, Index_10, Name_11, Node_15, Res_13, Sys_14);
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_3(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33 = ((MR_Word) ((env_ptr)->mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33));
    mdb__help__add_node_7_p_0_2(env_ptr);
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_String Var_34;
      MR_Word Var_35;

      (env_ptr)->mdb__help__add_node_7_p_0_env_0__Var_44 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 0))));
      Var_34 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 1))));
      Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 2))));
      (env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = ((env_ptr)->mdb__help__add_node_7_p_0_env_0__Index_3 == (env_ptr)->mdb__help__add_node_7_p_0_env_0__Var_44);
      if ((env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded)
        mdb__help__add_node_7_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_4(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&mdb__help__mdb__help__type_ctor_info_entry_0), &(env_ptr)->mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33, (env_ptr)->mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__add_node_7_p_0_3, env_ptr);
        (env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_5(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_7(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40 = ((MR_Word) ((env_ptr)->mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40));
    mdb__help__add_node_7_p_0_6(env_ptr);
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_6(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Integer Var_36 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 0))));
      MR_Word Var_37;

      (env_ptr)->mdb__help__add_node_7_p_0_env_0__Var_45 = ((MR_String) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 1))));
      Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 2))));
      (env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = (strcmp((env_ptr)->mdb__help__add_node_7_p_0_env_0__Name_4, (env_ptr)->mdb__help__add_node_7_p_0_env_0__Var_45) == 0);
      if ((env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded)
        mdb__help__add_node_7_p_0_5(env_ptr);
    }
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_8(
  void * env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_1) == 0)
      {
        mercury__list__member_2_p_1((MR_Word) (&mdb__help__mdb__help__type_ctor_info_entry_0), &(env_ptr)->mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40, (env_ptr)->mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__add_node_7_p_0_7, env_ptr);
        (env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0(
  MR_Word Nodes0_1,
  MR_Word HeadVar__2_2,
  MR_Integer Index_3,
  MR_String Name_4,
  MR_Word HeadVar__5_5,
  MR_Word * Res_6,
  MR_Word * Nodes_7)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s env;

    (env).mdb__help__add_node_7_p_0_env_0__Nodes0_1 = Nodes0_1;
    (env).mdb__help__add_node_7_p_0_env_0__Index_3 = Index_3;
    (env).mdb__help__add_node_7_p_0_env_0__Name_4 = Name_4;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mdb__help__add_node_7_p_0_4(&env);
      if ((env).mdb__help__add_node_7_p_0_env_0__succeeded)
      {
        *Res_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[0]));
        *Nodes_7 = (env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
      }
      else
      {
        mdb__help__add_node_7_p_0_8(&env);
        if ((env).mdb__help__add_node_7_p_0_env_0__succeeded)
        {
          *Res_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[1]));
          *Nodes_7 = (env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
        }
        else
        {
          *Res_6 = (MR_Word) ((MR_Unsigned) 0U);
          mdb__help__insert_into_entry_list_5_p_0((env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, (env).mdb__help__add_node_7_p_0_env_0__Index_3, (env).mdb__help__add_node_7_p_0_env_0__Name_4, HeadVar__5_5, Nodes_7);
        }
      }
    }
    else
    {
      MR_String Step_9 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Steps_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Entry0_16;

      (env).mdb__help__add_node_7_p_0_env_0__succeeded = mdb__help__one_path_step_3_p_0((env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, Step_9, &Entry0_16);
      if ((env).mdb__help__add_node_7_p_0_env_0__succeeded)
      {
        MR_Integer EntryIndex_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry0_16, (MR_Integer) 0))));
        MR_String EntryName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Entry0_16, (MR_Integer) 1))));
        MR_Word EntryNode0_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Entry0_16, (MR_Integer) 2))));
        MR_String Text_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), EntryNode0_19, (MR_Integer) 0))));
        MR_Word SubNodes0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), EntryNode0_19, (MR_Integer) 1))));
        MR_Word SubNodes_22;
        MR_Word EntryNode_23;
        MR_Word Entry_24;

        mdb__help__add_node_7_p_0(SubNodes0_21, Steps_10, (env).mdb__help__add_node_7_p_0_env_0__Index_3, (env).mdb__help__add_node_7_p_0_env_0__Name_4, HeadVar__5_5, Res_6, &SubNodes_22);
        {
          EntryNode_23 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), EntryNode_23, 0) = ((MR_Box) (Text_20));
          MR_hl_field(MR_mktag(0), EntryNode_23, 1) = ((MR_Box) (SubNodes_22));
        }
        {
          Entry_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entry_24, 0) = ((MR_Box) (EntryIndex_17));
          MR_hl_field(MR_mktag(0), Entry_24, 1) = ((MR_Box) (EntryName_18));
          MR_hl_field(MR_mktag(0), Entry_24, 2) = ((MR_Box) (EntryNode_23));
        }
        mdb__help__replace_entry_3_p_0((env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, Entry_24, Nodes_7);
      }
      else
      {
        MR_String Msg_25;

        mercury__string__append_3_p_2((MR_String) "invalid path component ", Step_9, &Msg_25);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_25));
        }
        *Nodes_7 = (env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
      }
    }
  }
}

static void MR_CALL 
mdb__help__replace_entry_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Entry_2,
  MR_Word * List_3)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__error_1_p_0((MR_String) "replace_entry: entry to be replaced not found");
        return;
      }
    else
    {
      MR_Word Head_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer HeadIndex_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Head_7, (MR_Integer) 0))));
      MR_Integer EntryIndex_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry_2, (MR_Integer) 0))));

      succeeded = (HeadIndex_11 == EntryIndex_14);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *List_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Entry_2));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Tail_8));
        }
      else
      {
        MR_Word NewTail_17;

        mdb__help__replace_entry_3_p_0(Tail_8, Entry_2, &NewTail_17);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *List_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewTail_17));
        }
      }
    }
  }
}

static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_6,
  MR_Word * Entry_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Head_4;
    MR_Word Tail_5;
    MR_String HeadName_9;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Head_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      Tail_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      HeadName_9 = ((MR_String) ((MR_hl_field(MR_mktag(0), Head_4, (MR_Integer) 1))));
      succeeded = (strcmp(HeadName_9, Name_6) == 0);
      if (succeeded)
      {
        *Entry_7 = Head_4;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Tail_5;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static void MR_CALL 
mdb__help__insert_into_entry_list_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer Index_2,
  MR_String Name_3,
  MR_Word Node_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word Entry_9;

      {
        Entry_9 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_9, 0) = ((MR_Box) (Index_2));
        MR_hl_field(MR_mktag(0), Entry_9, 1) = ((MR_Box) (Name_3));
        MR_hl_field(MR_mktag(0), Entry_9, 2) = ((MR_Box) (Node_4));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Entry_9));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    }
    else
    {
      MR_Word Head_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Tail_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer HeadIndex_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Head_11, (MR_Integer) 0))));

      succeeded = (HeadIndex_17 < Index_2);
      if (succeeded)
      {
        MR_Word NewTail_20;

        mdb__help__insert_into_entry_list_5_p_0(Tail_12, Index_2, Name_3, Node_4, &NewTail_20);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Head_11));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewTail_20));
        }
      }
      else
      {
        MR_Word Entry_21;

        {
          Entry_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Entry_21, 0) = ((MR_Box) (Index_2));
          MR_hl_field(MR_mktag(0), Entry_21, 1) = ((MR_Box) (Name_3));
          MR_hl_field(MR_mktag(0), Entry_21, 2) = ((MR_Box) (Node_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Entry_21));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (HeadVar__1_1));
        }
      }
    }
  }
}

void MR_CALL 
mdb__help__init_1_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mdb__help____Unify____entry_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__help____Unify____entry_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____entry_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__help____Compare____entry_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__help____Unify____help_res_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____help_res_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__help____Compare____help_res_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__help____Unify____node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__help____Compare____node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__help____Unify____path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__help____Compare____path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__help____Unify____system_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____system_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__help____Compare____system_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__help____Unify____text_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____text_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__help____Compare____text_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__help__init(void)
{
}

void mercury__mdb__help__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_entry_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_help_res_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_node_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_path_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_system_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_text_0);
}

void mercury__mdb__help__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__help__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.help.
