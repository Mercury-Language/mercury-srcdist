/*
** Automatically generated from `demangle.m'
** by the Mercury compiler,
** version rotd-2018-05-09
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

static const MR_EnumFunctorDescPtr demangle__demangle__enum_value_ordered_data_category_0[4];

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
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static MR_bool MR_CALL 
demangle__demangle_from_c_2_p_0(
  MR_String STATE_VARIABLE_Str_0_4,
  MR_String * STATE_VARIABLE_Str_5);

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
demangle__format_data_5_p_0(
  MR_Word Category_6,
  MR_Word MaybeModule_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_String * Result_10);

static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
  MR_String STATE_VARIABLE_Str_0_28,
  MR_String * STATE_VARIABLE_Str_29);

static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
  MR_Integer ModeNum0_5,
  MR_Word * Category0_6,
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9);

static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
  MR_String STATE_VARIABLE_Str_0_20,
  MR_String * STATE_VARIABLE_Str_21);

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

static void MR_CALL 
demangle__insert_prefix_3_p_0(
  MR_String Prefix_4,
  MR_String Name0_5,
  MR_String * Name_6);

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

static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
  MR_Word * HigherOrder_6,
  MR_Integer ModeNum0_7,
  MR_Integer * ModeNum_8,
  MR_String STATE_VARIABLE_Str_0_11,
  MR_String * STATE_VARIABLE_Str_12);

static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
  MR_Word * UnusedArgs_6,
  MR_Integer ModeNum0_7,
  MR_Integer * ModeNum_8,
  MR_String STATE_VARIABLE_Str_0_11,
  MR_String * STATE_VARIABLE_Str_12);

static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
  MR_Integer * Int_4,
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9);

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

static /* final */ const MR_Box demangle_scalar_common_3[2][1];


/* sealed */ struct demangle__vector_common_type_2_0_s {
  const MR_Integer demangle__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct demangle__vector_common_type_2_0_s demangle_vector_common_2[70];



static /* final */ const MR_Box demangle_scalar_common_1[16][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "UnusedArgs__")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "TypeSpecOf__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[0])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "AccFrom__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "DeforestationIn__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "IntroducedFrom__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[3])))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "__")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "UnusedArgs__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "TypeSpecOf__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[6])))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "AccFrom__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[7])))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "DeforestationIn__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[8])))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "IntroducedFrom__")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[9])))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "common_")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "type_ctor_functors_")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[11])))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "type_ctor_layout_")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[12])))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "type_ctor_info_")),
    ((MR_Box) (MR_mkword(MR_mktag(1), &demangle_scalar_common_1[13])))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "arity")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box demangle_scalar_common_3[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};


