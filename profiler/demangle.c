/*
** Automatically generated from `demangle.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 784 "demangle.m"
struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s {
#line 784 "demangle.m"
  MR_Word demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6;
#line 784 "demangle.m"
  MR_String demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
#line 788 "demangle.m"
  MR_bool demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded;
#line 789 "demangle.m"
  jmp_buf demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0;
#line 789 "demangle.m"
  MR_String demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9;
#line 789 "demangle.m"
  MR_Box demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9;
#line 784 "demangle.m"
};


#line 85 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_0;

#line 88 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_1;

#line 91 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_2;

#line 94 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_3;

#line 97 "demangle.c"
static const MR_EnumFunctorDescPtr demangle__demangle__enum_value_ordered_data_category_0[4];

#line 100 "demangle.c"
static const MR_EnumFunctorDescPtr demangle__demangle__enum_name_ordered_data_category_0[4];

#line 103 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_data_category_0[4];

#line 106 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_0;

#line 109 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_1;

#line 112 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_2;

#line 115 "demangle.c"
static const MR_PseudoTypeInfo demangle__demangle__field_types_introduced_pred_type_0_3[1];

#line 118 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_3;

#line 121 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_0[3];

#line 124 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_1[1];

#line 127 "demangle.c"
static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_introduced_pred_type_0[2];

#line 130 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_introduced_pred_type_0[4];

#line 133 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_introduced_pred_type_0[4];

#line 136 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_0;

#line 139 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_1;

#line 142 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_2;

#line 145 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_3;

#line 148 "demangle.c"
static const MR_PseudoTypeInfo demangle__demangle__field_types_pred_category_0_4[4];

#line 151 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_pred_category_0_4;

#line 154 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_0[4];

#line 157 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_1[1];

#line 160 "demangle.c"
static const MR_DuPtagLayout demangle__demangle__du_ptag_ordered_pred_category_0[2];

#line 163 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_pred_category_0[5];

#line 166 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_pred_category_0[5];

#line 169 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
#line 172 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 174 "demangle.c"
  MR_Box demangle__wrapper_arg_2);

#line 177 "demangle.c"
static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
#line 180 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 182 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 184 "demangle.c"
  MR_Box demangle__wrapper_arg_3);

#line 187 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
#line 190 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 192 "demangle.c"
  MR_Box demangle__wrapper_arg_2);

#line 195 "demangle.c"
static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
#line 198 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 200 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 202 "demangle.c"
  MR_Box demangle__wrapper_arg_3);

#line 205 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
#line 208 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 210 "demangle.c"
  MR_Box demangle__wrapper_arg_2);

#line 213 "demangle.c"
static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
#line 216 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 218 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 220 "demangle.c"
  MR_Box demangle__wrapper_arg_3);

#line 42 "demangle.m"
static void MR_CALL 
demangle____Compare____pred_category_0_0(
#line 42 "demangle.m"
  MR_Word * demangle__HeadVar__1_1,
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__2_2,
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__3_3);

#line 42 "demangle.m"
static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0(
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__2_2);

#line 51 "demangle.m"
static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0(
#line 51 "demangle.m"
  MR_Word * demangle__HeadVar__1_1,
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__2_2,
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__3_3);

#line 51 "demangle.m"
static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0(
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__2_2);

#line 57 "demangle.m"
static void MR_CALL 
demangle____Compare____data_category_0_0(
#line 57 "demangle.m"
  MR_Word * demangle__HeadVar__1_1,
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__2_2,
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__3_3);

#line 57 "demangle.m"
static MR_bool MR_CALL 
demangle____Unify____data_category_0_0(
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__2_1,
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__2_2);

#line 899 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
#line 899 "demangle.m"
  MR_Integer * demangle__Int_4,
#line 899 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_8,
#line 899 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_9);

#line 892 "demangle.m"
static void MR_CALL 
demangle__format_maybe_module_3_p_0(
#line 892 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 892 "demangle.m"
  MR_String demangle__Name_2,
#line 892 "demangle.m"
  MR_String * demangle__QualifiedName_3);

#line 878 "demangle.m"
static void MR_CALL 
demangle__insert_prefix_3_p_0(
#line 878 "demangle.m"
  MR_String demangle__Prefix_4,
#line 878 "demangle.m"
  MR_String demangle__Name0_5,
#line 878 "demangle.m"
  MR_String * demangle__Name_6);

#line 843 "demangle.m"
static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
#line 843 "demangle.m"
  MR_Integer demangle__NumBrackets0_6,
#line 843 "demangle.m"
  MR_Integer demangle__Length_7,
#line 843 "demangle.m"
  MR_String demangle__String_8,
#line 843 "demangle.m"
  MR_Integer demangle__Index0_9,
#line 843 "demangle.m"
  MR_Integer * demangle__Index_10);

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg);

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg);

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg);

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg);

#line 784 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
#line 784 "demangle.m"
  MR_Word * demangle__MaybeModule_5,
#line 784 "demangle.m"
  MR_Word demangle__StringsToStopAt_6,
#line 784 "demangle.m"
  MR_String demangle__String0_7,
#line 784 "demangle.m"
  MR_String * demangle__String_8);

#line 753 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
#line 753 "demangle.m"
  MR_Integer demangle__Int0_5,
#line 753 "demangle.m"
  MR_Integer * demangle__Int_6,
#line 753 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_10,
#line 753 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_11);

#line 733 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
#line 733 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_6,
#line 733 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_7);

#line 690 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
#line 690 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_4,
#line 690 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_5);

#line 659 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
#line 659 "demangle.m"
  MR_Integer demangle__Num_5,
#line 659 "demangle.m"
  MR_String * demangle__FormattedArgs_6,
#line 659 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_13,
#line 659 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_14);

#line 643 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
#line 643 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_8,
#line 643 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_9);

#line 594 "demangle.m"
static MR_bool MR_CALL 
demangle__format_data_5_p_0(
#line 594 "demangle.m"
  MR_Word demangle__Category_6,
#line 594 "demangle.m"
  MR_Word demangle__MaybeModule_7,
#line 594 "demangle.m"
  MR_String demangle__Name_8,
#line 594 "demangle.m"
  MR_Integer demangle__Arity_9,
#line 594 "demangle.m"
  MR_String * demangle__Result_10);

#line 456 "demangle.m"
static void MR_CALL 
demangle__format_proc_10_p_0(
#line 456 "demangle.m"
  MR_Word demangle__Category_11,
#line 456 "demangle.m"
  MR_Word demangle__MaybeModule_12,
#line 456 "demangle.m"
  MR_String demangle__PredOrFunc_13,
#line 456 "demangle.m"
  MR_String demangle__PredName_14,
#line 456 "demangle.m"
  MR_Integer demangle__Arity_15,
#line 456 "demangle.m"
  MR_Integer demangle__ModeNum_16,
#line 456 "demangle.m"
  MR_Word demangle__HigherOrder_17,
#line 456 "demangle.m"
  MR_Word demangle__UnusedArgs_18,
#line 456 "demangle.m"
  MR_Word demangle__MaybeInternalLabelNum_19,
#line 456 "demangle.m"
  MR_String * demangle__DemangledName_20);

#line 376 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
#line 376 "demangle.m"
  MR_String * demangle__PredName_6,
#line 376 "demangle.m"
  MR_Word demangle__Category0_7,
#line 376 "demangle.m"
  MR_Word * demangle__Category_8,
#line 376 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_21,
#line 376 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_22);

#line 355 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
#line 355 "demangle.m"
  MR_Integer demangle__ModeNum0_5,
#line 355 "demangle.m"
  MR_Word * demangle__Category0_6,
#line 355 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_8,
#line 355 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_9);

#line 333 "demangle.m"
static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
#line 333 "demangle.m"
  MR_Word * demangle__HigherOrder_6,
#line 333 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 333 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 333 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_11,
#line 333 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_12);

#line 307 "demangle.m"
static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
#line 307 "demangle.m"
  MR_Word * demangle__UnusedArgs_6,
#line 307 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 307 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 307 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_11,
#line 307 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_12);

#line 182 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
#line 182 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_28,
#line 182 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_29);

#line 100 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
#line 100 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_20,
#line 100 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_21);

#line 83 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_from_c_2_p_0(
#line 83 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_4,
#line 83 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_5);


static /* final */ const MR_Box demangle_scalar_common_1[16][2];

static /* final */ const MR_Box demangle_scalar_common_2[2][1];


#line 771 "demangle.m"
/* sealed */ struct demangle__vector_common_type_3_0_s {
#line 771 "demangle.m"
  const MR_Integer demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
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



#line 713 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_0 = {
  (MR_String) "common",
  (MR_Integer) 0
};

#line 719 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_1 = {
  (MR_String) "info",
  (MR_Integer) 1
};

#line 725 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_2 = {
  (MR_String) "layout",
  (MR_Integer) 2
};

#line 731 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_3 = {
  (MR_String) "functors",
  (MR_Integer) 3
};

#line 737 "demangle.c"
static const MR_EnumFunctorDescPtr demangle__demangle__enum_value_ordered_data_category_0[4] = {
  &demangle__demangle__enum_functor_desc_data_category_0_0,
  &demangle__demangle__enum_functor_desc_data_category_0_1,
  &demangle__demangle__enum_functor_desc_data_category_0_2,
  &demangle__demangle__enum_functor_desc_data_category_0_3
};

#line 745 "demangle.c"
static const MR_EnumFunctorDescPtr demangle__demangle__enum_name_ordered_data_category_0[4] = {
  &demangle__demangle__enum_functor_desc_data_category_0_0,
  &demangle__demangle__enum_functor_desc_data_category_0_3,
  &demangle__demangle__enum_functor_desc_data_category_0_1,
  &demangle__demangle__enum_functor_desc_data_category_0_2
};

#line 753 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_data_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 761 "demangle.c"
const MR_TypeCtorInfo_Struct demangle__demangle__type_ctor_info_data_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 778 "demangle.c"
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
  NULL
};

#line 793 "demangle.c"
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
  NULL
};

#line 808 "demangle.c"
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
  NULL
};

#line 823 "demangle.c"
static const MR_PseudoTypeInfo demangle__demangle__field_types_introduced_pred_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 828 "demangle.c"
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
  NULL
};

#line 843 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_0[3] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_0,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_1,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_2
};

#line 850 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_1[1] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_3
};

#line 855 "demangle.c"
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

#line 869 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_introduced_pred_type_0[4] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_2,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_1,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_0,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_3
};

#line 877 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_introduced_pred_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 885 "demangle.c"
const MR_TypeCtorInfo_Struct demangle__demangle__type_ctor_info_introduced_pred_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 902 "demangle.c"
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
  NULL
};

#line 917 "demangle.c"
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
  NULL
};

#line 932 "demangle.c"
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
  NULL
};

#line 947 "demangle.c"
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
  NULL
};

#line 962 "demangle.c"
static const MR_PseudoTypeInfo demangle__demangle__field_types_pred_category_0_4[4] = {
  (MR_PseudoTypeInfo) &demangle__demangle__type_ctor_info_introduced_pred_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 970 "demangle.c"
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
  NULL
};

#line 985 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_0[4] = {
  &demangle__demangle__du_functor_desc_pred_category_0_0,
  &demangle__demangle__du_functor_desc_pred_category_0_1,
  &demangle__demangle__du_functor_desc_pred_category_0_2,
  &demangle__demangle__du_functor_desc_pred_category_0_3
};

#line 993 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_1[1] = {
  &demangle__demangle__du_functor_desc_pred_category_0_4
};

#line 998 "demangle.c"
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

#line 1012 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_pred_category_0[5] = {
  &demangle__demangle__du_functor_desc_pred_category_0_2,
  &demangle__demangle__du_functor_desc_pred_category_0_0,
  &demangle__demangle__du_functor_desc_pred_category_0_4,
  &demangle__demangle__du_functor_desc_pred_category_0_3,
  &demangle__demangle__du_functor_desc_pred_category_0_1
};

#line 1021 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_pred_category_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 1030 "demangle.c"
const MR_TypeCtorInfo_Struct demangle__demangle__type_ctor_info_pred_category_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 1047 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
#line 1050 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 1052 "demangle.c"
  MR_Box demangle__wrapper_arg_2)
#line 1054 "demangle.c"
{
#line 1056 "demangle.c"
  {
#line 1058 "demangle.c"
    MR_bool demangle__succeeded;

#line 1061 "demangle.c"
    {
#line 1063 "demangle.c"
      demangle__succeeded = demangle____Unify____data_category_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
#line 1066 "demangle.c"
    return demangle__succeeded;
#line 1068 "demangle.c"
  }
#line 1070 "demangle.c"
}

#line 1073 "demangle.c"
static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
#line 1076 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 1078 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 1080 "demangle.c"
  MR_Box demangle__wrapper_arg_3)
#line 1082 "demangle.c"
{
#line 1084 "demangle.c"
  {
#line 1086 "demangle.c"
    MR_Word demangle__conv0_HeadVar__1_1;

#line 1089 "demangle.c"
    {
#line 1091 "demangle.c"
      demangle____Compare____data_category_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
#line 1094 "demangle.c"
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
#line 1096 "demangle.c"
  }
#line 1098 "demangle.c"
}

#line 1101 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
#line 1104 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 1106 "demangle.c"
  MR_Box demangle__wrapper_arg_2)
#line 1108 "demangle.c"
{
#line 1110 "demangle.c"
  {
#line 1112 "demangle.c"
    MR_bool demangle__succeeded;

#line 1115 "demangle.c"
    {
#line 1117 "demangle.c"
      demangle__succeeded = demangle____Unify____introduced_pred_type_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
#line 1120 "demangle.c"
    return demangle__succeeded;
#line 1122 "demangle.c"
  }
#line 1124 "demangle.c"
}

#line 1127 "demangle.c"
static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
#line 1130 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 1132 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 1134 "demangle.c"
  MR_Box demangle__wrapper_arg_3)
#line 1136 "demangle.c"
{
#line 1138 "demangle.c"
  {
#line 1140 "demangle.c"
    MR_Word demangle__conv0_HeadVar__1_1;

#line 1143 "demangle.c"
    {
#line 1145 "demangle.c"
      demangle____Compare____introduced_pred_type_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
#line 1148 "demangle.c"
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
#line 1150 "demangle.c"
  }
#line 1152 "demangle.c"
}

#line 1155 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
#line 1158 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 1160 "demangle.c"
  MR_Box demangle__wrapper_arg_2)
#line 1162 "demangle.c"
{
#line 1164 "demangle.c"
  {
#line 1166 "demangle.c"
    MR_bool demangle__succeeded;

#line 1169 "demangle.c"
    {
#line 1171 "demangle.c"
      demangle__succeeded = demangle____Unify____pred_category_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
#line 1174 "demangle.c"
    return demangle__succeeded;
#line 1176 "demangle.c"
  }
#line 1178 "demangle.c"
}

#line 1181 "demangle.c"
static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
#line 1184 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 1186 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 1188 "demangle.c"
  MR_Box demangle__wrapper_arg_3)
#line 1190 "demangle.c"
{
#line 1192 "demangle.c"
  {
#line 1194 "demangle.c"
    MR_Word demangle__conv0_HeadVar__1_1;

#line 1197 "demangle.c"
    {
#line 1199 "demangle.c"
      demangle____Compare____pred_category_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
#line 1202 "demangle.c"
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
#line 1204 "demangle.c"
  }
#line 1206 "demangle.c"
}

#line 42 "demangle.m"
static void MR_CALL 
demangle____Compare____pred_category_0_0(
#line 42 "demangle.m"
  MR_Word * demangle__HeadVar__1_1,
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__2_2,
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__3_3)
#line 42 "demangle.m"
{
#line 42 "demangle.m"
  {
#line 42 "demangle.m"
    MR_bool demangle__succeeded;
#line 42 "demangle.m"
    MR_Integer demangle__CastX_47 = (MR_Integer) demangle__HeadVar__2_2;
#line 42 "demangle.m"
    MR_Integer demangle__CastY_48 = (MR_Integer) demangle__HeadVar__3_3;

#line 42 "demangle.m"
    demangle__succeeded = (demangle__CastX_47 == demangle__CastY_48);
#line 42 "demangle.m"
    if (demangle__succeeded)
#line 1233 "demangle.c"
      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
    else
#line 42 "demangle.m"
#line 42 "demangle.m"
      switch (MR_tag((MR_Word) demangle__HeadVar__2_2)) {
#line 42 "demangle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
        case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
          switch (MR_unmkbody(demangle__HeadVar__2_2)) {
#line 42 "demangle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
            case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                    case (MR_Integer) 0:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 1:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 2:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 3:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                  }
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
                case (MR_Integer) 1:
#line 1293 "demangle.c"
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
            case (MR_Integer) 1:
#line 42 "demangle.m"
#line 42 "demangle.m"
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                    case (MR_Integer) 0:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 1:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 2:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 3:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                  }
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
                case (MR_Integer) 1:
#line 1345 "demangle.c"
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
            case (MR_Integer) 2:
#line 42 "demangle.m"
#line 42 "demangle.m"
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                    case (MR_Integer) 0:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 1:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 2:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 3:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                  }
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
                case (MR_Integer) 1:
#line 1397 "demangle.c"
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
            case (MR_Integer) 3:
#line 42 "demangle.m"
#line 42 "demangle.m"
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                    case (MR_Integer) 0:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 1:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 2:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                    case (MR_Integer) 3:
#line 42 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
                      break;
#line 42 "demangle.m"
                  }
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
                case (MR_Integer) 1:
#line 1449 "demangle.c"
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
                  break;
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
          }
#line 42 "demangle.m"
          break;
#line 42 "demangle.m"
        case (MR_Integer) 1:
#line 42 "demangle.m"
          {
#line 42 "demangle.m"
            MR_String demangle__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 3)));
#line 42 "demangle.m"
            MR_Integer demangle__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 2)));
#line 42 "demangle.m"
            MR_Integer demangle__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "demangle.m"
            MR_Word demangle__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));

#line 42 "demangle.m"
#line 42 "demangle.m"
            switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
              case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
                switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 42 "demangle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
                  case (MR_Integer) 0:
#line 1488 "demangle.c"
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                    break;
#line 42 "demangle.m"
                  case (MR_Integer) 1:
#line 1494 "demangle.c"
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                    break;
#line 42 "demangle.m"
                  case (MR_Integer) 2:
#line 1500 "demangle.c"
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                    break;
#line 42 "demangle.m"
                  case (MR_Integer) 3:
#line 1506 "demangle.c"
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
                    break;
#line 42 "demangle.m"
                }
#line 42 "demangle.m"
                break;
#line 42 "demangle.m"
              case (MR_Integer) 1:
#line 42 "demangle.m"
                {
#line 42 "demangle.m"
                  MR_Word demangle__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 0)));
#line 42 "demangle.m"
                  MR_Integer demangle__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 1)));
#line 42 "demangle.m"
                  MR_Integer demangle__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 2)));
#line 42 "demangle.m"
                  MR_String demangle__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 3)));
#line 42 "demangle.m"
                  MR_Word demangle__V_44_44;

#line 42 "demangle.m"
                  {
#line 42 "demangle.m"
                    demangle____Compare____introduced_pred_type_0_0(&demangle__V_44_44, demangle__V_56_56, demangle__V_40_40);
                  }
#line 1534 "demangle.c"
                  demangle__succeeded = (demangle__V_44_44 == (MR_Integer) 0);
#line 42 "demangle.m"
                  demangle__succeeded = !(demangle__succeeded);
#line 42 "demangle.m"
                  if (demangle__succeeded)
#line 42 "demangle.m"
                    *demangle__HeadVar__1_1 = demangle__V_44_44;
#line 42 "demangle.m"
                  else
#line 42 "demangle.m"
                    {
#line 42 "demangle.m"
                      MR_Word demangle__V_45_45;

#line 42 "demangle.m"
                      {
#line 42 "demangle.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&demangle__V_45_45, demangle__V_55_55, demangle__V_41_41);
                      }
#line 1554 "demangle.c"
                      demangle__succeeded = (demangle__V_45_45 == (MR_Integer) 0);
#line 42 "demangle.m"
                      demangle__succeeded = !(demangle__succeeded);
#line 42 "demangle.m"
                      if (demangle__succeeded)
#line 42 "demangle.m"
                        *demangle__HeadVar__1_1 = demangle__V_45_45;
#line 42 "demangle.m"
                      else
#line 42 "demangle.m"
                        {
#line 42 "demangle.m"
                          MR_Word demangle__V_46_46;

#line 42 "demangle.m"
                          {
#line 42 "demangle.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&demangle__V_46_46, demangle__V_54_54, demangle__V_42_42);
                          }
#line 1574 "demangle.c"
                          demangle__succeeded = (demangle__V_46_46 == (MR_Integer) 0);
#line 42 "demangle.m"
                          demangle__succeeded = !(demangle__succeeded);
#line 42 "demangle.m"
                          if (demangle__succeeded)
#line 42 "demangle.m"
                            *demangle__HeadVar__1_1 = demangle__V_46_46;
#line 42 "demangle.m"
                          else
#line 42 "demangle.m"
                            {
#line 42 "demangle.m"
                              mercury__private_builtin__builtin_compare_string_3_p_0(demangle__HeadVar__1_1, demangle__V_53_53, demangle__V_43_43);
                            }
#line 42 "demangle.m"
                        }
#line 42 "demangle.m"
                    }
#line 42 "demangle.m"
                }
#line 42 "demangle.m"
                break;
#line 42 "demangle.m"
            }
#line 42 "demangle.m"
          }
#line 42 "demangle.m"
          break;
#line 42 "demangle.m"
      }
#line 42 "demangle.m"
  }
#line 42 "demangle.m"
}

#line 42 "demangle.m"
static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0(
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 42 "demangle.m"
  MR_Word demangle__HeadVar__2_2)
#line 42 "demangle.m"
{
#line 42 "demangle.m"
  {
#line 42 "demangle.m"
    MR_bool demangle__succeeded;
#line 42 "demangle.m"
    MR_Integer demangle__CastX_19 = (MR_Integer) demangle__HeadVar__1_1;
#line 42 "demangle.m"
    MR_Integer demangle__CastY_20 = (MR_Integer) demangle__HeadVar__2_2;

#line 42 "demangle.m"
    demangle__succeeded = (demangle__CastX_19 == demangle__CastY_20);
#line 42 "demangle.m"
    if (demangle__succeeded)
#line 42 "demangle.m"
      demangle__succeeded = MR_TRUE;
#line 42 "demangle.m"
    else
#line 42 "demangle.m"
#line 42 "demangle.m"
      switch (MR_tag((MR_Word) demangle__HeadVar__1_1)) {
#line 42 "demangle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
        case (MR_Integer) 0:
#line 42 "demangle.m"
#line 42 "demangle.m"
          switch (MR_unmkbody(demangle__HeadVar__1_1)) {
#line 42 "demangle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 42 "demangle.m"
            case (MR_Integer) 0:
#line 42 "demangle.m"
              {
#line 42 "demangle.m"
                MR_Integer demangle__CastX_3 = (MR_Integer) demangle__HeadVar__1_1;
#line 42 "demangle.m"
                MR_Integer demangle__CastY_4 = (MR_Integer) demangle__HeadVar__2_2;

#line 42 "demangle.m"
                demangle__succeeded = (demangle__CastY_4 == demangle__CastX_3);
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
            case (MR_Integer) 1:
#line 42 "demangle.m"
              {
#line 42 "demangle.m"
                MR_Integer demangle__CastX_5 = (MR_Integer) demangle__HeadVar__1_1;
#line 42 "demangle.m"
                MR_Integer demangle__CastY_6 = (MR_Integer) demangle__HeadVar__2_2;

#line 42 "demangle.m"
                demangle__succeeded = (demangle__CastY_6 == demangle__CastX_5);
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
            case (MR_Integer) 2:
#line 42 "demangle.m"
              {
#line 42 "demangle.m"
                MR_Integer demangle__CastX_7 = (MR_Integer) demangle__HeadVar__1_1;
#line 42 "demangle.m"
                MR_Integer demangle__CastY_8 = (MR_Integer) demangle__HeadVar__2_2;

#line 42 "demangle.m"
                demangle__succeeded = (demangle__CastY_8 == demangle__CastX_7);
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
            case (MR_Integer) 3:
#line 42 "demangle.m"
              {
#line 42 "demangle.m"
                MR_Integer demangle__CastX_9 = (MR_Integer) demangle__HeadVar__1_1;
#line 42 "demangle.m"
                MR_Integer demangle__CastY_10 = (MR_Integer) demangle__HeadVar__2_2;

#line 42 "demangle.m"
                demangle__succeeded = (demangle__CastY_10 == demangle__CastX_9);
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
              break;
#line 42 "demangle.m"
          }
#line 42 "demangle.m"
          break;
#line 42 "demangle.m"
        case (MR_Integer) 1:
#line 42 "demangle.m"
          {
#line 42 "demangle.m"
            MR_Word demangle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 0)));
#line 42 "demangle.m"
            MR_Integer demangle__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 1)));
#line 42 "demangle.m"
            MR_Integer demangle__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 2)));
#line 42 "demangle.m"
            MR_String demangle__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 3)));
#line 42 "demangle.m"
            MR_Word demangle__V_15_15;
#line 42 "demangle.m"
            MR_Integer demangle__V_16_16;
#line 42 "demangle.m"
            MR_Integer demangle__V_17_17;
#line 42 "demangle.m"
            MR_String demangle__V_18_18;

#line 42 "demangle.m"
            demangle__succeeded = ((MR_tag((MR_Word) demangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 42 "demangle.m"
            if (demangle__succeeded)
#line 42 "demangle.m"
              {
#line 42 "demangle.m"
                demangle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));
#line 42 "demangle.m"
                demangle__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 1)));
#line 42 "demangle.m"
                demangle__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 2)));
#line 42 "demangle.m"
                demangle__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 3)));
#line 1747 "demangle.c"
                {
#line 1749 "demangle.c"
                  demangle__succeeded = demangle____Unify____introduced_pred_type_0_0(demangle__V_11_11, demangle__V_15_15);
                }
#line 42 "demangle.m"
                if (demangle__succeeded)
#line 42 "demangle.m"
                  {
#line 1756 "demangle.c"
                    demangle__succeeded = (demangle__V_12_12 == demangle__V_16_16);
#line 42 "demangle.m"
                    if (demangle__succeeded)
#line 42 "demangle.m"
                      {
#line 1762 "demangle.c"
                        demangle__succeeded = (demangle__V_13_13 == demangle__V_17_17);
#line 42 "demangle.m"
                        if (demangle__succeeded)
#line 1766 "demangle.c"
                          demangle__succeeded = (strcmp(demangle__V_14_14, demangle__V_18_18) == 0);
#line 42 "demangle.m"
                      }
#line 42 "demangle.m"
                  }
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
          }
#line 42 "demangle.m"
          break;
#line 42 "demangle.m"
      }
#line 42 "demangle.m"
    return demangle__succeeded;
#line 42 "demangle.m"
  }
#line 42 "demangle.m"
}

