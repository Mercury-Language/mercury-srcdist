/*
** Automatically generated from `help.m'
** by the Mercury compiler,
** version rotd-2023-10-02
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"



struct mdb__help__add_node_5_p_0_env_0_s {
  MR_Word mdb__help__add_node_5_p_0_env_0__NewNode_2;
  MR_Word mdb__help__add_node_5_p_0_env_0__Nodes0_4;
  MR_bool mdb__help__add_node_5_p_0_env_0__succeeded;
  jmp_buf mdb__help__add_node_5_p_0_env_0__commit_0;
  MR_Integer mdb__help__add_node_5_p_0_env_0__Var_26;
  MR_Word mdb__help__add_node_5_p_0_env_0__MemberNode_30;
  MR_Integer mdb__help__add_node_5_p_0_env_0__Var_46;
  MR_Box mdb__help__add_node_5_p_0_env_0__conv0_MemberNode_30;
  jmp_buf mdb__help__add_node_5_p_0_env_0__commit_1;
  MR_String mdb__help__add_node_5_p_0_env_0__Var_28;
  MR_Word mdb__help__add_node_5_p_0_env_0__MemberNode_31;
  MR_String mdb__help__add_node_5_p_0_env_0__Var_47;
  MR_Box mdb__help__add_node_5_p_0_env_0__conv1_MemberNode_31;
};


static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1mdb__help__type_ctor_info_help_node_0;

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_node_0_0[4];

static const MR_ConstString mdb__help__mdb__help__field_names_help_node_0_0[4];

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_node_0_0;

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_node_0_0[1];

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_node_0[1];

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_help_node_0[1];

static const MR_Integer mdb__help__mdb__help__functor_number_map_help_node_0[1];

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_0;

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_res_0_1[1];

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_1;

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_0[1];

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_1[1];

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_res_0[2];

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_help_res_0[2];

static const MR_Integer mdb__help__mdb__help__functor_number_map_help_res_0[2];

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
mdb__help__search_node_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_2,
  MR_Word STATE_VARIABLE_RevMatchedNodes_0_3,
  MR_Word * STATE_VARIABLE_RevMatchedNodes_4);

static void MR_CALL 
mdb__help__print_node_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mdb__help__add_node_5_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0_8(
  void * env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NewNode_2,
  MR_Word * Res_3,
  MR_Word Nodes0_4,
  MR_Word * Nodes_5);

static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_6,
  MR_Word * Node_7);

static void MR_CALL 
mdb__help__insert_into_node_list_3_p_0(
  MR_Word Node_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__help__replace_node_at_index_3_p_0(
  MR_Word Node_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3);

static MR_bool MR_CALL 
mdb__help____Unify____help_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____help_node_0_0_10001(
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
mdb__help____Unify____help_system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____help_system_0_0_10001(
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


static /* final */ const MR_Box mdb__help_scalar_common_1[2][2];

static /* final */ const MR_Box mdb__help_scalar_common_2[3][1];