static /* final */ const struct demangle__vector_common_type_2_0_s demangle_vector_common_2[70] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 2 },
  /* row 3 */   {     (MR_Integer) 3 },
  /* row 4 */   {     (MR_Integer) 4 },
  /* row 5 */   {     (MR_Integer) 5 },
  /* row 6 */   {     (MR_Integer) 6 },
  /* row 7 */   {     (MR_Integer) 7 },
  /* row 8 */   {     (MR_Integer) 8 },
  /* row 9 */   {     (MR_Integer) 9 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 1 },
  /* row 12 */   {     (MR_Integer) 2 },
  /* row 13 */   {     (MR_Integer) 3 },
  /* row 14 */   {     (MR_Integer) 4 },
  /* row 15 */   {     (MR_Integer) 5 },
  /* row 16 */   {     (MR_Integer) 6 },
  /* row 17 */   {     (MR_Integer) 7 },
  /* row 18 */   {     (MR_Integer) 8 },
  /* row 19 */   {     (MR_Integer) 9 },
  /* row 20 */   {     (MR_Integer) 0 },
  /* row 21 */   {     (MR_Integer) 1 },
  /* row 22 */   {     (MR_Integer) 2 },
  /* row 23 */   {     (MR_Integer) 3 },
  /* row 24 */   {     (MR_Integer) 4 },
  /* row 25 */   {     (MR_Integer) 5 },
  /* row 26 */   {     (MR_Integer) 6 },
  /* row 27 */   {     (MR_Integer) 7 },
  /* row 28 */   {     (MR_Integer) 8 },
  /* row 29 */   {     (MR_Integer) 9 },
  /* row 30 */   {     (MR_Integer) 0 },
  /* row 31 */   {     (MR_Integer) 1 },
  /* row 32 */   {     (MR_Integer) 2 },
  /* row 33 */   {     (MR_Integer) 3 },
  /* row 34 */   {     (MR_Integer) 4 },
  /* row 35 */   {     (MR_Integer) 5 },
  /* row 36 */   {     (MR_Integer) 6 },
  /* row 37 */   {     (MR_Integer) 7 },
  /* row 38 */   {     (MR_Integer) 8 },
  /* row 39 */   {     (MR_Integer) 9 },
  /* row 40 */   {     (MR_Integer) 0 },
  /* row 41 */   {     (MR_Integer) 1 },
  /* row 42 */   {     (MR_Integer) 2 },
  /* row 43 */   {     (MR_Integer) 3 },
  /* row 44 */   {     (MR_Integer) 4 },
  /* row 45 */   {     (MR_Integer) 5 },
  /* row 46 */   {     (MR_Integer) 6 },
  /* row 47 */   {     (MR_Integer) 7 },
  /* row 48 */   {     (MR_Integer) 8 },
  /* row 49 */   {     (MR_Integer) 9 },
  /* row 50 */   {     (MR_Integer) 0 },
  /* row 51 */   {     (MR_Integer) 1 },
  /* row 52 */   {     (MR_Integer) 2 },
  /* row 53 */   {     (MR_Integer) 3 },
  /* row 54 */   {     (MR_Integer) 4 },
  /* row 55 */   {     (MR_Integer) 5 },
  /* row 56 */   {     (MR_Integer) 6 },
  /* row 57 */   {     (MR_Integer) 7 },
  /* row 58 */   {     (MR_Integer) 8 },
  /* row 59 */   {     (MR_Integer) 9 },
  /* row 60 */   {     (MR_Integer) 0 },
  /* row 61 */   {     (MR_Integer) 1 },
  /* row 62 */   {     (MR_Integer) 2 },
  /* row 63 */   {     (MR_Integer) 3 },
  /* row 64 */   {     (MR_Integer) 4 },
  /* row 65 */   {     (MR_Integer) 5 },
  /* row 66 */   {     (MR_Integer) 6 },
  /* row 67 */   {     (MR_Integer) 7 },
  /* row 68 */   {     (MR_Integer) 8 },
  /* row 69 */   {     (MR_Integer) 9 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_0 = {
  (MR_String) "common",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_1 = {
  (MR_String) "info",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_2 = {
  (MR_String) "layout",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_3 = {
  (MR_String) "functors",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr demangle__demangle__enum_value_ordered_data_category_0[4] = {
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
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (demangle____Unify____data_category_0_0_10001)),
  ((MR_Box) (demangle____Compare____data_category_0_0_10001)),
  (MR_String) "demangle",
  (MR_String) "data_category",
  {     demangle__demangle__enum_name_ordered_data_category_0 },
  {     demangle__demangle__enum_value_ordered_data_category_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  demangle__demangle__functor_number_map_data_category_0
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_0 = {
  (MR_String) "ipt_lambda",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_1 = {
  (MR_String) "ipt_deforestation",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_2 = {
  (MR_String) "ipt_accumulator",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo demangle__demangle__field_types_introduced_pred_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_3 = {
  (MR_String) "ipt_type_spec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  demangle__demangle__field_types_introduced_pred_type_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_0[3] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_0,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_1,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_2
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_1[1] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_3
};

static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_introduced_pred_type_0[2] = {
  {
    (MR_Integer) 3,
    MR_SECTAG_LOCAL,
    demangle__demangle__du_stag_ordered_introduced_pred_type_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    demangle__demangle__du_stag_ordered_introduced_pred_type_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (demangle____Unify____introduced_pred_type_0_0_10001)),
  ((MR_Box) (demangle____Compare____introduced_pred_type_0_0_10001)),
  (MR_String) "demangle",
  (MR_String) "introduced_pred_type",
  {     demangle__demangle__du_name_ordered_introduced_pred_type_0 },
  {     demangle__demangle__du_ptag_ordered_introduced_pred_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  demangle__demangle__functor_number_map_introduced_pred_type_0
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_0 = {
  (MR_String) "index",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_1 = {
  (MR_String) "unify",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_2 = {
  (MR_String) "compare",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_3 = {
  (MR_String) "ordinary",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo demangle__demangle__field_types_pred_category_0_4[4] = {
  (MR_PseudoTypeInfo) &demangle__demangle__type_ctor_info_introduced_pred_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_4 = {
  (MR_String) "introduced",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  demangle__demangle__field_types_pred_category_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_0[4] = {
  &demangle__demangle__du_functor_desc_pred_category_0_0,
  &demangle__demangle__du_functor_desc_pred_category_0_1,
  &demangle__demangle__du_functor_desc_pred_category_0_2,
  &demangle__demangle__du_functor_desc_pred_category_0_3
};

static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_1[1] = {
  &demangle__demangle__du_functor_desc_pred_category_0_4
};

static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_pred_category_0[2] = {
  {
    (MR_Integer) 4,
    MR_SECTAG_LOCAL,
    demangle__demangle__du_stag_ordered_pred_category_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    demangle__demangle__du_stag_ordered_pred_category_0_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (demangle____Unify____pred_category_0_0_10001)),
  ((MR_Box) (demangle____Compare____pred_category_0_0_10001)),
  (MR_String) "demangle",
  (MR_String) "pred_category",
  {     demangle__demangle__du_name_ordered_pred_category_0 },
  {     demangle__demangle__du_ptag_ordered_pred_category_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  demangle__demangle__functor_number_map_pred_category_0
};

static void MR_CALL 
demangle____Compare____pred_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_47 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_48 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_47 == CastY_48);
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
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
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
          {
            MR_String Var_53 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer ArgY2_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer ArgY3_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_String ArgY4_43 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word Var_44;

                  demangle____Compare____introduced_pred_type_0_0(&Var_44, Var_56, ArgY1_37);
                  succeeded = (Var_44 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_44;
                  else
                  {
                    MR_Word Var_45;

                    mercury__private_builtin__builtin_compare_int_3_p_0(&Var_45, Var_55, ArgY2_39);
                    succeeded = (Var_45 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_45;
                    else
                    {
                      MR_Word Var_46;

                      mercury__private_builtin__builtin_compare_int_3_p_0(&Var_46, Var_54, ArgY3_41);
                      succeeded = (Var_46 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_46;
                      else
                        mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_53, ArgY4_43);
                    }
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_12;
            MR_Integer ArgX2_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ArgY2_14;
            MR_Integer ArgX3_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer ArgY3_16;
            MR_String ArgX4_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
            MR_String ArgY4_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_18 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
              succeeded = demangle____Unify____introduced_pred_type_0_0(ArgX1_11, ArgY1_12);
              if (succeeded)
              {
                succeeded = (ArgX2_13 == ArgY2_14);
                if (succeeded)
                {
                  succeeded = (ArgX3_15 == ArgY3_16);
                  if (succeeded)
                    succeeded = (strcmp(ArgX4_17, ArgY4_18) == 0);
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
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
                      *HeadVar__1_1 = (MR_Integer) 1;
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
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
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
          {
            MR_String Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_15, ArgY1_11);
                }
                break;
            }
          }
          break;
      }
  }
}

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_8 == CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_9 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_10 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

static void MR_CALL 
demangle____Compare____data_category_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
demangle__demangle_2_p_0(
  MR_String MangledName_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded;
    MR_String DemangledName_5;
    MR_String STATE_VARIABLE_Name_11_14;
    MR_String STATE_VARIABLE_Name_7_10;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", MangledName_3, &STATE_VARIABLE_Name_7_10);
    if (succeeded)
      STATE_VARIABLE_Name_11_14 = STATE_VARIABLE_Name_7_10;
    else
    {
      MR_String STATE_VARIABLE_Name_9_12;
      MR_String STATE_VARIABLE_Str_8_20;
      MR_String STATE_VARIABLE_Str_8_26;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", MangledName_3, &STATE_VARIABLE_Str_8_20);
      if (succeeded)
        STATE_VARIABLE_Name_9_12 = STATE_VARIABLE_Str_8_20;
      else
        STATE_VARIABLE_Name_9_12 = MangledName_3;
      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", STATE_VARIABLE_Name_9_12, &STATE_VARIABLE_Str_8_26);
      if (succeeded)
        STATE_VARIABLE_Name_11_14 = STATE_VARIABLE_Str_8_26;
      else
        STATE_VARIABLE_Name_11_14 = STATE_VARIABLE_Name_9_12;
    }
    succeeded = demangle__demangle_from_c_2_p_0(STATE_VARIABLE_Name_11_14, &DemangledName_5);
    if (succeeded)
      *Name_4 = DemangledName_5;
    else
      *Name_4 = MangledName_3;
  }
}

static MR_bool MR_CALL 
demangle__demangle_from_c_2_p_0(
  MR_String STATE_VARIABLE_Str_0_4,
  MR_String * STATE_VARIABLE_Str_5)
{
  {
    MR_bool succeeded;
    MR_String STATE_VARIABLE_Str_6_6;

    succeeded = demangle__demangle_proc_hl_2_p_0(STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_6_6);
    if (succeeded)
    {
      *STATE_VARIABLE_Str_5 = STATE_VARIABLE_Str_6_6;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_7_7;

      succeeded = demangle__demangle_proc_ll_2_p_0(STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_7_7);
      if (succeeded)
      {
        *STATE_VARIABLE_Str_5 = STATE_VARIABLE_Str_7_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String STATE_VARIABLE_Str_8_8;
        MR_Word HighLevel_14;
        MR_Word MaybeModule0_15;
        MR_Word MaybeModule_16;
        MR_Word DataCategory_19;
        MR_Integer Arity_20;
        MR_String STATE_VARIABLE_Str_16_24;
        MR_String STATE_VARIABLE_Str_18_26;
        MR_String STATE_VARIABLE_Str_38_46;
        MR_String STATE_VARIABLE_Str_52_60;
        MR_String STATE_VARIABLE_Str_14_22;
        MR_String Var_35;
        MR_String STATE_VARIABLE_Str_35_43;
        MR_String Var_42;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data_", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_14_22);
        if (succeeded)
        {
          STATE_VARIABLE_Str_16_24 = STATE_VARIABLE_Str_14_22;
          HighLevel_14 = (MR_Integer) 0;
        }
        else
        {
          MR_String STATE_VARIABLE_Str_8_68;

          HighLevel_14 = (MR_Integer) 1;
          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_8_68);
          if (succeeded)
            STATE_VARIABLE_Str_16_24 = STATE_VARIABLE_Str_8_68;
          else
            STATE_VARIABLE_Str_16_24 = STATE_VARIABLE_Str_0_4;
        }
        demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule0_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[14]), STATE_VARIABLE_Str_16_24, &STATE_VARIABLE_Str_18_26);
        succeeded = ((MR_tag((MR_Word) MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          Var_35 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule0_15, (MR_Integer) 0)));
          succeeded = (strcmp(Var_35, (MR_String) "") == 0);
        }
        if (succeeded)
        {
          MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          succeeded = MR_TRUE;
        }
        else
        {
          MR_String Twice_17;

          succeeded = (HighLevel_14 == (MR_Integer) 1);
          if (succeeded)
          {
            succeeded = ((MR_tag((MR_Word) MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
              Twice_17 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule0_15, (MR_Integer) 0)));
          }
          if (succeeded)
          {
            MR_String Once_18;
            MR_Integer Var_36;
            MR_Integer Var_37;
            MR_Integer Var_39;
            MR_Integer Var_40;
            MR_String Var_63;

            Var_37 = mercury__string__length_1_f_0(Twice_17);
            Var_36 = mercury__int__f_47_47_2_f_0(Var_37, (MR_Integer) 2);
            Once_18 = mercury__string__left_2_f_0(Twice_17, Var_36);
            Var_40 = mercury__string__length_1_f_0(Twice_17);
            Var_39 = mercury__int__f_47_47_2_f_0(Var_40, (MR_Integer) 2);
            Var_63 = mercury__string__right_2_f_0(Twice_17, Var_39);
            succeeded = (strcmp(Once_18, Var_63) == 0);
            if (succeeded)
            {
              {
                MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeModule_16, 0) = ((MR_Box) (Once_18));
              }
              succeeded = MR_TRUE;
            }
          }
          else
          {
            MaybeModule_16 = MaybeModule0_15;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          Var_42 = (MR_String) "type_ctor_info_";
          succeeded = mercury__string__remove_prefix_3_p_0(Var_42, STATE_VARIABLE_Str_18_26, &STATE_VARIABLE_Str_35_43);
          if (succeeded)
          {
            MR_String STATE_VARIABLE_Str_36_44;
            MR_String Var_45;

            DataCategory_19 = (MR_Integer) 1;
            succeeded = demangle__remove_trailing_int_3_p_0(&Arity_20, STATE_VARIABLE_Str_35_43, &STATE_VARIABLE_Str_36_44);
            if (succeeded)
            {
              Var_45 = (MR_String) "_";
              succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_36_44, Var_45, &STATE_VARIABLE_Str_38_46);
            }
          }
          else
          {
            MR_String STATE_VARIABLE_Str_40_48;

            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_layout_", STATE_VARIABLE_Str_18_26, &STATE_VARIABLE_Str_40_48);
            if (succeeded)
            {
              MR_String STATE_VARIABLE_Str_41_49;
              MR_String Var_50;

              DataCategory_19 = (MR_Integer) 2;
              succeeded = demangle__remove_trailing_int_3_p_0(&Arity_20, STATE_VARIABLE_Str_40_48, &STATE_VARIABLE_Str_41_49);
              if (succeeded)
              {
                Var_50 = (MR_String) "_";
                succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_41_49, Var_50, &STATE_VARIABLE_Str_38_46);
              }
            }
            else
            {
              MR_String STATE_VARIABLE_Str_45_53;

              succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_functors_", STATE_VARIABLE_Str_18_26, &STATE_VARIABLE_Str_45_53);
              if (succeeded)
              {
                MR_String STATE_VARIABLE_Str_46_54;
                MR_String Var_55;

                DataCategory_19 = (MR_Integer) 3;
                succeeded = demangle__remove_trailing_int_3_p_0(&Arity_20, STATE_VARIABLE_Str_45_53, &STATE_VARIABLE_Str_46_54);
                if (succeeded)
                {
                  Var_55 = (MR_String) "_";
                  succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_46_54, Var_55, &STATE_VARIABLE_Str_38_46);
                }
              }
              else
              {
                MR_String STATE_VARIABLE_Str_50_58;

                succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "common_", STATE_VARIABLE_Str_18_26, &STATE_VARIABLE_Str_50_58);
                if (succeeded)
                {
                  DataCategory_19 = (MR_Integer) 0;
                  succeeded = demangle__remove_trailing_int_3_p_0(&Arity_20, STATE_VARIABLE_Str_50_58, &STATE_VARIABLE_Str_38_46);
                }
              }
            }
          }
          if (succeeded)
          {
            succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_38_46, &STATE_VARIABLE_Str_52_60);
            if (succeeded)
              succeeded = demangle__format_data_5_p_0(DataCategory_19, MaybeModule_16, STATE_VARIABLE_Str_52_60, Arity_20, &STATE_VARIABLE_Str_8_8);
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_Str_5 = STATE_VARIABLE_Str_8_8;
          succeeded = MR_TRUE;
        }
        else
          succeeded = demangle__demangle_typeclass_info_2_p_0(STATE_VARIABLE_Str_0_4, STATE_VARIABLE_Str_5);
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9)
{
  {
    MR_bool succeeded;
    MR_String ClassName_4;
    MR_Integer ClassArity_5;
    MR_String Args_6;
    MR_String STATE_VARIABLE_Str_11_11;
    MR_String STATE_VARIABLE_Str_13_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_String STATE_VARIABLE_Str_16_16;
    MR_String Var_17;
    MR_Word Var_18;
    MR_String Var_19;
    MR_String STATE_VARIABLE_Str_20_20;
    MR_String STATE_VARIABLE_Str_21_21;
    MR_String Var_22;
    MR_String STATE_VARIABLE_Str_23_23;
    MR_String STATE_VARIABLE_Str_24_24;
    MR_String Var_32;
    MR_String Var_33;
    MR_String Var_34;
    MR_String Var_35;
    MR_String Var_36;
    MR_String Var_37;
    MR_Integer Digit_48;
    MR_String STATE_VARIABLE_Str_9_49;
    MR_Char Char_54;
    MR_String STATE_VARIABLE_Str_8_42;
    MR_String _Str_7;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data___", STATE_VARIABLE_Str_0_8, &STATE_VARIABLE_Str_8_42);
    if (succeeded)
      STATE_VARIABLE_Str_11_11 = STATE_VARIABLE_Str_8_42;
    else
      STATE_VARIABLE_Str_11_11 = STATE_VARIABLE_Str_0_8;
    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "base_typeclass_info_", STATE_VARIABLE_Str_11_11, &STATE_VARIABLE_Str_13_13);
    if (succeeded)
    {
      Var_17 = (MR_String) "arity";
      Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      Var_15 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]);
      demangle__remove_maybe_module_prefix_4_p_0(&Var_14, Var_15, STATE_VARIABLE_Str_13_13, &STATE_VARIABLE_Str_16_16);
      succeeded = ((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_14, (MR_Integer) 0)));
        succeeded = (strcmp(ClassName_4, (MR_String) "") == 0);
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_19 = (MR_String) "arity";
          succeeded = mercury__string__remove_prefix_3_p_0(Var_19, STATE_VARIABLE_Str_16_16, &STATE_VARIABLE_Str_20_20);
          if (succeeded)
          {
            succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_20_20, &Char_54, &STATE_VARIABLE_Str_9_49);
            if (succeeded)
            {
              if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) Char_54 - (MR_Unsigned) (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
              {
                Digit_48 = ((&demangle_vector_common_2[60 + (MR_Integer) ((MR_Unsigned) Char_54 - (MR_Unsigned) (MR_Integer) 48)]))->demangle__vector_common_type_2_0__vct_2_f_0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                succeeded = demangle__remove_int_2_4_p_0(Digit_48, &ClassArity_5, STATE_VARIABLE_Str_9_49, &STATE_VARIABLE_Str_21_21);
                if (succeeded)
                {
                  Var_22 = (MR_String) "__";
                  succeeded = mercury__string__remove_prefix_3_p_0(Var_22, STATE_VARIABLE_Str_21_21, &STATE_VARIABLE_Str_23_23);
                  if (succeeded)
                  {
                    succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_23_23, &STATE_VARIABLE_Str_24_24);
                    if (succeeded)
                    {
                      succeeded = demangle__demangle_class_args_4_p_0(ClassArity_5, &Args_6, STATE_VARIABLE_Str_24_24, &_Str_7);
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
}

static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
  MR_Integer Num_5,
  MR_String * FormattedArgs_6,
  MR_String STATE_VARIABLE_Str_0_13,
  MR_String * STATE_VARIABLE_Str_14)
{
  {
    MR_bool succeeded;
    MR_String TypeName_8;
    MR_Integer TypeArity_9;
    MR_String Sep_10;
    MR_String Rest_12;
    MR_Word Var_15;
    MR_String STATE_VARIABLE_Str_17_17;
    MR_String Var_20;
    MR_String STATE_VARIABLE_Str_21_21;
    MR_String STATE_VARIABLE_Str_22_22;
    MR_String Var_23;
    MR_String STATE_VARIABLE_Str_24_24;
    MR_String Var_38;
    MR_String Var_39;
    MR_Word Var_40;
    MR_Word Var_41;
    MR_Word Var_42;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_45;
    MR_String Var_46;
    MR_String Var_47;
    MR_String Var_48;
    MR_Integer Digit_53;
    MR_String STATE_VARIABLE_Str_9_54;
    MR_Char Char_59;
    MR_Integer Var_25;

    demangle__remove_maybe_module_prefix_4_p_0(&Var_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]), STATE_VARIABLE_Str_0_13, &STATE_VARIABLE_Str_17_17);
    succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0)));
      succeeded = (strcmp(TypeName_8, (MR_String) "") == 0);
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_20 = (MR_String) "arity";
        succeeded = mercury__string__remove_prefix_3_p_0(Var_20, STATE_VARIABLE_Str_17_17, &STATE_VARIABLE_Str_21_21);
        if (succeeded)
        {
          succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_21_21, &Char_59, &STATE_VARIABLE_Str_9_54);
          if (succeeded)
          {
            if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) Char_59 - (MR_Unsigned) (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
            {
              Digit_53 = ((&demangle_vector_common_2[50 + (MR_Integer) ((MR_Unsigned) Char_59 - (MR_Unsigned) (MR_Integer) 48)]))->demangle__vector_common_type_2_0__vct_2_f_0;
              succeeded = MR_TRUE;
            }
            else
              succeeded = MR_FALSE;
            if (succeeded)
            {
              succeeded = demangle__remove_int_2_4_p_0(Digit_53, &TypeArity_9, STATE_VARIABLE_Str_9_54, &STATE_VARIABLE_Str_22_22);
              if (succeeded)
              {
                Var_23 = (MR_String) "__";
                succeeded = mercury__string__remove_prefix_3_p_0(Var_23, STATE_VARIABLE_Str_22_22, &STATE_VARIABLE_Str_24_24);
                if (succeeded)
                {
                  Var_25 = (MR_Integer) 1;
                  succeeded = (Num_5 > Var_25);
                  if (succeeded)
                  {
                    MR_Integer Num1_11;

                    Sep_10 = (MR_String) ", ";
                    Num1_11 = (MR_Integer) ((MR_Unsigned) Num_5 - (MR_Unsigned) (MR_Integer) 1);
                    succeeded = demangle__demangle_class_args_4_p_0(Num1_11, &Rest_12, STATE_VARIABLE_Str_24_24, STATE_VARIABLE_Str_14);
                  }
                  else
                  {
                    Sep_10 = (MR_String) "";
                    Rest_12 = (MR_String) "";
                    *STATE_VARIABLE_Str_14 = STATE_VARIABLE_Str_24_24;
                    succeeded = MR_TRUE;
                  }
                  if (succeeded)
                  {
                    Var_38 = mercury__string__f_43_43_2_f_0(Sep_10, Rest_12);
                    Var_40 = (MR_Integer) 0;
                    Var_41 = (MR_Integer) 0;
                    Var_42 = (MR_Integer) 0;
                    Var_43 = (MR_Integer) 0;
                    Var_44 = (MR_Integer) 0;
                    Var_45 = (MR_Word) &demangle_scalar_common_3[1];
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
}

static MR_bool MR_CALL 
demangle__format_data_5_p_0(
  MR_Word Category_6,
  MR_Word MaybeModule_7,
  MR_String Name_8,
  MR_Integer Arity_9,
  MR_String * Result_10)
{
  {
    MR_bool succeeded;

    switch (Category_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Module_66;
          MR_String Var_156;
          MR_String Var_157;
          MR_String Var_158;
          MR_String Var_159;
          MR_String Var_160;
          MR_Word Var_161;
          MR_Word Var_162;
          MR_Word Var_163;
          MR_Word Var_164;
          MR_Word Var_165;
          MR_Word Var_166;
          MR_String Var_167;
          MR_String Var_168;

          succeeded = ((MR_tag((MR_Word) MaybeModule_7)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Module_66 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule_7, (MR_Integer) 0)));
            Var_156 = (MR_String) ">";
            Var_157 = mercury__string__f_43_43_2_f_0(Module_66, Var_156);
            Var_158 = (MR_String) " for module ";
            Var_159 = mercury__string__f_43_43_2_f_0(Var_158, Var_157);
            Var_161 = (MR_Integer) 0;
            Var_162 = (MR_Integer) 0;
            Var_163 = (MR_Integer) 0;
            Var_164 = (MR_Integer) 0;
            Var_165 = (MR_Integer) 0;
            Var_166 = (MR_Word) &demangle_scalar_common_3[1];
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_166, Arity_9, &Var_160);
            Var_167 = mercury__string__f_43_43_2_f_0(Var_160, Var_159);
            Var_168 = (MR_String) "<shared constant number ";
            *Result_10 = mercury__string__f_43_43_2_f_0(Var_168, Var_167);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          if ((MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String Var_144;
            MR_String Var_151;
            MR_String Var_153;
            MR_String Var_154;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_9, &Var_144);
            Var_151 = mercury__string__f_43_43_2_f_0(Var_144, (MR_String) "\'>");
            Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_151);
            Var_154 = mercury__string__f_43_43_2_f_0(Name_8, Var_153);
            *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", Var_154);
          }
          else
          {
            MR_String Module_63 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule_7, (MR_Integer) 0)));
            MR_String Var_128;
            MR_String Var_135;
            MR_String Var_137;
            MR_String Var_138;
            MR_String Var_140;
            MR_String Var_141;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_9, &Var_128);
            Var_135 = mercury__string__f_43_43_2_f_0(Var_128, (MR_String) "\'>");
            Var_137 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_135);
            Var_138 = mercury__string__f_43_43_2_f_0(Name_8, Var_137);
            Var_140 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_138);
            Var_141 = mercury__string__f_43_43_2_f_0(Module_63, Var_140);
            *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", Var_141);
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          if ((MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String Var_115;
            MR_String Var_122;
            MR_String Var_124;
            MR_String Var_125;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_9, &Var_115);
            Var_122 = mercury__string__f_43_43_2_f_0(Var_115, (MR_String) "\'>");
            Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_122);
            Var_125 = mercury__string__f_43_43_2_f_0(Name_8, Var_124);
            *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", Var_125);
          }
          else
          {
            MR_String Module_11 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule_7, (MR_Integer) 0)));
            MR_String Var_99;
            MR_String Var_106;
            MR_String Var_108;
            MR_String Var_109;
            MR_String Var_111;
            MR_String Var_112;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_9, &Var_99);
            Var_106 = mercury__string__f_43_43_2_f_0(Var_99, (MR_String) "\'>");
            Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_106);
            Var_109 = mercury__string__f_43_43_2_f_0(Name_8, Var_108);
            Var_111 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_109);
            Var_112 = mercury__string__f_43_43_2_f_0(Module_11, Var_111);
            *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", Var_112);
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          if ((MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String Var_86;
            MR_String Var_93;
            MR_String Var_95;
            MR_String Var_96;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_9, &Var_86);
            Var_93 = mercury__string__f_43_43_2_f_0(Var_86, (MR_String) "\'>");
            Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_93);
            Var_96 = mercury__string__f_43_43_2_f_0(Name_8, Var_95);
            *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", Var_96);
          }
          else
          {
            MR_String Module_60 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule_7, (MR_Integer) 0)));
            MR_String Var_70;
            MR_String Var_77;
            MR_String Var_79;
            MR_String Var_80;
            MR_String Var_82;
            MR_String Var_83;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_9, &Var_70);
            Var_77 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) "\'>");
            Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_77);
            Var_80 = mercury__string__f_43_43_2_f_0(Name_8, Var_79);
            Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_80);
            Var_83 = mercury__string__f_43_43_2_f_0(Module_60, Var_82);
            *Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", Var_83);
          }
          succeeded = MR_TRUE;
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
  MR_String STATE_VARIABLE_Str_0_28,
  MR_String * STATE_VARIABLE_Str_29)
{
  {
    MR_bool succeeded;
    MR_Integer Int_4;
    MR_Integer ModeNum1_6;
    MR_Word MaybeInternalLabelNum0_7;
    MR_String PredOrFunc_8;
    MR_Integer Arity_11;
    MR_Word MaybeInternalLabelNum_13;
    MR_Word UnusedArgs_14;
    MR_Word HigherOrder_16;
    MR_Integer ModeNum_17;
    MR_Word MaybeModule0_19;
    MR_Word Category0_20;
    MR_Word MaybeModule_21;
    MR_String PredName_24;
    MR_Word Category_25;
    MR_String STATE_VARIABLE_Str_31_31;
    MR_String STATE_VARIABLE_Str_32_32;
    MR_String STATE_VARIABLE_Str_36_36;
    MR_String Var_46;
    MR_Word Var_51;
    MR_String STATE_VARIABLE_Str_67_67;
    MR_String STATE_VARIABLE_Str_68_68;
    MR_String STATE_VARIABLE_Str_8_75;
    MR_Integer ModeNum0_5;
    MR_String STATE_VARIABLE_Str_35_35;
    MR_String Var_33;
    MR_String STATE_VARIABLE_Str_34_34;
    MR_String STATE_VARIABLE_Str_38_38;
    MR_String Var_37;
    MR_String _Str_26;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", STATE_VARIABLE_Str_0_28, &STATE_VARIABLE_Str_8_75);
    if (succeeded)
      STATE_VARIABLE_Str_31_31 = STATE_VARIABLE_Str_8_75;
    else
      STATE_VARIABLE_Str_31_31 = STATE_VARIABLE_Str_0_28;
    succeeded = demangle__remove_trailing_int_3_p_0(&Int_4, STATE_VARIABLE_Str_31_31, &STATE_VARIABLE_Str_32_32);
    if (succeeded)
    {
      Var_33 = (MR_String) "_";
      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_32_32, Var_33, &STATE_VARIABLE_Str_34_34);
      if (succeeded)
        succeeded = demangle__remove_trailing_int_3_p_0(&ModeNum0_5, STATE_VARIABLE_Str_34_34, &STATE_VARIABLE_Str_35_35);
      if (succeeded)
      {
        STATE_VARIABLE_Str_36_36 = STATE_VARIABLE_Str_35_35;
        ModeNum1_6 = ModeNum0_5;
        {
          MaybeInternalLabelNum0_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeInternalLabelNum0_7, 0) = ((MR_Box) (Int_4));
        }
      }
      else
      {
        ModeNum1_6 = Int_4;
        MaybeInternalLabelNum0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        STATE_VARIABLE_Str_36_36 = STATE_VARIABLE_Str_32_32;
      }
      Var_46 = (MR_String) "_";
      Var_51 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[10]);
      Var_37 = (MR_String) "f_";
      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_36_36, Var_37, &STATE_VARIABLE_Str_38_38);
      if (succeeded)
      {
        MR_Integer ModeNum3_15;
        MR_String STATE_VARIABLE_Str_43_43;
        MR_String STATE_VARIABLE_Str_44_44;
        MR_String STATE_VARIABLE_Str_47_47;
        MR_String STATE_VARIABLE_Str_48_48;
        MR_String STATE_VARIABLE_Str_50_50;
        MR_String STATE_VARIABLE_Str_52_52;
        MR_String STATE_VARIABLE_Str_65_65;

        PredOrFunc_8 = (MR_String) "function";
        succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_38_38, (MR_String) "_", &STATE_VARIABLE_Str_43_43);
        if (succeeded)
        {
          succeeded = demangle__remove_trailing_int_3_p_0(&Arity_11, STATE_VARIABLE_Str_43_43, &STATE_VARIABLE_Str_44_44);
          if (succeeded)
          {
            MaybeInternalLabelNum_13 = MaybeInternalLabelNum0_7;
            succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_44_44, Var_46, &STATE_VARIABLE_Str_47_47);
            if (succeeded)
            {
              demangle__demangle_unused_args_5_p_0(&UnusedArgs_14, ModeNum1_6, &ModeNum3_15, STATE_VARIABLE_Str_47_47, &STATE_VARIABLE_Str_48_48);
              demangle__demangle_higher_order_5_p_0(&HigherOrder_16, ModeNum3_15, &ModeNum_17, STATE_VARIABLE_Str_48_48, &STATE_VARIABLE_Str_50_50);
              demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule0_19, Var_51, STATE_VARIABLE_Str_50_50, &STATE_VARIABLE_Str_52_52);
              succeeded = demangle__handle_compiler_generated_pred_4_p_0(ModeNum_17, &Category0_20, STATE_VARIABLE_Str_52_52, &STATE_VARIABLE_Str_65_65);
              if (succeeded)
              {
                succeeded = (Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                if (succeeded)
                {
                  STATE_VARIABLE_Str_67_67 = STATE_VARIABLE_Str_65_65;
                  succeeded = MR_TRUE;
                }
                else
                {
                  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", STATE_VARIABLE_Str_65_65, &STATE_VARIABLE_Str_67_67);
                }
                if (succeeded)
                  succeeded = (Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
              }
            }
          }
        }
      }
      else
      {
        MR_String STATE_VARIABLE_Str_40_40;

        succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_36_36, (MR_String) "p_", &STATE_VARIABLE_Str_40_40);
        if (succeeded)
        {
          MR_String STATE_VARIABLE_Str_45_45;
          MR_Integer ModeNum3_145;
          MR_String STATE_VARIABLE_Str_43_147;
          MR_String STATE_VARIABLE_Str_47_148;
          MR_String STATE_VARIABLE_Str_48_149;
          MR_String STATE_VARIABLE_Str_50_150;
          MR_String STATE_VARIABLE_Str_52_151;
          MR_String STATE_VARIABLE_Str_65_152;

          PredOrFunc_8 = (MR_String) "predicate";
          succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_40_40, (MR_String) "_", &STATE_VARIABLE_Str_43_147);
          if (succeeded)
          {
            succeeded = demangle__remove_trailing_int_3_p_0(&Arity_11, STATE_VARIABLE_Str_43_147, &STATE_VARIABLE_Str_45_45);
            if (succeeded)
            {
              MaybeInternalLabelNum_13 = MaybeInternalLabelNum0_7;
              succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_45_45, Var_46, &STATE_VARIABLE_Str_47_148);
              if (succeeded)
              {
                demangle__demangle_unused_args_5_p_0(&UnusedArgs_14, ModeNum1_6, &ModeNum3_145, STATE_VARIABLE_Str_47_148, &STATE_VARIABLE_Str_48_149);
                demangle__demangle_higher_order_5_p_0(&HigherOrder_16, ModeNum3_145, &ModeNum_17, STATE_VARIABLE_Str_48_149, &STATE_VARIABLE_Str_50_150);
                demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule0_19, Var_51, STATE_VARIABLE_Str_50_150, &STATE_VARIABLE_Str_52_151);
                succeeded = demangle__handle_compiler_generated_pred_4_p_0(ModeNum_17, &Category0_20, STATE_VARIABLE_Str_52_151, &STATE_VARIABLE_Str_65_152);
                if (succeeded)
                {
                  succeeded = (Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  if (succeeded)
                  {
                    STATE_VARIABLE_Str_67_67 = STATE_VARIABLE_Str_65_152;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", STATE_VARIABLE_Str_65_152, &STATE_VARIABLE_Str_67_67);
                  }
                  if (succeeded)
                    succeeded = (Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                }
              }
            }
          }
        }
        else
        {
          MR_Integer ModeNum2_125;
          MR_Integer ModeNum3_126;
          MR_String STATE_VARIABLE_Str_45_132;
          MR_String STATE_VARIABLE_Str_47_133;
          MR_String STATE_VARIABLE_Str_48_134;
          MR_String STATE_VARIABLE_Str_49_135;
          MR_String STATE_VARIABLE_Str_50_136;
          MR_String STATE_VARIABLE_Str_52_137;
          MR_String STATE_VARIABLE_Str_65_138;
          MR_Integer Arity0_113;
          MR_String STATE_VARIABLE_Str_44_116;
          MR_String STATE_VARIABLE_Str_43_112;
          MR_Word Var_117;

          PredOrFunc_8 = (MR_String) "predicate";
          succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_36_36, (MR_String) "_", &STATE_VARIABLE_Str_43_112);
          if (succeeded)
            succeeded = demangle__remove_trailing_int_3_p_0(&Arity0_113, STATE_VARIABLE_Str_43_112, &STATE_VARIABLE_Str_44_116);
          if (succeeded)
          {
            STATE_VARIABLE_Str_45_132 = STATE_VARIABLE_Str_44_116;
            Arity_11 = Arity0_113;
            ModeNum2_125 = ModeNum1_6;
            MaybeInternalLabelNum_13 = MaybeInternalLabelNum0_7;
            succeeded = MR_TRUE;
          }
          else
          {
            Arity_11 = ModeNum1_6;
            succeeded = ((MR_tag((MR_Word) MaybeInternalLabelNum0_7)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ModeNum2_125 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeInternalLabelNum0_7, (MR_Integer) 0)));
              MaybeInternalLabelNum_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              STATE_VARIABLE_Str_45_132 = STATE_VARIABLE_Str_36_36;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_45_132, Var_46, &STATE_VARIABLE_Str_47_133);
            if (succeeded)
            {
              demangle__demangle_unused_args_5_p_0(&UnusedArgs_14, ModeNum2_125, &ModeNum3_126, STATE_VARIABLE_Str_47_133, &STATE_VARIABLE_Str_48_134);
              demangle__demangle_higher_order_5_p_0(&HigherOrder_16, ModeNum3_126, &ModeNum_17, STATE_VARIABLE_Str_48_134, &STATE_VARIABLE_Str_49_135);
              succeeded = ((MR_tag((MR_Word) UnusedArgs_14)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnusedArgs_14, (MR_Integer) 0)));
                {
                  MR_Integer Var_118;

                  succeeded = demangle__remove_trailing_int_3_p_0(&Var_118, STATE_VARIABLE_Str_49_135, &STATE_VARIABLE_Str_50_136);
                  if (succeeded)
                    succeeded = (Arity_11 == Var_118);
                }
              }
              else
              {
                STATE_VARIABLE_Str_50_136 = STATE_VARIABLE_Str_49_135;
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule0_19, Var_51, STATE_VARIABLE_Str_50_136, &STATE_VARIABLE_Str_52_137);
                succeeded = demangle__handle_compiler_generated_pred_4_p_0(ModeNum_17, &Category0_20, STATE_VARIABLE_Str_52_137, &STATE_VARIABLE_Str_65_138);
                if (succeeded)
                {
                  succeeded = (Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                  if (succeeded)
                  {
                    STATE_VARIABLE_Str_67_67 = STATE_VARIABLE_Str_65_138;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", STATE_VARIABLE_Str_65_138, &STATE_VARIABLE_Str_67_67);
                  }
                  if (succeeded)
                  {
                    succeeded = (Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                    succeeded = !(succeeded);
                  }
                }
              }
            }
          }
        }
      }
      if (succeeded)
      {
        succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_67_67, &STATE_VARIABLE_Str_68_68);
        if (succeeded)
        {
          if ((MaybeModule0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MaybeModule_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            succeeded = MR_TRUE;
          }
          else
          {
            MR_String ModuleName0_22 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule0_19, (MR_Integer) 0)));
            MR_String ModuleName_23;

            succeeded = demangle__fix_mangled_ascii_2_p_0(ModuleName0_22, &ModuleName_23);
            if (succeeded)
            {
              {
                MaybeModule_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeModule_21, 0) = ((MR_Box) (ModuleName_23));
              }
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            succeeded = demangle__handle_category_etc_5_p_0(&PredName_24, Category0_20, &Category_25, STATE_VARIABLE_Str_68_68, &_Str_26);
            if (succeeded)
            {
              demangle__format_proc_10_p_0(Category_25, MaybeModule_21, PredOrFunc_8, PredName_24, Arity_11, ModeNum_17, HigherOrder_16, UnusedArgs_14, MaybeInternalLabelNum_13, STATE_VARIABLE_Str_29);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
  MR_Integer ModeNum0_5,
  MR_Word * Category0_6,
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9)
{
  {
    MR_bool succeeded;
    MR_String STATE_VARIABLE_Str_11_11;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Unify__", STATE_VARIABLE_Str_0_8, &STATE_VARIABLE_Str_11_11);
    if (succeeded)
    {
      *STATE_VARIABLE_Str_9 = STATE_VARIABLE_Str_11_11;
      *Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_13_13;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", STATE_VARIABLE_Str_0_8, &STATE_VARIABLE_Str_13_13);
      if (succeeded)
      {
        succeeded = (ModeNum0_5 == (MR_Integer) 0);
        if (succeeded)
        {
          *STATE_VARIABLE_Str_9 = STATE_VARIABLE_Str_13_13;
          *Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          succeeded = MR_TRUE;
        }
      }
      else
      {
        MR_String STATE_VARIABLE_Str_15_15;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", STATE_VARIABLE_Str_0_8, &STATE_VARIABLE_Str_15_15);
        if (succeeded)
        {
          succeeded = (ModeNum0_5 == (MR_Integer) 0);
          if (succeeded)
          {
            *STATE_VARIABLE_Str_9 = STATE_VARIABLE_Str_15_15;
            *Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            succeeded = MR_TRUE;
          }
        }
        else
        {
          *Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
          *STATE_VARIABLE_Str_9 = STATE_VARIABLE_Str_0_8;
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
  MR_String STATE_VARIABLE_Str_0_20,
  MR_String * STATE_VARIABLE_Str_21)
{
  {
    MR_bool succeeded;
    MR_String PredOrFunc_4;
    MR_Integer Int_5;
    MR_Word MaybeInternalLabelNum_6;
    MR_Integer ModeNum0_7;
    MR_Integer Arity_8;
    MR_Word Category0_9;
    MR_Word UnusedArgs_10;
    MR_Integer ModeNum1_11;
    MR_Word HigherOrder_12;
    MR_Integer ModeNum_13;
    MR_Word MaybeModule_15;
    MR_String PredName_16;
    MR_Word Category_17;
    MR_String STATE_VARIABLE_Str_23_23;
    MR_String STATE_VARIABLE_Str_26_26;
    MR_String STATE_VARIABLE_Str_27_27;
    MR_String STATE_VARIABLE_Str_32_32;
    MR_String Var_33;
    MR_String STATE_VARIABLE_Str_34_34;
    MR_String STATE_VARIABLE_Str_35_35;
    MR_String Var_36;
    MR_String STATE_VARIABLE_Str_37_37;
    MR_String STATE_VARIABLE_Str_38_38;
    MR_String STATE_VARIABLE_Str_39_39;
    MR_String STATE_VARIABLE_Str_40_40;
    MR_String STATE_VARIABLE_Str_41_41;
    MR_String STATE_VARIABLE_Str_42_42;
    MR_String STATE_VARIABLE_Str_44_44;
    MR_String STATE_VARIABLE_Str_25_25;
    MR_String Var_24;
    MR_String STATE_VARIABLE_Str_29_29;
    MR_String Var_28;
    MR_String STATE_VARIABLE_Str_11_90;
    MR_String Var_89;
    MR_Word Var_14;
    MR_String _Str_18;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", STATE_VARIABLE_Str_0_20, &STATE_VARIABLE_Str_23_23);
    if (succeeded)
    {
      Var_24 = (MR_String) "fn__";
      succeeded = mercury__string__remove_prefix_3_p_0(Var_24, STATE_VARIABLE_Str_23_23, &STATE_VARIABLE_Str_25_25);
      if (succeeded)
      {
        STATE_VARIABLE_Str_26_26 = STATE_VARIABLE_Str_25_25;
        PredOrFunc_4 = (MR_String) "function";
      }
      else
      {
        PredOrFunc_4 = (MR_String) "predicate";
        STATE_VARIABLE_Str_26_26 = STATE_VARIABLE_Str_23_23;
      }
      succeeded = demangle__remove_trailing_int_3_p_0(&Int_5, STATE_VARIABLE_Str_26_26, &STATE_VARIABLE_Str_27_27);
      if (succeeded)
      {
        Var_28 = (MR_String) "i";
        succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_27_27, Var_28, &STATE_VARIABLE_Str_29_29);
        if (succeeded)
        {
          MR_String STATE_VARIABLE_Str_31_31;

          {
            MaybeInternalLabelNum_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeInternalLabelNum_6, 0) = ((MR_Box) (Int_5));
          }
          succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_29_29, (MR_String) "_", &STATE_VARIABLE_Str_31_31);
          if (succeeded)
            succeeded = demangle__remove_trailing_int_3_p_0(&ModeNum0_7, STATE_VARIABLE_Str_31_31, &STATE_VARIABLE_Str_32_32);
        }
        else
        {
          MaybeInternalLabelNum_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ModeNum0_7 = Int_5;
          STATE_VARIABLE_Str_32_32 = STATE_VARIABLE_Str_27_27;
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          Var_33 = (MR_String) "_";
          succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_32_32, Var_33, &STATE_VARIABLE_Str_34_34);
          if (succeeded)
          {
            succeeded = demangle__remove_trailing_int_3_p_0(&Arity_8, STATE_VARIABLE_Str_34_34, &STATE_VARIABLE_Str_35_35);
            if (succeeded)
            {
              Var_36 = (MR_String) "_";
              succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_35_35, Var_36, &STATE_VARIABLE_Str_37_37);
              if (succeeded)
              {
                Var_89 = (MR_String) "__Unify__";
                succeeded = mercury__string__remove_prefix_3_p_0(Var_89, STATE_VARIABLE_Str_37_37, &STATE_VARIABLE_Str_11_90);
                if (succeeded)
                {
                  STATE_VARIABLE_Str_38_38 = STATE_VARIABLE_Str_11_90;
                  Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_String STATE_VARIABLE_Str_13_92;

                  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", STATE_VARIABLE_Str_37_37, &STATE_VARIABLE_Str_13_92);
                  if (succeeded)
                  {
                    succeeded = (ModeNum0_7 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      STATE_VARIABLE_Str_38_38 = STATE_VARIABLE_Str_13_92;
                      Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                      succeeded = MR_TRUE;
                    }
                  }
                  else
                  {
                    MR_String STATE_VARIABLE_Str_15_94;

                    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", STATE_VARIABLE_Str_37_37, &STATE_VARIABLE_Str_15_94);
                    if (succeeded)
                    {
                      succeeded = (ModeNum0_7 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        STATE_VARIABLE_Str_38_38 = STATE_VARIABLE_Str_15_94;
                        Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        succeeded = MR_TRUE;
                      }
                    }
                    else
                    {
                      Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                      STATE_VARIABLE_Str_38_38 = STATE_VARIABLE_Str_37_37;
                      succeeded = MR_TRUE;
                    }
                  }
                }
                if (succeeded)
                {
                  succeeded = demangle__fix_mangled_ascii_2_p_0(STATE_VARIABLE_Str_38_38, &STATE_VARIABLE_Str_39_39);
                  if (succeeded)
                  {
                    demangle__demangle_unused_args_5_p_0(&UnusedArgs_10, ModeNum0_7, &ModeNum1_11, STATE_VARIABLE_Str_39_39, &STATE_VARIABLE_Str_40_40);
                    demangle__demangle_higher_order_5_p_0(&HigherOrder_12, ModeNum1_11, &ModeNum_13, STATE_VARIABLE_Str_40_40, &STATE_VARIABLE_Str_41_41);
                    succeeded = ((MR_tag((MR_Word) UnusedArgs_10)) == (MR_mktag((MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnusedArgs_10, (MR_Integer) 0)));
                      succeeded = (Category0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      succeeded = !(succeeded);
                    }
                    if (succeeded)
                    {
                      MR_Integer Var_71;

                      succeeded = demangle__remove_trailing_int_3_p_0(&Var_71, STATE_VARIABLE_Str_41_41, &STATE_VARIABLE_Str_42_42);
                      if (succeeded)
                        succeeded = (Arity_8 == Var_71);
                    }
                    else
                    {
                      STATE_VARIABLE_Str_42_42 = STATE_VARIABLE_Str_41_41;
                      succeeded = MR_TRUE;
                    }
                    if (succeeded)
                    {
                      succeeded = (Category0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                      if (succeeded)
                      {
                        demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]), STATE_VARIABLE_Str_42_42, &STATE_VARIABLE_Str_44_44);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_String STATE_VARIABLE_Str_56_56;
                        MR_Word Var_57;
                        MR_String Var_69;

                        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", STATE_VARIABLE_Str_42_42, &STATE_VARIABLE_Str_56_56);
                        if (succeeded)
                        {
                          Var_57 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]);
                          demangle__remove_maybe_module_prefix_4_p_0(&MaybeModule_15, Var_57, STATE_VARIABLE_Str_56_56, &STATE_VARIABLE_Str_44_44);
                          succeeded = ((MR_tag((MR_Word) MaybeModule_15)) == (MR_mktag((MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_69 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeModule_15, (MR_Integer) 0)));
                            succeeded = (strcmp(Var_69, (MR_String) "") == 0);
                          }
                          succeeded = !(succeeded);
                        }
                      }
                      if (succeeded)
                      {
                        succeeded = demangle__handle_category_etc_5_p_0(&PredName_16, Category0_9, &Category_17, STATE_VARIABLE_Str_44_44, &_Str_18);
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
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
  void * env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
  void * env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9 = ((MR_String) (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9);
    demangle__remove_maybe_module_prefix_4_p_0_2(env_ptr);
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
  void * env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9);
    if ((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
      demangle__remove_maybe_module_prefix_4_p_0_1(env_ptr);
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
  void * env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9, (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__remove_maybe_module_prefix_4_p_0_3, env_ptr);
        }
        (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
  MR_Word * MaybeModule_5,
  MR_Word StringsToStopAt_6,
  MR_String String0_7,
  MR_String * String_8)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s env;

    (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6 = StringsToStopAt_6;
    (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7 = String0_7;
    demangle__remove_maybe_module_prefix_4_p_0_4(&env);
    if ((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
    {
      *MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
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
        Index2_13 = (MR_Integer) ((MR_Unsigned) Index_10 + (MR_Unsigned) (MR_Integer) 2);
        mercury__string__between_4_p_0((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, Index2_13, Len_12, &String1_14);
        demangle__remove_maybe_module_prefix_4_p_0(&Var_20, (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, String1_14, &String2_16);
        (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_mktag((MR_Integer) 1)));
        if ((env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
        {
          SubModule_15 = ((MR_String) (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0)));
          {
            MR_String QualifiedModule_17;
            MR_Word Var_21;
            MR_Word Var_22;
            MR_Word Var_24;

            {
              Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (SubModule_15));
              MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) ((MR_String) "."));
              MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (Var_24));
            }
            {
              Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (Module_11));
              MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) (Var_22));
            }
            mercury__string__append_list_2_p_0(Var_21, &QualifiedModule_17);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeModule_5 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (QualifiedModule_17));
            }
            *String_8 = String2_16;
          }
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeModule_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Module_11));
          }
          *String_8 = String1_14;
        }
      }
      else
      {
        *String_8 = (env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
        *MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    }
  }
}

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
  MR_String STATE_VARIABLE_Str_0_4,
  MR_String * STATE_VARIABLE_Str_5)
{
  {
    MR_bool succeeded;
    MR_String STATE_VARIABLE_Str_7_7;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f__", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_7_7);
    if (succeeded)
    {
      mercury__string__append_3_p_2((MR_String) "f_", STATE_VARIABLE_Str_7_7, STATE_VARIABLE_Str_5);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_11_11;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_not_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_11_11);
      if (succeeded)
      {
        mercury__string__append_3_p_2((MR_String) "\\=", STATE_VARIABLE_Str_11_11, STATE_VARIABLE_Str_5);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String STATE_VARIABLE_Str_15_15;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_or_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_15_15);
        if (succeeded)
        {
          mercury__string__append_3_p_2((MR_String) ">=", STATE_VARIABLE_Str_15_15, STATE_VARIABLE_Str_5);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_String STATE_VARIABLE_Str_19_19;

          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_or_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_19_19);
          if (succeeded)
          {
            mercury__string__append_3_p_2((MR_String) "=<", STATE_VARIABLE_Str_19_19, STATE_VARIABLE_Str_5);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_String STATE_VARIABLE_Str_23_23;

            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_equal", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_23_23);
            if (succeeded)
            {
              mercury__string__append_3_p_2((MR_String) "=", STATE_VARIABLE_Str_23_23, STATE_VARIABLE_Str_5);
              succeeded = MR_TRUE;
            }
            else
            {
              MR_String STATE_VARIABLE_Str_27_27;

              succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_than", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_27_27);
              if (succeeded)
              {
                mercury__string__append_3_p_2((MR_String) "<", STATE_VARIABLE_Str_27_27, STATE_VARIABLE_Str_5);
                succeeded = MR_TRUE;
              }
              else
              {
                MR_String STATE_VARIABLE_Str_31_31;

                succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_than", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_31_31);
                if (succeeded)
                {
                  mercury__string__append_3_p_2((MR_String) ">", STATE_VARIABLE_Str_31_31, STATE_VARIABLE_Str_5);
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_String STATE_VARIABLE_Str_35_35;

                  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_minus", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_35_35);
                  if (succeeded)
                  {
                    demangle__insert_prefix_3_p_0((MR_String) "-", STATE_VARIABLE_Str_35_35, STATE_VARIABLE_Str_5);
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_String STATE_VARIABLE_Str_39_39;

                    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_plus", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_39_39);
                    if (succeeded)
                    {
                      demangle__insert_prefix_3_p_0((MR_String) "+", STATE_VARIABLE_Str_39_39, STATE_VARIABLE_Str_5);
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_String STATE_VARIABLE_Str_43_43;

                      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_times", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_43_43);
                      if (succeeded)
                      {
                        demangle__insert_prefix_3_p_0((MR_String) "*", STATE_VARIABLE_Str_43_43, STATE_VARIABLE_Str_5);
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_String STATE_VARIABLE_Str_47_47;

                        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_slash", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_47_47);
                        if (succeeded)
                        {
                          demangle__insert_prefix_3_p_0((MR_String) "/", STATE_VARIABLE_Str_47_47, STATE_VARIABLE_Str_5);
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_String STATE_VARIABLE_Str_51_51;

                          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_comma", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_51_51);
                          if (succeeded)
                          {
                            demangle__insert_prefix_3_p_0((MR_String) ",", STATE_VARIABLE_Str_51_51, STATE_VARIABLE_Str_5);
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_String STATE_VARIABLE_Str_55_55;

                            succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_semicolon", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_55_55);
                            if (succeeded)
                            {
                              demangle__insert_prefix_3_p_0((MR_String) ";", STATE_VARIABLE_Str_55_55, STATE_VARIABLE_Str_5);
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_String STATE_VARIABLE_Str_59_59;

                              succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cut", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_59_59);
                              if (succeeded)
                              {
                                demangle__insert_prefix_3_p_0((MR_String) "!", STATE_VARIABLE_Str_59_59, STATE_VARIABLE_Str_5);
                                succeeded = MR_TRUE;
                              }
                              else
                              {
                                MR_String STATE_VARIABLE_Str_63_63;

                                succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_tuple", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_63_63);
                                if (succeeded)
                                {
                                  demangle__insert_prefix_3_p_0((MR_String) "{}", STATE_VARIABLE_Str_63_63, STATE_VARIABLE_Str_5);
                                  succeeded = MR_TRUE;
                                }
                                else
                                {
                                  MR_String STATE_VARIABLE_Str_67_67;

                                  succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cons", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_67_67);
                                  if (succeeded)
                                  {
                                    demangle__insert_prefix_3_p_0((MR_String) "[|]", STATE_VARIABLE_Str_67_67, STATE_VARIABLE_Str_5);
                                    succeeded = MR_TRUE;
                                  }
                                  else
                                  {
                                    MR_String STATE_VARIABLE_Str_71_71;

                                    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_nil", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_71_71);
                                    if (succeeded)
                                    {
                                      demangle__insert_prefix_3_p_0((MR_String) "[]", STATE_VARIABLE_Str_71_71, STATE_VARIABLE_Str_5);
                                      succeeded = MR_TRUE;
                                    }
                                    else
                                    {
                                      MR_String STATE_VARIABLE_Str_75_75;

                                      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_", STATE_VARIABLE_Str_0_4, &STATE_VARIABLE_Str_75_75);
                                      if (succeeded)
                                        succeeded = demangle__fix_mangled_ascii_chars_2_p_0(STATE_VARIABLE_Str_75_75, STATE_VARIABLE_Str_5);
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
}

static void MR_CALL 
demangle__insert_prefix_3_p_0(
  MR_String Prefix_4,
  MR_String Name0_5,
  MR_String * Name_6)
{
  mercury__string__append_3_p_2(Prefix_4, Name0_5, Name_6);
}

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
  MR_String STATE_VARIABLE_Str_0_6,
  MR_String * STATE_VARIABLE_Str_7)
{
  {
    MR_bool succeeded;
    MR_Integer I_4;
    MR_Char C_5;
    MR_String STATE_VARIABLE_Str_8_8;
    MR_String STATE_VARIABLE_Str_11_11;
    MR_Integer Digit_17;
    MR_String STATE_VARIABLE_Str_9_18;
    MR_Char Char_23;
    MR_String STATE_VARIABLE_Str_10_10;
    MR_String Var_9;

    succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_0_6, &Char_23, &STATE_VARIABLE_Str_9_18);
    if (succeeded)
    {
      if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) Char_23 - (MR_Unsigned) (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
      {
        Digit_17 = ((&demangle_vector_common_2[40 + (MR_Integer) ((MR_Unsigned) Char_23 - (MR_Unsigned) (MR_Integer) 48)]))->demangle__vector_common_type_2_0__vct_2_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = demangle__remove_int_2_4_p_0(Digit_17, &I_4, STATE_VARIABLE_Str_9_18, &STATE_VARIABLE_Str_8_8);
        if (succeeded)
        {
          Var_9 = (MR_String) "_";
          succeeded = mercury__string__remove_prefix_3_p_0(Var_9, STATE_VARIABLE_Str_8_8, &STATE_VARIABLE_Str_10_10);
          if (succeeded)
            succeeded = demangle__fix_mangled_ascii_chars_2_p_0(STATE_VARIABLE_Str_10_10, &STATE_VARIABLE_Str_11_11);
          else
          {
            STATE_VARIABLE_Str_11_11 = STATE_VARIABLE_Str_8_8;
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            succeeded = mercury__char__to_int_2_p_2(&C_5, I_4);
            if (succeeded)
            {
              mercury__string__first_char_3_p_4(STATE_VARIABLE_Str_7, C_5, STATE_VARIABLE_Str_11_11);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
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

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_15, &Var_249);
              Var_256 = mercury__string__f_43_43_2_f_0(Var_249, (MR_String) "\'");
              Var_258 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_256);
              Var_259 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_258);
              MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "index/2 predicate for type \140", Var_259);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_124;
              MR_Word Var_130 = (MR_Word) &demangle_scalar_common_3[1];
              MR_String Var_132;
              MR_String Var_133;
              MR_String Var_140;
              MR_String Var_142;
              MR_String Var_143;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_130, ModeNum_16, &Var_124);
              Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", Var_124);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_130, Arity_15, &Var_133);
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

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Arity_15, &Var_262);
              Var_269 = mercury__string__f_43_43_2_f_0(Var_262, (MR_String) "\'");
              Var_271 = mercury__string__f_43_43_2_f_0((MR_String) "/", Var_269);
              Var_272 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_271);
              MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "compare/3 predicate for type \140", Var_272);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_145;
              MR_Word Var_151 = (MR_Word) &demangle_scalar_common_3[1];
              MR_String Var_153;
              MR_String Var_154;
              MR_String Var_161;
              MR_String Var_163;
              MR_String Var_164;
              MR_String Var_166;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_151, ModeNum_16, &Var_145);
              Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", Var_145);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_151, Arity_15, &Var_154);
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
          MR_Word Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), Category_11, (MR_Integer) 0)));
          MR_Integer Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Category_11, (MR_Integer) 1)));
          MR_Integer Seq_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Category_11, (MR_Integer) 2)));
          MR_String IntroPredOrFunc_26 = ((MR_String) (MR_hl_field(MR_mktag(1), Category_11, (MR_Integer) 3)));

          switch (MR_tag((MR_Word) Type_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(Type_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String Var_194;
                    MR_Word Var_200 = (MR_Word) &demangle_scalar_common_3[1];
                    MR_String Var_202;
                    MR_String Var_203;
                    MR_String Var_205;
                    MR_String Var_206;
                    MR_String Var_213;
                    MR_String Var_215;

                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_200, Line_24, &Var_194);
                    Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", Var_194);
                    Var_203 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_202);
                    Var_205 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", Var_203);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_200, Seq_25, &Var_206);
                    Var_213 = mercury__string__f_43_43_2_f_0(Var_206, Var_205);
                    Var_215 = mercury__string__f_43_43_2_f_0((MR_String) " goal (#", Var_213);
                    MainStr_22 = mercury__string__f_43_43_2_f_0(IntroPredOrFunc_26, Var_215);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Var_216;
                    MR_Word Var_222 = (MR_Word) &demangle_scalar_common_3[1];
                    MR_String Var_224;
                    MR_String Var_225;
                    MR_String Var_227;
                    MR_String Var_228;
                    MR_String Var_235;

                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_222, Line_24, &Var_216);
                    Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", Var_216);
                    Var_225 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_224);
                    Var_227 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", Var_225);
                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_222, Seq_25, &Var_228);
                    Var_235 = mercury__string__f_43_43_2_f_0(Var_228, Var_227);
                    MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "deforestation procedure (#", Var_235);
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String Var_237;
                    MR_String Var_245;
                    MR_String Var_246;

                    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Line_24, &Var_237);
                    Var_245 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", Var_237);
                    Var_246 = mercury__string__f_43_43_2_f_0(QualifiedName_21, Var_245);
                    MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "accumulator procedure from \140", Var_246);
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String TypeSpec_27 = ((MR_String) (MR_hl_field(MR_mktag(1), Type_23, (MR_Integer) 0)));
                MR_String Var_168;
                MR_String Var_170;
                MR_String Var_171;
                MR_Word Var_177;
                MR_String Var_178;
                MR_String Var_180;
                MR_String Var_181;
                MR_String Var_188;
                MR_String Var_190;
                MR_String Var_191;
                MR_String Var_193;

                Var_168 = mercury__string__f_43_43_2_f_0(TypeSpec_27, (MR_String) ")");
                Var_170 = mercury__string__f_43_43_2_f_0((MR_String) " (type specialized ", Var_168);
                Var_177 = (MR_Word) &demangle_scalar_common_3[1];
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_177, ModeNum_16, &Var_171);
                Var_178 = mercury__string__f_43_43_2_f_0(Var_171, Var_170);
                Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", Var_178);
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_177, Arity_15, &Var_181);
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
    if ((HigherOrder_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HOStr_29 = (MR_String) "";
    else
    {
      MR_Integer HO_Num_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HigherOrder_17, (MR_Integer) 0)));
      MR_String Var_275;
      MR_String Var_282;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], HO_Num_28, &Var_275);
      Var_282 = mercury__string__f_43_43_2_f_0(Var_275, (MR_String) "])");
      HOStr_29 = mercury__string__f_43_43_2_f_0((MR_String) " (specialized [#", Var_282);
    }
    if ((UnusedArgs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      UAStr_32 = (MR_String) "";
    else
    {
      MR_Integer UA_Num_30;
      MR_Word Extra_31;
      MR_Word Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), UnusedArgs_18, (MR_Integer) 0)));

      UA_Num_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 0)));
      Extra_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_105, (MR_Integer) 1)));
      switch (Extra_31) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_295;
            MR_String Var_302;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], UA_Num_30, &Var_295);
            Var_302 = mercury__string__f_43_43_2_f_0(Var_295, (MR_String) "])");
            UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus unused args [#", Var_302);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_285;
            MR_String Var_292;

            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], UA_Num_30, &Var_285);
            Var_292 = mercury__string__f_43_43_2_f_0(Var_285, (MR_String) "])");
            UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus extra unused args [#", Var_292);
          }
          break;
      }
    }
    if ((MaybeInternalLabelNum_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      LabelStr_34 = (MR_String) "";
    else
    {
      MR_Integer Internal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeInternalLabelNum_19, (MR_Integer) 0)));
      MR_String Var_304;

      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_3[1], Internal_33, &Var_304);
      LabelStr_34 = mercury__string__f_43_43_2_f_0((MR_String) " label ", Var_304);
    }
    Var_122 = mercury__string__f_43_43_2_f_0(LabelStr_34, (MR_String) ">");
    Var_121 = mercury__string__f_43_43_2_f_0(UAStr_32, Var_122);
    Var_120 = mercury__string__f_43_43_2_f_0(HOStr_29, Var_121);
    Var_119 = mercury__string__f_43_43_2_f_0(MainStr_22, Var_120);
    *DemangledName_20 = mercury__string__f_43_43_2_f_0((MR_String) "<", Var_119);
  }
}

