/*
** Automatically generated from `help.m'
** by the Mercury compiler,
** version DEV
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


/* :- module mdb.help. */
/* :- implementation. */

/*
INIT mercury__mdb__help__init
ENDINIT
*/

#include "mdb.help.mih"
#include "mdb.help.mh"


#include "mdb.mih"
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
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
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
  MR_Integer mdb__help__add_node_7_p_0_env_0__V_44_44;
  MR_Box mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33;
  jmp_buf mdb__help__add_node_7_p_0_env_0__commit_1;
  MR_Word mdb__help__add_node_7_p_0_env_0__Entry1_40;
  MR_String mdb__help__add_node_7_p_0_env_0__V_45_45;
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

static MR_bool MR_CALL 
mdb__help____Unify____entry_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____entry_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____help_res_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____node_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____path_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____path_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____system_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____system_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3);

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2);

static void MR_CALL 
mdb__help____Compare____text_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3);

static void MR_CALL 
mdb__help____Compare____text_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_String mdb__help__HeadVar__2_2,
  MR_String mdb__help__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0(
  MR_String mdb__help__HeadVar__1_1,
  MR_String mdb__help__HeadVar__2_2);

static void MR_CALL 
mdb__help____Compare____node_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Word mdb__help__HeadVar__3_3);

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2);

static void MR_CALL 
mdb__help__replace_entry_3_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__Entry_2,
  MR_Word * mdb__help__List_3);

static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String mdb__help__Name_6,
  MR_Word * mdb__help__Entry_7);

static void MR_CALL 
mdb__help__print_entry_list_4_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__Stream_2);

static void MR_CALL 
mdb__help__search_node_7_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String mdb__help__Name_10,
  MR_Integer mdb__help__STATE_VARIABLE_C_0_14,
  MR_Integer * mdb__help__STATE_VARIABLE_C_15,
  MR_Word mdb__help__Stream_12);

static void MR_CALL 
mdb__help__search_entry_list_7_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String mdb__help__Name_2,
  MR_Integer mdb__help__STATE_VARIABLE_C_0_3,
  MR_Integer * mdb__help__STATE_VARIABLE_C_4,
  MR_Word mdb__help__Stream_5);

static void MR_CALL 
mdb__help__insert_into_entry_list_5_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Integer mdb__help__Index_2,
  MR_String mdb__help__Name_3,
  MR_Word mdb__help__Node_4,
  MR_Word * mdb__help__HeadVar__5_5);

