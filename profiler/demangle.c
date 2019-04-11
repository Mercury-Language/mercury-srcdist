/*
** Automatically generated from `demangle.m'
** by the Mercury compiler,
** version rotd-2017-07-04
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


/* :- module demangle. */
/* :- implementation. */

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

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
  MR_Box demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2);

static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
  MR_Box * demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2,
  MR_Box demangle__wrapper_arg_3);

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
  MR_Box demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2);

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
  MR_Box * demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2,
  MR_Box demangle__wrapper_arg_3);

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
  MR_Box demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2);

static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
  MR_Box * demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2,
  MR_Box demangle__wrapper_arg_3);

static void MR_CALL 
demangle____Compare____pred_category_0_0(
  MR_Word * demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2,
  MR_Word demangle__HeadVar__3_3);

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0(
  MR_Word demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2);

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0(
  MR_Word * demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2,
  MR_Word demangle__HeadVar__3_3);

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0(
  MR_Word demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2);

static void MR_CALL 
demangle____Compare____data_category_0_0(
  MR_Word * demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2,
  MR_Word demangle__HeadVar__3_3);

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0(
  MR_Word demangle__HeadVar__2_1,
  MR_Word demangle__HeadVar__2_2);

static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
  MR_Integer * demangle__Int_4,
  MR_String demangle__STATE_VARIABLE_Str_0_8,
  MR_String * demangle__STATE_VARIABLE_Str_9);

static void MR_CALL 
demangle__format_maybe_module_3_p_0(
  MR_Word demangle__HeadVar__1_1,
  MR_String demangle__Name_2,
  MR_String * demangle__QualifiedName_3);

static void MR_CALL 
demangle__insert_prefix_3_p_0(
  MR_String demangle__Prefix_4,
  MR_String demangle__Name0_5,
  MR_String * demangle__Name_6);

static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
  MR_Integer demangle__NumBrackets0_6,
  MR_Integer demangle__Length_7,
  MR_String demangle__String_8,
  MR_Integer demangle__Index0_9,
  MR_Integer * demangle__Index_10);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
  void * demangle__env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
  void * demangle__env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
  void * demangle__env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
  void * demangle__env_ptr_arg);

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
  MR_Word * demangle__MaybeModule_5,
  MR_Word demangle__StringsToStopAt_6,
  MR_String demangle__String0_7,
  MR_String * demangle__String_8);

static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
  MR_Integer demangle__Int0_5,
  MR_Integer * demangle__Int_6,
  MR_String demangle__STATE_VARIABLE_Str_0_10,
  MR_String * demangle__STATE_VARIABLE_Str_11);

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_6,
  MR_String * demangle__STATE_VARIABLE_Str_7);

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_4,
  MR_String * demangle__STATE_VARIABLE_Str_5);

static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
  MR_Integer demangle__Num_5,
  MR_String * demangle__FormattedArgs_6,
  MR_String demangle__STATE_VARIABLE_Str_0_13,
  MR_String * demangle__STATE_VARIABLE_Str_14);

static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_8,
  MR_String * demangle__STATE_VARIABLE_Str_9);

static MR_bool MR_CALL 
demangle__format_data_5_p_0(
  MR_Word demangle__Category_6,
  MR_Word demangle__MaybeModule_7,
  MR_String demangle__Name_8,
  MR_Integer demangle__Arity_9,
  MR_String * demangle__Result_10);

static void MR_CALL 
demangle__format_proc_10_p_0(
  MR_Word demangle__Category_11,
  MR_Word demangle__MaybeModule_12,
  MR_String demangle__PredOrFunc_13,
  MR_String demangle__PredName_14,
  MR_Integer demangle__Arity_15,
  MR_Integer demangle__ModeNum_16,
  MR_Word demangle__HigherOrder_17,
  MR_Word demangle__UnusedArgs_18,
  MR_Word demangle__MaybeInternalLabelNum_19,
  MR_String * demangle__DemangledName_20);

static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
  MR_String * demangle__PredName_6,
  MR_Word demangle__Category0_7,
  MR_Word * demangle__Category_8,
  MR_String demangle__STATE_VARIABLE_Str_0_21,
  MR_String * demangle__STATE_VARIABLE_Str_22);

static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
  MR_Integer demangle__ModeNum0_5,
  MR_Word * demangle__Category0_6,
  MR_String demangle__STATE_VARIABLE_Str_0_8,
  MR_String * demangle__STATE_VARIABLE_Str_9);

static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
  MR_Word * demangle__HigherOrder_6,
  MR_Integer demangle__ModeNum0_7,
  MR_Integer * demangle__ModeNum_8,
  MR_String demangle__STATE_VARIABLE_Str_0_11,
  MR_String * demangle__STATE_VARIABLE_Str_12);

static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
  MR_Word * demangle__UnusedArgs_6,
  MR_Integer demangle__ModeNum0_7,
  MR_Integer * demangle__ModeNum_8,
  MR_String demangle__STATE_VARIABLE_Str_0_11,
  MR_String * demangle__STATE_VARIABLE_Str_12);

static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_28,
  MR_String * demangle__STATE_VARIABLE_Str_29);

static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_20,
  MR_String * demangle__STATE_VARIABLE_Str_21);

static MR_bool MR_CALL 
demangle__demangle_from_c_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_4,
  MR_String * demangle__STATE_VARIABLE_Str_5);


static /* final */ const MR_Box demangle_scalar_common_1[16][2];

static /* final */ const MR_Box demangle_scalar_common_2[2][1];


/* sealed */ struct demangle__vector_common_type_3_0_s {
  const MR_Integer demangle__vector_common_type_3_0__vct_3_f_0;
};

static /* final */ const struct demangle__vector_common_type_3_0_s demangle_vector_common_3[70];



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

static /* final */ const MR_Box demangle_scalar_common_2[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};


static /* final */ const struct demangle__vector_common_type_3_0_s demangle_vector_common_3[70] = {
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
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_1 = {
  (MR_String) "ipt_deforestation",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_2 = {
  (MR_String) "ipt_accumulator",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo demangle__demangle__field_types_introduced_pred_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_3 = {
  (MR_String) "ipt_type_spec",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 3,
  demangle__demangle__field_types_introduced_pred_type_0_3,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    demangle__demangle__du_stag_ordered_introduced_pred_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_1 = {
  (MR_String) "unify",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_2 = {
  (MR_String) "compare",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_3 = {
  (MR_String) "ordinary",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 4,
  demangle__demangle__field_types_pred_category_0_4,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    mercury__private_builtin__MR_SECTAG_LOCAL,
    demangle__demangle__du_stag_ordered_pred_category_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
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
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
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

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
  MR_Box demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2)
{
  {
    MR_bool demangle__succeeded;

    {
      demangle__succeeded = demangle____Unify____data_category_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
  MR_Box * demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2,
  MR_Box demangle__wrapper_arg_3)
{
  {
    MR_Word demangle__conv0_HeadVar__1_1;

    {
      demangle____Compare____data_category_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
  MR_Box demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2)
{
  {
    MR_bool demangle__succeeded;

    {
      demangle__succeeded = demangle____Unify____introduced_pred_type_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
  MR_Box * demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2,
  MR_Box demangle__wrapper_arg_3)
{
  {
    MR_Word demangle__conv0_HeadVar__1_1;

    {
      demangle____Compare____introduced_pred_type_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
  MR_Box demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2)
{
  {
    MR_bool demangle__succeeded;

    {
      demangle__succeeded = demangle____Unify____pred_category_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
  MR_Box * demangle__wrapper_arg_1,
  MR_Box demangle__wrapper_arg_2,
  MR_Box demangle__wrapper_arg_3)
{
  {
    MR_Word demangle__conv0_HeadVar__1_1;

    {
      demangle____Compare____pred_category_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
demangle____Compare____pred_category_0_0(
  MR_Word * demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2,
  MR_Word demangle__HeadVar__3_3)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__CastX_47 = (MR_Integer) demangle__HeadVar__2_2;
    MR_Integer demangle__CastY_48 = (MR_Integer) demangle__HeadVar__3_3;

    demangle__succeeded = (demangle__CastX_47 == demangle__CastY_48);
    if (demangle__succeeded)
      *demangle__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) demangle__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(demangle__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String demangle__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 3)));
            MR_Integer demangle__Var_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer demangle__Var_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word demangle__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word demangle__ArgY1_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer demangle__ArgY2_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Integer demangle__ArgY3_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 2)));
                  MR_String demangle__ArgY4_43 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word demangle__Var_44;

                  {
                    demangle____Compare____introduced_pred_type_0_0(&demangle__Var_44, demangle__Var_56, demangle__ArgY1_37);
                  }
                  demangle__succeeded = (demangle__Var_44 == (MR_Integer) 0);
                  demangle__succeeded = !(demangle__succeeded);
                  if (demangle__succeeded)
                    *demangle__HeadVar__1_1 = demangle__Var_44;
                  else
                    {
                      MR_Word demangle__Var_45;

                      {
                        mercury__private_builtin__builtin_compare_int_3_p_0(&demangle__Var_45, demangle__Var_55, demangle__ArgY2_39);
                      }
                      demangle__succeeded = (demangle__Var_45 == (MR_Integer) 0);
                      demangle__succeeded = !(demangle__succeeded);
                      if (demangle__succeeded)
                        *demangle__HeadVar__1_1 = demangle__Var_45;
                      else
                        {
                          MR_Word demangle__Var_46;

                          {
                            mercury__private_builtin__builtin_compare_int_3_p_0(&demangle__Var_46, demangle__Var_54, demangle__ArgY3_41);
                          }
                          demangle__succeeded = (demangle__Var_46 == (MR_Integer) 0);
                          demangle__succeeded = !(demangle__succeeded);
                          if (demangle__succeeded)
                            *demangle__HeadVar__1_1 = demangle__Var_46;
                          else
                            {
                              mercury__private_builtin__builtin_compare_string_3_p_0(demangle__HeadVar__1_1, demangle__Var_53, demangle__ArgY4_43);
                            }
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
  MR_Word demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__CastX_19 = (MR_Integer) demangle__HeadVar__1_1;
    MR_Integer demangle__CastY_20 = (MR_Integer) demangle__HeadVar__2_2;

    demangle__succeeded = (demangle__CastX_19 == demangle__CastY_20);
    if (demangle__succeeded)
      demangle__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) demangle__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(demangle__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer demangle__CastX_3 = (MR_Integer) demangle__HeadVar__1_1;
                MR_Integer demangle__CastY_4 = (MR_Integer) demangle__HeadVar__2_2;

                demangle__succeeded = (demangle__CastY_4 == demangle__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer demangle__CastX_5 = (MR_Integer) demangle__HeadVar__1_1;
                MR_Integer demangle__CastY_6 = (MR_Integer) demangle__HeadVar__2_2;

                demangle__succeeded = (demangle__CastY_6 == demangle__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer demangle__CastX_7 = (MR_Integer) demangle__HeadVar__1_1;
                MR_Integer demangle__CastY_8 = (MR_Integer) demangle__HeadVar__2_2;

                demangle__succeeded = (demangle__CastY_8 == demangle__CastX_7);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer demangle__CastX_9 = (MR_Integer) demangle__HeadVar__1_1;
                MR_Integer demangle__CastY_10 = (MR_Integer) demangle__HeadVar__2_2;

                demangle__succeeded = (demangle__CastY_10 == demangle__CastX_9);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word demangle__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word demangle__ArgY1_12;
            MR_Integer demangle__ArgX2_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer demangle__ArgY2_14;
            MR_Integer demangle__ArgX3_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer demangle__ArgY3_16;
            MR_String demangle__ArgX4_17 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 3)));
            MR_String demangle__ArgY4_18;

            demangle__succeeded = ((MR_tag((MR_Word) demangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (demangle__succeeded)
              {
                demangle__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));
                demangle__ArgY2_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 1)));
                demangle__ArgY3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 2)));
                demangle__ArgY4_18 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 3)));
                {
                  demangle__succeeded = demangle____Unify____introduced_pred_type_0_0(demangle__ArgX1_11, demangle__ArgY1_12);
                }
                if (demangle__succeeded)
                  {
                    demangle__succeeded = (demangle__ArgX2_13 == demangle__ArgY2_14);
                    if (demangle__succeeded)
                      {
                        demangle__succeeded = (demangle__ArgX3_15 == demangle__ArgY3_16);
                        if (demangle__succeeded)
                          demangle__succeeded = (strcmp(demangle__ArgX4_17, demangle__ArgY4_18) == 0);
                      }
                  }
              }
          }
          break;
      }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0(
  MR_Word * demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2,
  MR_Word demangle__HeadVar__3_3)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__CastX_12 = (MR_Integer) demangle__HeadVar__2_2;
    MR_Integer demangle__CastY_13 = (MR_Integer) demangle__HeadVar__3_3;

    demangle__succeeded = (demangle__CastX_12 == demangle__CastY_13);
    if (demangle__succeeded)
      *demangle__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) demangle__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(demangle__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String demangle__Var_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(demangle__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String demangle__ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 0)));

                  {
                    mercury__private_builtin__builtin_compare_string_3_p_0(demangle__HeadVar__1_1, demangle__Var_15, demangle__ArgY1_11);
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
demangle____Unify____introduced_pred_type_0_0(
  MR_Word demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__CastX_11 = (MR_Integer) demangle__HeadVar__1_1;
    MR_Integer demangle__CastY_12 = (MR_Integer) demangle__HeadVar__2_2;

    demangle__succeeded = (demangle__CastX_11 == demangle__CastY_12);
    if (demangle__succeeded)
      demangle__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) demangle__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(demangle__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer demangle__CastX_3 = (MR_Integer) demangle__HeadVar__1_1;
                MR_Integer demangle__CastY_4 = (MR_Integer) demangle__HeadVar__2_2;

                demangle__succeeded = (demangle__CastY_4 == demangle__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer demangle__CastX_5 = (MR_Integer) demangle__HeadVar__1_1;
                MR_Integer demangle__CastY_6 = (MR_Integer) demangle__HeadVar__2_2;

                demangle__succeeded = (demangle__CastY_6 == demangle__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer demangle__CastX_7 = (MR_Integer) demangle__HeadVar__1_1;
                MR_Integer demangle__CastY_8 = (MR_Integer) demangle__HeadVar__2_2;

                demangle__succeeded = (demangle__CastY_8 == demangle__CastX_7);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String demangle__ArgX1_9 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 0)));
            MR_String demangle__ArgY1_10;

            demangle__succeeded = ((MR_tag((MR_Word) demangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (demangle__succeeded)
              {
                demangle__ArgY1_10 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));
                demangle__succeeded = (strcmp(demangle__ArgX1_9, demangle__ArgY1_10) == 0);
              }
          }
          break;
      }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle____Compare____data_category_0_0(
  MR_Word * demangle__HeadVar__1_1,
  MR_Word demangle__HeadVar__2_2,
  MR_Word demangle__HeadVar__3_3)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__Cast_HeadVar1_4 = (MR_Integer) demangle__HeadVar__2_2;
    MR_Integer demangle__Cast_HeadVar2_5 = (MR_Integer) demangle__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(demangle__HeadVar__1_1, demangle__Cast_HeadVar1_4, demangle__Cast_HeadVar2_5);
    }
  }
}

