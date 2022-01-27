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
#include "mdb.mih"
#include "mdbcomp.mih"
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



#line 136 "help.m"
struct mdb__help__add_node_7_p_0_env_0_s {
#line 136 "help.m"
  MR_Word mdb__help__add_node_7_p_0_env_0__Nodes0_1;
#line 136 "help.m"
  MR_Integer mdb__help__add_node_7_p_0_env_0__Index_3;
#line 136 "help.m"
  MR_String mdb__help__add_node_7_p_0_env_0__Name_4;
#line 139 "help.m"
  MR_bool mdb__help__add_node_7_p_0_env_0__succeeded;
#line 154 "help.m"
  jmp_buf mdb__help__add_node_7_p_0_env_0__commit_0;
#line 154 "help.m"
  MR_Word mdb__help__add_node_7_p_0_env_0__Entry1_33;
#line 154 "help.m"
  MR_Integer mdb__help__add_node_7_p_0_env_0__V_44_44;
#line 154 "help.m"
  MR_Box mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33;
#line 160 "help.m"
  jmp_buf mdb__help__add_node_7_p_0_env_0__commit_1;
#line 160 "help.m"
  MR_Word mdb__help__add_node_7_p_0_env_0__Entry1_40;
#line 160 "help.m"
  MR_String mdb__help__add_node_7_p_0_env_0__V_45_45;
#line 160 "help.m"
  MR_Box mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40;
#line 136 "help.m"
};


#line 99 "mdb.help.c"
static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_entry_0_0[3];

#line 102 "mdb.help.c"
static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_entry_0_0;

#line 105 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_entry_0_0[1];

#line 108 "mdb.help.c"
static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_entry_0[1];

#line 111 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_entry_0[1];

#line 114 "mdb.help.c"
static const MR_Integer mdb__help__mdb__help__functor_number_map_entry_0[1];

#line 117 "mdb.help.c"
static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_0;

#line 120 "mdb.help.c"
static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_res_0_1[1];

#line 123 "mdb.help.c"
static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_help_res_0_1;

#line 126 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_0[1];

#line 129 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_1[1];

#line 132 "mdb.help.c"
static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_help_res_0[2];

#line 135 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_help_res_0[2];

#line 138 "mdb.help.c"
static const MR_Integer mdb__help__mdb__help__functor_number_map_help_res_0[2];

#line 141 "mdb.help.c"
static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0;

#line 144 "mdb.help.c"
static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_node_0_0[2];

#line 147 "mdb.help.c"
static const MR_DuFunctorDesc mdb__help__mdb__help__du_functor_desc_node_0_0;

#line 150 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_node_0_0[1];

#line 153 "mdb.help.c"
static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_node_0[1];

#line 156 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_node_0[1];

#line 159 "mdb.help.c"
static const MR_Integer mdb__help__mdb__help__functor_number_map_node_0[1];

#line 162 "mdb.help.c"
static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1builtin__type_ctor_info_string_0;

#line 165 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____entry_0_0_10001(
#line 168 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 170 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2);

#line 173 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____entry_0_0_10001(
#line 176 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 178 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 180 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3);

#line 183 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0_10001(
#line 186 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 188 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2);

#line 191 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____help_res_0_0_10001(
#line 194 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 196 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 198 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3);

#line 201 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____node_0_0_10001(
#line 204 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 206 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2);

#line 209 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____node_0_0_10001(
#line 212 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 214 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 216 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3);

#line 219 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____path_0_0_10001(
#line 222 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 224 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2);

#line 227 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____path_0_0_10001(
#line 230 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 232 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 234 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3);

#line 237 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____system_0_0_10001(
#line 240 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 242 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2);

#line 245 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____system_0_0_10001(
#line 248 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 250 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 252 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3);

#line 255 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____text_0_0_10001(
#line 258 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 260 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2);

#line 263 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____text_0_0_10001(
#line 266 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 268 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 270 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3);

#line 99 "help.m"
static void MR_CALL 
mdb__help____Compare____text_0_0(
#line 99 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 99 "help.m"
  MR_String mdb__help__HeadVar__2_2,
#line 99 "help.m"
  MR_String mdb__help__HeadVar__3_3);

#line 99 "help.m"
static MR_bool MR_CALL 
mdb__help____Unify____text_0_0(
#line 99 "help.m"
  MR_String mdb__help__HeadVar__1_1,
#line 99 "help.m"
  MR_String mdb__help__HeadVar__2_2);

#line 93 "help.m"
static void MR_CALL 
mdb__help____Compare____node_0_0(
#line 93 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__3_3);

#line 93 "help.m"
static MR_bool MR_CALL 
mdb__help____Unify____node_0_0(
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__2_2);

#line 272 "help.m"
static void MR_CALL 
mdb__help__replace_entry_3_p_0(
#line 272 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 272 "help.m"
  MR_Word mdb__help__Entry_2,
#line 272 "help.m"
  MR_Word * mdb__help__List_3);

#line 262 "help.m"
static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
#line 262 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 262 "help.m"
  MR_String mdb__help__Name_6,
#line 262 "help.m"
  MR_Word * mdb__help__Entry_7);

#line 246 "help.m"
static void MR_CALL 
mdb__help__print_entry_list_4_p_0(
#line 246 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 246 "help.m"
  MR_Word mdb__help__Stream_2);

#line 214 "help.m"
static void MR_CALL 
mdb__help__search_node_7_p_0(
#line 214 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 214 "help.m"
  MR_String mdb__help__Name_10,
#line 214 "help.m"
  MR_Integer mdb__help__STATE_VARIABLE_C_0_14,
#line 214 "help.m"
  MR_Integer * mdb__help__STATE_VARIABLE_C_15,
#line 214 "help.m"
  MR_Word mdb__help__Stream_12);

#line 199 "help.m"
static void MR_CALL 
mdb__help__search_entry_list_7_p_0(
#line 199 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 199 "help.m"
  MR_String mdb__help__Name_2,
#line 199 "help.m"
  MR_Integer mdb__help__STATE_VARIABLE_C_0_3,
#line 199 "help.m"
  MR_Integer * mdb__help__STATE_VARIABLE_C_4,
#line 199 "help.m"
  MR_Word mdb__help__Stream_5);

#line 170 "help.m"
static void MR_CALL 
mdb__help__insert_into_entry_list_5_p_0(
#line 170 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 170 "help.m"
  MR_Integer mdb__help__Index_2,
#line 170 "help.m"
  MR_String mdb__help__Name_3,
#line 170 "help.m"
  MR_Word mdb__help__Node_4,
#line 170 "help.m"
  MR_Word * mdb__help__HeadVar__5_5);

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_1(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg);

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_3(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg);

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_2(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg);

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_4(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg);

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_5(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg);

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_7(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg);

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_6(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg);

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_8(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg);

#line 136 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0(
#line 136 "help.m"
  MR_Word mdb__help__Nodes0_1,
#line 136 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 136 "help.m"
  MR_Integer mdb__help__Index_3,
#line 136 "help.m"
  MR_String mdb__help__Name_4,
#line 136 "help.m"
  MR_Word mdb__help__HeadVar__5_5,
#line 136 "help.m"
  MR_Word * mdb__help__Res_6,
#line 136 "help.m"
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



#include "mdb.help.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"

#line 117 "help.m"
void 
ML_HELP_init(
#line 117 "help.m"
  MR_Word * mdb__help__HeadVar__1_1)
#line 117 "help.m"
{
#line 117 "help.m"
	mdb__help__init_1_p_0((MR_Word *) mdb__help__HeadVar__1_1);
}

#line 118 "help.m"
void 
ML_HELP_add_help_node(
#line 118 "help.m"
  MR_Word mdb__help__Sys0_8,
#line 118 "help.m"
  MR_Word mdb__help__Path_9,
#line 118 "help.m"
  MR_Integer mdb__help__Index_10,
#line 118 "help.m"
  MR_String mdb__help__Name_11,
#line 118 "help.m"
  MR_String mdb__help__Text_12,
#line 118 "help.m"
  MR_Word * mdb__help__Res_13,
#line 118 "help.m"
  MR_Word * mdb__help__Sys_14)
#line 118 "help.m"
{
#line 118 "help.m"
	mdb__help__add_help_node_7_p_0((MR_Word) mdb__help__Sys0_8, (MR_Word) mdb__help__Path_9, (MR_Integer) mdb__help__Index_10, (MR_String) mdb__help__Name_11, (MR_String) mdb__help__Text_12, (MR_Word *) mdb__help__Res_13, (MR_Word *) mdb__help__Sys_14);
}

#line 120 "help.m"
void 
ML_HELP_help(
#line 120 "help.m"
  MR_Word mdb__help__Sys_5,
#line 120 "help.m"
  MR_Word mdb__help__Stream_6)
#line 120 "help.m"
{
#line 120 "help.m"
	mdb__help__help_4_p_0((MR_Word) mdb__help__Sys_5, (MR_Word) mdb__help__Stream_6);
}

#line 121 "help.m"
void 
ML_HELP_path(
#line 121 "help.m"
  MR_Word mdb__help__Entries_7,
#line 121 "help.m"
  MR_Word mdb__help__Path_8,
#line 121 "help.m"
  MR_Word mdb__help__Stream_9,
#line 121 "help.m"
  MR_Word * mdb__help__Result_10)
#line 121 "help.m"
{
#line 121 "help.m"
	mdb__help__path_6_p_0((MR_Word) mdb__help__Entries_7, (MR_Word) mdb__help__Path_8, (MR_Word) mdb__help__Stream_9, (MR_Word *) mdb__help__Result_10);
}

#line 122 "help.m"
void 
ML_HELP_name(
#line 122 "help.m"
  MR_Word mdb__help__Sys_6,
#line 122 "help.m"
  MR_String mdb__help__Name_7,
#line 122 "help.m"
  MR_Word mdb__help__Stream_8)