static void MR_CALL 
mdb__help__add_node_7_p_0_1(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_3(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_2(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_4(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_5(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_7(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_6(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0_8(
  void * mdb__help__env_ptr_arg);

static void MR_CALL 
mdb__help__add_node_7_p_0(
  MR_Word mdb__help__Nodes0_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Integer mdb__help__Index_3,
  MR_String mdb__help__Name_4,
  MR_Word mdb__help__HeadVar__5_5,
  MR_Word * mdb__help__Res_6,
  MR_Word * mdb__help__Nodes_7);


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
    ((MR_Box) ((MR_String) "the path does not go that deep"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "entry with given index already exists"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "entry with given name already exists"))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.help.mh"

#line 117 "help.m"
void 
ML_HELP_init(
  MR_Word * mdb__help__HeadVar__1_1)
#line 117 "help.m"
{
#line 117 "help.m"
	mdb__help__init_1_p_0((MR_Word *) mdb__help__HeadVar__1_1);
}

#line 118 "help.m"
void 
ML_HELP_add_help_node(
  MR_Word mdb__help__Sys0_8,
  MR_Word mdb__help__Path_9,
  MR_Integer mdb__help__Index_10,
  MR_String mdb__help__Name_11,
  MR_String mdb__help__Text_12,
  MR_Word * mdb__help__Res_13,
  MR_Word * mdb__help__Sys_14)
#line 118 "help.m"
{
#line 118 "help.m"
	mdb__help__add_help_node_7_p_0((MR_Word) mdb__help__Sys0_8, (MR_Word) mdb__help__Path_9, (MR_Integer) mdb__help__Index_10, (MR_String) mdb__help__Name_11, (MR_String) mdb__help__Text_12, (MR_Word *) mdb__help__Res_13, (MR_Word *) mdb__help__Sys_14);
}

#line 120 "help.m"
void 
ML_HELP_help(
  MR_Word mdb__help__Sys_5,
  MR_Word mdb__help__Stream_6)
#line 120 "help.m"
{
#line 120 "help.m"
	mdb__help__help_4_p_0((MR_Word) mdb__help__Sys_5, (MR_Word) mdb__help__Stream_6);
}

#line 121 "help.m"
void 
ML_HELP_path(
  MR_Word mdb__help__Entries_7,
  MR_Word mdb__help__Path_8,
  MR_Word mdb__help__Stream_9,
  MR_Word * mdb__help__Result_10)
#line 121 "help.m"
{
#line 121 "help.m"
	mdb__help__path_6_p_0((MR_Word) mdb__help__Entries_7, (MR_Word) mdb__help__Path_8, (MR_Word) mdb__help__Stream_9, (MR_Word *) mdb__help__Result_10);
}

#line 122 "help.m"
void 
ML_HELP_name(
  MR_Word mdb__help__Sys_6,
  MR_String mdb__help__Name_7,
  MR_Word mdb__help__Stream_8)
#line 122 "help.m"
{
#line 122 "help.m"
	mdb__help__name_5_p_0((MR_Word) mdb__help__Sys_6, (MR_String) mdb__help__Name_7, (MR_Word) mdb__help__Stream_8);
}

#line 123 "help.m"
void 
ML_HELP_help_system_type(
  MR_Word * mdb__help__Type_2)
#line 123 "help.m"
{
#line 123 "help.m"
	mdb__help__help_system_type_1_p_0((MR_Word *) mdb__help__Type_2);
}

#line 125 "help.m"
MR_bool 
ML_HELP_result_is_error(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String * mdb__help__Msg_3)
#line 125 "help.m"
{
#line 125 "help.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__help__result_is_error_2_p_0((MR_Word) mdb__help__HeadVar__1_1, (MR_String *) mdb__help__Msg_3);
	return ret_value;
}


static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_entry_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__help__mdb__help__type_ctor_info_node_0
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_entry_0_0 = {
  (MR_String) "entry",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__help__mdb__help__field_types_entry_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_entry_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_entry_0_0
};

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_entry_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_entry_0_0
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____entry_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____entry_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "entry",
  {     mdb__help__mdb__help__du_name_ordered_entry_0 },
  {     mdb__help__mdb__help__du_ptag_ordered_entry_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__help__mdb__help__functor_number_map_entry_0
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_0 = {
  (MR_String) "help_ok",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_res_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_1 = {
  (MR_String) "help_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__help__mdb__help__field_types_help_res_0_1,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_0
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_1[1] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_1
};

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_res_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__help__mdb__help__du_stag_ordered_help_res_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_help_res_0_1
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
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____help_res_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____help_res_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "help_res",
  {     mdb__help__mdb__help__du_name_ordered_help_res_0 },
  {     mdb__help__mdb__help__du_ptag_ordered_help_res_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__help__mdb__help__functor_number_map_help_res_0
};

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__help__mdb__help__type_ctor_info_entry_0
  }
};

static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0
};

static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_node_0_0 = {
  (MR_String) "node",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__help__mdb__help__field_types_node_0_0,
  NULL,
  NULL,
  NULL
};

static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_node_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_node_0_0
};

static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_node_0_0
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
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__help____Unify____node_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____node_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "node",
  {     mdb__help__mdb__help__du_name_ordered_node_0 },
  {     mdb__help__mdb__help__du_ptag_ordered_node_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__help__mdb__help__functor_number_map_node_0
};

static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____path_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____path_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "path",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__help__list__ti_list_1builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_system_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____system_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____system_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "system",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

const MR_TypeCtorInfo_Struct mdb__help__mdb__help__type_ctor_info_text_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__help____Unify____text_0_0_10001)),
  ((MR_Box) (mdb__help____Compare____text_0_0_10001)),
  (MR_String) "mdb.help",
  (MR_String) "text",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mdb__help____Unify____entry_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2)
{
  {
    MR_bool mdb__help__succeeded;

    {
      mdb__help__succeeded = mdb__help____Unify____entry_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____entry_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3)
{
  {
    MR_Word mdb__help__conv0_HeadVar__1_1;

    {
      mdb__help____Compare____entry_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2)
{
  {
    MR_bool mdb__help__succeeded;

    {
      mdb__help__succeeded = mdb__help____Unify____help_res_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____help_res_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3)
{
  {
    MR_Word mdb__help__conv0_HeadVar__1_1;

    {
      mdb__help____Compare____help_res_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2)
{
  {
    MR_bool mdb__help__succeeded;

    {
      mdb__help__succeeded = mdb__help____Unify____node_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____node_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3)
{
  {
    MR_Word mdb__help__conv0_HeadVar__1_1;

    {
      mdb__help____Compare____node_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____path_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2)
{
  {
    MR_bool mdb__help__succeeded;

    {
      mdb__help__succeeded = mdb__help____Unify____path_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____path_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3)
{
  {
    MR_Word mdb__help__conv0_HeadVar__1_1;

    {
      mdb__help____Compare____path_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____system_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2)
{
  {
    MR_bool mdb__help__succeeded;

    {
      mdb__help__succeeded = mdb__help____Unify____system_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____system_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3)
{
  {
    MR_Word mdb__help__conv0_HeadVar__1_1;

    {
      mdb__help____Compare____system_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0_10001(
  MR_Box mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2)
{
  {
    MR_bool mdb__help__succeeded;

    {
      mdb__help__succeeded = mdb__help____Unify____text_0_0(((MR_String) mdb__help__wrapper_arg_1), ((MR_String) mdb__help__wrapper_arg_2));
    }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____text_0_0_10001(
  MR_Box * mdb__help__wrapper_arg_1,
  MR_Box mdb__help__wrapper_arg_2,
  MR_Box mdb__help__wrapper_arg_3)
{
  {
    MR_Word mdb__help__conv0_HeadVar__1_1;

    {
      mdb__help____Compare____text_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_String) mdb__help__wrapper_arg_2), ((MR_String) mdb__help__wrapper_arg_3));
    }
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mdb__help____Compare____text_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_String mdb__help__HeadVar__2_2,
  MR_String mdb__help__HeadVar__3_3)
{
  {
    MR_bool mdb__help__succeeded;
    MR_String mdb__help__Cast_HeadVar1_4 = mdb__help__HeadVar__2_2;
    MR_String mdb__help__Cast_HeadVar2_5 = mdb__help__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__help__HeadVar__1_1, mdb__help__Cast_HeadVar1_4, mdb__help__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____text_0_0(
  MR_String mdb__help__HeadVar__1_1,
  MR_String mdb__help__HeadVar__2_2)
{
  {
    MR_bool mdb__help__succeeded;
    MR_String mdb__help__Cast_HeadVar1_3 = mdb__help__HeadVar__1_1;
    MR_String mdb__help__Cast_HeadVar2_4 = mdb__help__HeadVar__2_2;

    mdb__help__succeeded = (strcmp(mdb__help__Cast_HeadVar1_3, mdb__help__Cast_HeadVar2_4) == 0);
    return mdb__help__succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____system_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Word mdb__help__HeadVar__3_3)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Word mdb__help__Cast_HeadVar1_4 = mdb__help__HeadVar__2_2;
    MR_Word mdb__help__Cast_HeadVar2_5 = mdb__help__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__help_scalar_common_1[0], mdb__help__HeadVar__1_1, ((MR_Box) (mdb__help__Cast_HeadVar1_4)), ((MR_Box) (mdb__help__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____system_0_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Word mdb__help__Cast_HeadVar1_3 = mdb__help__HeadVar__1_1;
    MR_Word mdb__help__Cast_HeadVar2_4 = mdb__help__HeadVar__2_2;

    {
      mdb__help__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__help_scalar_common_1[0], ((MR_Box) (mdb__help__Cast_HeadVar1_3)), ((MR_Box) (mdb__help__Cast_HeadVar2_4)));
    }
    return mdb__help__succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____path_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Word mdb__help__HeadVar__3_3)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Word mdb__help__Cast_HeadVar1_4 = mdb__help__HeadVar__2_2;
    MR_Word mdb__help__Cast_HeadVar2_5 = mdb__help__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__help_scalar_common_1[1], mdb__help__HeadVar__1_1, ((MR_Box) (mdb__help__Cast_HeadVar1_4)), ((MR_Box) (mdb__help__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____path_0_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Word mdb__help__Cast_HeadVar1_3 = mdb__help__HeadVar__1_1;
    MR_Word mdb__help__Cast_HeadVar2_4 = mdb__help__HeadVar__2_2;

    {
      mdb__help__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__help_scalar_common_1[1], ((MR_Box) (mdb__help__Cast_HeadVar1_3)), ((MR_Box) (mdb__help__Cast_HeadVar2_4)));
    }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help____Compare____node_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Word mdb__help__HeadVar__3_3)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Integer mdb__help__CastX_9 = (MR_Integer) mdb__help__HeadVar__2_2;
    MR_Integer mdb__help__CastY_10 = (MR_Integer) mdb__help__HeadVar__3_3;

    mdb__help__succeeded = (mdb__help__CastX_9 == mdb__help__CastY_10);
    if (mdb__help__succeeded)
      *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_String mdb__help__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__help__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
        MR_String mdb__help__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mdb__help__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__help__V_8_8;

        {
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__help__V_8_8, mdb__help__V_4_4, mdb__help__V_6_6);
        }
        mdb__help__succeeded = (mdb__help__V_8_8 == (MR_Integer) 0);
        mdb__help__succeeded = !(mdb__help__succeeded);
        if (mdb__help__succeeded)
          *mdb__help__HeadVar__1_1 = mdb__help__V_8_8;
        else
          {
            {
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__help_scalar_common_1[0], mdb__help__HeadVar__1_1, ((MR_Box) (mdb__help__V_5_5)), ((MR_Box) (mdb__help__V_7_7)));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__help____Unify____node_0_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Integer mdb__help__CastX_7 = (MR_Integer) mdb__help__HeadVar__1_1;
    MR_Integer mdb__help__CastY_8 = (MR_Integer) mdb__help__HeadVar__2_2;

    mdb__help__succeeded = (mdb__help__CastX_7 == mdb__help__CastY_8);
    if (mdb__help__succeeded)
      mdb__help__succeeded = MR_TRUE;
    else
      {
        MR_Word mdb__help__TypeInfo_9_9;
        MR_String mdb__help__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__help__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
        MR_String mdb__help__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__help__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));

        mdb__help__succeeded = (strcmp(mdb__help__V_3_3, mdb__help__V_5_5) == 0);
        if (mdb__help__succeeded)
          {
            mdb__help__TypeInfo_9_9 = (MR_Word) &mdb__help_scalar_common_1[0];
            {
              mdb__help__succeeded = mercury__builtin__unify_2_p_0(mdb__help__TypeInfo_9_9, ((MR_Box) (mdb__help__V_4_4)), ((MR_Box) (mdb__help__V_6_6)));
            }
          }
      }
    return mdb__help__succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____help_res_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Word mdb__help__HeadVar__3_3)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Integer mdb__help__CastX_8 = (MR_Integer) mdb__help__HeadVar__2_2;
    MR_Integer mdb__help__CastY_9 = (MR_Integer) mdb__help__HeadVar__3_3;

    mdb__help__succeeded = (mdb__help__CastX_8 == mdb__help__CastY_9);
    if (mdb__help__succeeded)
      *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mdb__help__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mdb__help__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mdb__help__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_String mdb__help__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 0)));

        if ((mdb__help__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__help__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_String mdb__help__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(mdb__help__HeadVar__1_1, mdb__help__V_11_11, mdb__help__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Integer mdb__help__CastX_7 = (MR_Integer) mdb__help__HeadVar__1_1;
    MR_Integer mdb__help__CastY_8 = (MR_Integer) mdb__help__HeadVar__2_2;

    mdb__help__succeeded = (mdb__help__CastX_7 == mdb__help__CastY_8);
    if (mdb__help__succeeded)
      mdb__help__succeeded = MR_TRUE;
    else
    if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mdb__help__CastX_3 = (MR_Integer) mdb__help__HeadVar__1_1;
        MR_Integer mdb__help__CastY_4 = (MR_Integer) mdb__help__HeadVar__2_2;

        mdb__help__succeeded = (mdb__help__CastY_4 == mdb__help__CastX_3);
      }
    else
      {
        MR_String mdb__help__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdb__help__V_6_6;

        mdb__help__succeeded = ((MR_tag((MR_Word) mdb__help__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mdb__help__succeeded)
          {
            mdb__help__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
            mdb__help__succeeded = (strcmp(mdb__help__V_5_5, mdb__help__V_6_6) == 0);
          }
      }
    return mdb__help__succeeded;
  }
}

void MR_CALL 
mdb__help____Compare____entry_0_0(
  MR_Word * mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Word mdb__help__HeadVar__3_3)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Integer mdb__help__CastX_12 = (MR_Integer) mdb__help__HeadVar__2_2;
    MR_Integer mdb__help__CastY_13 = (MR_Integer) mdb__help__HeadVar__3_3;

    mdb__help__succeeded = (mdb__help__CastX_12 == mdb__help__CastY_13);
    if (mdb__help__succeeded)
      *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Integer mdb__help__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdb__help__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__help__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 2)));
        MR_Integer mdb__help__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 0)));
        MR_String mdb__help__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mdb__help__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mdb__help__V_10_10;

        {
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__help__V_10_10, mdb__help__V_4_4, mdb__help__V_7_7);
        }
        mdb__help__succeeded = (mdb__help__V_10_10 == (MR_Integer) 0);
        mdb__help__succeeded = !(mdb__help__succeeded);
        if (mdb__help__succeeded)
          *mdb__help__HeadVar__1_1 = mdb__help__V_10_10;
        else
          {
            MR_Word mdb__help__V_11_11;

            {
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__help__V_11_11, mdb__help__V_5_5, mdb__help__V_8_8);
            }
            mdb__help__succeeded = (mdb__help__V_11_11 == (MR_Integer) 0);
            mdb__help__succeeded = !(mdb__help__succeeded);
            if (mdb__help__succeeded)
              *mdb__help__HeadVar__1_1 = mdb__help__V_11_11;
            else
              {
                mdb__help____Compare____node_0_0(mdb__help__HeadVar__1_1, mdb__help__V_6_6, mdb__help__V_9_9);
              }
          }
      }
  }
}

MR_bool MR_CALL 
mdb__help____Unify____entry_0_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__HeadVar__2_2)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Integer mdb__help__CastX_9 = (MR_Integer) mdb__help__HeadVar__1_1;
    MR_Integer mdb__help__CastY_10 = (MR_Integer) mdb__help__HeadVar__2_2;

    mdb__help__succeeded = (mdb__help__CastX_9 == mdb__help__CastY_10);
    if (mdb__help__succeeded)
      mdb__help__succeeded = MR_TRUE;
    else
      {
        MR_Integer mdb__help__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
        MR_String mdb__help__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mdb__help__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 2)));
        MR_Integer mdb__help__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
        MR_String mdb__help__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__help__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 2)));

        mdb__help__succeeded = (mdb__help__V_3_3 == mdb__help__V_6_6);
        if (mdb__help__succeeded)
          {
            mdb__help__succeeded = (strcmp(mdb__help__V_4_4, mdb__help__V_7_7) == 0);
            if (mdb__help__succeeded)
              {
                mdb__help__succeeded = mdb__help____Unify____node_0_0(mdb__help__V_5_5, mdb__help__V_8_8);
              }
          }
      }
    return mdb__help__succeeded;
  }
}

static void MR_CALL 
mdb__help__replace_entry_3_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__Entry_2,
  MR_Word * mdb__help__List_3)
{
  {
    MR_bool mdb__help__succeeded;

    if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "replace_entry: entry to be replaced not found");
          return;
        }
      }
    else
      {
        MR_Word mdb__help__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__help__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdb__help__HeadIndex_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Head_7, (MR_Integer) 0)));
        MR_Integer mdb__help__EntryIndex_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry_2, (MR_Integer) 0)));
        MR_String mdb__help__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Head_7, (MR_Integer) 1)));
        MR_Word mdb__help__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Head_7, (MR_Integer) 2)));
        MR_String mdb__help__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry_2, (MR_Integer) 1)));
        MR_Word mdb__help__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry_2, (MR_Integer) 2)));

        mdb__help__succeeded = (mdb__help__HeadIndex_11 == mdb__help__EntryIndex_14);
        if (mdb__help__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mdb__help__List_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Entry_2));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__Tail_8));
          }
        else
          {
            MR_Word mdb__help__NewTail_17;

            {
              mdb__help__replace_entry_3_p_0(mdb__help__Tail_8, mdb__help__Entry_2, &mdb__help__NewTail_17);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__help__List_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Head_7));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__NewTail_17));
            }
          }
      }
  }
}