static MR_bool MR_CALL 
demangle____Unify____data_category_0_0(
  MR_Word demangle__HeadVar__2_1,
  MR_Word demangle__HeadVar__2_2)
{
  {
    MR_bool demangle__succeeded = (demangle__HeadVar__2_1 == demangle__HeadVar__2_2);

    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
  MR_Integer * demangle__Int_4,
  MR_String demangle__STATE_VARIABLE_Str_0_8,
  MR_String * demangle__STATE_VARIABLE_Str_9)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__Digit_6;
    MR_String demangle__STATE_VARIABLE_Str_10_10;
    MR_Char demangle__Char_18;
    MR_Integer demangle__Len_22;
    MR_Integer demangle__Len1_23;
    MR_Integer demangle__Rest_7;
    MR_String demangle__STATE_VARIABLE_Str_11_11;

    {
      mercury__string__length_2_p_0(demangle__STATE_VARIABLE_Str_0_8, &demangle__Len_22);
    }
    demangle__Len1_23 = (demangle__Len_22 - (MR_Integer) 1);
    {
      demangle__succeeded = mercury__string__index_3_p_0(demangle__STATE_VARIABLE_Str_0_8, demangle__Len1_23, &demangle__Char_18);
    }
    if (demangle__succeeded)
      {
        {
          mercury__string__left_3_p_0(demangle__STATE_VARIABLE_Str_0_8, demangle__Len1_23, &demangle__STATE_VARIABLE_Str_10_10);
        }
        if ((((MR_Unsigned) (demangle__Char_18 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
          {
            demangle__Digit_6 = ((&demangle_vector_common_3[60 + (demangle__Char_18 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
            demangle__succeeded = MR_TRUE;
          }
        else
          demangle__succeeded = MR_FALSE;
        if (demangle__succeeded)
          {
            {
              demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Rest_7, demangle__STATE_VARIABLE_Str_10_10, &demangle__STATE_VARIABLE_Str_11_11);
            }
            if (demangle__succeeded)
              {
                MR_Integer demangle__Var_12;

                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_11_11;
                demangle__Var_12 = (demangle__Rest_7 * (MR_Integer) 10);
                *demangle__Int_4 = (demangle__Var_12 + demangle__Digit_6);
              }
            else
              {
                *demangle__Int_4 = demangle__Digit_6;
                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_10_10;
              }
            demangle__succeeded = MR_TRUE;
          }
      }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle__format_maybe_module_3_p_0(
  MR_Word demangle__HeadVar__1_1,
  MR_String demangle__Name_2,
  MR_String * demangle__QualifiedName_3)
{
  {
    MR_bool demangle__succeeded;

    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *demangle__QualifiedName_3 = demangle__Name_2;
    else
      {
        MR_String demangle__Module_10 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 0)));
        MR_String demangle__Var_20;

        {
          demangle__Var_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__Name_2);
        }
        {
          *demangle__QualifiedName_3 = mercury__string__f_43_43_2_f_0(demangle__Module_10, demangle__Var_20);
        }
      }
  }
}

static void MR_CALL 
demangle__insert_prefix_3_p_0(
  MR_String demangle__Prefix_4,
  MR_String demangle__Name0_5,
  MR_String * demangle__Name_6)
{
  {
    MR_bool demangle__succeeded;

    {
      mercury__string__append_3_p_2(demangle__Prefix_4, demangle__Name0_5, demangle__Name_6);
    }
  }
}

static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
  MR_Integer demangle__NumBrackets0_6,
  MR_Integer demangle__Length_7,
  MR_String demangle__String_8,
  MR_Integer demangle__Index0_9,
  MR_Integer * demangle__Index_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool demangle__succeeded = (demangle__Index0_9 < demangle__Length_7);
        MR_Char demangle__Char_11;

        if (demangle__succeeded)
          {
            {
              mercury__string__unsafe_index_3_p_0(demangle__String_8, demangle__Index0_9, &demangle__Char_11);
            }
            demangle__succeeded = (demangle__Char_11 == (MR_Char) 93);
            if (demangle__succeeded)
              demangle__succeeded = (demangle__NumBrackets0_6 == (MR_Integer) 0);
            if (demangle__succeeded)
              {
                *demangle__Index_10 = demangle__Index0_9;
                demangle__succeeded = MR_TRUE;
              }
            else
              {
                MR_Integer demangle__NumBrackets_12;
                MR_Integer demangle__Var_15;

                demangle__succeeded = (demangle__Char_11 == (MR_Char) 91);
                if (demangle__succeeded)
                  {
                    demangle__NumBrackets_12 = (demangle__NumBrackets0_6 + (MR_Integer) 1);
                  }
                else
                  {
                    demangle__succeeded = (demangle__Char_11 == (MR_Char) 93);
                    if (demangle__succeeded)
                      {
                        demangle__NumBrackets_12 = (demangle__NumBrackets0_6 - (MR_Integer) 1);
                      }
                    else
                      demangle__NumBrackets_12 = demangle__NumBrackets0_6;
                  }
                demangle__Var_15 = (demangle__Index0_9 + (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Integer demangle__next_value_of_NumBrackets0_6 = demangle__NumBrackets_12;
                  MR_Integer demangle__next_value_of_Index0_9 = demangle__Var_15;

                  demangle__Index0_9 = demangle__next_value_of_Index0_9;
                  demangle__NumBrackets0_6 = demangle__next_value_of_NumBrackets0_6;
                }
                continue;
              }
          }
        return demangle__succeeded;
      }
      break;
    }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
  void * demangle__env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

    MR_builtin_longjmp((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
  void * demangle__env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

    (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9 = ((MR_String) (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9);
    {
      demangle__remove_maybe_module_prefix_4_p_0_2(demangle__env_ptr);
    }
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
  void * demangle__env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

    {
      (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9);
    }
    if ((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
      {
        demangle__remove_maybe_module_prefix_4_p_0_1(demangle__env_ptr);
      }
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
  void * demangle__env_ptr_arg)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

    if (MR_builtin_setjmp((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9, (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__remove_maybe_module_prefix_4_p_0_3, demangle__env_ptr);
          }
        }
        (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
  MR_Word * demangle__MaybeModule_5,
  MR_Word demangle__StringsToStopAt_6,
  MR_String demangle__String0_7,
  MR_String * demangle__String_8)
{
  {
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s demangle__env;

    (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6 = demangle__StringsToStopAt_6;
    (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7 = demangle__String0_7;
    {
      demangle__remove_maybe_module_prefix_4_p_0_4(&demangle__env);
    }
    if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
      {
        *demangle__MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *demangle__String_8 = (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
      }
    else
      {
        MR_Integer demangle__Index_10;

        {
          (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (MR_String) "__", &demangle__Index_10);
        }
        if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
          {
            MR_String demangle__Module_11;
            MR_Integer demangle__Len_12;
            MR_Integer demangle__Index2_13;
            MR_String demangle__String1_14;
            MR_String demangle__SubModule_15;
            MR_String demangle__String2_16;
            MR_Word demangle__Var_20;

            {
              mercury__string__left_3_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, demangle__Index_10, &demangle__Module_11);
            }
            {
              mercury__string__length_2_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, &demangle__Len_12);
            }
            demangle__Index2_13 = (demangle__Index_10 + (MR_Integer) 2);
            {
              mercury__string__between_4_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, demangle__Index2_13, demangle__Len_12, &demangle__String1_14);
            }
            {
              demangle__remove_maybe_module_prefix_4_p_0(&demangle__Var_20, (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__String1_14, &demangle__String2_16);
            }
            (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) demangle__Var_20)) == (MR_mktag((MR_Integer) 1)));
            if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
              {
                demangle__SubModule_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Var_20, (MR_Integer) 0)));
                {
                  MR_String demangle__QualifiedModule_17;
                  MR_Word demangle__Var_21;
                  MR_Word demangle__Var_22;
                  MR_Word demangle__Var_24;

                  {
                    demangle__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), demangle__Var_24, 0) = ((MR_Box) (demangle__SubModule_15));
                    MR_hl_field(MR_mktag(1), demangle__Var_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                  {
                    demangle__Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), demangle__Var_22, 0) = ((MR_Box) ((MR_String) "."));
                    MR_hl_field(MR_mktag(1), demangle__Var_22, 1) = ((MR_Box) (demangle__Var_24));
                  }
                  {
                    demangle__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), demangle__Var_21, 0) = ((MR_Box) (demangle__Module_11));
                    MR_hl_field(MR_mktag(1), demangle__Var_21, 1) = ((MR_Box) (demangle__Var_22));
                  }
                  {
                    mercury__string__append_list_2_p_0(demangle__Var_21, &demangle__QualifiedModule_17);
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *demangle__MaybeModule_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__QualifiedModule_17));
                  }
                  *demangle__String_8 = demangle__String2_16;
                }
              }
            else
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *demangle__MaybeModule_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__Module_11));
                }
                *demangle__String_8 = demangle__String1_14;
              }
          }
        else
          {
            *demangle__String_8 = (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
            *demangle__MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
      }
  }
}