static /* final */ const MR_Box mdb__help_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__help__mdb__help__type_ctor_info_help_node_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__help_scalar_common_2[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "the path does not go that deep")) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "entry with given index already exists")) },
  /* row   2 */
  { ((MR_Box) ((MR_String) "entry with given name already exists")) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "mdb.help.mh"

#line 116 "help.m"
void 
ML_HELP_init(
  MR_Word * HeadVar__1_1)
#line 116 "help.m"
{
#line 116 "help.m"
	mdb__help__init_1_p_0((MR_Word *) HeadVar__1_1);
}

#line 117 "help.m"
void 
ML_HELP_add_help_node(
  MR_Word Path_8,
  MR_Integer Index_9,
  MR_String Name_10,
  MR_String Text_11,
  MR_Word * Res_12,
  MR_Word STATE_VARIABLE_Sys_0_15,
  MR_Word * STATE_VARIABLE_Sys_16)
#line 117 "help.m"
{
#line 117 "help.m"
	mdb__help__add_help_node_7_p_0((MR_Word) Path_8, (MR_Integer) Index_9, (MR_String) Name_10, (MR_String) Text_11, (MR_Word *) Res_12, (MR_Word) STATE_VARIABLE_Sys_0_15, (MR_Word *) STATE_VARIABLE_Sys_16);
}

#line 119 "help.m"
void 
ML_HELP_print_top_level_help_nodes(
  MR_Word Stream_5,
  MR_Word Sys_6)
#line 119 "help.m"
{
#line 119 "help.m"
	mdb__help__print_top_level_help_nodes_4_p_0((MR_Word) Stream_5, (MR_Word) Sys_6);
}

#line 121 "help.m"
void 
ML_HELP_print_help_node_at_path(
  MR_Word Stream_7,
  MR_Word Nodes_8,
  MR_Word Path_9,
  MR_Word * Result_10)
#line 121 "help.m"
{
#line 121 "help.m"
	mdb__help__print_help_node_at_path_6_p_0((MR_Word) Stream_7, (MR_Word) Nodes_8, (MR_Word) Path_9, (MR_Word *) Result_10);
}

#line 123 "help.m"
void 
ML_HELP_print_help_for_name(
  MR_Word Stream_6,
  MR_Word Sys_7,
  MR_String Name_8)
#line 123 "help.m"
{
#line 123 "help.m"
	mdb__help__print_help_for_name_5_p_0((MR_Word) Stream_6, (MR_Word) Sys_7, (MR_String) Name_8);
}

#line 125 "help.m"
void 
ML_HELP_help_system_type(
  MR_Word * Type_2)
#line 125 "help.m"
{
#line 125 "help.m"
	mdb__help__help_system_type_1_p_0((MR_Word *) Type_2);
}

#line 127 "help.m"
MR_bool 
ML_HELP_result_is_error(
  MR_Word HeadVar__1_1,
  MR_String * Msg_3)
#line 127 "help.m"
{
#line 127 "help.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__help__result_is_error_2_p_0((MR_Word) HeadVar__1_1, (MR_String *) Msg_3);
	return ret_value;
}


static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1mdb__help__type_ctor_info_help_node_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mdb__help__mdb__help__type_ctor_info_help_node_0) }
};

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_node_0_0[4] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mdb__help__list__ti_list_1mdb__help__type_ctor_info_help_node_0)
};

static const MR_ConstString mdb__help__mdb__help__field_names_help_node_0_0[4] = {
  (MR_String) "helpnode_index",
  (MR_String) "helpnode_name",
  (MR_String) "helpnode_text",
  (MR_String) "helpnode_children"
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_node_0_0 = {
  (MR_String) "help_node",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mdb__help__mdb__help__field_types_help_node_0_0,
  mdb__help__mdb__help__field_names_help_node_0_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_node_0_0[1] = { &mdb__help__mdb__help__du_functor_desc_help_node_0_0 };

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_node_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_help_node_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_help_node_0[1] = { &mdb__help__mdb__help__du_functor_desc_help_node_0_0 };

static const MR_Integer mdb__help__mdb__help__functor_number_map_help_node_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_help_node_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____help_node_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____help_node_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "help_node",
  { mdb__help__mdb__help__du_name_ordered_help_node_0 },
  { mdb__help__mdb__help__du_ptag_ordered_help_node_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mdb__help__mdb__help__functor_number_map_help_node_0,

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

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_res_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

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

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_0[1] = { &mdb__help__mdb__help__du_functor_desc_help_res_0_0 };

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_1[1] = { &mdb__help__mdb__help__du_functor_desc_help_res_0_1 };

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_res_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mdb__help__mdb__help__du_stag_ordered_help_res_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_help_res_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____help_res_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____help_res_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "help_res",
  { mdb__help__mdb__help__du_name_ordered_help_res_0 },
  { mdb__help__mdb__help__du_ptag_ordered_help_res_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mdb__help__mdb__help__functor_number_map_help_res_0,

};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_help_system_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____help_system_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____help_system_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "help_system",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__help__list__ti_list_1mdb__help__type_ctor_info_help_node_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____path_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____path_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "path",
  { NULL },
  { (MR_PseudoTypeInfo) (&mdb__help__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mdb__help____Compare____path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__help_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdb__help____Unify____path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__help_scalar_common_1[1]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdb__help____Compare____help_system_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mdb__help_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mdb__help____Unify____help_system_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__help_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mdb__help____Compare____help_res_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_String Var_11 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_String ArgY1_7 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_11, ArgY1_7);
    }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0(
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_6;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
    }
  }
  return succeeded;
}

void MR_CALL 
mdb__help____Compare____help_node_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_String ArgX3_10 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_String ArgY3_11 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
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
      {
        MR_Word SubResult3_12;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__builtin__compare_3_p_0((MR_Word) (&mdb__help_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX4_13)), ((MR_Box) (ArgY4_14)));
      }
    }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____help_node_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word TypeInfo_13_13;
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_String ArgX3_7 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_String ArgY3_8 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
    {
      succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX3_7, ArgY3_8) == 0);
        if (succeeded)
        {
          TypeInfo_13_13 = (MR_Word) (&mdb__help_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_13_13, ((MR_Box) (ArgX4_9)), ((MR_Box) (ArgY4_10)));
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mdb__help__result_is_error_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * Msg_3)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  if (succeeded)
    *Msg_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
  return succeeded;
}