static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String mdb__help__Name_6,
  MR_Word * mdb__help__Entry_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__help__succeeded = ((MR_tag((MR_Word) mdb__help__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Word mdb__help__Head_4;
        MR_Word mdb__help__Tail_5;
        MR_String mdb__help__HeadName_9;
        MR_Integer mdb__help__V_8_8;
        MR_Word mdb__help__V_10_10;

        if (mdb__help__succeeded)
          {
            mdb__help__Head_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
            mdb__help__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
            mdb__help__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Head_4, (MR_Integer) 0)));
            mdb__help__HeadName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Head_4, (MR_Integer) 1)));
            mdb__help__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Head_4, (MR_Integer) 2)));
            mdb__help__succeeded = (strcmp(mdb__help__HeadName_9, mdb__help__Name_6) == 0);
            if (mdb__help__succeeded)
              {
                *mdb__help__Entry_7 = mdb__help__Head_4;
                mdb__help__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mdb__help__HeadVar__1__tmp_copy_1 = mdb__help__Tail_5;

                  mdb__help__HeadVar__1_1 = mdb__help__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
        return mdb__help__succeeded;
      }
      break;
    }
}

static void MR_CALL 
mdb__help__print_entry_list_4_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Word mdb__help__Stream_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__help__succeeded;

        if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word mdb__help__Node_11;
            MR_Word mdb__help__Nodes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mdb__help__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mdb__help__Text_23;
            MR_Integer mdb__help__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__V_17_17, (MR_Integer) 0)));
            MR_String mdb__help__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__V_17_17, (MR_Integer) 1)));
            MR_Word mdb__help___Nodes_24;

            mdb__help__Node_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__V_17_17, (MR_Integer) 2)));
            mdb__help__Text_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Node_11, (MR_Integer) 0)));
            mdb__help___Nodes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Node_11, (MR_Integer) 1)));
            {
              mercury__io__write_string_4_p_0(mdb__help__Stream_2, mdb__help__Text_23);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mdb__help__HeadVar__1__tmp_copy_1 = mdb__help__Nodes_12;

              mdb__help__HeadVar__1_1 = mdb__help__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__help__search_node_7_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String mdb__help__Name_10,
  MR_Integer mdb__help__STATE_VARIABLE_C_0_14,
  MR_Integer * mdb__help__STATE_VARIABLE_C_15,
  MR_Word mdb__help__Stream_12)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Word mdb__help__SubNodes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
    MR_String mdb__help__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 0)));

    {
      mdb__help__search_entry_list_7_p_0(mdb__help__SubNodes_9, mdb__help__Name_10, mdb__help__STATE_VARIABLE_C_0_14, mdb__help__STATE_VARIABLE_C_15, mdb__help__Stream_12);
    }
  }
}