static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
  MR_Integer demangle__Int0_5,
  MR_Integer * demangle__Int_6,
  MR_String demangle__STATE_VARIABLE_Str_0_10,
  MR_String * demangle__STATE_VARIABLE_Str_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool demangle__succeeded;
        MR_Integer demangle__Next_8;
        MR_String demangle__STATE_VARIABLE_Str_12_12;
        MR_Char demangle__Char_19;

        {
          demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_0_10, &demangle__Char_19, &demangle__STATE_VARIABLE_Str_12_12);
        }
        if (demangle__succeeded)
          {
            if ((((MR_Unsigned) (demangle__Char_19 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
              {
                demangle__Next_8 = ((&demangle_vector_common_3[50 + (demangle__Char_19 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
                demangle__succeeded = MR_TRUE;
              }
            else
              demangle__succeeded = MR_FALSE;
          }
        if (demangle__succeeded)
          {
            MR_Integer demangle__Int1_9;
            MR_Integer demangle__Var_13 = (demangle__Int0_5 * (MR_Integer) 10);

            demangle__Int1_9 = (demangle__Var_13 + demangle__Next_8);
            /* direct tailcall eliminated */
            {
              MR_Integer demangle__next_value_of_Int0_5 = demangle__Int1_9;
              MR_String demangle__next_value_of_STATE_VARIABLE_Str_0_10 = demangle__STATE_VARIABLE_Str_12_12;

              demangle__STATE_VARIABLE_Str_0_10 = demangle__next_value_of_STATE_VARIABLE_Str_0_10;
              demangle__Int0_5 = demangle__next_value_of_Int0_5;
            }
            continue;
          }
        else
          {
            *demangle__Int_6 = demangle__Int0_5;
            *demangle__STATE_VARIABLE_Str_11 = demangle__STATE_VARIABLE_Str_0_10;
            demangle__succeeded = MR_TRUE;
          }
        return demangle__succeeded;
      }
      break;
    }
}

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_6,
  MR_String * demangle__STATE_VARIABLE_Str_7)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__I_4;
    MR_Char demangle__C_5;
    MR_String demangle__STATE_VARIABLE_Str_8_8;
    MR_String demangle__STATE_VARIABLE_Str_11_11;
    MR_Integer demangle__Digit_17;
    MR_String demangle__STATE_VARIABLE_Str_9_18;
    MR_Char demangle__Char_23;
    MR_String demangle__STATE_VARIABLE_Str_10_10;
    MR_String demangle__Var_9;

    {
      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_0_6, &demangle__Char_23, &demangle__STATE_VARIABLE_Str_9_18);
    }
    if (demangle__succeeded)
      {
        if ((((MR_Unsigned) (demangle__Char_23 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
          {
            demangle__Digit_17 = ((&demangle_vector_common_3[40 + (demangle__Char_23 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
            demangle__succeeded = MR_TRUE;
          }
        else
          demangle__succeeded = MR_FALSE;
        if (demangle__succeeded)
          {
            {
              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_17, &demangle__I_4, demangle__STATE_VARIABLE_Str_9_18, &demangle__STATE_VARIABLE_Str_8_8);
            }
            if (demangle__succeeded)
              {
                demangle__Var_9 = (MR_String) "_";
                {
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_9, demangle__STATE_VARIABLE_Str_8_8, &demangle__STATE_VARIABLE_Str_10_10);
                }
                if (demangle__succeeded)
                  {
                    demangle__succeeded = demangle__fix_mangled_ascii_chars_2_p_0(demangle__STATE_VARIABLE_Str_10_10, &demangle__STATE_VARIABLE_Str_11_11);
                  }
                else
                  {
                    demangle__STATE_VARIABLE_Str_11_11 = demangle__STATE_VARIABLE_Str_8_8;
                    demangle__succeeded = MR_TRUE;
                  }
                if (demangle__succeeded)
                  {
                    {
                      demangle__succeeded = mercury__char__to_int_2_p_2(&demangle__C_5, demangle__I_4);
                    }
                    if (demangle__succeeded)
                      {
                        {
                          mercury__string__first_char_3_p_4(demangle__STATE_VARIABLE_Str_7, demangle__C_5, demangle__STATE_VARIABLE_Str_11_11);
                        }
                        demangle__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_4,
  MR_String * demangle__STATE_VARIABLE_Str_5)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__STATE_VARIABLE_Str_7_7;

    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f__", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_7_7);
    }
    if (demangle__succeeded)
      {
        {
          mercury__string__append_3_p_2((MR_String) "f_", demangle__STATE_VARIABLE_Str_7_7, demangle__STATE_VARIABLE_Str_5);
        }
        demangle__succeeded = MR_TRUE;
      }
    else
      {
        MR_String demangle__STATE_VARIABLE_Str_11_11;

        {
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_not_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_11_11);
        }
        if (demangle__succeeded)
          {
            {
              mercury__string__append_3_p_2((MR_String) "\\=", demangle__STATE_VARIABLE_Str_11_11, demangle__STATE_VARIABLE_Str_5);
            }
            demangle__succeeded = MR_TRUE;
          }
        else
          {
            MR_String demangle__STATE_VARIABLE_Str_15_15;

            {
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_or_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_15_15);
            }
            if (demangle__succeeded)
              {
                {
                  mercury__string__append_3_p_2((MR_String) ">=", demangle__STATE_VARIABLE_Str_15_15, demangle__STATE_VARIABLE_Str_5);
                }
                demangle__succeeded = MR_TRUE;
              }
            else
              {
                MR_String demangle__STATE_VARIABLE_Str_19_19;

                {
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_or_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_19_19);
                }
                if (demangle__succeeded)
                  {
                    {
                      mercury__string__append_3_p_2((MR_String) "=<", demangle__STATE_VARIABLE_Str_19_19, demangle__STATE_VARIABLE_Str_5);
                    }
                    demangle__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_String demangle__STATE_VARIABLE_Str_23_23;

                    {
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_23_23);
                    }
                    if (demangle__succeeded)
                      {
                        {
                          mercury__string__append_3_p_2((MR_String) "=", demangle__STATE_VARIABLE_Str_23_23, demangle__STATE_VARIABLE_Str_5);
                        }
                        demangle__succeeded = MR_TRUE;
                      }
                    else
                      {
                        MR_String demangle__STATE_VARIABLE_Str_27_27;

                        {
                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_than", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_27_27);
                        }
                        if (demangle__succeeded)
                          {
                            {
                              mercury__string__append_3_p_2((MR_String) "<", demangle__STATE_VARIABLE_Str_27_27, demangle__STATE_VARIABLE_Str_5);
                            }
                            demangle__succeeded = MR_TRUE;
                          }
                        else
                          {
                            MR_String demangle__STATE_VARIABLE_Str_31_31;

                            {
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_than", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_31_31);
                            }
                            if (demangle__succeeded)
                              {
                                {
                                  mercury__string__append_3_p_2((MR_String) ">", demangle__STATE_VARIABLE_Str_31_31, demangle__STATE_VARIABLE_Str_5);
                                }
                                demangle__succeeded = MR_TRUE;
                              }
                            else
                              {
                                MR_String demangle__STATE_VARIABLE_Str_35_35;

                                {
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_minus", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_35_35);
                                }
                                if (demangle__succeeded)
                                  {
                                    {
                                      demangle__insert_prefix_3_p_0((MR_String) "-", demangle__STATE_VARIABLE_Str_35_35, demangle__STATE_VARIABLE_Str_5);
                                    }
                                    demangle__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    MR_String demangle__STATE_VARIABLE_Str_39_39;

                                    {
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_plus", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_39_39);
                                    }
                                    if (demangle__succeeded)
                                      {
                                        {
                                          demangle__insert_prefix_3_p_0((MR_String) "+", demangle__STATE_VARIABLE_Str_39_39, demangle__STATE_VARIABLE_Str_5);
                                        }
                                        demangle__succeeded = MR_TRUE;
                                      }
                                    else
                                      {
                                        MR_String demangle__STATE_VARIABLE_Str_43_43;

                                        {
                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_times", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_43_43);
                                        }
                                        if (demangle__succeeded)
                                          {
                                            {
                                              demangle__insert_prefix_3_p_0((MR_String) "*", demangle__STATE_VARIABLE_Str_43_43, demangle__STATE_VARIABLE_Str_5);
                                            }
                                            demangle__succeeded = MR_TRUE;
                                          }
                                        else
                                          {
                                            MR_String demangle__STATE_VARIABLE_Str_47_47;

                                            {
                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_slash", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_47_47);
                                            }
                                            if (demangle__succeeded)
                                              {
                                                {
                                                  demangle__insert_prefix_3_p_0((MR_String) "/", demangle__STATE_VARIABLE_Str_47_47, demangle__STATE_VARIABLE_Str_5);
                                                }
                                                demangle__succeeded = MR_TRUE;
                                              }
                                            else
                                              {
                                                MR_String demangle__STATE_VARIABLE_Str_51_51;

                                                {
                                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_comma", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_51_51);
                                                }
                                                if (demangle__succeeded)
                                                  {
                                                    {
                                                      demangle__insert_prefix_3_p_0((MR_String) ",", demangle__STATE_VARIABLE_Str_51_51, demangle__STATE_VARIABLE_Str_5);
                                                    }
                                                    demangle__succeeded = MR_TRUE;
                                                  }
                                                else
                                                  {
                                                    MR_String demangle__STATE_VARIABLE_Str_55_55;

                                                    {
                                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_semicolon", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_55_55);
                                                    }
                                                    if (demangle__succeeded)
                                                      {
                                                        {
                                                          demangle__insert_prefix_3_p_0((MR_String) ";", demangle__STATE_VARIABLE_Str_55_55, demangle__STATE_VARIABLE_Str_5);
                                                        }
                                                        demangle__succeeded = MR_TRUE;
                                                      }
                                                    else
                                                      {
                                                        MR_String demangle__STATE_VARIABLE_Str_59_59;

                                                        {
                                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cut", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_59_59);
                                                        }
                                                        if (demangle__succeeded)
                                                          {
                                                            {
                                                              demangle__insert_prefix_3_p_0((MR_String) "!", demangle__STATE_VARIABLE_Str_59_59, demangle__STATE_VARIABLE_Str_5);
                                                            }
                                                            demangle__succeeded = MR_TRUE;
                                                          }
                                                        else
                                                          {
                                                            MR_String demangle__STATE_VARIABLE_Str_63_63;

                                                            {
                                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_tuple", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_63_63);
                                                            }
                                                            if (demangle__succeeded)
                                                              {
                                                                {
                                                                  demangle__insert_prefix_3_p_0((MR_String) "{}", demangle__STATE_VARIABLE_Str_63_63, demangle__STATE_VARIABLE_Str_5);
                                                                }
                                                                demangle__succeeded = MR_TRUE;
                                                              }
                                                            else
                                                              {
                                                                MR_String demangle__STATE_VARIABLE_Str_67_67;

                                                                {
                                                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cons", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_67_67);
                                                                }
                                                                if (demangle__succeeded)
                                                                  {
                                                                    {
                                                                      demangle__insert_prefix_3_p_0((MR_String) "[|]", demangle__STATE_VARIABLE_Str_67_67, demangle__STATE_VARIABLE_Str_5);
                                                                    }
                                                                    demangle__succeeded = MR_TRUE;
                                                                  }
                                                                else
                                                                  {
                                                                    MR_String demangle__STATE_VARIABLE_Str_71_71;

                                                                    {
                                                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_nil", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_71_71);
                                                                    }
                                                                    if (demangle__succeeded)
                                                                      {
                                                                        {
                                                                          demangle__insert_prefix_3_p_0((MR_String) "[]", demangle__STATE_VARIABLE_Str_71_71, demangle__STATE_VARIABLE_Str_5);
                                                                        }
                                                                        demangle__succeeded = MR_TRUE;
                                                                      }
                                                                    else
                                                                      {
                                                                        MR_String demangle__STATE_VARIABLE_Str_75_75;

                                                                        {
                                                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_75_75);
                                                                        }
                                                                        if (demangle__succeeded)
                                                                          {
                                                                            demangle__succeeded = demangle__fix_mangled_ascii_chars_2_p_0(demangle__STATE_VARIABLE_Str_75_75, demangle__STATE_VARIABLE_Str_5);
                                                                          }
                                                                        else
                                                                          {
                                                                            *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_0_4;
                                                                            demangle__succeeded = MR_TRUE;
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
    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
  MR_Integer demangle__Num_5,
  MR_String * demangle__FormattedArgs_6,
  MR_String demangle__STATE_VARIABLE_Str_0_13,
  MR_String * demangle__STATE_VARIABLE_Str_14)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__TypeName_8;
    MR_Integer demangle__TypeArity_9;
    MR_String demangle__Sep_10;
    MR_String demangle__Rest_12;
    MR_Word demangle__Var_15;
    MR_String demangle__STATE_VARIABLE_Str_17_17;
    MR_String demangle__Var_20;
    MR_String demangle__STATE_VARIABLE_Str_21_21;
    MR_String demangle__STATE_VARIABLE_Str_22_22;
    MR_String demangle__Var_23;
    MR_String demangle__STATE_VARIABLE_Str_24_24;
    MR_String demangle__Var_38;
    MR_String demangle__Var_39;
    MR_Word demangle__Var_40;
    MR_Word demangle__Var_41;
    MR_Word demangle__Var_42;
    MR_Word demangle__Var_43;
    MR_Word demangle__Var_44;
    MR_Word demangle__Var_45;
    MR_String demangle__Var_46;
    MR_String demangle__Var_47;
    MR_String demangle__Var_48;
    MR_Integer demangle__Digit_53;
    MR_String demangle__STATE_VARIABLE_Str_9_54;
    MR_Char demangle__Char_59;
    MR_Integer demangle__Var_25;

    {
      demangle__remove_maybe_module_prefix_4_p_0(&demangle__Var_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]), demangle__STATE_VARIABLE_Str_0_13, &demangle__STATE_VARIABLE_Str_17_17);
    }
    demangle__succeeded = ((MR_tag((MR_Word) demangle__Var_15)) == (MR_mktag((MR_Integer) 1)));
    if (demangle__succeeded)
      {
        demangle__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Var_15, (MR_Integer) 0)));
        demangle__succeeded = (strcmp(demangle__TypeName_8, (MR_String) "") == 0);
        demangle__succeeded = !(demangle__succeeded);
        if (demangle__succeeded)
          {
            demangle__Var_20 = (MR_String) "arity";
            {
              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_20, demangle__STATE_VARIABLE_Str_17_17, &demangle__STATE_VARIABLE_Str_21_21);
            }
            if (demangle__succeeded)
              {
                {
                  demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_21_21, &demangle__Char_59, &demangle__STATE_VARIABLE_Str_9_54);
                }
                if (demangle__succeeded)
                  {
                    if ((((MR_Unsigned) (demangle__Char_59 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
                      {
                        demangle__Digit_53 = ((&demangle_vector_common_3[30 + (demangle__Char_59 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
                        demangle__succeeded = MR_TRUE;
                      }
                    else
                      demangle__succeeded = MR_FALSE;
                    if (demangle__succeeded)
                      {
                        {
                          demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_53, &demangle__TypeArity_9, demangle__STATE_VARIABLE_Str_9_54, &demangle__STATE_VARIABLE_Str_22_22);
                        }
                        if (demangle__succeeded)
                          {
                            demangle__Var_23 = (MR_String) "__";
                            {
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_23, demangle__STATE_VARIABLE_Str_22_22, &demangle__STATE_VARIABLE_Str_24_24);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__Var_25 = (MR_Integer) 1;
                                demangle__succeeded = (demangle__Num_5 > demangle__Var_25);
                                if (demangle__succeeded)
                                  {
                                    MR_Integer demangle__Num1_11;

                                    demangle__Sep_10 = (MR_String) ", ";
                                    demangle__Num1_11 = (demangle__Num_5 - (MR_Integer) 1);
                                    {
                                      demangle__succeeded = demangle__demangle_class_args_4_p_0(demangle__Num1_11, &demangle__Rest_12, demangle__STATE_VARIABLE_Str_24_24, demangle__STATE_VARIABLE_Str_14);
                                    }
                                  }
                                else
                                  {
                                    demangle__Sep_10 = (MR_String) "";
                                    demangle__Rest_12 = (MR_String) "";
                                    *demangle__STATE_VARIABLE_Str_14 = demangle__STATE_VARIABLE_Str_24_24;
                                    demangle__succeeded = MR_TRUE;
                                  }
                                if (demangle__succeeded)
                                  {
                                    {
                                      demangle__Var_38 = mercury__string__f_43_43_2_f_0(demangle__Sep_10, demangle__Rest_12);
                                    }
                                    demangle__Var_40 = (MR_Integer) 0;
                                    demangle__Var_41 = (MR_Integer) 0;
                                    demangle__Var_42 = (MR_Integer) 0;
                                    demangle__Var_43 = (MR_Integer) 0;
                                    demangle__Var_44 = (MR_Integer) 0;
                                    demangle__Var_45 = (MR_Word) &demangle_scalar_common_2[1];
                                    {
                                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_45, demangle__TypeArity_9, &demangle__Var_39);
                                    }
                                    {
                                      demangle__Var_46 = mercury__string__f_43_43_2_f_0(demangle__Var_39, demangle__Var_38);
                                    }
                                    demangle__Var_47 = (MR_String) "/";
                                    {
                                      demangle__Var_48 = mercury__string__f_43_43_2_f_0(demangle__Var_47, demangle__Var_46);
                                    }
                                    {
                                      *demangle__FormattedArgs_6 = mercury__string__f_43_43_2_f_0(demangle__TypeName_8, demangle__Var_48);
                                    }
                                    demangle__succeeded = MR_TRUE;
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_8,
  MR_String * demangle__STATE_VARIABLE_Str_9)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__ClassName_4;
    MR_Integer demangle__ClassArity_5;
    MR_String demangle__Args_6;
    MR_String demangle__STATE_VARIABLE_Str_11_11;
    MR_String demangle__STATE_VARIABLE_Str_13_13;
    MR_Word demangle__Var_14;
    MR_Word demangle__Var_15;
    MR_String demangle__STATE_VARIABLE_Str_16_16;
    MR_String demangle__Var_17;
    MR_Word demangle__Var_18;
    MR_String demangle__Var_19;
    MR_String demangle__STATE_VARIABLE_Str_20_20;
    MR_String demangle__STATE_VARIABLE_Str_21_21;
    MR_String demangle__Var_22;
    MR_String demangle__STATE_VARIABLE_Str_23_23;
    MR_String demangle__STATE_VARIABLE_Str_24_24;
    MR_String demangle__Var_32;
    MR_String demangle__Var_33;
    MR_String demangle__Var_34;
    MR_String demangle__Var_35;
    MR_String demangle__Var_36;
    MR_String demangle__Var_37;
    MR_Integer demangle__Digit_48;
    MR_String demangle__STATE_VARIABLE_Str_9_49;
    MR_Char demangle__Char_54;
    MR_String demangle__STATE_VARIABLE_Str_8_42;
    MR_String demangle___Str_7;

    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data___", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_8_42);
    }
    if (demangle__succeeded)
      demangle__STATE_VARIABLE_Str_11_11 = demangle__STATE_VARIABLE_Str_8_42;
    else
      demangle__STATE_VARIABLE_Str_11_11 = demangle__STATE_VARIABLE_Str_0_8;
    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "base_typeclass_info_", demangle__STATE_VARIABLE_Str_11_11, &demangle__STATE_VARIABLE_Str_13_13);
    }
    if (demangle__succeeded)
      {
        demangle__Var_17 = (MR_String) "arity";
        demangle__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        demangle__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]);
        {
          demangle__remove_maybe_module_prefix_4_p_0(&demangle__Var_14, demangle__Var_15, demangle__STATE_VARIABLE_Str_13_13, &demangle__STATE_VARIABLE_Str_16_16);
        }
        demangle__succeeded = ((MR_tag((MR_Word) demangle__Var_14)) == (MR_mktag((MR_Integer) 1)));
        if (demangle__succeeded)
          {
            demangle__ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Var_14, (MR_Integer) 0)));
            demangle__succeeded = (strcmp(demangle__ClassName_4, (MR_String) "") == 0);
            demangle__succeeded = !(demangle__succeeded);
            if (demangle__succeeded)
              {
                demangle__Var_19 = (MR_String) "arity";
                {
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_19, demangle__STATE_VARIABLE_Str_16_16, &demangle__STATE_VARIABLE_Str_20_20);
                }
                if (demangle__succeeded)
                  {
                    {
                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_20_20, &demangle__Char_54, &demangle__STATE_VARIABLE_Str_9_49);
                    }
                    if (demangle__succeeded)
                      {
                        if ((((MR_Unsigned) (demangle__Char_54 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
                          {
                            demangle__Digit_48 = ((&demangle_vector_common_3[20 + (demangle__Char_54 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
                            demangle__succeeded = MR_TRUE;
                          }
                        else
                          demangle__succeeded = MR_FALSE;
                        if (demangle__succeeded)
                          {
                            {
                              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_48, &demangle__ClassArity_5, demangle__STATE_VARIABLE_Str_9_49, &demangle__STATE_VARIABLE_Str_21_21);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__Var_22 = (MR_String) "__";
                                {
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_22, demangle__STATE_VARIABLE_Str_21_21, &demangle__STATE_VARIABLE_Str_23_23);
                                }
                                if (demangle__succeeded)
                                  {
                                    {
                                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_23_23, &demangle__STATE_VARIABLE_Str_24_24);
                                    }
                                    if (demangle__succeeded)
                                      {
                                        {
                                          demangle__succeeded = demangle__demangle_class_args_4_p_0(demangle__ClassArity_5, &demangle__Args_6, demangle__STATE_VARIABLE_Str_24_24, &demangle___Str_7);
                                        }
                                        if (demangle__succeeded)
                                          {
                                            demangle__Var_32 = (MR_String) ")>";
                                            {
                                              demangle__Var_33 = mercury__string__f_43_43_2_f_0(demangle__Args_6, demangle__Var_32);
                                            }
                                            demangle__Var_34 = (MR_String) "(";
                                            {
                                              demangle__Var_35 = mercury__string__f_43_43_2_f_0(demangle__Var_34, demangle__Var_33);
                                            }
                                            {
                                              demangle__Var_36 = mercury__string__f_43_43_2_f_0(demangle__ClassName_4, demangle__Var_35);
                                            }
                                            demangle__Var_37 = (MR_String) "<instance declaration for ";
                                            {
                                              *demangle__STATE_VARIABLE_Str_9 = mercury__string__f_43_43_2_f_0(demangle__Var_37, demangle__Var_36);
                                            }
                                            demangle__succeeded = MR_TRUE;
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
    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__format_data_5_p_0(
  MR_Word demangle__Category_6,
  MR_Word demangle__MaybeModule_7,
  MR_String demangle__Name_8,
  MR_Integer demangle__Arity_9,
  MR_String * demangle__Result_10)
{
  {
    MR_bool demangle__succeeded;

    switch (demangle__Category_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String demangle__Module_66;
          MR_String demangle__Var_156;
          MR_String demangle__Var_157;
          MR_String demangle__Var_158;
          MR_String demangle__Var_159;
          MR_String demangle__Var_160;
          MR_Word demangle__Var_161;
          MR_Word demangle__Var_162;
          MR_Word demangle__Var_163;
          MR_Word demangle__Var_164;
          MR_Word demangle__Var_165;
          MR_Word demangle__Var_166;
          MR_String demangle__Var_167;
          MR_String demangle__Var_168;

          demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_7)) == (MR_mktag((MR_Integer) 1)));
          if (demangle__succeeded)
            {
              demangle__Module_66 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
              demangle__Var_156 = (MR_String) ">";
              {
                demangle__Var_157 = mercury__string__f_43_43_2_f_0(demangle__Module_66, demangle__Var_156);
              }
              demangle__Var_158 = (MR_String) " for module ";
              {
                demangle__Var_159 = mercury__string__f_43_43_2_f_0(demangle__Var_158, demangle__Var_157);
              }
              demangle__Var_161 = (MR_Integer) 0;
              demangle__Var_162 = (MR_Integer) 0;
              demangle__Var_163 = (MR_Integer) 0;
              demangle__Var_164 = (MR_Integer) 0;
              demangle__Var_165 = (MR_Integer) 0;
              demangle__Var_166 = (MR_Word) &demangle_scalar_common_2[1];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_166, demangle__Arity_9, &demangle__Var_160);
              }
              {
                demangle__Var_167 = mercury__string__f_43_43_2_f_0(demangle__Var_160, demangle__Var_159);
              }
              demangle__Var_168 = (MR_String) "<shared constant number ";
              {
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0(demangle__Var_168, demangle__Var_167);
              }
              demangle__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 3:
        {
          if ((demangle__MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String demangle__Var_144;
              MR_String demangle__Var_151;
              MR_String demangle__Var_153;
              MR_String demangle__Var_154;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_9, &demangle__Var_144);
              }
              {
                demangle__Var_151 = mercury__string__f_43_43_2_f_0(demangle__Var_144, (MR_String) "\'>");
              }
              {
                demangle__Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_151);
              }
              {
                demangle__Var_154 = mercury__string__f_43_43_2_f_0(demangle__Name_8, demangle__Var_153);
              }
              {
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", demangle__Var_154);
              }
            }
          else
            {
              MR_String demangle__Module_63 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
              MR_String demangle__Var_128;
              MR_String demangle__Var_135;
              MR_String demangle__Var_137;
              MR_String demangle__Var_138;
              MR_String demangle__Var_140;
              MR_String demangle__Var_141;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_9, &demangle__Var_128);
              }
              {
                demangle__Var_135 = mercury__string__f_43_43_2_f_0(demangle__Var_128, (MR_String) "\'>");
              }
              {
                demangle__Var_137 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_135);
              }
              {
                demangle__Var_138 = mercury__string__f_43_43_2_f_0(demangle__Name_8, demangle__Var_137);
              }
              {
                demangle__Var_140 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__Var_138);
              }
              {
                demangle__Var_141 = mercury__string__f_43_43_2_f_0(demangle__Module_63, demangle__Var_140);
              }
              {
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", demangle__Var_141);
              }
            }
          demangle__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          if ((demangle__MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String demangle__Var_115;
              MR_String demangle__Var_122;
              MR_String demangle__Var_124;
              MR_String demangle__Var_125;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_9, &demangle__Var_115);
              }
              {
                demangle__Var_122 = mercury__string__f_43_43_2_f_0(demangle__Var_115, (MR_String) "\'>");
              }
              {
                demangle__Var_124 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_122);
              }
              {
                demangle__Var_125 = mercury__string__f_43_43_2_f_0(demangle__Name_8, demangle__Var_124);
              }
              {
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", demangle__Var_125);
              }
            }
          else
            {
              MR_String demangle__Module_11 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
              MR_String demangle__Var_99;
              MR_String demangle__Var_106;
              MR_String demangle__Var_108;
              MR_String demangle__Var_109;
              MR_String demangle__Var_111;
              MR_String demangle__Var_112;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_9, &demangle__Var_99);
              }
              {
                demangle__Var_106 = mercury__string__f_43_43_2_f_0(demangle__Var_99, (MR_String) "\'>");
              }
              {
                demangle__Var_108 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_106);
              }
              {
                demangle__Var_109 = mercury__string__f_43_43_2_f_0(demangle__Name_8, demangle__Var_108);
              }
              {
                demangle__Var_111 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__Var_109);
              }
              {
                demangle__Var_112 = mercury__string__f_43_43_2_f_0(demangle__Module_11, demangle__Var_111);
              }
              {
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", demangle__Var_112);
              }
            }
          demangle__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          if ((demangle__MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_String demangle__Var_86;
              MR_String demangle__Var_93;
              MR_String demangle__Var_95;
              MR_String demangle__Var_96;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_9, &demangle__Var_86);
              }
              {
                demangle__Var_93 = mercury__string__f_43_43_2_f_0(demangle__Var_86, (MR_String) "\'>");
              }
              {
                demangle__Var_95 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_93);
              }
              {
                demangle__Var_96 = mercury__string__f_43_43_2_f_0(demangle__Name_8, demangle__Var_95);
              }
              {
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", demangle__Var_96);
              }
            }
          else
            {
              MR_String demangle__Module_60 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
              MR_String demangle__Var_70;
              MR_String demangle__Var_77;
              MR_String demangle__Var_79;
              MR_String demangle__Var_80;
              MR_String demangle__Var_82;
              MR_String demangle__Var_83;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_9, &demangle__Var_70);
              }
              {
                demangle__Var_77 = mercury__string__f_43_43_2_f_0(demangle__Var_70, (MR_String) "\'>");
              }
              {
                demangle__Var_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_77);
              }
              {
                demangle__Var_80 = mercury__string__f_43_43_2_f_0(demangle__Name_8, demangle__Var_79);
              }
              {
                demangle__Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__Var_80);
              }
              {
                demangle__Var_83 = mercury__string__f_43_43_2_f_0(demangle__Module_60, demangle__Var_82);
              }
              {
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", demangle__Var_83);
              }
            }
          demangle__succeeded = MR_TRUE;
        }
        break;
    }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle__format_proc_10_p_0(
  MR_Word demangle__Category_11,
  MR_Word demangle__MaybeModule_12,
  MR_String demangle__PredOrFunc_13,
  MR_String demangle__PredName_14,
  MR_Integer demangle__Arity_15,
  MR_Integer demangle__ModeNum_16,
  MR_Word demangle__HigherOrder_17,
  MR_Word demangle__UnusedArgs_18,
  MR_Word demangle__MaybeInternalLabelNum_19,
  MR_String * demangle__DemangledName_20)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__QualifiedName_21;
    MR_String demangle__MainStr_22;
    MR_String demangle__HOStr_29;
    MR_String demangle__UAStr_32;
    MR_String demangle__LabelStr_34;
    MR_String demangle__Var_119;
    MR_String demangle__Var_120;
    MR_String demangle__Var_121;
    MR_String demangle__Var_122;

    {
      demangle__format_maybe_module_3_p_0(demangle__MaybeModule_12, demangle__PredName_14, &demangle__QualifiedName_21);
    }
    switch (MR_tag((MR_Word) demangle__Category_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(demangle__Category_11)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String demangle__Var_249;
              MR_String demangle__Var_256;
              MR_String demangle__Var_258;
              MR_String demangle__Var_259;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_15, &demangle__Var_249);
              }
              {
                demangle__Var_256 = mercury__string__f_43_43_2_f_0(demangle__Var_249, (MR_String) "\'");
              }
              {
                demangle__Var_258 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_256);
              }
              {
                demangle__Var_259 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_258);
              }
              {
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "index/2 predicate for type \140", demangle__Var_259);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String demangle__Var_124;
              MR_Word demangle__Var_130 = (MR_Word) &demangle_scalar_common_2[1];
              MR_String demangle__Var_132;
              MR_String demangle__Var_133;
              MR_String demangle__Var_140;
              MR_String demangle__Var_142;
              MR_String demangle__Var_143;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_130, demangle__ModeNum_16, &demangle__Var_124);
              }
              {
                demangle__Var_132 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__Var_124);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_130, demangle__Arity_15, &demangle__Var_133);
              }
              {
                demangle__Var_140 = mercury__string__f_43_43_2_f_0(demangle__Var_133, demangle__Var_132);
              }
              {
                demangle__Var_142 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_140);
              }
              {
                demangle__Var_143 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_142);
              }
              {
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "unification predicate for type \140", demangle__Var_143);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String demangle__Var_262;
              MR_String demangle__Var_269;
              MR_String demangle__Var_271;
              MR_String demangle__Var_272;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Arity_15, &demangle__Var_262);
              }
              {
                demangle__Var_269 = mercury__string__f_43_43_2_f_0(demangle__Var_262, (MR_String) "\'");
              }
              {
                demangle__Var_271 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_269);
              }
              {
                demangle__Var_272 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_271);
              }
              {
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "compare/3 predicate for type \140", demangle__Var_272);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String demangle__Var_145;
              MR_Word demangle__Var_151 = (MR_Word) &demangle_scalar_common_2[1];
              MR_String demangle__Var_153;
              MR_String demangle__Var_154;
              MR_String demangle__Var_161;
              MR_String demangle__Var_163;
              MR_String demangle__Var_164;
              MR_String demangle__Var_166;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_151, demangle__ModeNum_16, &demangle__Var_145);
              }
              {
                demangle__Var_153 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__Var_145);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_151, demangle__Arity_15, &demangle__Var_154);
              }
              {
                demangle__Var_161 = mercury__string__f_43_43_2_f_0(demangle__Var_154, demangle__Var_153);
              }
              {
                demangle__Var_163 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_161);
              }
              {
                demangle__Var_164 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_163);
              }
              {
                demangle__Var_166 = mercury__string__f_43_43_2_f_0((MR_String) " \140", demangle__Var_164);
              }
              {
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0(demangle__PredOrFunc_13, demangle__Var_166);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word demangle__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 0)));
          MR_Integer demangle__Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 1)));
          MR_Integer demangle__Seq_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 2)));
          MR_String demangle__IntroPredOrFunc_26 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 3)));

          switch (MR_tag((MR_Word) demangle__Type_23)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(demangle__Type_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String demangle__Var_194;
                    MR_Word demangle__Var_200 = (MR_Word) &demangle_scalar_common_2[1];
                    MR_String demangle__Var_202;
                    MR_String demangle__Var_203;
                    MR_String demangle__Var_205;
                    MR_String demangle__Var_206;
                    MR_String demangle__Var_213;
                    MR_String demangle__Var_215;

                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_200, demangle__Line_24, &demangle__Var_194);
                    }
                    {
                      demangle__Var_202 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__Var_194);
                    }
                    {
                      demangle__Var_203 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_202);
                    }
                    {
                      demangle__Var_205 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", demangle__Var_203);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_200, demangle__Seq_25, &demangle__Var_206);
                    }
                    {
                      demangle__Var_213 = mercury__string__f_43_43_2_f_0(demangle__Var_206, demangle__Var_205);
                    }
                    {
                      demangle__Var_215 = mercury__string__f_43_43_2_f_0((MR_String) " goal (#", demangle__Var_213);
                    }
                    {
                      demangle__MainStr_22 = mercury__string__f_43_43_2_f_0(demangle__IntroPredOrFunc_26, demangle__Var_215);
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String demangle__Var_216;
                    MR_Word demangle__Var_222 = (MR_Word) &demangle_scalar_common_2[1];
                    MR_String demangle__Var_224;
                    MR_String demangle__Var_225;
                    MR_String demangle__Var_227;
                    MR_String demangle__Var_228;
                    MR_String demangle__Var_235;

                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_222, demangle__Line_24, &demangle__Var_216);
                    }
                    {
                      demangle__Var_224 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__Var_216);
                    }
                    {
                      demangle__Var_225 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_224);
                    }
                    {
                      demangle__Var_227 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", demangle__Var_225);
                    }
                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_222, demangle__Seq_25, &demangle__Var_228);
                    }
                    {
                      demangle__Var_235 = mercury__string__f_43_43_2_f_0(demangle__Var_228, demangle__Var_227);
                    }
                    {
                      demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "deforestation procedure (#", demangle__Var_235);
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_String demangle__Var_237;
                    MR_String demangle__Var_245;
                    MR_String demangle__Var_246;

                    {
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Line_24, &demangle__Var_237);
                    }
                    {
                      demangle__Var_245 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__Var_237);
                    }
                    {
                      demangle__Var_246 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_245);
                    }
                    {
                      demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "accumulator procedure from \140", demangle__Var_246);
                    }
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String demangle__TypeSpec_27 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Type_23, (MR_Integer) 0)));
                MR_String demangle__Var_168;
                MR_String demangle__Var_170;
                MR_String demangle__Var_171;
                MR_Word demangle__Var_177;
                MR_String demangle__Var_178;
                MR_String demangle__Var_180;
                MR_String demangle__Var_181;
                MR_String demangle__Var_188;
                MR_String demangle__Var_190;
                MR_String demangle__Var_191;
                MR_String demangle__Var_193;

                {
                  demangle__Var_168 = mercury__string__f_43_43_2_f_0(demangle__TypeSpec_27, (MR_String) ")");
                }
                {
                  demangle__Var_170 = mercury__string__f_43_43_2_f_0((MR_String) " (type specialized ", demangle__Var_168);
                }
                demangle__Var_177 = (MR_Word) &demangle_scalar_common_2[1];
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_177, demangle__ModeNum_16, &demangle__Var_171);
                }
                {
                  demangle__Var_178 = mercury__string__f_43_43_2_f_0(demangle__Var_171, demangle__Var_170);
                }
                {
                  demangle__Var_180 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__Var_178);
                }
                {
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__Var_177, demangle__Arity_15, &demangle__Var_181);
                }
                {
                  demangle__Var_188 = mercury__string__f_43_43_2_f_0(demangle__Var_181, demangle__Var_180);
                }
                {
                  demangle__Var_190 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__Var_188);
                }
                {
                  demangle__Var_191 = mercury__string__f_43_43_2_f_0(demangle__QualifiedName_21, demangle__Var_190);
                }
                {
                  demangle__Var_193 = mercury__string__f_43_43_2_f_0((MR_String) " \140", demangle__Var_191);
                }
                {
                  demangle__MainStr_22 = mercury__string__f_43_43_2_f_0(demangle__PredOrFunc_13, demangle__Var_193);
                }
              }
              break;
          }
        }
        break;
    }
    if ((demangle__HigherOrder_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      demangle__HOStr_29 = (MR_String) "";
    else
      {
        MR_Integer demangle__HO_Num_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HigherOrder_17, (MR_Integer) 0)));
        MR_String demangle__Var_275;
        MR_String demangle__Var_282;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__HO_Num_28, &demangle__Var_275);
        }
        {
          demangle__Var_282 = mercury__string__f_43_43_2_f_0(demangle__Var_275, (MR_String) "])");
        }
        {
          demangle__HOStr_29 = mercury__string__f_43_43_2_f_0((MR_String) " (specialized [#", demangle__Var_282);
        }
      }
    if ((demangle__UnusedArgs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      demangle__UAStr_32 = (MR_String) "";
    else
      {
        MR_Integer demangle__UA_Num_30;
        MR_Word demangle__Extra_31;
        MR_Word demangle__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_18, (MR_Integer) 0)));

        demangle__UA_Num_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), demangle__Var_105, (MR_Integer) 0)));
        demangle__Extra_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), demangle__Var_105, (MR_Integer) 1)));
        switch (demangle__Extra_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String demangle__Var_295;
              MR_String demangle__Var_302;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__UA_Num_30, &demangle__Var_295);
              }
              {
                demangle__Var_302 = mercury__string__f_43_43_2_f_0(demangle__Var_295, (MR_String) "])");
              }
              {
                demangle__UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus unused args [#", demangle__Var_302);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String demangle__Var_285;
              MR_String demangle__Var_292;

              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__UA_Num_30, &demangle__Var_285);
              }
              {
                demangle__Var_292 = mercury__string__f_43_43_2_f_0(demangle__Var_285, (MR_String) "])");
              }
              {
                demangle__UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus extra unused args [#", demangle__Var_292);
              }
            }
            break;
        }
      }
    if ((demangle__MaybeInternalLabelNum_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      demangle__LabelStr_34 = (MR_String) "";
    else
      {
        MR_Integer demangle__Internal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum_19, (MR_Integer) 0)));
        MR_String demangle__Var_304;

        {
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Internal_33, &demangle__Var_304);
        }
        {
          demangle__LabelStr_34 = mercury__string__f_43_43_2_f_0((MR_String) " label ", demangle__Var_304);
        }
      }
    {
      demangle__Var_122 = mercury__string__f_43_43_2_f_0(demangle__LabelStr_34, (MR_String) ">");
    }
    {
      demangle__Var_121 = mercury__string__f_43_43_2_f_0(demangle__UAStr_32, demangle__Var_122);
    }
    {
      demangle__Var_120 = mercury__string__f_43_43_2_f_0(demangle__HOStr_29, demangle__Var_121);
    }
    {
      demangle__Var_119 = mercury__string__f_43_43_2_f_0(demangle__MainStr_22, demangle__Var_120);
    }
    {
      *demangle__DemangledName_20 = mercury__string__f_43_43_2_f_0((MR_String) "<", demangle__Var_119);
    }
  }
}