#line 122 "help.m"
{
#line 122 "help.m"
	mdb__help__name_5_p_0((MR_Word) mdb__help__Sys_6, (MR_String) mdb__help__Name_7, (MR_Word) mdb__help__Stream_8);
}

#line 123 "help.m"
void 
ML_HELP_help_system_type(
#line 123 "help.m"
  MR_Word * mdb__help__Type_2)
#line 123 "help.m"
{
#line 123 "help.m"
	mdb__help__help_system_type_1_p_0((MR_Word *) mdb__help__Type_2);
}

#line 125 "help.m"
MR_bool 
ML_HELP_result_is_error(
#line 125 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 125 "help.m"
  MR_String * mdb__help__Msg_3)
#line 125 "help.m"
{
#line 125 "help.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__help__result_is_error_2_p_0((MR_Word) mdb__help__HeadVar__1_1, (MR_String *) mdb__help__Msg_3);
	return ret_value;
}


#line 596 "mdb.help.c"
static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_entry_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__help__mdb__help__type_ctor_info_node_0
};

#line 603 "mdb.help.c"
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

#line 618 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_entry_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_entry_0_0
};

#line 623 "mdb.help.c"
static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_entry_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_entry_0_0
  }
};

#line 632 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_entry_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_entry_0_0
};

#line 637 "mdb.help.c"
static const MR_Integer mdb__help__mdb__help__functor_number_map_entry_0[1] = {
  (MR_Integer) 0
};

#line 642 "mdb.help.c"
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

#line 659 "mdb.help.c"
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

#line 674 "mdb.help.c"
static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_help_res_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 679 "mdb.help.c"
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

#line 694 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_0
};

#line 699 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_help_res_0_1[1] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_1
};

#line 704 "mdb.help.c"
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

#line 718 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_help_res_0[2] = {
  &mdb__help__mdb__help__du_functor_desc_help_res_0_1,
  &mdb__help__mdb__help__du_functor_desc_help_res_0_0
};

#line 724 "mdb.help.c"
static const MR_Integer mdb__help__mdb__help__functor_number_map_help_res_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 730 "mdb.help.c"
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

#line 747 "mdb.help.c"
static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__help__mdb__help__type_ctor_info_entry_0
  }
};

#line 755 "mdb.help.c"
static const MR_PseudoTypeInfo mdb__help__mdb__help__field_types_node_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__help__list__ti_list_1mdb__help__type_ctor_info_entry_0
};

#line 761 "mdb.help.c"
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

#line 776 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_stag_ordered_node_0_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_node_0_0
};

#line 781 "mdb.help.c"
static const MR_DuPtagLayout mdb__help__mdb__help__du_ptag_ordered_node_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__help__mdb__help__du_stag_ordered_node_0_0
  }
};

#line 790 "mdb.help.c"
static const MR_DuFunctorDescPtr mdb__help__mdb__help__du_name_ordered_node_0[1] = {
  &mdb__help__mdb__help__du_functor_desc_node_0_0
};

#line 795 "mdb.help.c"
static const MR_Integer mdb__help__mdb__help__functor_number_map_node_0[1] = {
  (MR_Integer) 0
};

#line 800 "mdb.help.c"
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

#line 817 "mdb.help.c"
static const MR_FA_TypeInfo_Struct1 mdb__help__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 825 "mdb.help.c"
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

#line 842 "mdb.help.c"
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

#line 859 "mdb.help.c"
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