static void MR_CALL 
mdb__help__search_entry_list_7_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String mdb__help__Name_2,
  MR_Integer mdb__help__STATE_VARIABLE_C_0_3,
  MR_Integer * mdb__help__STATE_VARIABLE_C_4,
  MR_Word mdb__help__Stream_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__help__succeeded;

        if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mdb__help__STATE_VARIABLE_C_4 = mdb__help__STATE_VARIABLE_C_0_3;
        else
          {
            MR_Word mdb__help__Entry_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mdb__help__Tail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
            MR_String mdb__help__EntryName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry_16, (MR_Integer) 1)));
            MR_Word mdb__help__Node_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry_16, (MR_Integer) 2)));
            MR_Integer mdb__help__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry_16, (MR_Integer) 0)));

            mdb__help__succeeded = (strcmp(mdb__help__Name_2, mdb__help__EntryName_23) == 0);
            if (mdb__help__succeeded)
              {
                MR_String mdb__help__Text_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Node_24, (MR_Integer) 0)));
                MR_Word mdb__help___Nodes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Node_24, (MR_Integer) 1)));

                {
                  mercury__io__write_string_4_p_0(mdb__help__Stream_5, mdb__help__Text_39);
                }
                *mdb__help__STATE_VARIABLE_C_4 = (mdb__help__STATE_VARIABLE_C_0_3 + (MR_Integer) 1);
              }
            else
              {
                MR_Integer mdb__help__STATE_VARIABLE_C_32_32;

                {
                  mdb__help__search_node_7_p_0(mdb__help__Node_24, mdb__help__Name_2, mdb__help__STATE_VARIABLE_C_0_3, &mdb__help__STATE_VARIABLE_C_32_32, mdb__help__Stream_5);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mdb__help__HeadVar__1__tmp_copy_1 = mdb__help__Tail_17;
                  MR_Integer mdb__help__STATE_VARIABLE_C_0__tmp_copy_3 = mdb__help__STATE_VARIABLE_C_32_32;

                  mdb__help__STATE_VARIABLE_C_0_3 = mdb__help__STATE_VARIABLE_C_0__tmp_copy_3;
                  mdb__help__HeadVar__1_1 = mdb__help__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
mdb__help__insert_into_entry_list_5_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_Integer mdb__help__Index_2,
  MR_String mdb__help__Name_3,
  MR_Word mdb__help__Node_4,
  MR_Word * mdb__help__HeadVar__5_5)
{
  {
    MR_bool mdb__help__succeeded;

    if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mdb__help__Entry_9;

        {
          mdb__help__Entry_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mdb__help__Entry_9, 0) = ((MR_Box) (mdb__help__Index_2));
          MR_hl_field(MR_mktag(0), mdb__help__Entry_9, 1) = ((MR_Box) (mdb__help__Name_3));
          MR_hl_field(MR_mktag(0), mdb__help__Entry_9, 2) = ((MR_Box) (mdb__help__Node_4));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mdb__help__HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Entry_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    else
      {
        MR_Word mdb__help__Head_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mdb__help__Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer mdb__help__HeadIndex_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Head_11, (MR_Integer) 0)));
        MR_String mdb__help__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Head_11, (MR_Integer) 1)));
        MR_Word mdb__help__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Head_11, (MR_Integer) 2)));

        mdb__help__succeeded = (mdb__help__HeadIndex_17 < mdb__help__Index_2);
        if (mdb__help__succeeded)
          {
            MR_Word mdb__help__NewTail_20;

            {
              mdb__help__insert_into_entry_list_5_p_0(mdb__help__Tail_12, mdb__help__Index_2, mdb__help__Name_3, mdb__help__Node_4, &mdb__help__NewTail_20);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__help__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Head_11));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__NewTail_20));
            }
          }
        else
          {
            MR_Word mdb__help__Entry_21;

            {
              mdb__help__Entry_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__help__Entry_21, 0) = ((MR_Box) (mdb__help__Index_2));
              MR_hl_field(MR_mktag(0), mdb__help__Entry_21, 1) = ((MR_Box) (mdb__help__Name_3));
              MR_hl_field(MR_mktag(0), mdb__help__Entry_21, 2) = ((MR_Box) (mdb__help__Node_4));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mdb__help__HeadVar__5_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Entry_21));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__HeadVar__1_1));
            }
          }
      }
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_1(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    MR_builtin_longjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_3(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33 = ((MR_Word) (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33);
    {
      mdb__help__add_node_7_p_0_2(mdb__help__env_ptr);
    }
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_2(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    {
      MR_String mdb__help__V_34_34;
      MR_Word mdb__help__V_35_35;

      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 0)));
      mdb__help__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 1)));
      mdb__help__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 2)));
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = ((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Index_3 == (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_44_44);
      if ((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded)
        {
          mdb__help__add_node_7_p_0_1(mdb__help__env_ptr);
        }
    }
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_4(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    if (MR_builtin_setjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mdb__help__mdb__help__type_ctor_info_entry_0, &(mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33, (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__add_node_7_p_0_3, mdb__help__env_ptr);
          }
        }
        (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_5(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    MR_builtin_longjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_7(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40 = ((MR_Word) (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40);
    {
      mdb__help__add_node_7_p_0_6(mdb__help__env_ptr);
    }
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_6(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    {
      MR_Integer mdb__help__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 0)));
      MR_Word mdb__help__V_37_37;

      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 1)));
      mdb__help__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 2)));
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = (strcmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Name_4, (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_45_45) == 0);
      if ((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded)
        {
          mdb__help__add_node_7_p_0_5(mdb__help__env_ptr);
        }
    }
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0_8(
  void * mdb__help__env_ptr_arg)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

    if (MR_builtin_setjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_1) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mdb__help__mdb__help__type_ctor_info_entry_0, &(mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40, (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__add_node_7_p_0_7, mdb__help__env_ptr);
          }
        }
        (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
mdb__help__add_node_7_p_0(
  MR_Word mdb__help__Nodes0_1,
  MR_Word mdb__help__HeadVar__2_2,
  MR_Integer mdb__help__Index_3,
  MR_String mdb__help__Name_4,
  MR_Word mdb__help__HeadVar__5_5,
  MR_Word * mdb__help__Res_6,
  MR_Word * mdb__help__Nodes_7)
{
  {
    struct mdb__help__add_node_7_p_0_env_0_s mdb__help__env;

    (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1 = mdb__help__Nodes0_1;
    (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Index_3 = mdb__help__Index_3;
    (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Name_4 = mdb__help__Name_4;
    if ((mdb__help__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mdb__help__add_node_7_p_0_4(&mdb__help__env);
        }
        if ((mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded)
          {
            *mdb__help__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[1]);
            *mdb__help__Nodes_7 = (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
          }
        else
          {
            {
              mdb__help__add_node_7_p_0_8(&mdb__help__env);
            }
            if ((mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded)
              {
                *mdb__help__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[2]);
                *mdb__help__Nodes_7 = (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
              }
            else
              {
                *mdb__help__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mdb__help__insert_into_entry_list_5_p_0((mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Index_3, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Name_4, mdb__help__HeadVar__5_5, mdb__help__Nodes_7);
                }
              }
          }
      }
    else
      {
        MR_String mdb__help__Step_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mdb__help__Steps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mdb__help__Entry0_16;

        {
          (mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded = mdb__help__one_path_step_3_p_0((mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__Step_9, &mdb__help__Entry0_16);
        }
        if ((mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded)
          {
            MR_Integer mdb__help__EntryIndex_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry0_16, (MR_Integer) 0)));
            MR_String mdb__help__EntryName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry0_16, (MR_Integer) 1)));
            MR_Word mdb__help__EntryNode0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry0_16, (MR_Integer) 2)));
            MR_String mdb__help__Text_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode0_19, (MR_Integer) 0)));
            MR_Word mdb__help__SubNodes0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode0_19, (MR_Integer) 1)));
            MR_Word mdb__help__SubNodes_22;
            MR_Word mdb__help__EntryNode_23;
            MR_Word mdb__help__Entry_24;

            {
              mdb__help__add_node_7_p_0(mdb__help__SubNodes0_21, mdb__help__Steps_10, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Index_3, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Name_4, mdb__help__HeadVar__5_5, mdb__help__Res_6, &mdb__help__SubNodes_22);
            }
            {
              mdb__help__EntryNode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__help__EntryNode_23, 0) = ((MR_Box) (mdb__help__Text_20));
              MR_hl_field(MR_mktag(0), mdb__help__EntryNode_23, 1) = ((MR_Box) (mdb__help__SubNodes_22));
            }
            {
              mdb__help__Entry_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mdb__help__Entry_24, 0) = ((MR_Box) (mdb__help__EntryIndex_17));
              MR_hl_field(MR_mktag(0), mdb__help__Entry_24, 1) = ((MR_Box) (mdb__help__EntryName_18));
              MR_hl_field(MR_mktag(0), mdb__help__Entry_24, 2) = ((MR_Box) (mdb__help__EntryNode_23));
            }
            {
              mdb__help__replace_entry_3_p_0((mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__Entry_24, mdb__help__Nodes_7);
            }
          }
        else
          {
            MR_String mdb__help__Msg_25;

            {
              mercury__string__append_3_p_2((MR_String) "invalid path component ", mdb__help__Step_9, &mdb__help__Msg_25);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mdb__help__Res_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Msg_25));
            }
            *mdb__help__Nodes_7 = (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
          }
      }
  }
}