void MR_CALL 
mdb__help__help_system_type_1_p_0(
  MR_Word * Type_2)
{
  *Type_2 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mdb__help_scalar_common_1[0]));
}

void MR_CALL 
mdb__help__print_help_for_name_5_p_0(
  MR_Word Stream_6,
  MR_Word Sys_7,
  MR_String Name_8)
{
  MR_Word RevMatchedNodes_10;

  mdb__help__search_node_list_4_p_0(Sys_7, Name_8, (MR_Word) ((MR_Unsigned) 0U), &RevMatchedNodes_10);
  if ((RevMatchedNodes_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "There is no such help topic.\n");
    mdb__help__print_node_list_4_p_0(Stream_6, Sys_7);
  }
  else
  {
    MR_Word MatchedNodes_13;

    mercury__list__reverse_2_p_0((MR_Word) (&mdb__help__mdb__help__type_ctor_info_help_node_0), RevMatchedNodes_10, &MatchedNodes_13);
    mdb__help__print_node_list_4_p_0(Stream_6, MatchedNodes_13);
  }
}

static void MR_CALL 
mdb__help__search_node_list_4_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_2,
  MR_Word STATE_VARIABLE_RevMatchedNodes_0_3,
  MR_Word * STATE_VARIABLE_RevMatchedNodes_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevMatchedNodes_4 = STATE_VARIABLE_RevMatchedNodes_0_3;
    else
    {
      MR_Word Node_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Nodes_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_String Var_24 = ((MR_String) ((MR_hl_field(0, Node_9, (MR_Integer) 1))));

      succeeded = (strcmp(Name_2, Var_24) == 0);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevMatchedNodes_4 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Node_9));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevMatchedNodes_0_3));
        }
      else
      {
        MR_Word Var_16 = ((MR_Word) ((MR_hl_field(0, Node_9, (MR_Integer) 3))));
        MR_Word STATE_VARIABLE_RevMatchedNodes_17_17;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_STATE_VARIABLE_RevMatchedNodes_0_3;

        mdb__help__search_node_list_4_p_0(Var_16, Name_2, STATE_VARIABLE_RevMatchedNodes_0_3, &STATE_VARIABLE_RevMatchedNodes_17_17);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Nodes_10;
        next_value_of_STATE_VARIABLE_RevMatchedNodes_0_3 = STATE_VARIABLE_RevMatchedNodes_17_17;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_RevMatchedNodes_0_3 = next_value_of_STATE_VARIABLE_RevMatchedNodes_0_3;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mdb__help__print_help_node_at_path_6_p_0(
  MR_Word Stream_7,
  MR_Word Nodes_8,
  MR_Word Path_9,
  MR_Word * Result_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((Path_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_10 = (MR_Word) (MR_mkword(1, &mdb__help_scalar_common_2[0]));
    else
    {
      MR_String Step_12 = ((MR_String) ((MR_hl_field(1, Path_9, (MR_Integer) 0))));
      MR_Word Tail_13 = ((MR_Word) ((MR_hl_field(1, Path_9, (MR_Integer) 1))));
      MR_Word Node_14;

      succeeded = mdb__help__one_path_step_3_p_0(Nodes_8, Step_12, &Node_14);
      if (succeeded)
        if ((Tail_13 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Text_32 = ((MR_String) ((MR_hl_field(0, Node_14, (MR_Integer) 2))));

          mercury__io__write_string_4_p_0(Stream_7, Text_32);
          *Result_10 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          MR_Word SubNodes_17 = ((MR_Word) ((MR_hl_field(0, Node_14, (MR_Integer) 3))));
          MR_Word next_value_of_Nodes_8 = SubNodes_17;
          MR_Word next_value_of_Path_9 = Tail_13;

          // direct tailcall eliminated
          ;
          Nodes_8 = next_value_of_Nodes_8;
          Path_9 = next_value_of_Path_9;
          continue;
        }
      else
      {
        MR_String Msg_18;
        MR_String Var_24;

        Var_24 = mercury__string__f_43_43_2_f_0(Step_12, (MR_String) "\"");
        Msg_18 = mercury__string__f_43_43_2_f_0((MR_String) "error at path component \"", Var_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_10 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Msg_18));
        }
      }
    }
    break;
  }
}

void MR_CALL 
mdb__help__print_top_level_help_nodes_4_p_0(
  MR_Word Stream_5,
  MR_Word Sys_6)
{
  mdb__help__print_node_list_4_p_0(Stream_5, Sys_6);
}

static void MR_CALL 
mdb__help__print_node_list_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Node_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Nodes_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_String Text_18 = ((MR_String) ((MR_hl_field(0, Node_10, (MR_Integer) 2))));
      MR_Word next_value_of_HeadVar__2_2;

      mercury__io__write_string_4_p_0(Stream_1, Text_18);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Nodes_11;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mdb__help__add_help_node_7_p_0(
  MR_Word Path_8,
  MR_Integer Index_9,
  MR_String Name_10,
  MR_String Text_11,
  MR_Word * Res_12,
  MR_Word STATE_VARIABLE_Sys_0_15,
  MR_Word * STATE_VARIABLE_Sys_16)
{
  MR_Word Node_14;

  {
    Node_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Node_14, 0) = ((MR_Box) (Index_9));
    MR_hl_field(0, Node_14, 1) = ((MR_Box) (Name_10));
    MR_hl_field(0, Node_14, 2) = ((MR_Box) (Text_11));
    MR_hl_field(0, Node_14, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  mdb__help__add_node_5_p_0(Path_8, Node_14, Res_12, STATE_VARIABLE_Sys_0_15, STATE_VARIABLE_Sys_16);
}

static void MR_CALL 
mdb__help__add_node_5_p_0_1(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->mdb__help__add_node_5_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
mdb__help__add_node_5_p_0_3(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_30 = ((MR_Word) ((env_ptr)->mdb__help__add_node_5_p_0_env_0__conv0_MemberNode_30));
  mdb__help__add_node_5_p_0_2(env_ptr);
}

static void MR_CALL 
mdb__help__add_node_5_p_0_2(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_String Var_32;
    MR_String Var_33;
    MR_Word Var_34;
    MR_String Var_35;
    MR_String Var_36;
    MR_Word Var_37;

    (env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_26 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_30, (MR_Integer) 0))));
    Var_32 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_30, (MR_Integer) 1))));
    Var_33 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_30, (MR_Integer) 2))));
    Var_34 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_30, (MR_Integer) 3))));
    (env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_46 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 0))));
    Var_35 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 1))));
    Var_36 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 2))));
    Var_37 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 3))));
    (env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded = ((env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_26 == (env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_46);
    if ((env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded)
      mdb__help__add_node_5_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mdb__help__add_node_5_p_0_4(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->mdb__help__add_node_5_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mdb__help__mdb__help__type_ctor_info_help_node_0), &(env_ptr)->mdb__help__add_node_5_p_0_env_0__conv0_MemberNode_30, (env_ptr)->mdb__help__add_node_5_p_0_env_0__Nodes0_4, mdb__help__add_node_5_p_0_3, env_ptr);
      (env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
mdb__help__add_node_5_p_0_5(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->mdb__help__add_node_5_p_0_env_0__commit_1, 1);
}

static void MR_CALL 
mdb__help__add_node_5_p_0_7(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_31 = ((MR_Word) ((env_ptr)->mdb__help__add_node_5_p_0_env_0__conv1_MemberNode_31));
  mdb__help__add_node_5_p_0_6(env_ptr);
}

static void MR_CALL 
mdb__help__add_node_5_p_0_6(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  {
    MR_Integer Var_38 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_31, (MR_Integer) 0))));
    MR_String Var_39;
    MR_Word Var_40;
    MR_Integer Var_41;
    MR_String Var_42;
    MR_Word Var_43;

    (env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_28 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_31, (MR_Integer) 1))));
    Var_39 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_31, (MR_Integer) 2))));
    Var_40 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__MemberNode_31, (MR_Integer) 3))));
    Var_41 = ((MR_Integer) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 0))));
    (env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_47 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 1))));
    Var_42 = ((MR_String) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 2))));
    Var_43 = ((MR_Word) ((MR_hl_field(0, (env_ptr)->mdb__help__add_node_5_p_0_env_0__NewNode_2, (MR_Integer) 3))));
    (env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded = (strcmp((env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_28, (env_ptr)->mdb__help__add_node_5_p_0_env_0__Var_47) == 0);
    if ((env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded)
      mdb__help__add_node_5_p_0_5(env_ptr);
  }
}

static void MR_CALL 
mdb__help__add_node_5_p_0_8(
  void * env_ptr_arg)
{
  struct mdb__help__add_node_5_p_0_env_0_s * env_ptr = (struct mdb__help__add_node_5_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->mdb__help__add_node_5_p_0_env_0__commit_1) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mdb__help__mdb__help__type_ctor_info_help_node_0), &(env_ptr)->mdb__help__add_node_5_p_0_env_0__conv1_MemberNode_31, (env_ptr)->mdb__help__add_node_5_p_0_env_0__Nodes0_4, mdb__help__add_node_5_p_0_7, env_ptr);
      (env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->mdb__help__add_node_5_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
mdb__help__add_node_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NewNode_2,
  MR_Word * Res_3,
  MR_Word Nodes0_4,
  MR_Word * Nodes_5)
{
  struct mdb__help__add_node_5_p_0_env_0_s env;

  (env).mdb__help__add_node_5_p_0_env_0__NewNode_2 = NewNode_2;
  (env).mdb__help__add_node_5_p_0_env_0__Nodes0_4 = Nodes0_4;
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    mdb__help__add_node_5_p_0_4(&env);
    if ((env).mdb__help__add_node_5_p_0_env_0__succeeded)
    {
      *Res_3 = (MR_Word) (MR_mkword(1, &mdb__help_scalar_common_2[1]));
      *Nodes_5 = (env).mdb__help__add_node_5_p_0_env_0__Nodes0_4;
    }
    else
    {
      mdb__help__add_node_5_p_0_8(&env);
      if ((env).mdb__help__add_node_5_p_0_env_0__succeeded)
      {
        *Res_3 = (MR_Word) (MR_mkword(1, &mdb__help_scalar_common_2[2]));
        *Nodes_5 = (env).mdb__help__add_node_5_p_0_env_0__Nodes0_4;
      }
      else
      {
        *Res_3 = (MR_Word) ((MR_Unsigned) 0U);
        mdb__help__insert_into_node_list_3_p_0((env).mdb__help__add_node_5_p_0_env_0__NewNode_2, (env).mdb__help__add_node_5_p_0_env_0__Nodes0_4, Nodes_5);
      }
    }
  }
  else
  {
    MR_String Step_6 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Steps_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Node0_12;

    (env).mdb__help__add_node_5_p_0_env_0__succeeded = mdb__help__one_path_step_3_p_0((env).mdb__help__add_node_5_p_0_env_0__Nodes0_4, Step_6, &Node0_12);
    if ((env).mdb__help__add_node_5_p_0_env_0__succeeded)
    {
      MR_Integer NodeIndex_13 = ((MR_Integer) ((MR_hl_field(0, Node0_12, (MR_Integer) 0))));
      MR_String NodeName_14 = ((MR_String) ((MR_hl_field(0, Node0_12, (MR_Integer) 1))));
      MR_String Text_15 = ((MR_String) ((MR_hl_field(0, Node0_12, (MR_Integer) 2))));
      MR_Word SubNodes0_16 = ((MR_Word) ((MR_hl_field(0, Node0_12, (MR_Integer) 3))));
      MR_Word SubNodes_17;
      MR_Word Node_18;

      mdb__help__add_node_5_p_0(Steps_7, (env).mdb__help__add_node_5_p_0_env_0__NewNode_2, Res_3, SubNodes0_16, &SubNodes_17);
      {
        Node_18 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Node_18, 0) = ((MR_Box) (NodeIndex_13));
        MR_hl_field(0, Node_18, 1) = ((MR_Box) (NodeName_14));
        MR_hl_field(0, Node_18, 2) = ((MR_Box) (Text_15));
        MR_hl_field(0, Node_18, 3) = ((MR_Box) (SubNodes_17));
      }
      mdb__help__replace_node_at_index_3_p_0(Node_18, (env).mdb__help__add_node_5_p_0_env_0__Nodes0_4, Nodes_5);
    }
    else
    {
      MR_String Msg_19;

      Msg_19 = mercury__string__f_43_43_2_f_0((MR_String) "invalid path component ", Step_6);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Msg_19));
      }
      *Nodes_5 = (env).mdb__help__add_node_5_p_0_env_0__Nodes0_4;
    }
  }
}