static void MR_CALL 
demangle__format_maybe_module_3_p_0(
  MR_Word HeadVar__1_1,
  MR_String Name_2,
  MR_String * QualifiedName_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *QualifiedName_3 = Name_2;
  else
  {
    MR_String Module_10 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
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
  {
    MR_bool succeeded;
    MR_Word IntroducedPredType0_11;
    MR_String STATE_VARIABLE_Str_30_30;
    MR_String STATE_VARIABLE_Str_24_24;

    succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "IntroducedFrom__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_24_24);
    if (succeeded)
    {
      STATE_VARIABLE_Str_30_30 = STATE_VARIABLE_Str_24_24;
      IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      succeeded = MR_TRUE;
    }
    else
    {
      MR_String STATE_VARIABLE_Str_26_26;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "DeforestationIn__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_26_26);
      if (succeeded)
      {
        STATE_VARIABLE_Str_30_30 = STATE_VARIABLE_Str_26_26;
        IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String STATE_VARIABLE_Str_28_28;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "AccFrom__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_28_28);
        if (succeeded)
        {
          STATE_VARIABLE_Str_30_30 = STATE_VARIABLE_Str_28_28;
          IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
          succeeded = MR_TRUE;
        }
        else
        {
          MR_String Var_31;

          succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeSpecOf__", STATE_VARIABLE_Str_0_21, &STATE_VARIABLE_Str_30_30);
          if (succeeded)
          {
            Var_31 = (MR_String) "";
            IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_3[0]);
            succeeded = MR_TRUE;
          }
        }
      }
    }
    if (succeeded)
    {
      MR_String LambdaPredOrFunc_12;
      MR_String STATE_VARIABLE_Str_38_38;
      MR_String STATE_VARIABLE_Str_33_33;
      MR_String PredName1_15;
      MR_Word IntroducedPredType_18;
      MR_Integer Seq_19;
      MR_Integer Line_20;
      MR_String STATE_VARIABLE_Str_40_40;
      MR_Word MPredName_14;
      MR_String STATE_VARIABLE_Str_39_39;
      MR_Integer Index_49;
      MR_String Var_53;
      MR_String Var_16;

      succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "pred__", STATE_VARIABLE_Str_30_30, &STATE_VARIABLE_Str_33_33);
      if (succeeded)
      {
        STATE_VARIABLE_Str_38_38 = STATE_VARIABLE_Str_33_33;
        LambdaPredOrFunc_12 = (MR_String) "pred";
        succeeded = MR_TRUE;
      }
      else
      {
        MR_String STATE_VARIABLE_Str_35_35;

        succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "func__", STATE_VARIABLE_Str_30_30, &STATE_VARIABLE_Str_35_35);
        if (succeeded)
        {
          STATE_VARIABLE_Str_38_38 = STATE_VARIABLE_Str_35_35;
          LambdaPredOrFunc_12 = (MR_String) "func";
          succeeded = MR_TRUE;
        }
        else
        {
          MR_String Var_36;
          MR_String Var_13;

          succeeded = ((MR_tag((MR_Word) IntroducedPredType0_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), IntroducedPredType0_11, (MR_Integer) 0)));
            Var_36 = (MR_String) "pred_or_func__";
            succeeded = mercury__string__remove_prefix_3_p_0(Var_36, STATE_VARIABLE_Str_30_30, &STATE_VARIABLE_Str_38_38);
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
        Var_53 = (MR_String) "__";
        succeeded = mercury__string__sub_string_search_3_p_0(STATE_VARIABLE_Str_38_38, Var_53, &Index_49);
        if (succeeded)
        {
          MR_String PredName_50;
          MR_Integer Len_51;
          MR_Integer Index2_52;

          mercury__string__left_3_p_0(STATE_VARIABLE_Str_38_38, Index_49, &PredName_50);
          mercury__string__length_2_p_0(STATE_VARIABLE_Str_38_38, &Len_51);
          Index2_52 = (MR_Integer) ((MR_Unsigned) Index_49 + (MR_Unsigned) (MR_Integer) 2);
          mercury__string__between_4_p_0(STATE_VARIABLE_Str_38_38, Index2_52, Len_51, &STATE_VARIABLE_Str_39_39);
          {
            MPredName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MPredName_14, 0) = ((MR_Box) (PredName_50));
          }
        }
        else
        {
          STATE_VARIABLE_Str_39_39 = STATE_VARIABLE_Str_38_38;
          MPredName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        succeeded = ((MR_tag((MR_Word) MPredName_14)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          PredName1_15 = ((MR_String) (MR_hl_field(MR_mktag(1), MPredName_14, (MR_Integer) 0)));
          succeeded = ((MR_tag((MR_Word) IntroducedPredType0_11)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Var_16 = ((MR_String) (MR_hl_field(MR_mktag(1), IntroducedPredType0_11, (MR_Integer) 0)));
            {
              MR_String TypeSpec_17;
              MR_Integer Length_58;
              MR_Integer NumBrackets_59;
              MR_Integer Index_60;
              MR_Integer Var_62;
              MR_Char Var_63;
              MR_Integer Var_64;
              MR_Integer Var_65;
              MR_Integer Var_66;
              MR_Char Var_67;

              mercury__string__length_2_p_0(STATE_VARIABLE_Str_39_39, &Length_58);
              succeeded = (Length_58 > (MR_Integer) 2);
              if (succeeded)
              {
                Var_62 = (MR_Integer) 0;
                Var_63 = (MR_Char) 91;
                mercury__string__unsafe_index_3_p_0(STATE_VARIABLE_Str_39_39, Var_62, &Var_67);
                succeeded = (Var_63 == Var_67);
                if (succeeded)
                {
                  NumBrackets_59 = (MR_Integer) 0;
                  Var_64 = (MR_Integer) 1;
                  succeeded = demangle__find_matching_close_bracket_5_p_0(NumBrackets_59, Length_58, STATE_VARIABLE_Str_39_39, Var_64, &Index_60);
                  if (succeeded)
                  {
                    Var_66 = (MR_Integer) 1;
                    Var_65 = (MR_Integer) ((MR_Unsigned) Index_60 + (MR_Unsigned) Var_66);
                    mercury__string__split_4_p_0(STATE_VARIABLE_Str_39_39, Var_65, &TypeSpec_17, &STATE_VARIABLE_Str_40_40);
                    Seq_19 = (MR_Integer) 0;
                    Line_20 = (MR_Integer) 0;
                    {
                      IntroducedPredType_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), IntroducedPredType_18, 0) = ((MR_Box) (TypeSpec_17));
                    }
                    succeeded = MR_TRUE;
                  }
                }
              }
            }
          }
          else
          {
            MR_String STATE_VARIABLE_Str_41_41;
            MR_String Var_42;
            MR_String STATE_VARIABLE_Str_43_43;
            MR_Integer Digit_72;
            MR_String STATE_VARIABLE_Str_9_73;
            MR_Char Char_78;
            MR_Integer Digit_83;
            MR_String STATE_VARIABLE_Str_9_84;
            MR_Char Char_89;

            IntroducedPredType_18 = IntroducedPredType0_11;
            succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_39_39, &Char_78, &STATE_VARIABLE_Str_9_73);
            if (succeeded)
            {
              if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) Char_78 - (MR_Unsigned) (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
              {
                Digit_72 = ((&demangle_vector_common_2[20 + (MR_Integer) ((MR_Unsigned) Char_78 - (MR_Unsigned) (MR_Integer) 48)]))->demangle__vector_common_type_2_0__vct_2_f_0;
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                succeeded = demangle__remove_int_2_4_p_0(Digit_72, &Line_20, STATE_VARIABLE_Str_9_73, &STATE_VARIABLE_Str_41_41);
                if (succeeded)
                {
                  Var_42 = (MR_String) "__";
                  succeeded = mercury__string__remove_prefix_3_p_0(Var_42, STATE_VARIABLE_Str_41_41, &STATE_VARIABLE_Str_43_43);
                  if (succeeded)
                  {
                    succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_43_43, &Char_89, &STATE_VARIABLE_Str_9_84);
                    if (succeeded)
                    {
                      if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) Char_89 - (MR_Unsigned) (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
                      {
                        Digit_83 = ((&demangle_vector_common_2[30 + (MR_Integer) ((MR_Unsigned) Char_89 - (MR_Unsigned) (MR_Integer) 48)]))->demangle__vector_common_type_2_0__vct_2_f_0;
                        succeeded = MR_TRUE;
                      }
                      else
                        succeeded = MR_FALSE;
                      if (succeeded)
                        succeeded = demangle__remove_int_2_4_p_0(Digit_83, &Seq_19, STATE_VARIABLE_Str_9_84, &STATE_VARIABLE_Str_40_40);
                    }
                  }
                }
              }
            }
          }
        }
        if (succeeded)
        {
          *STATE_VARIABLE_Str_22 = STATE_VARIABLE_Str_40_40;
          *PredName_6 = PredName1_15;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *Category_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IntroducedPredType_18));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Line_20));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Seq_19));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (LambdaPredOrFunc_12));
          }
        }
        else
        {
          *Category_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
          *PredName_6 = STATE_VARIABLE_Str_0_21;
          *STATE_VARIABLE_Str_22 = STATE_VARIABLE_Str_38_38;
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
        {
          NumBrackets_12 = (MR_Integer) ((MR_Unsigned) NumBrackets0_6 + (MR_Unsigned) (MR_Integer) 1);
        }
        else
        {
          succeeded = (Char_11 == (MR_Char) 93);
          if (succeeded)
          {
            NumBrackets_12 = (MR_Integer) ((MR_Unsigned) NumBrackets0_6 - (MR_Unsigned) (MR_Integer) 1);
          }
          else
            NumBrackets_12 = NumBrackets0_6;
        }
        Var_15 = (MR_Integer) ((MR_Unsigned) Index0_9 + (MR_Unsigned) (MR_Integer) 1);
        // direct tailcall eliminated
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
    MR_String STATE_VARIABLE_Str_12_12;
    MR_Char Char_19;

    // setup for model_semi tailcalls optimized into a loop
    succeeded = mercury__string__first_char_3_p_3(STATE_VARIABLE_Str_0_10, &Char_19, &STATE_VARIABLE_Str_12_12);
    if (succeeded)
    {
      if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) Char_19 - (MR_Unsigned) (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
      {
        Next_8 = ((&demangle_vector_common_2[10 + (MR_Integer) ((MR_Unsigned) Char_19 - (MR_Unsigned) (MR_Integer) 48)]))->demangle__vector_common_type_2_0__vct_2_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
    }
    if (succeeded)
    {
      MR_Integer Int1_9;
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) Int0_5 * (MR_Unsigned) (MR_Integer) 10);
      MR_Integer next_value_of_Int0_5;
      MR_String next_value_of_STATE_VARIABLE_Str_0_10;

      Int1_9 = (MR_Integer) ((MR_Unsigned) Var_13 + (MR_Unsigned) Next_8);
      // direct tailcall eliminated
      next_value_of_Int0_5 = Int1_9;
      next_value_of_STATE_VARIABLE_Str_0_10 = STATE_VARIABLE_Str_12_12;
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

static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
  MR_Word * HigherOrder_6,
  MR_Integer ModeNum0_7,
  MR_Integer * ModeNum_8,
  MR_String STATE_VARIABLE_Str_0_11,
  MR_String * STATE_VARIABLE_Str_12)
{
  {
    MR_bool succeeded;
    MR_Integer HO_Num_10;
    MR_String STATE_VARIABLE_Str_15_15;
    MR_String STATE_VARIABLE_Str_13_13;
    MR_String Var_14;

    succeeded = demangle__remove_trailing_int_3_p_0(&HO_Num_10, STATE_VARIABLE_Str_0_11, &STATE_VARIABLE_Str_13_13);
    if (succeeded)
    {
      Var_14 = (MR_String) "__ho";
      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_13_13, Var_14, &STATE_VARIABLE_Str_15_15);
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Str_12 = STATE_VARIABLE_Str_15_15;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *HigherOrder_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (HO_Num_10));
      }
    }
    else
    {
      *HigherOrder_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_Str_12 = STATE_VARIABLE_Str_0_11;
    }
    *ModeNum_8 = ModeNum0_7;
  }
}