#line 51 "demangle.m"
static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0(
#line 51 "demangle.m"
  MR_Word * demangle__HeadVar__1_1,
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__2_2,
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__3_3)
#line 51 "demangle.m"
{
#line 51 "demangle.m"
  {
#line 51 "demangle.m"
    MR_bool demangle__succeeded;
#line 51 "demangle.m"
    MR_Integer demangle__CastX_12 = (MR_Integer) demangle__HeadVar__2_2;
#line 51 "demangle.m"
    MR_Integer demangle__CastY_13 = (MR_Integer) demangle__HeadVar__3_3;

#line 51 "demangle.m"
    demangle__succeeded = (demangle__CastX_12 == demangle__CastY_13);
#line 51 "demangle.m"
    if (demangle__succeeded)
#line 1811 "demangle.c"
      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
    else
#line 51 "demangle.m"
#line 51 "demangle.m"
      switch (MR_tag((MR_Word) demangle__HeadVar__2_2)) {
#line 51 "demangle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
        case (MR_Integer) 0:
#line 51 "demangle.m"
#line 51 "demangle.m"
          switch (MR_unmkbody(demangle__HeadVar__2_2)) {
#line 51 "demangle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
            case (MR_Integer) 0:
#line 51 "demangle.m"
#line 51 "demangle.m"
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
                case (MR_Integer) 0:
#line 51 "demangle.m"
#line 51 "demangle.m"
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
                    case (MR_Integer) 0:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                    case (MR_Integer) 1:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                    case (MR_Integer) 2:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                  }
#line 51 "demangle.m"
                  break;
#line 51 "demangle.m"
                case (MR_Integer) 1:
#line 1865 "demangle.c"
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
                  break;
#line 51 "demangle.m"
              }
#line 51 "demangle.m"
              break;
#line 51 "demangle.m"
            case (MR_Integer) 1:
#line 51 "demangle.m"
#line 51 "demangle.m"
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
                case (MR_Integer) 0:
#line 51 "demangle.m"
#line 51 "demangle.m"
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
                    case (MR_Integer) 0:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                    case (MR_Integer) 1:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                    case (MR_Integer) 2:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                  }
#line 51 "demangle.m"
                  break;
#line 51 "demangle.m"
                case (MR_Integer) 1:
#line 1911 "demangle.c"
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
                  break;
#line 51 "demangle.m"
              }
#line 51 "demangle.m"
              break;
#line 51 "demangle.m"
            case (MR_Integer) 2:
#line 51 "demangle.m"
#line 51 "demangle.m"
              switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
                case (MR_Integer) 0:
#line 51 "demangle.m"
#line 51 "demangle.m"
                  switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
                    case (MR_Integer) 0:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                    case (MR_Integer) 1:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                    case (MR_Integer) 2:
#line 51 "demangle.m"
                      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
                      break;
#line 51 "demangle.m"
                  }
#line 51 "demangle.m"
                  break;
#line 51 "demangle.m"
                case (MR_Integer) 1:
#line 1957 "demangle.c"
                  *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
                  break;
#line 51 "demangle.m"
              }
#line 51 "demangle.m"
              break;
#line 51 "demangle.m"
          }
#line 51 "demangle.m"
          break;
#line 51 "demangle.m"
        case (MR_Integer) 1:
#line 51 "demangle.m"
          {
#line 51 "demangle.m"
            MR_String demangle__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "demangle.m"
#line 51 "demangle.m"
            switch (MR_tag((MR_Word) demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
              case (MR_Integer) 0:
#line 51 "demangle.m"
#line 51 "demangle.m"
                switch (MR_unmkbody(demangle__HeadVar__3_3)) {
#line 51 "demangle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
                  case (MR_Integer) 0:
#line 1990 "demangle.c"
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
                    break;
#line 51 "demangle.m"
                  case (MR_Integer) 1:
#line 1996 "demangle.c"
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
                    break;
#line 51 "demangle.m"
                  case (MR_Integer) 2:
#line 2002 "demangle.c"
                    *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
                    break;
#line 51 "demangle.m"
                }
#line 51 "demangle.m"
                break;
#line 51 "demangle.m"
              case (MR_Integer) 1:
#line 51 "demangle.m"
                {
#line 51 "demangle.m"
                  MR_String demangle__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 0)));

#line 51 "demangle.m"
                  {
#line 51 "demangle.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(demangle__HeadVar__1_1, demangle__V_15_15, demangle__V_11_11);
                  }
#line 51 "demangle.m"
                }
#line 51 "demangle.m"
                break;
#line 51 "demangle.m"
            }
#line 51 "demangle.m"
          }
#line 51 "demangle.m"
          break;
#line 51 "demangle.m"
      }
#line 51 "demangle.m"
  }
#line 51 "demangle.m"
}

#line 51 "demangle.m"
static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0(
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 51 "demangle.m"
  MR_Word demangle__HeadVar__2_2)