#line 876 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____entry_0_0_10001(
#line 879 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 881 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2)
#line 883 "mdb.help.c"
{
#line 885 "mdb.help.c"
  {
#line 887 "mdb.help.c"
    MR_bool mdb__help__succeeded;

#line 890 "mdb.help.c"
    {
#line 892 "mdb.help.c"
      mdb__help__succeeded = mdb__help____Unify____entry_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
#line 895 "mdb.help.c"
    return mdb__help__succeeded;
#line 897 "mdb.help.c"
  }
#line 899 "mdb.help.c"
}

#line 902 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____entry_0_0_10001(
#line 905 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 907 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 909 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3)
#line 911 "mdb.help.c"
{
#line 913 "mdb.help.c"
  {
#line 915 "mdb.help.c"
    MR_Word mdb__help__conv0_HeadVar__1_1;

#line 918 "mdb.help.c"
    {
#line 920 "mdb.help.c"
      mdb__help____Compare____entry_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
#line 923 "mdb.help.c"
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
#line 925 "mdb.help.c"
  }
#line 927 "mdb.help.c"
}

#line 930 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0_10001(
#line 933 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 935 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2)
#line 937 "mdb.help.c"
{
#line 939 "mdb.help.c"
  {
#line 941 "mdb.help.c"
    MR_bool mdb__help__succeeded;

#line 944 "mdb.help.c"
    {
#line 946 "mdb.help.c"
      mdb__help__succeeded = mdb__help____Unify____help_res_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
#line 949 "mdb.help.c"
    return mdb__help__succeeded;
#line 951 "mdb.help.c"
  }
#line 953 "mdb.help.c"
}

#line 956 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____help_res_0_0_10001(
#line 959 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 961 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 963 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3)
#line 965 "mdb.help.c"
{
#line 967 "mdb.help.c"
  {
#line 969 "mdb.help.c"
    MR_Word mdb__help__conv0_HeadVar__1_1;

#line 972 "mdb.help.c"
    {
#line 974 "mdb.help.c"
      mdb__help____Compare____help_res_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
#line 977 "mdb.help.c"
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
#line 979 "mdb.help.c"
  }
#line 981 "mdb.help.c"
}

#line 984 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____node_0_0_10001(
#line 987 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 989 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2)
#line 991 "mdb.help.c"
{
#line 993 "mdb.help.c"
  {
#line 995 "mdb.help.c"
    MR_bool mdb__help__succeeded;

#line 998 "mdb.help.c"
    {
#line 1000 "mdb.help.c"
      mdb__help__succeeded = mdb__help____Unify____node_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
#line 1003 "mdb.help.c"
    return mdb__help__succeeded;
#line 1005 "mdb.help.c"
  }
#line 1007 "mdb.help.c"
}

#line 1010 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____node_0_0_10001(
#line 1013 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 1015 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 1017 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3)
#line 1019 "mdb.help.c"
{
#line 1021 "mdb.help.c"
  {
#line 1023 "mdb.help.c"
    MR_Word mdb__help__conv0_HeadVar__1_1;

#line 1026 "mdb.help.c"
    {
#line 1028 "mdb.help.c"
      mdb__help____Compare____node_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
#line 1031 "mdb.help.c"
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
#line 1033 "mdb.help.c"
  }
#line 1035 "mdb.help.c"
}

#line 1038 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____path_0_0_10001(
#line 1041 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 1043 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2)
#line 1045 "mdb.help.c"
{
#line 1047 "mdb.help.c"
  {
#line 1049 "mdb.help.c"
    MR_bool mdb__help__succeeded;

#line 1052 "mdb.help.c"
    {
#line 1054 "mdb.help.c"
      mdb__help__succeeded = mdb__help____Unify____path_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
#line 1057 "mdb.help.c"
    return mdb__help__succeeded;
#line 1059 "mdb.help.c"
  }
#line 1061 "mdb.help.c"
}

#line 1064 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____path_0_0_10001(
#line 1067 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 1069 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 1071 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3)
#line 1073 "mdb.help.c"
{
#line 1075 "mdb.help.c"
  {
#line 1077 "mdb.help.c"
    MR_Word mdb__help__conv0_HeadVar__1_1;

#line 1080 "mdb.help.c"
    {
#line 1082 "mdb.help.c"
      mdb__help____Compare____path_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
#line 1085 "mdb.help.c"
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
#line 1087 "mdb.help.c"
  }
#line 1089 "mdb.help.c"
}

#line 1092 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____system_0_0_10001(
#line 1095 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 1097 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2)
#line 1099 "mdb.help.c"
{
#line 1101 "mdb.help.c"
  {
#line 1103 "mdb.help.c"
    MR_bool mdb__help__succeeded;

#line 1106 "mdb.help.c"
    {
#line 1108 "mdb.help.c"
      mdb__help__succeeded = mdb__help____Unify____system_0_0(((MR_Word) mdb__help__wrapper_arg_1), ((MR_Word) mdb__help__wrapper_arg_2));
    }
#line 1111 "mdb.help.c"
    return mdb__help__succeeded;
#line 1113 "mdb.help.c"
  }
#line 1115 "mdb.help.c"
}

#line 1118 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____system_0_0_10001(
#line 1121 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 1123 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 1125 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3)
#line 1127 "mdb.help.c"
{
#line 1129 "mdb.help.c"
  {
#line 1131 "mdb.help.c"
    MR_Word mdb__help__conv0_HeadVar__1_1;

#line 1134 "mdb.help.c"
    {
#line 1136 "mdb.help.c"
      mdb__help____Compare____system_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_Word) mdb__help__wrapper_arg_2), ((MR_Word) mdb__help__wrapper_arg_3));
    }
#line 1139 "mdb.help.c"
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
#line 1141 "mdb.help.c"
  }
#line 1143 "mdb.help.c"
}

#line 1146 "mdb.help.c"
static MR_bool MR_CALL 
mdb__help____Unify____text_0_0_10001(
#line 1149 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_1,
#line 1151 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2)
#line 1153 "mdb.help.c"
{
#line 1155 "mdb.help.c"
  {
#line 1157 "mdb.help.c"
    MR_bool mdb__help__succeeded;

#line 1160 "mdb.help.c"
    {
#line 1162 "mdb.help.c"
      mdb__help__succeeded = mdb__help____Unify____text_0_0(((MR_String) mdb__help__wrapper_arg_1), ((MR_String) mdb__help__wrapper_arg_2));
    }
#line 1165 "mdb.help.c"
    return mdb__help__succeeded;
#line 1167 "mdb.help.c"
  }
#line 1169 "mdb.help.c"
}

#line 1172 "mdb.help.c"
static void MR_CALL 
mdb__help____Compare____text_0_0_10001(
#line 1175 "mdb.help.c"
  MR_Box * mdb__help__wrapper_arg_1,
#line 1177 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_2,
#line 1179 "mdb.help.c"
  MR_Box mdb__help__wrapper_arg_3)
#line 1181 "mdb.help.c"
{
#line 1183 "mdb.help.c"
  {
#line 1185 "mdb.help.c"
    MR_Word mdb__help__conv0_HeadVar__1_1;

#line 1188 "mdb.help.c"
    {
#line 1190 "mdb.help.c"
      mdb__help____Compare____text_0_0(&mdb__help__conv0_HeadVar__1_1, ((MR_String) mdb__help__wrapper_arg_2), ((MR_String) mdb__help__wrapper_arg_3));
    }
#line 1193 "mdb.help.c"
    *mdb__help__wrapper_arg_1 = ((MR_Box) (mdb__help__conv0_HeadVar__1_1));
#line 1195 "mdb.help.c"
  }
#line 1197 "mdb.help.c"
}

#line 99 "help.m"
static void MR_CALL 
mdb__help____Compare____text_0_0(
#line 99 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 99 "help.m"
  MR_String mdb__help__HeadVar__2_2,
#line 99 "help.m"
  MR_String mdb__help__HeadVar__3_3)
#line 99 "help.m"
{
#line 99 "help.m"
  {
#line 99 "help.m"
    MR_bool mdb__help__succeeded;
#line 99 "help.m"
    MR_String mdb__help__Cast_HeadVar1_4 = mdb__help__HeadVar__2_2;
#line 99 "help.m"
    MR_String mdb__help__Cast_HeadVar2_5 = mdb__help__HeadVar__3_3;

#line 99 "help.m"
    {
#line 99 "help.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__help__HeadVar__1_1, mdb__help__Cast_HeadVar1_4, mdb__help__Cast_HeadVar2_5);
#line 99 "help.m"
      return;
    }
#line 99 "help.m"
  }
#line 99 "help.m"
}

#line 99 "help.m"
static MR_bool MR_CALL 
mdb__help____Unify____text_0_0(
#line 99 "help.m"
  MR_String mdb__help__HeadVar__1_1,
#line 99 "help.m"
  MR_String mdb__help__HeadVar__2_2)
#line 99 "help.m"
{
#line 99 "help.m"
  {
#line 99 "help.m"
    MR_bool mdb__help__succeeded;
#line 99 "help.m"
    MR_String mdb__help__Cast_HeadVar1_3 = mdb__help__HeadVar__1_1;
#line 99 "help.m"
    MR_String mdb__help__Cast_HeadVar2_4 = mdb__help__HeadVar__2_2;

#line 99 "help.m"
    mdb__help__succeeded = (strcmp(mdb__help__Cast_HeadVar1_3, mdb__help__Cast_HeadVar2_4) == 0);
#line 99 "help.m"
    return mdb__help__succeeded;
#line 99 "help.m"
  }
#line 99 "help.m"
}

#line 91 "help.m"
void MR_CALL 
mdb__help____Compare____system_0_0(
#line 91 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 91 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 91 "help.m"
  MR_Word mdb__help__HeadVar__3_3)
#line 91 "help.m"
{
#line 91 "help.m"
  {
#line 91 "help.m"
    MR_bool mdb__help__succeeded;
#line 91 "help.m"
    MR_Word mdb__help__Cast_HeadVar1_4 = mdb__help__HeadVar__2_2;
#line 91 "help.m"
    MR_Word mdb__help__Cast_HeadVar2_5 = mdb__help__HeadVar__3_3;

#line 91 "help.m"
    {
#line 91 "help.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__help_scalar_common_1[0], mdb__help__HeadVar__1_1, ((MR_Box) (mdb__help__Cast_HeadVar1_4)), ((MR_Box) (mdb__help__Cast_HeadVar2_5)));
#line 91 "help.m"
      return;
    }
#line 91 "help.m"
  }
#line 91 "help.m"
}

#line 91 "help.m"
MR_bool MR_CALL 
mdb__help____Unify____system_0_0(
#line 91 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 91 "help.m"
  MR_Word mdb__help__HeadVar__2_2)
#line 91 "help.m"
{
#line 91 "help.m"
  {
#line 91 "help.m"
    MR_bool mdb__help__succeeded;
#line 91 "help.m"
    MR_Word mdb__help__Cast_HeadVar1_3 = mdb__help__HeadVar__1_1;
#line 91 "help.m"
    MR_Word mdb__help__Cast_HeadVar2_4 = mdb__help__HeadVar__2_2;

#line 91 "help.m"
    {
#line 91 "help.m"
      return mdb__help__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__help_scalar_common_1[0], ((MR_Box) (mdb__help__Cast_HeadVar1_3)), ((MR_Box) (mdb__help__Cast_HeadVar2_4)));
    }
#line 91 "help.m"
    return mdb__help__succeeded;
#line 91 "help.m"
  }
#line 91 "help.m"
}

#line 35 "help.m"
void MR_CALL 
mdb__help____Compare____path_0_0(
#line 35 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 35 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 35 "help.m"
  MR_Word mdb__help__HeadVar__3_3)
#line 35 "help.m"
{
#line 35 "help.m"
  {
#line 35 "help.m"
    MR_bool mdb__help__succeeded;
#line 35 "help.m"
    MR_Word mdb__help__Cast_HeadVar1_4 = mdb__help__HeadVar__2_2;
#line 35 "help.m"
    MR_Word mdb__help__Cast_HeadVar2_5 = mdb__help__HeadVar__3_3;

#line 35 "help.m"
    {
#line 35 "help.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__help_scalar_common_1[1], mdb__help__HeadVar__1_1, ((MR_Box) (mdb__help__Cast_HeadVar1_4)), ((MR_Box) (mdb__help__Cast_HeadVar2_5)));
#line 35 "help.m"
      return;
    }
#line 35 "help.m"
  }
#line 35 "help.m"
}

#line 35 "help.m"
MR_bool MR_CALL 
mdb__help____Unify____path_0_0(
#line 35 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 35 "help.m"
  MR_Word mdb__help__HeadVar__2_2)
#line 35 "help.m"
{
#line 35 "help.m"
  {
#line 35 "help.m"
    MR_bool mdb__help__succeeded;
#line 35 "help.m"
    MR_Word mdb__help__Cast_HeadVar1_3 = mdb__help__HeadVar__1_1;
#line 35 "help.m"
    MR_Word mdb__help__Cast_HeadVar2_4 = mdb__help__HeadVar__2_2;

#line 35 "help.m"
    {
#line 35 "help.m"
      return mdb__help__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__help_scalar_common_1[1], ((MR_Box) (mdb__help__Cast_HeadVar1_3)), ((MR_Box) (mdb__help__Cast_HeadVar2_4)));
    }
#line 35 "help.m"
    return mdb__help__succeeded;
#line 35 "help.m"
  }
#line 35 "help.m"
}

#line 93 "help.m"
static void MR_CALL 
mdb__help____Compare____node_0_0(
#line 93 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__3_3)
#line 93 "help.m"
{
#line 93 "help.m"
  {
#line 93 "help.m"
    MR_bool mdb__help__succeeded;
#line 93 "help.m"
    MR_Integer mdb__help__CastX_9 = (MR_Integer) mdb__help__HeadVar__2_2;
#line 93 "help.m"
    MR_Integer mdb__help__CastY_10 = (MR_Integer) mdb__help__HeadVar__3_3;

#line 93 "help.m"
    mdb__help__succeeded = (mdb__help__CastX_9 == mdb__help__CastY_10);
#line 93 "help.m"
    if (mdb__help__succeeded)
#line 1407 "mdb.help.c"
      *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "help.m"
    else
#line 93 "help.m"
      {
#line 93 "help.m"
        MR_String mdb__help__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "help.m"
        MR_Word mdb__help__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
#line 93 "help.m"
        MR_String mdb__help__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 0)));
#line 93 "help.m"
        MR_Word mdb__help__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 1)));
#line 93 "help.m"
        MR_Word mdb__help__V_8_8;

#line 93 "help.m"
        {
#line 93 "help.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__help__V_8_8, mdb__help__V_4_4, mdb__help__V_6_6);
        }
#line 1429 "mdb.help.c"
        mdb__help__succeeded = (mdb__help__V_8_8 == (MR_Integer) 0);
#line 93 "help.m"
        mdb__help__succeeded = !(mdb__help__succeeded);
#line 93 "help.m"
        if (mdb__help__succeeded)
#line 93 "help.m"
          *mdb__help__HeadVar__1_1 = mdb__help__V_8_8;
#line 93 "help.m"
        else
#line 93 "help.m"
          {
#line 93 "help.m"
            {
#line 93 "help.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__help_scalar_common_1[0], mdb__help__HeadVar__1_1, ((MR_Box) (mdb__help__V_5_5)), ((MR_Box) (mdb__help__V_7_7)));
#line 93 "help.m"
              return;
            }
#line 93 "help.m"
          }
#line 93 "help.m"
      }
#line 93 "help.m"
  }
#line 93 "help.m"
}

#line 93 "help.m"
static MR_bool MR_CALL 
mdb__help____Unify____node_0_0(
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 93 "help.m"
  MR_Word mdb__help__HeadVar__2_2)