static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
  MR_Word * UnusedArgs_6,
  MR_Integer ModeNum0_7,
  MR_Integer * ModeNum_8,
  MR_String STATE_VARIABLE_Str_0_11,
  MR_String * STATE_VARIABLE_Str_12)
{
  {
    MR_bool succeeded;
    MR_Integer UA_ModeNum_10;
    MR_String STATE_VARIABLE_Str_15_15;
    MR_String STATE_VARIABLE_Str_13_13;
    MR_String Var_14;

    succeeded = demangle__remove_trailing_int_3_p_0(&UA_ModeNum_10, STATE_VARIABLE_Str_0_11, &STATE_VARIABLE_Str_13_13);
    if (succeeded)
    {
      Var_14 = (MR_String) "__ua";
      succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_13_13, Var_14, &STATE_VARIABLE_Str_15_15);
    }
    if (succeeded)
    {
      MR_Word Var_16;

      *STATE_VARIABLE_Str_12 = STATE_VARIABLE_Str_15_15;
      {
        Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (ModeNum0_7));
        MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) ((MR_Integer) 0));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *UnusedArgs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
      }
      *ModeNum_8 = mercury__int__mod_2_f_0(UA_ModeNum_10, (MR_Integer) 10000);
    }
    else
    {
      MR_String STATE_VARIABLE_Str_21_21;
      MR_Integer UA_ModeNum_26;
      MR_String STATE_VARIABLE_Str_19_19;
      MR_String Var_20;

      succeeded = demangle__remove_trailing_int_3_p_0(&UA_ModeNum_26, STATE_VARIABLE_Str_0_11, &STATE_VARIABLE_Str_19_19);
      if (succeeded)
      {
        Var_20 = (MR_String) "__uab";
        succeeded = mercury__string__remove_suffix_3_p_0(STATE_VARIABLE_Str_19_19, Var_20, &STATE_VARIABLE_Str_21_21);
      }
      if (succeeded)
      {
        MR_Word Var_22;

        *STATE_VARIABLE_Str_12 = STATE_VARIABLE_Str_21_21;
        {
          Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_22, 0) = ((MR_Box) (ModeNum0_7));
          MR_hl_field(MR_mktag(0), Var_22, 1) = ((MR_Box) ((MR_Integer) 1));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *UnusedArgs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_22));
        }
        *ModeNum_8 = mercury__int__mod_2_f_0(UA_ModeNum_26, (MR_Integer) 10000);
      }
      else
      {
        *UnusedArgs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ModeNum_8 = ModeNum0_7;
        *STATE_VARIABLE_Str_12 = STATE_VARIABLE_Str_0_11;
      }
    }
  }
}