static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
  MR_String * demangle__PredName_6,
  MR_Word demangle__Category0_7,
  MR_Word * demangle__Category_8,
  MR_String demangle__STATE_VARIABLE_Str_0_21,
  MR_String * demangle__STATE_VARIABLE_Str_22)
{
  {
    MR_bool demangle__succeeded;
    MR_Word demangle__IntroducedPredType0_11;
    MR_String demangle__STATE_VARIABLE_Str_30_30;
    MR_String demangle__STATE_VARIABLE_Str_24_24;

    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "IntroducedFrom__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_24_24);
    }
    if (demangle__succeeded)
      {
        demangle__STATE_VARIABLE_Str_30_30 = demangle__STATE_VARIABLE_Str_24_24;
        demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        demangle__succeeded = MR_TRUE;
      }
    else
      {
        MR_String demangle__STATE_VARIABLE_Str_26_26;

        {
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "DeforestationIn__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_26_26);
        }
        if (demangle__succeeded)
          {
            demangle__STATE_VARIABLE_Str_30_30 = demangle__STATE_VARIABLE_Str_26_26;
            demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            demangle__succeeded = MR_TRUE;
          }
        else
          {
            MR_String demangle__STATE_VARIABLE_Str_28_28;

            {
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "AccFrom__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_28_28);
            }
            if (demangle__succeeded)
              {
                demangle__STATE_VARIABLE_Str_30_30 = demangle__STATE_VARIABLE_Str_28_28;
                demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                demangle__succeeded = MR_TRUE;
              }
            else
              {
                MR_String demangle__Var_31;

                {
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeSpecOf__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_30_30);
                }
                if (demangle__succeeded)
                  {
                    demangle__Var_31 = (MR_String) "";
                    demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_2[0]);
                    demangle__succeeded = MR_TRUE;
                  }
              }
          }
      }
    if (demangle__succeeded)
      {
        MR_String demangle__LambdaPredOrFunc_12;
        MR_String demangle__STATE_VARIABLE_Str_38_38;
        MR_String demangle__STATE_VARIABLE_Str_33_33;
        MR_String demangle__PredName1_15;
        MR_Word demangle__IntroducedPredType_18;
        MR_Integer demangle__Seq_19;
        MR_Integer demangle__Line_20;
        MR_String demangle__STATE_VARIABLE_Str_40_40;
        MR_Word demangle__MPredName_14;
        MR_String demangle__STATE_VARIABLE_Str_39_39;
        MR_Integer demangle__Index_49;
        MR_String demangle__Var_53;
        MR_String demangle__Var_16;

        {
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "pred__", demangle__STATE_VARIABLE_Str_30_30, &demangle__STATE_VARIABLE_Str_33_33);
        }
        if (demangle__succeeded)
          {
            demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_33_33;
            demangle__LambdaPredOrFunc_12 = (MR_String) "pred";
            demangle__succeeded = MR_TRUE;
          }
        else
          {
            MR_String demangle__STATE_VARIABLE_Str_35_35;

            {
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "func__", demangle__STATE_VARIABLE_Str_30_30, &demangle__STATE_VARIABLE_Str_35_35);
            }
            if (demangle__succeeded)
              {
                demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_35_35;
                demangle__LambdaPredOrFunc_12 = (MR_String) "func";
                demangle__succeeded = MR_TRUE;
              }
            else
              {
                MR_String demangle__Var_36;
                MR_String demangle__Var_13;

                demangle__succeeded = ((MR_tag((MR_Word) demangle__IntroducedPredType0_11)) == (MR_mktag((MR_Integer) 1)));
                if (demangle__succeeded)
                  {
                    demangle__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__IntroducedPredType0_11, (MR_Integer) 0)));
                    demangle__Var_36 = (MR_String) "pred_or_func__";
                    {
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_36, demangle__STATE_VARIABLE_Str_30_30, &demangle__STATE_VARIABLE_Str_38_38);
                    }
                    if (demangle__succeeded)
                      {
                        demangle__LambdaPredOrFunc_12 = (MR_String) "";
                        demangle__succeeded = MR_TRUE;
                      }
                  }
              }
          }
        if (demangle__succeeded)
          {
            demangle__Var_53 = (MR_String) "__";
            {
              demangle__succeeded = mercury__string__sub_string_search_3_p_0(demangle__STATE_VARIABLE_Str_38_38, demangle__Var_53, &demangle__Index_49);
            }
            if (demangle__succeeded)
              {
                MR_String demangle__PredName_50;
                MR_Integer demangle__Len_51;
                MR_Integer demangle__Index2_52;

                {
                  mercury__string__left_3_p_0(demangle__STATE_VARIABLE_Str_38_38, demangle__Index_49, &demangle__PredName_50);
                }
                {
                  mercury__string__length_2_p_0(demangle__STATE_VARIABLE_Str_38_38, &demangle__Len_51);
                }
                demangle__Index2_52 = (demangle__Index_49 + (MR_Integer) 2);
                {
                  mercury__string__between_4_p_0(demangle__STATE_VARIABLE_Str_38_38, demangle__Index2_52, demangle__Len_51, &demangle__STATE_VARIABLE_Str_39_39);
                }
                {
                  demangle__MPredName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), demangle__MPredName_14, 0) = ((MR_Box) (demangle__PredName_50));
                }
              }
            else
              {
                demangle__STATE_VARIABLE_Str_39_39 = demangle__STATE_VARIABLE_Str_38_38;
                demangle__MPredName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
            demangle__succeeded = ((MR_tag((MR_Word) demangle__MPredName_14)) == (MR_mktag((MR_Integer) 1)));
            if (demangle__succeeded)
              {
                demangle__PredName1_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MPredName_14, (MR_Integer) 0)));
                demangle__succeeded = ((MR_tag((MR_Word) demangle__IntroducedPredType0_11)) == (MR_mktag((MR_Integer) 1)));
                if (demangle__succeeded)
                  {
                    demangle__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__IntroducedPredType0_11, (MR_Integer) 0)));
                    {
                      MR_String demangle__TypeSpec_17;
                      MR_Integer demangle__Length_58;
                      MR_Integer demangle__NumBrackets_59;
                      MR_Integer demangle__Index_60;
                      MR_Integer demangle__Var_62;
                      MR_Char demangle__Var_63;
                      MR_Integer demangle__Var_64;
                      MR_Integer demangle__Var_65;
                      MR_Integer demangle__Var_66;
                      MR_Char demangle__Var_67;

                      {
                        mercury__string__length_2_p_0(demangle__STATE_VARIABLE_Str_39_39, &demangle__Length_58);
                      }
                      demangle__succeeded = (demangle__Length_58 > (MR_Integer) 2);
                      if (demangle__succeeded)
                        {
                          demangle__Var_62 = (MR_Integer) 0;
                          demangle__Var_63 = (MR_Char) 91;
                          {
                            mercury__string__unsafe_index_3_p_0(demangle__STATE_VARIABLE_Str_39_39, demangle__Var_62, &demangle__Var_67);
                          }
                          demangle__succeeded = (demangle__Var_63 == demangle__Var_67);
                          if (demangle__succeeded)
                            {
                              demangle__NumBrackets_59 = (MR_Integer) 0;
                              demangle__Var_64 = (MR_Integer) 1;
                              {
                                demangle__succeeded = demangle__find_matching_close_bracket_5_p_0(demangle__NumBrackets_59, demangle__Length_58, demangle__STATE_VARIABLE_Str_39_39, demangle__Var_64, &demangle__Index_60);
                              }
                              if (demangle__succeeded)
                                {
                                  demangle__Var_66 = (MR_Integer) 1;
                                  demangle__Var_65 = (demangle__Index_60 + demangle__Var_66);
                                  {
                                    mercury__string__split_4_p_0(demangle__STATE_VARIABLE_Str_39_39, demangle__Var_65, &demangle__TypeSpec_17, &demangle__STATE_VARIABLE_Str_40_40);
                                  }
                                  demangle__Seq_19 = (MR_Integer) 0;
                                  demangle__Line_20 = (MR_Integer) 0;
                                  {
                                    demangle__IntroducedPredType_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                    MR_hl_field(MR_mktag(1), demangle__IntroducedPredType_18, 0) = ((MR_Box) (demangle__TypeSpec_17));
                                  }
                                  demangle__succeeded = MR_TRUE;
                                }
                            }
                        }
                    }
                  }
                else
                  {
                    MR_String demangle__STATE_VARIABLE_Str_41_41;
                    MR_String demangle__Var_42;
                    MR_String demangle__STATE_VARIABLE_Str_43_43;
                    MR_Integer demangle__Digit_72;
                    MR_String demangle__STATE_VARIABLE_Str_9_73;
                    MR_Char demangle__Char_78;
                    MR_Integer demangle__Digit_83;
                    MR_String demangle__STATE_VARIABLE_Str_9_84;
                    MR_Char demangle__Char_89;

                    demangle__IntroducedPredType_18 = demangle__IntroducedPredType0_11;
                    {
                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_39_39, &demangle__Char_78, &demangle__STATE_VARIABLE_Str_9_73);
                    }
                    if (demangle__succeeded)
                      {
                        if ((((MR_Unsigned) (demangle__Char_78 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
                          {
                            demangle__Digit_72 = ((&demangle_vector_common_3[0 + (demangle__Char_78 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
                            demangle__succeeded = MR_TRUE;
                          }
                        else
                          demangle__succeeded = MR_FALSE;
                        if (demangle__succeeded)
                          {
                            {
                              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_72, &demangle__Line_20, demangle__STATE_VARIABLE_Str_9_73, &demangle__STATE_VARIABLE_Str_41_41);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__Var_42 = (MR_String) "__";
                                {
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_42, demangle__STATE_VARIABLE_Str_41_41, &demangle__STATE_VARIABLE_Str_43_43);
                                }
                                if (demangle__succeeded)
                                  {
                                    {
                                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_43_43, &demangle__Char_89, &demangle__STATE_VARIABLE_Str_9_84);
                                    }
                                    if (demangle__succeeded)
                                      {
                                        if ((((MR_Unsigned) (demangle__Char_89 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
                                          {
                                            demangle__Digit_83 = ((&demangle_vector_common_3[10 + (demangle__Char_89 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
                                            demangle__succeeded = MR_TRUE;
                                          }
                                        else
                                          demangle__succeeded = MR_FALSE;
                                        if (demangle__succeeded)
                                          {
                                            demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_83, &demangle__Seq_19, demangle__STATE_VARIABLE_Str_9_84, &demangle__STATE_VARIABLE_Str_40_40);
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
            if (demangle__succeeded)
              {
                *demangle__STATE_VARIABLE_Str_22 = demangle__STATE_VARIABLE_Str_40_40;
                *demangle__PredName_6 = demangle__PredName1_15;
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *demangle__Category_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__IntroducedPredType_18));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (demangle__Line_20));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (demangle__Seq_19));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (demangle__LambdaPredOrFunc_12));
                }
              }
            else
              {
                *demangle__Category_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                *demangle__PredName_6 = demangle__STATE_VARIABLE_Str_0_21;
                *demangle__STATE_VARIABLE_Str_22 = demangle__STATE_VARIABLE_Str_38_38;
              }
            demangle__succeeded = MR_TRUE;
          }
      }
    else
      {
        *demangle__Category_8 = demangle__Category0_7;
        *demangle__PredName_6 = demangle__STATE_VARIABLE_Str_0_21;
        *demangle__STATE_VARIABLE_Str_22 = demangle__STATE_VARIABLE_Str_0_21;
        demangle__succeeded = MR_TRUE;
      }
    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
  MR_Integer demangle__ModeNum0_5,
  MR_Word * demangle__Category0_6,
  MR_String demangle__STATE_VARIABLE_Str_0_8,
  MR_String * demangle__STATE_VARIABLE_Str_9)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__STATE_VARIABLE_Str_11_11;

    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Unify__", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_11_11);
    }
    if (demangle__succeeded)
      {
        *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_11_11;
        *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
        demangle__succeeded = MR_TRUE;
      }
    else
      {
        MR_String demangle__STATE_VARIABLE_Str_13_13;

        {
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_13_13);
        }
        if (demangle__succeeded)
          {
            demangle__succeeded = (demangle__ModeNum0_5 == (MR_Integer) 0);
            if (demangle__succeeded)
              {
                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_13_13;
                *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                demangle__succeeded = MR_TRUE;
              }
          }
        else
          {
            MR_String demangle__STATE_VARIABLE_Str_15_15;

            {
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_15_15);
            }
            if (demangle__succeeded)
              {
                demangle__succeeded = (demangle__ModeNum0_5 == (MR_Integer) 0);
                if (demangle__succeeded)
                  {
                    *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_15_15;
                    *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    demangle__succeeded = MR_TRUE;
                  }
              }
            else
              {
                *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_0_8;
                demangle__succeeded = MR_TRUE;
              }
          }
      }
    return demangle__succeeded;
  }
}

static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
  MR_Word * demangle__HigherOrder_6,
  MR_Integer demangle__ModeNum0_7,
  MR_Integer * demangle__ModeNum_8,
  MR_String demangle__STATE_VARIABLE_Str_0_11,
  MR_String * demangle__STATE_VARIABLE_Str_12)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__HO_Num_10;
    MR_String demangle__STATE_VARIABLE_Str_15_15;
    MR_String demangle__STATE_VARIABLE_Str_13_13;
    MR_String demangle__Var_14;

    {
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__HO_Num_10, demangle__STATE_VARIABLE_Str_0_11, &demangle__STATE_VARIABLE_Str_13_13);
    }
    if (demangle__succeeded)
      {
        demangle__Var_14 = (MR_String) "__ho";
        {
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_13_13, demangle__Var_14, &demangle__STATE_VARIABLE_Str_15_15);
        }
      }
    if (demangle__succeeded)
      {
        *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_15_15;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *demangle__HigherOrder_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__HO_Num_10));
        }
      }
    else
      {
        *demangle__HigherOrder_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_0_11;
      }
    *demangle__ModeNum_8 = demangle__ModeNum0_7;
  }
}