#line 93 "help.m"
{
#line 93 "help.m"
  {
#line 93 "help.m"
    MR_bool mdb__help__succeeded;
#line 93 "help.m"
    MR_Integer mdb__help__CastX_7 = (MR_Integer) mdb__help__HeadVar__1_1;
#line 93 "help.m"
    MR_Integer mdb__help__CastY_8 = (MR_Integer) mdb__help__HeadVar__2_2;

#line 93 "help.m"
    mdb__help__succeeded = (mdb__help__CastX_7 == mdb__help__CastY_8);
#line 93 "help.m"
    if (mdb__help__succeeded)
#line 93 "help.m"
      mdb__help__succeeded = MR_TRUE;
#line 93 "help.m"
    else
#line 93 "help.m"
      {
#line 93 "help.m"
        MR_Word mdb__help__TypeInfo_9_9;
#line 93 "help.m"
        MR_String mdb__help__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "help.m"
        MR_Word mdb__help__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 93 "help.m"
        MR_String mdb__help__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
#line 93 "help.m"
        MR_Word mdb__help__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));

#line 1496 "mdb.help.c"
        mdb__help__succeeded = (strcmp(mdb__help__V_3_3, mdb__help__V_5_5) == 0);
#line 93 "help.m"
        if (mdb__help__succeeded)
#line 93 "help.m"
          {
#line 1502 "mdb.help.c"
            mdb__help__TypeInfo_9_9 = (MR_Word) &mdb__help_scalar_common_1[0];
#line 1504 "mdb.help.c"
            {
#line 1506 "mdb.help.c"
              return mdb__help__succeeded = mercury__builtin__unify_2_p_0(mdb__help__TypeInfo_9_9, ((MR_Box) (mdb__help__V_4_4)), ((MR_Box) (mdb__help__V_6_6)));
            }
#line 93 "help.m"
          }
#line 93 "help.m"
      }
#line 93 "help.m"
    return mdb__help__succeeded;
#line 93 "help.m"
  }
#line 93 "help.m"
}

#line 37 "help.m"
void MR_CALL 
mdb__help____Compare____help_res_0_0(
#line 37 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 37 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 37 "help.m"
  MR_Word mdb__help__HeadVar__3_3)
#line 37 "help.m"
{
#line 37 "help.m"
  {
#line 37 "help.m"
    MR_bool mdb__help__succeeded;
#line 37 "help.m"
    MR_Integer mdb__help__CastX_8 = (MR_Integer) mdb__help__HeadVar__2_2;
#line 37 "help.m"
    MR_Integer mdb__help__CastY_9 = (MR_Integer) mdb__help__HeadVar__3_3;

#line 37 "help.m"
    mdb__help__succeeded = (mdb__help__CastX_8 == mdb__help__CastY_9);
#line 37 "help.m"
    if (mdb__help__succeeded)
#line 1544 "mdb.help.c"
      *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "help.m"
    else
#line 37 "help.m"
    if ((mdb__help__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "help.m"
      if ((mdb__help__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "help.m"
        *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
#line 37 "help.m"
      else
#line 1556 "mdb.help.c"
        *mdb__help__HeadVar__1_1 = (MR_Integer) 1;
#line 37 "help.m"
    else
#line 37 "help.m"
      {
#line 37 "help.m"
        MR_String mdb__help__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 0)));

#line 37 "help.m"
        if ((mdb__help__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1567 "mdb.help.c"
          *mdb__help__HeadVar__1_1 = (MR_Integer) 2;
#line 37 "help.m"
        else
#line 37 "help.m"
          {
#line 37 "help.m"
            MR_String mdb__help__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__3_3, (MR_Integer) 0)));

#line 37 "help.m"
            {
#line 37 "help.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(mdb__help__HeadVar__1_1, mdb__help__V_11_11, mdb__help__V_7_7);
#line 37 "help.m"
              return;
            }
#line 37 "help.m"
          }
#line 37 "help.m"
      }
#line 37 "help.m"
  }
#line 37 "help.m"
}

#line 37 "help.m"
MR_bool MR_CALL 
mdb__help____Unify____help_res_0_0(
#line 37 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 37 "help.m"
  MR_Word mdb__help__HeadVar__2_2)
#line 37 "help.m"
{
#line 37 "help.m"
  {
#line 37 "help.m"
    MR_bool mdb__help__succeeded;
#line 37 "help.m"
    MR_Integer mdb__help__CastX_7 = (MR_Integer) mdb__help__HeadVar__1_1;
#line 37 "help.m"
    MR_Integer mdb__help__CastY_8 = (MR_Integer) mdb__help__HeadVar__2_2;

#line 37 "help.m"
    mdb__help__succeeded = (mdb__help__CastX_7 == mdb__help__CastY_8);
#line 37 "help.m"
    if (mdb__help__succeeded)
#line 37 "help.m"
      mdb__help__succeeded = MR_TRUE;
#line 37 "help.m"
    else
#line 37 "help.m"
    if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 37 "help.m"
      {
#line 37 "help.m"
        MR_Integer mdb__help__CastX_3 = (MR_Integer) mdb__help__HeadVar__1_1;
#line 37 "help.m"
        MR_Integer mdb__help__CastY_4 = (MR_Integer) mdb__help__HeadVar__2_2;

#line 37 "help.m"
        mdb__help__succeeded = (mdb__help__CastY_4 == mdb__help__CastX_3);
#line 37 "help.m"
      }
#line 37 "help.m"
    else
#line 37 "help.m"
      {
#line 37 "help.m"
        MR_String mdb__help__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 37 "help.m"
        MR_String mdb__help__V_6_6;

#line 37 "help.m"
        mdb__help__succeeded = ((MR_tag((MR_Word) mdb__help__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 37 "help.m"
        if (mdb__help__succeeded)
#line 37 "help.m"
          {
#line 37 "help.m"
            mdb__help__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
#line 1648 "mdb.help.c"
            mdb__help__succeeded = (strcmp(mdb__help__V_5_5, mdb__help__V_6_6) == 0);
#line 37 "help.m"
          }
#line 37 "help.m"
      }
#line 37 "help.m"
    return mdb__help__succeeded;
#line 37 "help.m"
  }
#line 37 "help.m"
}

#line 101 "help.m"
void MR_CALL 
mdb__help____Compare____entry_0_0(
#line 101 "help.m"
  MR_Word * mdb__help__HeadVar__1_1,
#line 101 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 101 "help.m"
  MR_Word mdb__help__HeadVar__3_3)
#line 101 "help.m"
{
#line 101 "help.m"
  {
#line 101 "help.m"
    MR_bool mdb__help__succeeded;
#line 101 "help.m"
    MR_Integer mdb__help__CastX_12 = (MR_Integer) mdb__help__HeadVar__2_2;
#line 101 "help.m"
    MR_Integer mdb__help__CastY_13 = (MR_Integer) mdb__help__HeadVar__3_3;

#line 101 "help.m"
    mdb__help__succeeded = (mdb__help__CastX_12 == mdb__help__CastY_13);
#line 101 "help.m"
    if (mdb__help__succeeded)
#line 1685 "mdb.help.c"
      *mdb__help__HeadVar__1_1 = (MR_Integer) 0;
#line 101 "help.m"
    else
#line 101 "help.m"
      {
#line 101 "help.m"
        MR_Integer mdb__help__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "help.m"
        MR_String mdb__help__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
#line 101 "help.m"
        MR_Word mdb__help__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 2)));
#line 101 "help.m"
        MR_Integer mdb__help__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 0)));
#line 101 "help.m"
        MR_String mdb__help__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 1)));
#line 101 "help.m"
        MR_Word mdb__help__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__3_3, (MR_Integer) 2)));
#line 101 "help.m"
        MR_Word mdb__help__V_10_10;

#line 101 "help.m"
        {
#line 101 "help.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__help__V_10_10, mdb__help__V_4_4, mdb__help__V_7_7);
        }
#line 1711 "mdb.help.c"
        mdb__help__succeeded = (mdb__help__V_10_10 == (MR_Integer) 0);
#line 101 "help.m"
        mdb__help__succeeded = !(mdb__help__succeeded);
#line 101 "help.m"
        if (mdb__help__succeeded)
#line 101 "help.m"
          *mdb__help__HeadVar__1_1 = mdb__help__V_10_10;
#line 101 "help.m"
        else
#line 101 "help.m"
          {
#line 101 "help.m"
            MR_Word mdb__help__V_11_11;

#line 101 "help.m"
            {
#line 101 "help.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__help__V_11_11, mdb__help__V_5_5, mdb__help__V_8_8);
            }
#line 1731 "mdb.help.c"
            mdb__help__succeeded = (mdb__help__V_11_11 == (MR_Integer) 0);
#line 101 "help.m"
            mdb__help__succeeded = !(mdb__help__succeeded);
#line 101 "help.m"
            if (mdb__help__succeeded)
#line 101 "help.m"
              *mdb__help__HeadVar__1_1 = mdb__help__V_11_11;
#line 101 "help.m"
            else
#line 101 "help.m"
              {
#line 101 "help.m"
                mdb__help____Compare____node_0_0(mdb__help__HeadVar__1_1, mdb__help__V_6_6, mdb__help__V_9_9);
#line 101 "help.m"
                return;
              }
#line 101 "help.m"
          }
#line 101 "help.m"
      }
#line 101 "help.m"
  }
#line 101 "help.m"
}

#line 101 "help.m"
MR_bool MR_CALL 
mdb__help____Unify____entry_0_0(
#line 101 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 101 "help.m"
  MR_Word mdb__help__HeadVar__2_2)
#line 101 "help.m"
{
#line 101 "help.m"
  {
#line 101 "help.m"
    MR_bool mdb__help__succeeded;
#line 101 "help.m"
    MR_Integer mdb__help__CastX_9 = (MR_Integer) mdb__help__HeadVar__1_1;
#line 101 "help.m"
    MR_Integer mdb__help__CastY_10 = (MR_Integer) mdb__help__HeadVar__2_2;

#line 101 "help.m"
    mdb__help__succeeded = (mdb__help__CastX_9 == mdb__help__CastY_10);
#line 101 "help.m"
    if (mdb__help__succeeded)
#line 101 "help.m"
      mdb__help__succeeded = MR_TRUE;
#line 101 "help.m"
    else
#line 101 "help.m"
      {
#line 101 "help.m"
        MR_Integer mdb__help__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 101 "help.m"
        MR_String mdb__help__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 101 "help.m"
        MR_Word mdb__help__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 2)));
