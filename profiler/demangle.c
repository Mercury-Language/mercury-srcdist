/*
** Automatically generated from `demangle.m'
** by the Mercury compiler,
** version rotd-2026-08-15
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


// :- module demangle.
// :- implementation.

/*
INIT mercury__demangle__init
ENDINIT
*/

#include "demangle.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s {
  MR_Word demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6;
  MR_String demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
  MR_bool demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded;
  jmp_buf demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0;
  MR_String demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9;
  MR_Box demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9;
};


static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_0;

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_1;

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_2;

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_3;

static const MR_EnumFunctorDescPtr demangle__demangle__enum_ordinal_ordered_data_category_0[4];

static const MR_EnumFunctorDescPtr demangle__demangle__enum_name_ordered_data_category_0[4];

static const MR_Integer demangle__demangle__functor_number_map_data_category_0[4];

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_0;

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_1;

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_2;

static const MR_PseudoTypeInfo demangle__demangle__field_types_introduced_pred_type_0_3[1];

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_3;

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_0[3];

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_1[1];

static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_introduced_pred_type_0[2];

static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_introduced_pred_type_0[4];

static const MR_Integer demangle__demangle__functor_number_map_introduced_pred_type_0[4];

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_0;

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_1;

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_2;

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_3;

static const MR_PseudoTypeInfo demangle__demangle__field_types_pred_category_0_4[4];

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_4;

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_0[4];

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_1[1];

static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_pred_category_0[2];

static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_pred_category_0[5];

static const MR_Integer demangle__demangle__functor_number_map_pred_category_0[5];

static void MR_CALL 
demangle____Compare____pred_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
demangle____Compare____data_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9);

static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
  MR_Integer Num_5,
  MR_String * FormattedArgs_6,
  MR_String STATE_VARIABLE_Str_0_13,
  MR_String * STATE_VARIABLE_Str_14);

static MR_bool MR_CALL 
demangle__demangle_data_2_p_0(
  MR_String STATE_VARIABLE_Str_0_11,
  MR_String * STATE_VARIABLE_Str_12);

static MR_bool MR_CALL 
demangle__format_data_5_p_0(
  MR_Word Category_6,
  MR_Word MaybeModule_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_String * Result_10);

static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
  MR_String STATE_VARIABLE_Str_0_20,
  MR_String * STATE_VARIABLE_Str_21);

static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
  MR_Integer * Int_4,
  MR_String STATE_VARIABLE_String_0_8,
  MR_String * STATE_VARIABLE_String_9);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
  MR_Word * MaybeModule_5,
  MR_Word StringsToStopAt_6,
  MR_String String0_7,
  MR_String * String_8);

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
  MR_String STATE_VARIABLE_Str_0_4,
  MR_String * STATE_VARIABLE_Str_5);

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
  MR_String STATE_VARIABLE_Str_0_6,
  MR_String * STATE_VARIABLE_Str_7);

static void MR_CALL 
demangle__format_proc_10_p_0(
  MR_Word Category_11,
  MR_Word MaybeModule_12,
  MR_String PredOrFunc_13,
  MR_String PredName_14,
  MR_Integer Arity_15,
  MR_Integer ModeNum_16,
  MR_Word HigherOrder_17,
  MR_Word UnusedArgs_18,
  MR_Word MaybeInternalLabelNum_19,
  MR_String * DemangledName_20);

static void MR_CALL 
demangle__format_maybe_module_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_2,
  MR_String * QualifiedName_3);

static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
  MR_String * PredName_6,
  MR_Word Category0_7,
  MR_Word * Category_8,
  MR_String STATE_VARIABLE_Str_0_21,
  MR_String * STATE_VARIABLE_Str_22);

static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
  MR_Integer NumBrackets0_6,
  MR_Integer Length_7,
  MR_String String_8,
  MR_Integer Index0_9,
  MR_Integer * Index_10);

static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
  MR_Integer Int0_5,
  MR_Integer * Int_6,
  MR_String STATE_VARIABLE_Str_0_10,
  MR_String * STATE_VARIABLE_Str_11);

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box demangle_scalar_common_1[16][2];

static /* final */ const MR_Box demangle_scalar_common_2[2][1];