#line 51 "demangle.m"
{
#line 51 "demangle.m"
  {
#line 51 "demangle.m"
    MR_bool demangle__succeeded;
#line 51 "demangle.m"
    MR_Integer demangle__CastX_11 = (MR_Integer) demangle__HeadVar__1_1;
#line 51 "demangle.m"
    MR_Integer demangle__CastY_12 = (MR_Integer) demangle__HeadVar__2_2;

#line 51 "demangle.m"
    demangle__succeeded = (demangle__CastX_11 == demangle__CastY_12);
#line 51 "demangle.m"
    if (demangle__succeeded)
#line 51 "demangle.m"
      demangle__succeeded = MR_TRUE;
#line 51 "demangle.m"
    else
#line 51 "demangle.m"
#line 51 "demangle.m"
      switch (MR_tag((MR_Word) demangle__HeadVar__1_1)) {
#line 51 "demangle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
        case (MR_Integer) 0:
#line 51 "demangle.m"
#line 51 "demangle.m"
          switch (MR_unmkbody(demangle__HeadVar__1_1)) {
#line 51 "demangle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 51 "demangle.m"
            case (MR_Integer) 0:
#line 51 "demangle.m"
              {
#line 51 "demangle.m"
                MR_Integer demangle__CastX_3 = (MR_Integer) demangle__HeadVar__1_1;
#line 51 "demangle.m"
                MR_Integer demangle__CastY_4 = (MR_Integer) demangle__HeadVar__2_2;

#line 51 "demangle.m"
                demangle__succeeded = (demangle__CastY_4 == demangle__CastX_3);
#line 51 "demangle.m"
              }
#line 51 "demangle.m"
              break;
#line 51 "demangle.m"
            case (MR_Integer) 1:
#line 51 "demangle.m"
              {
#line 51 "demangle.m"
                MR_Integer demangle__CastX_5 = (MR_Integer) demangle__HeadVar__1_1;
#line 51 "demangle.m"
                MR_Integer demangle__CastY_6 = (MR_Integer) demangle__HeadVar__2_2;

#line 51 "demangle.m"
                demangle__succeeded = (demangle__CastY_6 == demangle__CastX_5);
#line 51 "demangle.m"
              }
#line 51 "demangle.m"
              break;
#line 51 "demangle.m"
            case (MR_Integer) 2:
#line 51 "demangle.m"
              {
#line 51 "demangle.m"
                MR_Integer demangle__CastX_7 = (MR_Integer) demangle__HeadVar__1_1;
#line 51 "demangle.m"
                MR_Integer demangle__CastY_8 = (MR_Integer) demangle__HeadVar__2_2;

#line 51 "demangle.m"
                demangle__succeeded = (demangle__CastY_8 == demangle__CastX_7);
#line 51 "demangle.m"
              }
#line 51 "demangle.m"
              break;
#line 51 "demangle.m"
          }
#line 51 "demangle.m"
          break;
#line 51 "demangle.m"
        case (MR_Integer) 1:
#line 51 "demangle.m"
          {
#line 51 "demangle.m"
            MR_String demangle__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "demangle.m"
            MR_String demangle__V_10_10;

#line 51 "demangle.m"
            demangle__succeeded = ((MR_tag((MR_Word) demangle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 51 "demangle.m"
            if (demangle__succeeded)
#line 51 "demangle.m"
              {
#line 51 "demangle.m"
                demangle__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));
#line 2143 "demangle.c"
                demangle__succeeded = (strcmp(demangle__V_9_9, demangle__V_10_10) == 0);
#line 51 "demangle.m"
              }
#line 51 "demangle.m"
          }
#line 51 "demangle.m"
          break;
#line 51 "demangle.m"
      }
#line 51 "demangle.m"
    return demangle__succeeded;
#line 51 "demangle.m"
  }
#line 51 "demangle.m"
}

#line 57 "demangle.m"
static void MR_CALL 
demangle____Compare____data_category_0_0(
#line 57 "demangle.m"
  MR_Word * demangle__HeadVar__1_1,
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__2_2,
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__3_3)
#line 57 "demangle.m"
{
#line 57 "demangle.m"
  {
#line 57 "demangle.m"
    MR_bool demangle__succeeded;
#line 57 "demangle.m"
    MR_Integer demangle__Cast_HeadVar1_4 = (MR_Integer) demangle__HeadVar__2_2;
#line 57 "demangle.m"
    MR_Integer demangle__Cast_HeadVar2_5 = (MR_Integer) demangle__HeadVar__3_3;

#line 57 "demangle.m"
    {
#line 57 "demangle.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(demangle__HeadVar__1_1, demangle__Cast_HeadVar1_4, demangle__Cast_HeadVar2_5);
    }
#line 57 "demangle.m"
  }
#line 57 "demangle.m"
}

#line 57 "demangle.m"
static MR_bool MR_CALL 
demangle____Unify____data_category_0_0(
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__2_1,
#line 57 "demangle.m"
  MR_Word demangle__HeadVar__2_2)
#line 57 "demangle.m"
{
#line 2199 "demangle.c"
  {
#line 2201 "demangle.c"
    MR_bool demangle__succeeded = (demangle__HeadVar__2_1 == demangle__HeadVar__2_2);

#line 2204 "demangle.c"
    return demangle__succeeded;
#line 2206 "demangle.c"
  }
#line 57 "demangle.m"
}

#line 899 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
#line 899 "demangle.m"
  MR_Integer * demangle__Int_4,
#line 899 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_8,
#line 899 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_9)
#line 899 "demangle.m"
{
#line 901 "demangle.m"
  {
#line 901 "demangle.m"
    MR_bool demangle__succeeded;
#line 901 "demangle.m"
    MR_Integer demangle__Digit_6;
#line 901 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_10_10;
#line 901 "demangle.m"
    MR_Char demangle__Char_18;
#line 901 "demangle.m"
    MR_Integer demangle__Len_22;
#line 901 "demangle.m"
    MR_Integer demangle__Len1_23;
#line 903 "demangle.m"
    MR_Integer demangle__Rest_7;
#line 903 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_11_11;

#line 918 "demangle.m"
    {
#line 918 "demangle.m"
      mercury__string__length_2_p_0(demangle__STATE_VARIABLE_Str_0_8, &demangle__Len_22);
    }
#line 919 "demangle.m"
    demangle__Len1_23 = (demangle__Len_22 - (MR_Integer) 1);
#line 920 "demangle.m"
    {
#line 920 "demangle.m"
      demangle__succeeded = mercury__string__index_3_p_0(demangle__STATE_VARIABLE_Str_0_8, demangle__Len1_23, &demangle__Char_18);
    }
#line 901 "demangle.m"
    if (demangle__succeeded)
#line 901 "demangle.m"
      {
#line 921 "demangle.m"
        {
#line 921 "demangle.m"
          mercury__string__left_3_p_0(demangle__STATE_VARIABLE_Str_0_8, demangle__Len1_23, &demangle__STATE_VARIABLE_Str_10_10);
        }
#line 771 "demangle.m"
        if ((((MR_Unsigned) (demangle__Char_18 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 771 "demangle.m"
          {
#line 771 "demangle.m"
            demangle__Digit_6 = ((&demangle_vector_common_3[60 + (demangle__Char_18 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
          }
#line 771 "demangle.m"
        else
#line 771 "demangle.m"
          demangle__succeeded = MR_FALSE;
#line 901 "demangle.m"
        if (demangle__succeeded)
#line 901 "demangle.m"
          {
#line 903 "demangle.m"
            {
#line 903 "demangle.m"
              demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Rest_7, demangle__STATE_VARIABLE_Str_10_10, &demangle__STATE_VARIABLE_Str_11_11);
            }
#line 903 "demangle.m"
            if (demangle__succeeded)
#line 904 "demangle.m"
              {
#line 904 "demangle.m"
                MR_Integer demangle__V_12_12;

#line 904 "demangle.m"
                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_11_11;
#line 904 "demangle.m"
                demangle__V_12_12 = (demangle__Rest_7 * (MR_Integer) 10);
#line 904 "demangle.m"
                *demangle__Int_4 = (demangle__V_12_12 + demangle__Digit_6);
#line 904 "demangle.m"
              }
#line 903 "demangle.m"
            else
#line 906 "demangle.m"
              {
#line 906 "demangle.m"
                *demangle__Int_4 = demangle__Digit_6;
#line 906 "demangle.m"
                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_10_10;
#line 906 "demangle.m"
              }
#line 903 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 901 "demangle.m"
          }
#line 901 "demangle.m"
      }
#line 901 "demangle.m"
    return demangle__succeeded;
#line 901 "demangle.m"
  }
#line 899 "demangle.m"
}

#line 892 "demangle.m"
static void MR_CALL 
demangle__format_maybe_module_3_p_0(
#line 892 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 892 "demangle.m"
  MR_String demangle__Name_2,
#line 892 "demangle.m"
  MR_String * demangle__QualifiedName_3)
#line 892 "demangle.m"
{
#line 894 "demangle.m"
  {
#line 894 "demangle.m"
    MR_bool demangle__succeeded;

#line 894 "demangle.m"
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "demangle.m"
      {
#line 895 "demangle.m"
        {
#line 895 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Name_2, demangle__QualifiedName_3);
        }
#line 894 "demangle.m"
      }
#line 894 "demangle.m"
    else
#line 896 "demangle.m"
      {
#line 896 "demangle.m"
        MR_String demangle__Module_10 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 0)));
#line 896 "demangle.m"
        MR_String demangle__V_19_19;
#line 896 "demangle.m"
        MR_Word demangle__V_25_25 = (MR_Word) &demangle_scalar_common_2[1];
#line 896 "demangle.m"
        MR_String demangle__V_27_27;
#line 896 "demangle.m"
        MR_String demangle__V_28_28;

#line 897 "demangle.m"
        {
#line 897 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_25_25, demangle__Name_2, &demangle__V_19_19);
        }
#line 897 "demangle.m"
        {
#line 897 "demangle.m"
          demangle__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_19_19);
        }
#line 897 "demangle.m"
        {
#line 897 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_25_25, demangle__Module_10, &demangle__V_28_28);
        }
#line 897 "demangle.m"
        {
#line 897 "demangle.m"
          *demangle__QualifiedName_3 = mercury__string__f_43_43_2_f_0(demangle__V_28_28, demangle__V_27_27);
        }
#line 896 "demangle.m"
      }
#line 894 "demangle.m"
  }
#line 892 "demangle.m"
}

#line 878 "demangle.m"
static void MR_CALL 
demangle__insert_prefix_3_p_0(
#line 878 "demangle.m"
  MR_String demangle__Prefix_4,
#line 878 "demangle.m"
  MR_String demangle__Name0_5,
#line 878 "demangle.m"
  MR_String * demangle__Name_6)
#line 878 "demangle.m"
{
#line 881 "demangle.m"
  {
#line 881 "demangle.m"
    MR_bool demangle__succeeded;

#line 881 "demangle.m"
    {
#line 881 "demangle.m"
      mercury__string__append_3_p_2(demangle__Prefix_4, demangle__Name0_5, demangle__Name_6);
    }
#line 881 "demangle.m"
  }
#line 878 "demangle.m"
}

#line 843 "demangle.m"
static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
#line 843 "demangle.m"
  MR_Integer demangle__NumBrackets0_6,
#line 843 "demangle.m"
  MR_Integer demangle__Length_7,
#line 843 "demangle.m"
  MR_String demangle__String_8,
#line 843 "demangle.m"
  MR_Integer demangle__Index0_9,
#line 843 "demangle.m"
  MR_Integer * demangle__Index_10)
#line 843 "demangle.m"
{
#line 846 "demangle.m"
  while (MR_TRUE)
#line 846 "demangle.m"
    {
#line 846 "demangle.m"
      /* tailcall optimized into a loop */
#line 846 "demangle.m"
      {
#line 846 "demangle.m"
        MR_bool demangle__succeeded = (demangle__Index0_9 < demangle__Length_7);
#line 846 "demangle.m"
        MR_Char demangle__Char_11;

#line 846 "demangle.m"
        if (demangle__succeeded)
#line 846 "demangle.m"
          {
#line 848 "demangle.m"
            {
#line 848 "demangle.m"
              mercury__string__unsafe_index_3_p_0(demangle__String_8, demangle__Index0_9, &demangle__Char_11);
            }
#line 849 "demangle.m"
            demangle__succeeded = (demangle__Char_11 == (MR_Char) 93);
#line 849 "demangle.m"
            if (demangle__succeeded)
#line 849 "demangle.m"
              demangle__succeeded = (demangle__NumBrackets0_6 == (MR_Integer) 0);
#line 849 "demangle.m"
            if (demangle__succeeded)
#line 850 "demangle.m"
              {
#line 850 "demangle.m"
                *demangle__Index_10 = demangle__Index0_9;
#line 850 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 850 "demangle.m"
              }
#line 849 "demangle.m"
            else
#line 859 "demangle.m"
              {
#line 859 "demangle.m"
                MR_Integer demangle__NumBrackets_12;
#line 859 "demangle.m"
                MR_Integer demangle__V_15_15;

#line 853 "demangle.m"
                demangle__succeeded = (demangle__Char_11 == (MR_Char) 91);
#line 853 "demangle.m"
                if (demangle__succeeded)
#line 854 "demangle.m"
                  {
#line 854 "demangle.m"
                    demangle__NumBrackets_12 = (demangle__NumBrackets0_6 + (MR_Integer) 1);
#line 854 "demangle.m"
                  }
#line 853 "demangle.m"
                else
#line 855 "demangle.m"
                  {
#line 855 "demangle.m"
                    demangle__succeeded = (demangle__Char_11 == (MR_Char) 93);
#line 855 "demangle.m"
                    if (demangle__succeeded)
#line 856 "demangle.m"
                      {
#line 856 "demangle.m"
                        demangle__NumBrackets_12 = (demangle__NumBrackets0_6 - (MR_Integer) 1);
#line 856 "demangle.m"
                      }
#line 855 "demangle.m"
                    else
#line 858 "demangle.m"
                      demangle__NumBrackets_12 = demangle__NumBrackets0_6;
#line 855 "demangle.m"
                  }
#line 861 "demangle.m"
                demangle__V_15_15 = (demangle__Index0_9 + (MR_Integer) 1);
#line 860 "demangle.m"
                /* direct tailcall eliminated */
#line 860 "demangle.m"
                {
#line 860 "demangle.m"
                  MR_Integer demangle__NumBrackets0__tmp_copy_6 = demangle__NumBrackets_12;
#line 860 "demangle.m"
                  MR_Integer demangle__Index0__tmp_copy_9 = demangle__V_15_15;

#line 860 "demangle.m"
                  demangle__Index0_9 = demangle__Index0__tmp_copy_9;
#line 860 "demangle.m"
                  demangle__NumBrackets0_6 = demangle__NumBrackets0__tmp_copy_6;
#line 860 "demangle.m"
                }
#line 860 "demangle.m"
                continue;
#line 859 "demangle.m"
              }
#line 846 "demangle.m"
          }
#line 846 "demangle.m"
        return demangle__succeeded;
#line 846 "demangle.m"
      }
#line 846 "demangle.m"
      break;
#line 846 "demangle.m"
    }
#line 843 "demangle.m"
}

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg)
#line 789 "demangle.m"
{
#line 789 "demangle.m"
  {
#line 789 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 789 "demangle.m"
    MR_builtin_longjmp((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0, 1);
#line 789 "demangle.m"
  }
#line 789 "demangle.m"
}

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg)
#line 789 "demangle.m"
{
#line 789 "demangle.m"
  {
#line 789 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 789 "demangle.m"
    (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9 = ((MR_String) (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9);
#line 789 "demangle.m"
    {
#line 789 "demangle.m"
      demangle__remove_maybe_module_prefix_4_p_0_2(demangle__env_ptr);
    }
#line 789 "demangle.m"
  }
#line 789 "demangle.m"
}

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg)
#line 789 "demangle.m"
{
#line 789 "demangle.m"
  {
#line 789 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 790 "demangle.m"
    {
#line 790 "demangle.m"
      (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9);
    }
#line 790 "demangle.m"
    if ((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 790 "demangle.m"
      {
#line 790 "demangle.m"
        demangle__remove_maybe_module_prefix_4_p_0_1(demangle__env_ptr);
      }
#line 789 "demangle.m"
  }
#line 789 "demangle.m"
}

#line 789 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
#line 789 "demangle.m"
  void * demangle__env_ptr_arg)
#line 789 "demangle.m"
{
#line 789 "demangle.m"
  {
#line 789 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 789 "demangle.m"
    if (MR_builtin_setjmp((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0) == 0)
#line 789 "demangle.m"
      {
#line 789 "demangle.m"
        {
#line 789 "demangle.m"
          {
#line 789 "demangle.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9, (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__remove_maybe_module_prefix_4_p_0_3, demangle__env_ptr);
          }
#line 789 "demangle.m"
        }
#line 789 "demangle.m"
        (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_FALSE;
#line 789 "demangle.m"
      }
#line 789 "demangle.m"
    else
#line 789 "demangle.m"
      (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_TRUE;
#line 789 "demangle.m"
  }
#line 789 "demangle.m"
}

#line 784 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
#line 784 "demangle.m"
  MR_Word * demangle__MaybeModule_5,
#line 784 "demangle.m"
  MR_Word demangle__StringsToStopAt_6,
#line 784 "demangle.m"
  MR_String demangle__String0_7,
#line 784 "demangle.m"
  MR_String * demangle__String_8)
#line 784 "demangle.m"
{
#line 784 "demangle.m"
  {
#line 784 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s demangle__env;

#line 784 "demangle.m"
    (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6 = demangle__StringsToStopAt_6;
#line 784 "demangle.m"
    (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7 = demangle__String0_7;
#line 789 "demangle.m"
    {
#line 789 "demangle.m"
      demangle__remove_maybe_module_prefix_4_p_0_4(&demangle__env);
    }
#line 788 "demangle.m"
    if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 792 "demangle.m"
      {
#line 792 "demangle.m"
        *demangle__MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 793 "demangle.m"
        *demangle__String_8 = (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
#line 792 "demangle.m"
      }
#line 788 "demangle.m"
    else
#line 794 "demangle.m"
      {
#line 794 "demangle.m"
        MR_Integer demangle__Index_10;

#line 795 "demangle.m"
        {
#line 795 "demangle.m"
          (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (MR_String) "__", &demangle__Index_10);
        }
#line 794 "demangle.m"
        if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 797 "demangle.m"
          {
#line 797 "demangle.m"
            MR_String demangle__Module_11;
#line 797 "demangle.m"
            MR_Integer demangle__Len_12;
#line 797 "demangle.m"
            MR_Integer demangle__Index2_13;
#line 797 "demangle.m"
            MR_String demangle__String1_14;
#line 801 "demangle.m"
            MR_String demangle__SubModule_15;
#line 801 "demangle.m"
            MR_String demangle__String2_16;
#line 802 "demangle.m"
            MR_Word demangle__V_20_20;

#line 797 "demangle.m"
            {
#line 797 "demangle.m"
              mercury__string__left_3_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, demangle__Index_10, &demangle__Module_11);
            }
#line 798 "demangle.m"
            {
#line 798 "demangle.m"
              mercury__string__length_2_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, &demangle__Len_12);
            }
#line 799 "demangle.m"
            demangle__Index2_13 = (demangle__Index_10 + (MR_Integer) 2);
#line 800 "demangle.m"
            {
#line 800 "demangle.m"
              mercury__string__between_4_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, demangle__Index2_13, demangle__Len_12, &demangle__String1_14);
            }
#line 802 "demangle.m"
            {
#line 802 "demangle.m"
              demangle__remove_maybe_module_prefix_4_p_0(&demangle__V_20_20, (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__String1_14, &demangle__String2_16);
            }
#line 802 "demangle.m"
            (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) demangle__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 802 "demangle.m"
            if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 802 "demangle.m"
              {
#line 802 "demangle.m"
                demangle__SubModule_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__V_20_20, (MR_Integer) 0)));
#line 805 "demangle.m"
                {
#line 805 "demangle.m"
                  MR_String demangle__QualifiedModule_17;
#line 805 "demangle.m"
                  MR_Word demangle__V_21_21;
#line 805 "demangle.m"
                  MR_Word demangle__V_22_22;
#line 805 "demangle.m"
                  MR_Word demangle__V_24_24;

#line 805 "demangle.m"
                  {
#line 805 "demangle.m"
                    demangle__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_24_24, 0) = ((MR_Box) (demangle__SubModule_15));
#line 805 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 805 "demangle.m"
                  }
#line 805 "demangle.m"
                  {
#line 805 "demangle.m"
                    demangle__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_22_22, 0) = ((MR_Box) ((MR_String) "."));
#line 805 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_22_22, 1) = ((MR_Box) (demangle__V_24_24));
#line 805 "demangle.m"
                  }
#line 805 "demangle.m"
                  {
#line 805 "demangle.m"
                    demangle__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_21_21, 0) = ((MR_Box) (demangle__Module_11));
#line 805 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_21_21, 1) = ((MR_Box) (demangle__V_22_22));
#line 805 "demangle.m"
                  }
#line 805 "demangle.m"
                  {
#line 805 "demangle.m"
                    mercury__string__append_list_2_p_0(demangle__V_21_21, &demangle__QualifiedModule_17);
                  }
#line 806 "demangle.m"
                  {
#line 806 "demangle.m"
                    MR_Word base;
#line 806 "demangle.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "demangle.m"
                    *demangle__MaybeModule_5 = base;
#line 806 "demangle.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__QualifiedModule_17));
#line 806 "demangle.m"
                  }
#line 807 "demangle.m"
                  *demangle__String_8 = demangle__String2_16;
#line 805 "demangle.m"
                }
#line 802 "demangle.m"
              }
#line 802 "demangle.m"
            else
#line 809 "demangle.m"
              {
#line 809 "demangle.m"
                {
#line 809 "demangle.m"
                  MR_Word base;
#line 809 "demangle.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 809 "demangle.m"
                  *demangle__MaybeModule_5 = base;
#line 809 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__Module_11));
#line 809 "demangle.m"
                }
#line 810 "demangle.m"
                *demangle__String_8 = demangle__String1_14;
#line 809 "demangle.m"
              }
#line 797 "demangle.m"
          }
#line 794 "demangle.m"
        else
#line 813 "demangle.m"
          {
#line 813 "demangle.m"
            *demangle__String_8 = (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
#line 814 "demangle.m"
            *demangle__MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 813 "demangle.m"
          }
#line 794 "demangle.m"
      }
#line 784 "demangle.m"
  }
#line 784 "demangle.m"
}

#line 753 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
#line 753 "demangle.m"
  MR_Integer demangle__Int0_5,
#line 753 "demangle.m"
  MR_Integer * demangle__Int_6,
#line 753 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_10,
#line 753 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_11)
#line 753 "demangle.m"
{
#line 756 "demangle.m"
  while (MR_TRUE)
#line 756 "demangle.m"
    {
#line 756 "demangle.m"
      /* tailcall optimized into a loop */
#line 756 "demangle.m"
      {
#line 756 "demangle.m"
        MR_bool demangle__succeeded;
#line 756 "demangle.m"
        MR_Integer demangle__Next_8;
#line 756 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_12_12;
#line 765 "demangle.m"
        MR_Char demangle__Char_19;

#line 766 "demangle.m"
        {
#line 766 "demangle.m"
          demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_0_10, &demangle__Char_19, &demangle__STATE_VARIABLE_Str_12_12);
        }
#line 765 "demangle.m"
        if (demangle__succeeded)
#line 771 "demangle.m"
          {
#line 771 "demangle.m"
            if ((((MR_Unsigned) (demangle__Char_19 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 771 "demangle.m"
              {
#line 771 "demangle.m"
                demangle__Next_8 = ((&demangle_vector_common_3[50 + (demangle__Char_19 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
              }
#line 771 "demangle.m"
            else
#line 771 "demangle.m"
              demangle__succeeded = MR_FALSE;
#line 771 "demangle.m"
          }
#line 756 "demangle.m"
        if (demangle__succeeded)
#line 757 "demangle.m"
          {
#line 757 "demangle.m"
            MR_Integer demangle__Int1_9;
#line 757 "demangle.m"
            MR_Integer demangle__V_13_13 = (demangle__Int0_5 * (MR_Integer) 10);

#line 757 "demangle.m"
            demangle__Int1_9 = (demangle__V_13_13 + demangle__Next_8);
#line 758 "demangle.m"
            /* direct tailcall eliminated */
#line 758 "demangle.m"
            {
#line 758 "demangle.m"
              MR_Integer demangle__Int0__tmp_copy_5 = demangle__Int1_9;
#line 758 "demangle.m"
              MR_String demangle__STATE_VARIABLE_Str_0__tmp_copy_10 = demangle__STATE_VARIABLE_Str_12_12;

#line 758 "demangle.m"
              demangle__STATE_VARIABLE_Str_0_10 = demangle__STATE_VARIABLE_Str_0__tmp_copy_10;
#line 758 "demangle.m"
              demangle__Int0_5 = demangle__Int0__tmp_copy_5;
#line 758 "demangle.m"
            }
#line 758 "demangle.m"
            continue;
#line 757 "demangle.m"
          }
#line 756 "demangle.m"
        else
#line 760 "demangle.m"
          {
#line 760 "demangle.m"
            *demangle__Int_6 = demangle__Int0_5;
#line 760 "demangle.m"
            *demangle__STATE_VARIABLE_Str_11 = demangle__STATE_VARIABLE_Str_0_10;
#line 760 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 760 "demangle.m"
          }
#line 756 "demangle.m"
        return demangle__succeeded;
#line 756 "demangle.m"
      }
#line 756 "demangle.m"
      break;
#line 756 "demangle.m"
    }
#line 753 "demangle.m"
}

#line 733 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
#line 733 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_6,
#line 733 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_7)
#line 733 "demangle.m"
{
#line 735 "demangle.m"
  {
#line 735 "demangle.m"
    MR_bool demangle__succeeded;
#line 735 "demangle.m"
    MR_Integer demangle__I_4;
#line 735 "demangle.m"
    MR_Char demangle__C_5;
#line 735 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_8_8;
#line 735 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_11_11;
#line 735 "demangle.m"
    MR_Integer demangle__Digit_17;
#line 735 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_9_18;
#line 735 "demangle.m"
    MR_Char demangle__Char_23;
#line 737 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_10_10;
#line 737 "demangle.m"
    MR_String demangle__V_9_9;

#line 766 "demangle.m"
    {
#line 766 "demangle.m"
      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_0_6, &demangle__Char_23, &demangle__STATE_VARIABLE_Str_9_18);
    }
#line 735 "demangle.m"
    if (demangle__succeeded)
#line 735 "demangle.m"
      {
#line 771 "demangle.m"
        if ((((MR_Unsigned) (demangle__Char_23 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 771 "demangle.m"
          {
#line 771 "demangle.m"
            demangle__Digit_17 = ((&demangle_vector_common_3[40 + (demangle__Char_23 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
          }
#line 771 "demangle.m"
        else
#line 771 "demangle.m"
          demangle__succeeded = MR_FALSE;
#line 735 "demangle.m"
        if (demangle__succeeded)
#line 735 "demangle.m"
          {
#line 751 "demangle.m"
            {
#line 751 "demangle.m"
              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_17, &demangle__I_4, demangle__STATE_VARIABLE_Str_9_18, &demangle__STATE_VARIABLE_Str_8_8);
            }
#line 735 "demangle.m"
            if (demangle__succeeded)
#line 735 "demangle.m"
              {
#line 737 "demangle.m"
                demangle__V_9_9 = (MR_String) "_";
#line 737 "demangle.m"
                {
#line 737 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_9_9, demangle__STATE_VARIABLE_Str_8_8, &demangle__STATE_VARIABLE_Str_10_10);
                }
#line 737 "demangle.m"
                if (demangle__succeeded)
#line 738 "demangle.m"
                  {
#line 738 "demangle.m"
                    demangle__succeeded = demangle__fix_mangled_ascii_chars_2_p_0(demangle__STATE_VARIABLE_Str_10_10, &demangle__STATE_VARIABLE_Str_11_11);
                  }
#line 737 "demangle.m"
                else
#line 737 "demangle.m"
                  {
#line 737 "demangle.m"
                    demangle__STATE_VARIABLE_Str_11_11 = demangle__STATE_VARIABLE_Str_8_8;
#line 737 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 737 "demangle.m"
                  }
#line 735 "demangle.m"
                if (demangle__succeeded)
#line 735 "demangle.m"
                  {
#line 742 "demangle.m"
                    {
#line 742 "demangle.m"
                      demangle__succeeded = mercury__char__to_int_2_p_2(&demangle__C_5, demangle__I_4);
                    }
#line 735 "demangle.m"
                    if (demangle__succeeded)
#line 735 "demangle.m"
                      {
#line 886 "demangle.m"
                        {
#line 886 "demangle.m"
                          mercury__string__first_char_3_p_4(demangle__STATE_VARIABLE_Str_7, demangle__C_5, demangle__STATE_VARIABLE_Str_11_11);
                        }
#line 886 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 735 "demangle.m"
                      }
#line 735 "demangle.m"
                  }
#line 735 "demangle.m"
              }
#line 735 "demangle.m"
          }
#line 735 "demangle.m"
      }
#line 735 "demangle.m"
    return demangle__succeeded;
#line 735 "demangle.m"
  }
#line 733 "demangle.m"
}

#line 690 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
#line 690 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_4,
#line 690 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_5)
#line 690 "demangle.m"
{
#line 693 "demangle.m"
  {
#line 693 "demangle.m"
    MR_bool demangle__succeeded;
#line 693 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_7_7;

#line 693 "demangle.m"
    {
#line 693 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f__", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_7_7);
    }
#line 693 "demangle.m"
    if (demangle__succeeded)
#line 694 "demangle.m"
      {
#line 881 "demangle.m"
        {
#line 881 "demangle.m"
          mercury__string__append_3_p_2((MR_String) "f_", demangle__STATE_VARIABLE_Str_7_7, demangle__STATE_VARIABLE_Str_5);
        }
#line 694 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 694 "demangle.m"
      }
#line 693 "demangle.m"
    else
#line 695 "demangle.m"
      {
#line 695 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_11_11;

#line 695 "demangle.m"
        {
#line 695 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_not_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_11_11);
        }
#line 695 "demangle.m"
        if (demangle__succeeded)
#line 696 "demangle.m"
          {
#line 881 "demangle.m"
            {
#line 881 "demangle.m"
              mercury__string__append_3_p_2((MR_String) "\\=", demangle__STATE_VARIABLE_Str_11_11, demangle__STATE_VARIABLE_Str_5);
            }
#line 696 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 696 "demangle.m"
          }
#line 695 "demangle.m"
        else
#line 697 "demangle.m"
          {
#line 697 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_15_15;

#line 697 "demangle.m"
            {
#line 697 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_or_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_15_15);
            }
#line 697 "demangle.m"
            if (demangle__succeeded)
#line 698 "demangle.m"
              {
#line 881 "demangle.m"
                {
#line 881 "demangle.m"
                  mercury__string__append_3_p_2((MR_String) ">=", demangle__STATE_VARIABLE_Str_15_15, demangle__STATE_VARIABLE_Str_5);
                }
#line 698 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 698 "demangle.m"
              }
#line 697 "demangle.m"
            else
#line 699 "demangle.m"
              {
#line 699 "demangle.m"
                MR_String demangle__STATE_VARIABLE_Str_19_19;

#line 699 "demangle.m"
                {
#line 699 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_or_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_19_19);
                }
#line 699 "demangle.m"
                if (demangle__succeeded)
#line 700 "demangle.m"
                  {
#line 881 "demangle.m"
                    {
#line 881 "demangle.m"
                      mercury__string__append_3_p_2((MR_String) "=<", demangle__STATE_VARIABLE_Str_19_19, demangle__STATE_VARIABLE_Str_5);
                    }
#line 700 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 700 "demangle.m"
                  }
#line 699 "demangle.m"
                else
#line 701 "demangle.m"
                  {
#line 701 "demangle.m"
                    MR_String demangle__STATE_VARIABLE_Str_23_23;

#line 701 "demangle.m"
                    {
#line 701 "demangle.m"
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_equal", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_23_23);
                    }
#line 701 "demangle.m"
                    if (demangle__succeeded)
#line 702 "demangle.m"
                      {
#line 881 "demangle.m"
                        {
#line 881 "demangle.m"
                          mercury__string__append_3_p_2((MR_String) "=", demangle__STATE_VARIABLE_Str_23_23, demangle__STATE_VARIABLE_Str_5);
                        }
#line 702 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 702 "demangle.m"
                      }
#line 701 "demangle.m"
                    else
#line 703 "demangle.m"
                      {
#line 703 "demangle.m"
                        MR_String demangle__STATE_VARIABLE_Str_27_27;

#line 703 "demangle.m"
                        {
#line 703 "demangle.m"
                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_than", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_27_27);
                        }
#line 703 "demangle.m"
                        if (demangle__succeeded)
#line 704 "demangle.m"
                          {
#line 881 "demangle.m"
                            {
#line 881 "demangle.m"
                              mercury__string__append_3_p_2((MR_String) "<", demangle__STATE_VARIABLE_Str_27_27, demangle__STATE_VARIABLE_Str_5);
                            }
#line 704 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 704 "demangle.m"
                          }
#line 703 "demangle.m"
                        else
#line 705 "demangle.m"
                          {
#line 705 "demangle.m"
                            MR_String demangle__STATE_VARIABLE_Str_31_31;

#line 705 "demangle.m"
                            {
#line 705 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_than", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_31_31);
                            }
#line 705 "demangle.m"
                            if (demangle__succeeded)
#line 706 "demangle.m"
                              {
#line 881 "demangle.m"
                                {
#line 881 "demangle.m"
                                  mercury__string__append_3_p_2((MR_String) ">", demangle__STATE_VARIABLE_Str_31_31, demangle__STATE_VARIABLE_Str_5);
                                }
#line 706 "demangle.m"
                                demangle__succeeded = MR_TRUE;
#line 706 "demangle.m"
                              }
#line 705 "demangle.m"
                            else
#line 707 "demangle.m"
                              {
#line 707 "demangle.m"
                                MR_String demangle__STATE_VARIABLE_Str_35_35;

#line 707 "demangle.m"
                                {
#line 707 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_minus", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_35_35);
                                }
#line 707 "demangle.m"
                                if (demangle__succeeded)
#line 708 "demangle.m"
                                  {
#line 708 "demangle.m"
                                    {
#line 708 "demangle.m"
                                      demangle__insert_prefix_3_p_0((MR_String) "-", demangle__STATE_VARIABLE_Str_35_35, demangle__STATE_VARIABLE_Str_5);
                                    }
#line 708 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 708 "demangle.m"
                                  }
#line 707 "demangle.m"
                                else
#line 709 "demangle.m"
                                  {
#line 709 "demangle.m"
                                    MR_String demangle__STATE_VARIABLE_Str_39_39;

#line 709 "demangle.m"
                                    {
#line 709 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_plus", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_39_39);
                                    }
#line 709 "demangle.m"
                                    if (demangle__succeeded)
#line 710 "demangle.m"
                                      {
#line 710 "demangle.m"
                                        {
#line 710 "demangle.m"
                                          demangle__insert_prefix_3_p_0((MR_String) "+", demangle__STATE_VARIABLE_Str_39_39, demangle__STATE_VARIABLE_Str_5);
                                        }
#line 710 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 710 "demangle.m"
                                      }
#line 709 "demangle.m"
                                    else
#line 711 "demangle.m"
                                      {
#line 711 "demangle.m"
                                        MR_String demangle__STATE_VARIABLE_Str_43_43;

#line 711 "demangle.m"
                                        {
#line 711 "demangle.m"
                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_times", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_43_43);
                                        }
#line 711 "demangle.m"
                                        if (demangle__succeeded)
#line 712 "demangle.m"
                                          {
#line 712 "demangle.m"
                                            {
#line 712 "demangle.m"
                                              demangle__insert_prefix_3_p_0((MR_String) "*", demangle__STATE_VARIABLE_Str_43_43, demangle__STATE_VARIABLE_Str_5);
                                            }
#line 712 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 712 "demangle.m"
                                          }
#line 711 "demangle.m"
                                        else
#line 713 "demangle.m"
                                          {
#line 713 "demangle.m"
                                            MR_String demangle__STATE_VARIABLE_Str_47_47;

#line 713 "demangle.m"
                                            {
#line 713 "demangle.m"
                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_slash", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_47_47);
                                            }
#line 713 "demangle.m"
                                            if (demangle__succeeded)
#line 714 "demangle.m"
                                              {
#line 714 "demangle.m"
                                                {
#line 714 "demangle.m"
                                                  demangle__insert_prefix_3_p_0((MR_String) "/", demangle__STATE_VARIABLE_Str_47_47, demangle__STATE_VARIABLE_Str_5);
                                                }
#line 714 "demangle.m"
                                                demangle__succeeded = MR_TRUE;
#line 714 "demangle.m"
                                              }
#line 713 "demangle.m"
                                            else
#line 715 "demangle.m"
                                              {
#line 715 "demangle.m"
                                                MR_String demangle__STATE_VARIABLE_Str_51_51;

#line 715 "demangle.m"
                                                {
#line 715 "demangle.m"
                                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_comma", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_51_51);
                                                }
#line 715 "demangle.m"
                                                if (demangle__succeeded)
#line 716 "demangle.m"
                                                  {
#line 716 "demangle.m"
                                                    {
#line 716 "demangle.m"
                                                      demangle__insert_prefix_3_p_0((MR_String) ",", demangle__STATE_VARIABLE_Str_51_51, demangle__STATE_VARIABLE_Str_5);
                                                    }
#line 716 "demangle.m"
                                                    demangle__succeeded = MR_TRUE;
#line 716 "demangle.m"
                                                  }
#line 715 "demangle.m"
                                                else
#line 717 "demangle.m"
                                                  {
#line 717 "demangle.m"
                                                    MR_String demangle__STATE_VARIABLE_Str_55_55;

#line 717 "demangle.m"
                                                    {
#line 717 "demangle.m"
                                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_semicolon", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_55_55);
                                                    }
#line 717 "demangle.m"
                                                    if (demangle__succeeded)
#line 718 "demangle.m"
                                                      {
#line 718 "demangle.m"
                                                        {
#line 718 "demangle.m"
                                                          demangle__insert_prefix_3_p_0((MR_String) ";", demangle__STATE_VARIABLE_Str_55_55, demangle__STATE_VARIABLE_Str_5);
                                                        }
#line 718 "demangle.m"
                                                        demangle__succeeded = MR_TRUE;
#line 718 "demangle.m"
                                                      }
#line 717 "demangle.m"
                                                    else
#line 719 "demangle.m"
                                                      {
#line 719 "demangle.m"
                                                        MR_String demangle__STATE_VARIABLE_Str_59_59;

#line 719 "demangle.m"
                                                        {
#line 719 "demangle.m"
                                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cut", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_59_59);
                                                        }
#line 719 "demangle.m"
                                                        if (demangle__succeeded)
#line 720 "demangle.m"
                                                          {
#line 720 "demangle.m"
                                                            {
#line 720 "demangle.m"
                                                              demangle__insert_prefix_3_p_0((MR_String) "!", demangle__STATE_VARIABLE_Str_59_59, demangle__STATE_VARIABLE_Str_5);
                                                            }
#line 720 "demangle.m"
                                                            demangle__succeeded = MR_TRUE;
#line 720 "demangle.m"
                                                          }
#line 719 "demangle.m"
                                                        else
#line 721 "demangle.m"
                                                          {
#line 721 "demangle.m"
                                                            MR_String demangle__STATE_VARIABLE_Str_63_63;

#line 721 "demangle.m"
                                                            {
#line 721 "demangle.m"
                                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_tuple", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_63_63);
                                                            }
#line 721 "demangle.m"
                                                            if (demangle__succeeded)
#line 722 "demangle.m"
                                                              {
#line 722 "demangle.m"
                                                                {
#line 722 "demangle.m"
                                                                  demangle__insert_prefix_3_p_0((MR_String) "{}", demangle__STATE_VARIABLE_Str_63_63, demangle__STATE_VARIABLE_Str_5);
                                                                }
#line 722 "demangle.m"
                                                                demangle__succeeded = MR_TRUE;
#line 722 "demangle.m"
                                                              }
#line 721 "demangle.m"
                                                            else
#line 723 "demangle.m"
                                                              {
#line 723 "demangle.m"
                                                                MR_String demangle__STATE_VARIABLE_Str_67_67;

#line 723 "demangle.m"
                                                                {
#line 723 "demangle.m"
                                                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cons", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_67_67);
                                                                }
#line 723 "demangle.m"
                                                                if (demangle__succeeded)
#line 724 "demangle.m"
                                                                  {
#line 724 "demangle.m"
                                                                    {
#line 724 "demangle.m"
                                                                      demangle__insert_prefix_3_p_0((MR_String) "[|]", demangle__STATE_VARIABLE_Str_67_67, demangle__STATE_VARIABLE_Str_5);
                                                                    }
#line 724 "demangle.m"
                                                                    demangle__succeeded = MR_TRUE;
#line 724 "demangle.m"
                                                                  }
#line 723 "demangle.m"
                                                                else
#line 725 "demangle.m"
                                                                  {
#line 725 "demangle.m"
                                                                    MR_String demangle__STATE_VARIABLE_Str_71_71;

#line 725 "demangle.m"
                                                                    {
#line 725 "demangle.m"
                                                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_nil", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_71_71);
                                                                    }
#line 725 "demangle.m"
                                                                    if (demangle__succeeded)
#line 726 "demangle.m"
                                                                      {
#line 726 "demangle.m"
                                                                        {
#line 726 "demangle.m"
                                                                          demangle__insert_prefix_3_p_0((MR_String) "[]", demangle__STATE_VARIABLE_Str_71_71, demangle__STATE_VARIABLE_Str_5);
                                                                        }
#line 726 "demangle.m"
                                                                        demangle__succeeded = MR_TRUE;
#line 726 "demangle.m"
                                                                      }
#line 725 "demangle.m"
                                                                    else
#line 727 "demangle.m"
                                                                      {
#line 727 "demangle.m"
                                                                        MR_String demangle__STATE_VARIABLE_Str_75_75;

#line 727 "demangle.m"
                                                                        {
#line 727 "demangle.m"
                                                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_75_75);
                                                                        }
#line 727 "demangle.m"
                                                                        if (demangle__succeeded)
#line 728 "demangle.m"
                                                                          {
#line 728 "demangle.m"
                                                                            demangle__succeeded = demangle__fix_mangled_ascii_chars_2_p_0(demangle__STATE_VARIABLE_Str_75_75, demangle__STATE_VARIABLE_Str_5);
                                                                          }
#line 727 "demangle.m"
                                                                        else
#line 727 "demangle.m"
                                                                          {
#line 727 "demangle.m"
                                                                            *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_0_4;
#line 727 "demangle.m"
                                                                            demangle__succeeded = MR_TRUE;
#line 727 "demangle.m"
                                                                          }
#line 727 "demangle.m"
                                                                      }
#line 725 "demangle.m"
                                                                  }
#line 723 "demangle.m"
                                                              }
#line 721 "demangle.m"
                                                          }
#line 719 "demangle.m"
                                                      }
#line 717 "demangle.m"
                                                  }
#line 715 "demangle.m"
                                              }
#line 713 "demangle.m"
                                          }
#line 711 "demangle.m"
                                      }
#line 709 "demangle.m"
                                  }
#line 707 "demangle.m"
                              }
#line 705 "demangle.m"
                          }
#line 703 "demangle.m"
                      }
#line 701 "demangle.m"
                  }
#line 699 "demangle.m"
              }
#line 697 "demangle.m"
          }
#line 695 "demangle.m"
      }
#line 693 "demangle.m"
    return demangle__succeeded;
#line 693 "demangle.m"
  }
#line 690 "demangle.m"
}

#line 659 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
#line 659 "demangle.m"
  MR_Integer demangle__Num_5,
#line 659 "demangle.m"
  MR_String * demangle__FormattedArgs_6,
#line 659 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_13,
#line 659 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_14)
#line 659 "demangle.m"
{
#line 662 "demangle.m"
  {
#line 662 "demangle.m"
    MR_bool demangle__succeeded;
#line 662 "demangle.m"
    MR_String demangle__TypeName_8;
#line 662 "demangle.m"
    MR_Integer demangle__TypeArity_9;
#line 662 "demangle.m"
    MR_String demangle__Sep_10;
#line 662 "demangle.m"
    MR_String demangle__Rest_12;
#line 662 "demangle.m"
    MR_Word demangle__V_15_15;
#line 662 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_17_17;
#line 662 "demangle.m"
    MR_String demangle__V_20_20;
#line 662 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_21_21;
#line 662 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_22_22;
#line 662 "demangle.m"
    MR_String demangle__V_23_23;
#line 662 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_24_24;
#line 662 "demangle.m"
    MR_String demangle__V_38_38;
#line 662 "demangle.m"
    MR_Word demangle__V_39_39;
#line 662 "demangle.m"
    MR_Word demangle__V_40_40;
#line 662 "demangle.m"
    MR_Word demangle__V_41_41;
#line 662 "demangle.m"
    MR_Word demangle__V_42_42;
#line 662 "demangle.m"
    MR_Word demangle__V_43_43;
#line 662 "demangle.m"
    MR_Word demangle__V_44_44;
#line 662 "demangle.m"
    MR_String demangle__V_45_45;
#line 662 "demangle.m"
    MR_String demangle__V_52_52;
#line 662 "demangle.m"
    MR_String demangle__V_53_53;
#line 662 "demangle.m"
    MR_String demangle__V_60_60;
#line 662 "demangle.m"
    MR_String demangle__V_61_61;
#line 662 "demangle.m"
    MR_String demangle__V_62_62;
#line 662 "demangle.m"
    MR_String demangle__V_63_63;
#line 662 "demangle.m"
    MR_Integer demangle__Digit_74;
#line 662 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_9_75;
#line 662 "demangle.m"
    MR_Char demangle__Char_80;
#line 668 "demangle.m"
    MR_Integer demangle__V_25_25;

#line 663 "demangle.m"
    {
#line 663 "demangle.m"
      demangle__remove_maybe_module_prefix_4_p_0(&demangle__V_15_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]), demangle__STATE_VARIABLE_Str_0_13, &demangle__STATE_VARIABLE_Str_17_17);
    }
#line 663 "demangle.m"
    demangle__succeeded = ((MR_tag((MR_Word) demangle__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 663 "demangle.m"
    if (demangle__succeeded)
#line 663 "demangle.m"
      {
#line 663 "demangle.m"
        demangle__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__V_15_15, (MR_Integer) 0)));
#line 664 "demangle.m"
        demangle__succeeded = (strcmp(demangle__TypeName_8, (MR_String) "") == 0);
#line 664 "demangle.m"
        demangle__succeeded = !(demangle__succeeded);
#line 662 "demangle.m"
        if (demangle__succeeded)
#line 662 "demangle.m"
          {
#line 665 "demangle.m"
            demangle__V_20_20 = (MR_String) "arity";
#line 665 "demangle.m"
            {
#line 665 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_20_20, demangle__STATE_VARIABLE_Str_17_17, &demangle__STATE_VARIABLE_Str_21_21);
            }
#line 662 "demangle.m"
            if (demangle__succeeded)
#line 662 "demangle.m"
              {
#line 766 "demangle.m"
                {
#line 766 "demangle.m"
                  demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_21_21, &demangle__Char_80, &demangle__STATE_VARIABLE_Str_9_75);
                }
#line 662 "demangle.m"
                if (demangle__succeeded)
#line 662 "demangle.m"
                  {
#line 771 "demangle.m"
                    if ((((MR_Unsigned) (demangle__Char_80 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 771 "demangle.m"
                      {
#line 771 "demangle.m"
                        demangle__Digit_74 = ((&demangle_vector_common_3[30 + (demangle__Char_80 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
                      }
#line 771 "demangle.m"
                    else
#line 771 "demangle.m"
                      demangle__succeeded = MR_FALSE;
#line 662 "demangle.m"
                    if (demangle__succeeded)
#line 662 "demangle.m"
                      {
#line 751 "demangle.m"
                        {
#line 751 "demangle.m"
                          demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_74, &demangle__TypeArity_9, demangle__STATE_VARIABLE_Str_9_75, &demangle__STATE_VARIABLE_Str_22_22);
                        }
#line 662 "demangle.m"
                        if (demangle__succeeded)
#line 662 "demangle.m"
                          {
#line 667 "demangle.m"
                            demangle__V_23_23 = (MR_String) "__";
#line 667 "demangle.m"
                            {
#line 667 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_23_23, demangle__STATE_VARIABLE_Str_22_22, &demangle__STATE_VARIABLE_Str_24_24);
                            }
#line 662 "demangle.m"
                            if (demangle__succeeded)
#line 662 "demangle.m"
                              {
#line 668 "demangle.m"
                                demangle__V_25_25 = (MR_Integer) 1;
#line 668 "demangle.m"
                                demangle__succeeded = (demangle__Num_5 > demangle__V_25_25);
#line 668 "demangle.m"
                                if (demangle__succeeded)
#line 669 "demangle.m"
                                  {
#line 669 "demangle.m"
                                    MR_Integer demangle__Num1_11;

#line 669 "demangle.m"
                                    demangle__Sep_10 = (MR_String) ", ";
#line 670 "demangle.m"
                                    demangle__Num1_11 = (demangle__Num_5 - (MR_Integer) 1);
#line 671 "demangle.m"
                                    {
#line 671 "demangle.m"
                                      demangle__succeeded = demangle__demangle_class_args_4_p_0(demangle__Num1_11, &demangle__Rest_12, demangle__STATE_VARIABLE_Str_24_24, demangle__STATE_VARIABLE_Str_14);
                                    }
#line 669 "demangle.m"
                                  }
#line 668 "demangle.m"
                                else
#line 673 "demangle.m"
                                  {
#line 673 "demangle.m"
                                    demangle__Sep_10 = (MR_String) "";
#line 674 "demangle.m"
                                    demangle__Rest_12 = (MR_String) "";
#line 673 "demangle.m"
                                    *demangle__STATE_VARIABLE_Str_14 = demangle__STATE_VARIABLE_Str_24_24;
#line 673 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 673 "demangle.m"
                                  }
#line 662 "demangle.m"
                                if (demangle__succeeded)
#line 662 "demangle.m"
                                  {
#line 3791 "demangle.c"
                                    demangle__V_39_39 = (MR_Integer) 0;
#line 3793 "demangle.c"
                                    demangle__V_40_40 = (MR_Integer) 0;
#line 3795 "demangle.c"
                                    demangle__V_41_41 = (MR_Integer) 0;
#line 3797 "demangle.c"
                                    demangle__V_42_42 = (MR_Integer) 0;
#line 3799 "demangle.c"
                                    demangle__V_43_43 = (MR_Integer) 0;
#line 3801 "demangle.c"
                                    demangle__V_44_44 = (MR_Word) &demangle_scalar_common_2[1];
#line 677 "demangle.m"
                                    {
#line 677 "demangle.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_44_44, demangle__Rest_12, &demangle__V_38_38);
                                    }
#line 677 "demangle.m"
                                    {
#line 677 "demangle.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_44_44, demangle__Sep_10, &demangle__V_45_45);
                                    }
#line 676 "demangle.m"
                                    {
#line 676 "demangle.m"
                                      demangle__V_52_52 = mercury__string__f_43_43_2_f_0(demangle__V_45_45, demangle__V_38_38);
                                    }
#line 677 "demangle.m"
                                    {
#line 677 "demangle.m"
                                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_44_44, demangle__TypeArity_9, &demangle__V_53_53);
                                    }
#line 676 "demangle.m"
                                    {
#line 676 "demangle.m"
                                      demangle__V_60_60 = mercury__string__f_43_43_2_f_0(demangle__V_53_53, demangle__V_52_52);
                                    }
#line 3828 "demangle.c"
                                    demangle__V_61_61 = (MR_String) "/";
#line 676 "demangle.m"
                                    {
#line 676 "demangle.m"
                                      demangle__V_62_62 = mercury__string__f_43_43_2_f_0(demangle__V_61_61, demangle__V_60_60);
                                    }
#line 677 "demangle.m"
                                    {
#line 677 "demangle.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_44_44, demangle__TypeName_8, &demangle__V_63_63);
                                    }
#line 676 "demangle.m"
                                    {
#line 676 "demangle.m"
                                      *demangle__FormattedArgs_6 = mercury__string__f_43_43_2_f_0(demangle__V_63_63, demangle__V_62_62);
                                    }
#line 676 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 662 "demangle.m"
                                  }
#line 662 "demangle.m"
                              }
#line 662 "demangle.m"
                          }
#line 662 "demangle.m"
                      }
#line 662 "demangle.m"
                  }
#line 662 "demangle.m"
              }
#line 662 "demangle.m"
          }
#line 663 "demangle.m"
      }
#line 662 "demangle.m"
    return demangle__succeeded;
#line 662 "demangle.m"
  }
#line 659 "demangle.m"
}

#line 643 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
#line 643 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_8,
#line 643 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_9)
#line 643 "demangle.m"
{
#line 645 "demangle.m"
  {
#line 645 "demangle.m"
    MR_bool demangle__succeeded;
#line 645 "demangle.m"
    MR_String demangle__ClassName_4;
#line 645 "demangle.m"
    MR_Integer demangle__ClassArity_5;
#line 645 "demangle.m"
    MR_String demangle__Args_6;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_11_11;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_13_13;
#line 645 "demangle.m"
    MR_Word demangle__V_14_14;
#line 645 "demangle.m"
    MR_Word demangle__V_15_15;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_16_16;
#line 645 "demangle.m"
    MR_String demangle__V_17_17;
#line 645 "demangle.m"
    MR_Word demangle__V_18_18;
#line 645 "demangle.m"
    MR_String demangle__V_19_19;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_20_20;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_21_21;
#line 645 "demangle.m"
    MR_String demangle__V_22_22;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_23_23;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_24_24;
#line 645 "demangle.m"
    MR_String demangle__V_32_32;
#line 645 "demangle.m"
    MR_String demangle__V_33_33;
#line 645 "demangle.m"
    MR_Word demangle__V_34_34;
#line 645 "demangle.m"
    MR_Word demangle__V_35_35;
#line 645 "demangle.m"
    MR_Word demangle__V_36_36;
#line 645 "demangle.m"
    MR_Word demangle__V_37_37;
#line 645 "demangle.m"
    MR_Word demangle__V_38_38;
#line 645 "demangle.m"
    MR_Word demangle__V_39_39;
#line 645 "demangle.m"
    MR_String demangle__V_40_40;
#line 645 "demangle.m"
    MR_String demangle__V_41_41;
#line 645 "demangle.m"
    MR_String demangle__V_42_42;
#line 645 "demangle.m"
    MR_String demangle__V_43_43;
#line 645 "demangle.m"
    MR_String demangle__V_50_50;
#line 645 "demangle.m"
    MR_String demangle__V_51_51;
#line 645 "demangle.m"
    MR_Integer demangle__Digit_62;
#line 645 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_9_63;
#line 645 "demangle.m"
    MR_Char demangle__Char_68;
#line 867 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_8_56;
#line 655 "demangle.m"
    MR_String demangle___Str_7;

#line 867 "demangle.m"
    {
#line 867 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data___", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_8_56);
    }
#line 867 "demangle.m"
    if (demangle__succeeded)
#line 867 "demangle.m"
      demangle__STATE_VARIABLE_Str_11_11 = demangle__STATE_VARIABLE_Str_8_56;
#line 867 "demangle.m"
    else
#line 867 "demangle.m"
      demangle__STATE_VARIABLE_Str_11_11 = demangle__STATE_VARIABLE_Str_0_8;
#line 647 "demangle.m"
    {
#line 647 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "base_typeclass_info_", demangle__STATE_VARIABLE_Str_11_11, &demangle__STATE_VARIABLE_Str_13_13);
    }
#line 645 "demangle.m"
    if (demangle__succeeded)
#line 645 "demangle.m"
      {
#line 648 "demangle.m"
        demangle__V_17_17 = (MR_String) "arity";
#line 648 "demangle.m"
        demangle__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "demangle.m"
        demangle__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]);
#line 648 "demangle.m"
        {
#line 648 "demangle.m"
          demangle__remove_maybe_module_prefix_4_p_0(&demangle__V_14_14, demangle__V_15_15, demangle__STATE_VARIABLE_Str_13_13, &demangle__STATE_VARIABLE_Str_16_16);
        }
#line 648 "demangle.m"
        demangle__succeeded = ((MR_tag((MR_Word) demangle__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 648 "demangle.m"
        if (demangle__succeeded)
#line 648 "demangle.m"
          {
#line 648 "demangle.m"
            demangle__ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__V_14_14, (MR_Integer) 0)));
#line 649 "demangle.m"
            demangle__succeeded = (strcmp(demangle__ClassName_4, (MR_String) "") == 0);
#line 649 "demangle.m"
            demangle__succeeded = !(demangle__succeeded);
#line 645 "demangle.m"
            if (demangle__succeeded)
#line 645 "demangle.m"
              {
#line 650 "demangle.m"
                demangle__V_19_19 = (MR_String) "arity";
#line 650 "demangle.m"
                {
#line 650 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_19_19, demangle__STATE_VARIABLE_Str_16_16, &demangle__STATE_VARIABLE_Str_20_20);
                }
#line 645 "demangle.m"
                if (demangle__succeeded)
#line 645 "demangle.m"
                  {
#line 766 "demangle.m"
                    {
#line 766 "demangle.m"
                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_20_20, &demangle__Char_68, &demangle__STATE_VARIABLE_Str_9_63);
                    }
#line 645 "demangle.m"
                    if (demangle__succeeded)
#line 645 "demangle.m"
                      {
#line 771 "demangle.m"
                        if ((((MR_Unsigned) (demangle__Char_68 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 771 "demangle.m"
                          {
#line 771 "demangle.m"
                            demangle__Digit_62 = ((&demangle_vector_common_3[20 + (demangle__Char_68 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
                          }
#line 771 "demangle.m"
                        else
#line 771 "demangle.m"
                          demangle__succeeded = MR_FALSE;
#line 645 "demangle.m"
                        if (demangle__succeeded)
#line 645 "demangle.m"
                          {
#line 751 "demangle.m"
                            {
#line 751 "demangle.m"
                              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_62, &demangle__ClassArity_5, demangle__STATE_VARIABLE_Str_9_63, &demangle__STATE_VARIABLE_Str_21_21);
                            }
#line 645 "demangle.m"
                            if (demangle__succeeded)
#line 645 "demangle.m"
                              {
#line 652 "demangle.m"
                                demangle__V_22_22 = (MR_String) "__";
#line 652 "demangle.m"
                                {
#line 652 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_22_22, demangle__STATE_VARIABLE_Str_21_21, &demangle__STATE_VARIABLE_Str_23_23);
                                }
#line 645 "demangle.m"
                                if (demangle__succeeded)
#line 645 "demangle.m"
                                  {
#line 653 "demangle.m"
                                    {
#line 653 "demangle.m"
                                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_23_23, &demangle__STATE_VARIABLE_Str_24_24);
                                    }
#line 645 "demangle.m"
                                    if (demangle__succeeded)
#line 645 "demangle.m"
                                      {
#line 655 "demangle.m"
                                        {
#line 655 "demangle.m"
                                          demangle__succeeded = demangle__demangle_class_args_4_p_0(demangle__ClassArity_5, &demangle__Args_6, demangle__STATE_VARIABLE_Str_24_24, &demangle___Str_7);
                                        }
#line 645 "demangle.m"
                                        if (demangle__succeeded)
#line 645 "demangle.m"
                                          {
#line 4079 "demangle.c"
                                            demangle__V_32_32 = (MR_String) ")>";
#line 4081 "demangle.c"
                                            demangle__V_34_34 = (MR_Integer) 0;
#line 4083 "demangle.c"
                                            demangle__V_35_35 = (MR_Integer) 0;
#line 4085 "demangle.c"
                                            demangle__V_36_36 = (MR_Integer) 0;
#line 4087 "demangle.c"
                                            demangle__V_37_37 = (MR_Integer) 0;
#line 4089 "demangle.c"
                                            demangle__V_38_38 = (MR_Integer) 0;
#line 4091 "demangle.c"
                                            demangle__V_39_39 = (MR_Word) &demangle_scalar_common_2[1];
#line 657 "demangle.m"
                                            {
#line 657 "demangle.m"
                                              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_39_39, demangle__Args_6, &demangle__V_33_33);
                                            }
#line 656 "demangle.m"
                                            {
#line 656 "demangle.m"
                                              demangle__V_40_40 = mercury__string__f_43_43_2_f_0(demangle__V_33_33, demangle__V_32_32);
                                            }
#line 4103 "demangle.c"
                                            demangle__V_41_41 = (MR_String) "(";
#line 656 "demangle.m"
                                            {
#line 656 "demangle.m"
                                              demangle__V_42_42 = mercury__string__f_43_43_2_f_0(demangle__V_41_41, demangle__V_40_40);
                                            }
#line 657 "demangle.m"
                                            {
#line 657 "demangle.m"
                                              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_39_39, demangle__ClassName_4, &demangle__V_43_43);
                                            }
#line 656 "demangle.m"
                                            {
#line 656 "demangle.m"
                                              demangle__V_50_50 = mercury__string__f_43_43_2_f_0(demangle__V_43_43, demangle__V_42_42);
                                            }
#line 4120 "demangle.c"
                                            demangle__V_51_51 = (MR_String) "<instance declaration for ";
#line 656 "demangle.m"
                                            {
#line 656 "demangle.m"
                                              *demangle__STATE_VARIABLE_Str_9 = mercury__string__f_43_43_2_f_0(demangle__V_51_51, demangle__V_50_50);
                                            }
#line 656 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 645 "demangle.m"
                                          }
#line 645 "demangle.m"
                                      }
#line 645 "demangle.m"
                                  }
#line 645 "demangle.m"
                              }
#line 645 "demangle.m"
                          }
#line 645 "demangle.m"
                      }
#line 645 "demangle.m"
                  }
#line 645 "demangle.m"
              }
#line 648 "demangle.m"
          }
#line 645 "demangle.m"
      }
#line 645 "demangle.m"
    return demangle__succeeded;
#line 645 "demangle.m"
  }
#line 643 "demangle.m"
}

#line 594 "demangle.m"
static MR_bool MR_CALL 
demangle__format_data_5_p_0(
#line 594 "demangle.m"
  MR_Word demangle__Category_6,
#line 594 "demangle.m"
  MR_Word demangle__MaybeModule_7,
#line 594 "demangle.m"
  MR_String demangle__Name_8,
#line 594 "demangle.m"
  MR_Integer demangle__Arity_9,
#line 594 "demangle.m"
  MR_String * demangle__Result_10)
#line 594 "demangle.m"
{
#line 599 "demangle.m"
  {
#line 599 "demangle.m"
    MR_bool demangle__succeeded;

#line 599 "demangle.m"
#line 599 "demangle.m"
    switch (demangle__Category_6) {
#line 599 "demangle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 599 "demangle.m"
      case (MR_Integer) 0:
#line 632 "demangle.m"
        {
#line 632 "demangle.m"
          MR_String demangle__Module_66;
#line 632 "demangle.m"
          MR_String demangle__V_219_219;
#line 632 "demangle.m"
          MR_String demangle__V_220_220;
#line 632 "demangle.m"
          MR_Word demangle__V_221_221;
#line 632 "demangle.m"
          MR_Word demangle__V_222_222;
#line 632 "demangle.m"
          MR_Word demangle__V_223_223;
#line 632 "demangle.m"
          MR_Word demangle__V_224_224;
#line 632 "demangle.m"
          MR_Word demangle__V_225_225;
#line 632 "demangle.m"
          MR_Word demangle__V_226_226;
#line 632 "demangle.m"
          MR_String demangle__V_227_227;
#line 632 "demangle.m"
          MR_String demangle__V_228_228;
#line 632 "demangle.m"
          MR_String demangle__V_229_229;
#line 632 "demangle.m"
          MR_String demangle__V_230_230;
#line 632 "demangle.m"
          MR_String demangle__V_237_237;
#line 632 "demangle.m"
          MR_String demangle__V_238_238;

#line 4216 "demangle.c"
          demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_7)) == (MR_mktag((MR_Integer) 1)));
#line 4218 "demangle.c"
          if (demangle__succeeded)
#line 4220 "demangle.c"
            {
#line 4222 "demangle.c"
              demangle__Module_66 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
#line 4224 "demangle.c"
              demangle__V_219_219 = (MR_String) ">";
#line 4226 "demangle.c"
              demangle__V_221_221 = (MR_Integer) 0;
#line 4228 "demangle.c"
              demangle__V_222_222 = (MR_Integer) 0;
#line 4230 "demangle.c"
              demangle__V_223_223 = (MR_Integer) 0;
#line 4232 "demangle.c"
              demangle__V_224_224 = (MR_Integer) 0;
#line 4234 "demangle.c"
              demangle__V_225_225 = (MR_Integer) 0;
#line 4236 "demangle.c"
              demangle__V_226_226 = (MR_Word) &demangle_scalar_common_2[1];
#line 636 "demangle.m"
              {
#line 636 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_226_226, demangle__Module_66, &demangle__V_220_220);
              }
#line 635 "demangle.m"
              {
#line 635 "demangle.m"
                demangle__V_227_227 = mercury__string__f_43_43_2_f_0(demangle__V_220_220, demangle__V_219_219);
              }
#line 4248 "demangle.c"
              demangle__V_228_228 = (MR_String) " for module ";
#line 635 "demangle.m"
              {
#line 635 "demangle.m"
                demangle__V_229_229 = mercury__string__f_43_43_2_f_0(demangle__V_228_228, demangle__V_227_227);
              }
#line 636 "demangle.m"
              {
#line 636 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_226_226, demangle__Arity_9, &demangle__V_230_230);
              }
#line 635 "demangle.m"
              {
#line 635 "demangle.m"
                demangle__V_237_237 = mercury__string__f_43_43_2_f_0(demangle__V_230_230, demangle__V_229_229);
              }
#line 4265 "demangle.c"
              demangle__V_238_238 = (MR_String) "<shared constant number ";
#line 635 "demangle.m"
              {
#line 635 "demangle.m"
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0(demangle__V_238_238, demangle__V_237_237);
              }
#line 635 "demangle.m"
              demangle__succeeded = MR_TRUE;
#line 4274 "demangle.c"
            }
#line 632 "demangle.m"
        }
#line 599 "demangle.m"
        break;
#line 599 "demangle.m"
      case (MR_Integer) 3:
#line 626 "demangle.m"
        {
#line 626 "demangle.m"
          if ((demangle__MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 627 "demangle.m"
            {
#line 627 "demangle.m"
              MR_String demangle__V_200_200;
#line 627 "demangle.m"
              MR_Word demangle__V_206_206 = (MR_Word) &demangle_scalar_common_2[1];
#line 627 "demangle.m"
              MR_String demangle__V_207_207;
#line 627 "demangle.m"
              MR_String demangle__V_209_209;
#line 627 "demangle.m"
              MR_String demangle__V_210_210;
#line 627 "demangle.m"
              MR_String demangle__V_217_217;

#line 629 "demangle.m"
              {
#line 629 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_206_206, demangle__Arity_9, &demangle__V_200_200);
              }
#line 628 "demangle.m"
              {
#line 628 "demangle.m"
                demangle__V_207_207 = mercury__string__f_43_43_2_f_0(demangle__V_200_200, (MR_String) "\'>");
              }
#line 628 "demangle.m"
              {
#line 628 "demangle.m"
                demangle__V_209_209 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_207_207);
              }
#line 629 "demangle.m"
              {
#line 629 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_206_206, demangle__Name_8, &demangle__V_210_210);
              }
#line 628 "demangle.m"
              {
#line 628 "demangle.m"
                demangle__V_217_217 = mercury__string__f_43_43_2_f_0(demangle__V_210_210, demangle__V_209_209);
              }
#line 628 "demangle.m"
              {
#line 628 "demangle.m"
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", demangle__V_217_217);
              }
#line 627 "demangle.m"
            }
#line 626 "demangle.m"
          else
#line 623 "demangle.m"
            {
#line 623 "demangle.m"
              MR_String demangle__Module_63 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
#line 623 "demangle.m"
              MR_String demangle__V_170_170;
#line 623 "demangle.m"
              MR_Word demangle__V_176_176 = (MR_Word) &demangle_scalar_common_2[1];
#line 623 "demangle.m"
              MR_String demangle__V_177_177;
#line 623 "demangle.m"
              MR_String demangle__V_179_179;
#line 623 "demangle.m"
              MR_String demangle__V_180_180;
#line 623 "demangle.m"
              MR_String demangle__V_187_187;
#line 623 "demangle.m"
              MR_String demangle__V_189_189;
#line 623 "demangle.m"
              MR_String demangle__V_190_190;
#line 623 "demangle.m"
              MR_String demangle__V_197_197;

#line 625 "demangle.m"
              {
#line 625 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_176_176, demangle__Arity_9, &demangle__V_170_170);
              }
#line 624 "demangle.m"
              {
#line 624 "demangle.m"
                demangle__V_177_177 = mercury__string__f_43_43_2_f_0(demangle__V_170_170, (MR_String) "\'>");
              }
#line 624 "demangle.m"
              {
#line 624 "demangle.m"
                demangle__V_179_179 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_177_177);
              }
#line 625 "demangle.m"
              {
#line 625 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_176_176, demangle__Name_8, &demangle__V_180_180);
              }
#line 624 "demangle.m"
              {
#line 624 "demangle.m"
                demangle__V_187_187 = mercury__string__f_43_43_2_f_0(demangle__V_180_180, demangle__V_179_179);
              }
#line 624 "demangle.m"
              {
#line 624 "demangle.m"
                demangle__V_189_189 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_187_187);
              }
#line 625 "demangle.m"
              {
#line 625 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_176_176, demangle__Module_63, &demangle__V_190_190);
              }
#line 624 "demangle.m"
              {
#line 624 "demangle.m"
                demangle__V_197_197 = mercury__string__f_43_43_2_f_0(demangle__V_190_190, demangle__V_189_189);
              }
#line 624 "demangle.m"
              {
#line 624 "demangle.m"
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", demangle__V_197_197);
              }
#line 623 "demangle.m"
            }
#line 626 "demangle.m"
          demangle__succeeded = MR_TRUE;
#line 626 "demangle.m"
        }
#line 599 "demangle.m"
        break;
#line 599 "demangle.m"
      case (MR_Integer) 1:
#line 604 "demangle.m"
        {
#line 604 "demangle.m"
          if ((demangle__MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 605 "demangle.m"
            {
#line 605 "demangle.m"
              MR_String demangle__V_150_150;
#line 605 "demangle.m"
              MR_Word demangle__V_156_156 = (MR_Word) &demangle_scalar_common_2[1];
#line 605 "demangle.m"
              MR_String demangle__V_157_157;
#line 605 "demangle.m"
              MR_String demangle__V_159_159;
#line 605 "demangle.m"
              MR_String demangle__V_160_160;
#line 605 "demangle.m"
              MR_String demangle__V_167_167;

#line 607 "demangle.m"
              {
#line 607 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_156_156, demangle__Arity_9, &demangle__V_150_150);
              }
#line 606 "demangle.m"
              {
#line 606 "demangle.m"
                demangle__V_157_157 = mercury__string__f_43_43_2_f_0(demangle__V_150_150, (MR_String) "\'>");
              }
#line 606 "demangle.m"
              {
#line 606 "demangle.m"
                demangle__V_159_159 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_157_157);
              }
#line 607 "demangle.m"
              {
#line 607 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_156_156, demangle__Name_8, &demangle__V_160_160);
              }
#line 606 "demangle.m"
              {
#line 606 "demangle.m"
                demangle__V_167_167 = mercury__string__f_43_43_2_f_0(demangle__V_160_160, demangle__V_159_159);
              }
#line 606 "demangle.m"
              {
#line 606 "demangle.m"
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", demangle__V_167_167);
              }
#line 605 "demangle.m"
            }
#line 604 "demangle.m"
          else
#line 601 "demangle.m"
            {
#line 601 "demangle.m"
              MR_String demangle__Module_11 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
#line 601 "demangle.m"
              MR_String demangle__V_120_120;
#line 601 "demangle.m"
              MR_Word demangle__V_126_126 = (MR_Word) &demangle_scalar_common_2[1];
#line 601 "demangle.m"
              MR_String demangle__V_127_127;
#line 601 "demangle.m"
              MR_String demangle__V_129_129;
#line 601 "demangle.m"
              MR_String demangle__V_130_130;
#line 601 "demangle.m"
              MR_String demangle__V_137_137;
#line 601 "demangle.m"
              MR_String demangle__V_139_139;
#line 601 "demangle.m"
              MR_String demangle__V_140_140;
#line 601 "demangle.m"
              MR_String demangle__V_147_147;

#line 603 "demangle.m"
              {
#line 603 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_126_126, demangle__Arity_9, &demangle__V_120_120);
              }
#line 602 "demangle.m"
              {
#line 602 "demangle.m"
                demangle__V_127_127 = mercury__string__f_43_43_2_f_0(demangle__V_120_120, (MR_String) "\'>");
              }
#line 602 "demangle.m"
              {
#line 602 "demangle.m"
                demangle__V_129_129 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_127_127);
              }
#line 603 "demangle.m"
              {
#line 603 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_126_126, demangle__Name_8, &demangle__V_130_130);
              }
#line 602 "demangle.m"
              {
#line 602 "demangle.m"
                demangle__V_137_137 = mercury__string__f_43_43_2_f_0(demangle__V_130_130, demangle__V_129_129);
              }
#line 602 "demangle.m"
              {
#line 602 "demangle.m"
                demangle__V_139_139 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_137_137);
              }
#line 603 "demangle.m"
              {
#line 603 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_126_126, demangle__Module_11, &demangle__V_140_140);
              }
#line 602 "demangle.m"
              {
#line 602 "demangle.m"
                demangle__V_147_147 = mercury__string__f_43_43_2_f_0(demangle__V_140_140, demangle__V_139_139);
              }
#line 602 "demangle.m"
              {
#line 602 "demangle.m"
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", demangle__V_147_147);
              }
#line 601 "demangle.m"
            }
#line 604 "demangle.m"
          demangle__succeeded = MR_TRUE;
#line 604 "demangle.m"
        }
#line 599 "demangle.m"
        break;
#line 599 "demangle.m"
      case (MR_Integer) 2:
#line 615 "demangle.m"
        {
#line 615 "demangle.m"
          if ((demangle__MaybeModule_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "demangle.m"
            {
#line 616 "demangle.m"
              MR_String demangle__V_100_100;
#line 616 "demangle.m"
              MR_Word demangle__V_106_106 = (MR_Word) &demangle_scalar_common_2[1];
#line 616 "demangle.m"
              MR_String demangle__V_107_107;
#line 616 "demangle.m"
              MR_String demangle__V_109_109;
#line 616 "demangle.m"
              MR_String demangle__V_110_110;
#line 616 "demangle.m"
              MR_String demangle__V_117_117;

#line 618 "demangle.m"
              {
#line 618 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_106_106, demangle__Arity_9, &demangle__V_100_100);
              }
#line 617 "demangle.m"
              {
#line 617 "demangle.m"
                demangle__V_107_107 = mercury__string__f_43_43_2_f_0(demangle__V_100_100, (MR_String) "\'>");
              }
#line 617 "demangle.m"
              {
#line 617 "demangle.m"
                demangle__V_109_109 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_107_107);
              }
#line 618 "demangle.m"
              {
#line 618 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_106_106, demangle__Name_8, &demangle__V_110_110);
              }
#line 617 "demangle.m"
              {
#line 617 "demangle.m"
                demangle__V_117_117 = mercury__string__f_43_43_2_f_0(demangle__V_110_110, demangle__V_109_109);
              }
#line 617 "demangle.m"
              {
#line 617 "demangle.m"
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", demangle__V_117_117);
              }
#line 616 "demangle.m"
            }
#line 615 "demangle.m"
          else
#line 612 "demangle.m"
            {
#line 612 "demangle.m"
              MR_String demangle__Module_60 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_7, (MR_Integer) 0)));
#line 612 "demangle.m"
              MR_String demangle__V_70_70;
#line 612 "demangle.m"
              MR_Word demangle__V_76_76 = (MR_Word) &demangle_scalar_common_2[1];
#line 612 "demangle.m"
              MR_String demangle__V_77_77;
#line 612 "demangle.m"
              MR_String demangle__V_79_79;
#line 612 "demangle.m"
              MR_String demangle__V_80_80;
#line 612 "demangle.m"
              MR_String demangle__V_87_87;
#line 612 "demangle.m"
              MR_String demangle__V_89_89;
#line 612 "demangle.m"
              MR_String demangle__V_90_90;
#line 612 "demangle.m"
              MR_String demangle__V_97_97;

#line 614 "demangle.m"
              {
#line 614 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_76_76, demangle__Arity_9, &demangle__V_70_70);
              }
#line 613 "demangle.m"
              {
#line 613 "demangle.m"
                demangle__V_77_77 = mercury__string__f_43_43_2_f_0(demangle__V_70_70, (MR_String) "\'>");
              }
#line 613 "demangle.m"
              {
#line 613 "demangle.m"
                demangle__V_79_79 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_77_77);
              }
#line 614 "demangle.m"
              {
#line 614 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_76_76, demangle__Name_8, &demangle__V_80_80);
              }
#line 613 "demangle.m"
              {
#line 613 "demangle.m"
                demangle__V_87_87 = mercury__string__f_43_43_2_f_0(demangle__V_80_80, demangle__V_79_79);
              }
#line 613 "demangle.m"
              {
#line 613 "demangle.m"
                demangle__V_89_89 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_87_87);
              }
#line 614 "demangle.m"
              {
#line 614 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_76_76, demangle__Module_60, &demangle__V_90_90);
              }
#line 613 "demangle.m"
              {
#line 613 "demangle.m"
                demangle__V_97_97 = mercury__string__f_43_43_2_f_0(demangle__V_90_90, demangle__V_89_89);
              }
#line 613 "demangle.m"
              {
#line 613 "demangle.m"
                *demangle__Result_10 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", demangle__V_97_97);
              }
#line 612 "demangle.m"
            }
#line 615 "demangle.m"
          demangle__succeeded = MR_TRUE;
#line 615 "demangle.m"
        }
#line 599 "demangle.m"
        break;
#line 599 "demangle.m"
    }
#line 599 "demangle.m"
    return demangle__succeeded;
#line 599 "demangle.m"
  }
#line 594 "demangle.m"
}

#line 456 "demangle.m"
static void MR_CALL 
demangle__format_proc_10_p_0(
#line 456 "demangle.m"
  MR_Word demangle__Category_11,
#line 456 "demangle.m"
  MR_Word demangle__MaybeModule_12,
#line 456 "demangle.m"
  MR_String demangle__PredOrFunc_13,
#line 456 "demangle.m"
  MR_String demangle__PredName_14,
#line 456 "demangle.m"
  MR_Integer demangle__Arity_15,
#line 456 "demangle.m"
  MR_Integer demangle__ModeNum_16,
#line 456 "demangle.m"
  MR_Word demangle__HigherOrder_17,
#line 456 "demangle.m"
  MR_Word demangle__UnusedArgs_18,
#line 456 "demangle.m"
  MR_Word demangle__MaybeInternalLabelNum_19,
#line 456 "demangle.m"
  MR_String * demangle__DemangledName_20)
#line 456 "demangle.m"
{
#line 462 "demangle.m"
  {
#line 462 "demangle.m"
    MR_bool demangle__succeeded;
#line 462 "demangle.m"
    MR_String demangle__QualifiedName_21;
#line 462 "demangle.m"
    MR_String demangle__MainStr_22;
#line 462 "demangle.m"
    MR_String demangle__HOStr_29;
#line 462 "demangle.m"
    MR_String demangle__UAStr_32;
#line 462 "demangle.m"
    MR_String demangle__LabelStr_34;
#line 462 "demangle.m"
    MR_String demangle__V_119_119;
#line 462 "demangle.m"
    MR_String demangle__V_120_120;
#line 462 "demangle.m"
    MR_String demangle__V_121_121;
#line 462 "demangle.m"
    MR_String demangle__V_122_122;

#line 463 "demangle.m"
    {
#line 463 "demangle.m"
      demangle__format_maybe_module_3_p_0(demangle__MaybeModule_12, demangle__PredName_14, &demangle__QualifiedName_21);
    }
#line 468 "demangle.m"
#line 468 "demangle.m"
    switch (MR_tag((MR_Word) demangle__Category_11)) {
#line 468 "demangle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 468 "demangle.m"
      case (MR_Integer) 0:
#line 468 "demangle.m"
#line 468 "demangle.m"
        switch (MR_unmkbody(demangle__Category_11)) {
#line 468 "demangle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 468 "demangle.m"
          case (MR_Integer) 0:
#line 473 "demangle.m"
            {
#line 473 "demangle.m"
              MR_String demangle__V_319_319;
#line 473 "demangle.m"
              MR_Word demangle__V_325_325 = (MR_Word) &demangle_scalar_common_2[1];
#line 473 "demangle.m"
              MR_String demangle__V_326_326;
#line 473 "demangle.m"
              MR_String demangle__V_328_328;
#line 473 "demangle.m"
              MR_String demangle__V_329_329;
#line 473 "demangle.m"
              MR_String demangle__V_336_336;

#line 475 "demangle.m"
              {
#line 475 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_325_325, demangle__Arity_15, &demangle__V_319_319);
              }
#line 474 "demangle.m"
              {
#line 474 "demangle.m"
                demangle__V_326_326 = mercury__string__f_43_43_2_f_0(demangle__V_319_319, (MR_String) "\'");
              }
#line 474 "demangle.m"
              {
#line 474 "demangle.m"
                demangle__V_328_328 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_326_326);
              }
#line 475 "demangle.m"
              {
#line 475 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_325_325, demangle__QualifiedName_21, &demangle__V_329_329);
              }
#line 474 "demangle.m"
              {
#line 474 "demangle.m"
                demangle__V_336_336 = mercury__string__f_43_43_2_f_0(demangle__V_329_329, demangle__V_328_328);
              }
#line 474 "demangle.m"
              {
#line 474 "demangle.m"
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "index/2 predicate for type \140", demangle__V_336_336);
              }
#line 473 "demangle.m"
            }
#line 468 "demangle.m"
            break;
#line 468 "demangle.m"
          case (MR_Integer) 1:
#line 465 "demangle.m"
            {
#line 465 "demangle.m"
              MR_String demangle__V_124_124;
#line 465 "demangle.m"
              MR_Word demangle__V_130_130 = (MR_Word) &demangle_scalar_common_2[1];
#line 465 "demangle.m"
              MR_String demangle__V_132_132;
#line 465 "demangle.m"
              MR_String demangle__V_133_133;
#line 465 "demangle.m"
              MR_String demangle__V_140_140;
#line 465 "demangle.m"
              MR_String demangle__V_142_142;
#line 465 "demangle.m"
              MR_String demangle__V_143_143;
#line 465 "demangle.m"
              MR_String demangle__V_150_150;

#line 467 "demangle.m"
              {
#line 467 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_130_130, demangle__ModeNum_16, &demangle__V_124_124);
              }
#line 466 "demangle.m"
              {
#line 466 "demangle.m"
                demangle__V_132_132 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__V_124_124);
              }
#line 467 "demangle.m"
              {
#line 467 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_130_130, demangle__Arity_15, &demangle__V_133_133);
              }
#line 466 "demangle.m"
              {
#line 466 "demangle.m"
                demangle__V_140_140 = mercury__string__f_43_43_2_f_0(demangle__V_133_133, demangle__V_132_132);
              }
#line 466 "demangle.m"
              {
#line 466 "demangle.m"
                demangle__V_142_142 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_140_140);
              }
#line 467 "demangle.m"
              {
#line 467 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_130_130, demangle__QualifiedName_21, &demangle__V_143_143);
              }
#line 466 "demangle.m"
              {
#line 466 "demangle.m"
                demangle__V_150_150 = mercury__string__f_43_43_2_f_0(demangle__V_143_143, demangle__V_142_142);
              }
#line 466 "demangle.m"
              {
#line 466 "demangle.m"
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "unification predicate for type \140", demangle__V_150_150);
              }
#line 465 "demangle.m"
            }
#line 468 "demangle.m"
            break;
#line 468 "demangle.m"
          case (MR_Integer) 2:
#line 469 "demangle.m"
            {
#line 469 "demangle.m"
              MR_String demangle__V_339_339;
#line 469 "demangle.m"
              MR_Word demangle__V_345_345 = (MR_Word) &demangle_scalar_common_2[1];
#line 469 "demangle.m"
              MR_String demangle__V_346_346;
#line 469 "demangle.m"
              MR_String demangle__V_348_348;
#line 469 "demangle.m"
              MR_String demangle__V_349_349;
#line 469 "demangle.m"
              MR_String demangle__V_356_356;

#line 471 "demangle.m"
              {
#line 471 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_345_345, demangle__Arity_15, &demangle__V_339_339);
              }
#line 470 "demangle.m"
              {
#line 470 "demangle.m"
                demangle__V_346_346 = mercury__string__f_43_43_2_f_0(demangle__V_339_339, (MR_String) "\'");
              }
#line 470 "demangle.m"
              {
#line 470 "demangle.m"
                demangle__V_348_348 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_346_346);
              }
#line 471 "demangle.m"
              {
#line 471 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_345_345, demangle__QualifiedName_21, &demangle__V_349_349);
              }
#line 470 "demangle.m"
              {
#line 470 "demangle.m"
                demangle__V_356_356 = mercury__string__f_43_43_2_f_0(demangle__V_349_349, demangle__V_348_348);
              }
#line 470 "demangle.m"
              {
#line 470 "demangle.m"
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "compare/3 predicate for type \140", demangle__V_356_356);
              }
#line 469 "demangle.m"
            }
#line 468 "demangle.m"
            break;
#line 468 "demangle.m"
          case (MR_Integer) 3:
#line 477 "demangle.m"
            {
#line 477 "demangle.m"
              MR_String demangle__V_152_152;
#line 477 "demangle.m"
              MR_Word demangle__V_158_158 = (MR_Word) &demangle_scalar_common_2[1];
#line 477 "demangle.m"
              MR_String demangle__V_160_160;
#line 477 "demangle.m"
              MR_String demangle__V_161_161;
#line 477 "demangle.m"
              MR_String demangle__V_168_168;
#line 477 "demangle.m"
              MR_String demangle__V_170_170;
#line 477 "demangle.m"
              MR_String demangle__V_171_171;
#line 477 "demangle.m"
              MR_String demangle__V_178_178;
#line 477 "demangle.m"
              MR_String demangle__V_180_180;
#line 477 "demangle.m"
              MR_String demangle__V_181_181;

#line 479 "demangle.m"
              {
#line 479 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_158_158, demangle__ModeNum_16, &demangle__V_152_152);
              }
#line 478 "demangle.m"
              {
#line 478 "demangle.m"
                demangle__V_160_160 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__V_152_152);
              }
#line 479 "demangle.m"
              {
#line 479 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_158_158, demangle__Arity_15, &demangle__V_161_161);
              }
#line 478 "demangle.m"
              {
#line 478 "demangle.m"
                demangle__V_168_168 = mercury__string__f_43_43_2_f_0(demangle__V_161_161, demangle__V_160_160);
              }
#line 478 "demangle.m"
              {
#line 478 "demangle.m"
                demangle__V_170_170 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_168_168);
              }
#line 479 "demangle.m"
              {
#line 479 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_158_158, demangle__QualifiedName_21, &demangle__V_171_171);
              }
#line 478 "demangle.m"
              {
#line 478 "demangle.m"
                demangle__V_178_178 = mercury__string__f_43_43_2_f_0(demangle__V_171_171, demangle__V_170_170);
              }
#line 478 "demangle.m"
              {
#line 478 "demangle.m"
                demangle__V_180_180 = mercury__string__f_43_43_2_f_0((MR_String) " \140", demangle__V_178_178);
              }
#line 479 "demangle.m"
              {
#line 479 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_158_158, demangle__PredOrFunc_13, &demangle__V_181_181);
              }
#line 478 "demangle.m"
              {
#line 478 "demangle.m"
                demangle__MainStr_22 = mercury__string__f_43_43_2_f_0(demangle__V_181_181, demangle__V_180_180);
              }
#line 477 "demangle.m"
            }
#line 468 "demangle.m"
            break;
#line 468 "demangle.m"
        }
#line 468 "demangle.m"
        break;
#line 468 "demangle.m"
      case (MR_Integer) 1:
#line 481 "demangle.m"
        {
#line 481 "demangle.m"
          MR_Word demangle__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 0)));
#line 481 "demangle.m"
          MR_Integer demangle__Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 1)));