static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
  MR_Word * demangle__UnusedArgs_6,
  MR_Integer demangle__ModeNum0_7,
  MR_Integer * demangle__ModeNum_8,
  MR_String demangle__STATE_VARIABLE_Str_0_11,
  MR_String * demangle__STATE_VARIABLE_Str_12)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__UA_ModeNum_10;
    MR_String demangle__STATE_VARIABLE_Str_15_15;
    MR_String demangle__STATE_VARIABLE_Str_13_13;
    MR_String demangle__Var_14;

    {
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__UA_ModeNum_10, demangle__STATE_VARIABLE_Str_0_11, &demangle__STATE_VARIABLE_Str_13_13);
    }
    if (demangle__succeeded)
      {
        demangle__Var_14 = (MR_String) "__ua";
        {
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_13_13, demangle__Var_14, &demangle__STATE_VARIABLE_Str_15_15);
        }
      }
    if (demangle__succeeded)
      {
        MR_Word demangle__Var_16;

        *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_15_15;
        {
          demangle__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), demangle__Var_16, 0) = ((MR_Box) (demangle__ModeNum0_7));
          MR_hl_field(MR_mktag(0), demangle__Var_16, 1) = ((MR_Box) ((MR_Integer) 0));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *demangle__UnusedArgs_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__Var_16));
        }
        {
          *demangle__ModeNum_8 = mercury__int__mod_2_f_0(demangle__UA_ModeNum_10, (MR_Integer) 10000);
        }
      }
    else
      {
        MR_String demangle__STATE_VARIABLE_Str_21_21;
        MR_Integer demangle__UA_ModeNum_26;
        MR_String demangle__STATE_VARIABLE_Str_19_19;
        MR_String demangle__Var_20;

        {
          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__UA_ModeNum_26, demangle__STATE_VARIABLE_Str_0_11, &demangle__STATE_VARIABLE_Str_19_19);
        }
        if (demangle__succeeded)
          {
            demangle__Var_20 = (MR_String) "__uab";
            {
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_19_19, demangle__Var_20, &demangle__STATE_VARIABLE_Str_21_21);
            }
          }
        if (demangle__succeeded)
          {
            MR_Word demangle__Var_22;

            *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_21_21;
            {
              demangle__Var_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), demangle__Var_22, 0) = ((MR_Box) (demangle__ModeNum0_7));
              MR_hl_field(MR_mktag(0), demangle__Var_22, 1) = ((MR_Box) ((MR_Integer) 1));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *demangle__UnusedArgs_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__Var_22));
            }
            {
              *demangle__ModeNum_8 = mercury__int__mod_2_f_0(demangle__UA_ModeNum_26, (MR_Integer) 10000);
            }
          }
        else
          {
            *demangle__UnusedArgs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *demangle__ModeNum_8 = demangle__ModeNum0_7;
            *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_0_11;
          }
      }
  }
}