MR_bool MR_CALL 
mdb__help__result_is_error_2_p_0(
  MR_Word mdb__help__HeadVar__1_1,
  MR_String * mdb__help__Msg_3)
{
  {
    MR_bool mdb__help__succeeded = ((MR_tag((MR_Word) mdb__help__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

    if (mdb__help__succeeded)
      *mdb__help__Msg_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
    return mdb__help__succeeded;
  }
}

void MR_CALL 
mdb__help__help_system_type_1_p_0(
  MR_Word * mdb__help__Type_2)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Word mdb__help__V_5_5;

    {
      *mdb__help__Type_2 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__help_scalar_common_1[0]);
    }
  }
}

void MR_CALL 
mdb__help__name_5_p_0(
  MR_Word mdb__help__Sys_6,
  MR_String mdb__help__Name_7,
  MR_Word mdb__help__Stream_8)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Integer mdb__help__Count_10;

    {
      mdb__help__search_entry_list_7_p_0(mdb__help__Sys_6, mdb__help__Name_7, (MR_Integer) 0, &mdb__help__Count_10, mdb__help__Stream_8);
    }
    mdb__help__succeeded = (mdb__help__Count_10 == (MR_Integer) 0);
    if (mdb__help__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "There is no such help topic.\n");
        }
        {
          mdb__help__print_entry_list_4_p_0(mdb__help__Sys_6, mdb__help__Stream_8);
        }
      }
    else
      {
      }
  }
}