#line 481 "demangle.m"
          MR_Integer demangle__Seq_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 2)));
#line 481 "demangle.m"
          MR_String demangle__IntroPredOrFunc_26 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Category_11, (MR_Integer) 3)));

#line 487 "demangle.m"
#line 487 "demangle.m"
          switch (MR_tag((MR_Word) demangle__Type_23)) {
#line 487 "demangle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 487 "demangle.m"
            case (MR_Integer) 0:
#line 487 "demangle.m"
#line 487 "demangle.m"
              switch (MR_unmkbody(demangle__Type_23)) {
#line 487 "demangle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 487 "demangle.m"
                case (MR_Integer) 0:
#line 483 "demangle.m"
                  {
#line 483 "demangle.m"
                    MR_String demangle__V_236_236;
#line 483 "demangle.m"
                    MR_Word demangle__V_242_242 = (MR_Word) &demangle_scalar_common_2[1];
#line 483 "demangle.m"
                    MR_String demangle__V_244_244;
#line 483 "demangle.m"
                    MR_String demangle__V_245_245;
#line 483 "demangle.m"
                    MR_String demangle__V_252_252;
#line 483 "demangle.m"
                    MR_String demangle__V_254_254;
#line 483 "demangle.m"
                    MR_String demangle__V_255_255;
#line 483 "demangle.m"
                    MR_String demangle__V_262_262;
#line 483 "demangle.m"
                    MR_String demangle__V_264_264;
#line 483 "demangle.m"
                    MR_String demangle__V_265_265;

#line 486 "demangle.m"
                    {
#line 486 "demangle.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_242_242, demangle__Line_24, &demangle__V_236_236);
                    }
#line 484 "demangle.m"
                    {
#line 484 "demangle.m"
                      demangle__V_244_244 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__V_236_236);
                    }
#line 485 "demangle.m"
                    {
#line 485 "demangle.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_242_242, demangle__QualifiedName_21, &demangle__V_245_245);
                    }
#line 484 "demangle.m"
                    {
#line 484 "demangle.m"
                      demangle__V_252_252 = mercury__string__f_43_43_2_f_0(demangle__V_245_245, demangle__V_244_244);
                    }
#line 484 "demangle.m"
                    {
#line 484 "demangle.m"
                      demangle__V_254_254 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", demangle__V_252_252);
                    }
#line 485 "demangle.m"
                    {
#line 485 "demangle.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_242_242, demangle__Seq_25, &demangle__V_255_255);
                    }
#line 484 "demangle.m"
                    {
#line 484 "demangle.m"
                      demangle__V_262_262 = mercury__string__f_43_43_2_f_0(demangle__V_255_255, demangle__V_254_254);
                    }
#line 484 "demangle.m"
                    {
#line 484 "demangle.m"
                      demangle__V_264_264 = mercury__string__f_43_43_2_f_0((MR_String) " goal (#", demangle__V_262_262);
                    }
#line 485 "demangle.m"
                    {
#line 485 "demangle.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_242_242, demangle__IntroPredOrFunc_26, &demangle__V_265_265);
                    }
#line 484 "demangle.m"
                    {
#line 484 "demangle.m"
                      demangle__MainStr_22 = mercury__string__f_43_43_2_f_0(demangle__V_265_265, demangle__V_264_264);
                    }
#line 483 "demangle.m"
                  }
#line 487 "demangle.m"
                  break;
#line 487 "demangle.m"
                case (MR_Integer) 1:
#line 488 "demangle.m"
                  {
#line 488 "demangle.m"
                    MR_String demangle__V_272_272;
#line 488 "demangle.m"
                    MR_Word demangle__V_278_278 = (MR_Word) &demangle_scalar_common_2[1];
#line 488 "demangle.m"
                    MR_String demangle__V_280_280;
#line 488 "demangle.m"
                    MR_String demangle__V_281_281;
#line 488 "demangle.m"
                    MR_String demangle__V_288_288;
#line 488 "demangle.m"
                    MR_String demangle__V_290_290;
#line 488 "demangle.m"
                    MR_String demangle__V_291_291;
#line 488 "demangle.m"
                    MR_String demangle__V_298_298;

#line 491 "demangle.m"
                    {
#line 491 "demangle.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_278_278, demangle__Line_24, &demangle__V_272_272);
                    }
#line 489 "demangle.m"
                    {
#line 489 "demangle.m"
                      demangle__V_280_280 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__V_272_272);
                    }
#line 491 "demangle.m"
                    {
#line 491 "demangle.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_278_278, demangle__QualifiedName_21, &demangle__V_281_281);
                    }
#line 489 "demangle.m"
                    {
#line 489 "demangle.m"
                      demangle__V_288_288 = mercury__string__f_43_43_2_f_0(demangle__V_281_281, demangle__V_280_280);
                    }
#line 489 "demangle.m"
                    {
#line 489 "demangle.m"
                      demangle__V_290_290 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", demangle__V_288_288);
                    }
#line 491 "demangle.m"
                    {
#line 491 "demangle.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_278_278, demangle__Seq_25, &demangle__V_291_291);
                    }
#line 489 "demangle.m"
                    {
#line 489 "demangle.m"
                      demangle__V_298_298 = mercury__string__f_43_43_2_f_0(demangle__V_291_291, demangle__V_290_290);
                    }
#line 489 "demangle.m"
                    {
#line 489 "demangle.m"
                      demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "deforestation procedure (#", demangle__V_298_298);
                    }