#line 101 "help.m"
        MR_Integer mdb__help__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
#line 101 "help.m"
        MR_String mdb__help__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
#line 101 "help.m"
        MR_Word mdb__help__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__2_2, (MR_Integer) 2)));

#line 1798 "mdb.help.c"
        mdb__help__succeeded = (mdb__help__V_3_3 == mdb__help__V_6_6);
#line 101 "help.m"
        if (mdb__help__succeeded)
#line 101 "help.m"
          {
#line 1804 "mdb.help.c"
            mdb__help__succeeded = (strcmp(mdb__help__V_4_4, mdb__help__V_7_7) == 0);
#line 101 "help.m"
            if (mdb__help__succeeded)
#line 1808 "mdb.help.c"
              {
#line 1810 "mdb.help.c"
                return mdb__help__succeeded = mdb__help____Unify____node_0_0(mdb__help__V_5_5, mdb__help__V_8_8);
              }
#line 101 "help.m"
          }
#line 101 "help.m"
      }
#line 101 "help.m"
    return mdb__help__succeeded;
#line 101 "help.m"
  }
#line 101 "help.m"
}

#line 272 "help.m"
static void MR_CALL 
mdb__help__replace_entry_3_p_0(
#line 272 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 272 "help.m"
  MR_Word mdb__help__Entry_2,
#line 272 "help.m"
  MR_Word * mdb__help__List_3)
#line 272 "help.m"
{
#line 274 "help.m"
  {
#line 274 "help.m"
    MR_bool mdb__help__succeeded;

#line 274 "help.m"
    if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 274 "help.m"
      {
#line 275 "help.m"
        {
#line 275 "help.m"
          mercury__require__error_1_p_0((MR_String) "replace_entry: entry to be replaced not found");
#line 275 "help.m"
          return;
        }
#line 274 "help.m"
      }
#line 274 "help.m"
    else
#line 276 "help.m"
      {
#line 276 "help.m"
        MR_Word mdb__help__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 276 "help.m"
        MR_Word mdb__help__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 276 "help.m"
        MR_Integer mdb__help__HeadIndex_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Head_7, (MR_Integer) 0)));
#line 276 "help.m"
        MR_Integer mdb__help__EntryIndex_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry_2, (MR_Integer) 0)));
#line 277 "help.m"
        MR_String mdb__help__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Head_7, (MR_Integer) 1)));
#line 277 "help.m"
        MR_Word mdb__help__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Head_7, (MR_Integer) 2)));
#line 278 "help.m"
        MR_String mdb__help__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry_2, (MR_Integer) 1)));
#line 278 "help.m"
        MR_Word mdb__help__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry_2, (MR_Integer) 2)));

#line 279 "help.m"
        mdb__help__succeeded = (mdb__help__HeadIndex_11 == mdb__help__EntryIndex_14);
#line 281 "help.m"
        if (mdb__help__succeeded)
#line 280 "help.m"
          {
#line 280 "help.m"
            MR_Word base;
#line 280 "help.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "help.m"
            *mdb__help__List_3 = base;
#line 280 "help.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Entry_2));
#line 280 "help.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__Tail_8));
#line 280 "help.m"
          }
#line 281 "help.m"
        else
#line 282 "help.m"
          {
#line 282 "help.m"
            MR_Word mdb__help__NewTail_17;

#line 282 "help.m"
            {
#line 282 "help.m"
              mdb__help__replace_entry_3_p_0(mdb__help__Tail_8, mdb__help__Entry_2, &mdb__help__NewTail_17);
            }
#line 283 "help.m"
            {
#line 283 "help.m"
              MR_Word base;
#line 283 "help.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "help.m"
              *mdb__help__List_3 = base;
#line 283 "help.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Head_7));
#line 283 "help.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__NewTail_17));
#line 283 "help.m"
            }
#line 282 "help.m"
          }
#line 276 "help.m"
      }
#line 274 "help.m"
  }
#line 272 "help.m"
}

#line 262 "help.m"
static MR_bool MR_CALL 
mdb__help__one_path_step_3_p_0(
#line 262 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 262 "help.m"
  MR_String mdb__help__Name_6,
#line 262 "help.m"
  MR_Word * mdb__help__Entry_7)
#line 262 "help.m"
{
#line 264 "help.m"
  while (MR_TRUE)
#line 264 "help.m"
    {
#line 264 "help.m"
      /* tailcall optimized into a loop */
#line 264 "help.m"
      {
#line 264 "help.m"
        MR_bool mdb__help__succeeded = ((MR_tag((MR_Word) mdb__help__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 264 "help.m"
        MR_Word mdb__help__Head_4;
#line 264 "help.m"
        MR_Word mdb__help__Tail_5;
#line 264 "help.m"
        MR_String mdb__help__HeadName_9;
#line 265 "help.m"
        MR_Integer mdb__help__V_8_8;
#line 265 "help.m"
        MR_Word mdb__help__V_10_10;

#line 264 "help.m"
        if (mdb__help__succeeded)
#line 264 "help.m"
          {
#line 264 "help.m"
            mdb__help__Head_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 264 "help.m"
            mdb__help__Tail_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 265 "help.m"
            mdb__help__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Head_4, (MR_Integer) 0)));
#line 265 "help.m"
            mdb__help__HeadName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Head_4, (MR_Integer) 1)));
#line 265 "help.m"
            mdb__help__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Head_4, (MR_Integer) 2)));
#line 266 "help.m"
            mdb__help__succeeded = (strcmp(mdb__help__HeadName_9, mdb__help__Name_6) == 0);
#line 268 "help.m"
            if (mdb__help__succeeded)
#line 267 "help.m"
              {
#line 267 "help.m"
                *mdb__help__Entry_7 = mdb__help__Head_4;
#line 267 "help.m"
                mdb__help__succeeded = MR_TRUE;
#line 267 "help.m"
              }
#line 268 "help.m"
            else
#line 269 "help.m"
              {
#line 269 "help.m"
                /* direct tailcall eliminated */
#line 269 "help.m"
                {
#line 269 "help.m"
                  MR_Word mdb__help__HeadVar__1__tmp_copy_1 = mdb__help__Tail_5;

#line 269 "help.m"
                  mdb__help__HeadVar__1_1 = mdb__help__HeadVar__1__tmp_copy_1;
#line 269 "help.m"
                }
#line 269 "help.m"
                continue;
#line 269 "help.m"
              }
#line 264 "help.m"
          }
#line 264 "help.m"
        return mdb__help__succeeded;
#line 264 "help.m"
      }
#line 264 "help.m"
      break;
#line 264 "help.m"
    }
#line 262 "help.m"
}

#line 246 "help.m"
static void MR_CALL 
mdb__help__print_entry_list_4_p_0(
#line 246 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 246 "help.m"
  MR_Word mdb__help__Stream_2)
#line 246 "help.m"
{
#line 249 "help.m"
  while (MR_TRUE)
#line 249 "help.m"
    {
#line 249 "help.m"
      /* tailcall optimized into a loop */
#line 249 "help.m"
      {
#line 249 "help.m"
        MR_bool mdb__help__succeeded;

#line 249 "help.m"
        if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "help.m"
          {
#line 249 "help.m"
          }
#line 249 "help.m"
        else
#line 250 "help.m"
          {
#line 250 "help.m"
            MR_Word mdb__help__Node_11;
#line 250 "help.m"
            MR_Word mdb__help__Nodes_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "help.m"
            MR_Word mdb__help__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "help.m"
            MR_String mdb__help__Text_23;
#line 250 "help.m"
            MR_Integer mdb__help__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__V_17_17, (MR_Integer) 0)));
#line 250 "help.m"
            MR_String mdb__help__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__V_17_17, (MR_Integer) 1)));
#line 256 "help.m"
            MR_Word mdb__help___Nodes_24;

#line 250 "help.m"
            mdb__help__Node_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__V_17_17, (MR_Integer) 2)));
#line 256 "help.m"
            mdb__help__Text_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Node_11, (MR_Integer) 0)));
#line 256 "help.m"
            mdb__help___Nodes_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Node_11, (MR_Integer) 1)));
#line 257 "help.m"
            {
#line 257 "help.m"
              mercury__io__write_string_4_p_0(mdb__help__Stream_2, mdb__help__Text_23);
            }
#line 252 "help.m"
            /* direct tailcall eliminated */
#line 252 "help.m"
            {
#line 252 "help.m"
              MR_Word mdb__help__HeadVar__1__tmp_copy_1 = mdb__help__Nodes_12;

#line 252 "help.m"
              mdb__help__HeadVar__1_1 = mdb__help__HeadVar__1__tmp_copy_1;
#line 252 "help.m"
            }
#line 252 "help.m"
            continue;
#line 250 "help.m"
          }
#line 249 "help.m"
      }
#line 249 "help.m"
      break;
#line 249 "help.m"
    }
#line 246 "help.m"
}

#line 214 "help.m"
static void MR_CALL 
mdb__help__search_node_7_p_0(
#line 214 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 214 "help.m"
  MR_String mdb__help__Name_10,
#line 214 "help.m"
  MR_Integer mdb__help__STATE_VARIABLE_C_0_14,
#line 214 "help.m"
  MR_Integer * mdb__help__STATE_VARIABLE_C_15,
#line 214 "help.m"
  MR_Word mdb__help__Stream_12)
#line 214 "help.m"
{
#line 217 "help.m"
  {
#line 217 "help.m"
    MR_bool mdb__help__succeeded;
#line 217 "help.m"
    MR_Word mdb__help__SubNodes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "help.m"
    MR_String mdb__help__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__HeadVar__1_1, (MR_Integer) 0)));