static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_6,
  MR_Word * Node_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Word Head_4;
    MR_Word Tail_5;
    MR_String Var_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Head_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      Tail_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      Var_11 = ((MR_String) ((MR_hl_field(0, Head_4, (MR_Integer) 1))));
      succeeded = (strcmp(Name_6, Var_11) == 0);
      if (succeeded)
      {
        *Node_7 = Head_4;
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
mdb__help__insert_into_node_list_3_p_0(
  MR_Word Node_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Node_1));
      MR_hl_field(1, base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
  else
  {
    MR_Word Head_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Tail_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_11 = ((MR_Integer) ((MR_hl_field(0, Head_7, (MR_Integer) 0))));
    MR_Integer Var_12 = ((MR_Integer) ((MR_hl_field(0, Node_1, (MR_Integer) 0))));

    succeeded = (Var_11 < Var_12);
    if (succeeded)
    {
      MR_Word NewTail_10;

      mdb__help__insert_into_node_list_3_p_0(Node_1, Tail_8, &NewTail_10);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Head_7));
        MR_hl_field(1, base, 1) = ((MR_Box) (NewTail_10));
      }
    }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Node_1));
        MR_hl_field(1, base, 1) = ((MR_Box) (HeadVar__2_2));
      }
  }
}

static void MR_CALL 
mdb__help__replace_node_at_index_3_p_0(
  MR_Word Node_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140mdb.help.replace_node_at_index\'/3", (MR_String) "node to be replaced not found");
      return;
    }
  else
  {
    MR_Word Head_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Tail_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer Var_13 = ((MR_Integer) ((MR_hl_field(0, Head_9, (MR_Integer) 0))));
    MR_Integer Var_20 = ((MR_Integer) ((MR_hl_field(0, Node_1, (MR_Integer) 0))));

    succeeded = (Var_13 == Var_20);
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *List_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Node_1));
        MR_hl_field(1, base, 1) = ((MR_Box) (Tail_10));
      }
    else
    {
      MR_Word NewTail_12;

      mdb__help__replace_node_at_index_3_p_0(Node_1, Tail_10, &NewTail_12);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *List_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Head_9));
        MR_hl_field(1, base, 1) = ((MR_Box) (NewTail_12));
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
mdb__help____Unify____help_node_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__help____Unify____help_node_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__help____Compare____help_node_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__help____Compare____help_node_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__help____Unify____help_res_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__help____Compare____help_res_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__help____Compare____help_res_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__help____Unify____help_system_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__help____Unify____help_system_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__help____Compare____help_system_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__help____Compare____help_system_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mdb__help____Unify____path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mdb__help____Unify____path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mdb__help____Compare____path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mdb__help____Compare____path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__mdb__help__init(void)
{
}

void mercury__mdb__help__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_help_node_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_help_res_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_help_system_0);
	MR_register_type_ctor_info(&mdb__help__mdb__help__type_ctor_info_path_0);
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