#line 488 "demangle.m"
                  }
#line 487 "demangle.m"
                  break;
#line 487 "demangle.m"
                case (MR_Integer) 2:
#line 493 "demangle.m"
                  {
#line 493 "demangle.m"
                    MR_String demangle__V_300_300;
#line 493 "demangle.m"
                    MR_Word demangle__V_306_306 = (MR_Word) &demangle_scalar_common_2[1];
#line 493 "demangle.m"
                    MR_String demangle__V_308_308;
#line 493 "demangle.m"
                    MR_String demangle__V_309_309;
#line 493 "demangle.m"
                    MR_String demangle__V_316_316;

#line 496 "demangle.m"
                    {
#line 496 "demangle.m"
                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_306_306, demangle__Line_24, &demangle__V_300_300);
                    }
#line 494 "demangle.m"
                    {
#line 494 "demangle.m"
                      demangle__V_308_308 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__V_300_300);
                    }
#line 496 "demangle.m"
                    {
#line 496 "demangle.m"
                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_306_306, demangle__QualifiedName_21, &demangle__V_309_309);
                    }
#line 494 "demangle.m"
                    {
#line 494 "demangle.m"
                      demangle__V_316_316 = mercury__string__f_43_43_2_f_0(demangle__V_309_309, demangle__V_308_308);
                    }
#line 494 "demangle.m"
                    {
#line 494 "demangle.m"
                      demangle__MainStr_22 = mercury__string__f_43_43_2_f_0((MR_String) "accumulator procedure from \140", demangle__V_316_316);
                    }
#line 493 "demangle.m"
                  }
#line 487 "demangle.m"
                  break;
#line 487 "demangle.m"
              }
#line 487 "demangle.m"
              break;
#line 487 "demangle.m"
            case (MR_Integer) 1:
#line 498 "demangle.m"
              {
#line 498 "demangle.m"
                MR_String demangle__TypeSpec_27 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Type_23, (MR_Integer) 0)));
#line 498 "demangle.m"
                MR_String demangle__V_189_189;
#line 498 "demangle.m"
                MR_Word demangle__V_195_195 = (MR_Word) &demangle_scalar_common_2[1];
#line 498 "demangle.m"
                MR_String demangle__V_196_196;
#line 498 "demangle.m"
                MR_String demangle__V_198_198;
#line 498 "demangle.m"
                MR_String demangle__V_199_199;
#line 498 "demangle.m"
                MR_String demangle__V_206_206;
#line 498 "demangle.m"
                MR_String demangle__V_208_208;
#line 498 "demangle.m"
                MR_String demangle__V_209_209;
#line 498 "demangle.m"
                MR_String demangle__V_216_216;
#line 498 "demangle.m"
                MR_String demangle__V_218_218;
#line 498 "demangle.m"
                MR_String demangle__V_219_219;
#line 498 "demangle.m"
                MR_String demangle__V_226_226;
#line 498 "demangle.m"
                MR_String demangle__V_228_228;
#line 498 "demangle.m"
                MR_String demangle__V_229_229;

#line 502 "demangle.m"
                {
#line 502 "demangle.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_195_195, demangle__TypeSpec_27, &demangle__V_189_189);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_196_196 = mercury__string__f_43_43_2_f_0(demangle__V_189_189, (MR_String) ")");
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_198_198 = mercury__string__f_43_43_2_f_0((MR_String) " (type specialized ", demangle__V_196_196);
                }
#line 501 "demangle.m"
                {
#line 501 "demangle.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_195_195, demangle__ModeNum_16, &demangle__V_199_199);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_206_206 = mercury__string__f_43_43_2_f_0(demangle__V_199_199, demangle__V_198_198);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_208_208 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__V_206_206);
                }
#line 501 "demangle.m"
                {
#line 501 "demangle.m"
                  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_195_195, demangle__Arity_15, &demangle__V_209_209);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_216_216 = mercury__string__f_43_43_2_f_0(demangle__V_209_209, demangle__V_208_208);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_218_218 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_216_216);
                }
#line 501 "demangle.m"
                {
#line 501 "demangle.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_195_195, demangle__QualifiedName_21, &demangle__V_219_219);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_226_226 = mercury__string__f_43_43_2_f_0(demangle__V_219_219, demangle__V_218_218);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__V_228_228 = mercury__string__f_43_43_2_f_0((MR_String) " \140", demangle__V_226_226);
                }
#line 501 "demangle.m"
                {
#line 501 "demangle.m"
                  mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_195_195, demangle__PredOrFunc_13, &demangle__V_229_229);
                }
#line 499 "demangle.m"
                {
#line 499 "demangle.m"
                  demangle__MainStr_22 = mercury__string__f_43_43_2_f_0(demangle__V_229_229, demangle__V_228_228);
                }
#line 498 "demangle.m"
              }
#line 487 "demangle.m"
              break;
#line 487 "demangle.m"
          }
#line 481 "demangle.m"
        }
#line 468 "demangle.m"
        break;
#line 468 "demangle.m"
    }
#line 508 "demangle.m"
    if ((demangle__HigherOrder_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "demangle.m"
      demangle__HOStr_29 = (MR_String) "";
#line 508 "demangle.m"
    else
#line 506 "demangle.m"
      {
#line 506 "demangle.m"
        MR_Integer demangle__HO_Num_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HigherOrder_17, (MR_Integer) 0)));
#line 506 "demangle.m"
        MR_String demangle__V_359_359;
#line 506 "demangle.m"
        MR_String demangle__V_366_366;

#line 507 "demangle.m"
        {
#line 507 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__HO_Num_28, &demangle__V_359_359);
        }
#line 507 "demangle.m"
        {
#line 507 "demangle.m"
          demangle__V_366_366 = mercury__string__f_43_43_2_f_0(demangle__V_359_359, (MR_String) "])");
        }
#line 507 "demangle.m"
        {
#line 507 "demangle.m"
          demangle__HOStr_29 = mercury__string__f_43_43_2_f_0((MR_String) " (specialized [#", demangle__V_366_366);
        }
#line 506 "demangle.m"
      }
#line 523 "demangle.m"
    if ((demangle__UnusedArgs_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 525 "demangle.m"
      demangle__UAStr_32 = (MR_String) "";
#line 523 "demangle.m"
    else
#line 513 "demangle.m"
      {
#line 513 "demangle.m"
        MR_Integer demangle__UA_Num_30;
#line 513 "demangle.m"
        MR_Word demangle__Extra_31;
#line 513 "demangle.m"
        MR_Word demangle__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_18, (MR_Integer) 0)));

#line 513 "demangle.m"
        demangle__UA_Num_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), demangle__V_105_105, (MR_Integer) 0)));
#line 513 "demangle.m"
        demangle__Extra_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), demangle__V_105_105, (MR_Integer) 1)));
#line 518 "demangle.m"
#line 518 "demangle.m"
        switch (demangle__Extra_31) {
#line 518 "demangle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 518 "demangle.m"
          case (MR_Integer) 0:
#line 519 "demangle.m"
            {
#line 519 "demangle.m"
              MR_String demangle__V_379_379;
#line 519 "demangle.m"
              MR_String demangle__V_386_386;

#line 520 "demangle.m"
              {
#line 520 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__UA_Num_30, &demangle__V_379_379);
              }
#line 520 "demangle.m"
              {
#line 520 "demangle.m"
                demangle__V_386_386 = mercury__string__f_43_43_2_f_0(demangle__V_379_379, (MR_String) "])");
              }
#line 520 "demangle.m"
              {
#line 520 "demangle.m"
                demangle__UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus unused args [#", demangle__V_386_386);
              }
#line 519 "demangle.m"
            }
#line 518 "demangle.m"
            break;
#line 518 "demangle.m"
          case (MR_Integer) 1:
#line 515 "demangle.m"
            {
#line 515 "demangle.m"
              MR_String demangle__V_369_369;
#line 515 "demangle.m"
              MR_String demangle__V_376_376;

#line 516 "demangle.m"
              {
#line 516 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__UA_Num_30, &demangle__V_369_369);
              }
#line 516 "demangle.m"
              {
#line 516 "demangle.m"
                demangle__V_376_376 = mercury__string__f_43_43_2_f_0(demangle__V_369_369, (MR_String) "])");
              }
#line 516 "demangle.m"
              {
#line 516 "demangle.m"
                demangle__UAStr_32 = mercury__string__f_43_43_2_f_0((MR_String) " (minus extra unused args [#", demangle__V_376_376);
              }
#line 515 "demangle.m"
            }
#line 518 "demangle.m"
            break;
#line 518 "demangle.m"
        }
#line 513 "demangle.m"
      }
#line 530 "demangle.m"
    if ((demangle__MaybeInternalLabelNum_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "demangle.m"
      demangle__LabelStr_34 = (MR_String) "";
#line 530 "demangle.m"
    else
#line 528 "demangle.m"
      {
#line 528 "demangle.m"
        MR_Integer demangle__Internal_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum_19, (MR_Integer) 0)));
#line 528 "demangle.m"
        MR_String demangle__V_388_388;

#line 529 "demangle.m"
        {
#line 529 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Internal_33, &demangle__V_388_388);
        }
#line 529 "demangle.m"
        {
#line 529 "demangle.m"
          demangle__LabelStr_34 = mercury__string__f_43_43_2_f_0((MR_String) " label ", demangle__V_388_388);
        }
#line 528 "demangle.m"
      }
#line 534 "demangle.m"
    {
#line 534 "demangle.m"
      demangle__V_122_122 = mercury__string__f_43_43_2_f_0(demangle__LabelStr_34, (MR_String) ">");
    }
#line 534 "demangle.m"
    {
#line 534 "demangle.m"
      demangle__V_121_121 = mercury__string__f_43_43_2_f_0(demangle__UAStr_32, demangle__V_122_122);
    }
#line 534 "demangle.m"
    {
#line 534 "demangle.m"
      demangle__V_120_120 = mercury__string__f_43_43_2_f_0(demangle__HOStr_29, demangle__V_121_121);
    }
#line 534 "demangle.m"
    {
#line 534 "demangle.m"
      demangle__V_119_119 = mercury__string__f_43_43_2_f_0(demangle__MainStr_22, demangle__V_120_120);
    }
#line 534 "demangle.m"
    {
#line 534 "demangle.m"
      *demangle__DemangledName_20 = mercury__string__f_43_43_2_f_0((MR_String) "<", demangle__V_119_119);
    }
#line 462 "demangle.m"
  }
#line 456 "demangle.m"
}

#line 376 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
#line 376 "demangle.m"
  MR_String * demangle__PredName_6,
#line 376 "demangle.m"
  MR_Word demangle__Category0_7,
#line 376 "demangle.m"
  MR_Word * demangle__Category_8,