#line 218 "help.m"
    {
#line 218 "help.m"
      mdb__help__search_entry_list_7_p_0(mdb__help__SubNodes_9, mdb__help__Name_10, mdb__help__STATE_VARIABLE_C_0_14, mdb__help__STATE_VARIABLE_C_15, mdb__help__Stream_12);
#line 218 "help.m"
      return;
    }
#line 217 "help.m"
  }
#line 214 "help.m"
}

#line 199 "help.m"
static void MR_CALL 
mdb__help__search_entry_list_7_p_0(
#line 199 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 199 "help.m"
  MR_String mdb__help__Name_2,
#line 199 "help.m"
  MR_Integer mdb__help__STATE_VARIABLE_C_0_3,
#line 199 "help.m"
  MR_Integer * mdb__help__STATE_VARIABLE_C_4,
#line 199 "help.m"
  MR_Word mdb__help__Stream_5)
#line 199 "help.m"
{
#line 202 "help.m"
  while (MR_TRUE)
#line 202 "help.m"
    {
#line 202 "help.m"
      /* tailcall optimized into a loop */
#line 202 "help.m"
      {
#line 202 "help.m"
        MR_bool mdb__help__succeeded;

#line 202 "help.m"
        if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 202 "help.m"
          *mdb__help__STATE_VARIABLE_C_4 = mdb__help__STATE_VARIABLE_C_0_3;
#line 202 "help.m"
        else
#line 203 "help.m"
          {
#line 203 "help.m"
            MR_Word mdb__help__Entry_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 203 "help.m"
            MR_Word mdb__help__Tail_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 203 "help.m"
            MR_String mdb__help__EntryName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry_16, (MR_Integer) 1)));
#line 203 "help.m"
            MR_Word mdb__help__Node_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry_16, (MR_Integer) 2)));
#line 204 "help.m"
            MR_Integer mdb__help__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry_16, (MR_Integer) 0)));

#line 205 "help.m"
            mdb__help__succeeded = (strcmp(mdb__help__Name_2, mdb__help__EntryName_23) == 0);
#line 209 "help.m"
            if (mdb__help__succeeded)
#line 207 "help.m"
              {
#line 207 "help.m"
                MR_String mdb__help__Text_39 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Node_24, (MR_Integer) 0)));
#line 256 "help.m"
                MR_Word mdb__help___Nodes_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Node_24, (MR_Integer) 1)));

#line 257 "help.m"
                {
#line 257 "help.m"
                  mercury__io__write_string_4_p_0(mdb__help__Stream_5, mdb__help__Text_39);
                }
#line 208 "help.m"
                *mdb__help__STATE_VARIABLE_C_4 = (mdb__help__STATE_VARIABLE_C_0_3 + (MR_Integer) 1);
#line 207 "help.m"
              }
#line 209 "help.m"
            else
#line 210 "help.m"
              {
#line 210 "help.m"
                MR_Integer mdb__help__STATE_VARIABLE_C_32_32;

#line 210 "help.m"
                {
#line 210 "help.m"
                  mdb__help__search_node_7_p_0(mdb__help__Node_24, mdb__help__Name_2, mdb__help__STATE_VARIABLE_C_0_3, &mdb__help__STATE_VARIABLE_C_32_32, mdb__help__Stream_5);
                }
#line 211 "help.m"
                /* direct tailcall eliminated */
#line 211 "help.m"
                {
#line 211 "help.m"
                  MR_Word mdb__help__HeadVar__1__tmp_copy_1 = mdb__help__Tail_17;
#line 211 "help.m"
                  MR_Integer mdb__help__STATE_VARIABLE_C_0__tmp_copy_3 = mdb__help__STATE_VARIABLE_C_32_32;

#line 211 "help.m"
                  mdb__help__STATE_VARIABLE_C_0_3 = mdb__help__STATE_VARIABLE_C_0__tmp_copy_3;
#line 211 "help.m"
                  mdb__help__HeadVar__1_1 = mdb__help__HeadVar__1__tmp_copy_1;
#line 211 "help.m"
                }
#line 211 "help.m"
                continue;
#line 210 "help.m"
              }
#line 203 "help.m"
          }
#line 202 "help.m"
      }
#line 202 "help.m"
      break;
#line 202 "help.m"
    }
#line 199 "help.m"
}

#line 170 "help.m"
static void MR_CALL 
mdb__help__insert_into_entry_list_5_p_0(
#line 170 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 170 "help.m"
  MR_Integer mdb__help__Index_2,
#line 170 "help.m"
  MR_String mdb__help__Name_3,
#line 170 "help.m"
  MR_Word mdb__help__Node_4,
#line 170 "help.m"
  MR_Word * mdb__help__HeadVar__5_5)
#line 170 "help.m"
{
#line 173 "help.m"
  {
#line 173 "help.m"
    MR_bool mdb__help__succeeded;

#line 173 "help.m"
    if ((mdb__help__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "help.m"
      {
#line 173 "help.m"
        MR_Word mdb__help__Entry_9;

#line 174 "help.m"
        {
#line 174 "help.m"
          mdb__help__Entry_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 174 "help.m"
          MR_hl_field(MR_mktag(0), mdb__help__Entry_9, 0) = ((MR_Box) (mdb__help__Index_2));
#line 174 "help.m"
          MR_hl_field(MR_mktag(0), mdb__help__Entry_9, 1) = ((MR_Box) (mdb__help__Name_3));
#line 174 "help.m"
          MR_hl_field(MR_mktag(0), mdb__help__Entry_9, 2) = ((MR_Box) (mdb__help__Node_4));
#line 174 "help.m"
        }
#line 173 "help.m"
        {
#line 173 "help.m"
          MR_Word base;
#line 173 "help.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "help.m"
          *mdb__help__HeadVar__5_5 = base;
#line 173 "help.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Entry_9));
#line 173 "help.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "help.m"
        }
#line 173 "help.m"
      }
#line 173 "help.m"
    else
#line 175 "help.m"
      {
#line 175 "help.m"
        MR_Word mdb__help__Head_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 175 "help.m"
        MR_Word mdb__help__Tail_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 1)));
#line 175 "help.m"
        MR_Integer mdb__help__HeadIndex_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Head_11, (MR_Integer) 0)));
#line 176 "help.m"
        MR_String mdb__help__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Head_11, (MR_Integer) 1)));
#line 176 "help.m"
        MR_Word mdb__help__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Head_11, (MR_Integer) 2)));

#line 177 "help.m"
        mdb__help__succeeded = (mdb__help__HeadIndex_17 < mdb__help__Index_2);
#line 180 "help.m"
        if (mdb__help__succeeded)
#line 178 "help.m"
          {
#line 178 "help.m"
            MR_Word mdb__help__NewTail_20;

#line 178 "help.m"
            {
#line 178 "help.m"
              mdb__help__insert_into_entry_list_5_p_0(mdb__help__Tail_12, mdb__help__Index_2, mdb__help__Name_3, mdb__help__Node_4, &mdb__help__NewTail_20);
            }
#line 179 "help.m"
            {
#line 179 "help.m"
              MR_Word base;
#line 179 "help.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "help.m"
              *mdb__help__HeadVar__5_5 = base;
#line 179 "help.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Head_11));
#line 179 "help.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__NewTail_20));
#line 179 "help.m"
            }
#line 178 "help.m"
          }
#line 180 "help.m"
        else
#line 181 "help.m"
          {
#line 181 "help.m"
            MR_Word mdb__help__Entry_21;

#line 181 "help.m"
            {
#line 181 "help.m"
              mdb__help__Entry_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 181 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__Entry_21, 0) = ((MR_Box) (mdb__help__Index_2));
#line 181 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__Entry_21, 1) = ((MR_Box) (mdb__help__Name_3));
#line 181 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__Entry_21, 2) = ((MR_Box) (mdb__help__Node_4));
#line 181 "help.m"
            }
#line 182 "help.m"
            {
#line 182 "help.m"
              MR_Word base;
#line 182 "help.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "help.m"
              *mdb__help__HeadVar__5_5 = base;
#line 182 "help.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Entry_21));
#line 182 "help.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__help__HeadVar__1_1));
#line 182 "help.m"
            }
#line 181 "help.m"
          }
#line 175 "help.m"
      }
#line 173 "help.m"
  }
#line 170 "help.m"
}

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_1(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg)
#line 154 "help.m"
{
#line 154 "help.m"
  {
#line 154 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 154 "help.m"
    MR_builtin_longjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_0, 1);
#line 154 "help.m"
  }
#line 154 "help.m"
}

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_3(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg)
#line 154 "help.m"
{
#line 154 "help.m"
  {
#line 154 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 154 "help.m"
    (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33 = ((MR_Word) (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33);
#line 154 "help.m"
    {
#line 154 "help.m"
      mdb__help__add_node_7_p_0_2(mdb__help__env_ptr);
#line 154 "help.m"
      return;
    }
#line 154 "help.m"
  }
#line 154 "help.m"
}

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_2(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg)
#line 154 "help.m"
{
#line 154 "help.m"
  {
#line 154 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 154 "help.m"
    {
#line 155 "help.m"
      MR_String mdb__help__V_34_34;
#line 155 "help.m"
      MR_Word mdb__help__V_35_35;

#line 155 "help.m"
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 0)));
#line 155 "help.m"
      mdb__help__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 1)));
#line 155 "help.m"
      mdb__help__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_33, (MR_Integer) 2)));
#line 155 "help.m"
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = ((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Index_3 == (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_44_44);
#line 155 "help.m"
      if ((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded)
#line 155 "help.m"
        {
#line 155 "help.m"
          mdb__help__add_node_7_p_0_1(mdb__help__env_ptr);
#line 155 "help.m"
          return;
        }
#line 154 "help.m"
    }
#line 154 "help.m"
  }
#line 154 "help.m"
}

#line 154 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_4(
#line 154 "help.m"
  void * mdb__help__env_ptr_arg)