static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_28,
  MR_String * demangle__STATE_VARIABLE_Str_29)
{
  {
    MR_bool demangle__succeeded;
    MR_Integer demangle__Int_4;
    MR_Integer demangle__ModeNum1_6;
    MR_Word demangle__MaybeInternalLabelNum0_7;
    MR_String demangle__PredOrFunc_8;
    MR_Integer demangle__Arity_11;
    MR_Word demangle__MaybeInternalLabelNum_13;
    MR_Word demangle__UnusedArgs_14;
    MR_Word demangle__HigherOrder_16;
    MR_Integer demangle__ModeNum_17;
    MR_Word demangle__MaybeModule0_19;
    MR_Word demangle__Category0_20;
    MR_Word demangle__MaybeModule_21;
    MR_String demangle__PredName_24;
    MR_Word demangle__Category_25;
    MR_String demangle__STATE_VARIABLE_Str_31_31;
    MR_String demangle__STATE_VARIABLE_Str_32_32;
    MR_String demangle__STATE_VARIABLE_Str_36_36;
    MR_String demangle__Var_46;
    MR_Word demangle__Var_51;
    MR_String demangle__STATE_VARIABLE_Str_67_67;
    MR_String demangle__STATE_VARIABLE_Str_68_68;
    MR_String demangle__STATE_VARIABLE_Str_8_75;
    MR_Integer demangle__ModeNum0_5;
    MR_String demangle__STATE_VARIABLE_Str_35_35;
    MR_String demangle__Var_33;
    MR_String demangle__STATE_VARIABLE_Str_34_34;
    MR_String demangle__STATE_VARIABLE_Str_38_38;
    MR_String demangle__Var_37;
    MR_String demangle___Str_26;

    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__STATE_VARIABLE_Str_0_28, &demangle__STATE_VARIABLE_Str_8_75);
    }
    if (demangle__succeeded)
      demangle__STATE_VARIABLE_Str_31_31 = demangle__STATE_VARIABLE_Str_8_75;
    else
      demangle__STATE_VARIABLE_Str_31_31 = demangle__STATE_VARIABLE_Str_0_28;
    {
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Int_4, demangle__STATE_VARIABLE_Str_31_31, &demangle__STATE_VARIABLE_Str_32_32);
    }
    if (demangle__succeeded)
      {
        demangle__Var_33 = (MR_String) "_";
        {
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_32_32, demangle__Var_33, &demangle__STATE_VARIABLE_Str_34_34);
        }
        if (demangle__succeeded)
          {
            demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__ModeNum0_5, demangle__STATE_VARIABLE_Str_34_34, &demangle__STATE_VARIABLE_Str_35_35);
          }
        if (demangle__succeeded)
          {
            demangle__STATE_VARIABLE_Str_36_36 = demangle__STATE_VARIABLE_Str_35_35;
            demangle__ModeNum1_6 = demangle__ModeNum0_5;
            {
              demangle__MaybeInternalLabelNum0_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum0_7, 0) = ((MR_Box) (demangle__Int_4));
            }
          }
        else
          {
            demangle__ModeNum1_6 = demangle__Int_4;
            demangle__MaybeInternalLabelNum0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            demangle__STATE_VARIABLE_Str_36_36 = demangle__STATE_VARIABLE_Str_32_32;
          }
        demangle__Var_46 = (MR_String) "_";
        demangle__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[10]);
        demangle__Var_37 = (MR_String) "f_";
        {
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_36, demangle__Var_37, &demangle__STATE_VARIABLE_Str_38_38);
        }
        if (demangle__succeeded)
          {
            MR_Integer demangle__ModeNum3_15;
            MR_String demangle__STATE_VARIABLE_Str_43_43;
            MR_String demangle__STATE_VARIABLE_Str_44_44;
            MR_String demangle__STATE_VARIABLE_Str_47_47;
            MR_String demangle__STATE_VARIABLE_Str_48_48;
            MR_String demangle__STATE_VARIABLE_Str_50_50;
            MR_String demangle__STATE_VARIABLE_Str_52_52;
            MR_String demangle__STATE_VARIABLE_Str_65_65;

            demangle__PredOrFunc_8 = (MR_String) "function";
            {
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_38_38, (MR_String) "_", &demangle__STATE_VARIABLE_Str_43_43);
            }
            if (demangle__succeeded)
              {
                {
                  demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_11, demangle__STATE_VARIABLE_Str_43_43, &demangle__STATE_VARIABLE_Str_44_44);
                }
                if (demangle__succeeded)
                  {
                    demangle__MaybeInternalLabelNum_13 = demangle__MaybeInternalLabelNum0_7;
                    {
                      demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_44_44, demangle__Var_46, &demangle__STATE_VARIABLE_Str_47_47);
                    }
                    if (demangle__succeeded)
                      {
                        {
                          demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_14, demangle__ModeNum1_6, &demangle__ModeNum3_15, demangle__STATE_VARIABLE_Str_47_47, &demangle__STATE_VARIABLE_Str_48_48);
                        }
                        {
                          demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_16, demangle__ModeNum3_15, &demangle__ModeNum_17, demangle__STATE_VARIABLE_Str_48_48, &demangle__STATE_VARIABLE_Str_50_50);
                        }
                        {
                          demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_19, demangle__Var_51, demangle__STATE_VARIABLE_Str_50_50, &demangle__STATE_VARIABLE_Str_52_52);
                        }
                        {
                          demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_17, &demangle__Category0_20, demangle__STATE_VARIABLE_Str_52_52, &demangle__STATE_VARIABLE_Str_65_65);
                        }
                        if (demangle__succeeded)
                          {
                            demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                            if (demangle__succeeded)
                              {
                                demangle__STATE_VARIABLE_Str_67_67 = demangle__STATE_VARIABLE_Str_65_65;
                                demangle__succeeded = MR_TRUE;
                              }
                            else
                              {
                                {
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__STATE_VARIABLE_Str_65_65, &demangle__STATE_VARIABLE_Str_67_67);
                                }
                              }
                            if (demangle__succeeded)
                              demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                          }
                      }
                  }
              }
          }
        else
          {
            MR_String demangle__STATE_VARIABLE_Str_40_40;

            {
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_36, (MR_String) "p_", &demangle__STATE_VARIABLE_Str_40_40);
            }
            if (demangle__succeeded)
              {
                MR_String demangle__STATE_VARIABLE_Str_45_45;
                MR_Integer demangle__ModeNum3_145;
                MR_String demangle__STATE_VARIABLE_Str_43_147;
                MR_String demangle__STATE_VARIABLE_Str_47_148;
                MR_String demangle__STATE_VARIABLE_Str_48_149;
                MR_String demangle__STATE_VARIABLE_Str_50_150;
                MR_String demangle__STATE_VARIABLE_Str_52_151;
                MR_String demangle__STATE_VARIABLE_Str_65_152;

                demangle__PredOrFunc_8 = (MR_String) "predicate";
                {
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_40_40, (MR_String) "_", &demangle__STATE_VARIABLE_Str_43_147);
                }
                if (demangle__succeeded)
                  {
                    {
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_11, demangle__STATE_VARIABLE_Str_43_147, &demangle__STATE_VARIABLE_Str_45_45);
                    }
                    if (demangle__succeeded)
                      {
                        demangle__MaybeInternalLabelNum_13 = demangle__MaybeInternalLabelNum0_7;
                        {
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_45_45, demangle__Var_46, &demangle__STATE_VARIABLE_Str_47_148);
                        }
                        if (demangle__succeeded)
                          {
                            {
                              demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_14, demangle__ModeNum1_6, &demangle__ModeNum3_145, demangle__STATE_VARIABLE_Str_47_148, &demangle__STATE_VARIABLE_Str_48_149);
                            }
                            {
                              demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_16, demangle__ModeNum3_145, &demangle__ModeNum_17, demangle__STATE_VARIABLE_Str_48_149, &demangle__STATE_VARIABLE_Str_50_150);
                            }
                            {
                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_19, demangle__Var_51, demangle__STATE_VARIABLE_Str_50_150, &demangle__STATE_VARIABLE_Str_52_151);
                            }
                            {
                              demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_17, &demangle__Category0_20, demangle__STATE_VARIABLE_Str_52_151, &demangle__STATE_VARIABLE_Str_65_152);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                if (demangle__succeeded)
                                  {
                                    demangle__STATE_VARIABLE_Str_67_67 = demangle__STATE_VARIABLE_Str_65_152;
                                    demangle__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    {
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__STATE_VARIABLE_Str_65_152, &demangle__STATE_VARIABLE_Str_67_67);
                                    }
                                  }
                                if (demangle__succeeded)
                                  demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                              }
                          }
                      }
                  }
              }
            else
              {
                MR_Integer demangle__ModeNum2_125;
                MR_Integer demangle__ModeNum3_126;
                MR_String demangle__STATE_VARIABLE_Str_45_132;
                MR_String demangle__STATE_VARIABLE_Str_47_133;
                MR_String demangle__STATE_VARIABLE_Str_48_134;
                MR_String demangle__STATE_VARIABLE_Str_49_135;
                MR_String demangle__STATE_VARIABLE_Str_50_136;
                MR_String demangle__STATE_VARIABLE_Str_52_137;
                MR_String demangle__STATE_VARIABLE_Str_65_138;
                MR_Integer demangle__Arity0_113;
                MR_String demangle__STATE_VARIABLE_Str_44_116;
                MR_String demangle__STATE_VARIABLE_Str_43_112;
                MR_Word demangle__Var_117;

                demangle__PredOrFunc_8 = (MR_String) "predicate";
                {
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_36, (MR_String) "_", &demangle__STATE_VARIABLE_Str_43_112);
                }
                if (demangle__succeeded)
                  {
                    demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity0_113, demangle__STATE_VARIABLE_Str_43_112, &demangle__STATE_VARIABLE_Str_44_116);
                  }
                if (demangle__succeeded)
                  {
                    demangle__STATE_VARIABLE_Str_45_132 = demangle__STATE_VARIABLE_Str_44_116;
                    demangle__Arity_11 = demangle__Arity0_113;
                    demangle__ModeNum2_125 = demangle__ModeNum1_6;
                    demangle__MaybeInternalLabelNum_13 = demangle__MaybeInternalLabelNum0_7;
                    demangle__succeeded = MR_TRUE;
                  }
                else
                  {
                    demangle__Arity_11 = demangle__ModeNum1_6;
                    demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeInternalLabelNum0_7)) == (MR_mktag((MR_Integer) 1)));
                    if (demangle__succeeded)
                      {
                        demangle__ModeNum2_125 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum0_7, (MR_Integer) 0)));
                        demangle__MaybeInternalLabelNum_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        demangle__STATE_VARIABLE_Str_45_132 = demangle__STATE_VARIABLE_Str_36_36;
                        demangle__succeeded = MR_TRUE;
                      }
                  }
                if (demangle__succeeded)
                  {
                    {
                      demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_45_132, demangle__Var_46, &demangle__STATE_VARIABLE_Str_47_133);
                    }
                    if (demangle__succeeded)
                      {
                        {
                          demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_14, demangle__ModeNum2_125, &demangle__ModeNum3_126, demangle__STATE_VARIABLE_Str_47_133, &demangle__STATE_VARIABLE_Str_48_134);
                        }
                        {
                          demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_16, demangle__ModeNum3_126, &demangle__ModeNum_17, demangle__STATE_VARIABLE_Str_48_134, &demangle__STATE_VARIABLE_Str_49_135);
                        }
                        demangle__succeeded = ((MR_tag((MR_Word) demangle__UnusedArgs_14)) == (MR_mktag((MR_Integer) 1)));
                        if (demangle__succeeded)
                          {
                            demangle__Var_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_14, (MR_Integer) 0)));
                            {
                              MR_Integer demangle__Var_118;

                              {
                                demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Var_118, demangle__STATE_VARIABLE_Str_49_135, &demangle__STATE_VARIABLE_Str_50_136);
                              }
                              if (demangle__succeeded)
                                demangle__succeeded = (demangle__Arity_11 == demangle__Var_118);
                            }
                          }
                        else
                          {
                            demangle__STATE_VARIABLE_Str_50_136 = demangle__STATE_VARIABLE_Str_49_135;
                            demangle__succeeded = MR_TRUE;
                          }
                        if (demangle__succeeded)
                          {
                            {
                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_19, demangle__Var_51, demangle__STATE_VARIABLE_Str_50_136, &demangle__STATE_VARIABLE_Str_52_137);
                            }
                            {
                              demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_17, &demangle__Category0_20, demangle__STATE_VARIABLE_Str_52_137, &demangle__STATE_VARIABLE_Str_65_138);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                if (demangle__succeeded)
                                  {
                                    demangle__STATE_VARIABLE_Str_67_67 = demangle__STATE_VARIABLE_Str_65_138;
                                    demangle__succeeded = MR_TRUE;
                                  }
                                else
                                  {
                                    {
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__STATE_VARIABLE_Str_65_138, &demangle__STATE_VARIABLE_Str_67_67);
                                    }
                                  }
                                if (demangle__succeeded)
                                  {
                                    demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                    demangle__succeeded = !(demangle__succeeded);
                                  }
                              }
                          }
                      }
                  }
              }
          }
        if (demangle__succeeded)
          {
            {
              demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_67_67, &demangle__STATE_VARIABLE_Str_68_68);
            }
            if (demangle__succeeded)
              {
                if ((demangle__MaybeModule0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    demangle__MaybeModule_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    demangle__succeeded = MR_TRUE;
                  }
                else
                  {
                    MR_String demangle__ModuleName0_22 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_19, (MR_Integer) 0)));
                    MR_String demangle__ModuleName_23;

                    {
                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__ModuleName0_22, &demangle__ModuleName_23);
                    }
                    if (demangle__succeeded)
                      {
                        {
                          demangle__MaybeModule_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), demangle__MaybeModule_21, 0) = ((MR_Box) (demangle__ModuleName_23));
                        }
                        demangle__succeeded = MR_TRUE;
                      }
                  }
                if (demangle__succeeded)
                  {
                    {
                      demangle__succeeded = demangle__handle_category_etc_5_p_0(&demangle__PredName_24, demangle__Category0_20, &demangle__Category_25, demangle__STATE_VARIABLE_Str_68_68, &demangle___Str_26);
                    }
                    if (demangle__succeeded)
                      {
                        {
                          demangle__format_proc_10_p_0(demangle__Category_25, demangle__MaybeModule_21, demangle__PredOrFunc_8, demangle__PredName_24, demangle__Arity_11, demangle__ModeNum_17, demangle__HigherOrder_16, demangle__UnusedArgs_14, demangle__MaybeInternalLabelNum_13, demangle__STATE_VARIABLE_Str_29);
                        }
                        demangle__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_20,
  MR_String * demangle__STATE_VARIABLE_Str_21)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__PredOrFunc_4;
    MR_Integer demangle__Int_5;
    MR_Word demangle__MaybeInternalLabelNum_6;
    MR_Integer demangle__ModeNum0_7;
    MR_Integer demangle__Arity_8;
    MR_Word demangle__Category0_9;
    MR_Word demangle__UnusedArgs_10;
    MR_Integer demangle__ModeNum1_11;
    MR_Word demangle__HigherOrder_12;
    MR_Integer demangle__ModeNum_13;
    MR_Word demangle__MaybeModule_15;
    MR_String demangle__PredName_16;
    MR_Word demangle__Category_17;
    MR_String demangle__STATE_VARIABLE_Str_23_23;
    MR_String demangle__STATE_VARIABLE_Str_26_26;
    MR_String demangle__STATE_VARIABLE_Str_27_27;
    MR_String demangle__STATE_VARIABLE_Str_32_32;
    MR_String demangle__Var_33;
    MR_String demangle__STATE_VARIABLE_Str_34_34;
    MR_String demangle__STATE_VARIABLE_Str_35_35;
    MR_String demangle__Var_36;
    MR_String demangle__STATE_VARIABLE_Str_37_37;
    MR_String demangle__STATE_VARIABLE_Str_38_38;
    MR_String demangle__STATE_VARIABLE_Str_39_39;
    MR_String demangle__STATE_VARIABLE_Str_40_40;
    MR_String demangle__STATE_VARIABLE_Str_41_41;
    MR_String demangle__STATE_VARIABLE_Str_42_42;
    MR_String demangle__STATE_VARIABLE_Str_44_44;
    MR_String demangle__STATE_VARIABLE_Str_25_25;
    MR_String demangle__Var_24;
    MR_String demangle__STATE_VARIABLE_Str_29_29;
    MR_String demangle__Var_28;
    MR_String demangle__STATE_VARIABLE_Str_11_90;
    MR_String demangle__Var_89;
    MR_Word demangle__Var_14;
    MR_String demangle___Str_18;

    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__STATE_VARIABLE_Str_0_20, &demangle__STATE_VARIABLE_Str_23_23);
    }
    if (demangle__succeeded)
      {
        demangle__Var_24 = (MR_String) "fn__";
        {
          demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_24, demangle__STATE_VARIABLE_Str_23_23, &demangle__STATE_VARIABLE_Str_25_25);
        }
        if (demangle__succeeded)
          {
            demangle__STATE_VARIABLE_Str_26_26 = demangle__STATE_VARIABLE_Str_25_25;
            demangle__PredOrFunc_4 = (MR_String) "function";
          }
        else
          {
            demangle__PredOrFunc_4 = (MR_String) "predicate";
            demangle__STATE_VARIABLE_Str_26_26 = demangle__STATE_VARIABLE_Str_23_23;
          }
        {
          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Int_5, demangle__STATE_VARIABLE_Str_26_26, &demangle__STATE_VARIABLE_Str_27_27);
        }
        if (demangle__succeeded)
          {
            demangle__Var_28 = (MR_String) "i";
            {
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_27_27, demangle__Var_28, &demangle__STATE_VARIABLE_Str_29_29);
            }
            if (demangle__succeeded)
              {
                MR_String demangle__STATE_VARIABLE_Str_31_31;

                {
                  demangle__MaybeInternalLabelNum_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum_6, 0) = ((MR_Box) (demangle__Int_5));
                }
                {
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_29_29, (MR_String) "_", &demangle__STATE_VARIABLE_Str_31_31);
                }
                if (demangle__succeeded)
                  {
                    demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__ModeNum0_7, demangle__STATE_VARIABLE_Str_31_31, &demangle__STATE_VARIABLE_Str_32_32);
                  }
              }
            else
              {
                demangle__MaybeInternalLabelNum_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                demangle__ModeNum0_7 = demangle__Int_5;
                demangle__STATE_VARIABLE_Str_32_32 = demangle__STATE_VARIABLE_Str_27_27;
                demangle__succeeded = MR_TRUE;
              }
            if (demangle__succeeded)
              {
                demangle__Var_33 = (MR_String) "_";
                {
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_32_32, demangle__Var_33, &demangle__STATE_VARIABLE_Str_34_34);
                }
                if (demangle__succeeded)
                  {
                    {
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_8, demangle__STATE_VARIABLE_Str_34_34, &demangle__STATE_VARIABLE_Str_35_35);
                    }
                    if (demangle__succeeded)
                      {
                        demangle__Var_36 = (MR_String) "_";
                        {
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_35_35, demangle__Var_36, &demangle__STATE_VARIABLE_Str_37_37);
                        }
                        if (demangle__succeeded)
                          {
                            demangle__Var_89 = (MR_String) "__Unify__";
                            {
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_89, demangle__STATE_VARIABLE_Str_37_37, &demangle__STATE_VARIABLE_Str_11_90);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_11_90;
                                demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                                demangle__succeeded = MR_TRUE;
                              }
                            else
                              {
                                MR_String demangle__STATE_VARIABLE_Str_13_92;

                                {
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", demangle__STATE_VARIABLE_Str_37_37, &demangle__STATE_VARIABLE_Str_13_92);
                                }
                                if (demangle__succeeded)
                                  {
                                    demangle__succeeded = (demangle__ModeNum0_7 == (MR_Integer) 0);
                                    if (demangle__succeeded)
                                      {
                                        demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_13_92;
                                        demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
                                        demangle__succeeded = MR_TRUE;
                                      }
                                  }
                                else
                                  {
                                    MR_String demangle__STATE_VARIABLE_Str_15_94;

                                    {
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", demangle__STATE_VARIABLE_Str_37_37, &demangle__STATE_VARIABLE_Str_15_94);
                                    }
                                    if (demangle__succeeded)
                                      {
                                        demangle__succeeded = (demangle__ModeNum0_7 == (MR_Integer) 0);
                                        if (demangle__succeeded)
                                          {
                                            demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_15_94;
                                            demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                            demangle__succeeded = MR_TRUE;
                                          }
                                      }
                                    else
                                      {
                                        demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
                                        demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_37_37;
                                        demangle__succeeded = MR_TRUE;
                                      }
                                  }
                              }
                            if (demangle__succeeded)
                              {
                                {
                                  demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_38_38, &demangle__STATE_VARIABLE_Str_39_39);
                                }
                                if (demangle__succeeded)
                                  {
                                    {
                                      demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_10, demangle__ModeNum0_7, &demangle__ModeNum1_11, demangle__STATE_VARIABLE_Str_39_39, &demangle__STATE_VARIABLE_Str_40_40);
                                    }
                                    {
                                      demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_12, demangle__ModeNum1_11, &demangle__ModeNum_13, demangle__STATE_VARIABLE_Str_40_40, &demangle__STATE_VARIABLE_Str_41_41);
                                    }
                                    demangle__succeeded = ((MR_tag((MR_Word) demangle__UnusedArgs_10)) == (MR_mktag((MR_Integer) 1)));
                                    if (demangle__succeeded)
                                      {
                                        demangle__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_10, (MR_Integer) 0)));
                                        demangle__succeeded = (demangle__Category0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                        demangle__succeeded = !(demangle__succeeded);
                                      }
                                    if (demangle__succeeded)
                                      {
                                        MR_Integer demangle__Var_71;

                                        {
                                          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Var_71, demangle__STATE_VARIABLE_Str_41_41, &demangle__STATE_VARIABLE_Str_42_42);
                                        }
                                        if (demangle__succeeded)
                                          demangle__succeeded = (demangle__Arity_8 == demangle__Var_71);
                                      }
                                    else
                                      {
                                        demangle__STATE_VARIABLE_Str_42_42 = demangle__STATE_VARIABLE_Str_41_41;
                                        demangle__succeeded = MR_TRUE;
                                      }
                                    if (demangle__succeeded)
                                      {
                                        demangle__succeeded = (demangle__Category0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
                                        if (demangle__succeeded)
                                          {
                                            {
                                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]), demangle__STATE_VARIABLE_Str_42_42, &demangle__STATE_VARIABLE_Str_44_44);
                                            }
                                            demangle__succeeded = MR_TRUE;
                                          }
                                        else
                                          {
                                            MR_String demangle__STATE_VARIABLE_Str_56_56;
                                            MR_Word demangle__Var_57;
                                            MR_String demangle__Var_69;

                                            {
                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", demangle__STATE_VARIABLE_Str_42_42, &demangle__STATE_VARIABLE_Str_56_56);
                                            }
                                            if (demangle__succeeded)
                                              {
                                                demangle__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]);
                                                {
                                                  demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule_15, demangle__Var_57, demangle__STATE_VARIABLE_Str_56_56, &demangle__STATE_VARIABLE_Str_44_44);
                                                }
                                                demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_15)) == (MR_mktag((MR_Integer) 1)));
                                                if (demangle__succeeded)
                                                  {
                                                    demangle__Var_69 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_15, (MR_Integer) 0)));
                                                    demangle__succeeded = (strcmp(demangle__Var_69, (MR_String) "") == 0);
                                                  }
                                                demangle__succeeded = !(demangle__succeeded);
                                              }
                                          }
                                        if (demangle__succeeded)
                                          {
                                            {
                                              demangle__succeeded = demangle__handle_category_etc_5_p_0(&demangle__PredName_16, demangle__Category0_9, &demangle__Category_17, demangle__STATE_VARIABLE_Str_44_44, &demangle___Str_18);
                                            }
                                            if (demangle__succeeded)
                                              {
                                                {
                                                  demangle__format_proc_10_p_0(demangle__Category_17, demangle__MaybeModule_15, demangle__PredOrFunc_4, demangle__PredName_16, demangle__Arity_8, demangle__ModeNum_13, demangle__HigherOrder_12, demangle__UnusedArgs_10, demangle__MaybeInternalLabelNum_6, demangle__STATE_VARIABLE_Str_21);
                                                }
                                                demangle__succeeded = MR_TRUE;
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
    return demangle__succeeded;
  }
}