#line 376 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_21,
#line 376 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_22)
#line 376 "demangle.m"
{
#line 385 "demangle.m"
  {
#line 385 "demangle.m"
    MR_bool demangle__succeeded;
#line 385 "demangle.m"
    MR_Word demangle__IntroducedPredType0_11;
#line 385 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_30_30;
#line 386 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_24_24;

#line 387 "demangle.m"
    {
#line 387 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "IntroducedFrom__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_24_24);
    }
#line 386 "demangle.m"
    if (demangle__succeeded)
#line 389 "demangle.m"
      {
#line 389 "demangle.m"
        demangle__STATE_VARIABLE_Str_30_30 = demangle__STATE_VARIABLE_Str_24_24;
#line 389 "demangle.m"
        demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 389 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 389 "demangle.m"
      }
#line 386 "demangle.m"
    else
#line 390 "demangle.m"
      {
#line 390 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_26_26;

#line 391 "demangle.m"
        {
#line 391 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "DeforestationIn__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_26_26);
        }
#line 390 "demangle.m"
        if (demangle__succeeded)
#line 393 "demangle.m"
          {
#line 393 "demangle.m"
            demangle__STATE_VARIABLE_Str_30_30 = demangle__STATE_VARIABLE_Str_26_26;
#line 393 "demangle.m"
            demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 393 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 393 "demangle.m"
          }
#line 390 "demangle.m"
        else
#line 394 "demangle.m"
          {
#line 394 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_28_28;

#line 395 "demangle.m"
            {
#line 395 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "AccFrom__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_28_28);
            }
#line 394 "demangle.m"
            if (demangle__succeeded)
#line 397 "demangle.m"
              {
#line 397 "demangle.m"
                demangle__STATE_VARIABLE_Str_30_30 = demangle__STATE_VARIABLE_Str_28_28;
#line 397 "demangle.m"
                demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 397 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 397 "demangle.m"
              }
#line 394 "demangle.m"
            else
#line 399 "demangle.m"
              {
#line 399 "demangle.m"
                MR_String demangle__V_31_31;

#line 399 "demangle.m"
                {
#line 399 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeSpecOf__", demangle__STATE_VARIABLE_Str_0_21, &demangle__STATE_VARIABLE_Str_30_30);
                }
#line 399 "demangle.m"
                if (demangle__succeeded)
#line 399 "demangle.m"
                  {
#line 400 "demangle.m"
                    demangle__V_31_31 = (MR_String) "";
#line 400 "demangle.m"
                    demangle__IntroducedPredType0_11 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_2[0]);
#line 400 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 399 "demangle.m"
                  }
#line 399 "demangle.m"
              }
#line 394 "demangle.m"
          }
#line 390 "demangle.m"
      }
#line 385 "demangle.m"
    if (demangle__succeeded)
#line 418 "demangle.m"
      {
#line 418 "demangle.m"
        MR_String demangle__LambdaPredOrFunc_12;
#line 418 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_38_38;
#line 403 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_33_33;
#line 419 "demangle.m"
        MR_String demangle__PredName1_15;
#line 419 "demangle.m"
        MR_Word demangle__IntroducedPredType_18;
#line 419 "demangle.m"
        MR_Integer demangle__Seq_19;
#line 419 "demangle.m"
        MR_Integer demangle__Line_20;
#line 419 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_40_40;
#line 420 "demangle.m"
        MR_Word demangle__MPredName_14;
#line 420 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_39_39;
#line 821 "demangle.m"
        MR_Integer demangle__Index_49;
#line 821 "demangle.m"
        MR_String demangle__V_53_53;
#line 422 "demangle.m"
        MR_String demangle__V_16_16;

#line 404 "demangle.m"
        {
#line 404 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "pred__", demangle__STATE_VARIABLE_Str_30_30, &demangle__STATE_VARIABLE_Str_33_33);
        }
#line 403 "demangle.m"
        if (demangle__succeeded)
#line 406 "demangle.m"
          {
#line 406 "demangle.m"
            demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_33_33;
#line 406 "demangle.m"
            demangle__LambdaPredOrFunc_12 = (MR_String) "pred";
#line 406 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 406 "demangle.m"
          }
#line 403 "demangle.m"
        else
#line 407 "demangle.m"
          {
#line 407 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_35_35;

#line 408 "demangle.m"
            {
#line 408 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "func__", demangle__STATE_VARIABLE_Str_30_30, &demangle__STATE_VARIABLE_Str_35_35);
            }
#line 407 "demangle.m"
            if (demangle__succeeded)
#line 410 "demangle.m"
              {
#line 410 "demangle.m"
                demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_35_35;
#line 410 "demangle.m"
                demangle__LambdaPredOrFunc_12 = (MR_String) "func";
#line 410 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 410 "demangle.m"
              }
#line 407 "demangle.m"
            else
#line 411 "demangle.m"
              {
#line 411 "demangle.m"
                MR_String demangle__V_36_36;
#line 412 "demangle.m"
                MR_String demangle__V_13_13;

#line 412 "demangle.m"
                demangle__succeeded = ((MR_tag((MR_Word) demangle__IntroducedPredType0_11)) == (MR_mktag((MR_Integer) 1)));
#line 412 "demangle.m"
                if (demangle__succeeded)
#line 412 "demangle.m"
                  {
#line 412 "demangle.m"
                    demangle__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__IntroducedPredType0_11, (MR_Integer) 0)));
#line 413 "demangle.m"
                    demangle__V_36_36 = (MR_String) "pred_or_func__";
#line 413 "demangle.m"
                    {
#line 413 "demangle.m"
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_36_36, demangle__STATE_VARIABLE_Str_30_30, &demangle__STATE_VARIABLE_Str_38_38);
                    }
#line 411 "demangle.m"
                    if (demangle__succeeded)
#line 411 "demangle.m"
                      {
#line 415 "demangle.m"
                        demangle__LambdaPredOrFunc_12 = (MR_String) "";
#line 415 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 411 "demangle.m"
                      }
#line 412 "demangle.m"
                  }
#line 411 "demangle.m"
              }
#line 407 "demangle.m"
          }
#line 418 "demangle.m"
        if (demangle__succeeded)
#line 418 "demangle.m"
          {
#line 821 "demangle.m"
            demangle__V_53_53 = (MR_String) "__";
#line 821 "demangle.m"
            {
#line 821 "demangle.m"
              demangle__succeeded = mercury__string__sub_string_search_3_p_0(demangle__STATE_VARIABLE_Str_38_38, demangle__V_53_53, &demangle__Index_49);
            }
#line 821 "demangle.m"
            if (demangle__succeeded)
#line 822 "demangle.m"
              {
#line 822 "demangle.m"
                MR_String demangle__PredName_50;
#line 822 "demangle.m"
                MR_Integer demangle__Len_51;
#line 822 "demangle.m"
                MR_Integer demangle__Index2_52;

#line 822 "demangle.m"
                {
#line 822 "demangle.m"
                  mercury__string__left_3_p_0(demangle__STATE_VARIABLE_Str_38_38, demangle__Index_49, &demangle__PredName_50);
                }
#line 823 "demangle.m"
                {
#line 823 "demangle.m"
                  mercury__string__length_2_p_0(demangle__STATE_VARIABLE_Str_38_38, &demangle__Len_51);
                }
#line 824 "demangle.m"
                demangle__Index2_52 = (demangle__Index_49 + (MR_Integer) 2);
#line 825 "demangle.m"
                {
#line 825 "demangle.m"
                  mercury__string__between_4_p_0(demangle__STATE_VARIABLE_Str_38_38, demangle__Index2_52, demangle__Len_51, &demangle__STATE_VARIABLE_Str_39_39);
                }
#line 826 "demangle.m"
                {
#line 826 "demangle.m"
                  demangle__MPredName_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 826 "demangle.m"
                  MR_hl_field(MR_mktag(1), demangle__MPredName_14, 0) = ((MR_Box) (demangle__PredName_50));
#line 826 "demangle.m"
                }
#line 822 "demangle.m"
              }
#line 821 "demangle.m"
            else
#line 828 "demangle.m"
              {
#line 828 "demangle.m"
                demangle__STATE_VARIABLE_Str_39_39 = demangle__STATE_VARIABLE_Str_38_38;
#line 829 "demangle.m"
                demangle__MPredName_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 828 "demangle.m"
              }
#line 421 "demangle.m"
            demangle__succeeded = ((MR_tag((MR_Word) demangle__MPredName_14)) == (MR_mktag((MR_Integer) 1)));
#line 421 "demangle.m"
            if (demangle__succeeded)
#line 421 "demangle.m"
              {
#line 421 "demangle.m"
                demangle__PredName1_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MPredName_14, (MR_Integer) 0)));
#line 422 "demangle.m"
                demangle__succeeded = ((MR_tag((MR_Word) demangle__IntroducedPredType0_11)) == (MR_mktag((MR_Integer) 1)));
#line 422 "demangle.m"
                if (demangle__succeeded)
#line 422 "demangle.m"
                  {
#line 422 "demangle.m"
                    demangle__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__IntroducedPredType0_11, (MR_Integer) 0)));
#line 423 "demangle.m"
                    {
#line 423 "demangle.m"
                      MR_String demangle__TypeSpec_17;
#line 423 "demangle.m"
                      MR_Integer demangle__Length_58;
#line 423 "demangle.m"
                      MR_Integer demangle__NumBrackets_59;
#line 423 "demangle.m"
                      MR_Integer demangle__Index_60;
#line 423 "demangle.m"
                      MR_Integer demangle__V_62_62;
#line 423 "demangle.m"
                      MR_Char demangle__V_63_63;
#line 423 "demangle.m"
                      MR_Integer demangle__V_64_64;
#line 423 "demangle.m"
                      MR_Integer demangle__V_65_65;
#line 423 "demangle.m"
                      MR_Integer demangle__V_66_66;
#line 423 "demangle.m"
                      MR_Char demangle__V_67_67;

#line 835 "demangle.m"
                      {
#line 835 "demangle.m"
                        mercury__string__length_2_p_0(demangle__STATE_VARIABLE_Str_39_39, &demangle__Length_58);
                      }
#line 836 "demangle.m"
                      demangle__succeeded = (demangle__Length_58 > (MR_Integer) 2);
#line 423 "demangle.m"
                      if (demangle__succeeded)
#line 423 "demangle.m"
                        {
#line 837 "demangle.m"
                          demangle__V_62_62 = (MR_Integer) 0;
#line 837 "demangle.m"
                          demangle__V_63_63 = (MR_Char) 91;
#line 837 "demangle.m"
                          {
#line 837 "demangle.m"
                            mercury__string__unsafe_index_3_p_0(demangle__STATE_VARIABLE_Str_39_39, demangle__V_62_62, &demangle__V_67_67);
                          }
#line 837 "demangle.m"
                          demangle__succeeded = (demangle__V_63_63 == demangle__V_67_67);
#line 423 "demangle.m"
                          if (demangle__succeeded)
#line 423 "demangle.m"
                            {
#line 838 "demangle.m"
                              demangle__NumBrackets_59 = (MR_Integer) 0;
#line 840 "demangle.m"
                              demangle__V_64_64 = (MR_Integer) 1;
#line 839 "demangle.m"
                              {
#line 839 "demangle.m"
                                demangle__succeeded = demangle__find_matching_close_bracket_5_p_0(demangle__NumBrackets_59, demangle__Length_58, demangle__STATE_VARIABLE_Str_39_39, demangle__V_64_64, &demangle__Index_60);
                              }
#line 423 "demangle.m"
                              if (demangle__succeeded)
#line 423 "demangle.m"
                                {
#line 841 "demangle.m"
                                  demangle__V_66_66 = (MR_Integer) 1;
#line 841 "demangle.m"
                                  demangle__V_65_65 = (demangle__Index_60 + demangle__V_66_66);
#line 841 "demangle.m"
                                  {
#line 841 "demangle.m"
                                    mercury__string__split_4_p_0(demangle__STATE_VARIABLE_Str_39_39, demangle__V_65_65, &demangle__TypeSpec_17, &demangle__STATE_VARIABLE_Str_40_40);
                                  }
#line 425 "demangle.m"
                                  demangle__Seq_19 = (MR_Integer) 0;
#line 426 "demangle.m"
                                  demangle__Line_20 = (MR_Integer) 0;
#line 424 "demangle.m"
                                  {
#line 424 "demangle.m"
                                    demangle__IntroducedPredType_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 424 "demangle.m"
                                    MR_hl_field(MR_mktag(1), demangle__IntroducedPredType_18, 0) = ((MR_Box) (demangle__TypeSpec_17));
#line 424 "demangle.m"
                                  }
#line 424 "demangle.m"
                                  demangle__succeeded = MR_TRUE;
#line 423 "demangle.m"
                                }
#line 423 "demangle.m"
                            }
#line 423 "demangle.m"
                        }
#line 423 "demangle.m"
                    }
#line 422 "demangle.m"
                  }
#line 422 "demangle.m"
                else
#line 435 "demangle.m"
                  {
#line 435 "demangle.m"
                    MR_String demangle__STATE_VARIABLE_Str_41_41;
#line 435 "demangle.m"
                    MR_String demangle__V_42_42;
#line 435 "demangle.m"
                    MR_String demangle__STATE_VARIABLE_Str_43_43;
#line 435 "demangle.m"
                    MR_Integer demangle__Digit_72;
#line 435 "demangle.m"
                    MR_String demangle__STATE_VARIABLE_Str_9_73;
#line 435 "demangle.m"
                    MR_Char demangle__Char_78;
#line 435 "demangle.m"
                    MR_Integer demangle__Digit_83;
#line 435 "demangle.m"
                    MR_String demangle__STATE_VARIABLE_Str_9_84;
#line 435 "demangle.m"
                    MR_Char demangle__Char_89;

#line 435 "demangle.m"
                    demangle__IntroducedPredType_18 = demangle__IntroducedPredType0_11;
#line 766 "demangle.m"
                    {
#line 766 "demangle.m"
                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_39_39, &demangle__Char_78, &demangle__STATE_VARIABLE_Str_9_73);
                    }
#line 435 "demangle.m"
                    if (demangle__succeeded)
#line 435 "demangle.m"
                      {
#line 771 "demangle.m"
                        if ((((MR_Unsigned) (demangle__Char_78 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 771 "demangle.m"
                          {
#line 771 "demangle.m"
                            demangle__Digit_72 = ((&demangle_vector_common_3[0 + (demangle__Char_78 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
                          }
#line 771 "demangle.m"
                        else
#line 771 "demangle.m"
                          demangle__succeeded = MR_FALSE;
#line 435 "demangle.m"
                        if (demangle__succeeded)
#line 435 "demangle.m"
                          {
#line 751 "demangle.m"
                            {
#line 751 "demangle.m"
                              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_72, &demangle__Line_20, demangle__STATE_VARIABLE_Str_9_73, &demangle__STATE_VARIABLE_Str_41_41);
                            }
#line 435 "demangle.m"
                            if (demangle__succeeded)
#line 435 "demangle.m"
                              {
#line 437 "demangle.m"
                                demangle__V_42_42 = (MR_String) "__";
#line 437 "demangle.m"
                                {
#line 437 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_42_42, demangle__STATE_VARIABLE_Str_41_41, &demangle__STATE_VARIABLE_Str_43_43);
                                }
#line 435 "demangle.m"
                                if (demangle__succeeded)
#line 435 "demangle.m"
                                  {
#line 766 "demangle.m"
                                    {
#line 766 "demangle.m"
                                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__STATE_VARIABLE_Str_43_43, &demangle__Char_89, &demangle__STATE_VARIABLE_Str_9_84);
                                    }
#line 435 "demangle.m"
                                    if (demangle__succeeded)
#line 435 "demangle.m"
                                      {
#line 771 "demangle.m"
                                        if ((((MR_Unsigned) (demangle__Char_89 - (MR_Integer) 48)) <= ((MR_Unsigned) (MR_Integer) 9)))
#line 771 "demangle.m"
                                          {
#line 771 "demangle.m"
                                            demangle__Digit_83 = ((&demangle_vector_common_3[10 + (demangle__Char_89 - (MR_Integer) 48)]))->demangle__vector_common_type_3_0__vct_3_f_0;
#line 771 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
                                          }
#line 771 "demangle.m"
                                        else
#line 771 "demangle.m"
                                          demangle__succeeded = MR_FALSE;
#line 435 "demangle.m"
                                        if (demangle__succeeded)
#line 751 "demangle.m"
                                          {
#line 751 "demangle.m"
                                            demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_83, &demangle__Seq_19, demangle__STATE_VARIABLE_Str_9_84, &demangle__STATE_VARIABLE_Str_40_40);
                                          }
#line 435 "demangle.m"
                                      }
#line 435 "demangle.m"
                                  }
#line 435 "demangle.m"
                              }
#line 435 "demangle.m"
                          }
#line 435 "demangle.m"
                      }
#line 435 "demangle.m"
                  }
#line 421 "demangle.m"
              }
#line 419 "demangle.m"
            if (demangle__succeeded)
#line 441 "demangle.m"
              {
#line 441 "demangle.m"
                *demangle__STATE_VARIABLE_Str_22 = demangle__STATE_VARIABLE_Str_40_40;
#line 441 "demangle.m"
                *demangle__PredName_6 = demangle__PredName1_15;
#line 442 "demangle.m"
                {
#line 442 "demangle.m"
                  MR_Word base;
#line 442 "demangle.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 442 "demangle.m"
                  *demangle__Category_8 = base;
#line 442 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__IntroducedPredType_18));
#line 442 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (demangle__Line_20));
#line 442 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (demangle__Seq_19));
#line 442 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (demangle__LambdaPredOrFunc_12));
#line 442 "demangle.m"
                }
#line 441 "demangle.m"
              }
#line 419 "demangle.m"
            else
#line 448 "demangle.m"
              {
#line 448 "demangle.m"
                *demangle__Category_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 449 "demangle.m"
                *demangle__PredName_6 = demangle__STATE_VARIABLE_Str_0_21;
#line 448 "demangle.m"
                *demangle__STATE_VARIABLE_Str_22 = demangle__STATE_VARIABLE_Str_38_38;
#line 448 "demangle.m"
              }
#line 419 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 418 "demangle.m"
          }
#line 418 "demangle.m"
      }
#line 385 "demangle.m"
    else
#line 452 "demangle.m"
      {
#line 452 "demangle.m"
        *demangle__Category_8 = demangle__Category0_7;
#line 453 "demangle.m"
        *demangle__PredName_6 = demangle__STATE_VARIABLE_Str_0_21;
#line 452 "demangle.m"
        *demangle__STATE_VARIABLE_Str_22 = demangle__STATE_VARIABLE_Str_0_21;
#line 452 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 452 "demangle.m"
      }
#line 385 "demangle.m"
    return demangle__succeeded;
#line 385 "demangle.m"
  }
#line 376 "demangle.m"
}

#line 355 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
#line 355 "demangle.m"
  MR_Integer demangle__ModeNum0_5,
#line 355 "demangle.m"
  MR_Word * demangle__Category0_6,
#line 355 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_8,
#line 355 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_9)
#line 355 "demangle.m"
{
#line 359 "demangle.m"
  {
#line 359 "demangle.m"
    MR_bool demangle__succeeded;
#line 359 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_11_11;

#line 359 "demangle.m"
    {
#line 359 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Unify__", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_11_11);
    }
#line 359 "demangle.m"
    if (demangle__succeeded)
#line 360 "demangle.m"
      {
#line 360 "demangle.m"
        *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_11_11;
#line 360 "demangle.m"
        *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 360 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 360 "demangle.m"
      }
#line 359 "demangle.m"
    else
#line 361 "demangle.m"
      {
#line 361 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_13_13;

#line 361 "demangle.m"
        {
#line 361 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_13_13);
        }
#line 361 "demangle.m"
        if (demangle__succeeded)
#line 362 "demangle.m"
          {
#line 364 "demangle.m"
            demangle__succeeded = (demangle__ModeNum0_5 == (MR_Integer) 0);
#line 362 "demangle.m"
            if (demangle__succeeded)
#line 362 "demangle.m"
              {
#line 362 "demangle.m"
                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_13_13;
#line 362 "demangle.m"
                *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 362 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 362 "demangle.m"
              }
#line 362 "demangle.m"
          }
#line 361 "demangle.m"
        else
#line 365 "demangle.m"
          {
#line 365 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_15_15;

#line 365 "demangle.m"
            {
#line 365 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", demangle__STATE_VARIABLE_Str_0_8, &demangle__STATE_VARIABLE_Str_15_15);
            }
#line 365 "demangle.m"
            if (demangle__succeeded)
#line 366 "demangle.m"
              {
#line 368 "demangle.m"
                demangle__succeeded = (demangle__ModeNum0_5 == (MR_Integer) 0);
#line 366 "demangle.m"
                if (demangle__succeeded)
#line 366 "demangle.m"
                  {
#line 366 "demangle.m"
                    *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_15_15;
#line 366 "demangle.m"
                    *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 366 "demangle.m"
                  }
#line 366 "demangle.m"
              }
#line 365 "demangle.m"
            else
#line 370 "demangle.m"
              {
#line 370 "demangle.m"
                *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 370 "demangle.m"
                *demangle__STATE_VARIABLE_Str_9 = demangle__STATE_VARIABLE_Str_0_8;
#line 370 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 370 "demangle.m"
              }
#line 365 "demangle.m"
          }
#line 361 "demangle.m"
      }
#line 359 "demangle.m"
    return demangle__succeeded;
#line 359 "demangle.m"
  }
#line 355 "demangle.m"
}

#line 333 "demangle.m"
static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
#line 333 "demangle.m"
  MR_Word * demangle__HigherOrder_6,
#line 333 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 333 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 333 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_11,
#line 333 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_12)
#line 333 "demangle.m"
{
#line 336 "demangle.m"
  {
#line 336 "demangle.m"
    MR_bool demangle__succeeded;
#line 340 "demangle.m"
    MR_Integer demangle__HO_Num_10;
#line 340 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_15_15;
#line 341 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_13_13;
#line 341 "demangle.m"
    MR_String demangle__V_14_14;

#line 341 "demangle.m"
    {
#line 341 "demangle.m"
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__HO_Num_10, demangle__STATE_VARIABLE_Str_0_11, &demangle__STATE_VARIABLE_Str_13_13);
    }
#line 341 "demangle.m"
    if (demangle__succeeded)
#line 341 "demangle.m"
      {
#line 342 "demangle.m"
        demangle__V_14_14 = (MR_String) "__ho";
#line 876 "demangle.m"
        {
#line 876 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_13_13, demangle__V_14_14, &demangle__STATE_VARIABLE_Str_15_15);
        }
#line 341 "demangle.m"
      }
#line 340 "demangle.m"
    if (demangle__succeeded)
#line 344 "demangle.m"
      {
#line 344 "demangle.m"
        *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_15_15;
#line 344 "demangle.m"
        {
#line 344 "demangle.m"
          MR_Word base;
#line 344 "demangle.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "demangle.m"
          *demangle__HigherOrder_6 = base;
#line 344 "demangle.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__HO_Num_10));
#line 344 "demangle.m"
        }
#line 344 "demangle.m"
      }
#line 340 "demangle.m"
    else
#line 346 "demangle.m"
      {
#line 346 "demangle.m"
        *demangle__HigherOrder_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 346 "demangle.m"
        *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_0_11;
#line 346 "demangle.m"
      }
#line 348 "demangle.m"
    *demangle__ModeNum_8 = demangle__ModeNum0_7;
#line 336 "demangle.m"
  }
#line 333 "demangle.m"
}

#line 307 "demangle.m"
static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
#line 307 "demangle.m"
  MR_Word * demangle__UnusedArgs_6,
#line 307 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 307 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 307 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_11,
#line 307 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_12)
#line 307 "demangle.m"
{
#line 316 "demangle.m"
  {
#line 316 "demangle.m"
    MR_bool demangle__succeeded;
#line 316 "demangle.m"
    MR_Integer demangle__UA_ModeNum_10;
#line 316 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_15_15;
#line 317 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_13_13;
#line 317 "demangle.m"
    MR_String demangle__V_14_14;

#line 317 "demangle.m"
    {
#line 317 "demangle.m"
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__UA_ModeNum_10, demangle__STATE_VARIABLE_Str_0_11, &demangle__STATE_VARIABLE_Str_13_13);
    }
#line 317 "demangle.m"
    if (demangle__succeeded)
#line 317 "demangle.m"
      {
#line 318 "demangle.m"
        demangle__V_14_14 = (MR_String) "__ua";
#line 876 "demangle.m"
        {
#line 876 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_13_13, demangle__V_14_14, &demangle__STATE_VARIABLE_Str_15_15);
        }
#line 317 "demangle.m"
      }
#line 316 "demangle.m"
    if (demangle__succeeded)
#line 320 "demangle.m"
      {
#line 320 "demangle.m"
        MR_Word demangle__V_16_16;

#line 320 "demangle.m"
        *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_15_15;
#line 320 "demangle.m"
        {
#line 320 "demangle.m"
          demangle__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 320 "demangle.m"
          MR_hl_field(MR_mktag(0), demangle__V_16_16, 0) = ((MR_Box) (demangle__ModeNum0_7));
#line 320 "demangle.m"
          MR_hl_field(MR_mktag(0), demangle__V_16_16, 1) = ((MR_Box) ((MR_Integer) 0));
#line 320 "demangle.m"
        }
#line 320 "demangle.m"
        {
#line 320 "demangle.m"
          MR_Word base;
#line 320 "demangle.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 320 "demangle.m"
          *demangle__UnusedArgs_6 = base;
#line 320 "demangle.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__V_16_16));
#line 320 "demangle.m"
        }
#line 321 "demangle.m"
        {
#line 321 "demangle.m"
          *demangle__ModeNum_8 = mercury__int__mod_2_f_0(demangle__UA_ModeNum_10, (MR_Integer) 10000);
        }
#line 320 "demangle.m"
      }
#line 316 "demangle.m"
    else
#line 322 "demangle.m"
      {
#line 322 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_21_21;
#line 322 "demangle.m"
        MR_Integer demangle__UA_ModeNum_26;
#line 323 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_19_19;
#line 323 "demangle.m"
        MR_String demangle__V_20_20;

#line 323 "demangle.m"
        {
#line 323 "demangle.m"
          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__UA_ModeNum_26, demangle__STATE_VARIABLE_Str_0_11, &demangle__STATE_VARIABLE_Str_19_19);
        }
#line 323 "demangle.m"
        if (demangle__succeeded)
#line 323 "demangle.m"
          {
#line 324 "demangle.m"
            demangle__V_20_20 = (MR_String) "__uab";
#line 876 "demangle.m"
            {
#line 876 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_19_19, demangle__V_20_20, &demangle__STATE_VARIABLE_Str_21_21);
            }
#line 323 "demangle.m"
          }
#line 322 "demangle.m"
        if (demangle__succeeded)
#line 326 "demangle.m"
          {
#line 326 "demangle.m"
            MR_Word demangle__V_22_22;

#line 326 "demangle.m"
            *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_21_21;
#line 326 "demangle.m"
            {
#line 326 "demangle.m"
              demangle__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 326 "demangle.m"
              MR_hl_field(MR_mktag(0), demangle__V_22_22, 0) = ((MR_Box) (demangle__ModeNum0_7));
#line 326 "demangle.m"
              MR_hl_field(MR_mktag(0), demangle__V_22_22, 1) = ((MR_Box) ((MR_Integer) 1));
#line 326 "demangle.m"
            }
#line 326 "demangle.m"
            {
#line 326 "demangle.m"
              MR_Word base;
#line 326 "demangle.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "demangle.m"
              *demangle__UnusedArgs_6 = base;
#line 326 "demangle.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__V_22_22));
#line 326 "demangle.m"
            }
#line 327 "demangle.m"
            {
#line 327 "demangle.m"
              *demangle__ModeNum_8 = mercury__int__mod_2_f_0(demangle__UA_ModeNum_26, (MR_Integer) 10000);
            }
#line 326 "demangle.m"
          }
#line 322 "demangle.m"
        else
#line 329 "demangle.m"
          {
#line 329 "demangle.m"
            *demangle__UnusedArgs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 330 "demangle.m"
            *demangle__ModeNum_8 = demangle__ModeNum0_7;
#line 329 "demangle.m"
            *demangle__STATE_VARIABLE_Str_12 = demangle__STATE_VARIABLE_Str_0_11;
#line 329 "demangle.m"
          }
#line 322 "demangle.m"
      }