#line 154 "help.m"
{
#line 154 "help.m"
  {
#line 154 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 154 "help.m"
    if (MR_builtin_setjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_0) == 0)
#line 154 "help.m"
      {
#line 154 "help.m"
        {
#line 154 "help.m"
          {
#line 154 "help.m"
            mercury__list__member_2_p_1((MR_Word) &mdb__help__mdb__help__type_ctor_info_entry_0, &(mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv0_Entry1_33, (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__add_node_7_p_0_3, mdb__help__env_ptr);
          }
#line 154 "help.m"
        }
#line 154 "help.m"
        (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_FALSE;
#line 154 "help.m"
      }
#line 154 "help.m"
    else
#line 154 "help.m"
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_TRUE;
#line 154 "help.m"
  }
#line 154 "help.m"
}

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_5(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg)
#line 160 "help.m"
{
#line 160 "help.m"
  {
#line 160 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 160 "help.m"
    MR_builtin_longjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_1, 1);
#line 160 "help.m"
  }
#line 160 "help.m"
}

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_7(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg)
#line 160 "help.m"
{
#line 160 "help.m"
  {
#line 160 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 160 "help.m"
    (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40 = ((MR_Word) (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40);
#line 160 "help.m"
    {
#line 160 "help.m"
      mdb__help__add_node_7_p_0_6(mdb__help__env_ptr);
#line 160 "help.m"
      return;
    }
#line 160 "help.m"
  }
#line 160 "help.m"
}

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_6(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg)
#line 160 "help.m"
{
#line 160 "help.m"
  {
#line 160 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 160 "help.m"
    {
#line 161 "help.m"
      MR_Integer mdb__help__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 0)));
#line 161 "help.m"
      MR_Word mdb__help__V_37_37;

#line 161 "help.m"
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 1)));
#line 161 "help.m"
      mdb__help__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Entry1_40, (MR_Integer) 2)));
#line 161 "help.m"
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = (strcmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Name_4, (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__V_45_45) == 0);
#line 161 "help.m"
      if ((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded)
#line 161 "help.m"
        {
#line 161 "help.m"
          mdb__help__add_node_7_p_0_5(mdb__help__env_ptr);
#line 161 "help.m"
          return;
        }
#line 160 "help.m"
    }
#line 160 "help.m"
  }
#line 160 "help.m"
}

#line 160 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0_8(
#line 160 "help.m"
  void * mdb__help__env_ptr_arg)
#line 160 "help.m"
{
#line 160 "help.m"
  {
#line 160 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s * mdb__help__env_ptr = (struct mdb__help__add_node_7_p_0_env_0_s *) mdb__help__env_ptr_arg;

#line 160 "help.m"
    if (MR_builtin_setjmp((mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__commit_1) == 0)
#line 160 "help.m"
      {
#line 160 "help.m"
        {
#line 160 "help.m"
          {
#line 160 "help.m"
            mercury__list__member_2_p_1((MR_Word) &mdb__help__mdb__help__type_ctor_info_entry_0, &(mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__conv1_Entry1_40, (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__add_node_7_p_0_7, mdb__help__env_ptr);
          }
#line 160 "help.m"
        }
#line 160 "help.m"
        (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_FALSE;
#line 160 "help.m"
      }
#line 160 "help.m"
    else
#line 160 "help.m"
      (mdb__help__env_ptr)->mdb__help__add_node_7_p_0_env_0__succeeded = MR_TRUE;
#line 160 "help.m"
  }
#line 160 "help.m"
}

#line 136 "help.m"
static void MR_CALL 
mdb__help__add_node_7_p_0(
#line 136 "help.m"
  MR_Word mdb__help__Nodes0_1,
#line 136 "help.m"
  MR_Word mdb__help__HeadVar__2_2,
#line 136 "help.m"
  MR_Integer mdb__help__Index_3,
#line 136 "help.m"
  MR_String mdb__help__Name_4,
#line 136 "help.m"
  MR_Word mdb__help__HeadVar__5_5,
#line 136 "help.m"
  MR_Word * mdb__help__Res_6,
#line 136 "help.m"
  MR_Word * mdb__help__Nodes_7)
#line 136 "help.m"
{
#line 136 "help.m"
  {
#line 136 "help.m"
    struct mdb__help__add_node_7_p_0_env_0_s mdb__help__env;

#line 136 "help.m"
    (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1 = mdb__help__Nodes0_1;
#line 136 "help.m"
    (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Index_3 = mdb__help__Index_3;
#line 136 "help.m"
    (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Name_4 = mdb__help__Name_4;
#line 139 "help.m"
    if ((mdb__help__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 159 "help.m"
      {
#line 154 "help.m"
        {
#line 154 "help.m"
          mdb__help__add_node_7_p_0_4(&mdb__help__env);
        }
#line 159 "help.m"
        if ((mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded)
#line 157 "help.m"
          {
#line 157 "help.m"
            *mdb__help__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[1]);
#line 158 "help.m"
            *mdb__help__Nodes_7 = (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
#line 157 "help.m"
          }
#line 159 "help.m"
        else
#line 165 "help.m"
          {
#line 160 "help.m"
            {
#line 160 "help.m"
              mdb__help__add_node_7_p_0_8(&mdb__help__env);
            }
#line 165 "help.m"
            if ((mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded)
#line 163 "help.m"
              {
#line 163 "help.m"
                *mdb__help__Res_6 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[2]);
#line 164 "help.m"
                *mdb__help__Nodes_7 = (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
#line 163 "help.m"
              }
#line 165 "help.m"
            else
#line 166 "help.m"
              {
#line 166 "help.m"
                *mdb__help__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 167 "help.m"
                {
#line 167 "help.m"
                  mdb__help__insert_into_entry_list_5_p_0((mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Index_3, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Name_4, mdb__help__HeadVar__5_5, mdb__help__Nodes_7);
#line 167 "help.m"
                  return;
                }
#line 166 "help.m"
              }
#line 165 "help.m"
          }
#line 159 "help.m"
      }
#line 139 "help.m"
    else
#line 139 "help.m"
      {
#line 139 "help.m"
        MR_String mdb__help__Step_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "help.m"
        MR_Word mdb__help__Steps_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__2_2, (MR_Integer) 1)));
#line 147 "help.m"
        MR_Word mdb__help__Entry0_16;

#line 140 "help.m"
        {
#line 140 "help.m"
          (mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded = mdb__help__one_path_step_3_p_0((mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__Step_9, &mdb__help__Entry0_16);
        }
#line 147 "help.m"
        if ((mdb__help__env).mdb__help__add_node_7_p_0_env_0__succeeded)
#line 141 "help.m"
          {
#line 141 "help.m"
            MR_Integer mdb__help__EntryIndex_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry0_16, (MR_Integer) 0)));
#line 141 "help.m"
            MR_String mdb__help__EntryName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry0_16, (MR_Integer) 1)));
#line 141 "help.m"
            MR_Word mdb__help__EntryNode0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry0_16, (MR_Integer) 2)));
#line 141 "help.m"
            MR_String mdb__help__Text_20 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode0_19, (MR_Integer) 0)));
#line 141 "help.m"
            MR_Word mdb__help__SubNodes0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode0_19, (MR_Integer) 1)));
#line 141 "help.m"
            MR_Word mdb__help__SubNodes_22;
#line 141 "help.m"
            MR_Word mdb__help__EntryNode_23;
#line 141 "help.m"
            MR_Word mdb__help__Entry_24;

#line 143 "help.m"
            {
#line 143 "help.m"
              mdb__help__add_node_7_p_0(mdb__help__SubNodes0_21, mdb__help__Steps_10, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Index_3, (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Name_4, mdb__help__HeadVar__5_5, mdb__help__Res_6, &mdb__help__SubNodes_22);
            }
#line 144 "help.m"
            {
#line 144 "help.m"
              mdb__help__EntryNode_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__EntryNode_23, 0) = ((MR_Box) (mdb__help__Text_20));
#line 144 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__EntryNode_23, 1) = ((MR_Box) (mdb__help__SubNodes_22));
#line 144 "help.m"
            }
#line 145 "help.m"
            {
#line 145 "help.m"
              mdb__help__Entry_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 145 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__Entry_24, 0) = ((MR_Box) (mdb__help__EntryIndex_17));
#line 145 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__Entry_24, 1) = ((MR_Box) (mdb__help__EntryName_18));
#line 145 "help.m"
              MR_hl_field(MR_mktag(0), mdb__help__Entry_24, 2) = ((MR_Box) (mdb__help__EntryNode_23));
#line 145 "help.m"
            }
#line 146 "help.m"
            {
#line 146 "help.m"
              mdb__help__replace_entry_3_p_0((mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1, mdb__help__Entry_24, mdb__help__Nodes_7);
#line 146 "help.m"
              return;
            }
#line 141 "help.m"
          }
#line 147 "help.m"
        else
#line 148 "help.m"
          {
#line 148 "help.m"
            MR_String mdb__help__Msg_25;

#line 148 "help.m"
            {
#line 148 "help.m"
              mercury__string__append_3_p_2((MR_String) "invalid path component ", mdb__help__Step_9, &mdb__help__Msg_25);
            }
#line 149 "help.m"
            {
#line 149 "help.m"
              MR_Word base;
#line 149 "help.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 149 "help.m"
              *mdb__help__Res_6 = base;
#line 149 "help.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Msg_25));
#line 149 "help.m"
            }
#line 150 "help.m"
            *mdb__help__Nodes_7 = (mdb__help__env).mdb__help__add_node_7_p_0_env_0__Nodes0_1;
#line 148 "help.m"
          }
#line 139 "help.m"
      }
#line 136 "help.m"
  }
#line 136 "help.m"
}

#line 80 "help.m"
MR_bool MR_CALL 
mdb__help__result_is_error_2_p_0(
#line 80 "help.m"
  MR_Word mdb__help__HeadVar__1_1,
#line 80 "help.m"
  MR_String * mdb__help__Msg_3)