static MR_bool MR_CALL 
demangle__demangle_from_c_2_p_0(
  MR_String demangle__STATE_VARIABLE_Str_0_4,
  MR_String * demangle__STATE_VARIABLE_Str_5)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__STATE_VARIABLE_Str_6_6;

    {
      demangle__succeeded = demangle__demangle_proc_hl_2_p_0(demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_6_6);
    }
    if (demangle__succeeded)
      {
        *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_6_6;
        demangle__succeeded = MR_TRUE;
      }
    else
      {
        MR_String demangle__STATE_VARIABLE_Str_7_7;

        {
          demangle__succeeded = demangle__demangle_proc_ll_2_p_0(demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_7_7);
        }
        if (demangle__succeeded)
          {
            *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_7_7;
            demangle__succeeded = MR_TRUE;
          }
        else
          {
            MR_String demangle__STATE_VARIABLE_Str_8_8;
            MR_Word demangle__HighLevel_14;
            MR_Word demangle__MaybeModule0_15;
            MR_Word demangle__MaybeModule_16;
            MR_Word demangle__DataCategory_19;
            MR_Integer demangle__Arity_20;
            MR_String demangle__STATE_VARIABLE_Str_16_24;
            MR_String demangle__STATE_VARIABLE_Str_18_26;
            MR_String demangle__STATE_VARIABLE_Str_38_46;
            MR_String demangle__STATE_VARIABLE_Str_52_60;
            MR_String demangle__STATE_VARIABLE_Str_14_22;
            MR_String demangle__Var_35;
            MR_String demangle__STATE_VARIABLE_Str_35_43;
            MR_String demangle__Var_42;

            {
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data_", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_14_22);
            }
            if (demangle__succeeded)
              {
                demangle__STATE_VARIABLE_Str_16_24 = demangle__STATE_VARIABLE_Str_14_22;
                demangle__HighLevel_14 = (MR_Integer) 0;
              }
            else
              {
                MR_String demangle__STATE_VARIABLE_Str_8_68;

                demangle__HighLevel_14 = (MR_Integer) 1;
                {
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_8_68);
                }
                if (demangle__succeeded)
                  demangle__STATE_VARIABLE_Str_16_24 = demangle__STATE_VARIABLE_Str_8_68;
                else
                  demangle__STATE_VARIABLE_Str_16_24 = demangle__STATE_VARIABLE_Str_0_4;
              }
            {
              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[14]), demangle__STATE_VARIABLE_Str_16_24, &demangle__STATE_VARIABLE_Str_18_26);
            }
            demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
            if (demangle__succeeded)
              {
                demangle__Var_35 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_15, (MR_Integer) 0)));
                demangle__succeeded = (strcmp(demangle__Var_35, (MR_String) "") == 0);
              }
            if (demangle__succeeded)
              {
                demangle__MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                demangle__succeeded = MR_TRUE;
              }
            else
              {
                MR_String demangle__Twice_17;

                demangle__succeeded = (demangle__HighLevel_14 == (MR_Integer) 1);
                if (demangle__succeeded)
                  {
                    demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
                    if (demangle__succeeded)
                      demangle__Twice_17 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_15, (MR_Integer) 0)));
                  }
                if (demangle__succeeded)
                  {
                    MR_String demangle__Once_18;
                    MR_Integer demangle__Var_36;
                    MR_Integer demangle__Var_37;
                    MR_Integer demangle__Var_39;
                    MR_Integer demangle__Var_40;
                    MR_String demangle__Var_63;

                    {
                      demangle__Var_37 = mercury__string__length_1_f_0(demangle__Twice_17);
                    }
                    {
                      demangle__Var_36 = mercury__int__f_47_47_2_f_0(demangle__Var_37, (MR_Integer) 2);
                    }
                    {
                      demangle__Once_18 = mercury__string__left_2_f_0(demangle__Twice_17, demangle__Var_36);
                    }
                    {
                      demangle__Var_40 = mercury__string__length_1_f_0(demangle__Twice_17);
                    }
                    {
                      demangle__Var_39 = mercury__int__f_47_47_2_f_0(demangle__Var_40, (MR_Integer) 2);
                    }
                    {
                      demangle__Var_63 = mercury__string__right_2_f_0(demangle__Twice_17, demangle__Var_39);
                    }
                    demangle__succeeded = (strcmp(demangle__Once_18, demangle__Var_63) == 0);
                    if (demangle__succeeded)
                      {
                        {
                          demangle__MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), demangle__MaybeModule_16, 0) = ((MR_Box) (demangle__Once_18));
                        }
                        demangle__succeeded = MR_TRUE;
                      }
                  }
                else
                  {
                    demangle__MaybeModule_16 = demangle__MaybeModule0_15;
                    demangle__succeeded = MR_TRUE;
                  }
              }
            if (demangle__succeeded)
              {
                demangle__Var_42 = (MR_String) "type_ctor_info_";
                {
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__Var_42, demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_35_43);
                }
                if (demangle__succeeded)
                  {
                    MR_String demangle__STATE_VARIABLE_Str_36_44;
                    MR_String demangle__Var_45;

                    demangle__DataCategory_19 = (MR_Integer) 1;
                    {
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_35_43, &demangle__STATE_VARIABLE_Str_36_44);
                    }
                    if (demangle__succeeded)
                      {
                        demangle__Var_45 = (MR_String) "_";
                        {
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_44, demangle__Var_45, &demangle__STATE_VARIABLE_Str_38_46);
                        }
                      }
                  }
                else
                  {
                    MR_String demangle__STATE_VARIABLE_Str_40_48;

                    {
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_layout_", demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_40_48);
                    }
                    if (demangle__succeeded)
                      {
                        MR_String demangle__STATE_VARIABLE_Str_41_49;
                        MR_String demangle__Var_50;

                        demangle__DataCategory_19 = (MR_Integer) 2;
                        {
                          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_40_48, &demangle__STATE_VARIABLE_Str_41_49);
                        }
                        if (demangle__succeeded)
                          {
                            demangle__Var_50 = (MR_String) "_";
                            {
                              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_41_49, demangle__Var_50, &demangle__STATE_VARIABLE_Str_38_46);
                            }
                          }
                      }
                    else
                      {
                        MR_String demangle__STATE_VARIABLE_Str_45_53;

                        {
                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_functors_", demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_45_53);
                        }
                        if (demangle__succeeded)
                          {
                            MR_String demangle__STATE_VARIABLE_Str_46_54;
                            MR_String demangle__Var_55;

                            demangle__DataCategory_19 = (MR_Integer) 3;
                            {
                              demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_45_53, &demangle__STATE_VARIABLE_Str_46_54);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__Var_55 = (MR_String) "_";
                                {
                                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_46_54, demangle__Var_55, &demangle__STATE_VARIABLE_Str_38_46);
                                }
                              }
                          }
                        else
                          {
                            MR_String demangle__STATE_VARIABLE_Str_50_58;

                            {
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "common_", demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_50_58);
                            }
                            if (demangle__succeeded)
                              {
                                demangle__DataCategory_19 = (MR_Integer) 0;
                                {
                                  demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_50_58, &demangle__STATE_VARIABLE_Str_38_46);
                                }
                              }
                          }
                      }
                  }
                if (demangle__succeeded)
                  {
                    {
                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_38_46, &demangle__STATE_VARIABLE_Str_52_60);
                    }
                    if (demangle__succeeded)
                      {
                        demangle__succeeded = demangle__format_data_5_p_0(demangle__DataCategory_19, demangle__MaybeModule_16, demangle__STATE_VARIABLE_Str_52_60, demangle__Arity_20, &demangle__STATE_VARIABLE_Str_8_8);
                      }
                  }
              }
            if (demangle__succeeded)
              {
                *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_8_8;
                demangle__succeeded = MR_TRUE;
              }
            else
              {
                demangle__succeeded = demangle__demangle_typeclass_info_2_p_0(demangle__STATE_VARIABLE_Str_0_4, demangle__STATE_VARIABLE_Str_5);
              }
          }
      }
    return demangle__succeeded;
  }
}