static /* final */ const MR_Box demangle_scalar_common_1[16][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "UnusedArgs__")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   1 */
  {
    ((MR_Box) ((MR_String) "TypeSpecOf__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[0])))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_String) "AccFrom__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[1])))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_String) "DeforestationIn__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[2])))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_String) "IntroducedFrom__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[3])))
  },
  /* row   5 */
  {
    ((MR_Box) ((MR_String) "__")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_String) "UnusedArgs__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[5])))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_String) "TypeSpecOf__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_String) "AccFrom__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_String) "DeforestationIn__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[8])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_String) "IntroducedFrom__")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[9])))
  },
  /* row  11 */
  {
    ((MR_Box) ((MR_String) "common_")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  12 */
  {
    ((MR_Box) ((MR_String) "type_ctor_functors_")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[11])))
  },
  /* row  13 */
  {
    ((MR_Box) ((MR_String) "type_ctor_layout_")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[12])))
  },
  /* row  14 */
  {
    ((MR_Box) ((MR_String) "type_ctor_info_")),
    ((MR_Box) (MR_mkword(1, &demangle_scalar_common_1[13])))
  },
  /* row  15 */
  {
    ((MR_Box) ((MR_String) "arity")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box demangle_scalar_common_2[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "")) },
  /* row   1 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};



#include "array.mh"


static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_0 = {
  (MR_String) "common",
  INT32_C(0)
};

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_1 = {
  (MR_String) "info",
  INT32_C(1)
};

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_2 = {
  (MR_String) "layout",
  INT32_C(2)
};

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_3 = {
  (MR_String) "functors",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr demangle__demangle__enum_ordinal_ordered_data_category_0[4] = {
  &demangle__demangle__enum_functor_desc_data_category_0_0,
  &demangle__demangle__enum_functor_desc_data_category_0_1,
  &demangle__demangle__enum_functor_desc_data_category_0_2,
  &demangle__demangle__enum_functor_desc_data_category_0_3
};

static const MR_EnumFunctorDescPtr demangle__demangle__enum_name_ordered_data_category_0[4] = {
  &demangle__demangle__enum_functor_desc_data_category_0_0,
  &demangle__demangle__enum_functor_desc_data_category_0_3,
  &demangle__demangle__enum_functor_desc_data_category_0_1,
  &demangle__demangle__enum_functor_desc_data_category_0_2
};

static const MR_Integer demangle__demangle__functor_number_map_data_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct demangle__demangle__type_ctor_info_data_category_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (demangle____Unify____data_category_0_0_10001)),
  ((MR_Box) (demangle____Compare____data_category_0_0_10001)),
  (MR_String) "demangle",
  (MR_String) "data_category",
  { demangle__demangle__enum_name_ordered_data_category_0 },
  { demangle__demangle__enum_ordinal_ordered_data_category_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  demangle__demangle__functor_number_map_data_category_0,

};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_0 = {
  (MR_String) "ipt_lambda",
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

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_1 = {
  (MR_String) "ipt_deforestation",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_2 = {
  (MR_String) "ipt_accumulator",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo demangle__demangle__field_types_introduced_pred_type_0_3[1] = { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) };

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_3 = {
  (MR_String) "ipt_type_spec",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(3),
  demangle__demangle__field_types_introduced_pred_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_0[3] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_0,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_1,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_2
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_1[1] = { &demangle__demangle__du_functor_desc_introduced_pred_type_0_3 };

static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_introduced_pred_type_0[2] = {
  {
    UINT32_C(3),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    demangle__demangle__du_stag_ordered_introduced_pred_type_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    demangle__demangle__du_stag_ordered_introduced_pred_type_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_introduced_pred_type_0[4] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_2,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_1,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_0,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_3
};

static const MR_Integer demangle__demangle__functor_number_map_introduced_pred_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct demangle__demangle__type_ctor_info_introduced_pred_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (demangle____Unify____introduced_pred_type_0_0_10001)),
  ((MR_Box) (demangle____Compare____introduced_pred_type_0_0_10001)),
  (MR_String) "demangle",
  (MR_String) "introduced_pred_type",
  { demangle__demangle__du_name_ordered_introduced_pred_type_0 },
  { demangle__demangle__du_ptag_ordered_introduced_pred_type_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  demangle__demangle__functor_number_map_introduced_pred_type_0,

};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_0 = {
  (MR_String) "index",
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

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_1 = {
  (MR_String) "unify",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_2 = {
  (MR_String) "compare",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(2),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_3 = {
  (MR_String) "ordinary",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo demangle__demangle__field_types_pred_category_0_4[4] = {
  (MR_PseudoTypeInfo) (&demangle__demangle__type_ctor_info_introduced_pred_type_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_4 = {
  (MR_String) "introduced",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(4),
  demangle__demangle__field_types_pred_category_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_0[4] = {
  &demangle__demangle__du_functor_desc_pred_category_0_0,
  &demangle__demangle__du_functor_desc_pred_category_0_1,
  &demangle__demangle__du_functor_desc_pred_category_0_2,
  &demangle__demangle__du_functor_desc_pred_category_0_3
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_1[1] = { &demangle__demangle__du_functor_desc_pred_category_0_4 };

static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_pred_category_0[2] = {
  {
    UINT32_C(4),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    demangle__demangle__du_stag_ordered_pred_category_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    demangle__demangle__du_stag_ordered_pred_category_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_pred_category_0[5] = {
  &demangle__demangle__du_functor_desc_pred_category_0_2,
  &demangle__demangle__du_functor_desc_pred_category_0_0,
  &demangle__demangle__du_functor_desc_pred_category_0_4,
  &demangle__demangle__du_functor_desc_pred_category_0_3,
  &demangle__demangle__du_functor_desc_pred_category_0_1
};

static const MR_Integer demangle__demangle__functor_number_map_pred_category_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct demangle__demangle__type_ctor_info_pred_category_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (demangle____Unify____pred_category_0_0_10001)),
  ((MR_Box) (demangle____Compare____pred_category_0_0_10001)),
  (MR_String) "demangle",
  (MR_String) "pred_category",
  { demangle__demangle__du_name_ordered_pred_category_0 },
  { demangle__demangle__du_ptag_ordered_pred_category_0 },
  (MR_Integer) 5,
  UINT16_C(12),
  demangle__demangle__functor_number_map_pred_category_0,

};

static void MR_CALL 
demangle____Compare____pred_category_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 3:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
              MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
              MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 1))));
              MR_Integer ArgX3_10 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
              MR_Integer ArgY3_11 = ((MR_Integer) ((MR_hl_field(1, HeadVar__3_3, 2))));
              MR_String ArgX4_13 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 3))));
              MR_String ArgY4_14 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 3))));
              MR_Word SubResult1_6;

              demangle____Compare____introduced_pred_type_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
              succeeded = (SubResult1_6 != (MR_Integer) 0);
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
                    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
                }
              }
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_13 == CastY_14);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_12 == CastX_11);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;
          MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 1))));
          MR_Integer ArgY2_6;
          MR_Integer ArgX3_7 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, 2))));
          MR_Integer ArgY3_8;
          MR_String ArgX4_9 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 3))));
          MR_String ArgY4_10;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
            ArgY2_6 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 1))));
            ArgY3_8 = ((MR_Integer) ((MR_hl_field(1, HeadVar__2_2, 2))));
            ArgY4_10 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 3))));
            succeeded = demangle____Unify____introduced_pred_type_0_0(ArgX1_3, ArgY1_4);
            if (succeeded)
            {
              succeeded = (ArgX2_5 == ArgY2_6);
              if (succeeded)
              {
                succeeded = (ArgX3_7 == ArgY3_8);
                if (succeeded)
                  succeeded = (strcmp(ArgX4_9, ArgY4_10) == 0);
              }
            }
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 2:
            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 0;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
              MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(1, HeadVar__3_3, 0))));

              mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
            }
            break;
        }
        break;
    }
}

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0(
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
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_6 == CastX_5);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
          MR_String ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_4 = ((MR_String) ((MR_hl_field(1, HeadVar__2_2, 0))));
            succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
          }
        }
        break;
    }
  return succeeded;
}

static void MR_CALL 
demangle____Compare____data_category_0_0(
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

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
demangle__demangle_2_p_0(
  MR_String MangledName_3,
  MR_String * Name_4)
{
  MR_bool succeeded;
  MR_String DemangledName_5;
  MR_String STATE_VARIABLE_Name_3_10;
  MR_String STATE_VARIABLE_Name_1_7;
  MR_String STATE_VARIABLE_Str_1_12;
  MR_Integer Int_16;
  MR_Integer ModeNum1_18;
  MR_Word MaybeInternalLabelNum0_19;
  MR_String PredOrFunc_20;
  MR_Word Normal_21;
  MR_Integer Arity_23;
  MR_Integer ModeNum2_24;
  MR_Word MaybeInternalLabelNum_25;
  MR_Word UnusedArgs_26;
  MR_Word HigherOrder_28;
  MR_Integer ModeNum_29;
  MR_Word MaybeModule0_31;
  MR_Word Category0_32;
  MR_Word MaybeModule_33;
  MR_String PredName_36;
  MR_Word Category_37;
  MR_String STATE_VARIABLE_Str_1_40;
  MR_String STATE_VARIABLE_Str_2_42;
  MR_String STATE_VARIABLE_Str_5_46;
  MR_String STATE_VARIABLE_Str_8_51;
  MR_String STATE_VARIABLE_Str_11_55;
  MR_String Var_56;
  MR_String STATE_VARIABLE_Str_12_57;
  MR_String STATE_VARIABLE_Str_13_58;
  MR_String STATE_VARIABLE_Str_14_59;
  MR_String STATE_VARIABLE_Str_15_60;
  MR_Word Var_61;
  MR_String STATE_VARIABLE_Str_16_62;
  MR_String STATE_VARIABLE_Str_17_63;
  MR_String STATE_VARIABLE_Str_18_65;
  MR_String STATE_VARIABLE_Str_19_66;
  MR_Integer ModeNum0_17;
  MR_String STATE_VARIABLE_Str_4_45;
  MR_String Var_43;
  MR_String STATE_VARIABLE_Str_3_44;
  MR_String STATE_VARIABLE_Str_6_48;
  MR_String Var_47;
  MR_Integer Arity0_22;
  MR_String STATE_VARIABLE_Str_10_54;
  MR_String Var_52;
  MR_String STATE_VARIABLE_Str_9_53;
  MR_Integer UA_ModeNum_68;
  MR_String STATE_VARIABLE_Str_2_71;
  MR_String STATE_VARIABLE_Str_1_69;
  MR_String Var_70;
  MR_Integer HO_Num_82;
  MR_String STATE_VARIABLE_Str_2_85;
  MR_String STATE_VARIABLE_Str_1_83;
  MR_String Var_84;
  MR_String STATE_VARIABLE_Str_1_87;
  MR_String Var_86;
  MR_String _Str_38;

  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", MangledName_3, &STATE_VARIABLE_Name_1_7);
  if (succeeded)
    STATE_VARIABLE_Name_3_10 = STATE_VARIABLE_Name_1_7;
  else
  {
    MR_String STATE_VARIABLE_Name_2_8;

    STATE_VARIABLE_Name_2_8 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "_", MangledName_3);
    STATE_VARIABLE_Name_3_10 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "_entry_", STATE_VARIABLE_Name_2_8);
  }
  STATE_VARIABLE_Str_1_40 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "mercury__", STATE_VARIABLE_Name_3_10);
  succeeded = demangle__remove_trailing_int_3_p_0(&Int_16, STATE_VARIABLE_Str_1_40, &STATE_VARIABLE_Str_2_42);
  if (succeeded)
  {
    Var_43 = (MR_String) "_";
    succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_2_42, Var_43, &STATE_VARIABLE_Str_3_44);
    if (succeeded)
      succeeded = demangle__remove_trailing_int_3_p_0(&ModeNum0_17, STATE_VARIABLE_Str_3_44, &STATE_VARIABLE_Str_4_45);
    if (succeeded)
    {
      STATE_VARIABLE_Str_5_46 = STATE_VARIABLE_Str_4_45;
      ModeNum1_18 = ModeNum0_17;
      {
        MaybeInternalLabelNum0_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeInternalLabelNum0_19, 0) = ((MR_Box) (Int_16));
      }
    }
    else
    {
      ModeNum1_18 = Int_16;
      MaybeInternalLabelNum0_19 = (MR_Word) ((MR_Unsigned) 0U);
      STATE_VARIABLE_Str_5_46 = STATE_VARIABLE_Str_2_42;
    }
    Var_47 = (MR_String) "f_";
    succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_5_46, Var_47, &STATE_VARIABLE_Str_6_48);
    if (succeeded)
    {
      STATE_VARIABLE_Str_8_51 = STATE_VARIABLE_Str_6_48;
      PredOrFunc_20 = (MR_String) "function";
      Normal_21 = (MR_Integer) 1;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_7_50;

      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_5_46, (MR_String) "p_", &STATE_VARIABLE_Str_7_50);
      if (succeeded)
      {
        STATE_VARIABLE_Str_8_51 = STATE_VARIABLE_Str_7_50;
        PredOrFunc_20 = (MR_String) "predicate";
        Normal_21 = (MR_Integer) 1;
      }
      else
      {
        PredOrFunc_20 = (MR_String) "predicate";
        Normal_21 = (MR_Integer) 0;
        STATE_VARIABLE_Str_8_51 = STATE_VARIABLE_Str_5_46;
      }
    }
    Var_52 = (MR_String) "_";
    succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_8_51, Var_52, &STATE_VARIABLE_Str_9_53);
    if (succeeded)
      succeeded = demangle__remove_trailing_int_3_p_0(&Arity0_22, STATE_VARIABLE_Str_9_53, &STATE_VARIABLE_Str_10_54);
    if (succeeded)
    {
      STATE_VARIABLE_Str_11_55 = STATE_VARIABLE_Str_10_54;
      Arity_23 = Arity0_22;
      ModeNum2_24 = ModeNum1_18;
      MaybeInternalLabelNum_25 = MaybeInternalLabelNum0_19;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (Normal_21 == (MR_Integer) 0);
      if (succeeded)
      {
        Arity_23 = ModeNum1_18;
        succeeded = (MaybeInternalLabelNum0_19 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          ModeNum2_24 = ((MR_Integer) ((MR_hl_field(1, MaybeInternalLabelNum0_19, 0))));
          MaybeInternalLabelNum_25 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Str_11_55 = STATE_VARIABLE_Str_8_51;
          succeeded = MR_TRUE;
        }
      }
    }
    if (succeeded)
    {
      Var_56 = (MR_String) "_";
      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_11_55, Var_56, &STATE_VARIABLE_Str_12_57);
      if (succeeded)
      {
        succeeded = demangle__remove_trailing_int_3_p_0(&UA_ModeNum_68, STATE_VARIABLE_Str_12_57, &STATE_VARIABLE_Str_1_69);
        if (succeeded)
        {
          Var_70 = (MR_String) "__ua";
          succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_1_69, Var_70, &STATE_VARIABLE_Str_2_71);
        }
        if (succeeded)
        {
          MR_Word Var_72;

          STATE_VARIABLE_Str_13_58 = STATE_VARIABLE_Str_2_71;
          {
            Var_72 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_72, 0) = ((MR_Box) (ModeNum2_24));
            MR_hl_field(0, Var_72, 1) = ((MR_Box) ((MR_Integer) 0));
          }
          {
            UnusedArgs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, UnusedArgs_26, 0) = ((MR_Box) (Var_72));
          }
          ModeNum_29 = mercury__int__mod_2_f_0(UA_ModeNum_68, (MR_Integer) 10000);
        }
        else
        {
          MR_String STATE_VARIABLE_Str_4_77;
          MR_Integer UA_ModeNum_81;
          MR_String STATE_VARIABLE_Str_3_75;
          MR_String Var_76;

          succeeded = demangle__remove_trailing_int_3_p_0(&UA_ModeNum_81, STATE_VARIABLE_Str_12_57, &STATE_VARIABLE_Str_3_75);
          if (succeeded)
          {
            Var_76 = (MR_String) "__uab";
            succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_3_75, Var_76, &STATE_VARIABLE_Str_4_77);
          }
          if (succeeded)
          {
            MR_Word Var_78;

            STATE_VARIABLE_Str_13_58 = STATE_VARIABLE_Str_4_77;
            {
              Var_78 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Var_78, 0) = ((MR_Box) (ModeNum2_24));
              MR_hl_field(0, Var_78, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              UnusedArgs_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, UnusedArgs_26, 0) = ((MR_Box) (Var_78));
            }
            ModeNum_29 = mercury__int__mod_2_f_0(UA_ModeNum_81, (MR_Integer) 10000);
          }
          else
          {
            UnusedArgs_26 = (MR_Word) ((MR_Unsigned) 0U);
            ModeNum_29 = ModeNum2_24;
            STATE_VARIABLE_Str_13_58 = STATE_VARIABLE_Str_12_57;
          }
        }
        succeeded = demangle__remove_trailing_int_3_p_0(&HO_Num_82, STATE_VARIABLE_Str_13_58, &STATE_VARIABLE_Str_1_83);
        if (succeeded)
        {
          Var_84 = (MR_String) "__ho";
          succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_1_83, Var_84, &STATE_VARIABLE_Str_2_85);
        }
        if (succeeded)
        {
          STATE_VARIABLE_Str_14_59 = STATE_VARIABLE_Str_2_85;
          {
            HigherOrder_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, HigherOrder_28, 0) = ((MR_Box) (HO_Num_82));
          }
        }
        else
        {
          HigherOrder_28 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_Str_14_59 = STATE_VARIABLE_Str_13_58;
        }
        succeeded = (UnusedArgs_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = (Normal_21 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Integer Var_67;

          succeeded = demangle__remove_trailing_int_3_p_0(&Var_67, STATE_VARIABLE_Str_14_59, &STATE_VARIABLE_Str_15_60);
          if (succeeded)
            succeeded = (Arity_23 == Var_67);
        }
        else
        {
          STATE_VARIABLE_Str_15_60 = STATE_VARIABLE_Str_14_59;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_61 = (MR_Word) (MR_mkword(1, &demangle_scalar_common_1[10]));
          demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule0_31, Var_61, STATE_VARIABLE_Str_15_60, &STATE_VARIABLE_Str_16_62);
          Var_86 = (MR_String) "__Unify__";
          succeeded = mercury__string__remove_prefix_3_p_0(Var_86, STATE_VARIABLE_Str_16_62, &STATE_VARIABLE_Str_1_87);
          if (succeeded)
          {
            STATE_VARIABLE_Str_17_63 = STATE_VARIABLE_Str_1_87;
            Category0_32 = (MR_Word) ((MR_Unsigned) 4U);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_String STATE_VARIABLE_Str_2_89;

            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", STATE_VARIABLE_Str_16_62, &STATE_VARIABLE_Str_2_89);
            if (succeeded)
            {
              succeeded = (ModeNum_29 == (MR_Integer) 0);
              if (succeeded)
              {
                STATE_VARIABLE_Str_17_63 = STATE_VARIABLE_Str_2_89;
                Category0_32 = (MR_Word) ((MR_Unsigned) 8U);
                succeeded = MR_TRUE;
              }
            }
            else
            {
              MR_String STATE_VARIABLE_Str_3_91;

              succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", STATE_VARIABLE_Str_16_62, &STATE_VARIABLE_Str_3_91);
              if (succeeded)
              {
                succeeded = (ModeNum_29 == (MR_Integer) 0);
                if (succeeded)
                {
                  STATE_VARIABLE_Str_17_63 = STATE_VARIABLE_Str_3_91;
                  Category0_32 = (MR_Word) ((MR_Unsigned) 0U);
                  succeeded = MR_TRUE;
                }
              }
              else
              {
                Category0_32 = (MR_Word) ((MR_Unsigned) 12U);
                STATE_VARIABLE_Str_17_63 = STATE_VARIABLE_Str_16_62;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
          {
            succeeded = (Category0_32 == (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
            {
              STATE_VARIABLE_Str_18_65 = STATE_VARIABLE_Str_17_63;
              succeeded = MR_TRUE;
            }
            else
              succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", STATE_VARIABLE_Str_17_63, &STATE_VARIABLE_Str_18_65);
            if (succeeded)
            {
              switch (Normal_21) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  succeeded = (Category0_32 != (MR_Word) ((MR_Unsigned) 12U));
                  break;
                case (MR_Integer) 1:
                  succeeded = (Category0_32 == (MR_Word) ((MR_Unsigned) 12U));
                  break;
              }
              if (succeeded)
              {
                succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_18_65, &STATE_VARIABLE_Str_19_66);
                if (succeeded)
                {
                  if ((MaybeModule0_31 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MaybeModule_33 = (MR_Word) ((MR_Unsigned) 0U);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_String ModuleName0_34 = ((MR_String) ((MR_hl_field(1, MaybeModule0_31, 0))));
                    MR_String ModuleName_35;

                    succeeded = demangle__fix_mangled_ascii_2_p_0(ModuleName0_34, &ModuleName_35);
                    if (succeeded)
                    {
                      {
                        MaybeModule_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, MaybeModule_33, 0) = ((MR_Box) (ModuleName_35));
                      }
                      succeeded = MR_TRUE;
                    }
                  }
                  if (succeeded)
                  {
                    succeeded = demangle__handle_category_etc_5_p_0(&PredName_36, Category0_32, &Category_37, STATE_VARIABLE_Str_19_66, &_Str_38);
                    if (succeeded)
                    {
                      demangle__format_proc_10_p_0(Category_37, MaybeModule_33, PredOrFunc_20, PredName_36, Arity_23, ModeNum_29, HigherOrder_28, UnusedArgs_26, MaybeInternalLabelNum_25, &STATE_VARIABLE_Str_1_12);
                      succeeded = MR_TRUE;
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
  if (succeeded)
  {
    DemangledName_5 = STATE_VARIABLE_Str_1_12;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String STATE_VARIABLE_Str_2_13;

    succeeded = demangle__demangle_proc_ll_2_p_0(STATE_VARIABLE_Name_3_10, &STATE_VARIABLE_Str_2_13);
    if (succeeded)
    {
      DemangledName_5 = STATE_VARIABLE_Str_2_13;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_3_14;

      succeeded = demangle__demangle_data_2_p_0(STATE_VARIABLE_Name_3_10, &STATE_VARIABLE_Str_3_14);
      if (succeeded)
      {
        DemangledName_5 = STATE_VARIABLE_Str_3_14;
        succeeded = MR_TRUE;
      }
      else
        succeeded = demangle__demangle_typeclass_info_2_p_0(STATE_VARIABLE_Name_3_10, &DemangledName_5);
    }
  }
  if (succeeded)
    *Name_4 = DemangledName_5;
  else
    *Name_4 = MangledName_3;
}

static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9)
{
  MR_bool succeeded;
  MR_String ClassName_4;
  MR_Integer ClassArity_5;
  MR_String Args_6;
  MR_String STATE_VARIABLE_Str_1_10;
  MR_String STATE_VARIABLE_Str_2_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_String STATE_VARIABLE_Str_3_16;
  MR_String Var_19;
  MR_String STATE_VARIABLE_Str_4_20;
  MR_String STATE_VARIABLE_Str_5_21;
  MR_String Var_22;
  MR_String STATE_VARIABLE_Str_6_23;
  MR_String STATE_VARIABLE_Str_7_24;
  MR_String Var_32;
  MR_String Var_33;
  MR_String Var_34;
  MR_String Var_35;
  MR_String Var_36;
  MR_String Var_37;
  MR_Integer Digit_38;
  MR_String STATE_VARIABLE_Str_1_39;
  MR_Char Char_40;
  MR_String _Str_7;

  STATE_VARIABLE_Str_1_10 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "mercury_data___", STATE_VARIABLE_Str_0_8);
  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "base_typeclass_info_", STATE_VARIABLE_Str_1_10, &STATE_VARIABLE_Str_2_13);
  if (succeeded)
  {
    Var_15 = (MR_Word) (MR_mkword(1, &demangle_scalar_common_1[15]));
    demangle__remove_maybe_module_prefix_4_p_0(&Var_14, Var_15, STATE_VARIABLE_Str_2_13, &STATE_VARIABLE_Str_3_16);
    succeeded = (Var_14 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ClassName_4 = ((MR_String) ((MR_hl_field(1, Var_14, 0))));
      succeeded = (strcmp(ClassName_4, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_19 = (MR_String) "arity";
        succeeded = mercury__string__remove_prefix_3_p_0(Var_19, STATE_VARIABLE_Str_3_16, &STATE_VARIABLE_Str_4_20);
        if (succeeded)
        {
          succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_4_20, &Char_40, &STATE_VARIABLE_Str_1_39);
          if (succeeded)
          {
            succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_40, &Digit_38);
            if (succeeded)
            {
              succeeded = demangle__remove_int_2_4_p_0(Digit_38, &ClassArity_5, STATE_VARIABLE_Str_1_39, &STATE_VARIABLE_Str_5_21);
              if (succeeded)
              {
                Var_22 = (MR_String) "__";
                succeeded = mercury__string__remove_prefix_3_p_0(Var_22, STATE_VARIABLE_Str_5_21, &STATE_VARIABLE_Str_6_23);
                if (succeeded)
                {
                  succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_6_23, &STATE_VARIABLE_Str_7_24);
                  if (succeeded)
                  {
                    succeeded = demangle__demangle_class_args_4_p_0(ClassArity_5, &Args_6, STATE_VARIABLE_Str_7_24, &_Str_7);
                    if (succeeded)
                    {
                      Var_32 = (MR_String) ")>";
                      Var_33 = mercury__string__f_43_43_2_f_0(Args_6, Var_32);
                      Var_34 = (MR_String) "(";
                      Var_35 = mercury__string__f_43_43_2_f_0(Var_34, Var_33);
                      Var_36 = mercury__string__f_43_43_2_f_0(ClassName_4, Var_35);
                      Var_37 = (MR_String) "<instance declaration for ";
                      *STATE_VARIABLE_Str_9 = mercury__string__f_43_43_2_f_0(Var_37, Var_36);
                      succeeded = MR_TRUE;
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

static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
  MR_Integer Num_5,
  MR_String * FormattedArgs_6,
  MR_String STATE_VARIABLE_Str_0_13,
  MR_String * STATE_VARIABLE_Str_14)
{
  MR_bool succeeded;
  MR_String TypeName_8;
  MR_Integer TypeArity_9;
  MR_String Sep_10;
  MR_String Rest_12;
  MR_Word Var_15;
  MR_String STATE_VARIABLE_Str_1_17;
  MR_String Var_20;
  MR_String STATE_VARIABLE_Str_2_21;
  MR_String STATE_VARIABLE_Str_3_22;
  MR_String Var_23;
  MR_String STATE_VARIABLE_Str_4_24;
  MR_String Var_38;
  MR_String Var_39;
  MR_Word Var_45;
  MR_String Var_46;
  MR_String Var_47;
  MR_String Var_48;
  MR_Integer Digit_49;
  MR_String STATE_VARIABLE_Str_1_50;
  MR_Char Char_51;
  MR_Integer Var_25;

  demangle__remove_maybe_module_prefix_4_p_0(&Var_15, (MR_Word) (MR_mkword(1, &demangle_scalar_common_1[15])), STATE_VARIABLE_Str_0_13, &STATE_VARIABLE_Str_1_17);
  succeeded = (Var_15 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    TypeName_8 = ((MR_String) ((MR_hl_field(1, Var_15, 0))));
    succeeded = (strcmp(TypeName_8, (MR_String) "") == 0);
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_20 = (MR_String) "arity";
      succeeded = mercury__string__remove_prefix_3_p_0(Var_20, STATE_VARIABLE_Str_1_17, &STATE_VARIABLE_Str_2_21);
      if (succeeded)
      {
        succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_2_21, &Char_51, &STATE_VARIABLE_Str_1_50);
        if (succeeded)
        {
          succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_51, &Digit_49);
          if (succeeded)
          {
            succeeded = demangle__remove_int_2_4_p_0(Digit_49, &TypeArity_9, STATE_VARIABLE_Str_1_50, &STATE_VARIABLE_Str_3_22);
            if (succeeded)
            {
              Var_23 = (MR_String) "__";
              succeeded = mercury__string__remove_prefix_3_p_0(Var_23, STATE_VARIABLE_Str_3_22, &STATE_VARIABLE_Str_4_24);
              if (succeeded)
              {
                Var_25 = (MR_Integer) 1;
                succeeded = (Num_5 > Var_25);
                if (succeeded)
                {
                  MR_Integer Num1_11;

                  Sep_10 = (MR_String) ", ";
                  Num1_11 = (MR_Integer) ((MR_Unsigned) Num_5 - (MR_Unsigned) 1);
                  succeeded = demangle__demangle_class_args_4_p_0(Num1_11, &Rest_12, STATE_VARIABLE_Str_4_24, STATE_VARIABLE_Str_14);
                }
                else
                {
                  Sep_10 = (MR_String) "";
                  Rest_12 = (MR_String) "";
                  *STATE_VARIABLE_Str_14 = STATE_VARIABLE_Str_4_24;
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  Var_38 = mercury__string__f_43_43_2_f_0(Sep_10, Rest_12);
                  Var_45 = (MR_Word) (&demangle_scalar_common_2[1]);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_45, TypeArity_9, &Var_39);
                  Var_46 = mercury__string__f_43_43_2_f_0(Var_39, Var_38);
                  Var_47 = (MR_String) "/";
                  Var_48 = mercury__string__f_43_43_2_f_0(Var_47, Var_46);
                  *FormattedArgs_6 = mercury__string__f_43_43_2_f_0(TypeName_8, Var_48);
                  succeeded = MR_TRUE;
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

static MR_bool MR_CALL 
demangle__demangle_data_2_p_0(
  MR_String STATE_VARIABLE_Str_0_11,
  MR_String * STATE_VARIABLE_Str_12)
{
  MR_bool succeeded;
  MR_Word HighLevel_4;
  MR_Word MaybeModule0_5;
  MR_Word MaybeModule_6;
  MR_Word DataCategory_9;
  MR_Integer Arity_10;
  MR_String STATE_VARIABLE_Str_2_15;
  MR_String STATE_VARIABLE_Str_3_18;
  MR_String STATE_VARIABLE_Str_6_38;
  MR_String STATE_VARIABLE_Str_15_52;
  MR_String STATE_VARIABLE_Str_1_14;
  MR_String Var_27;
  MR_String STATE_VARIABLE_Str_4_35;
  MR_String Var_34;

  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data_", STATE_VARIABLE_Str_0_11, &STATE_VARIABLE_Str_1_14);
  if (succeeded)
  {
    STATE_VARIABLE_Str_2_15 = STATE_VARIABLE_Str_1_14;
    HighLevel_4 = (MR_Integer) 0;
  }
  else
  {
    HighLevel_4 = (MR_Integer) 1;
    STATE_VARIABLE_Str_2_15 = mercury__string__remove_prefix_if_present_2_f_0((MR_String) "mercury__", STATE_VARIABLE_Str_0_11);
  }
  demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule0_5, (MR_Word) (MR_mkword(1, &demangle_scalar_common_1[14])), STATE_VARIABLE_Str_2_15, &STATE_VARIABLE_Str_3_18);
  succeeded = (MaybeModule0_5 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_27 = ((MR_String) ((MR_hl_field(1, MaybeModule0_5, 0))));
    succeeded = (strcmp(Var_27, (MR_String) "") == 0);
  }
  if (succeeded)
  {
    MaybeModule_6 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String Twice_7;

    succeeded = (HighLevel_4 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (MaybeModule0_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        Twice_7 = ((MR_String) ((MR_hl_field(1, MaybeModule0_5, 0))));
    }
    if (succeeded)
    {
      MR_String Once_8;
      MR_Integer Var_28;
      MR_Integer Var_29;
      MR_Integer Var_31;
      MR_Integer Var_32;
      MR_String Var_54;

      Var_29 = mercury__string__length_1_f_0(Twice_7);
      Var_28 = mercury__int__f_47_47_2_f_0(Var_29, (MR_Integer) 2);
      Once_8 = mercury__string__left_2_f_0(Twice_7, Var_28);
      Var_32 = mercury__string__length_1_f_0(Twice_7);
      Var_31 = mercury__int__f_47_47_2_f_0(Var_32, (MR_Integer) 2);
      Var_54 = mercury__string__right_2_f_0(Twice_7, Var_31);
      succeeded = (strcmp(Once_8, Var_54) == 0);
      if (succeeded)
      {
        {
          MaybeModule_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeModule_6, 0) = ((MR_Box) (Once_8));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MaybeModule_6 = MaybeModule0_5;
      succeeded = MR_TRUE;
    }
  }
  if (succeeded)
  {
    Var_34 = (MR_String) "type_ctor_info_";
    succeeded = mercury__string__remove_prefix_3_p_0(Var_34, STATE_VARIABLE_Str_3_18, &STATE_VARIABLE_Str_4_35);
    if (succeeded)
    {
      MR_String STATE_VARIABLE_Str_5_36;
      MR_String Var_37;

      DataCategory_9 = (MR_Integer) 1;
      succeeded = demangle__remove_trailing_int_3_p_0(&Arity_10, STATE_VARIABLE_Str_4_35, &STATE_VARIABLE_Str_5_36);
      if (succeeded)
      {
        Var_37 = (MR_String) "_";
        succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_5_36, Var_37, &STATE_VARIABLE_Str_6_38);
      }
    }
    else
    {
      MR_String STATE_VARIABLE_Str_7_40;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_layout_", STATE_VARIABLE_Str_3_18, &STATE_VARIABLE_Str_7_40);
      if (succeeded)
      {
        MR_String STATE_VARIABLE_Str_8_41;
        MR_String Var_42;

        DataCategory_9 = (MR_Integer) 2;
        succeeded = demangle__remove_trailing_int_3_p_0(&Arity_10, STATE_VARIABLE_Str_7_40, &STATE_VARIABLE_Str_8_41);
        if (succeeded)
        {
          Var_42 = (MR_String) "_";
          succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_8_41, Var_42, &STATE_VARIABLE_Str_6_38);
        }
      }
      else
      {
        MR_String STATE_VARIABLE_Str_10_45;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_functors_", STATE_VARIABLE_Str_3_18, &STATE_VARIABLE_Str_10_45);
        if (succeeded)
        {
          MR_String STATE_VARIABLE_Str_11_46;
          MR_String Var_47;

          DataCategory_9 = (MR_Integer) 3;
          succeeded = demangle__remove_trailing_int_3_p_0(&Arity_10, STATE_VARIABLE_Str_10_45, &STATE_VARIABLE_Str_11_46);
          if (succeeded)
          {
            Var_47 = (MR_String) "_";
            succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_11_46, Var_47, &STATE_VARIABLE_Str_6_38);
          }
        }
        else
        {
          MR_String STATE_VARIABLE_Str_13_50;

          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "common_", STATE_VARIABLE_Str_3_18, &STATE_VARIABLE_Str_13_50);
          if (succeeded)
          {
            DataCategory_9 = (MR_Integer) 0;
            succeeded = demangle__remove_trailing_int_3_p_0(&Arity_10, STATE_VARIABLE_Str_13_50, &STATE_VARIABLE_Str_6_38);
          }
        }
      }
    }
    if (succeeded)
    {
      succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_6_38, &STATE_VARIABLE_Str_15_52);
      if (succeeded)
        succeeded = demangle__format_data_5_p_0(DataCategory_9, MaybeModule_6, STATE_VARIABLE_Str_15_52, Arity_10, STATE_VARIABLE_Str_12);
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
demangle__format_data_5_p_0(
  MR_Word Category_6,
  MR_Word MaybeModule_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_String * Result_10)
{
  MR_bool succeeded;

  switch (Category_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Module_66;
        MR_String Var_154;
        MR_String Var_155;
        MR_String Var_156;
        MR_String Var_157;
        MR_String Var_158;
        MR_Word Var_164;
        MR_String Var_165;
        MR_String Var_166;

        succeeded = (MaybeModule_7 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Module_66 = ((MR_String) ((MR_hl_field(1, MaybeModule_7, 0))));
          Var_154 = (MR_String) ">";
          Var_155 = mercury__string__f_43_43_2_f_0(Module_66, Var_154);
          Var_156 = (MR_String) " for module ";
          Var_157 = mercury__string__f_43_43_2_f_0(Var_156, Var_155);
          Var_164 = (MR_Word) (&demangle_scalar_common_2[1]);
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_164, Arity_9, &Var_158);
          Var_165 = mercury__string__f_43_43_2_f_0(Var_158, Var_157);
          Var_166 = (MR_String) "<shared constant number ";
          *Result_10 = mercury__string__f_43_43_2_f_0(Var_166, Var_165);
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        if ((MaybeModule_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_142;
          MR_String Var_149;
          MR_String Var_151;
          MR_String Var_152;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_9, &Var_142);
          Var_149 = mercury__string__f_43_43_2_f_0(Var_142, (MR_String) "\'>");
          Var_151 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_149);
          Var_152 = mercury__string__f_43_43_2_f_0(Name_8, Var_151);
          *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", Var_152);
        }
        else
        {
          MR_String Module_63 = ((MR_String) ((MR_hl_field(1, MaybeModule_7, 0))));
          MR_String Var_126;
          MR_String Var_133;
          MR_String Var_135;
          MR_String Var_136;
          MR_String Var_138;
          MR_String Var_139;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_9, &Var_126);
          Var_133 = mercury__string__f_43_43_2_f_0(Var_126, (MR_String) "\'>");
          Var_135 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_133);
          Var_136 = mercury__string__f_43_43_2_f_0(Name_8, Var_135);
          Var_138 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_136);
          Var_139 = mercury__string__f_43_43_2_f_0(Module_63, Var_138);
          *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", Var_139);
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        if ((MaybeModule_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_113;
          MR_String Var_120;
          MR_String Var_122;
          MR_String Var_123;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_9, &Var_113);
          Var_120 = mercury__string__f_43_43_2_f_0(Var_113, (MR_String) "\'>");
          Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_120);
          Var_123 = mercury__string__f_43_43_2_f_0(Name_8, Var_122);
          *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", Var_123);
        }
        else
        {
          MR_String Module_11 = ((MR_String) ((MR_hl_field(1, MaybeModule_7, 0))));
          MR_String Var_97;
          MR_String Var_104;
          MR_String Var_106;
          MR_String Var_107;
          MR_String Var_109;
          MR_String Var_110;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_9, &Var_97);
          Var_104 = mercury__string__f_43_43_2_f_0(Var_97, (MR_String) "\'>");
          Var_106 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_104);
          Var_107 = mercury__string__f_43_43_2_f_0(Name_8, Var_106);
          Var_109 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_107);
          Var_110 = mercury__string__f_43_43_2_f_0(Module_11, Var_109);
          *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", Var_110);
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        if ((MaybeModule_7 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_84;
          MR_String Var_91;
          MR_String Var_93;
          MR_String Var_94;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_9, &Var_84);
          Var_91 = mercury__string__f_43_43_2_f_0(Var_84, (MR_String) "\'>");
          Var_93 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_91);
          Var_94 = mercury__string__f_43_43_2_f_0(Name_8, Var_93);
          *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", Var_94);
        }
        else
        {
          MR_String Module_60 = ((MR_String) ((MR_hl_field(1, MaybeModule_7, 0))));
          MR_String Var_68;
          MR_String Var_75;
          MR_String Var_77;
          MR_String Var_78;
          MR_String Var_80;
          MR_String Var_81;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_9, &Var_68);
          Var_75 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) "\'>");
          Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_75);
          Var_78 = mercury__string__f_43_43_2_f_0(Name_8, Var_77);
          Var_80 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_78);
          Var_81 = mercury__string__f_43_43_2_f_0(Module_60, Var_80);
          *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", Var_81);
        }
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
  MR_String STATE_VARIABLE_Str_0_20,
  MR_String * STATE_VARIABLE_Str_21)
{
  MR_bool succeeded;
  MR_String PredOrFunc_4;
  MR_Integer Int_5;
  MR_Word MaybeInternalLabelNum_6;
  MR_Integer ModeNum0_7;
  MR_Integer Arity_8;
  MR_Word Category0_9;
  MR_Word UnusedArgs_10;
  MR_Word HigherOrder_12;
  MR_Integer ModeNum_13;
  MR_Word MaybeModule_15;
  MR_String PredName_16;
  MR_Word Category_17;
  MR_String STATE_VARIABLE_Str_1_23;
  MR_String STATE_VARIABLE_Str_3_26;
  MR_String STATE_VARIABLE_Str_4_27;
  MR_String STATE_VARIABLE_Str_7_32;
  MR_String Var_33;
  MR_String STATE_VARIABLE_Str_8_34;
  MR_String STATE_VARIABLE_Str_9_35;
  MR_String Var_36;
  MR_String STATE_VARIABLE_Str_10_37;
  MR_String STATE_VARIABLE_Str_11_38;
  MR_String STATE_VARIABLE_Str_12_39;
  MR_String STATE_VARIABLE_Str_13_40;
  MR_String STATE_VARIABLE_Str_14_41;
  MR_String STATE_VARIABLE_Str_15_42;
  MR_String STATE_VARIABLE_Str_16_44;
  MR_String STATE_VARIABLE_Str_2_25;
  MR_String Var_24;
  MR_String STATE_VARIABLE_Str_5_29;
  MR_String Var_28;
  MR_String STATE_VARIABLE_Str_1_72;
  MR_String Var_71;
  MR_Integer UA_ModeNum_77;
  MR_String STATE_VARIABLE_Str_2_80;
  MR_String STATE_VARIABLE_Str_1_78;
  MR_String Var_79;
  MR_Integer HO_Num_91;
  MR_String STATE_VARIABLE_Str_2_94;
  MR_String STATE_VARIABLE_Str_1_92;
  MR_String Var_93;
  MR_String _Str_18;

  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", STATE_VARIABLE_Str_0_20, &STATE_VARIABLE_Str_1_23);
  if (succeeded)
  {
    Var_24 = (MR_String) "fn__";
    succeeded = mercury__string__remove_prefix_3_p_0(Var_24, STATE_VARIABLE_Str_1_23, &STATE_VARIABLE_Str_2_25);
    if (succeeded)
    {
      STATE_VARIABLE_Str_3_26 = STATE_VARIABLE_Str_2_25;
      PredOrFunc_4 = (MR_String) "function";
    }
    else
    {
      PredOrFunc_4 = (MR_String) "predicate";
      STATE_VARIABLE_Str_3_26 = STATE_VARIABLE_Str_1_23;
    }
    succeeded = demangle__remove_trailing_int_3_p_0(&Int_5, STATE_VARIABLE_Str_3_26, &STATE_VARIABLE_Str_4_27);
    if (succeeded)
    {
      Var_28 = (MR_String) "i";
      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_4_27, Var_28, &STATE_VARIABLE_Str_5_29);
      if (succeeded)
      {
        MR_String STATE_VARIABLE_Str_6_31;

        {
          MaybeInternalLabelNum_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeInternalLabelNum_6, 0) = ((MR_Box) (Int_5));
        }
        succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_5_29, (MR_String) "_", &STATE_VARIABLE_Str_6_31);
        if (succeeded)
          succeeded = demangle__remove_trailing_int_3_p_0(&ModeNum0_7, STATE_VARIABLE_Str_6_31, &STATE_VARIABLE_Str_7_32);
      }
      else
      {
        MaybeInternalLabelNum_6 = (MR_Word) ((MR_Unsigned) 0U);
        ModeNum0_7 = Int_5;
        STATE_VARIABLE_Str_7_32 = STATE_VARIABLE_Str_4_27;
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        Var_33 = (MR_String) "_";
        succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_7_32, Var_33, &STATE_VARIABLE_Str_8_34);
        if (succeeded)
        {
          succeeded = demangle__remove_trailing_int_3_p_0(&Arity_8, STATE_VARIABLE_Str_8_34, &STATE_VARIABLE_Str_9_35);
          if (succeeded)
          {
            Var_36 = (MR_String) "_";
            succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_9_35, Var_36, &STATE_VARIABLE_Str_10_37);
            if (succeeded)
            {
              Var_71 = (MR_String) "__Unify__";
              succeeded = mercury__string__remove_prefix_3_p_0(Var_71, STATE_VARIABLE_Str_10_37, &STATE_VARIABLE_Str_1_72);
              if (succeeded)
              {
                STATE_VARIABLE_Str_11_38 = STATE_VARIABLE_Str_1_72;
                Category0_9 = (MR_Word) ((MR_Unsigned) 4U);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_String STATE_VARIABLE_Str_2_74;

                succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", STATE_VARIABLE_Str_10_37, &STATE_VARIABLE_Str_2_74);
                if (succeeded)
                {
                  succeeded = (ModeNum0_7 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    STATE_VARIABLE_Str_11_38 = STATE_VARIABLE_Str_2_74;
                    Category0_9 = (MR_Word) ((MR_Unsigned) 8U);
                    succeeded = MR_TRUE;
                  }
                }
                else
                {
                  MR_String STATE_VARIABLE_Str_3_76;

                  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", STATE_VARIABLE_Str_10_37, &STATE_VARIABLE_Str_3_76);
                  if (succeeded)
                  {
                    succeeded = (ModeNum0_7 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      STATE_VARIABLE_Str_11_38 = STATE_VARIABLE_Str_3_76;
                      Category0_9 = (MR_Word) ((MR_Unsigned) 0U);
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    Category0_9 = (MR_Word) ((MR_Unsigned) 12U);
                    STATE_VARIABLE_Str_11_38 = STATE_VARIABLE_Str_10_37;
                    succeeded = MR_TRUE;
                  }
                }
              }
              if (succeeded)
              {
                succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_11_38, &STATE_VARIABLE_Str_12_39);
                if (succeeded)
                {
                  succeeded = demangle__remove_trailing_int_3_p_0(&UA_ModeNum_77, STATE_VARIABLE_Str_12_39, &STATE_VARIABLE_Str_1_78);
                  if (succeeded)
                  {
                    Var_79 = (MR_String) "__ua";
                    succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_1_78, Var_79, &STATE_VARIABLE_Str_2_80);
                  }
                  if (succeeded)
                  {
                    MR_Word Var_81;

                    STATE_VARIABLE_Str_13_40 = STATE_VARIABLE_Str_2_80;
                    {
                      Var_81 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(0, Var_81, 0) = ((MR_Box) (ModeNum0_7));
                      MR_hl_field(0, Var_81, 1) = ((MR_Box) ((MR_Integer) 0));
                    }
                    {
                      UnusedArgs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, UnusedArgs_10, 0) = ((MR_Box) (Var_81));
                    }
                    ModeNum_13 = mercury__int__mod_2_f_0(UA_ModeNum_77, (MR_Integer) 10000);
                  }
                  else
                  {
                    MR_String STATE_VARIABLE_Str_4_86;
                    MR_Integer UA_ModeNum_90;
                    MR_String STATE_VARIABLE_Str_3_84;
                    MR_String Var_85;

                    succeeded = demangle__remove_trailing_int_3_p_0(&UA_ModeNum_90, STATE_VARIABLE_Str_12_39, &STATE_VARIABLE_Str_3_84);
                    if (succeeded)
                    {
                      Var_85 = (MR_String) "__uab";
                      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_3_84, Var_85, &STATE_VARIABLE_Str_4_86);
                    }
                    if (succeeded)
                    {
                      MR_Word Var_87;

                      STATE_VARIABLE_Str_13_40 = STATE_VARIABLE_Str_4_86;
                      {
                        Var_87 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(0, Var_87, 0) = ((MR_Box) (ModeNum0_7));
                        MR_hl_field(0, Var_87, 1) = ((MR_Box) ((MR_Integer) 1));
                      }
                      {
                        UnusedArgs_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, UnusedArgs_10, 0) = ((MR_Box) (Var_87));
                      }
                      ModeNum_13 = mercury__int__mod_2_f_0(UA_ModeNum_90, (MR_Integer) 10000);
                    }
                    else
                    {
                      UnusedArgs_10 = (MR_Word) ((MR_Unsigned) 0U);
                      ModeNum_13 = ModeNum0_7;
                      STATE_VARIABLE_Str_13_40 = STATE_VARIABLE_Str_12_39;
                    }
                  }
                  succeeded = demangle__remove_trailing_int_3_p_0(&HO_Num_91, STATE_VARIABLE_Str_13_40, &STATE_VARIABLE_Str_1_92);
                  if (succeeded)
                  {
                    Var_93 = (MR_String) "__ho";
                    succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_1_92, Var_93, &STATE_VARIABLE_Str_2_94);
                  }
                  if (succeeded)
                  {
                    STATE_VARIABLE_Str_14_41 = STATE_VARIABLE_Str_2_94;
                    {
                      HigherOrder_12 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, HigherOrder_12, 0) = ((MR_Box) (HO_Num_91));
                    }
                  }
                  else
                  {
                    HigherOrder_12 = (MR_Word) ((MR_Unsigned) 0U);
                    STATE_VARIABLE_Str_14_41 = STATE_VARIABLE_Str_13_40;
                  }
                  succeeded = (UnusedArgs_10 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                    succeeded = (Category0_9 != (MR_Word) ((MR_Unsigned) 12U));
                  if (succeeded)
                  {
                    MR_Integer Var_70;

                    succeeded = demangle__remove_trailing_int_3_p_0(&Var_70, STATE_VARIABLE_Str_14_41, &STATE_VARIABLE_Str_15_42);
                    if (succeeded)
                      succeeded = (Arity_8 == Var_70);
                  }
                  else
                  {
                    STATE_VARIABLE_Str_15_42 = STATE_VARIABLE_Str_14_41;
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    succeeded = (Category0_9 == (MR_Word) ((MR_Unsigned) 12U));
                    if (succeeded)
                    {
                      demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule_15, (MR_Word) (MR_mkword(1, &demangle_scalar_common_1[4])), STATE_VARIABLE_Str_15_42, &STATE_VARIABLE_Str_16_44);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_String STATE_VARIABLE_Str_17_56;
                      MR_Word Var_57;
                      MR_String Var_69;

                      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", STATE_VARIABLE_Str_15_42, &STATE_VARIABLE_Str_17_56);
                      if (succeeded)
                      {
                        Var_57 = (MR_Word) (MR_mkword(1, &demangle_scalar_common_1[4]));
                        demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule_15, Var_57, STATE_VARIABLE_Str_17_56, &STATE_VARIABLE_Str_16_44);
                        succeeded = (MaybeModule_15 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_69 = ((MR_String) ((MR_hl_field(1, MaybeModule_15, 0))));
                          succeeded = (strcmp(Var_69, (MR_String) "") == 0);
                        }
                        succeeded = !(succeeded);
                      }
                    }
                    if (succeeded)
                    {
                      succeeded = demangle__handle_category_etc_5_p_0(&PredName_16, Category0_9, &Category_17, STATE_VARIABLE_Str_16_44, &_Str_18);
                      if (succeeded)
                      {
                        demangle__format_proc_10_p_0(Category_17, MaybeModule_15, PredOrFunc_4, PredName_16, Arity_8, ModeNum_13, HigherOrder_12, UnusedArgs_10, MaybeInternalLabelNum_6, STATE_VARIABLE_Str_21);
                        succeeded = MR_TRUE;
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

static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
  MR_Integer * Int_4,
  MR_String STATE_VARIABLE_String_0_8,
  MR_String * STATE_VARIABLE_String_9)
{
  MR_bool succeeded;
  MR_Integer Digit_6;
  MR_String STATE_VARIABLE_String_1_10;
  MR_Char Char_14;
  MR_Integer Len_15;
  MR_Integer Len1_16;
  MR_Integer Rest_7;
  MR_String STATE_VARIABLE_String_2_11;

  mercury__string__length_2_p_0(STATE_VARIABLE_String_0_8, &Len_15);
  Len1_16 = (MR_Integer) ((MR_Unsigned) Len_15 - (MR_Unsigned) 1);
  succeeded = mercury__string__index_3_p_0(STATE_VARIABLE_String_0_8, Len1_16, &Char_14);
  if (succeeded)
  {
    mercury__string__left_3_p_0(STATE_VARIABLE_String_0_8, Len1_16, &STATE_VARIABLE_String_1_10);
    succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_14, &Digit_6);
    if (succeeded)
    {
      succeeded = demangle__remove_trailing_int_3_p_0(&Rest_7, STATE_VARIABLE_String_1_10, &STATE_VARIABLE_String_2_11);
      if (succeeded)
      {
        MR_Integer Var_12;

        *STATE_VARIABLE_String_9 = STATE_VARIABLE_String_2_11;
        Var_12 = (MR_Integer) ((MR_Unsigned) Rest_7 * (MR_Unsigned) 10);
        *Int_4 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) Digit_6);
      }
      else
      {
        *Int_4 = Digit_6;
        *STATE_VARIABLE_String_9 = STATE_VARIABLE_String_1_10;
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
  void * env_ptr_arg)
{
  struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
  void * env_ptr_arg)
{
  struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9 = ((MR_String) ((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9));
  demangle__remove_maybe_module_prefix_4_p_0_2(env_ptr);
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
  void * env_ptr_arg)
{
  struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9);
  if ((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
    demangle__remove_maybe_module_prefix_4_p_0_1(env_ptr);
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
  void * env_ptr_arg)
{
  struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &(env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9, (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__remove_maybe_module_prefix_4_p_0_3, env_ptr);
      (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
  MR_Word * MaybeModule_5,
  MR_Word StringsToStopAt_6,
  MR_String String0_7,
  MR_String * String_8)
{
  struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s env;

  (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6 = StringsToStopAt_6;
  (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7 = String0_7;
  demangle__remove_maybe_module_prefix_4_p_0_4(&env);
  if ((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
  {
    *MaybeModule_5 = (MR_Word) ((MR_Unsigned) 0U);
    *String_8 = (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
  }
  else
  {
    MR_Integer Index_10;

    (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (MR_String) "__", &Index_10);
    if ((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
    {
      MR_String Module_11;
      MR_Integer Len_12;
      MR_Integer Index2_13;
      MR_String String1_14;
      MR_String SubModule_15;
      MR_String String2_16;
      MR_Word Var_20;

      mercury__string__left_3_p_0((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, Index_10, &Module_11);
      mercury__string__length_2_p_0((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, &Len_12);
      Index2_13 = (MR_Integer) ((MR_Unsigned) Index_10 + (MR_Unsigned) 2);
      mercury__string__between_4_p_0((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, Index2_13, Len_12, &String1_14);
      demangle__remove_maybe_module_prefix_4_p_0(&Var_20, (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, String1_14, &String2_16);
      (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = (Var_20 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
      {
        SubModule_15 = ((MR_String) ((MR_hl_field(1, Var_20, 0))));
        {
          MR_String QualifiedModule_17;
          MR_Word Var_21;
          MR_Word Var_22;
          MR_Word Var_24;

          {
            Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_24, 0) = ((MR_Box) (SubModule_15));
            MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_22, 0) = ((MR_Box) ((MR_String) "."));
            MR_hl_field(1, Var_22, 1) = ((MR_Box) (Var_24));
          }
          {
            Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_21, 0) = ((MR_Box) (Module_11));
            MR_hl_field(1, Var_21, 1) = ((MR_Box) (Var_22));
          }
          mercury__string__append_list_2_p_0(Var_21, &QualifiedModule_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModule_5 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (QualifiedModule_17));
          }
          *String_8 = String2_16;
        }
      }
      else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeModule_5 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Module_11));
        }
        *String_8 = String1_14;
      }
    }
    else
    {
      *String_8 = (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
      *MaybeModule_5 = (MR_Word) ((MR_Unsigned) 0U);
    }
  }
}

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
  MR_String STATE_VARIABLE_Str_0_4,
  MR_String * STATE_VARIABLE_Str_5)
{
  MR_bool succeeded;
  MR_String STATE_VARIABLE_Str_1_7;

  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f__", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_1_7);
  if (succeeded)
  {
    mercury__string__append_3_p_2((MR_String) "f_", STATE_VARIABLE_Str_1_7, STATE_VARIABLE_Str_5);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String STATE_VARIABLE_Str_3_11;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_not_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_3_11);
    if (succeeded)
    {
      mercury__string__append_3_p_2((MR_String) "\\=", STATE_VARIABLE_Str_3_11, STATE_VARIABLE_Str_5);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_5_15;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_or_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_5_15);
      if (succeeded)
      {
        mercury__string__append_3_p_2((MR_String) ">=", STATE_VARIABLE_Str_5_15, STATE_VARIABLE_Str_5);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String STATE_VARIABLE_Str_7_19;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_or_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_7_19);
        if (succeeded)
        {
          mercury__string__append_3_p_2((MR_String) "=<", STATE_VARIABLE_Str_7_19, STATE_VARIABLE_Str_5);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_String STATE_VARIABLE_Str_9_23;

          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_9_23);
          if (succeeded)
          {
            mercury__string__append_3_p_2((MR_String) "=", STATE_VARIABLE_Str_9_23, STATE_VARIABLE_Str_5);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_String STATE_VARIABLE_Str_11_27;

            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_than", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_11_27);
            if (succeeded)
            {
              mercury__string__append_3_p_2((MR_String) "<", STATE_VARIABLE_Str_11_27, STATE_VARIABLE_Str_5);
              succeeded = MR_TRUE;
            }
            else
            {
              MR_String STATE_VARIABLE_Str_13_31;

              succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_than", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_13_31);
              if (succeeded)
              {
                mercury__string__append_3_p_2((MR_String) ">", STATE_VARIABLE_Str_13_31, STATE_VARIABLE_Str_5);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_String STATE_VARIABLE_Str_15_35;

                succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_minus", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_15_35);
                if (succeeded)
                {
                  mercury__string__append_3_p_2((MR_String) "-", STATE_VARIABLE_Str_15_35, STATE_VARIABLE_Str_5);
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_String STATE_VARIABLE_Str_17_39;

                  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_plus", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_17_39);
                  if (succeeded)
                  {
                    mercury__string__append_3_p_2((MR_String) "+", STATE_VARIABLE_Str_17_39, STATE_VARIABLE_Str_5);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_String STATE_VARIABLE_Str_19_43;

                    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_times", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_19_43);
                    if (succeeded)
                    {
                      mercury__string__append_3_p_2((MR_String) "*", STATE_VARIABLE_Str_19_43, STATE_VARIABLE_Str_5);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_String STATE_VARIABLE_Str_21_47;

                      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_slash", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_21_47);
                      if (succeeded)
                      {
                        mercury__string__append_3_p_2((MR_String) "/", STATE_VARIABLE_Str_21_47, STATE_VARIABLE_Str_5);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_String STATE_VARIABLE_Str_23_51;

                        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_comma", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_23_51);
                        if (succeeded)
                        {
                          mercury__string__append_3_p_2((MR_String) ",", STATE_VARIABLE_Str_23_51, STATE_VARIABLE_Str_5);
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_String STATE_VARIABLE_Str_25_55;

                          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_semicolon", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_25_55);
                          if (succeeded)
                          {
                            mercury__string__append_3_p_2((MR_String) ";", STATE_VARIABLE_Str_25_55, STATE_VARIABLE_Str_5);
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_String STATE_VARIABLE_Str_27_59;

                            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cut", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_27_59);
                            if (succeeded)
                            {
                              mercury__string__append_3_p_2((MR_String) "!", STATE_VARIABLE_Str_27_59, STATE_VARIABLE_Str_5);
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_String STATE_VARIABLE_Str_29_63;

                              succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_tuple", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_29_63);
                              if (succeeded)
                              {
                                mercury__string__append_3_p_2((MR_String) "{}", STATE_VARIABLE_Str_29_63, STATE_VARIABLE_Str_5);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_String STATE_VARIABLE_Str_31_67;

                                succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cons", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_31_67);
                                if (succeeded)
                                {
                                  mercury__string__append_3_p_2((MR_String) "[|]", STATE_VARIABLE_Str_31_67, STATE_VARIABLE_Str_5);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_String STATE_VARIABLE_Str_33_71;

                                  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_nil", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_33_71);
                                  if (succeeded)
                                  {
                                    mercury__string__append_3_p_2((MR_String) "[]", STATE_VARIABLE_Str_33_71, STATE_VARIABLE_Str_5);
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    MR_String STATE_VARIABLE_Str_35_75;

                                    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_35_75);
                                    if (succeeded)
                                      succeeded = demangle__fix_mangled_ascii_chars_2_p_0(STATE_VARIABLE_Str_35_75, STATE_VARIABLE_Str_5);
                                    else
                                    {
                                      *STATE_VARIABLE_Str_5 = STATE_VARIABLE_Str_0_4;
                                      succeeded = MR_TRUE;
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
  return succeeded;
}

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
  MR_String STATE_VARIABLE_Str_0_6,
  MR_String * STATE_VARIABLE_Str_7)
{
  MR_bool succeeded;
  MR_Integer I_4;
  MR_Char C_5;
  MR_String STATE_VARIABLE_Str_1_8;
  MR_String STATE_VARIABLE_Str_3_11;
  MR_Integer Digit_12;
  MR_String STATE_VARIABLE_Str_1_13;
  MR_Char Char_14;
  MR_String STATE_VARIABLE_Str_2_10;
  MR_String Var_9;

  succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_0_6, &Char_14, &STATE_VARIABLE_Str_1_13);
  if (succeeded)
  {
    succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_14, &Digit_12);
    if (succeeded)
    {
      succeeded = demangle__remove_int_2_4_p_0(Digit_12, &I_4, STATE_VARIABLE_Str_1_13, &STATE_VARIABLE_Str_1_8);
      if (succeeded)
      {
        Var_9 = (MR_String) "_";
        succeeded = mercury__string__remove_prefix_3_p_0(Var_9, STATE_VARIABLE_Str_1_8, &STATE_VARIABLE_Str_2_10);
        if (succeeded)
          succeeded = demangle__fix_mangled_ascii_chars_2_p_0(STATE_VARIABLE_Str_2_10, &STATE_VARIABLE_Str_3_11);
        else
        {
          STATE_VARIABLE_Str_3_11 = STATE_VARIABLE_Str_1_8;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          succeeded = mercury__char__to_int_2_p_2(&C_5, I_4);
          if (succeeded)
          {
            mercury__string__first_char_3_p_4(STATE_VARIABLE_Str_7, C_5, STATE_VARIABLE_Str_3_11);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
demangle__format_proc_10_p_0(
  MR_Word Category_11,
  MR_Word MaybeModule_12,
  MR_String PredOrFunc_13,
  MR_String PredName_14,
  MR_Integer Arity_15,
  MR_Integer ModeNum_16,
  MR_Word HigherOrder_17,
  MR_Word UnusedArgs_18,
  MR_Word MaybeInternalLabelNum_19,
  MR_String * DemangledName_20)
{
  MR_String QualifiedName_21;
  MR_String MainStr_22;
  MR_String HOStr_29;
  MR_String UAStr_32;
  MR_String LabelStr_34;
  MR_String Var_119;
  MR_String Var_120;
  MR_String Var_121;
  MR_String Var_122;

  demangle__format_maybe_module_3_p_0(MaybeModule_12, PredName_14, &QualifiedName_21);
  switch (MR_tag((MR_Word) Category_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Category_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_249;
            MR_String Var_256;
            MR_String Var_258;
            MR_String Var_259;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_15, &Var_249);
            Var_256 = mercury__string__f_43_43_2_f_0(Var_249, (MR_String) "\'");
            Var_258 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_256);
            Var_259 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_258);
            MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "index/2 predicate for type \140", Var_259);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_124;
            MR_String Var_132;
            MR_String Var_133;
            MR_String Var_140;
            MR_String Var_142;
            MR_String Var_143;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), ModeNum_16, &Var_124);
            Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", Var_124);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_15, &Var_133);
            Var_140 = mercury__string__f_43_43_2_f_0(Var_133, Var_132);
            Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_140);
            Var_143 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_142);
            MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "unification predicate for type \140", Var_143);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_262;
            MR_String Var_269;
            MR_String Var_271;
            MR_String Var_272;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_15, &Var_262);
            Var_269 = mercury__string__f_43_43_2_f_0(Var_262, (MR_String) "\'");
            Var_271 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_269);
            Var_272 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_271);
            MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "compare/3 predicate for type \140", Var_272);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_145;
            MR_String Var_153;
            MR_String Var_154;
            MR_String Var_161;
            MR_String Var_163;
            MR_String Var_164;
            MR_String Var_166;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), ModeNum_16, &Var_145);
            Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", Var_145);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_15, &Var_154);
            Var_161 = mercury__string__f_43_43_2_f_0(Var_154, Var_153);
            Var_163 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_161);
            Var_164 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_163);
            Var_166 = mercury__string__f_43_43_2_f_0((MR_String) " \140", Var_164);
            MainStr_22 = mercury__string__f_43_43_2_f_0(PredOrFunc_13, Var_166);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_23 = ((MR_Word) ((MR_hl_field(1, Category_11, 0))));
        MR_Integer Line_24 = ((MR_Integer) ((MR_hl_field(1, Category_11, 1))));
        MR_Integer Seq_25 = ((MR_Integer) ((MR_hl_field(1, Category_11, 2))));
        MR_String IntroPredOrFunc_26 = ((MR_String) ((MR_hl_field(1, Category_11, 3))));

        switch (MR_tag((MR_Word) Type_23)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(Type_23)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_String Var_194;
                  MR_String Var_202;
                  MR_String Var_203;
                  MR_String Var_205;
                  MR_String Var_206;
                  MR_String Var_213;
                  MR_String Var_215;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Line_24, &Var_194);
                  Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", Var_194);
                  Var_203 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_202);
                  Var_205 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", Var_203);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Seq_25, &Var_206);
                  Var_213 = mercury__string__f_43_43_2_f_0(Var_206, Var_205);
                  Var_215 = mercury__string__f_43_43_2_f_0((MR_String) " goal (#", Var_213);
                  MainStr_22 = mercury__string__f_43_43_2_f_0(IntroPredOrFunc_26, Var_215);
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String Var_216;
                  MR_String Var_224;
                  MR_String Var_225;
                  MR_String Var_227;
                  MR_String Var_228;
                  MR_String Var_235;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Line_24, &Var_216);
                  Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", Var_216);
                  Var_225 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_224);
                  Var_227 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", Var_225);
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Seq_25, &Var_228);
                  Var_235 = mercury__string__f_43_43_2_f_0(Var_228, Var_227);
                  MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "deforestation procedure (#", Var_235);
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_String Var_237;
                  MR_String Var_245;
                  MR_String Var_246;

                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Line_24, &Var_237);
                  Var_245 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", Var_237);
                  Var_246 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_245);
                  MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "accumulator procedure from \140", Var_246);
                }
                break;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String TypeSpec_27 = ((MR_String) ((MR_hl_field(1, Type_23, 0))));
              MR_String Var_168;
              MR_String Var_170;
              MR_String Var_171;
              MR_String Var_178;
              MR_String Var_180;
              MR_String Var_181;
              MR_String Var_188;
              MR_String Var_190;
              MR_String Var_191;
              MR_String Var_193;

              Var_168 = mercury__string__f_43_43_2_f_0(TypeSpec_27, (MR_String) ")");
              Var_170 = mercury__string__f_43_43_2_f_0((MR_String) " (type specialized ", Var_168);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), ModeNum_16, &Var_171);
              Var_178 = mercury__string__f_43_43_2_f_0(Var_171, Var_170);
              Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", Var_178);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Arity_15, &Var_181);
              Var_188 = mercury__string__f_43_43_2_f_0(Var_181, Var_180);
              Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_188);
              Var_191 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_190);
              Var_193 = mercury__string__f_43_43_2_f_0((MR_String) " \140", Var_191);
              MainStr_22 = mercury__string__f_43_43_2_f_0(PredOrFunc_13, Var_193);
            }
            break;
        }
      }
      break;
  }
  if ((HigherOrder_17 == (MR_Word) ((MR_Unsigned) 0U)))
    HOStr_29 = (MR_String) "";
  else
  {
    MR_Integer HO_Num_28 = ((MR_Integer) ((MR_hl_field(1, HigherOrder_17, 0))));
    MR_String Var_275;
    MR_String Var_282;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), HO_Num_28, &Var_275);
    Var_282 = mercury__string__f_43_43_2_f_0(Var_275, (MR_String) "])");
    HOStr_29 = mercury__string__f_43_43_2_f_0((MR_String) " (specialized [#", Var_282);
  }
  if ((UnusedArgs_18 == (MR_Word) ((MR_Unsigned) 0U)))
    UAStr_32 = (MR_String) "";
  else
  {
    MR_Integer UA_Num_30;
    MR_Word Extra_31;
    MR_Word Var_105 = ((MR_Word) ((MR_hl_field(1, UnusedArgs_18, 0))));

    UA_Num_30 = ((MR_Integer) ((MR_hl_field(0, Var_105, 0))));
    Extra_31 = ((MR_Word) ((MR_hl_field(0, Var_105, 1))));
    switch (Extra_31) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_295;
          MR_String Var_302;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), UA_Num_30, &Var_295);
          Var_302 = mercury__string__f_43_43_2_f_0(Var_295, (MR_String) "])");
          UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus unused args [#", Var_302);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_285;
          MR_String Var_292;

          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), UA_Num_30, &Var_285);
          Var_292 = mercury__string__f_43_43_2_f_0(Var_285, (MR_String) "])");
          UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus extra unused args [#", Var_292);
        }
        break;
    }
  }
  if ((MaybeInternalLabelNum_19 == (MR_Word) ((MR_Unsigned) 0U)))
    LabelStr_34 = (MR_String) "";
  else
  {
    MR_Integer Internal_33 = ((MR_Integer) ((MR_hl_field(1, MaybeInternalLabelNum_19, 0))));
    MR_String Var_304;

    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&demangle_scalar_common_2[1]), Internal_33, &Var_304);
    LabelStr_34 = mercury__string__f_43_43_2_f_0((MR_String) " label ", Var_304);
  }
  Var_122 = mercury__string__f_43_43_2_f_0(LabelStr_34, (MR_String) ">");
  Var_121 = mercury__string__f_43_43_2_f_0(UAStr_32, Var_122);
  Var_120 = mercury__string__f_43_43_2_f_0(HOStr_29, Var_121);
  Var_119 = mercury__string__f_43_43_2_f_0(MainStr_22, Var_120);
  *DemangledName_20 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_119);
}

static void MR_CALL 
demangle__format_maybe_module_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_2,
  MR_String * QualifiedName_3)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *QualifiedName_3 = Name_2;
  else
  {
    MR_String Module_10 = ((MR_String) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_String Var_20;

    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", Name_2);
    *QualifiedName_3 = mercury__string__f_43_43_2_f_0(Module_10, Var_20);
  }
}

static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
  MR_String * PredName_6,
  MR_Word Category0_7,
  MR_Word * Category_8,
  MR_String STATE_VARIABLE_Str_0_21,
  MR_String * STATE_VARIABLE_Str_22)
{
  MR_bool succeeded;
  MR_Word IntroducedPredType0_11;
  MR_String STATE_VARIABLE_Str_4_30;
  MR_String STATE_VARIABLE_Str_1_24;

  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "IntroducedFrom__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_1_24);
  if (succeeded)
  {
    STATE_VARIABLE_Str_4_30 = STATE_VARIABLE_Str_1_24;
    IntroducedPredType0_11 = (MR_Word) ((MR_Unsigned) 0U);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_String STATE_VARIABLE_Str_2_26;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "DeforestationIn__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_2_26);
    if (succeeded)
    {
      STATE_VARIABLE_Str_4_30 = STATE_VARIABLE_Str_2_26;
      IntroducedPredType0_11 = (MR_Word) ((MR_Unsigned) 4U);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_3_28;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "AccFrom__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_3_28);
      if (succeeded)
      {
        STATE_VARIABLE_Str_4_30 = STATE_VARIABLE_Str_3_28;
        IntroducedPredType0_11 = (MR_Word) ((MR_Unsigned) 8U);
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeSpecOf__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_4_30);
        if (succeeded)
        {
          IntroducedPredType0_11 = (MR_Word) (MR_mkword(1, &demangle_scalar_common_2[0]));
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_String LambdaPredOrFunc_12;
    MR_String STATE_VARIABLE_Str_8_38;
    MR_String STATE_VARIABLE_Str_5_33;
    MR_String PredName1_15;
    MR_Word IntroducedPredType_18;
    MR_Integer Seq_19;
    MR_Integer Line_20;
    MR_String STATE_VARIABLE_Str_10_40;
    MR_Word MPredName_14;
    MR_String STATE_VARIABLE_Str_9_39;
    MR_Integer Index_44;
    MR_String Var_48;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "pred__", STATE_VARIABLE_Str_4_30, &STATE_VARIABLE_Str_5_33);
    if (succeeded)
    {
      STATE_VARIABLE_Str_8_38 = STATE_VARIABLE_Str_5_33;
      LambdaPredOrFunc_12 = (MR_String) "pred";
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_6_35;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "func__", STATE_VARIABLE_Str_4_30, &STATE_VARIABLE_Str_6_35);
      if (succeeded)
      {
        STATE_VARIABLE_Str_8_38 = STATE_VARIABLE_Str_6_35;
        LambdaPredOrFunc_12 = (MR_String) "func";
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String Var_36;

        succeeded = ((MR_tag((MR_Word) IntroducedPredType0_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          Var_36 = (MR_String) "pred_or_func__";
          succeeded = mercury__string__remove_prefix_3_p_0(Var_36, STATE_VARIABLE_Str_4_30, &STATE_VARIABLE_Str_8_38);
          if (succeeded)
          {
            LambdaPredOrFunc_12 = (MR_String) "";
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      Var_48 = (MR_String) "__";
      succeeded = mercury__string__sub_string_search_3_p_0(STATE_VARIABLE_Str_8_38, Var_48, &Index_44);
      if (succeeded)
      {
        MR_String PredName_45;
        MR_Integer Len_46;
        MR_Integer Index2_47;

        mercury__string__left_3_p_0(STATE_VARIABLE_Str_8_38, Index_44, &PredName_45);
        mercury__string__length_2_p_0(STATE_VARIABLE_Str_8_38, &Len_46);
        Index2_47 = (MR_Integer) ((MR_Unsigned) Index_44 + (MR_Unsigned) 2);
        mercury__string__between_4_p_0(STATE_VARIABLE_Str_8_38, Index2_47, Len_46, &STATE_VARIABLE_Str_9_39);
        {
          MPredName_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MPredName_14, 0) = ((MR_Box) (PredName_45));
        }
      }
      else
      {
        STATE_VARIABLE_Str_9_39 = STATE_VARIABLE_Str_8_38;
        MPredName_14 = (MR_Word) ((MR_Unsigned) 0U);
      }
      succeeded = (MPredName_14 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        PredName1_15 = ((MR_String) ((MR_hl_field(1, MPredName_14, 0))));
        succeeded = ((MR_tag((MR_Word) IntroducedPredType0_11)) == (MR_Integer) 1);
        if (succeeded)
        {
          MR_String TypeSpec_17;
          MR_Integer Length_50;
          MR_Integer NumBrackets_51;
          MR_Integer Index_52;
          MR_Integer Var_54;
          MR_Char Var_55;
          MR_Integer Var_56;
          MR_Integer Var_57;
          MR_Integer Var_58;
          MR_Char Var_59;

          mercury__string__length_2_p_0(STATE_VARIABLE_Str_9_39, &Length_50);
          succeeded = (Length_50 > (MR_Integer) 2);
          if (succeeded)
          {
            Var_54 = (MR_Integer) 0;
            Var_55 = (MR_Char) 91;
            mercury__string__unsafe_index_3_p_0(STATE_VARIABLE_Str_9_39, Var_54, &Var_59);
            succeeded = (Var_55 == Var_59);
            if (succeeded)
            {
              NumBrackets_51 = (MR_Integer) 0;
              Var_56 = (MR_Integer) 1;
              succeeded = demangle__find_matching_close_bracket_5_p_0(NumBrackets_51, Length_50, STATE_VARIABLE_Str_9_39, Var_56, &Index_52);
              if (succeeded)
              {
                Var_58 = (MR_Integer) 1;
                Var_57 = (MR_Integer) ((MR_Unsigned) Index_52 + (MR_Unsigned) Var_58);
                mercury__string__split_4_p_0(STATE_VARIABLE_Str_9_39, Var_57, &TypeSpec_17, &STATE_VARIABLE_Str_10_40);
                Seq_19 = (MR_Integer) 0;
                Line_20 = (MR_Integer) 0;
                {
                  IntroducedPredType_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, IntroducedPredType_18, 0) = ((MR_Box) (TypeSpec_17));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        else
        {
          MR_String STATE_VARIABLE_Str_11_41;
          MR_String Var_42;
          MR_String STATE_VARIABLE_Str_12_43;
          MR_Integer Digit_60;
          MR_String STATE_VARIABLE_Str_1_61;
          MR_Char Char_62;
          MR_Integer Digit_63;
          MR_String STATE_VARIABLE_Str_1_64;
          MR_Char Char_65;

          IntroducedPredType_18 = IntroducedPredType0_11;
          succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_9_39, &Char_62, &STATE_VARIABLE_Str_1_61);
          if (succeeded)
          {
            succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_62, &Digit_60);
            if (succeeded)
            {
              succeeded = demangle__remove_int_2_4_p_0(Digit_60, &Line_20, STATE_VARIABLE_Str_1_61, &STATE_VARIABLE_Str_11_41);
              if (succeeded)
              {
                Var_42 = (MR_String) "__";
                succeeded = mercury__string__remove_prefix_3_p_0(Var_42, STATE_VARIABLE_Str_11_41, &STATE_VARIABLE_Str_12_43);
                if (succeeded)
                {
                  succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_12_43, &Char_65, &STATE_VARIABLE_Str_1_64);
                  if (succeeded)
                  {
                    succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_65, &Digit_63);
                    if (succeeded)
                      succeeded = demangle__remove_int_2_4_p_0(Digit_63, &Seq_19, STATE_VARIABLE_Str_1_64, &STATE_VARIABLE_Str_10_40);
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        *STATE_VARIABLE_Str_22 = STATE_VARIABLE_Str_10_40;
        *PredName_6 = PredName1_15;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Category_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (IntroducedPredType_18));
          MR_hl_field(1, base, 1) = ((MR_Box) (Line_20));
          MR_hl_field(1, base, 2) = ((MR_Box) (Seq_19));
          MR_hl_field(1, base, 3) = ((MR_Box) (LambdaPredOrFunc_12));
        }
      }
      else
      {
        *Category_8 = (MR_Word) ((MR_Unsigned) 12U);
        *PredName_6 = STATE_VARIABLE_Str_0_21;
        *STATE_VARIABLE_Str_22 = STATE_VARIABLE_Str_8_38;
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    *Category_8 = Category0_7;
    *PredName_6 = STATE_VARIABLE_Str_0_21;
    *STATE_VARIABLE_Str_22 = STATE_VARIABLE_Str_0_21;
    succeeded = MR_TRUE;
  }
  return succeeded;
}

static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
  MR_Integer NumBrackets0_6,
  MR_Integer Length_7,
  MR_String String_8,
  MR_Integer Index0_9,
  MR_Integer * Index_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (Index0_9 < Length_7);
    MR_Char Char_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      mercury__string__unsafe_index_3_p_0(String_8, Index0_9, &Char_11);
      succeeded = (Char_11 == (MR_Char) 93);
      if (succeeded)
        succeeded = (NumBrackets0_6 == (MR_Integer) 0);
      if (succeeded)
      {
        *Index_10 = Index0_9;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer NumBrackets_12;
        MR_Integer Var_15;
        MR_Integer next_value_of_NumBrackets0_6;
        MR_Integer next_value_of_Index0_9;

        succeeded = (Char_11 == (MR_Char) 91);
        if (succeeded)
          NumBrackets_12 = (MR_Integer) ((MR_Unsigned) NumBrackets0_6 + (MR_Unsigned) 1);
        else
        {
          succeeded = (Char_11 == (MR_Char) 93);
          if (succeeded)
            NumBrackets_12 = (MR_Integer) ((MR_Unsigned) NumBrackets0_6 - (MR_Unsigned) 1);
          else
            NumBrackets_12 = NumBrackets0_6;
        }
        Var_15 = (MR_Integer) ((MR_Unsigned) Index0_9 + (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_NumBrackets0_6 = NumBrackets_12;
        next_value_of_Index0_9 = Var_15;
        NumBrackets0_6 = next_value_of_NumBrackets0_6;
        Index0_9 = next_value_of_Index0_9;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
  MR_Integer Int0_5,
  MR_Integer * Int_6,
  MR_String STATE_VARIABLE_Str_0_10,
  MR_String * STATE_VARIABLE_Str_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Next_8;
    MR_String STATE_VARIABLE_Str_1_12;
    MR_Char Char_15;

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_0_10, &Char_15, &STATE_VARIABLE_Str_1_12);
    if (succeeded)
      succeeded = mercury__char__decimal_digit_to_int_2_p_0(Char_15, &Next_8);
    if (succeeded)
    {
      MR_Integer Int1_9;
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Int0_5 * (MR_Unsigned) 10);
      MR_Integer next_value_of_Int0_5;
      MR_String next_value_of_STATE_VARIABLE_Str_0_10;

      Int1_9 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) Next_8);
      // direct tailcall eliminated
      ;
      next_value_of_Int0_5 = Int1_9;
      next_value_of_STATE_VARIABLE_Str_0_10 = STATE_VARIABLE_Str_1_12;
      Int0_5 = next_value_of_Int0_5;
      STATE_VARIABLE_Str_0_10 = next_value_of_STATE_VARIABLE_Str_0_10;
      continue;
    }
    else
    {
      *Int_6 = Int0_5;
      *STATE_VARIABLE_Str_11 = STATE_VARIABLE_Str_0_10;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = demangle____Unify____data_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  demangle____Compare____data_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = demangle____Unify____introduced_pred_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  demangle____Compare____introduced_pred_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = demangle____Unify____pred_category_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  demangle____Compare____pred_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__demangle__init(void)
{
}

void mercury__demangle__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&demangle__demangle__type_ctor_info_data_category_0);
  MR_register_type_ctor_info(&demangle__demangle__type_ctor_info_introduced_pred_type_0);
  MR_register_type_ctor_info(&demangle__demangle__type_ctor_info_pred_category_0);
}

void mercury__demangle__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__demangle__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module demangle.