static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
  MR_Integer * Int_4,
  MR_String STATE_VARIABLE_Str_0_8,
  MR_String * STATE_VARIABLE_Str_9)
{
  {
    MR_bool succeeded;
    MR_Integer Digit_6;
    MR_String STATE_VARIABLE_Str_10_10;
    MR_Char Char_18;
    MR_Integer Len_22;
    MR_Integer Len1_23;
    MR_Integer Rest_7;
    MR_String STATE_VARIABLE_Str_11_11;

    mercury__string__length_2_p_0(STATE_VARIABLE_Str_0_8, &Len_22);
    Len1_23 = (MR_Integer) ((MR_Unsigned) Len_22 - (MR_Unsigned) (MR_Integer) 1);
    succeeded = mercury__string__index_3_p_0(STATE_VARIABLE_Str_0_8, Len1_23, &Char_18);
    if (succeeded)
    {
      mercury__string__left_3_p_0(STATE_VARIABLE_Str_0_8, Len1_23, &STATE_VARIABLE_Str_10_10);
      if ((((MR_Unsigned) (MR_Integer) ((MR_Unsigned) Char_18 - (MR_Unsigned) (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
      {
        Digit_6 = ((&demangle_vector_common_2[0 + (MR_Integer) ((MR_Unsigned) Char_18 - (MR_Unsigned) (MR_Integer) 48)]))->demangle__vector_common_type_2_0__vct_2_f_0;
        succeeded = MR_TRUE;
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
      {
        succeeded = demangle__remove_trailing_int_3_p_0(&Rest_7, STATE_VARIABLE_Str_10_10, &STATE_VARIABLE_Str_11_11);
        if (succeeded)
        {
          MR_Integer Var_12;

          *STATE_VARIABLE_Str_9 = STATE_VARIABLE_Str_11_11;
          Var_12 = (MR_Integer) ((MR_Unsigned) Rest_7 * (MR_Unsigned) (MR_Integer) 10);
          *Int_4 = (MR_Integer) ((MR_Unsigned) Var_12 + (MR_Unsigned) Digit_6);
        }
        else
        {
          *Int_4 = Digit_6;
          *STATE_VARIABLE_Str_9 = STATE_VARIABLE_Str_10_10;
        }
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = demangle____Unify____data_category_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    demangle____Compare____data_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = demangle____Unify____introduced_pred_type_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    demangle____Compare____introduced_pred_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = demangle____Unify____pred_category_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    demangle____Compare____pred_category_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
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