void MR_CALL 
demangle__demangle_2_p_0(
  MR_String demangle__MangledName_3,
  MR_String * demangle__Name_4)
{
  {
    MR_bool demangle__succeeded;
    MR_String demangle__DemangledName_5;
    MR_String demangle__STATE_VARIABLE_Name_11_14;
    MR_String demangle__STATE_VARIABLE_Name_7_10;

    {
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", demangle__MangledName_3, &demangle__STATE_VARIABLE_Name_7_10);
    }
    if (demangle__succeeded)
      demangle__STATE_VARIABLE_Name_11_14 = demangle__STATE_VARIABLE_Name_7_10;
    else
      {
        MR_String demangle__STATE_VARIABLE_Name_9_12;
        MR_String demangle__STATE_VARIABLE_Str_8_20;
        MR_String demangle__STATE_VARIABLE_Str_8_26;

        {
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", demangle__MangledName_3, &demangle__STATE_VARIABLE_Str_8_20);
        }
        if (demangle__succeeded)
          demangle__STATE_VARIABLE_Name_9_12 = demangle__STATE_VARIABLE_Str_8_20;
        else
          demangle__STATE_VARIABLE_Name_9_12 = demangle__MangledName_3;
        {
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", demangle__STATE_VARIABLE_Name_9_12, &demangle__STATE_VARIABLE_Str_8_26);
        }
        if (demangle__succeeded)
          demangle__STATE_VARIABLE_Name_11_14 = demangle__STATE_VARIABLE_Str_8_26;
        else
          demangle__STATE_VARIABLE_Name_11_14 = demangle__STATE_VARIABLE_Name_9_12;
      }
    {
      demangle__succeeded = demangle__demangle_from_c_2_p_0(demangle__STATE_VARIABLE_Name_11_14, &demangle__DemangledName_5);
    }
    if (demangle__succeeded)
      *demangle__Name_4 = demangle__DemangledName_5;
    else
      *demangle__Name_4 = demangle__MangledName_3;
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

/* :- end_module demangle. */