void MR_CALL 
mdb__help__path_6_p_0(
  MR_Word mdb__help__Entries_7,
  MR_Word mdb__help__Path_8,
  MR_Word mdb__help__Stream_9,
  MR_Word * mdb__help__Result_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mdb__help__succeeded;

        if ((mdb__help__Path_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mdb__help__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[0]);
          }
        else
          {
            MR_String mdb__help__Step_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__Path_8, (MR_Integer) 0)));
            MR_Word mdb__help__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__Path_8, (MR_Integer) 1)));
            MR_Word mdb__help__Entry_14;

            {
              mdb__help__succeeded = mdb__help__one_path_step_3_p_0(mdb__help__Entries_7, mdb__help__Step_12, &mdb__help__Entry_14);
            }
            if (mdb__help__succeeded)
              {
                MR_Word mdb__help__EntryNode_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry_14, (MR_Integer) 2)));
                MR_Word mdb__help__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode_17, (MR_Integer) 1)));
                MR_String mdb__help__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode_17, (MR_Integer) 0)));
                MR_Integer mdb__help__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry_14, (MR_Integer) 0)));
                MR_String mdb__help__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry_14, (MR_Integer) 1)));

                if ((mdb__help__Tail_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    {
                      mercury__io__write_string_4_p_0(mdb__help__Stream_9, mdb__help__V_34_34);
                    }
                    *mdb__help__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                else
                  {
                    /* direct tailcall eliminated */
                    {
                      MR_Word mdb__help__Entries__tmp_copy_7 = mdb__help__V_33_33;
                      MR_Word mdb__help__Path__tmp_copy_8 = mdb__help__Tail_13;

                      mdb__help__Path_8 = mdb__help__Path__tmp_copy_8;
                      mdb__help__Entries_7 = mdb__help__Entries__tmp_copy_7;
                    }
                    continue;
                  }
              }
            else
              {
                MR_String mdb__help__Msg_24;
                MR_String mdb__help__V_31_31;

                {
                  mdb__help__V_31_31 = mercury__string__f_43_43_2_f_0(mdb__help__Step_12, (MR_String) "\"");
                }
                {
                  mdb__help__Msg_24 = mercury__string__f_43_43_2_f_0((MR_String) "error at path component \"", mdb__help__V_31_31);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mdb__help__Result_10 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Msg_24));
                }
              }
          }
      }
      break;
    }
}