#line 316 "demangle.m"
  }
#line 307 "demangle.m"
}

#line 182 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
#line 182 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_28,
#line 182 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_29)
#line 182 "demangle.m"
{
#line 184 "demangle.m"
  {
#line 184 "demangle.m"
    MR_bool demangle__succeeded;
#line 184 "demangle.m"
    MR_Integer demangle__Int_4;
#line 184 "demangle.m"
    MR_Integer demangle__ModeNum1_6;
#line 184 "demangle.m"
    MR_Word demangle__MaybeInternalLabelNum0_7;
#line 184 "demangle.m"
    MR_String demangle__PredOrFunc_8;
#line 184 "demangle.m"
    MR_Integer demangle__Arity_11;
#line 184 "demangle.m"
    MR_Word demangle__MaybeInternalLabelNum_13;
#line 184 "demangle.m"
    MR_Word demangle__UnusedArgs_14;
#line 184 "demangle.m"
    MR_Word demangle__HigherOrder_16;
#line 184 "demangle.m"
    MR_Integer demangle__ModeNum_17;
#line 184 "demangle.m"
    MR_Word demangle__MaybeModule0_19;
#line 184 "demangle.m"
    MR_Word demangle__Category0_20;
#line 184 "demangle.m"
    MR_Word demangle__MaybeModule_21;
#line 184 "demangle.m"
    MR_String demangle__PredName_24;
#line 184 "demangle.m"
    MR_Word demangle__Category_25;
#line 184 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_31_31;
#line 184 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_32_32;
#line 184 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_36_36;
#line 184 "demangle.m"
    MR_String demangle__V_46_46;
#line 184 "demangle.m"
    MR_Word demangle__V_51_51;
#line 184 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_67_67;
#line 184 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_68_68;
#line 867 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_8_75;
#line 192 "demangle.m"
    MR_Integer demangle__ModeNum0_5;
#line 192 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_35_35;
#line 196 "demangle.m"
    MR_String demangle__V_33_33;
#line 196 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_34_34;
#line 6532 "demangle.c"
    MR_String demangle__STATE_VARIABLE_Str_38_38;
#line 208 "demangle.m"
    MR_String demangle__V_37_37;
#line 299 "demangle.m"
    MR_String demangle___Str_26;

#line 867 "demangle.m"
    {
#line 867 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__STATE_VARIABLE_Str_0_28, &demangle__STATE_VARIABLE_Str_8_75);
    }
#line 867 "demangle.m"
    if (demangle__succeeded)
#line 867 "demangle.m"
      demangle__STATE_VARIABLE_Str_31_31 = demangle__STATE_VARIABLE_Str_8_75;
#line 867 "demangle.m"
    else
#line 867 "demangle.m"
      demangle__STATE_VARIABLE_Str_31_31 = demangle__STATE_VARIABLE_Str_0_28;
#line 191 "demangle.m"
    {
#line 191 "demangle.m"
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Int_4, demangle__STATE_VARIABLE_Str_31_31, &demangle__STATE_VARIABLE_Str_32_32);
    }
#line 184 "demangle.m"
    if (demangle__succeeded)
#line 184 "demangle.m"
      {
#line 196 "demangle.m"
        demangle__V_33_33 = (MR_String) "_";
#line 876 "demangle.m"
        {
#line 876 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_32_32, demangle__V_33_33, &demangle__STATE_VARIABLE_Str_34_34);
        }
#line 196 "demangle.m"
        if (demangle__succeeded)
#line 197 "demangle.m"
          {
#line 197 "demangle.m"
            demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__ModeNum0_5, demangle__STATE_VARIABLE_Str_34_34, &demangle__STATE_VARIABLE_Str_35_35);
          }
#line 192 "demangle.m"
        if (demangle__succeeded)
#line 199 "demangle.m"
          {
#line 199 "demangle.m"
            demangle__STATE_VARIABLE_Str_36_36 = demangle__STATE_VARIABLE_Str_35_35;
#line 199 "demangle.m"
            demangle__ModeNum1_6 = demangle__ModeNum0_5;
#line 200 "demangle.m"
            {
#line 200 "demangle.m"
              demangle__MaybeInternalLabelNum0_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 200 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum0_7, 0) = ((MR_Box) (demangle__Int_4));
#line 200 "demangle.m"
            }
#line 199 "demangle.m"
          }
#line 192 "demangle.m"
        else
#line 202 "demangle.m"
          {
#line 202 "demangle.m"
            demangle__ModeNum1_6 = demangle__Int_4;
#line 203 "demangle.m"
            demangle__MaybeInternalLabelNum0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 202 "demangle.m"
            demangle__STATE_VARIABLE_Str_36_36 = demangle__STATE_VARIABLE_Str_32_32;
#line 202 "demangle.m"
          }
#line 237 "demangle.m"
        demangle__V_46_46 = (MR_String) "_";
#line 254 "demangle.m"
        demangle__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[10]);
#line 208 "demangle.m"
        demangle__V_37_37 = (MR_String) "f_";
#line 876 "demangle.m"
        {
#line 876 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_36, demangle__V_37_37, &demangle__STATE_VARIABLE_Str_38_38);
        }
#line 6616 "demangle.c"
        if (demangle__succeeded)
#line 6618 "demangle.c"
          {
#line 6620 "demangle.c"
            MR_Integer demangle__ModeNum3_15;
#line 6622 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_43_43;
#line 6624 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_44_44;
#line 6626 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_47_47;
#line 6628 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_48_48;
#line 6630 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_50_50;
#line 6632 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_52_52;
#line 6634 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_65_65;

#line 209 "demangle.m"
            demangle__PredOrFunc_8 = (MR_String) "function";
#line 876 "demangle.m"
            {
#line 876 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_38_38, (MR_String) "_", &demangle__STATE_VARIABLE_Str_43_43);
            }
#line 6644 "demangle.c"
            if (demangle__succeeded)
#line 6646 "demangle.c"
              {
#line 223 "demangle.m"
                {
#line 223 "demangle.m"
                  demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_11, demangle__STATE_VARIABLE_Str_43_43, &demangle__STATE_VARIABLE_Str_44_44);
                }
#line 6653 "demangle.c"
                if (demangle__succeeded)
#line 6655 "demangle.c"
                  {
#line 227 "demangle.m"
                    demangle__MaybeInternalLabelNum_13 = demangle__MaybeInternalLabelNum0_7;
#line 876 "demangle.m"
                    {
#line 876 "demangle.m"
                      demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_44_44, demangle__V_46_46, &demangle__STATE_VARIABLE_Str_47_47);
                    }
#line 6664 "demangle.c"
                    if (demangle__succeeded)
#line 6666 "demangle.c"
                      {
#line 243 "demangle.m"
                        {
#line 243 "demangle.m"
                          demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_14, demangle__ModeNum1_6, &demangle__ModeNum3_15, demangle__STATE_VARIABLE_Str_47_47, &demangle__STATE_VARIABLE_Str_48_48);
                        }
#line 244 "demangle.m"
                        {
#line 244 "demangle.m"
                          demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_16, demangle__ModeNum3_15, &demangle__ModeNum_17, demangle__STATE_VARIABLE_Str_48_48, &demangle__STATE_VARIABLE_Str_50_50);
                        }
#line 254 "demangle.m"
                        {
#line 254 "demangle.m"
                          demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_19, demangle__V_51_51, demangle__STATE_VARIABLE_Str_50_50, &demangle__STATE_VARIABLE_Str_52_52);
                        }
#line 262 "demangle.m"
                        {
#line 262 "demangle.m"
                          demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_17, &demangle__Category0_20, demangle__STATE_VARIABLE_Str_52_52, &demangle__STATE_VARIABLE_Str_65_65);
                        }
#line 6688 "demangle.c"
                        if (demangle__succeeded)
#line 6690 "demangle.c"
                          {
#line 263 "demangle.m"
                            demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 263 "demangle.m"
                            if (demangle__succeeded)
#line 263 "demangle.m"
                              {
#line 263 "demangle.m"
                                demangle__STATE_VARIABLE_Str_67_67 = demangle__STATE_VARIABLE_Str_65_65;
#line 263 "demangle.m"
                                demangle__succeeded = MR_TRUE;
#line 263 "demangle.m"
                              }
#line 263 "demangle.m"
                            else
#line 266 "demangle.m"
                              {
#line 266 "demangle.m"
                                {
#line 266 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__STATE_VARIABLE_Str_65_65, &demangle__STATE_VARIABLE_Str_67_67);
                                }
#line 266 "demangle.m"
                              }
#line 6715 "demangle.c"
                            if (demangle__succeeded)
#line 271 "demangle.m"
                              demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 6719 "demangle.c"
                          }
#line 6721 "demangle.c"
                      }
#line 6723 "demangle.c"
                  }
#line 6725 "demangle.c"
              }
#line 6727 "demangle.c"
          }
#line 6729 "demangle.c"
        else
#line 6731 "demangle.c"
          {
#line 6733 "demangle.c"
            MR_String demangle__STATE_VARIABLE_Str_40_40;

#line 876 "demangle.m"
            {
#line 876 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_36, (MR_String) "p_", &demangle__STATE_VARIABLE_Str_40_40);
            }
#line 6741 "demangle.c"
            if (demangle__succeeded)
#line 6743 "demangle.c"
              {
#line 6745 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_45_45;
#line 6747 "demangle.c"
                MR_Integer demangle__ModeNum3_145;
#line 6749 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_43_147;
#line 6751 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_47_148;
#line 6753 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_48_149;
#line 6755 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_50_150;
#line 6757 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_52_151;
#line 6759 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_65_152;

#line 212 "demangle.m"
                demangle__PredOrFunc_8 = (MR_String) "predicate";
#line 876 "demangle.m"
                {
#line 876 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_40_40, (MR_String) "_", &demangle__STATE_VARIABLE_Str_43_147);
                }
#line 6769 "demangle.c"
                if (demangle__succeeded)
#line 6771 "demangle.c"
                  {
#line 223 "demangle.m"
                    {
#line 223 "demangle.m"
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_11, demangle__STATE_VARIABLE_Str_43_147, &demangle__STATE_VARIABLE_Str_45_45);
                    }
#line 6778 "demangle.c"
                    if (demangle__succeeded)
#line 6780 "demangle.c"
                      {
#line 227 "demangle.m"
                        demangle__MaybeInternalLabelNum_13 = demangle__MaybeInternalLabelNum0_7;
#line 876 "demangle.m"
                        {
#line 876 "demangle.m"
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_45_45, demangle__V_46_46, &demangle__STATE_VARIABLE_Str_47_148);
                        }
#line 6789 "demangle.c"
                        if (demangle__succeeded)
#line 6791 "demangle.c"
                          {
#line 243 "demangle.m"
                            {
#line 243 "demangle.m"
                              demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_14, demangle__ModeNum1_6, &demangle__ModeNum3_145, demangle__STATE_VARIABLE_Str_47_148, &demangle__STATE_VARIABLE_Str_48_149);
                            }
#line 244 "demangle.m"
                            {
#line 244 "demangle.m"
                              demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_16, demangle__ModeNum3_145, &demangle__ModeNum_17, demangle__STATE_VARIABLE_Str_48_149, &demangle__STATE_VARIABLE_Str_50_150);
                            }
#line 254 "demangle.m"
                            {
#line 254 "demangle.m"
                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_19, demangle__V_51_51, demangle__STATE_VARIABLE_Str_50_150, &demangle__STATE_VARIABLE_Str_52_151);
                            }
#line 262 "demangle.m"
                            {
#line 262 "demangle.m"
                              demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_17, &demangle__Category0_20, demangle__STATE_VARIABLE_Str_52_151, &demangle__STATE_VARIABLE_Str_65_152);
                            }
#line 6813 "demangle.c"
                            if (demangle__succeeded)
#line 6815 "demangle.c"
                              {
#line 263 "demangle.m"
                                demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 263 "demangle.m"
                                if (demangle__succeeded)
#line 263 "demangle.m"
                                  {
#line 263 "demangle.m"
                                    demangle__STATE_VARIABLE_Str_67_67 = demangle__STATE_VARIABLE_Str_65_152;
#line 263 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 263 "demangle.m"
                                  }
#line 263 "demangle.m"
                                else
#line 266 "demangle.m"
                                  {
#line 266 "demangle.m"
                                    {
#line 266 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__STATE_VARIABLE_Str_65_152, &demangle__STATE_VARIABLE_Str_67_67);
                                    }
#line 266 "demangle.m"
                                  }
#line 6840 "demangle.c"
                                if (demangle__succeeded)
#line 271 "demangle.m"
                                  demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 6844 "demangle.c"
                              }
#line 6846 "demangle.c"
                          }
#line 6848 "demangle.c"
                      }
#line 6850 "demangle.c"
                  }
#line 6852 "demangle.c"
              }
#line 6854 "demangle.c"
            else
#line 6856 "demangle.c"
              {
#line 6858 "demangle.c"
                MR_Integer demangle__ModeNum2_125;
#line 6860 "demangle.c"
                MR_Integer demangle__ModeNum3_126;
#line 6862 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_45_132;
#line 6864 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_47_133;
#line 6866 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_48_134;
#line 6868 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_49_135;
#line 6870 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_50_136;
#line 6872 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_52_137;
#line 6874 "demangle.c"
                MR_String demangle__STATE_VARIABLE_Str_65_138;
#line 220 "demangle.m"
                MR_Integer demangle__Arity0_113;
#line 220 "demangle.m"
                MR_String demangle__STATE_VARIABLE_Str_44_116;
#line 222 "demangle.m"
                MR_String demangle__STATE_VARIABLE_Str_43_112;
#line 247 "demangle.m"
                MR_Word demangle__V_117_117;

#line 216 "demangle.m"
                demangle__PredOrFunc_8 = (MR_String) "predicate";
#line 876 "demangle.m"
                {
#line 876 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_36, (MR_String) "_", &demangle__STATE_VARIABLE_Str_43_112);
                }
#line 222 "demangle.m"
                if (demangle__succeeded)
#line 223 "demangle.m"
                  {
#line 223 "demangle.m"
                    demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity0_113, demangle__STATE_VARIABLE_Str_43_112, &demangle__STATE_VARIABLE_Str_44_116);
                  }
#line 220 "demangle.m"
                if (demangle__succeeded)
#line 225 "demangle.m"
                  {
#line 225 "demangle.m"
                    demangle__STATE_VARIABLE_Str_45_132 = demangle__STATE_VARIABLE_Str_44_116;
#line 225 "demangle.m"
                    demangle__Arity_11 = demangle__Arity0_113;
#line 226 "demangle.m"
                    demangle__ModeNum2_125 = demangle__ModeNum1_6;
#line 227 "demangle.m"
                    demangle__MaybeInternalLabelNum_13 = demangle__MaybeInternalLabelNum0_7;
#line 225 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 225 "demangle.m"
                  }
#line 220 "demangle.m"
                else
#line 232 "demangle.m"
                  {
#line 233 "demangle.m"
                    demangle__Arity_11 = demangle__ModeNum1_6;
#line 234 "demangle.m"
                    demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeInternalLabelNum0_7)) == (MR_mktag((MR_Integer) 1)));
#line 234 "demangle.m"
                    if (demangle__succeeded)
#line 234 "demangle.m"
                      {
#line 234 "demangle.m"
                        demangle__ModeNum2_125 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum0_7, (MR_Integer) 0)));
#line 235 "demangle.m"
                        demangle__MaybeInternalLabelNum_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "demangle.m"
                        demangle__STATE_VARIABLE_Str_45_132 = demangle__STATE_VARIABLE_Str_36_36;
#line 232 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 234 "demangle.m"
                      }
#line 232 "demangle.m"
                  }
#line 6939 "demangle.c"
                if (demangle__succeeded)
#line 6941 "demangle.c"
                  {
#line 876 "demangle.m"
                    {
#line 876 "demangle.m"
                      demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_45_132, demangle__V_46_46, &demangle__STATE_VARIABLE_Str_47_133);
                    }
#line 6948 "demangle.c"
                    if (demangle__succeeded)
#line 6950 "demangle.c"
                      {
#line 243 "demangle.m"
                        {
#line 243 "demangle.m"
                          demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_14, demangle__ModeNum2_125, &demangle__ModeNum3_126, demangle__STATE_VARIABLE_Str_47_133, &demangle__STATE_VARIABLE_Str_48_134);
                        }
#line 244 "demangle.m"
                        {
#line 244 "demangle.m"
                          demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_16, demangle__ModeNum3_126, &demangle__ModeNum_17, demangle__STATE_VARIABLE_Str_48_134, &demangle__STATE_VARIABLE_Str_49_135);
                        }
#line 247 "demangle.m"
                        demangle__succeeded = ((MR_tag((MR_Word) demangle__UnusedArgs_14)) == (MR_mktag((MR_Integer) 1)));
#line 247 "demangle.m"
                        if (demangle__succeeded)
#line 247 "demangle.m"
                          {
#line 247 "demangle.m"
                            demangle__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_14, (MR_Integer) 0)));
#line 248 "demangle.m"
                            {
#line 248 "demangle.m"
                              MR_Integer demangle__V_118_118;

#line 248 "demangle.m"
                              {
#line 248 "demangle.m"
                                demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__V_118_118, demangle__STATE_VARIABLE_Str_49_135, &demangle__STATE_VARIABLE_Str_50_136);
                              }
#line 248 "demangle.m"
                              if (demangle__succeeded)
#line 248 "demangle.m"
                                demangle__succeeded = (demangle__Arity_11 == demangle__V_118_118);
#line 248 "demangle.m"
                            }
#line 247 "demangle.m"
                          }
#line 247 "demangle.m"
                        else
#line 247 "demangle.m"
                          {
#line 247 "demangle.m"
                            demangle__STATE_VARIABLE_Str_50_136 = demangle__STATE_VARIABLE_Str_49_135;
#line 247 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 247 "demangle.m"
                          }
#line 6998 "demangle.c"
                        if (demangle__succeeded)
#line 7000 "demangle.c"
                          {
#line 254 "demangle.m"
                            {
#line 254 "demangle.m"
                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_19, demangle__V_51_51, demangle__STATE_VARIABLE_Str_50_136, &demangle__STATE_VARIABLE_Str_52_137);
                            }
#line 262 "demangle.m"
                            {
#line 262 "demangle.m"
                              demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_17, &demangle__Category0_20, demangle__STATE_VARIABLE_Str_52_137, &demangle__STATE_VARIABLE_Str_65_138);
                            }
#line 7012 "demangle.c"
                            if (demangle__succeeded)
#line 7014 "demangle.c"
                              {
#line 263 "demangle.m"
                                demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 263 "demangle.m"
                                if (demangle__succeeded)
#line 263 "demangle.m"
                                  {
#line 263 "demangle.m"
                                    demangle__STATE_VARIABLE_Str_67_67 = demangle__STATE_VARIABLE_Str_65_138;
#line 263 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 263 "demangle.m"
                                  }
#line 263 "demangle.m"
                                else
#line 266 "demangle.m"
                                  {
#line 266 "demangle.m"
                                    {
#line 266 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__STATE_VARIABLE_Str_65_138, &demangle__STATE_VARIABLE_Str_67_67);
                                    }
#line 266 "demangle.m"
                                  }
#line 7039 "demangle.c"
                                if (demangle__succeeded)
#line 7041 "demangle.c"
                                  {
#line 272 "demangle.m"
                                    demangle__succeeded = (demangle__Category0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 272 "demangle.m"
                                    demangle__succeeded = !(demangle__succeeded);
#line 7047 "demangle.c"
                                  }
#line 7049 "demangle.c"
                              }
#line 7051 "demangle.c"
                          }
#line 7053 "demangle.c"
                      }
#line 7055 "demangle.c"
                  }
#line 7057 "demangle.c"
              }
#line 7059 "demangle.c"
          }
#line 184 "demangle.m"
        if (demangle__succeeded)
#line 184 "demangle.m"
          {
#line 284 "demangle.m"
            {
#line 284 "demangle.m"
              demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_67_67, &demangle__STATE_VARIABLE_Str_68_68);
            }
#line 184 "demangle.m"
            if (demangle__succeeded)
#line 184 "demangle.m"
              {
#line 290 "demangle.m"
                if ((demangle__MaybeModule0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 289 "demangle.m"
                  {
#line 289 "demangle.m"
                    demangle__MaybeModule_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 289 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 289 "demangle.m"
                  }
#line 290 "demangle.m"
                else
#line 291 "demangle.m"
                  {
#line 291 "demangle.m"
                    MR_String demangle__ModuleName0_22 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_19, (MR_Integer) 0)));
#line 291 "demangle.m"
                    MR_String demangle__ModuleName_23;

#line 292 "demangle.m"
                    {
#line 292 "demangle.m"
                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__ModuleName0_22, &demangle__ModuleName_23);
                    }
#line 291 "demangle.m"
                    if (demangle__succeeded)
#line 291 "demangle.m"
                      {
#line 293 "demangle.m"
                        {
#line 293 "demangle.m"
                          demangle__MaybeModule_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 293 "demangle.m"
                          MR_hl_field(MR_mktag(1), demangle__MaybeModule_21, 0) = ((MR_Box) (demangle__ModuleName_23));
#line 293 "demangle.m"
                        }
#line 293 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 291 "demangle.m"
                      }
#line 291 "demangle.m"
                  }
#line 184 "demangle.m"
                if (demangle__succeeded)
#line 184 "demangle.m"
                  {
#line 299 "demangle.m"
                    {
#line 299 "demangle.m"
                      demangle__succeeded = demangle__handle_category_etc_5_p_0(&demangle__PredName_24, demangle__Category0_20, &demangle__Category_25, demangle__STATE_VARIABLE_Str_68_68, &demangle___Str_26);
                    }
#line 184 "demangle.m"
                    if (demangle__succeeded)
#line 184 "demangle.m"
                      {
#line 302 "demangle.m"
                        {
#line 302 "demangle.m"
                          demangle__format_proc_10_p_0(demangle__Category_25, demangle__MaybeModule_21, demangle__PredOrFunc_8, demangle__PredName_24, demangle__Arity_11, demangle__ModeNum_17, demangle__HigherOrder_16, demangle__UnusedArgs_14, demangle__MaybeInternalLabelNum_13, demangle__STATE_VARIABLE_Str_29);
                        }
#line 302 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 184 "demangle.m"
                      }
#line 184 "demangle.m"
                  }
#line 184 "demangle.m"
              }
#line 184 "demangle.m"
          }
#line 184 "demangle.m"
      }
#line 184 "demangle.m"
    return demangle__succeeded;
#line 184 "demangle.m"
  }
#line 182 "demangle.m"
}