#line 80 "help.m"
{
#line 292 "help.m"
  {
#line 292 "help.m"
    MR_bool mdb__help__succeeded = ((MR_tag((MR_Word) mdb__help__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 292 "help.m"
    if (mdb__help__succeeded)
#line 292 "help.m"
      *mdb__help__Msg_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__HeadVar__1_1, (MR_Integer) 0)));
#line 292 "help.m"
    return mdb__help__succeeded;
#line 292 "help.m"
  }
#line 80 "help.m"
}

#line 76 "help.m"
void MR_CALL 
mdb__help__help_system_type_1_p_0(
#line 76 "help.m"
  MR_Word * mdb__help__Type_2)
#line 76 "help.m"
{
#line 288 "help.m"
  {
#line 288 "help.m"
    MR_bool mdb__help__succeeded;
#line 290 "help.m"
    MR_Word mdb__help__V_5_5;

#line 290 "help.m"
    {
#line 290 "help.m"
      *mdb__help__Type_2 = mercury__type_desc__type_of_1_f_0((MR_Word) &mdb__help_scalar_common_1[0]);
    }
#line 288 "help.m"
  }
#line 76 "help.m"
}

#line 69 "help.m"
void MR_CALL 
mdb__help__name_5_p_0(
#line 69 "help.m"
  MR_Word mdb__help__Sys_6,
#line 69 "help.m"
  MR_String mdb__help__Name_7,
#line 69 "help.m"
  MR_Word mdb__help__Stream_8)
#line 69 "help.m"
{
#line 190 "help.m"
  {
#line 190 "help.m"
    MR_bool mdb__help__succeeded;
#line 190 "help.m"
    MR_Integer mdb__help__Count_10;

#line 191 "help.m"
    {
#line 191 "help.m"
      mdb__help__search_entry_list_7_p_0(mdb__help__Sys_6, mdb__help__Name_7, (MR_Integer) 0, &mdb__help__Count_10, mdb__help__Stream_8);
    }
#line 192 "help.m"
    mdb__help__succeeded = (mdb__help__Count_10 == (MR_Integer) 0);
#line 195 "help.m"
    if (mdb__help__succeeded)
#line 193 "help.m"
      {
#line 193 "help.m"
        {
#line 193 "help.m"
          mercury__io__write_string_3_p_0((MR_String) "There is no such help topic.\n");
        }
#line 188 "help.m"
        {
#line 188 "help.m"
          mdb__help__print_entry_list_4_p_0(mdb__help__Sys_6, mdb__help__Stream_8);
#line 188 "help.m"
          return;
        }
#line 193 "help.m"
      }
#line 195 "help.m"
    else
#line 195 "help.m"
      {
#line 195 "help.m"
      }
#line 190 "help.m"
  }
#line 69 "help.m"
}

#line 63 "help.m"
void MR_CALL 
mdb__help__path_6_p_0(
#line 63 "help.m"
  MR_Word mdb__help__Entries_7,
#line 63 "help.m"
  MR_Word mdb__help__Path_8,
#line 63 "help.m"
  MR_Word mdb__help__Stream_9,
#line 63 "help.m"
  MR_Word * mdb__help__Result_10)
#line 63 "help.m"
{
#line 222 "help.m"
  while (MR_TRUE)
#line 222 "help.m"
    {
#line 222 "help.m"
      /* tailcall optimized into a loop */
#line 222 "help.m"
      {
#line 222 "help.m"
        MR_bool mdb__help__succeeded;

#line 222 "help.m"
        if ((mdb__help__Path_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 240 "help.m"
          {
#line 241 "help.m"
            *mdb__help__Result_10 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__help_scalar_common_2[0]);
#line 240 "help.m"
          }
#line 222 "help.m"
        else
#line 222 "help.m"
          {
#line 222 "help.m"
            MR_String mdb__help__Step_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__help__Path_8, (MR_Integer) 0)));
#line 222 "help.m"
            MR_Word mdb__help__Tail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__help__Path_8, (MR_Integer) 1)));
#line 235 "help.m"
            MR_Word mdb__help__Entry_14;

#line 223 "help.m"
            {
#line 223 "help.m"
              mdb__help__succeeded = mdb__help__one_path_step_3_p_0(mdb__help__Entries_7, mdb__help__Step_12, &mdb__help__Entry_14);
            }
#line 235 "help.m"
            if (mdb__help__succeeded)
#line 224 "help.m"
              {
#line 224 "help.m"
                MR_Word mdb__help__EntryNode_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__Entry_14, (MR_Integer) 2)));
#line 224 "help.m"
                MR_Word mdb__help__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode_17, (MR_Integer) 1)));
#line 224 "help.m"
                MR_String mdb__help__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__EntryNode_17, (MR_Integer) 0)));
#line 224 "help.m"
                MR_Integer mdb__help__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__help__Entry_14, (MR_Integer) 0)));
#line 224 "help.m"
                MR_String mdb__help__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__help__Entry_14, (MR_Integer) 1)));

#line 230 "help.m"
                if ((mdb__help__Tail_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "help.m"
                  {
#line 228 "help.m"
                    {
#line 228 "help.m"
                      mercury__io__write_string_4_p_0(mdb__help__Stream_9, mdb__help__V_34_34);
                    }
#line 229 "help.m"
                    *mdb__help__Result_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 226 "help.m"
                  }
#line 230 "help.m"
                else
#line 233 "help.m"
                  {
#line 233 "help.m"
                    /* direct tailcall eliminated */
#line 233 "help.m"
                    {
#line 233 "help.m"
                      MR_Word mdb__help__Entries__tmp_copy_7 = mdb__help__V_33_33;
#line 233 "help.m"
                      MR_Word mdb__help__Path__tmp_copy_8 = mdb__help__Tail_13;

#line 233 "help.m"
                      mdb__help__Path_8 = mdb__help__Path__tmp_copy_8;
#line 233 "help.m"
                      mdb__help__Entries_7 = mdb__help__Entries__tmp_copy_7;
#line 233 "help.m"
                    }
#line 233 "help.m"
                    continue;
#line 233 "help.m"
                  }
#line 224 "help.m"
              }
#line 235 "help.m"
            else
#line 236 "help.m"
              {
#line 236 "help.m"
                MR_String mdb__help__Msg_24;
#line 236 "help.m"
                MR_String mdb__help__V_31_31;

#line 236 "help.m"
                {
#line 236 "help.m"
                  mdb__help__V_31_31 = mercury__string__f_43_43_2_f_0(mdb__help__Step_12, (MR_String) "\"");
                }
#line 236 "help.m"
                {
#line 236 "help.m"
                  mdb__help__Msg_24 = mercury__string__f_43_43_2_f_0((MR_String) "error at path component \"", mdb__help__V_31_31);
                }
#line 237 "help.m"
                {
#line 237 "help.m"
                  MR_Word base;
#line 237 "help.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 237 "help.m"
                  *mdb__help__Result_10 = base;
#line 237 "help.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__help__Msg_24));
#line 237 "help.m"
                }
#line 236 "help.m"
              }
#line 222 "help.m"
          }
#line 222 "help.m"
      }
#line 222 "help.m"
      break;
#line 222 "help.m"
    }
#line 63 "help.m"
}

#line 58 "help.m"
void MR_CALL 
mdb__help__help_4_p_0(
#line 58 "help.m"
  MR_Word mdb__help__Sys_5,
#line 58 "help.m"
  MR_Word mdb__help__Stream_6)
#line 58 "help.m"
{
#line 188 "help.m"
  {
#line 188 "help.m"
    MR_bool mdb__help__succeeded;

#line 188 "help.m"
    {
#line 188 "help.m"
      mdb__help__print_entry_list_4_p_0(mdb__help__Sys_5, mdb__help__Stream_6);
#line 188 "help.m"
      return;
    }
#line 188 "help.m"
  }
#line 58 "help.m"
}

#line 52 "help.m"
void MR_CALL 
mdb__help__add_help_node_7_p_0(
#line 52 "help.m"
  MR_Word mdb__help__Sys0_8,
#line 52 "help.m"
  MR_Word mdb__help__Path_9,
#line 52 "help.m"
  MR_Integer mdb__help__Index_10,
#line 52 "help.m"
  MR_String mdb__help__Name_11,
#line 52 "help.m"
  MR_String mdb__help__Text_12,
#line 52 "help.m"
  MR_Word * mdb__help__Res_13,
#line 52 "help.m"
  MR_Word * mdb__help__Sys_14)
#line 52 "help.m"
{
#line 132 "help.m"
  {
#line 132 "help.m"
    MR_bool mdb__help__succeeded;
#line 132 "help.m"
    MR_Word mdb__help__Node_15;

#line 133 "help.m"
    {
#line 133 "help.m"
      mdb__help__Node_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 133 "help.m"
      MR_hl_field(MR_mktag(0), mdb__help__Node_15, 0) = ((MR_Box) (mdb__help__Text_12));
#line 133 "help.m"
      MR_hl_field(MR_mktag(0), mdb__help__Node_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 133 "help.m"
    }
#line 134 "help.m"
    {
#line 134 "help.m"
      mdb__help__add_node_7_p_0(mdb__help__Sys0_8, mdb__help__Path_9, mdb__help__Index_10, mdb__help__Name_11, mdb__help__Node_15, mdb__help__Res_13, mdb__help__Sys_14);
#line 134 "help.m"
      return;
    }
#line 132 "help.m"
  }
#line 52 "help.m"
}

#line 45 "help.m"
void MR_CALL 
mdb__help__init_1_p_0(
#line 45 "help.m"
  MR_Word * mdb__help__HeadVar__1_1)
#line 45 "help.m"
{
#line 130 "help.m"
  {
#line 130 "help.m"
    MR_bool mdb__help__succeeded;

#line 130 "help.m"
    *mdb__help__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 130 "help.m"
  }
#line 45 "help.m"
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