void MR_CALL 
mdb__help__help_4_p_0(
  MR_Word mdb__help__Sys_5,
  MR_Word mdb__help__Stream_6)
{
  {
    MR_bool mdb__help__succeeded;

    {
      mdb__help__print_entry_list_4_p_0(mdb__help__Sys_5, mdb__help__Stream_6);
    }
  }
}

void MR_CALL 
mdb__help__add_help_node_7_p_0(
  MR_Word mdb__help__Sys0_8,
  MR_Word mdb__help__Path_9,
  MR_Integer mdb__help__Index_10,
  MR_String mdb__help__Name_11,
  MR_String mdb__help__Text_12,
  MR_Word * mdb__help__Res_13,
  MR_Word * mdb__help__Sys_14)
{
  {
    MR_bool mdb__help__succeeded;
    MR_Word mdb__help__Node_15;

    {
      mdb__help__Node_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mdb__help__Node_15, 0) = ((MR_Box) (mdb__help__Text_12));
      MR_hl_field(MR_mktag(0), mdb__help__Node_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      mdb__help__add_node_7_p_0(mdb__help__Sys0_8, mdb__help__Path_9, mdb__help__Index_10, mdb__help__Name_11, mdb__help__Node_15, mdb__help__Res_13, mdb__help__Sys_14);
    }
  }
}

void MR_CALL 
mdb__help__init_1_p_0(
  MR_Word * mdb__help__HeadVar__1_1)
{
  {
    MR_bool mdb__help__succeeded;

    *mdb__help__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.help. */