#line 100 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
#line 100 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_20,
#line 100 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_21)
#line 100 "demangle.m"
{
#line 102 "demangle.m"
  {
#line 102 "demangle.m"
    MR_bool demangle__succeeded;
#line 102 "demangle.m"
    MR_String demangle__PredOrFunc_4;
#line 102 "demangle.m"
    MR_Integer demangle__Int_5;
#line 102 "demangle.m"
    MR_Word demangle__MaybeInternalLabelNum_6;
#line 102 "demangle.m"
    MR_Integer demangle__ModeNum0_7;
#line 102 "demangle.m"
    MR_Integer demangle__Arity_8;
#line 102 "demangle.m"
    MR_Word demangle__Category0_9;
#line 102 "demangle.m"
    MR_Word demangle__UnusedArgs_10;
#line 102 "demangle.m"
    MR_Integer demangle__ModeNum1_11;
#line 102 "demangle.m"
    MR_Word demangle__HigherOrder_12;
#line 102 "demangle.m"
    MR_Integer demangle__ModeNum_13;
#line 102 "demangle.m"
    MR_Word demangle__MaybeModule_15;
#line 102 "demangle.m"
    MR_String demangle__PredName_16;
#line 102 "demangle.m"
    MR_Word demangle__Category_17;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_23_23;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_26_26;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_27_27;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_32_32;
#line 102 "demangle.m"
    MR_String demangle__V_33_33;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_34_34;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_35_35;
#line 102 "demangle.m"
    MR_String demangle__V_36_36;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_37_37;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_38_38;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_39_39;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_40_40;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_41_41;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_42_42;
#line 102 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_44_44;
#line 106 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_25_25;
#line 106 "demangle.m"
    MR_String demangle__V_24_24;
#line 116 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_29_29;
#line 116 "demangle.m"
    MR_String demangle__V_28_28;
#line 359 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_11_90;
#line 359 "demangle.m"
    MR_String demangle__V_89_89;
#line 151 "demangle.m"
    MR_Word demangle__V_14_14;
#line 174 "demangle.m"
    MR_String demangle___Str_18;

#line 103 "demangle.m"
    {
#line 103 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__STATE_VARIABLE_Str_0_20, &demangle__STATE_VARIABLE_Str_23_23);
    }
#line 102 "demangle.m"
    if (demangle__succeeded)
#line 102 "demangle.m"
      {
#line 106 "demangle.m"
        demangle__V_24_24 = (MR_String) "fn__";
#line 106 "demangle.m"
        {
#line 106 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_24_24, demangle__STATE_VARIABLE_Str_23_23, &demangle__STATE_VARIABLE_Str_25_25);
        }
#line 106 "demangle.m"
        if (demangle__succeeded)
#line 107 "demangle.m"
          {
#line 107 "demangle.m"
            demangle__STATE_VARIABLE_Str_26_26 = demangle__STATE_VARIABLE_Str_25_25;
#line 107 "demangle.m"
            demangle__PredOrFunc_4 = (MR_String) "function";
#line 107 "demangle.m"
          }
#line 106 "demangle.m"
        else
#line 109 "demangle.m"
          {
#line 109 "demangle.m"
            demangle__PredOrFunc_4 = (MR_String) "predicate";
#line 109 "demangle.m"
            demangle__STATE_VARIABLE_Str_26_26 = demangle__STATE_VARIABLE_Str_23_23;
#line 109 "demangle.m"
          }
#line 114 "demangle.m"
        {
#line 114 "demangle.m"
          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Int_5, demangle__STATE_VARIABLE_Str_26_26, &demangle__STATE_VARIABLE_Str_27_27);
        }
#line 102 "demangle.m"
        if (demangle__succeeded)
#line 102 "demangle.m"
          {
#line 116 "demangle.m"
            demangle__V_28_28 = (MR_String) "i";
#line 876 "demangle.m"
            {
#line 876 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_27_27, demangle__V_28_28, &demangle__STATE_VARIABLE_Str_29_29);
            }
#line 116 "demangle.m"
            if (demangle__succeeded)
#line 120 "demangle.m"
              {
#line 120 "demangle.m"
                MR_String demangle__STATE_VARIABLE_Str_31_31;

#line 120 "demangle.m"
                {
#line 120 "demangle.m"
                  demangle__MaybeInternalLabelNum_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 120 "demangle.m"
                  MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum_6, 0) = ((MR_Box) (demangle__Int_5));
#line 120 "demangle.m"
                }
#line 876 "demangle.m"
                {
#line 876 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_29_29, (MR_String) "_", &demangle__STATE_VARIABLE_Str_31_31);
                }
#line 120 "demangle.m"
                if (demangle__succeeded)
#line 122 "demangle.m"
                  {
#line 122 "demangle.m"
                    demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__ModeNum0_7, demangle__STATE_VARIABLE_Str_31_31, &demangle__STATE_VARIABLE_Str_32_32);
                  }
#line 120 "demangle.m"
              }
#line 116 "demangle.m"
            else
#line 124 "demangle.m"
              {
#line 124 "demangle.m"
                demangle__MaybeInternalLabelNum_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 125 "demangle.m"
                demangle__ModeNum0_7 = demangle__Int_5;
#line 124 "demangle.m"
                demangle__STATE_VARIABLE_Str_32_32 = demangle__STATE_VARIABLE_Str_27_27;
#line 124 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 124 "demangle.m"
              }
#line 102 "demangle.m"
            if (demangle__succeeded)
#line 102 "demangle.m"
              {
#line 129 "demangle.m"
                demangle__V_33_33 = (MR_String) "_";
#line 876 "demangle.m"
                {
#line 876 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_32_32, demangle__V_33_33, &demangle__STATE_VARIABLE_Str_34_34);
                }
#line 102 "demangle.m"
                if (demangle__succeeded)
#line 102 "demangle.m"
                  {
#line 130 "demangle.m"
                    {
#line 130 "demangle.m"
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_8, demangle__STATE_VARIABLE_Str_34_34, &demangle__STATE_VARIABLE_Str_35_35);
                    }
#line 102 "demangle.m"
                    if (demangle__succeeded)
#line 102 "demangle.m"
                      {
#line 131 "demangle.m"
                        demangle__V_36_36 = (MR_String) "_";
#line 876 "demangle.m"
                        {
#line 876 "demangle.m"
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_35_35, demangle__V_36_36, &demangle__STATE_VARIABLE_Str_37_37);
                        }
#line 102 "demangle.m"
                        if (demangle__succeeded)
#line 102 "demangle.m"
                          {
#line 359 "demangle.m"
                            demangle__V_89_89 = (MR_String) "__Unify__";
#line 359 "demangle.m"
                            {
#line 359 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_89_89, demangle__STATE_VARIABLE_Str_37_37, &demangle__STATE_VARIABLE_Str_11_90);
                            }
#line 359 "demangle.m"
                            if (demangle__succeeded)
#line 360 "demangle.m"
                              {
#line 360 "demangle.m"
                                demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_11_90;
#line 360 "demangle.m"
                                demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 360 "demangle.m"
                                demangle__succeeded = MR_TRUE;
#line 360 "demangle.m"
                              }
#line 359 "demangle.m"
                            else
#line 361 "demangle.m"
                              {
#line 361 "demangle.m"
                                MR_String demangle__STATE_VARIABLE_Str_13_92;

#line 361 "demangle.m"
                                {
#line 361 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", demangle__STATE_VARIABLE_Str_37_37, &demangle__STATE_VARIABLE_Str_13_92);
                                }
#line 361 "demangle.m"
                                if (demangle__succeeded)
#line 362 "demangle.m"
                                  {
#line 364 "demangle.m"
                                    demangle__succeeded = (demangle__ModeNum0_7 == (MR_Integer) 0);
#line 362 "demangle.m"
                                    if (demangle__succeeded)
#line 362 "demangle.m"
                                      {
#line 362 "demangle.m"
                                        demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_13_92;
#line 362 "demangle.m"
                                        demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 362 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 362 "demangle.m"
                                      }
#line 362 "demangle.m"
                                  }
#line 361 "demangle.m"
                                else
#line 365 "demangle.m"
                                  {
#line 365 "demangle.m"
                                    MR_String demangle__STATE_VARIABLE_Str_15_94;

#line 365 "demangle.m"
                                    {
#line 365 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", demangle__STATE_VARIABLE_Str_37_37, &demangle__STATE_VARIABLE_Str_15_94);
                                    }
#line 365 "demangle.m"
                                    if (demangle__succeeded)
#line 366 "demangle.m"
                                      {
#line 368 "demangle.m"
                                        demangle__succeeded = (demangle__ModeNum0_7 == (MR_Integer) 0);
#line 366 "demangle.m"
                                        if (demangle__succeeded)
#line 366 "demangle.m"
                                          {
#line 366 "demangle.m"
                                            demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_15_94;
#line 366 "demangle.m"
                                            demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 366 "demangle.m"
                                          }
#line 366 "demangle.m"
                                      }
#line 365 "demangle.m"
                                    else
#line 370 "demangle.m"
                                      {
#line 370 "demangle.m"
                                        demangle__Category0_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 370 "demangle.m"
                                        demangle__STATE_VARIABLE_Str_38_38 = demangle__STATE_VARIABLE_Str_37_37;
#line 370 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 370 "demangle.m"
                                      }
#line 365 "demangle.m"
                                  }
#line 361 "demangle.m"
                              }
#line 102 "demangle.m"
                            if (demangle__succeeded)
#line 102 "demangle.m"
                              {
#line 141 "demangle.m"
                                {
#line 141 "demangle.m"
                                  demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_38_38, &demangle__STATE_VARIABLE_Str_39_39);
                                }
#line 102 "demangle.m"
                                if (demangle__succeeded)
#line 102 "demangle.m"
                                  {
#line 147 "demangle.m"
                                    {
#line 147 "demangle.m"
                                      demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_10, demangle__ModeNum0_7, &demangle__ModeNum1_11, demangle__STATE_VARIABLE_Str_39_39, &demangle__STATE_VARIABLE_Str_40_40);
                                    }
#line 148 "demangle.m"
                                    {
#line 148 "demangle.m"
                                      demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_12, demangle__ModeNum1_11, &demangle__ModeNum_13, demangle__STATE_VARIABLE_Str_40_40, &demangle__STATE_VARIABLE_Str_41_41);
                                    }
#line 151 "demangle.m"
                                    demangle__succeeded = ((MR_tag((MR_Word) demangle__UnusedArgs_10)) == (MR_mktag((MR_Integer) 1)));
#line 151 "demangle.m"
                                    if (demangle__succeeded)
#line 151 "demangle.m"
                                      {
#line 151 "demangle.m"
                                        demangle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_10, (MR_Integer) 0)));
#line 151 "demangle.m"
                                        demangle__succeeded = (demangle__Category0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 151 "demangle.m"
                                        demangle__succeeded = !(demangle__succeeded);
#line 151 "demangle.m"
                                      }
#line 151 "demangle.m"
                                    if (demangle__succeeded)
#line 152 "demangle.m"
                                      {
#line 152 "demangle.m"
                                        MR_Integer demangle__V_71_71;

#line 152 "demangle.m"
                                        {
#line 152 "demangle.m"
                                          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__V_71_71, demangle__STATE_VARIABLE_Str_41_41, &demangle__STATE_VARIABLE_Str_42_42);
                                        }
#line 152 "demangle.m"
                                        if (demangle__succeeded)
#line 152 "demangle.m"
                                          demangle__succeeded = (demangle__Arity_8 == demangle__V_71_71);
#line 152 "demangle.m"
                                      }
#line 151 "demangle.m"
                                    else
#line 151 "demangle.m"
                                      {
#line 151 "demangle.m"
                                        demangle__STATE_VARIABLE_Str_42_42 = demangle__STATE_VARIABLE_Str_41_41;
#line 151 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 151 "demangle.m"
                                      }
#line 102 "demangle.m"
                                    if (demangle__succeeded)
#line 102 "demangle.m"
                                      {
#line 159 "demangle.m"
                                        demangle__succeeded = (demangle__Category0_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 159 "demangle.m"
                                        if (demangle__succeeded)
#line 160 "demangle.m"
                                          {
#line 160 "demangle.m"
                                            {
#line 160 "demangle.m"
                                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]), demangle__STATE_VARIABLE_Str_42_42, &demangle__STATE_VARIABLE_Str_44_44);
                                            }
#line 160 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 160 "demangle.m"
                                          }
#line 159 "demangle.m"
                                        else
#line 164 "demangle.m"
                                          {
#line 164 "demangle.m"
                                            MR_String demangle__STATE_VARIABLE_Str_56_56;
#line 164 "demangle.m"
                                            MR_Word demangle__V_57_57;
#line 168 "demangle.m"
                                            MR_String demangle__V_69_69;

#line 164 "demangle.m"
                                            {
#line 164 "demangle.m"
                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", demangle__STATE_VARIABLE_Str_42_42, &demangle__STATE_VARIABLE_Str_56_56);
                                            }
#line 164 "demangle.m"
                                            if (demangle__succeeded)
#line 164 "demangle.m"
                                              {
#line 165 "demangle.m"
                                                demangle__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]);
#line 165 "demangle.m"
                                                {
#line 165 "demangle.m"
                                                  demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule_15, demangle__V_57_57, demangle__STATE_VARIABLE_Str_56_56, &demangle__STATE_VARIABLE_Str_44_44);
                                                }
#line 168 "demangle.m"
                                                demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_15)) == (MR_mktag((MR_Integer) 1)));
#line 168 "demangle.m"
                                                if (demangle__succeeded)
#line 168 "demangle.m"
                                                  {
#line 168 "demangle.m"
                                                    demangle__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_15, (MR_Integer) 0)));
#line 168 "demangle.m"
                                                    demangle__succeeded = (strcmp(demangle__V_69_69, (MR_String) "") == 0);
#line 168 "demangle.m"
                                                  }
#line 168 "demangle.m"
                                                demangle__succeeded = !(demangle__succeeded);
#line 164 "demangle.m"
                                              }
#line 164 "demangle.m"
                                          }
#line 102 "demangle.m"
                                        if (demangle__succeeded)
#line 102 "demangle.m"
                                          {
#line 174 "demangle.m"
                                            {
#line 174 "demangle.m"
                                              demangle__succeeded = demangle__handle_category_etc_5_p_0(&demangle__PredName_16, demangle__Category0_9, &demangle__Category_17, demangle__STATE_VARIABLE_Str_44_44, &demangle___Str_18);
                                            }
#line 102 "demangle.m"
                                            if (demangle__succeeded)
#line 102 "demangle.m"
                                              {
#line 177 "demangle.m"
                                                {
#line 177 "demangle.m"
                                                  demangle__format_proc_10_p_0(demangle__Category_17, demangle__MaybeModule_15, demangle__PredOrFunc_4, demangle__PredName_16, demangle__Arity_8, demangle__ModeNum_13, demangle__HigherOrder_12, demangle__UnusedArgs_10, demangle__MaybeInternalLabelNum_6, demangle__STATE_VARIABLE_Str_21);
                                                }
#line 177 "demangle.m"
                                                demangle__succeeded = MR_TRUE;
#line 102 "demangle.m"
                                              }
#line 102 "demangle.m"
                                          }
#line 102 "demangle.m"
                                      }
#line 102 "demangle.m"
                                  }
#line 102 "demangle.m"
                              }
#line 102 "demangle.m"
                          }
#line 102 "demangle.m"
                      }
#line 102 "demangle.m"
                  }
#line 102 "demangle.m"
              }
#line 102 "demangle.m"
          }
#line 102 "demangle.m"
      }
#line 102 "demangle.m"
    return demangle__succeeded;
#line 102 "demangle.m"
  }
#line 100 "demangle.m"
}

#line 83 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_from_c_2_p_0(
#line 83 "demangle.m"
  MR_String demangle__STATE_VARIABLE_Str_0_4,
#line 83 "demangle.m"
  MR_String * demangle__STATE_VARIABLE_Str_5)
#line 83 "demangle.m"
{
#line 86 "demangle.m"
  {
#line 86 "demangle.m"
    MR_bool demangle__succeeded;
#line 86 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Str_6_6;

#line 86 "demangle.m"
    {
#line 86 "demangle.m"
      demangle__succeeded = demangle__demangle_proc_hl_2_p_0(demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_6_6);
    }
#line 86 "demangle.m"
    if (demangle__succeeded)
#line 86 "demangle.m"
      {
#line 86 "demangle.m"
        *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_6_6;
#line 86 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 86 "demangle.m"
      }
#line 86 "demangle.m"
    else
#line 88 "demangle.m"
      {
#line 88 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_7_7;

#line 88 "demangle.m"
        {
#line 88 "demangle.m"
          demangle__succeeded = demangle__demangle_proc_ll_2_p_0(demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_7_7);
        }
#line 88 "demangle.m"
        if (demangle__succeeded)
#line 88 "demangle.m"
          {
#line 88 "demangle.m"
            *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_7_7;
#line 88 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 88 "demangle.m"
          }
#line 88 "demangle.m"
        else
#line 90 "demangle.m"
          {
#line 90 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_8_8;
#line 544 "demangle.m"
            MR_Word demangle__HighLevel_14;
#line 544 "demangle.m"
            MR_Word demangle__MaybeModule0_15;
#line 544 "demangle.m"
            MR_Word demangle__MaybeModule_16;
#line 544 "demangle.m"
            MR_Word demangle__DataCategory_19;
#line 544 "demangle.m"
            MR_Integer demangle__Arity_20;
#line 544 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_16_24;
#line 544 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_18_26;
#line 544 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_38_46;
#line 544 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_52_60;
#line 545 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_14_22;
#line 557 "demangle.m"
            MR_String demangle__V_35_35;
#line 572 "demangle.m"
            MR_String demangle__STATE_VARIABLE_Str_35_43;
#line 572 "demangle.m"
            MR_String demangle__V_42_42;

#line 545 "demangle.m"
            {
#line 545 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data_", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_14_22);
            }
#line 545 "demangle.m"
            if (demangle__succeeded)
#line 547 "demangle.m"
              {
#line 547 "demangle.m"
                demangle__STATE_VARIABLE_Str_16_24 = demangle__STATE_VARIABLE_Str_14_22;
#line 547 "demangle.m"
                demangle__HighLevel_14 = (MR_Integer) 0;
#line 547 "demangle.m"
              }
#line 545 "demangle.m"
            else
#line 550 "demangle.m"
              {
#line 867 "demangle.m"
                MR_String demangle__STATE_VARIABLE_Str_8_68;

#line 550 "demangle.m"
                demangle__HighLevel_14 = (MR_Integer) 1;
#line 867 "demangle.m"
                {
#line 867 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__STATE_VARIABLE_Str_0_4, &demangle__STATE_VARIABLE_Str_8_68);
                }
#line 867 "demangle.m"
                if (demangle__succeeded)
#line 867 "demangle.m"
                  demangle__STATE_VARIABLE_Str_16_24 = demangle__STATE_VARIABLE_Str_8_68;
#line 867 "demangle.m"
                else
#line 867 "demangle.m"
                  demangle__STATE_VARIABLE_Str_16_24 = demangle__STATE_VARIABLE_Str_0_4;
#line 550 "demangle.m"
              }
#line 553 "demangle.m"
            {
#line 553 "demangle.m"
              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[14]), demangle__STATE_VARIABLE_Str_16_24, &demangle__STATE_VARIABLE_Str_18_26);
            }
#line 557 "demangle.m"
            demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
#line 557 "demangle.m"
            if (demangle__succeeded)
#line 557 "demangle.m"
              {
#line 557 "demangle.m"
                demangle__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_15, (MR_Integer) 0)));
#line 557 "demangle.m"
                demangle__succeeded = (strcmp(demangle__V_35_35, (MR_String) "") == 0);
#line 557 "demangle.m"
              }
#line 556 "demangle.m"
            if (demangle__succeeded)
#line 559 "demangle.m"
              {
#line 559 "demangle.m"
                demangle__MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 559 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 559 "demangle.m"
              }
#line 556 "demangle.m"
            else
#line 560 "demangle.m"
              {
#line 560 "demangle.m"
                MR_String demangle__Twice_17;

#line 563 "demangle.m"
                demangle__succeeded = (demangle__HighLevel_14 == (MR_Integer) 1);
#line 563 "demangle.m"
                if (demangle__succeeded)
#line 563 "demangle.m"
                  {
#line 564 "demangle.m"
                    demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
#line 564 "demangle.m"
                    if (demangle__succeeded)
#line 564 "demangle.m"
                      demangle__Twice_17 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_15, (MR_Integer) 0)));
#line 563 "demangle.m"
                  }
#line 560 "demangle.m"
                if (demangle__succeeded)
#line 566 "demangle.m"
                  {
#line 566 "demangle.m"
                    MR_String demangle__Once_18;
#line 566 "demangle.m"
                    MR_Integer demangle__V_36_36;
#line 566 "demangle.m"
                    MR_Integer demangle__V_37_37;
#line 566 "demangle.m"
                    MR_Integer demangle__V_39_39;
#line 566 "demangle.m"
                    MR_Integer demangle__V_40_40;
#line 566 "demangle.m"
                    MR_String demangle__V_63_63;

#line 566 "demangle.m"
                    {
#line 566 "demangle.m"
                      demangle__V_37_37 = mercury__string__length_1_f_0(demangle__Twice_17);
                    }
#line 566 "demangle.m"
                    {
#line 566 "demangle.m"
                      demangle__V_36_36 = mercury__int__f_47_47_2_f_0(demangle__V_37_37, (MR_Integer) 2);
                    }
#line 566 "demangle.m"
                    {
#line 566 "demangle.m"
                      demangle__Once_18 = mercury__string__left_2_f_0(demangle__Twice_17, demangle__V_36_36);
                    }
#line 567 "demangle.m"
                    {
#line 567 "demangle.m"
                      demangle__V_40_40 = mercury__string__length_1_f_0(demangle__Twice_17);
                    }
#line 567 "demangle.m"
                    {
#line 567 "demangle.m"
                      demangle__V_39_39 = mercury__int__f_47_47_2_f_0(demangle__V_40_40, (MR_Integer) 2);
                    }
#line 567 "demangle.m"
                    {
#line 567 "demangle.m"
                      demangle__V_63_63 = mercury__string__right_2_f_0(demangle__Twice_17, demangle__V_39_39);
                    }
#line 567 "demangle.m"
                    demangle__succeeded = (strcmp(demangle__Once_18, demangle__V_63_63) == 0);
#line 566 "demangle.m"
                    if (demangle__succeeded)
#line 566 "demangle.m"
                      {
#line 568 "demangle.m"
                        {
#line 568 "demangle.m"
                          demangle__MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 568 "demangle.m"
                          MR_hl_field(MR_mktag(1), demangle__MaybeModule_16, 0) = ((MR_Box) (demangle__Once_18));
#line 568 "demangle.m"
                        }
#line 568 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 566 "demangle.m"
                      }
#line 566 "demangle.m"
                  }
#line 560 "demangle.m"
                else
#line 570 "demangle.m"
                  {
#line 570 "demangle.m"
                    demangle__MaybeModule_16 = demangle__MaybeModule0_15;
#line 570 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 570 "demangle.m"
                  }
#line 560 "demangle.m"
              }
#line 544 "demangle.m"
            if (demangle__succeeded)
#line 544 "demangle.m"
              {
#line 572 "demangle.m"
                demangle__V_42_42 = (MR_String) "type_ctor_info_";
#line 572 "demangle.m"
                {
#line 572 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_42_42, demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_35_43);
                }
#line 572 "demangle.m"
                if (demangle__succeeded)
#line 573 "demangle.m"
                  {
#line 573 "demangle.m"
                    MR_String demangle__STATE_VARIABLE_Str_36_44;
#line 573 "demangle.m"
                    MR_String demangle__V_45_45;

#line 573 "demangle.m"
                    demangle__DataCategory_19 = (MR_Integer) 1;
#line 574 "demangle.m"
                    {
#line 574 "demangle.m"
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_35_43, &demangle__STATE_VARIABLE_Str_36_44);
                    }
#line 573 "demangle.m"
                    if (demangle__succeeded)
#line 573 "demangle.m"
                      {
#line 575 "demangle.m"
                        demangle__V_45_45 = (MR_String) "_";
#line 876 "demangle.m"
                        {
#line 876 "demangle.m"
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_36_44, demangle__V_45_45, &demangle__STATE_VARIABLE_Str_38_46);
                        }
#line 573 "demangle.m"
                      }
#line 573 "demangle.m"
                  }
#line 572 "demangle.m"
                else
#line 576 "demangle.m"
                  {
#line 576 "demangle.m"
                    MR_String demangle__STATE_VARIABLE_Str_40_48;

#line 576 "demangle.m"
                    {
#line 576 "demangle.m"
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_layout_", demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_40_48);
                    }
#line 576 "demangle.m"
                    if (demangle__succeeded)
#line 577 "demangle.m"
                      {
#line 577 "demangle.m"
                        MR_String demangle__STATE_VARIABLE_Str_41_49;
#line 577 "demangle.m"
                        MR_String demangle__V_50_50;

#line 577 "demangle.m"
                        demangle__DataCategory_19 = (MR_Integer) 2;
#line 578 "demangle.m"
                        {
#line 578 "demangle.m"
                          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_40_48, &demangle__STATE_VARIABLE_Str_41_49);
                        }
#line 577 "demangle.m"
                        if (demangle__succeeded)
#line 577 "demangle.m"
                          {
#line 579 "demangle.m"
                            demangle__V_50_50 = (MR_String) "_";
#line 876 "demangle.m"
                            {
#line 876 "demangle.m"
                              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_41_49, demangle__V_50_50, &demangle__STATE_VARIABLE_Str_38_46);
                            }
#line 577 "demangle.m"
                          }
#line 577 "demangle.m"
                      }
#line 576 "demangle.m"
                    else
#line 580 "demangle.m"
                      {
#line 580 "demangle.m"
                        MR_String demangle__STATE_VARIABLE_Str_45_53;

#line 580 "demangle.m"
                        {
#line 580 "demangle.m"
                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_functors_", demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_45_53);
                        }
#line 580 "demangle.m"
                        if (demangle__succeeded)
#line 581 "demangle.m"
                          {
#line 581 "demangle.m"
                            MR_String demangle__STATE_VARIABLE_Str_46_54;
#line 581 "demangle.m"
                            MR_String demangle__V_55_55;

#line 581 "demangle.m"
                            demangle__DataCategory_19 = (MR_Integer) 3;
#line 582 "demangle.m"
                            {
#line 582 "demangle.m"
                              demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_45_53, &demangle__STATE_VARIABLE_Str_46_54);
                            }
#line 581 "demangle.m"
                            if (demangle__succeeded)
#line 581 "demangle.m"
                              {
#line 583 "demangle.m"
                                demangle__V_55_55 = (MR_String) "_";
#line 876 "demangle.m"
                                {
#line 876 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__STATE_VARIABLE_Str_46_54, demangle__V_55_55, &demangle__STATE_VARIABLE_Str_38_46);
                                }
#line 581 "demangle.m"
                              }
#line 581 "demangle.m"
                          }
#line 580 "demangle.m"
                        else
#line 584 "demangle.m"
                          {
#line 584 "demangle.m"
                            MR_String demangle__STATE_VARIABLE_Str_50_58;

#line 584 "demangle.m"
                            {
#line 584 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "common_", demangle__STATE_VARIABLE_Str_18_26, &demangle__STATE_VARIABLE_Str_50_58);
                            }
#line 584 "demangle.m"
                            if (demangle__succeeded)
#line 584 "demangle.m"
                              {
#line 585 "demangle.m"
                                demangle__DataCategory_19 = (MR_Integer) 0;
#line 586 "demangle.m"
                                {
#line 586 "demangle.m"
                                  demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__STATE_VARIABLE_Str_50_58, &demangle__STATE_VARIABLE_Str_38_46);
                                }
#line 584 "demangle.m"
                              }
#line 584 "demangle.m"
                          }
#line 580 "demangle.m"
                      }
#line 576 "demangle.m"
                  }
#line 544 "demangle.m"
                if (demangle__succeeded)
#line 544 "demangle.m"
                  {
#line 591 "demangle.m"
                    {
#line 591 "demangle.m"
                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__STATE_VARIABLE_Str_38_46, &demangle__STATE_VARIABLE_Str_52_60);
                    }
#line 544 "demangle.m"
                    if (demangle__succeeded)
#line 592 "demangle.m"
                      {
#line 592 "demangle.m"
                        demangle__succeeded = demangle__format_data_5_p_0(demangle__DataCategory_19, demangle__MaybeModule_16, demangle__STATE_VARIABLE_Str_52_60, demangle__Arity_20, &demangle__STATE_VARIABLE_Str_8_8);
                      }
#line 544 "demangle.m"
                  }
#line 544 "demangle.m"
              }
#line 90 "demangle.m"
            if (demangle__succeeded)
#line 90 "demangle.m"
              {
#line 90 "demangle.m"
                *demangle__STATE_VARIABLE_Str_5 = demangle__STATE_VARIABLE_Str_8_8;
#line 90 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 90 "demangle.m"
              }
#line 90 "demangle.m"
            else
#line 92 "demangle.m"
              {
#line 92 "demangle.m"
                demangle__succeeded = demangle__demangle_typeclass_info_2_p_0(demangle__STATE_VARIABLE_Str_0_4, demangle__STATE_VARIABLE_Str_5);
              }
#line 90 "demangle.m"
          }
#line 88 "demangle.m"
      }
#line 86 "demangle.m"
    return demangle__succeeded;
#line 86 "demangle.m"
  }
#line 83 "demangle.m"
}

#line 25 "demangle.m"
void MR_CALL 
demangle__demangle_2_p_0(
#line 25 "demangle.m"
  MR_String demangle__MangledName_3,
#line 25 "demangle.m"
  MR_String * demangle__Name_4)
#line 25 "demangle.m"
{
#line 64 "demangle.m"
  {
#line 64 "demangle.m"
    MR_bool demangle__succeeded;
#line 64 "demangle.m"
    MR_String demangle__DemangledName_5;
#line 72 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Name_11_14;
#line 75 "demangle.m"
    MR_String demangle__STATE_VARIABLE_Name_7_10;

#line 75 "demangle.m"
    {
#line 75 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", demangle__MangledName_3, &demangle__STATE_VARIABLE_Name_7_10);
    }
#line 75 "demangle.m"
    if (demangle__succeeded)
#line 75 "demangle.m"
      demangle__STATE_VARIABLE_Name_11_14 = demangle__STATE_VARIABLE_Name_7_10;
#line 75 "demangle.m"
    else
#line 78 "demangle.m"
      {
#line 78 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Name_9_12;
#line 867 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_8_20;
#line 867 "demangle.m"
        MR_String demangle__STATE_VARIABLE_Str_8_26;

#line 867 "demangle.m"
        {
#line 867 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", demangle__MangledName_3, &demangle__STATE_VARIABLE_Str_8_20);
        }
#line 867 "demangle.m"
        if (demangle__succeeded)
#line 867 "demangle.m"
          demangle__STATE_VARIABLE_Name_9_12 = demangle__STATE_VARIABLE_Str_8_20;
#line 867 "demangle.m"
        else
#line 867 "demangle.m"
          demangle__STATE_VARIABLE_Name_9_12 = demangle__MangledName_3;
#line 867 "demangle.m"
        {
#line 867 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", demangle__STATE_VARIABLE_Name_9_12, &demangle__STATE_VARIABLE_Str_8_26);
        }
#line 867 "demangle.m"
        if (demangle__succeeded)
#line 867 "demangle.m"
          demangle__STATE_VARIABLE_Name_11_14 = demangle__STATE_VARIABLE_Str_8_26;
#line 867 "demangle.m"
        else
#line 867 "demangle.m"
          demangle__STATE_VARIABLE_Name_11_14 = demangle__STATE_VARIABLE_Name_9_12;
#line 78 "demangle.m"
      }
#line 81 "demangle.m"
    {
#line 81 "demangle.m"
      demangle__succeeded = demangle__demangle_from_c_2_p_0(demangle__STATE_VARIABLE_Name_11_14, &demangle__DemangledName_5);
    }
#line 64 "demangle.m"
    if (demangle__succeeded)
#line 65 "demangle.m"
      *demangle__Name_4 = demangle__DemangledName_5;
#line 64 "demangle.m"
    else
#line 67 "demangle.m"
      *demangle__Name_4 = demangle__MangledName_3;
#line 64 "demangle.m"
  }
#line 25 "demangle.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module demangle. */
