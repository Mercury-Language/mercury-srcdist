/*
** Automatically generated from `demangle.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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



#line 831 "demangle.m"
struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s {
#line 831 "demangle.m"
  MR_Word demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6;
#line 831 "demangle.m"
  MR_String demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
#line 841 "demangle.m"
  MR_bool demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded;
#line 836 "demangle.m"
  jmp_buf demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0;
#line 836 "demangle.m"
  MR_String demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9;
#line 836 "demangle.m"
  MR_Box demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9;
#line 831 "demangle.m"
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

#line 931 "demangle.m"
static void MR_CALL 
demangle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_p_0(
#line 931 "demangle.m"
  MR_Box demangle__X_4,
#line 931 "demangle.m"
  MR_Box * demangle__X_3);

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

#line 942 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
#line 942 "demangle.m"
  MR_Integer * demangle__Int_4,
#line 942 "demangle.m"
  MR_String demangle__DCG_0_7,
#line 942 "demangle.m"
  MR_String * demangle__DCG_3_10);

#line 935 "demangle.m"
static void MR_CALL 
demangle__format_maybe_module_3_p_0(
#line 935 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 935 "demangle.m"
  MR_String demangle__Name_2,
#line 935 "demangle.m"
  MR_String * demangle__QualifiedName_3);

#line 921 "demangle.m"
static void MR_CALL 
demangle__insert_prefix_3_p_0(
#line 921 "demangle.m"
  MR_String demangle__Prefix_4,
#line 921 "demangle.m"
  MR_String demangle__Name0_5,
#line 921 "demangle.m"
  MR_String * demangle__Name_6);

#line 890 "demangle.m"
static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
#line 890 "demangle.m"
  MR_Integer demangle__NumBrackets0_6,
#line 890 "demangle.m"
  MR_Integer demangle__Length_7,
#line 890 "demangle.m"
  MR_String demangle__String_8,
#line 890 "demangle.m"
  MR_Integer demangle__Index0_9,
#line 890 "demangle.m"
  MR_Integer * demangle__Index_10);

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg);

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg);

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg);

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg);

#line 831 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
#line 831 "demangle.m"
  MR_Word * demangle__MaybeModule_5,
#line 831 "demangle.m"
  MR_Word demangle__StringsToStopAt_6,
#line 831 "demangle.m"
  MR_String demangle__String0_7,
#line 831 "demangle.m"
  MR_String * demangle__String_8);

#line 800 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
#line 800 "demangle.m"
  MR_Integer demangle__Int0_5,
#line 800 "demangle.m"
  MR_Integer * demangle__Int_6,
#line 800 "demangle.m"
  MR_String demangle__DCG_0_9,
#line 800 "demangle.m"
  MR_String * demangle__DCG_2_11);

#line 780 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
#line 780 "demangle.m"
  MR_String demangle__DCG_0_5,
#line 780 "demangle.m"
  MR_String * demangle__DCG_5_10);

#line 737 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
#line 737 "demangle.m"
  MR_String demangle__DCG_0_3,
#line 737 "demangle.m"
  MR_String * demangle__DCG_37_40);

#line 704 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
#line 704 "demangle.m"
  MR_Integer demangle__Num_5,
#line 704 "demangle.m"
  MR_String * demangle__FormattedArgs_6,
#line 704 "demangle.m"
  MR_String demangle__DCG_0_12,
#line 704 "demangle.m"
  MR_String * demangle__DCG_5_17);

#line 688 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
#line 688 "demangle.m"
  MR_String demangle__DCG_0_7,
#line 688 "demangle.m"
  MR_String * demangle__DCG_9_16);

#line 653 "demangle.m"
static MR_bool MR_CALL 
demangle__format_data_5_p_0(
#line 653 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 653 "demangle.m"
  MR_Word demangle__MaybeModule_2,
#line 653 "demangle.m"
  MR_String demangle__HeadVar__3_3,
#line 653 "demangle.m"
  MR_Integer demangle__Arity_4,
#line 653 "demangle.m"
  MR_String * demangle__Result_5);

#line 517 "demangle.m"
static void MR_CALL 
demangle__format_proc_11_p_0(
#line 517 "demangle.m"
  MR_Word demangle__Category_12,
#line 517 "demangle.m"
  MR_Word demangle__MaybeModule_13,
#line 517 "demangle.m"
  MR_String demangle__PredOrFunc_14,
#line 517 "demangle.m"
  MR_String demangle__PredName_15,
#line 517 "demangle.m"
  MR_Integer demangle__Arity_16,
#line 517 "demangle.m"
  MR_Integer demangle__ModeNum_17,
#line 517 "demangle.m"
  MR_Word demangle__HigherOrder_18,
#line 517 "demangle.m"
  MR_Word demangle__UnusedArgs_19,
#line 517 "demangle.m"
  MR_Word demangle__MaybeInternalLabelNum_20,
#line 517 "demangle.m"
  MR_Word * demangle__DCG_0_33,
#line 517 "demangle.m"
  MR_Word demangle__DCG_10_43);

#line 431 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
#line 431 "demangle.m"
  MR_String * demangle__PredName_6,
#line 431 "demangle.m"
  MR_Word demangle__Category0_7,
#line 431 "demangle.m"
  MR_Word * demangle__Category_8,
#line 431 "demangle.m"
  MR_String demangle__DCG_0_20,
#line 431 "demangle.m"
  MR_String * demangle__DCG_19_39);

#line 410 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
#line 410 "demangle.m"
  MR_Integer demangle__ModeNum0_5,
#line 410 "demangle.m"
  MR_Word * demangle__Category0_6,
#line 410 "demangle.m"
  MR_String demangle__DCG_0_7,
#line 410 "demangle.m"
  MR_String * demangle__DCG_6_13);

#line 384 "demangle.m"
static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
#line 384 "demangle.m"
  MR_Word * demangle__HigherOrder_6,
#line 384 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 384 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 384 "demangle.m"
  MR_String demangle__DCG_0_10,
#line 384 "demangle.m"
  MR_String * demangle__DCG_3_13);

#line 356 "demangle.m"
static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
#line 356 "demangle.m"
  MR_Word * demangle__UnusedArgs_6,
#line 356 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 356 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 356 "demangle.m"
  MR_String demangle__DCG_0_10,
#line 356 "demangle.m"
  MR_String * demangle__DCG_6_16);

#line 202 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
#line 202 "demangle.m"
  MR_String demangle__DCG_0_27,
#line 202 "demangle.m"
  MR_String * demangle__DCG_23_50);

#line 100 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
#line 100 "demangle.m"
  MR_String demangle__DCG_0_19,
#line 100 "demangle.m"
  MR_String * demangle__DCG_20_39);

#line 83 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_from_c_2_p_0(
#line 83 "demangle.m"
  MR_String demangle__DCG_0_3,
#line 83 "demangle.m"
  MR_String * demangle__DCG_8_11);


static /* final */ const MR_Box demangle_scalar_common_1[16][2];

static /* final */ const MR_Box demangle_scalar_common_2[2][1];




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



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 648 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_0 = {
  (MR_String) "common",
  (MR_Integer) 0
};

#line 654 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_1 = {
  (MR_String) "info",
  (MR_Integer) 1
};

#line 660 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_2 = {
  (MR_String) "layout",
  (MR_Integer) 2
};

#line 666 "demangle.c"
static const MR_EnumFunctorDesc demangle__demangle__enum_functor_desc_data_category_0_3 = {
  (MR_String) "functors",
  (MR_Integer) 3
};

#line 672 "demangle.c"
static const MR_EnumFunctorDescPtr demangle__demangle__enum_value_ordered_data_category_0[4] = {
  &demangle__demangle__enum_functor_desc_data_category_0_0,
  &demangle__demangle__enum_functor_desc_data_category_0_1,
  &demangle__demangle__enum_functor_desc_data_category_0_2,
  &demangle__demangle__enum_functor_desc_data_category_0_3
};

#line 680 "demangle.c"
static const MR_EnumFunctorDescPtr demangle__demangle__enum_name_ordered_data_category_0[4] = {
  &demangle__demangle__enum_functor_desc_data_category_0_0,
  &demangle__demangle__enum_functor_desc_data_category_0_3,
  &demangle__demangle__enum_functor_desc_data_category_0_1,
  &demangle__demangle__enum_functor_desc_data_category_0_2
};

#line 688 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_data_category_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 1
};

#line 696 "demangle.c"
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

#line 713 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_0 = {
  (MR_String) "lambda",
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

#line 728 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_1 = {
  (MR_String) "deforestation",
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

#line 743 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_2 = {
  (MR_String) "accumulator",
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

#line 758 "demangle.c"
static const MR_PseudoTypeInfo demangle__demangle__field_types_introduced_pred_type_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 763 "demangle.c"
static const MR_DuFunctorDesc demangle__demangle__du_functor_desc_introduced_pred_type_0_3 = {
  (MR_String) "type_spec",
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

#line 778 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_0[3] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_0,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_1,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_2
};

#line 785 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_introduced_pred_type_0_1[1] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_3
};

#line 790 "demangle.c"
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

#line 804 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_introduced_pred_type_0[4] = {
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_2,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_1,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_0,
  &demangle__demangle__du_functor_desc_introduced_pred_type_0_3
};

#line 812 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_introduced_pred_type_0[4] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 820 "demangle.c"
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

#line 837 "demangle.c"
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

#line 852 "demangle.c"
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

#line 867 "demangle.c"
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

#line 882 "demangle.c"
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

#line 897 "demangle.c"
static const MR_PseudoTypeInfo demangle__demangle__field_types_pred_category_0_4[4] = {
  (MR_PseudoTypeInfo) &demangle__demangle__type_ctor_info_introduced_pred_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 905 "demangle.c"
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

#line 920 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_0[4] = {
  &demangle__demangle__du_functor_desc_pred_category_0_0,
  &demangle__demangle__du_functor_desc_pred_category_0_1,
  &demangle__demangle__du_functor_desc_pred_category_0_2,
  &demangle__demangle__du_functor_desc_pred_category_0_3
};

#line 928 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_stag_ordered_pred_category_0_1[1] = {
  &demangle__demangle__du_functor_desc_pred_category_0_4
};

#line 933 "demangle.c"
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

#line 947 "demangle.c"
static const MR_DuFunctorDescPtr demangle__demangle__du_name_ordered_pred_category_0[5] = {
  &demangle__demangle__du_functor_desc_pred_category_0_2,
  &demangle__demangle__du_functor_desc_pred_category_0_0,
  &demangle__demangle__du_functor_desc_pred_category_0_4,
  &demangle__demangle__du_functor_desc_pred_category_0_3,
  &demangle__demangle__du_functor_desc_pred_category_0_1
};

#line 956 "demangle.c"
static const MR_Integer demangle__demangle__functor_number_map_pred_category_0[5] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 965 "demangle.c"
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

#line 982 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____data_category_0_0_10001(
#line 985 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 987 "demangle.c"
  MR_Box demangle__wrapper_arg_2)
#line 989 "demangle.c"
{
#line 991 "demangle.c"
  {
#line 993 "demangle.c"
    MR_bool demangle__succeeded;

#line 996 "demangle.c"
    {
#line 998 "demangle.c"
      demangle__succeeded = demangle____Unify____data_category_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
#line 1001 "demangle.c"
    return demangle__succeeded;
#line 1003 "demangle.c"
  }
#line 1005 "demangle.c"
}

#line 1008 "demangle.c"
static void MR_CALL 
demangle____Compare____data_category_0_0_10001(
#line 1011 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 1013 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 1015 "demangle.c"
  MR_Box demangle__wrapper_arg_3)
#line 1017 "demangle.c"
{
#line 1019 "demangle.c"
  {
#line 1021 "demangle.c"
    MR_Word demangle__conv0_HeadVar__1_1;

#line 1024 "demangle.c"
    {
#line 1026 "demangle.c"
      demangle____Compare____data_category_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
#line 1029 "demangle.c"
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
#line 1031 "demangle.c"
  }
#line 1033 "demangle.c"
}

#line 1036 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____introduced_pred_type_0_0_10001(
#line 1039 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 1041 "demangle.c"
  MR_Box demangle__wrapper_arg_2)
#line 1043 "demangle.c"
{
#line 1045 "demangle.c"
  {
#line 1047 "demangle.c"
    MR_bool demangle__succeeded;

#line 1050 "demangle.c"
    {
#line 1052 "demangle.c"
      demangle__succeeded = demangle____Unify____introduced_pred_type_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
#line 1055 "demangle.c"
    return demangle__succeeded;
#line 1057 "demangle.c"
  }
#line 1059 "demangle.c"
}

#line 1062 "demangle.c"
static void MR_CALL 
demangle____Compare____introduced_pred_type_0_0_10001(
#line 1065 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 1067 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 1069 "demangle.c"
  MR_Box demangle__wrapper_arg_3)
#line 1071 "demangle.c"
{
#line 1073 "demangle.c"
  {
#line 1075 "demangle.c"
    MR_Word demangle__conv0_HeadVar__1_1;

#line 1078 "demangle.c"
    {
#line 1080 "demangle.c"
      demangle____Compare____introduced_pred_type_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
#line 1083 "demangle.c"
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
#line 1085 "demangle.c"
  }
#line 1087 "demangle.c"
}

#line 1090 "demangle.c"
static MR_bool MR_CALL 
demangle____Unify____pred_category_0_0_10001(
#line 1093 "demangle.c"
  MR_Box demangle__wrapper_arg_1,
#line 1095 "demangle.c"
  MR_Box demangle__wrapper_arg_2)
#line 1097 "demangle.c"
{
#line 1099 "demangle.c"
  {
#line 1101 "demangle.c"
    MR_bool demangle__succeeded;

#line 1104 "demangle.c"
    {
#line 1106 "demangle.c"
      demangle__succeeded = demangle____Unify____pred_category_0_0(((MR_Word) demangle__wrapper_arg_1), ((MR_Word) demangle__wrapper_arg_2));
    }
#line 1109 "demangle.c"
    return demangle__succeeded;
#line 1111 "demangle.c"
  }
#line 1113 "demangle.c"
}

#line 1116 "demangle.c"
static void MR_CALL 
demangle____Compare____pred_category_0_0_10001(
#line 1119 "demangle.c"
  MR_Box * demangle__wrapper_arg_1,
#line 1121 "demangle.c"
  MR_Box demangle__wrapper_arg_2,
#line 1123 "demangle.c"
  MR_Box demangle__wrapper_arg_3)
#line 1125 "demangle.c"
{
#line 1127 "demangle.c"
  {
#line 1129 "demangle.c"
    MR_Word demangle__conv0_HeadVar__1_1;

#line 1132 "demangle.c"
    {
#line 1134 "demangle.c"
      demangle____Compare____pred_category_0_0(&demangle__conv0_HeadVar__1_1, ((MR_Word) demangle__wrapper_arg_2), ((MR_Word) demangle__wrapper_arg_3));
    }
#line 1137 "demangle.c"
    *demangle__wrapper_arg_1 = ((MR_Box) (demangle__conv0_HeadVar__1_1));
#line 1139 "demangle.c"
  }
#line 1141 "demangle.c"
}

#line 931 "demangle.m"
static void MR_CALL 
demangle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_p_0(
#line 931 "demangle.m"
  MR_Box demangle__X_4,
#line 931 "demangle.m"
  MR_Box * demangle__X_3)
#line 931 "demangle.m"
{
#line 933 "demangle.m"
  {
#line 933 "demangle.m"
    MR_bool demangle__succeeded;

#line 933 "demangle.m"
    *demangle__X_3 = demangle__X_4;
#line 933 "demangle.m"
  }
#line 931 "demangle.m"
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
#line 1189 "demangle.c"
      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
    else
#line 42 "demangle.m"
    if ((demangle__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
      else
#line 1219 "demangle.c"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
    else
#line 42 "demangle.m"
    if ((demangle__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
      else
#line 1249 "demangle.c"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
    else
#line 42 "demangle.m"
    if ((demangle__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
      else
#line 1279 "demangle.c"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
    else
#line 42 "demangle.m"
    if ((demangle__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
      else
#line 42 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 42 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 42 "demangle.m"
      else
#line 1309 "demangle.c"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 42 "demangle.m"
    else
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
        if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1326 "demangle.c"
          *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
        else
#line 42 "demangle.m"
        if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1332 "demangle.c"
          *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
        else
#line 42 "demangle.m"
        if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1338 "demangle.c"
          *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
        else
#line 42 "demangle.m"
        if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1344 "demangle.c"
          *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 42 "demangle.m"
        else
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
#line 1366 "demangle.c"
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
#line 1386 "demangle.c"
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
#line 1406 "demangle.c"
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
#line 42 "demangle.m"
                        return;
                      }
#line 42 "demangle.m"
                  }
#line 42 "demangle.m"
              }
#line 42 "demangle.m"
          }
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
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
    else
#line 42 "demangle.m"
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    else
#line 42 "demangle.m"
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
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
    else
#line 42 "demangle.m"
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
    else
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
#line 1555 "demangle.c"
            {
#line 1557 "demangle.c"
              demangle__succeeded = demangle____Unify____introduced_pred_type_0_0(demangle__V_11_11, demangle__V_15_15);
            }
#line 42 "demangle.m"
            if (demangle__succeeded)
#line 42 "demangle.m"
              {
#line 1564 "demangle.c"
                demangle__succeeded = (demangle__V_12_12 == demangle__V_16_16);
#line 42 "demangle.m"
                if (demangle__succeeded)
#line 42 "demangle.m"
                  {
#line 1570 "demangle.c"
                    demangle__succeeded = (demangle__V_13_13 == demangle__V_17_17);
#line 42 "demangle.m"
                    if (demangle__succeeded)
#line 1574 "demangle.c"
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
#line 1615 "demangle.c"
      *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
    else
#line 51 "demangle.m"
    if ((demangle__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
      else
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
      else
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
      else
#line 1639 "demangle.c"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
    else
#line 51 "demangle.m"
    if ((demangle__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
      else
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
      else
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
      else
#line 1663 "demangle.c"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
    else
#line 51 "demangle.m"
    if ((demangle__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
      else
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
      else
#line 51 "demangle.m"
      if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 51 "demangle.m"
        *demangle__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "demangle.m"
      else
#line 1687 "demangle.c"
        *demangle__HeadVar__1_1 = (MR_Integer) 1;
#line 51 "demangle.m"
    else
#line 51 "demangle.m"
      {
#line 51 "demangle.m"
        MR_String demangle__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__2_2, (MR_Integer) 0)));

#line 51 "demangle.m"
        if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1698 "demangle.c"
          *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
        else
#line 51 "demangle.m"
        if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1704 "demangle.c"
          *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
        else
#line 51 "demangle.m"
        if ((demangle__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1710 "demangle.c"
          *demangle__HeadVar__1_1 = (MR_Integer) 2;
#line 51 "demangle.m"
        else
#line 51 "demangle.m"
          {
#line 51 "demangle.m"
            MR_String demangle__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__3_3, (MR_Integer) 0)));

#line 51 "demangle.m"
            {
#line 51 "demangle.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(demangle__HeadVar__1_1, demangle__V_15_15, demangle__V_11_11);
#line 51 "demangle.m"
              return;
            }
#line 51 "demangle.m"
          }
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
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
    else
#line 51 "demangle.m"
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
    else
#line 51 "demangle.m"
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    else
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
#line 1821 "demangle.c"
            demangle__succeeded = (strcmp(demangle__V_9_9, demangle__V_10_10) == 0);
#line 51 "demangle.m"
          }
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
#line 57 "demangle.m"
      return;
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
#line 1875 "demangle.c"
  {
#line 1877 "demangle.c"
    MR_bool demangle__succeeded = (demangle__HeadVar__2_1 == demangle__HeadVar__2_2);

#line 1880 "demangle.c"
    return demangle__succeeded;
#line 1882 "demangle.c"
  }
#line 57 "demangle.m"
}

#line 942 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_trailing_int_3_p_0(
#line 942 "demangle.m"
  MR_Integer * demangle__Int_4,
#line 942 "demangle.m"
  MR_String demangle__DCG_0_7,
#line 942 "demangle.m"
  MR_String * demangle__DCG_3_10)
#line 942 "demangle.m"
{
#line 944 "demangle.m"
  {
#line 944 "demangle.m"
    MR_bool demangle__succeeded;
#line 944 "demangle.m"
    MR_Integer demangle__Digit_5;
#line 944 "demangle.m"
    MR_String demangle__DCG_1_8;
#line 944 "demangle.m"
    MR_Char demangle__Char_16;
#line 944 "demangle.m"
    MR_Integer demangle__Len_20;
#line 944 "demangle.m"
    MR_Integer demangle__Len1_21;
#line 948 "demangle.m"
    MR_Integer demangle__Rest_6;
#line 948 "demangle.m"
    MR_String demangle__DCG_2_9;

#line 961 "demangle.m"
    {
#line 961 "demangle.m"
      mercury__string__length_2_p_0(demangle__DCG_0_7, &demangle__Len_20);
    }
#line 962 "demangle.m"
    demangle__Len1_21 = (demangle__Len_20 - (MR_Integer) 1);
#line 963 "demangle.m"
    {
#line 963 "demangle.m"
      demangle__succeeded = mercury__string__index_3_p_0(demangle__DCG_0_7, demangle__Len1_21, &demangle__Char_16);
    }
#line 944 "demangle.m"
    if (demangle__succeeded)
#line 944 "demangle.m"
      {
#line 964 "demangle.m"
        {
#line 964 "demangle.m"
          mercury__string__left_3_p_0(demangle__DCG_0_7, demangle__Len1_21, &demangle__DCG_1_8);
        }
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 48))
#line 818 "demangle.m"
          {
#line 818 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 0;
#line 818 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 818 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 49))
#line 819 "demangle.m"
          {
#line 819 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 1;
#line 819 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 819 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 50))
#line 820 "demangle.m"
          {
#line 820 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 2;
#line 820 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 820 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 51))
#line 821 "demangle.m"
          {
#line 821 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 3;
#line 821 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 821 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 52))
#line 822 "demangle.m"
          {
#line 822 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 4;
#line 822 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 822 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 53))
#line 823 "demangle.m"
          {
#line 823 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 5;
#line 823 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 823 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 54))
#line 824 "demangle.m"
          {
#line 824 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 6;
#line 824 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 824 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 55))
#line 825 "demangle.m"
          {
#line 825 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 7;
#line 825 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 825 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 56))
#line 826 "demangle.m"
          {
#line 826 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 8;
#line 826 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 826 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_16 == (MR_Char) 57))
#line 827 "demangle.m"
          {
#line 827 "demangle.m"
            demangle__Digit_5 = (MR_Integer) 9;
#line 827 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 827 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
          demangle__succeeded = MR_FALSE;
#line 944 "demangle.m"
        if (demangle__succeeded)
#line 944 "demangle.m"
          {
#line 946 "demangle.m"
            {
#line 946 "demangle.m"
              demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Rest_6, demangle__DCG_1_8, &demangle__DCG_2_9);
            }
#line 948 "demangle.m"
            if (demangle__succeeded)
#line 948 "demangle.m"
              {
#line 948 "demangle.m"
                MR_Integer demangle__V_11_11 = (demangle__Rest_6 * (MR_Integer) 10);

#line 947 "demangle.m"
                *demangle__Int_4 = (demangle__V_11_11 + demangle__Digit_5);
#line 948 "demangle.m"
                *demangle__DCG_3_10 = demangle__DCG_2_9;
#line 948 "demangle.m"
              }
#line 948 "demangle.m"
            else
#line 948 "demangle.m"
              {
#line 949 "demangle.m"
                *demangle__Int_4 = demangle__Digit_5;
#line 948 "demangle.m"
                *demangle__DCG_3_10 = demangle__DCG_1_8;
#line 948 "demangle.m"
              }
#line 948 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 944 "demangle.m"
          }
#line 944 "demangle.m"
      }
#line 944 "demangle.m"
    return demangle__succeeded;
#line 944 "demangle.m"
  }
#line 942 "demangle.m"
}

#line 935 "demangle.m"
static void MR_CALL 
demangle__format_maybe_module_3_p_0(
#line 935 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 935 "demangle.m"
  MR_String demangle__Name_2,
#line 935 "demangle.m"
  MR_String * demangle__QualifiedName_3)
#line 935 "demangle.m"
{
#line 937 "demangle.m"
  {
#line 937 "demangle.m"
    MR_bool demangle__succeeded;

#line 937 "demangle.m"
    if ((demangle__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 937 "demangle.m"
      {
#line 938 "demangle.m"
        {
#line 938 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Name_2, demangle__QualifiedName_3);
#line 938 "demangle.m"
          return;
        }
#line 937 "demangle.m"
      }
#line 937 "demangle.m"
    else
#line 939 "demangle.m"
      {
#line 939 "demangle.m"
        MR_String demangle__Module_10 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__HeadVar__1_1, (MR_Integer) 0)));
#line 939 "demangle.m"
        MR_String demangle__V_19_19;
#line 939 "demangle.m"
        MR_Word demangle__V_25_25 = (MR_Word) &demangle_scalar_common_2[1];
#line 939 "demangle.m"
        MR_String demangle__V_27_27;
#line 939 "demangle.m"
        MR_String demangle__V_28_28;

#line 940 "demangle.m"
        {
#line 940 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_25_25, demangle__Name_2, &demangle__V_19_19);
        }
#line 940 "demangle.m"
        {
#line 940 "demangle.m"
          demangle__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_19_19);
        }
#line 940 "demangle.m"
        {
#line 940 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_25_25, demangle__Module_10, &demangle__V_28_28);
        }
#line 940 "demangle.m"
        {
#line 940 "demangle.m"
          *demangle__QualifiedName_3 = mercury__string__f_43_43_2_f_0(demangle__V_28_28, demangle__V_27_27);
        }
#line 939 "demangle.m"
      }
#line 937 "demangle.m"
  }
#line 935 "demangle.m"
}

#line 921 "demangle.m"
static void MR_CALL 
demangle__insert_prefix_3_p_0(
#line 921 "demangle.m"
  MR_String demangle__Prefix_4,
#line 921 "demangle.m"
  MR_String demangle__Name0_5,
#line 921 "demangle.m"
  MR_String * demangle__Name_6)
#line 921 "demangle.m"
{
#line 924 "demangle.m"
  {
#line 924 "demangle.m"
    MR_bool demangle__succeeded;

#line 924 "demangle.m"
    {
#line 924 "demangle.m"
      mercury__string__append_3_p_2(demangle__Prefix_4, demangle__Name0_5, demangle__Name_6);
#line 924 "demangle.m"
      return;
    }
#line 924 "demangle.m"
  }
#line 921 "demangle.m"
}

#line 890 "demangle.m"
static MR_bool MR_CALL 
demangle__find_matching_close_bracket_5_p_0(
#line 890 "demangle.m"
  MR_Integer demangle__NumBrackets0_6,
#line 890 "demangle.m"
  MR_Integer demangle__Length_7,
#line 890 "demangle.m"
  MR_String demangle__String_8,
#line 890 "demangle.m"
  MR_Integer demangle__Index0_9,
#line 890 "demangle.m"
  MR_Integer * demangle__Index_10)
#line 890 "demangle.m"
{
#line 893 "demangle.m"
  while (MR_TRUE)
#line 893 "demangle.m"
    {
#line 893 "demangle.m"
      /* tailcall optimized into a loop */
#line 893 "demangle.m"
      {
#line 893 "demangle.m"
        MR_bool demangle__succeeded = (demangle__Index0_9 < demangle__Length_7);
#line 893 "demangle.m"
        MR_Char demangle__Char_11;

#line 893 "demangle.m"
        if (demangle__succeeded)
#line 893 "demangle.m"
          {
#line 895 "demangle.m"
            {
#line 895 "demangle.m"
              mercury__string__unsafe_index_3_p_0(demangle__String_8, demangle__Index0_9, &demangle__Char_11);
            }
#line 896 "demangle.m"
            demangle__succeeded = (demangle__Char_11 == (MR_Char) 93);
#line 896 "demangle.m"
            if (demangle__succeeded)
#line 896 "demangle.m"
              demangle__succeeded = (demangle__NumBrackets0_6 == (MR_Integer) 0);
#line 898 "demangle.m"
            if (demangle__succeeded)
#line 897 "demangle.m"
              {
#line 897 "demangle.m"
                *demangle__Index_10 = demangle__Index0_9;
#line 897 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 897 "demangle.m"
              }
#line 898 "demangle.m"
            else
#line 906 "demangle.m"
              {
#line 906 "demangle.m"
                MR_Integer demangle__NumBrackets_12;
#line 906 "demangle.m"
                MR_Integer demangle__V_15_15;

#line 900 "demangle.m"
                demangle__succeeded = (demangle__Char_11 == (MR_Char) 91);
#line 902 "demangle.m"
                if (demangle__succeeded)
#line 901 "demangle.m"
                  {
#line 901 "demangle.m"
                    demangle__NumBrackets_12 = (demangle__NumBrackets0_6 + (MR_Integer) 1);
#line 901 "demangle.m"
                  }
#line 902 "demangle.m"
                else
#line 904 "demangle.m"
                  {
#line 902 "demangle.m"
                    demangle__succeeded = (demangle__Char_11 == (MR_Char) 93);
#line 904 "demangle.m"
                    if (demangle__succeeded)
#line 903 "demangle.m"
                      {
#line 903 "demangle.m"
                        demangle__NumBrackets_12 = (demangle__NumBrackets0_6 - (MR_Integer) 1);
#line 903 "demangle.m"
                      }
#line 904 "demangle.m"
                    else
#line 905 "demangle.m"
                      demangle__NumBrackets_12 = demangle__NumBrackets0_6;
#line 904 "demangle.m"
                  }
#line 908 "demangle.m"
                demangle__V_15_15 = (demangle__Index0_9 + (MR_Integer) 1);
#line 907 "demangle.m"
                /* direct tailcall eliminated */
#line 907 "demangle.m"
                {
#line 907 "demangle.m"
                  MR_Integer demangle__NumBrackets0__tmp_copy_6 = demangle__NumBrackets_12;
#line 907 "demangle.m"
                  MR_Integer demangle__Index0__tmp_copy_9 = demangle__V_15_15;

#line 907 "demangle.m"
                  demangle__Index0_9 = demangle__Index0__tmp_copy_9;
#line 907 "demangle.m"
                  demangle__NumBrackets0_6 = demangle__NumBrackets0__tmp_copy_6;
#line 907 "demangle.m"
                }
#line 907 "demangle.m"
                continue;
#line 906 "demangle.m"
              }
#line 893 "demangle.m"
          }
#line 893 "demangle.m"
        return demangle__succeeded;
#line 893 "demangle.m"
      }
#line 893 "demangle.m"
      break;
#line 893 "demangle.m"
    }
#line 890 "demangle.m"
}

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_1(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg)
#line 836 "demangle.m"
{
#line 836 "demangle.m"
  {
#line 836 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 836 "demangle.m"
    MR_builtin_longjmp((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0, 1);
#line 836 "demangle.m"
  }
#line 836 "demangle.m"
}

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_3(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg)
#line 836 "demangle.m"
{
#line 836 "demangle.m"
  {
#line 836 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 836 "demangle.m"
    (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9 = ((MR_String) (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9);
#line 836 "demangle.m"
    {
#line 836 "demangle.m"
      demangle__remove_maybe_module_prefix_4_p_0_2(demangle__env_ptr);
#line 836 "demangle.m"
      return;
    }
#line 836 "demangle.m"
  }
#line 836 "demangle.m"
}

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_2(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg)
#line 836 "demangle.m"
{
#line 836 "demangle.m"
  {
#line 836 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 837 "demangle.m"
    {
#line 837 "demangle.m"
      (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__prefix_2_p_0((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StopString_9);
    }
#line 837 "demangle.m"
    if ((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 837 "demangle.m"
      {
#line 837 "demangle.m"
        demangle__remove_maybe_module_prefix_4_p_0_1(demangle__env_ptr);
#line 837 "demangle.m"
        return;
      }
#line 836 "demangle.m"
  }
#line 836 "demangle.m"
}

#line 836 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0_4(
#line 836 "demangle.m"
  void * demangle__env_ptr_arg)
#line 836 "demangle.m"
{
#line 836 "demangle.m"
  {
#line 836 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s * demangle__env_ptr = (struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s *) demangle__env_ptr_arg;

#line 836 "demangle.m"
    if (MR_builtin_setjmp((demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__commit_0) == 0)
#line 836 "demangle.m"
      {
#line 836 "demangle.m"
        {
#line 836 "demangle.m"
          {
#line 836 "demangle.m"
            mercury__list__member_2_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, &(demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__conv0_StopString_9, (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__remove_maybe_module_prefix_4_p_0_3, demangle__env_ptr);
          }
#line 836 "demangle.m"
        }
#line 836 "demangle.m"
        (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_FALSE;
#line 836 "demangle.m"
      }
#line 836 "demangle.m"
    else
#line 836 "demangle.m"
      (demangle__env_ptr)->demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = MR_TRUE;
#line 836 "demangle.m"
  }
#line 836 "demangle.m"
}

#line 831 "demangle.m"
static void MR_CALL 
demangle__remove_maybe_module_prefix_4_p_0(
#line 831 "demangle.m"
  MR_Word * demangle__MaybeModule_5,
#line 831 "demangle.m"
  MR_Word demangle__StringsToStopAt_6,
#line 831 "demangle.m"
  MR_String demangle__String0_7,
#line 831 "demangle.m"
  MR_String * demangle__String_8)
#line 831 "demangle.m"
{
#line 831 "demangle.m"
  {
#line 831 "demangle.m"
    struct demangle__remove_maybe_module_prefix_4_p_0_env_0_s demangle__env;

#line 831 "demangle.m"
    (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6 = demangle__StringsToStopAt_6;
#line 831 "demangle.m"
    (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7 = demangle__String0_7;
#line 836 "demangle.m"
    {
#line 836 "demangle.m"
      demangle__remove_maybe_module_prefix_4_p_0_4(&demangle__env);
    }
#line 841 "demangle.m"
    if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 839 "demangle.m"
      {
#line 839 "demangle.m"
        *demangle__MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "demangle.m"
        *demangle__String_8 = (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
#line 839 "demangle.m"
      }
#line 841 "demangle.m"
    else
#line 859 "demangle.m"
      {
#line 859 "demangle.m"
        MR_Integer demangle__Index_10;

#line 842 "demangle.m"
        {
#line 842 "demangle.m"
          (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, (MR_String) "__", &demangle__Index_10);
        }
#line 859 "demangle.m"
        if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 844 "demangle.m"
          {
#line 844 "demangle.m"
            MR_String demangle__Module_11;
#line 844 "demangle.m"
            MR_Integer demangle__Len_12;
#line 844 "demangle.m"
            MR_Integer demangle__Index2_13;
#line 844 "demangle.m"
            MR_String demangle__String1_14;
#line 855 "demangle.m"
            MR_String demangle__SubModule_15;
#line 855 "demangle.m"
            MR_String demangle__String2_16;
#line 849 "demangle.m"
            MR_Word demangle__V_20_20;

#line 844 "demangle.m"
            {
#line 844 "demangle.m"
              mercury__string__left_3_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, demangle__Index_10, &demangle__Module_11);
            }
#line 845 "demangle.m"
            {
#line 845 "demangle.m"
              mercury__string__length_2_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, &demangle__Len_12);
            }
#line 846 "demangle.m"
            demangle__Index2_13 = (demangle__Index_10 + (MR_Integer) 2);
#line 847 "demangle.m"
            {
#line 847 "demangle.m"
              mercury__string__between_4_p_0((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7, demangle__Index2_13, demangle__Len_12, &demangle__String1_14);
            }
#line 849 "demangle.m"
            {
#line 849 "demangle.m"
              demangle__remove_maybe_module_prefix_4_p_0(&demangle__V_20_20, (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__StringsToStopAt_6, demangle__String1_14, &demangle__String2_16);
            }
#line 849 "demangle.m"
            (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) demangle__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 849 "demangle.m"
            if ((demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__succeeded)
#line 849 "demangle.m"
              {
#line 849 "demangle.m"
                demangle__SubModule_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__V_20_20, (MR_Integer) 0)));
#line 852 "demangle.m"
                {
#line 852 "demangle.m"
                  MR_String demangle__QualifiedModule_17;
#line 852 "demangle.m"
                  MR_Word demangle__V_21_21;
#line 852 "demangle.m"
                  MR_Word demangle__V_22_22;
#line 852 "demangle.m"
                  MR_Word demangle__V_24_24;

#line 852 "demangle.m"
                  {
#line 852 "demangle.m"
                    demangle__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_24_24, 0) = ((MR_Box) (demangle__SubModule_15));
#line 852 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "demangle.m"
                  }
#line 852 "demangle.m"
                  {
#line 852 "demangle.m"
                    demangle__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_22_22, 0) = ((MR_Box) ((MR_String) "."));
#line 852 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_22_22, 1) = ((MR_Box) (demangle__V_24_24));
#line 852 "demangle.m"
                  }
#line 852 "demangle.m"
                  {
#line 852 "demangle.m"
                    demangle__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_21_21, 0) = ((MR_Box) (demangle__Module_11));
#line 852 "demangle.m"
                    MR_hl_field(MR_mktag(1), demangle__V_21_21, 1) = ((MR_Box) (demangle__V_22_22));
#line 852 "demangle.m"
                  }
#line 852 "demangle.m"
                  {
#line 852 "demangle.m"
                    mercury__string__append_list_2_p_0(demangle__V_21_21, &demangle__QualifiedModule_17);
                  }
#line 853 "demangle.m"
                  {
#line 853 "demangle.m"
                    MR_Word base;
#line 853 "demangle.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 853 "demangle.m"
                    *demangle__MaybeModule_5 = base;
#line 853 "demangle.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__QualifiedModule_17));
#line 853 "demangle.m"
                  }
#line 854 "demangle.m"
                  *demangle__String_8 = demangle__String2_16;
#line 852 "demangle.m"
                }
#line 849 "demangle.m"
              }
#line 849 "demangle.m"
            else
#line 856 "demangle.m"
              {
#line 856 "demangle.m"
                {
#line 856 "demangle.m"
                  MR_Word base;
#line 856 "demangle.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 856 "demangle.m"
                  *demangle__MaybeModule_5 = base;
#line 856 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__Module_11));
#line 856 "demangle.m"
                }
#line 857 "demangle.m"
                *demangle__String_8 = demangle__String1_14;
#line 856 "demangle.m"
              }
#line 844 "demangle.m"
          }
#line 859 "demangle.m"
        else
#line 860 "demangle.m"
          {
#line 860 "demangle.m"
            *demangle__String_8 = (demangle__env).demangle__remove_maybe_module_prefix_4_p_0_env_0__String0_7;
#line 861 "demangle.m"
            *demangle__MaybeModule_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 860 "demangle.m"
          }
#line 859 "demangle.m"
      }
#line 831 "demangle.m"
  }
#line 831 "demangle.m"
}

#line 800 "demangle.m"
static MR_bool MR_CALL 
demangle__remove_int_2_4_p_0(
#line 800 "demangle.m"
  MR_Integer demangle__Int0_5,
#line 800 "demangle.m"
  MR_Integer * demangle__Int_6,
#line 800 "demangle.m"
  MR_String demangle__DCG_0_9,
#line 800 "demangle.m"
  MR_String * demangle__DCG_2_11)
#line 800 "demangle.m"
{
#line 806 "demangle.m"
  while (MR_TRUE)
#line 806 "demangle.m"
    {
#line 806 "demangle.m"
      /* tailcall optimized into a loop */
#line 806 "demangle.m"
      {
#line 806 "demangle.m"
        MR_bool demangle__succeeded;
#line 806 "demangle.m"
        MR_Integer demangle__Next_7;
#line 806 "demangle.m"
        MR_String demangle__DCG_1_10;
#line 812 "demangle.m"
        MR_Char demangle__Char_17;

#line 813 "demangle.m"
        {
#line 813 "demangle.m"
          demangle__succeeded = mercury__string__first_char_3_p_3(demangle__DCG_0_9, &demangle__Char_17, &demangle__DCG_1_10);
        }
#line 812 "demangle.m"
        if (demangle__succeeded)
#line 818 "demangle.m"
          {
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 48))
#line 818 "demangle.m"
              {
#line 818 "demangle.m"
                demangle__Next_7 = (MR_Integer) 0;
#line 818 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 818 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 49))
#line 819 "demangle.m"
              {
#line 819 "demangle.m"
                demangle__Next_7 = (MR_Integer) 1;
#line 819 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 819 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 50))
#line 820 "demangle.m"
              {
#line 820 "demangle.m"
                demangle__Next_7 = (MR_Integer) 2;
#line 820 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 820 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 51))
#line 821 "demangle.m"
              {
#line 821 "demangle.m"
                demangle__Next_7 = (MR_Integer) 3;
#line 821 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 821 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 52))
#line 822 "demangle.m"
              {
#line 822 "demangle.m"
                demangle__Next_7 = (MR_Integer) 4;
#line 822 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 822 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 53))
#line 823 "demangle.m"
              {
#line 823 "demangle.m"
                demangle__Next_7 = (MR_Integer) 5;
#line 823 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 823 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 54))
#line 824 "demangle.m"
              {
#line 824 "demangle.m"
                demangle__Next_7 = (MR_Integer) 6;
#line 824 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 824 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 55))
#line 825 "demangle.m"
              {
#line 825 "demangle.m"
                demangle__Next_7 = (MR_Integer) 7;
#line 825 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 825 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 56))
#line 826 "demangle.m"
              {
#line 826 "demangle.m"
                demangle__Next_7 = (MR_Integer) 8;
#line 826 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 826 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
            if ((demangle__Char_17 == (MR_Char) 57))
#line 827 "demangle.m"
              {
#line 827 "demangle.m"
                demangle__Next_7 = (MR_Integer) 9;
#line 827 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 827 "demangle.m"
              }
#line 818 "demangle.m"
            else
#line 818 "demangle.m"
              demangle__succeeded = MR_FALSE;
#line 818 "demangle.m"
          }
#line 806 "demangle.m"
        if (demangle__succeeded)
#line 804 "demangle.m"
          {
#line 804 "demangle.m"
            MR_Integer demangle__Int1_8;
#line 804 "demangle.m"
            MR_Integer demangle__V_12_12 = (demangle__Int0_5 * (MR_Integer) 10);

#line 804 "demangle.m"
            demangle__Int1_8 = (demangle__V_12_12 + demangle__Next_7);
#line 805 "demangle.m"
            /* direct tailcall eliminated */
#line 805 "demangle.m"
            {
#line 805 "demangle.m"
              MR_Integer demangle__Int0__tmp_copy_5 = demangle__Int1_8;
#line 805 "demangle.m"
              MR_String demangle__DCG_0__tmp_copy_9 = demangle__DCG_1_10;

#line 805 "demangle.m"
              demangle__DCG_0_9 = demangle__DCG_0__tmp_copy_9;
#line 805 "demangle.m"
              demangle__Int0_5 = demangle__Int0__tmp_copy_5;
#line 805 "demangle.m"
            }
#line 805 "demangle.m"
            continue;
#line 804 "demangle.m"
          }
#line 806 "demangle.m"
        else
#line 806 "demangle.m"
          {
#line 807 "demangle.m"
            *demangle__Int_6 = demangle__Int0_5;
#line 806 "demangle.m"
            *demangle__DCG_2_11 = demangle__DCG_0_9;
#line 806 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 806 "demangle.m"
          }
#line 806 "demangle.m"
        return demangle__succeeded;
#line 806 "demangle.m"
      }
#line 806 "demangle.m"
      break;
#line 806 "demangle.m"
    }
#line 800 "demangle.m"
}

#line 780 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_chars_2_p_0(
#line 780 "demangle.m"
  MR_String demangle__DCG_0_5,
#line 780 "demangle.m"
  MR_String * demangle__DCG_5_10)
#line 780 "demangle.m"
{
#line 782 "demangle.m"
  {
#line 782 "demangle.m"
    MR_bool demangle__succeeded;
#line 782 "demangle.m"
    MR_Integer demangle__I_3;
#line 782 "demangle.m"
    MR_Char demangle__C_4;
#line 782 "demangle.m"
    MR_String demangle__DCG_1_6;
#line 782 "demangle.m"
    MR_String demangle__DCG_4_9;
#line 782 "demangle.m"
    MR_Integer demangle__Digit_15;
#line 782 "demangle.m"
    MR_String demangle__DCG_1_16;
#line 782 "demangle.m"
    MR_Char demangle__Char_20;
#line 786 "demangle.m"
    MR_String demangle__DCG_2_7;
#line 784 "demangle.m"
    MR_String demangle__V_11_11;

#line 813 "demangle.m"
    {
#line 813 "demangle.m"
      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__DCG_0_5, &demangle__Char_20, &demangle__DCG_1_16);
    }
#line 782 "demangle.m"
    if (demangle__succeeded)
#line 782 "demangle.m"
      {
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 48))
#line 818 "demangle.m"
          {
#line 818 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 0;
#line 818 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 818 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 49))
#line 819 "demangle.m"
          {
#line 819 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 1;
#line 819 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 819 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 50))
#line 820 "demangle.m"
          {
#line 820 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 2;
#line 820 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 820 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 51))
#line 821 "demangle.m"
          {
#line 821 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 3;
#line 821 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 821 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 52))
#line 822 "demangle.m"
          {
#line 822 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 4;
#line 822 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 822 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 53))
#line 823 "demangle.m"
          {
#line 823 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 5;
#line 823 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 823 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 54))
#line 824 "demangle.m"
          {
#line 824 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 6;
#line 824 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 824 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 55))
#line 825 "demangle.m"
          {
#line 825 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 7;
#line 825 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 825 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 56))
#line 826 "demangle.m"
          {
#line 826 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 8;
#line 826 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 826 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
        if ((demangle__Char_20 == (MR_Char) 57))
#line 827 "demangle.m"
          {
#line 827 "demangle.m"
            demangle__Digit_15 = (MR_Integer) 9;
#line 827 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 827 "demangle.m"
          }
#line 818 "demangle.m"
        else
#line 818 "demangle.m"
          demangle__succeeded = MR_FALSE;
#line 782 "demangle.m"
        if (demangle__succeeded)
#line 782 "demangle.m"
          {
#line 798 "demangle.m"
            {
#line 798 "demangle.m"
              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_15, &demangle__I_3, demangle__DCG_1_16, &demangle__DCG_1_6);
            }
#line 782 "demangle.m"
            if (demangle__succeeded)
#line 782 "demangle.m"
              {
#line 784 "demangle.m"
                demangle__V_11_11 = (MR_String) "_";
#line 784 "demangle.m"
                {
#line 784 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_11_11, demangle__DCG_1_6, &demangle__DCG_2_7);
                }
#line 786 "demangle.m"
                if (demangle__succeeded)
#line 785 "demangle.m"
                  {
#line 785 "demangle.m"
                    demangle__succeeded = demangle__fix_mangled_ascii_chars_2_p_0(demangle__DCG_2_7, &demangle__DCG_4_9);
                  }
#line 786 "demangle.m"
                else
#line 787 "demangle.m"
                  {
#line 787 "demangle.m"
                    demangle__DCG_4_9 = demangle__DCG_1_6;
#line 787 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 787 "demangle.m"
                  }
#line 782 "demangle.m"
                if (demangle__succeeded)
#line 782 "demangle.m"
                  {
#line 789 "demangle.m"
                    {
#line 789 "demangle.m"
                      demangle__succeeded = mercury__char__to_int_2_p_2(&demangle__C_4, demangle__I_3);
                    }
#line 782 "demangle.m"
                    if (demangle__succeeded)
#line 782 "demangle.m"
                      {
#line 929 "demangle.m"
                        {
#line 929 "demangle.m"
                          mercury__string__first_char_3_p_4(demangle__DCG_5_10, demangle__C_4, demangle__DCG_4_9);
                        }
#line 929 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 782 "demangle.m"
                      }
#line 782 "demangle.m"
                  }
#line 782 "demangle.m"
              }
#line 782 "demangle.m"
          }
#line 782 "demangle.m"
      }
#line 782 "demangle.m"
    return demangle__succeeded;
#line 782 "demangle.m"
  }
#line 780 "demangle.m"
}

#line 737 "demangle.m"
static MR_bool MR_CALL 
demangle__fix_mangled_ascii_2_p_0(
#line 737 "demangle.m"
  MR_String demangle__DCG_0_3,
#line 737 "demangle.m"
  MR_String * demangle__DCG_37_40)
#line 737 "demangle.m"
{
#line 742 "demangle.m"
  {
#line 742 "demangle.m"
    MR_bool demangle__succeeded;
#line 742 "demangle.m"
    MR_String demangle__DCG_1_4;

#line 740 "demangle.m"
    {
#line 740 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f__", demangle__DCG_0_3, &demangle__DCG_1_4);
    }
#line 742 "demangle.m"
    if (demangle__succeeded)
#line 741 "demangle.m"
      {
#line 924 "demangle.m"
        {
#line 924 "demangle.m"
          mercury__string__append_3_p_2((MR_String) "f_", demangle__DCG_1_4, demangle__DCG_37_40);
        }
#line 741 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 741 "demangle.m"
      }
#line 742 "demangle.m"
    else
#line 744 "demangle.m"
      {
#line 744 "demangle.m"
        MR_String demangle__DCG_3_6;

#line 742 "demangle.m"
        {
#line 742 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_not_equal", demangle__DCG_0_3, &demangle__DCG_3_6);
        }
#line 744 "demangle.m"
        if (demangle__succeeded)
#line 743 "demangle.m"
          {
#line 924 "demangle.m"
            {
#line 924 "demangle.m"
              mercury__string__append_3_p_2((MR_String) "\\=", demangle__DCG_3_6, demangle__DCG_37_40);
            }
#line 743 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 743 "demangle.m"
          }
#line 744 "demangle.m"
        else
#line 746 "demangle.m"
          {
#line 746 "demangle.m"
            MR_String demangle__DCG_5_8;

#line 744 "demangle.m"
            {
#line 744 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_or_equal", demangle__DCG_0_3, &demangle__DCG_5_8);
            }
#line 746 "demangle.m"
            if (demangle__succeeded)
#line 745 "demangle.m"
              {
#line 924 "demangle.m"
                {
#line 924 "demangle.m"
                  mercury__string__append_3_p_2((MR_String) ">=", demangle__DCG_5_8, demangle__DCG_37_40);
                }
#line 745 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 745 "demangle.m"
              }
#line 746 "demangle.m"
            else
#line 748 "demangle.m"
              {
#line 748 "demangle.m"
                MR_String demangle__DCG_7_10;

#line 746 "demangle.m"
                {
#line 746 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_or_equal", demangle__DCG_0_3, &demangle__DCG_7_10);
                }
#line 748 "demangle.m"
                if (demangle__succeeded)
#line 747 "demangle.m"
                  {
#line 924 "demangle.m"
                    {
#line 924 "demangle.m"
                      mercury__string__append_3_p_2((MR_String) "=<", demangle__DCG_7_10, demangle__DCG_37_40);
                    }
#line 747 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 747 "demangle.m"
                  }
#line 748 "demangle.m"
                else
#line 750 "demangle.m"
                  {
#line 750 "demangle.m"
                    MR_String demangle__DCG_9_12;

#line 748 "demangle.m"
                    {
#line 748 "demangle.m"
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_equal", demangle__DCG_0_3, &demangle__DCG_9_12);
                    }
#line 750 "demangle.m"
                    if (demangle__succeeded)
#line 749 "demangle.m"
                      {
#line 924 "demangle.m"
                        {
#line 924 "demangle.m"
                          mercury__string__append_3_p_2((MR_String) "=", demangle__DCG_9_12, demangle__DCG_37_40);
                        }
#line 749 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 749 "demangle.m"
                      }
#line 750 "demangle.m"
                    else
#line 752 "demangle.m"
                      {
#line 752 "demangle.m"
                        MR_String demangle__DCG_11_14;

#line 750 "demangle.m"
                        {
#line 750 "demangle.m"
                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_less_than", demangle__DCG_0_3, &demangle__DCG_11_14);
                        }
#line 752 "demangle.m"
                        if (demangle__succeeded)
#line 751 "demangle.m"
                          {
#line 924 "demangle.m"
                            {
#line 924 "demangle.m"
                              mercury__string__append_3_p_2((MR_String) "<", demangle__DCG_11_14, demangle__DCG_37_40);
                            }
#line 751 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 751 "demangle.m"
                          }
#line 752 "demangle.m"
                        else
#line 754 "demangle.m"
                          {
#line 754 "demangle.m"
                            MR_String demangle__DCG_13_16;

#line 752 "demangle.m"
                            {
#line 752 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_greater_than", demangle__DCG_0_3, &demangle__DCG_13_16);
                            }
#line 754 "demangle.m"
                            if (demangle__succeeded)
#line 753 "demangle.m"
                              {
#line 924 "demangle.m"
                                {
#line 924 "demangle.m"
                                  mercury__string__append_3_p_2((MR_String) ">", demangle__DCG_13_16, demangle__DCG_37_40);
                                }
#line 753 "demangle.m"
                                demangle__succeeded = MR_TRUE;
#line 753 "demangle.m"
                              }
#line 754 "demangle.m"
                            else
#line 756 "demangle.m"
                              {
#line 756 "demangle.m"
                                MR_String demangle__DCG_15_18;

#line 754 "demangle.m"
                                {
#line 754 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_minus", demangle__DCG_0_3, &demangle__DCG_15_18);
                                }
#line 756 "demangle.m"
                                if (demangle__succeeded)
#line 755 "demangle.m"
                                  {
#line 755 "demangle.m"
                                    {
#line 755 "demangle.m"
                                      demangle__insert_prefix_3_p_0((MR_String) "-", demangle__DCG_15_18, demangle__DCG_37_40);
                                    }
#line 755 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 755 "demangle.m"
                                  }
#line 756 "demangle.m"
                                else
#line 758 "demangle.m"
                                  {
#line 758 "demangle.m"
                                    MR_String demangle__DCG_17_20;

#line 756 "demangle.m"
                                    {
#line 756 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_plus", demangle__DCG_0_3, &demangle__DCG_17_20);
                                    }
#line 758 "demangle.m"
                                    if (demangle__succeeded)
#line 757 "demangle.m"
                                      {
#line 757 "demangle.m"
                                        {
#line 757 "demangle.m"
                                          demangle__insert_prefix_3_p_0((MR_String) "+", demangle__DCG_17_20, demangle__DCG_37_40);
                                        }
#line 757 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 757 "demangle.m"
                                      }
#line 758 "demangle.m"
                                    else
#line 760 "demangle.m"
                                      {
#line 760 "demangle.m"
                                        MR_String demangle__DCG_19_22;

#line 758 "demangle.m"
                                        {
#line 758 "demangle.m"
                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_times", demangle__DCG_0_3, &demangle__DCG_19_22);
                                        }
#line 760 "demangle.m"
                                        if (demangle__succeeded)
#line 759 "demangle.m"
                                          {
#line 759 "demangle.m"
                                            {
#line 759 "demangle.m"
                                              demangle__insert_prefix_3_p_0((MR_String) "*", demangle__DCG_19_22, demangle__DCG_37_40);
                                            }
#line 759 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 759 "demangle.m"
                                          }
#line 760 "demangle.m"
                                        else
#line 762 "demangle.m"
                                          {
#line 762 "demangle.m"
                                            MR_String demangle__DCG_21_24;

#line 760 "demangle.m"
                                            {
#line 760 "demangle.m"
                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_slash", demangle__DCG_0_3, &demangle__DCG_21_24);
                                            }
#line 762 "demangle.m"
                                            if (demangle__succeeded)
#line 761 "demangle.m"
                                              {
#line 761 "demangle.m"
                                                {
#line 761 "demangle.m"
                                                  demangle__insert_prefix_3_p_0((MR_String) "/", demangle__DCG_21_24, demangle__DCG_37_40);
                                                }
#line 761 "demangle.m"
                                                demangle__succeeded = MR_TRUE;
#line 761 "demangle.m"
                                              }
#line 762 "demangle.m"
                                            else
#line 764 "demangle.m"
                                              {
#line 764 "demangle.m"
                                                MR_String demangle__DCG_23_26;

#line 762 "demangle.m"
                                                {
#line 762 "demangle.m"
                                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_comma", demangle__DCG_0_3, &demangle__DCG_23_26);
                                                }
#line 764 "demangle.m"
                                                if (demangle__succeeded)
#line 763 "demangle.m"
                                                  {
#line 763 "demangle.m"
                                                    {
#line 763 "demangle.m"
                                                      demangle__insert_prefix_3_p_0((MR_String) ",", demangle__DCG_23_26, demangle__DCG_37_40);
                                                    }
#line 763 "demangle.m"
                                                    demangle__succeeded = MR_TRUE;
#line 763 "demangle.m"
                                                  }
#line 764 "demangle.m"
                                                else
#line 766 "demangle.m"
                                                  {
#line 766 "demangle.m"
                                                    MR_String demangle__DCG_25_28;

#line 764 "demangle.m"
                                                    {
#line 764 "demangle.m"
                                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_semicolon", demangle__DCG_0_3, &demangle__DCG_25_28);
                                                    }
#line 766 "demangle.m"
                                                    if (demangle__succeeded)
#line 765 "demangle.m"
                                                      {
#line 765 "demangle.m"
                                                        {
#line 765 "demangle.m"
                                                          demangle__insert_prefix_3_p_0((MR_String) ";", demangle__DCG_25_28, demangle__DCG_37_40);
                                                        }
#line 765 "demangle.m"
                                                        demangle__succeeded = MR_TRUE;
#line 765 "demangle.m"
                                                      }
#line 766 "demangle.m"
                                                    else
#line 768 "demangle.m"
                                                      {
#line 768 "demangle.m"
                                                        MR_String demangle__DCG_27_30;

#line 766 "demangle.m"
                                                        {
#line 766 "demangle.m"
                                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cut", demangle__DCG_0_3, &demangle__DCG_27_30);
                                                        }
#line 768 "demangle.m"
                                                        if (demangle__succeeded)
#line 767 "demangle.m"
                                                          {
#line 767 "demangle.m"
                                                            {
#line 767 "demangle.m"
                                                              demangle__insert_prefix_3_p_0((MR_String) "!", demangle__DCG_27_30, demangle__DCG_37_40);
                                                            }
#line 767 "demangle.m"
                                                            demangle__succeeded = MR_TRUE;
#line 767 "demangle.m"
                                                          }
#line 768 "demangle.m"
                                                        else
#line 770 "demangle.m"
                                                          {
#line 770 "demangle.m"
                                                            MR_String demangle__DCG_29_32;

#line 768 "demangle.m"
                                                            {
#line 768 "demangle.m"
                                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_tuple", demangle__DCG_0_3, &demangle__DCG_29_32);
                                                            }
#line 770 "demangle.m"
                                                            if (demangle__succeeded)
#line 769 "demangle.m"
                                                              {
#line 769 "demangle.m"
                                                                {
#line 769 "demangle.m"
                                                                  demangle__insert_prefix_3_p_0((MR_String) "{}", demangle__DCG_29_32, demangle__DCG_37_40);
                                                                }
#line 769 "demangle.m"
                                                                demangle__succeeded = MR_TRUE;
#line 769 "demangle.m"
                                                              }
#line 770 "demangle.m"
                                                            else
#line 772 "demangle.m"
                                                              {
#line 772 "demangle.m"
                                                                MR_String demangle__DCG_31_34;

#line 770 "demangle.m"
                                                                {
#line 770 "demangle.m"
                                                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_cons", demangle__DCG_0_3, &demangle__DCG_31_34);
                                                                }
#line 772 "demangle.m"
                                                                if (demangle__succeeded)
#line 771 "demangle.m"
                                                                  {
#line 771 "demangle.m"
                                                                    {
#line 771 "demangle.m"
                                                                      demangle__insert_prefix_3_p_0((MR_String) "[|]", demangle__DCG_31_34, demangle__DCG_37_40);
                                                                    }
#line 771 "demangle.m"
                                                                    demangle__succeeded = MR_TRUE;
#line 771 "demangle.m"
                                                                  }
#line 772 "demangle.m"
                                                                else
#line 774 "demangle.m"
                                                                  {
#line 774 "demangle.m"
                                                                    MR_String demangle__DCG_33_36;

#line 772 "demangle.m"
                                                                    {
#line 772 "demangle.m"
                                                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_nil", demangle__DCG_0_3, &demangle__DCG_33_36);
                                                                    }
#line 774 "demangle.m"
                                                                    if (demangle__succeeded)
#line 773 "demangle.m"
                                                                      {
#line 773 "demangle.m"
                                                                        {
#line 773 "demangle.m"
                                                                          demangle__insert_prefix_3_p_0((MR_String) "[]", demangle__DCG_33_36, demangle__DCG_37_40);
                                                                        }
#line 773 "demangle.m"
                                                                        demangle__succeeded = MR_TRUE;
#line 773 "demangle.m"
                                                                      }
#line 774 "demangle.m"
                                                                    else
#line 776 "demangle.m"
                                                                      {
#line 776 "demangle.m"
                                                                        MR_String demangle__DCG_35_38;

#line 774 "demangle.m"
                                                                        {
#line 774 "demangle.m"
                                                                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "f_", demangle__DCG_0_3, &demangle__DCG_35_38);
                                                                        }
#line 776 "demangle.m"
                                                                        if (demangle__succeeded)
#line 775 "demangle.m"
                                                                          {
#line 775 "demangle.m"
                                                                            return demangle__succeeded = demangle__fix_mangled_ascii_chars_2_p_0(demangle__DCG_35_38, demangle__DCG_37_40);
                                                                          }
#line 776 "demangle.m"
                                                                        else
#line 777 "demangle.m"
                                                                          {
#line 777 "demangle.m"
                                                                            *demangle__DCG_37_40 = demangle__DCG_0_3;
#line 777 "demangle.m"
                                                                            demangle__succeeded = MR_TRUE;
#line 777 "demangle.m"
                                                                          }
#line 776 "demangle.m"
                                                                      }
#line 774 "demangle.m"
                                                                  }
#line 772 "demangle.m"
                                                              }
#line 770 "demangle.m"
                                                          }
#line 768 "demangle.m"
                                                      }
#line 766 "demangle.m"
                                                  }
#line 764 "demangle.m"
                                              }
#line 762 "demangle.m"
                                          }
#line 760 "demangle.m"
                                      }
#line 758 "demangle.m"
                                  }
#line 756 "demangle.m"
                              }
#line 754 "demangle.m"
                          }
#line 752 "demangle.m"
                      }
#line 750 "demangle.m"
                  }
#line 748 "demangle.m"
              }
#line 746 "demangle.m"
          }
#line 744 "demangle.m"
      }
#line 742 "demangle.m"
    return demangle__succeeded;
#line 742 "demangle.m"
  }
#line 737 "demangle.m"
}

#line 704 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_class_args_4_p_0(
#line 704 "demangle.m"
  MR_Integer demangle__Num_5,
#line 704 "demangle.m"
  MR_String * demangle__FormattedArgs_6,
#line 704 "demangle.m"
  MR_String demangle__DCG_0_12,
#line 704 "demangle.m"
  MR_String * demangle__DCG_5_17)
#line 704 "demangle.m"
{
#line 707 "demangle.m"
  {
#line 707 "demangle.m"
    MR_bool demangle__succeeded;
#line 707 "demangle.m"
    MR_String demangle__TypeName_7;
#line 707 "demangle.m"
    MR_Integer demangle__TypeArity_8;
#line 707 "demangle.m"
    MR_String demangle__Sep_9;
#line 707 "demangle.m"
    MR_String demangle__Rest_11;
#line 707 "demangle.m"
    MR_String demangle__DCG_1_13;
#line 707 "demangle.m"
    MR_String demangle__DCG_2_14;
#line 707 "demangle.m"
    MR_String demangle__DCG_3_15;
#line 707 "demangle.m"
    MR_String demangle__DCG_4_16;
#line 707 "demangle.m"
    MR_Word demangle__V_18_18;
#line 707 "demangle.m"
    MR_String demangle__V_22_22;
#line 707 "demangle.m"
    MR_String demangle__V_23_23;
#line 707 "demangle.m"
    MR_String demangle__V_36_36;
#line 707 "demangle.m"
    MR_Word demangle__V_37_37;
#line 707 "demangle.m"
    MR_Word demangle__V_38_38;
#line 707 "demangle.m"
    MR_Word demangle__V_39_39;
#line 707 "demangle.m"
    MR_Word demangle__V_40_40;
#line 707 "demangle.m"
    MR_Word demangle__V_41_41;
#line 707 "demangle.m"
    MR_Word demangle__V_42_42;
#line 707 "demangle.m"
    MR_String demangle__V_43_43;
#line 707 "demangle.m"
    MR_String demangle__V_50_50;
#line 707 "demangle.m"
    MR_String demangle__V_51_51;
#line 707 "demangle.m"
    MR_String demangle__V_58_58;
#line 707 "demangle.m"
    MR_String demangle__V_59_59;
#line 707 "demangle.m"
    MR_String demangle__V_60_60;
#line 707 "demangle.m"
    MR_String demangle__V_61_61;
#line 707 "demangle.m"
    MR_Integer demangle__Digit_71;
#line 707 "demangle.m"
    MR_String demangle__DCG_1_72;
#line 707 "demangle.m"
    MR_Char demangle__Char_76;
#line 713 "demangle.m"
    MR_Integer demangle__V_24_24;

#line 708 "demangle.m"
    {
#line 708 "demangle.m"
      demangle__remove_maybe_module_prefix_4_p_0(&demangle__V_18_18, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]), demangle__DCG_0_12, &demangle__DCG_1_13);
    }
#line 708 "demangle.m"
    demangle__succeeded = ((MR_tag((MR_Word) demangle__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 708 "demangle.m"
    if (demangle__succeeded)
#line 708 "demangle.m"
      {
#line 708 "demangle.m"
        demangle__TypeName_7 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__V_18_18, (MR_Integer) 0)));
#line 709 "demangle.m"
        demangle__succeeded = (strcmp(demangle__TypeName_7, (MR_String) "") == 0);
#line 709 "demangle.m"
        demangle__succeeded = !(demangle__succeeded);
#line 707 "demangle.m"
        if (demangle__succeeded)
#line 707 "demangle.m"
          {
#line 710 "demangle.m"
            demangle__V_22_22 = (MR_String) "arity";
#line 710 "demangle.m"
            {
#line 710 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_22_22, demangle__DCG_1_13, &demangle__DCG_2_14);
            }
#line 707 "demangle.m"
            if (demangle__succeeded)
#line 707 "demangle.m"
              {
#line 813 "demangle.m"
                {
#line 813 "demangle.m"
                  demangle__succeeded = mercury__string__first_char_3_p_3(demangle__DCG_2_14, &demangle__Char_76, &demangle__DCG_1_72);
                }
#line 707 "demangle.m"
                if (demangle__succeeded)
#line 707 "demangle.m"
                  {
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 48))
#line 818 "demangle.m"
                      {
#line 818 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 0;
#line 818 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 818 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 49))
#line 819 "demangle.m"
                      {
#line 819 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 1;
#line 819 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 819 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 50))
#line 820 "demangle.m"
                      {
#line 820 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 2;
#line 820 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 820 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 51))
#line 821 "demangle.m"
                      {
#line 821 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 3;
#line 821 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 821 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 52))
#line 822 "demangle.m"
                      {
#line 822 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 4;
#line 822 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 822 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 53))
#line 823 "demangle.m"
                      {
#line 823 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 5;
#line 823 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 823 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 54))
#line 824 "demangle.m"
                      {
#line 824 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 6;
#line 824 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 824 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 55))
#line 825 "demangle.m"
                      {
#line 825 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 7;
#line 825 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 825 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 56))
#line 826 "demangle.m"
                      {
#line 826 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 8;
#line 826 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 826 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                    if ((demangle__Char_76 == (MR_Char) 57))
#line 827 "demangle.m"
                      {
#line 827 "demangle.m"
                        demangle__Digit_71 = (MR_Integer) 9;
#line 827 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 827 "demangle.m"
                      }
#line 818 "demangle.m"
                    else
#line 818 "demangle.m"
                      demangle__succeeded = MR_FALSE;
#line 707 "demangle.m"
                    if (demangle__succeeded)
#line 707 "demangle.m"
                      {
#line 798 "demangle.m"
                        {
#line 798 "demangle.m"
                          demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_71, &demangle__TypeArity_8, demangle__DCG_1_72, &demangle__DCG_3_15);
                        }
#line 707 "demangle.m"
                        if (demangle__succeeded)
#line 707 "demangle.m"
                          {
#line 712 "demangle.m"
                            demangle__V_23_23 = (MR_String) "__";
#line 712 "demangle.m"
                            {
#line 712 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_23_23, demangle__DCG_3_15, &demangle__DCG_4_16);
                            }
#line 707 "demangle.m"
                            if (demangle__succeeded)
#line 707 "demangle.m"
                              {
#line 713 "demangle.m"
                                demangle__V_24_24 = (MR_Integer) 1;
#line 713 "demangle.m"
                                demangle__succeeded = (demangle__Num_5 > demangle__V_24_24);
#line 717 "demangle.m"
                                if (demangle__succeeded)
#line 714 "demangle.m"
                                  {
#line 714 "demangle.m"
                                    MR_Integer demangle__Num1_10;

#line 714 "demangle.m"
                                    demangle__Sep_9 = (MR_String) ", ";
#line 715 "demangle.m"
                                    demangle__Num1_10 = (demangle__Num_5 - (MR_Integer) 1);
#line 716 "demangle.m"
                                    {
#line 716 "demangle.m"
                                      demangle__succeeded = demangle__demangle_class_args_4_p_0(demangle__Num1_10, &demangle__Rest_11, demangle__DCG_4_16, demangle__DCG_5_17);
                                    }
#line 714 "demangle.m"
                                  }
#line 717 "demangle.m"
                                else
#line 717 "demangle.m"
                                  {
#line 718 "demangle.m"
                                    demangle__Sep_9 = (MR_String) "";
#line 719 "demangle.m"
                                    demangle__Rest_11 = (MR_String) "";
#line 717 "demangle.m"
                                    *demangle__DCG_5_17 = demangle__DCG_4_16;
#line 717 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 717 "demangle.m"
                                  }
#line 707 "demangle.m"
                                if (demangle__succeeded)
#line 707 "demangle.m"
                                  {
#line 3905 "demangle.c"
                                    demangle__V_37_37 = (MR_Integer) 0;
#line 3907 "demangle.c"
                                    demangle__V_38_38 = (MR_Integer) 0;
#line 3909 "demangle.c"
                                    demangle__V_39_39 = (MR_Integer) 0;
#line 3911 "demangle.c"
                                    demangle__V_40_40 = (MR_Integer) 0;
#line 3913 "demangle.c"
                                    demangle__V_41_41 = (MR_Integer) 0;
#line 3915 "demangle.c"
                                    demangle__V_42_42 = (MR_Word) &demangle_scalar_common_2[1];
#line 722 "demangle.m"
                                    {
#line 722 "demangle.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_42_42, demangle__Rest_11, &demangle__V_36_36);
                                    }
#line 722 "demangle.m"
                                    {
#line 722 "demangle.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_42_42, demangle__Sep_9, &demangle__V_43_43);
                                    }
#line 721 "demangle.m"
                                    {
#line 721 "demangle.m"
                                      demangle__V_50_50 = mercury__string__f_43_43_2_f_0(demangle__V_43_43, demangle__V_36_36);
                                    }
#line 722 "demangle.m"
                                    {
#line 722 "demangle.m"
                                      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_42_42, demangle__TypeArity_8, &demangle__V_51_51);
                                    }
#line 721 "demangle.m"
                                    {
#line 721 "demangle.m"
                                      demangle__V_58_58 = mercury__string__f_43_43_2_f_0(demangle__V_51_51, demangle__V_50_50);
                                    }
#line 3942 "demangle.c"
                                    demangle__V_59_59 = (MR_String) "/";
#line 721 "demangle.m"
                                    {
#line 721 "demangle.m"
                                      demangle__V_60_60 = mercury__string__f_43_43_2_f_0(demangle__V_59_59, demangle__V_58_58);
                                    }
#line 722 "demangle.m"
                                    {
#line 722 "demangle.m"
                                      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_42_42, demangle__TypeName_7, &demangle__V_61_61);
                                    }
#line 721 "demangle.m"
                                    {
#line 721 "demangle.m"
                                      *demangle__FormattedArgs_6 = mercury__string__f_43_43_2_f_0(demangle__V_61_61, demangle__V_60_60);
                                    }
#line 721 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 707 "demangle.m"
                                  }
#line 707 "demangle.m"
                              }
#line 707 "demangle.m"
                          }
#line 707 "demangle.m"
                      }
#line 707 "demangle.m"
                  }
#line 707 "demangle.m"
              }
#line 707 "demangle.m"
          }
#line 708 "demangle.m"
      }
#line 707 "demangle.m"
    return demangle__succeeded;
#line 707 "demangle.m"
  }
#line 704 "demangle.m"
}

#line 688 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_typeclass_info_2_p_0(
#line 688 "demangle.m"
  MR_String demangle__DCG_0_7,
#line 688 "demangle.m"
  MR_String * demangle__DCG_9_16)
#line 688 "demangle.m"
{
#line 690 "demangle.m"
  {
#line 690 "demangle.m"
    MR_bool demangle__succeeded;
#line 690 "demangle.m"
    MR_String demangle__ClassName_3;
#line 690 "demangle.m"
    MR_Integer demangle__ClassArity_4;
#line 690 "demangle.m"
    MR_String demangle__Args_5;
#line 690 "demangle.m"
    MR_String demangle__DCG_1_8;
#line 690 "demangle.m"
    MR_String demangle__DCG_2_9;
#line 690 "demangle.m"
    MR_String demangle__DCG_3_10;
#line 690 "demangle.m"
    MR_String demangle__DCG_4_11;
#line 690 "demangle.m"
    MR_String demangle__DCG_5_12;
#line 690 "demangle.m"
    MR_String demangle__DCG_6_13;
#line 690 "demangle.m"
    MR_String demangle__DCG_7_14;
#line 690 "demangle.m"
    MR_Word demangle__V_19_19;
#line 690 "demangle.m"
    MR_Word demangle__V_20_20;
#line 690 "demangle.m"
    MR_String demangle__V_21_21;
#line 690 "demangle.m"
    MR_Word demangle__V_22_22;
#line 690 "demangle.m"
    MR_String demangle__V_23_23;
#line 690 "demangle.m"
    MR_String demangle__V_24_24;
#line 690 "demangle.m"
    MR_String demangle__V_32_32;
#line 690 "demangle.m"
    MR_String demangle__V_33_33;
#line 690 "demangle.m"
    MR_Word demangle__V_34_34;
#line 690 "demangle.m"
    MR_Word demangle__V_35_35;
#line 690 "demangle.m"
    MR_Word demangle__V_36_36;
#line 690 "demangle.m"
    MR_Word demangle__V_37_37;
#line 690 "demangle.m"
    MR_Word demangle__V_38_38;
#line 690 "demangle.m"
    MR_Word demangle__V_39_39;
#line 690 "demangle.m"
    MR_String demangle__V_40_40;
#line 690 "demangle.m"
    MR_String demangle__V_41_41;
#line 690 "demangle.m"
    MR_String demangle__V_42_42;
#line 690 "demangle.m"
    MR_String demangle__V_43_43;
#line 690 "demangle.m"
    MR_String demangle__V_50_50;
#line 690 "demangle.m"
    MR_String demangle__V_51_51;
#line 690 "demangle.m"
    MR_Integer demangle__Digit_60;
#line 690 "demangle.m"
    MR_String demangle__DCG_1_61;
#line 690 "demangle.m"
    MR_Char demangle__Char_65;
#line 914 "demangle.m"
    MR_String demangle__DCG_1_55;
#line 699 "demangle.m"
    MR_String demangle__DCG_8_15;

#line 914 "demangle.m"
    {
#line 914 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data___", demangle__DCG_0_7, &demangle__DCG_1_55);
    }
#line 914 "demangle.m"
    if (demangle__succeeded)
#line 914 "demangle.m"
      demangle__DCG_1_8 = demangle__DCG_1_55;
#line 914 "demangle.m"
    else
#line 914 "demangle.m"
      demangle__DCG_1_8 = demangle__DCG_0_7;
#line 692 "demangle.m"
    {
#line 692 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "base_typeclass_info_", demangle__DCG_1_8, &demangle__DCG_2_9);
    }
#line 690 "demangle.m"
    if (demangle__succeeded)
#line 690 "demangle.m"
      {
#line 693 "demangle.m"
        demangle__V_21_21 = (MR_String) "arity";
#line 693 "demangle.m"
        demangle__V_22_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 693 "demangle.m"
        demangle__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[15]);
#line 693 "demangle.m"
        {
#line 693 "demangle.m"
          demangle__remove_maybe_module_prefix_4_p_0(&demangle__V_19_19, demangle__V_20_20, demangle__DCG_2_9, &demangle__DCG_3_10);
        }
#line 693 "demangle.m"
        demangle__succeeded = ((MR_tag((MR_Word) demangle__V_19_19)) == (MR_mktag((MR_Integer) 1)));
#line 693 "demangle.m"
        if (demangle__succeeded)
#line 693 "demangle.m"
          {
#line 693 "demangle.m"
            demangle__ClassName_3 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__V_19_19, (MR_Integer) 0)));
#line 694 "demangle.m"
            demangle__succeeded = (strcmp(demangle__ClassName_3, (MR_String) "") == 0);
#line 694 "demangle.m"
            demangle__succeeded = !(demangle__succeeded);
#line 690 "demangle.m"
            if (demangle__succeeded)
#line 690 "demangle.m"
              {
#line 695 "demangle.m"
                demangle__V_23_23 = (MR_String) "arity";
#line 695 "demangle.m"
                {
#line 695 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_23_23, demangle__DCG_3_10, &demangle__DCG_4_11);
                }
#line 690 "demangle.m"
                if (demangle__succeeded)
#line 690 "demangle.m"
                  {
#line 813 "demangle.m"
                    {
#line 813 "demangle.m"
                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__DCG_4_11, &demangle__Char_65, &demangle__DCG_1_61);
                    }
#line 690 "demangle.m"
                    if (demangle__succeeded)
#line 690 "demangle.m"
                      {
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 48))
#line 818 "demangle.m"
                          {
#line 818 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 0;
#line 818 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 818 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 49))
#line 819 "demangle.m"
                          {
#line 819 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 1;
#line 819 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 819 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 50))
#line 820 "demangle.m"
                          {
#line 820 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 2;
#line 820 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 820 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 51))
#line 821 "demangle.m"
                          {
#line 821 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 3;
#line 821 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 821 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 52))
#line 822 "demangle.m"
                          {
#line 822 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 4;
#line 822 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 822 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 53))
#line 823 "demangle.m"
                          {
#line 823 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 5;
#line 823 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 823 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 54))
#line 824 "demangle.m"
                          {
#line 824 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 6;
#line 824 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 824 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 55))
#line 825 "demangle.m"
                          {
#line 825 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 7;
#line 825 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 825 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 56))
#line 826 "demangle.m"
                          {
#line 826 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 8;
#line 826 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 826 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_65 == (MR_Char) 57))
#line 827 "demangle.m"
                          {
#line 827 "demangle.m"
                            demangle__Digit_60 = (MR_Integer) 9;
#line 827 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 827 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                          demangle__succeeded = MR_FALSE;
#line 690 "demangle.m"
                        if (demangle__succeeded)
#line 690 "demangle.m"
                          {
#line 798 "demangle.m"
                            {
#line 798 "demangle.m"
                              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_60, &demangle__ClassArity_4, demangle__DCG_1_61, &demangle__DCG_5_12);
                            }
#line 690 "demangle.m"
                            if (demangle__succeeded)
#line 690 "demangle.m"
                              {
#line 697 "demangle.m"
                                demangle__V_24_24 = (MR_String) "__";
#line 697 "demangle.m"
                                {
#line 697 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_24_24, demangle__DCG_5_12, &demangle__DCG_6_13);
                                }
#line 690 "demangle.m"
                                if (demangle__succeeded)
#line 690 "demangle.m"
                                  {
#line 698 "demangle.m"
                                    {
#line 698 "demangle.m"
                                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__DCG_6_13, &demangle__DCG_7_14);
                                    }
#line 690 "demangle.m"
                                    if (demangle__succeeded)
#line 690 "demangle.m"
                                      {
#line 699 "demangle.m"
                                        {
#line 699 "demangle.m"
                                          demangle__succeeded = demangle__demangle_class_args_4_p_0(demangle__ClassArity_4, &demangle__Args_5, demangle__DCG_7_14, &demangle__DCG_8_15);
                                        }
#line 690 "demangle.m"
                                        if (demangle__succeeded)
#line 690 "demangle.m"
                                          {
#line 4301 "demangle.c"
                                            demangle__V_32_32 = (MR_String) ")>";
#line 4303 "demangle.c"
                                            demangle__V_34_34 = (MR_Integer) 0;
#line 4305 "demangle.c"
                                            demangle__V_35_35 = (MR_Integer) 0;
#line 4307 "demangle.c"
                                            demangle__V_36_36 = (MR_Integer) 0;
#line 4309 "demangle.c"
                                            demangle__V_37_37 = (MR_Integer) 0;
#line 4311 "demangle.c"
                                            demangle__V_38_38 = (MR_Integer) 0;
#line 4313 "demangle.c"
                                            demangle__V_39_39 = (MR_Word) &demangle_scalar_common_2[1];
#line 701 "demangle.m"
                                            {
#line 701 "demangle.m"
                                              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_39_39, demangle__Args_5, &demangle__V_33_33);
                                            }
#line 700 "demangle.m"
                                            {
#line 700 "demangle.m"
                                              demangle__V_40_40 = mercury__string__f_43_43_2_f_0(demangle__V_33_33, demangle__V_32_32);
                                            }
#line 4325 "demangle.c"
                                            demangle__V_41_41 = (MR_String) "(";
#line 700 "demangle.m"
                                            {
#line 700 "demangle.m"
                                              demangle__V_42_42 = mercury__string__f_43_43_2_f_0(demangle__V_41_41, demangle__V_40_40);
                                            }
#line 701 "demangle.m"
                                            {
#line 701 "demangle.m"
                                              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_39_39, demangle__ClassName_3, &demangle__V_43_43);
                                            }
#line 700 "demangle.m"
                                            {
#line 700 "demangle.m"
                                              demangle__V_50_50 = mercury__string__f_43_43_2_f_0(demangle__V_43_43, demangle__V_42_42);
                                            }
#line 4342 "demangle.c"
                                            demangle__V_51_51 = (MR_String) "<instance declaration for ";
#line 700 "demangle.m"
                                            {
#line 700 "demangle.m"
                                              *demangle__DCG_9_16 = mercury__string__f_43_43_2_f_0(demangle__V_51_51, demangle__V_50_50);
                                            }
#line 700 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 690 "demangle.m"
                                          }
#line 690 "demangle.m"
                                      }
#line 690 "demangle.m"
                                  }
#line 690 "demangle.m"
                              }
#line 690 "demangle.m"
                          }
#line 690 "demangle.m"
                      }
#line 690 "demangle.m"
                  }
#line 690 "demangle.m"
              }
#line 693 "demangle.m"
          }
#line 690 "demangle.m"
      }
#line 690 "demangle.m"
    return demangle__succeeded;
#line 690 "demangle.m"
  }
#line 688 "demangle.m"
}

#line 653 "demangle.m"
static MR_bool MR_CALL 
demangle__format_data_5_p_0(
#line 653 "demangle.m"
  MR_Word demangle__HeadVar__1_1,
#line 653 "demangle.m"
  MR_Word demangle__MaybeModule_2,
#line 653 "demangle.m"
  MR_String demangle__HeadVar__3_3,
#line 653 "demangle.m"
  MR_Integer demangle__Arity_4,
#line 653 "demangle.m"
  MR_String * demangle__Result_5)
#line 653 "demangle.m"
{
#line 656 "demangle.m"
  {
#line 656 "demangle.m"
    MR_bool demangle__succeeded;

#line 656 "demangle.m"
    if ((demangle__HeadVar__1_1 == (MR_Integer) 0))
#line 680 "demangle.m"
      {
#line 680 "demangle.m"
        MR_String demangle__Module_67;
#line 680 "demangle.m"
        MR_String demangle__V_224_224;
#line 680 "demangle.m"
        MR_String demangle__V_225_225;
#line 680 "demangle.m"
        MR_Word demangle__V_226_226;
#line 680 "demangle.m"
        MR_Word demangle__V_227_227;
#line 680 "demangle.m"
        MR_Word demangle__V_228_228;
#line 680 "demangle.m"
        MR_Word demangle__V_229_229;
#line 680 "demangle.m"
        MR_Word demangle__V_230_230;
#line 680 "demangle.m"
        MR_Word demangle__V_231_231;
#line 680 "demangle.m"
        MR_String demangle__V_232_232;
#line 680 "demangle.m"
        MR_String demangle__V_233_233;
#line 680 "demangle.m"
        MR_String demangle__V_234_234;
#line 680 "demangle.m"
        MR_String demangle__V_235_235;
#line 680 "demangle.m"
        MR_String demangle__V_242_242;
#line 680 "demangle.m"
        MR_String demangle__V_243_243;

#line 681 "demangle.m"
        demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_2)) == (MR_mktag((MR_Integer) 1)));
#line 681 "demangle.m"
        if (demangle__succeeded)
#line 681 "demangle.m"
          {
#line 681 "demangle.m"
            demangle__Module_67 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_2, (MR_Integer) 0)));
#line 4441 "demangle.c"
            demangle__V_224_224 = (MR_String) ">";
#line 4443 "demangle.c"
            demangle__V_226_226 = (MR_Integer) 0;
#line 4445 "demangle.c"
            demangle__V_227_227 = (MR_Integer) 0;
#line 4447 "demangle.c"
            demangle__V_228_228 = (MR_Integer) 0;
#line 4449 "demangle.c"
            demangle__V_229_229 = (MR_Integer) 0;
#line 4451 "demangle.c"
            demangle__V_230_230 = (MR_Integer) 0;
#line 4453 "demangle.c"
            demangle__V_231_231 = (MR_Word) &demangle_scalar_common_2[1];
#line 683 "demangle.m"
            {
#line 683 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_231_231, demangle__Module_67, &demangle__V_225_225);
            }
#line 682 "demangle.m"
            {
#line 682 "demangle.m"
              demangle__V_232_232 = mercury__string__f_43_43_2_f_0(demangle__V_225_225, demangle__V_224_224);
            }
#line 4465 "demangle.c"
            demangle__V_233_233 = (MR_String) " for module ";
#line 682 "demangle.m"
            {
#line 682 "demangle.m"
              demangle__V_234_234 = mercury__string__f_43_43_2_f_0(demangle__V_233_233, demangle__V_232_232);
            }
#line 683 "demangle.m"
            {
#line 683 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_231_231, demangle__Arity_4, &demangle__V_235_235);
            }
#line 682 "demangle.m"
            {
#line 682 "demangle.m"
              demangle__V_242_242 = mercury__string__f_43_43_2_f_0(demangle__V_235_235, demangle__V_234_234);
            }
#line 4482 "demangle.c"
            demangle__V_243_243 = (MR_String) "<shared constant number ";
#line 682 "demangle.m"
            {
#line 682 "demangle.m"
              *demangle__Result_5 = mercury__string__f_43_43_2_f_0(demangle__V_243_243, demangle__V_242_242);
            }
#line 682 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 681 "demangle.m"
          }
#line 680 "demangle.m"
      }
#line 656 "demangle.m"
    else
#line 656 "demangle.m"
    if ((demangle__HeadVar__1_1 == (MR_Integer) 3))
#line 676 "demangle.m"
      {
#line 676 "demangle.m"
        MR_String demangle__Module_48;

#line 673 "demangle.m"
        demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_2)) == (MR_mktag((MR_Integer) 1)));
#line 673 "demangle.m"
        if (demangle__succeeded)
#line 673 "demangle.m"
          {
#line 673 "demangle.m"
            demangle__Module_48 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_2, (MR_Integer) 0)));
#line 674 "demangle.m"
            {
#line 674 "demangle.m"
              MR_String demangle__V_175_175;
#line 674 "demangle.m"
              MR_Word demangle__V_181_181 = (MR_Word) &demangle_scalar_common_2[1];
#line 674 "demangle.m"
              MR_String demangle__V_182_182;
#line 674 "demangle.m"
              MR_String demangle__V_184_184;
#line 674 "demangle.m"
              MR_String demangle__V_185_185;
#line 674 "demangle.m"
              MR_String demangle__V_192_192;
#line 674 "demangle.m"
              MR_String demangle__V_194_194;
#line 674 "demangle.m"
              MR_String demangle__V_195_195;
#line 674 "demangle.m"
              MR_String demangle__V_202_202;

#line 675 "demangle.m"
              {
#line 675 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_181_181, demangle__Arity_4, &demangle__V_175_175);
              }
#line 674 "demangle.m"
              {
#line 674 "demangle.m"
                demangle__V_182_182 = mercury__string__f_43_43_2_f_0(demangle__V_175_175, (MR_String) "\'>");
              }
#line 674 "demangle.m"
              {
#line 674 "demangle.m"
                demangle__V_184_184 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_182_182);
              }
#line 675 "demangle.m"
              {
#line 675 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_181_181, demangle__HeadVar__3_3, &demangle__V_185_185);
              }
#line 674 "demangle.m"
              {
#line 674 "demangle.m"
                demangle__V_192_192 = mercury__string__f_43_43_2_f_0(demangle__V_185_185, demangle__V_184_184);
              }
#line 674 "demangle.m"
              {
#line 674 "demangle.m"
                demangle__V_194_194 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_192_192);
              }
#line 675 "demangle.m"
              {
#line 675 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_181_181, demangle__Module_48, &demangle__V_195_195);
              }
#line 674 "demangle.m"
              {
#line 674 "demangle.m"
                demangle__V_202_202 = mercury__string__f_43_43_2_f_0(demangle__V_195_195, demangle__V_194_194);
              }
#line 674 "demangle.m"
              {
#line 674 "demangle.m"
                *demangle__Result_5 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", demangle__V_202_202);
              }
#line 674 "demangle.m"
            }
#line 673 "demangle.m"
          }
#line 673 "demangle.m"
        else
#line 677 "demangle.m"
          {
#line 677 "demangle.m"
            MR_String demangle__V_205_205;
#line 677 "demangle.m"
            MR_Word demangle__V_211_211 = (MR_Word) &demangle_scalar_common_2[1];
#line 677 "demangle.m"
            MR_String demangle__V_212_212;
#line 677 "demangle.m"
            MR_String demangle__V_214_214;
#line 677 "demangle.m"
            MR_String demangle__V_215_215;
#line 677 "demangle.m"
            MR_String demangle__V_222_222;

#line 678 "demangle.m"
            {
#line 678 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_211_211, demangle__Arity_4, &demangle__V_205_205);
            }
#line 677 "demangle.m"
            {
#line 677 "demangle.m"
              demangle__V_212_212 = mercury__string__f_43_43_2_f_0(demangle__V_205_205, (MR_String) "\'>");
            }
#line 677 "demangle.m"
            {
#line 677 "demangle.m"
              demangle__V_214_214 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_212_212);
            }
#line 678 "demangle.m"
            {
#line 678 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_211_211, demangle__HeadVar__3_3, &demangle__V_215_215);
            }
#line 677 "demangle.m"
            {
#line 677 "demangle.m"
              demangle__V_222_222 = mercury__string__f_43_43_2_f_0(demangle__V_215_215, demangle__V_214_214);
            }
#line 677 "demangle.m"
            {
#line 677 "demangle.m"
              *demangle__Result_5 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_functors for type \140", demangle__V_222_222);
            }
#line 677 "demangle.m"
          }
#line 676 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 676 "demangle.m"
      }
#line 656 "demangle.m"
    else
#line 656 "demangle.m"
    if ((demangle__HeadVar__1_1 == (MR_Integer) 1))
#line 660 "demangle.m"
      {
#line 660 "demangle.m"
        MR_String demangle__Module_10;

#line 657 "demangle.m"
        demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_2)) == (MR_mktag((MR_Integer) 1)));
#line 657 "demangle.m"
        if (demangle__succeeded)
#line 657 "demangle.m"
          {
#line 657 "demangle.m"
            demangle__Module_10 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_2, (MR_Integer) 0)));
#line 658 "demangle.m"
            {
#line 658 "demangle.m"
              MR_String demangle__V_125_125;
#line 658 "demangle.m"
              MR_Word demangle__V_131_131 = (MR_Word) &demangle_scalar_common_2[1];
#line 658 "demangle.m"
              MR_String demangle__V_132_132;
#line 658 "demangle.m"
              MR_String demangle__V_134_134;
#line 658 "demangle.m"
              MR_String demangle__V_135_135;
#line 658 "demangle.m"
              MR_String demangle__V_142_142;
#line 658 "demangle.m"
              MR_String demangle__V_144_144;
#line 658 "demangle.m"
              MR_String demangle__V_145_145;
#line 658 "demangle.m"
              MR_String demangle__V_152_152;

#line 659 "demangle.m"
              {
#line 659 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_131_131, demangle__Arity_4, &demangle__V_125_125);
              }
#line 658 "demangle.m"
              {
#line 658 "demangle.m"
                demangle__V_132_132 = mercury__string__f_43_43_2_f_0(demangle__V_125_125, (MR_String) "\'>");
              }
#line 658 "demangle.m"
              {
#line 658 "demangle.m"
                demangle__V_134_134 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_132_132);
              }
#line 659 "demangle.m"
              {
#line 659 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_131_131, demangle__HeadVar__3_3, &demangle__V_135_135);
              }
#line 658 "demangle.m"
              {
#line 658 "demangle.m"
                demangle__V_142_142 = mercury__string__f_43_43_2_f_0(demangle__V_135_135, demangle__V_134_134);
              }
#line 658 "demangle.m"
              {
#line 658 "demangle.m"
                demangle__V_144_144 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_142_142);
              }
#line 659 "demangle.m"
              {
#line 659 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_131_131, demangle__Module_10, &demangle__V_145_145);
              }
#line 658 "demangle.m"
              {
#line 658 "demangle.m"
                demangle__V_152_152 = mercury__string__f_43_43_2_f_0(demangle__V_145_145, demangle__V_144_144);
              }
#line 658 "demangle.m"
              {
#line 658 "demangle.m"
                *demangle__Result_5 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", demangle__V_152_152);
              }
#line 658 "demangle.m"
            }
#line 657 "demangle.m"
          }
#line 657 "demangle.m"
        else
#line 661 "demangle.m"
          {
#line 661 "demangle.m"
            MR_String demangle__V_155_155;
#line 661 "demangle.m"
            MR_Word demangle__V_161_161 = (MR_Word) &demangle_scalar_common_2[1];
#line 661 "demangle.m"
            MR_String demangle__V_162_162;
#line 661 "demangle.m"
            MR_String demangle__V_164_164;
#line 661 "demangle.m"
            MR_String demangle__V_165_165;
#line 661 "demangle.m"
            MR_String demangle__V_172_172;

#line 662 "demangle.m"
            {
#line 662 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_161_161, demangle__Arity_4, &demangle__V_155_155);
            }
#line 661 "demangle.m"
            {
#line 661 "demangle.m"
              demangle__V_162_162 = mercury__string__f_43_43_2_f_0(demangle__V_155_155, (MR_String) "\'>");
            }
#line 661 "demangle.m"
            {
#line 661 "demangle.m"
              demangle__V_164_164 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_162_162);
            }
#line 662 "demangle.m"
            {
#line 662 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_161_161, demangle__HeadVar__3_3, &demangle__V_165_165);
            }
#line 661 "demangle.m"
            {
#line 661 "demangle.m"
              demangle__V_172_172 = mercury__string__f_43_43_2_f_0(demangle__V_165_165, demangle__V_164_164);
            }
#line 661 "demangle.m"
            {
#line 661 "demangle.m"
              *demangle__Result_5 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_info for type \140", demangle__V_172_172);
            }
#line 661 "demangle.m"
          }
#line 660 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 660 "demangle.m"
      }
#line 656 "demangle.m"
    else
#line 668 "demangle.m"
      {
#line 668 "demangle.m"
        MR_String demangle__Module_29;

#line 665 "demangle.m"
        demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_2)) == (MR_mktag((MR_Integer) 1)));
#line 665 "demangle.m"
        if (demangle__succeeded)
#line 665 "demangle.m"
          {
#line 665 "demangle.m"
            demangle__Module_29 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_2, (MR_Integer) 0)));
#line 666 "demangle.m"
            {
#line 666 "demangle.m"
              MR_String demangle__V_75_75;
#line 666 "demangle.m"
              MR_Word demangle__V_81_81 = (MR_Word) &demangle_scalar_common_2[1];
#line 666 "demangle.m"
              MR_String demangle__V_82_82;
#line 666 "demangle.m"
              MR_String demangle__V_84_84;
#line 666 "demangle.m"
              MR_String demangle__V_85_85;
#line 666 "demangle.m"
              MR_String demangle__V_92_92;
#line 666 "demangle.m"
              MR_String demangle__V_94_94;
#line 666 "demangle.m"
              MR_String demangle__V_95_95;
#line 666 "demangle.m"
              MR_String demangle__V_102_102;

#line 667 "demangle.m"
              {
#line 667 "demangle.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_81_81, demangle__Arity_4, &demangle__V_75_75);
              }
#line 666 "demangle.m"
              {
#line 666 "demangle.m"
                demangle__V_82_82 = mercury__string__f_43_43_2_f_0(demangle__V_75_75, (MR_String) "\'>");
              }
#line 666 "demangle.m"
              {
#line 666 "demangle.m"
                demangle__V_84_84 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_82_82);
              }
#line 667 "demangle.m"
              {
#line 667 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_81_81, demangle__HeadVar__3_3, &demangle__V_85_85);
              }
#line 666 "demangle.m"
              {
#line 666 "demangle.m"
                demangle__V_92_92 = mercury__string__f_43_43_2_f_0(demangle__V_85_85, demangle__V_84_84);
              }
#line 666 "demangle.m"
              {
#line 666 "demangle.m"
                demangle__V_94_94 = mercury__string__f_43_43_2_f_0((MR_String) ".", demangle__V_92_92);
              }
#line 667 "demangle.m"
              {
#line 667 "demangle.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_81_81, demangle__Module_29, &demangle__V_95_95);
              }
#line 666 "demangle.m"
              {
#line 666 "demangle.m"
                demangle__V_102_102 = mercury__string__f_43_43_2_f_0(demangle__V_95_95, demangle__V_94_94);
              }
#line 666 "demangle.m"
              {
#line 666 "demangle.m"
                *demangle__Result_5 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", demangle__V_102_102);
              }
#line 666 "demangle.m"
            }
#line 665 "demangle.m"
          }
#line 665 "demangle.m"
        else
#line 669 "demangle.m"
          {
#line 669 "demangle.m"
            MR_String demangle__V_105_105;
#line 669 "demangle.m"
            MR_Word demangle__V_111_111 = (MR_Word) &demangle_scalar_common_2[1];
#line 669 "demangle.m"
            MR_String demangle__V_112_112;
#line 669 "demangle.m"
            MR_String demangle__V_114_114;
#line 669 "demangle.m"
            MR_String demangle__V_115_115;
#line 669 "demangle.m"
            MR_String demangle__V_122_122;

#line 670 "demangle.m"
            {
#line 670 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_111_111, demangle__Arity_4, &demangle__V_105_105);
            }
#line 669 "demangle.m"
            {
#line 669 "demangle.m"
              demangle__V_112_112 = mercury__string__f_43_43_2_f_0(demangle__V_105_105, (MR_String) "\'>");
            }
#line 669 "demangle.m"
            {
#line 669 "demangle.m"
              demangle__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_112_112);
            }
#line 670 "demangle.m"
            {
#line 670 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_111_111, demangle__HeadVar__3_3, &demangle__V_115_115);
            }
#line 669 "demangle.m"
            {
#line 669 "demangle.m"
              demangle__V_122_122 = mercury__string__f_43_43_2_f_0(demangle__V_115_115, demangle__V_114_114);
            }
#line 669 "demangle.m"
            {
#line 669 "demangle.m"
              *demangle__Result_5 = mercury__string__f_43_43_2_f_0((MR_String) "<type_ctor_layout for type \140", demangle__V_122_122);
            }
#line 669 "demangle.m"
          }
#line 668 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 668 "demangle.m"
      }
#line 656 "demangle.m"
    return demangle__succeeded;
#line 656 "demangle.m"
  }
#line 653 "demangle.m"
}

#line 517 "demangle.m"
static void MR_CALL 
demangle__format_proc_11_p_0(
#line 517 "demangle.m"
  MR_Word demangle__Category_12,
#line 517 "demangle.m"
  MR_Word demangle__MaybeModule_13,
#line 517 "demangle.m"
  MR_String demangle__PredOrFunc_14,
#line 517 "demangle.m"
  MR_String demangle__PredName_15,
#line 517 "demangle.m"
  MR_Integer demangle__Arity_16,
#line 517 "demangle.m"
  MR_Integer demangle__ModeNum_17,
#line 517 "demangle.m"
  MR_Word demangle__HigherOrder_18,
#line 517 "demangle.m"
  MR_Word demangle__UnusedArgs_19,
#line 517 "demangle.m"
  MR_Word demangle__MaybeInternalLabelNum_20,
#line 517 "demangle.m"
  MR_Word * demangle__DCG_0_33,
#line 517 "demangle.m"
  MR_Word demangle__DCG_10_43)
#line 517 "demangle.m"
{
#line 523 "demangle.m"
  {
#line 523 "demangle.m"
    MR_bool demangle__succeeded;
#line 523 "demangle.m"
    MR_String demangle__QualifiedName_21;
#line 523 "demangle.m"
    MR_String demangle__MainPart_22;
#line 523 "demangle.m"
    MR_Word demangle__DCG_1_34;
#line 523 "demangle.m"
    MR_Word demangle__DCG_2_35;
#line 523 "demangle.m"
    MR_Word demangle__DCG_4_37;
#line 523 "demangle.m"
    MR_Word demangle__DCG_7_40;
#line 523 "demangle.m"
    MR_Word demangle__DCG_9_42;
#line 589 "demangle.m"
    MR_Integer demangle__Internal_31;
#line 583 "demangle.m"
    MR_Integer demangle__UA_Num_29;
#line 583 "demangle.m"
    MR_Word demangle__Extra_30;
#line 573 "demangle.m"
    MR_Word demangle__V_116_116;
#line 570 "demangle.m"
    MR_Integer demangle__HO_Num_28;

#line 525 "demangle.m"
    {
#line 525 "demangle.m"
      demangle__format_maybe_module_3_p_0(demangle__MaybeModule_13, demangle__PredName_15, &demangle__QualifiedName_21);
    }
#line 530 "demangle.m"
    if ((demangle__Category_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 531 "demangle.m"
      {
#line 531 "demangle.m"
        MR_String demangle__V_347_347;
#line 531 "demangle.m"
        MR_Word demangle__V_353_353 = (MR_Word) &demangle_scalar_common_2[1];
#line 531 "demangle.m"
        MR_String demangle__V_354_354;
#line 531 "demangle.m"
        MR_String demangle__V_356_356;
#line 531 "demangle.m"
        MR_String demangle__V_357_357;
#line 531 "demangle.m"
        MR_String demangle__V_364_364;

#line 533 "demangle.m"
        {
#line 533 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_353_353, demangle__Arity_16, &demangle__V_347_347);
        }
#line 532 "demangle.m"
        {
#line 532 "demangle.m"
          demangle__V_354_354 = mercury__string__f_43_43_2_f_0(demangle__V_347_347, (MR_String) "\'");
        }
#line 532 "demangle.m"
        {
#line 532 "demangle.m"
          demangle__V_356_356 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_354_354);
        }
#line 533 "demangle.m"
        {
#line 533 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_353_353, demangle__QualifiedName_21, &demangle__V_357_357);
        }
#line 532 "demangle.m"
        {
#line 532 "demangle.m"
          demangle__V_364_364 = mercury__string__f_43_43_2_f_0(demangle__V_357_357, demangle__V_356_356);
        }
#line 532 "demangle.m"
        {
#line 532 "demangle.m"
          demangle__MainPart_22 = mercury__string__f_43_43_2_f_0((MR_String) "compare/3 predicate for type \140", demangle__V_364_364);
        }
#line 531 "demangle.m"
      }
#line 530 "demangle.m"
    else
#line 530 "demangle.m"
    if ((demangle__Category_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 535 "demangle.m"
      {
#line 535 "demangle.m"
        MR_String demangle__V_327_327;
#line 535 "demangle.m"
        MR_Word demangle__V_333_333 = (MR_Word) &demangle_scalar_common_2[1];
#line 535 "demangle.m"
        MR_String demangle__V_334_334;
#line 535 "demangle.m"
        MR_String demangle__V_336_336;
#line 535 "demangle.m"
        MR_String demangle__V_337_337;
#line 535 "demangle.m"
        MR_String demangle__V_344_344;

#line 537 "demangle.m"
        {
#line 537 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_333_333, demangle__Arity_16, &demangle__V_327_327);
        }
#line 536 "demangle.m"
        {
#line 536 "demangle.m"
          demangle__V_334_334 = mercury__string__f_43_43_2_f_0(demangle__V_327_327, (MR_String) "\'");
        }
#line 536 "demangle.m"
        {
#line 536 "demangle.m"
          demangle__V_336_336 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_334_334);
        }
#line 537 "demangle.m"
        {
#line 537 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_333_333, demangle__QualifiedName_21, &demangle__V_337_337);
        }
#line 536 "demangle.m"
        {
#line 536 "demangle.m"
          demangle__V_344_344 = mercury__string__f_43_43_2_f_0(demangle__V_337_337, demangle__V_336_336);
        }
#line 536 "demangle.m"
        {
#line 536 "demangle.m"
          demangle__MainPart_22 = mercury__string__f_43_43_2_f_0((MR_String) "index/2 predicate for type \140", demangle__V_344_344);
        }
#line 535 "demangle.m"
      }
#line 530 "demangle.m"
    else
#line 530 "demangle.m"
    if ((demangle__Category_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 539 "demangle.m"
      {
#line 539 "demangle.m"
        MR_String demangle__V_160_160;
#line 539 "demangle.m"
        MR_Word demangle__V_166_166 = (MR_Word) &demangle_scalar_common_2[1];
#line 539 "demangle.m"
        MR_String demangle__V_168_168;
#line 539 "demangle.m"
        MR_String demangle__V_169_169;
#line 539 "demangle.m"
        MR_String demangle__V_176_176;
#line 539 "demangle.m"
        MR_String demangle__V_178_178;
#line 539 "demangle.m"
        MR_String demangle__V_179_179;
#line 539 "demangle.m"
        MR_String demangle__V_186_186;
#line 539 "demangle.m"
        MR_String demangle__V_188_188;
#line 539 "demangle.m"
        MR_String demangle__V_189_189;

#line 541 "demangle.m"
        {
#line 541 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_166_166, demangle__ModeNum_17, &demangle__V_160_160);
        }
#line 540 "demangle.m"
        {
#line 540 "demangle.m"
          demangle__V_168_168 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__V_160_160);
        }
#line 541 "demangle.m"
        {
#line 541 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_166_166, demangle__Arity_16, &demangle__V_169_169);
        }
#line 540 "demangle.m"
        {
#line 540 "demangle.m"
          demangle__V_176_176 = mercury__string__f_43_43_2_f_0(demangle__V_169_169, demangle__V_168_168);
        }
#line 540 "demangle.m"
        {
#line 540 "demangle.m"
          demangle__V_178_178 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_176_176);
        }
#line 541 "demangle.m"
        {
#line 541 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_166_166, demangle__QualifiedName_21, &demangle__V_179_179);
        }
#line 540 "demangle.m"
        {
#line 540 "demangle.m"
          demangle__V_186_186 = mercury__string__f_43_43_2_f_0(demangle__V_179_179, demangle__V_178_178);
        }
#line 540 "demangle.m"
        {
#line 540 "demangle.m"
          demangle__V_188_188 = mercury__string__f_43_43_2_f_0((MR_String) " \140", demangle__V_186_186);
        }
#line 541 "demangle.m"
        {
#line 541 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_166_166, demangle__PredOrFunc_14, &demangle__V_189_189);
        }
#line 540 "demangle.m"
        {
#line 540 "demangle.m"
          demangle__MainPart_22 = mercury__string__f_43_43_2_f_0(demangle__V_189_189, demangle__V_188_188);
        }
#line 539 "demangle.m"
      }
#line 530 "demangle.m"
    else
#line 530 "demangle.m"
    if ((demangle__Category_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 527 "demangle.m"
      {
#line 527 "demangle.m"
        MR_String demangle__V_132_132;
#line 527 "demangle.m"
        MR_Word demangle__V_138_138 = (MR_Word) &demangle_scalar_common_2[1];
#line 527 "demangle.m"
        MR_String demangle__V_140_140;
#line 527 "demangle.m"
        MR_String demangle__V_141_141;
#line 527 "demangle.m"
        MR_String demangle__V_148_148;
#line 527 "demangle.m"
        MR_String demangle__V_150_150;
#line 527 "demangle.m"
        MR_String demangle__V_151_151;
#line 527 "demangle.m"
        MR_String demangle__V_158_158;

#line 529 "demangle.m"
        {
#line 529 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_138_138, demangle__ModeNum_17, &demangle__V_132_132);
        }
#line 528 "demangle.m"
        {
#line 528 "demangle.m"
          demangle__V_140_140 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__V_132_132);
        }
#line 529 "demangle.m"
        {
#line 529 "demangle.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_138_138, demangle__Arity_16, &demangle__V_141_141);
        }
#line 528 "demangle.m"
        {
#line 528 "demangle.m"
          demangle__V_148_148 = mercury__string__f_43_43_2_f_0(demangle__V_141_141, demangle__V_140_140);
        }
#line 528 "demangle.m"
        {
#line 528 "demangle.m"
          demangle__V_150_150 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_148_148);
        }
#line 529 "demangle.m"
        {
#line 529 "demangle.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_138_138, demangle__QualifiedName_21, &demangle__V_151_151);
        }
#line 528 "demangle.m"
        {
#line 528 "demangle.m"
          demangle__V_158_158 = mercury__string__f_43_43_2_f_0(demangle__V_151_151, demangle__V_150_150);
        }
#line 528 "demangle.m"
        {
#line 528 "demangle.m"
          demangle__MainPart_22 = mercury__string__f_43_43_2_f_0((MR_String) "unification predicate for type \140", demangle__V_158_158);
        }
#line 527 "demangle.m"
      }
#line 530 "demangle.m"
    else
#line 543 "demangle.m"
      {
#line 543 "demangle.m"
        MR_Word demangle__Type_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__Category_12, (MR_Integer) 0)));
#line 543 "demangle.m"
        MR_Integer demangle__Line_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__Category_12, (MR_Integer) 1)));
#line 543 "demangle.m"
        MR_Integer demangle__Seq_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__Category_12, (MR_Integer) 2)));
#line 543 "demangle.m"
        MR_String demangle__IntroPredOrFunc_26 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Category_12, (MR_Integer) 3)));

#line 549 "demangle.m"
        if ((demangle__Type_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 555 "demangle.m"
          {
#line 555 "demangle.m"
            MR_String demangle__V_308_308;
#line 555 "demangle.m"
            MR_Word demangle__V_314_314 = (MR_Word) &demangle_scalar_common_2[1];
#line 555 "demangle.m"
            MR_String demangle__V_316_316;
#line 555 "demangle.m"
            MR_String demangle__V_317_317;
#line 555 "demangle.m"
            MR_String demangle__V_324_324;

#line 558 "demangle.m"
            {
#line 558 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_314_314, demangle__Line_24, &demangle__V_308_308);
            }
#line 556 "demangle.m"
            {
#line 556 "demangle.m"
              demangle__V_316_316 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__V_308_308);
            }
#line 558 "demangle.m"
            {
#line 558 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_314_314, demangle__QualifiedName_21, &demangle__V_317_317);
            }
#line 556 "demangle.m"
            {
#line 556 "demangle.m"
              demangle__V_324_324 = mercury__string__f_43_43_2_f_0(demangle__V_317_317, demangle__V_316_316);
            }
#line 556 "demangle.m"
            {
#line 556 "demangle.m"
              demangle__MainPart_22 = mercury__string__f_43_43_2_f_0((MR_String) "accumulator procedure from \140", demangle__V_324_324);
            }
#line 555 "demangle.m"
          }
#line 549 "demangle.m"
        else
#line 549 "demangle.m"
        if ((demangle__Type_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 550 "demangle.m"
          {
#line 550 "demangle.m"
            MR_String demangle__V_280_280;
#line 550 "demangle.m"
            MR_Word demangle__V_286_286 = (MR_Word) &demangle_scalar_common_2[1];
#line 550 "demangle.m"
            MR_String demangle__V_288_288;
#line 550 "demangle.m"
            MR_String demangle__V_289_289;
#line 550 "demangle.m"
            MR_String demangle__V_296_296;
#line 550 "demangle.m"
            MR_String demangle__V_298_298;
#line 550 "demangle.m"
            MR_String demangle__V_299_299;
#line 550 "demangle.m"
            MR_String demangle__V_306_306;

#line 553 "demangle.m"
            {
#line 553 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_286_286, demangle__Line_24, &demangle__V_280_280);
            }
#line 551 "demangle.m"
            {
#line 551 "demangle.m"
              demangle__V_288_288 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__V_280_280);
            }
#line 553 "demangle.m"
            {
#line 553 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_286_286, demangle__QualifiedName_21, &demangle__V_289_289);
            }
#line 551 "demangle.m"
            {
#line 551 "demangle.m"
              demangle__V_296_296 = mercury__string__f_43_43_2_f_0(demangle__V_289_289, demangle__V_288_288);
            }
#line 551 "demangle.m"
            {
#line 551 "demangle.m"
              demangle__V_298_298 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", demangle__V_296_296);
            }
#line 553 "demangle.m"
            {
#line 553 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_286_286, demangle__Seq_25, &demangle__V_299_299);
            }
#line 551 "demangle.m"
            {
#line 551 "demangle.m"
              demangle__V_306_306 = mercury__string__f_43_43_2_f_0(demangle__V_299_299, demangle__V_298_298);
            }
#line 551 "demangle.m"
            {
#line 551 "demangle.m"
              demangle__MainPart_22 = mercury__string__f_43_43_2_f_0((MR_String) "deforestation procedure (#", demangle__V_306_306);
            }
#line 550 "demangle.m"
          }
#line 549 "demangle.m"
        else
#line 549 "demangle.m"
        if ((demangle__Type_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "demangle.m"
          {
#line 545 "demangle.m"
            MR_String demangle__V_244_244;
#line 545 "demangle.m"
            MR_Word demangle__V_250_250 = (MR_Word) &demangle_scalar_common_2[1];
#line 545 "demangle.m"
            MR_String demangle__V_252_252;
#line 545 "demangle.m"
            MR_String demangle__V_253_253;
#line 545 "demangle.m"
            MR_String demangle__V_260_260;
#line 545 "demangle.m"
            MR_String demangle__V_262_262;
#line 545 "demangle.m"
            MR_String demangle__V_263_263;
#line 545 "demangle.m"
            MR_String demangle__V_270_270;
#line 545 "demangle.m"
            MR_String demangle__V_272_272;
#line 545 "demangle.m"
            MR_String demangle__V_273_273;

#line 548 "demangle.m"
            {
#line 548 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_250_250, demangle__Line_24, &demangle__V_244_244);
            }
#line 546 "demangle.m"
            {
#line 546 "demangle.m"
              demangle__V_252_252 = mercury__string__f_43_43_2_f_0((MR_String) "\' line ", demangle__V_244_244);
            }
#line 547 "demangle.m"
            {
#line 547 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_250_250, demangle__QualifiedName_21, &demangle__V_253_253);
            }
#line 546 "demangle.m"
            {
#line 546 "demangle.m"
              demangle__V_260_260 = mercury__string__f_43_43_2_f_0(demangle__V_253_253, demangle__V_252_252);
            }
#line 546 "demangle.m"
            {
#line 546 "demangle.m"
              demangle__V_262_262 = mercury__string__f_43_43_2_f_0((MR_String) ") from \140", demangle__V_260_260);
            }
#line 547 "demangle.m"
            {
#line 547 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_250_250, demangle__Seq_25, &demangle__V_263_263);
            }
#line 546 "demangle.m"
            {
#line 546 "demangle.m"
              demangle__V_270_270 = mercury__string__f_43_43_2_f_0(demangle__V_263_263, demangle__V_262_262);
            }
#line 546 "demangle.m"
            {
#line 546 "demangle.m"
              demangle__V_272_272 = mercury__string__f_43_43_2_f_0((MR_String) " goal (#", demangle__V_270_270);
            }
#line 547 "demangle.m"
            {
#line 547 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_250_250, demangle__IntroPredOrFunc_26, &demangle__V_273_273);
            }
#line 546 "demangle.m"
            {
#line 546 "demangle.m"
              demangle__MainPart_22 = mercury__string__f_43_43_2_f_0(demangle__V_273_273, demangle__V_272_272);
            }
#line 545 "demangle.m"
          }
#line 549 "demangle.m"
        else
#line 560 "demangle.m"
          {
#line 560 "demangle.m"
            MR_String demangle__TypeSpec_27 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__Type_23, (MR_Integer) 0)));
#line 560 "demangle.m"
            MR_String demangle__V_197_197;
#line 560 "demangle.m"
            MR_Word demangle__V_203_203 = (MR_Word) &demangle_scalar_common_2[1];
#line 560 "demangle.m"
            MR_String demangle__V_204_204;
#line 560 "demangle.m"
            MR_String demangle__V_206_206;
#line 560 "demangle.m"
            MR_String demangle__V_207_207;
#line 560 "demangle.m"
            MR_String demangle__V_214_214;
#line 560 "demangle.m"
            MR_String demangle__V_216_216;
#line 560 "demangle.m"
            MR_String demangle__V_217_217;
#line 560 "demangle.m"
            MR_String demangle__V_224_224;
#line 560 "demangle.m"
            MR_String demangle__V_226_226;
#line 560 "demangle.m"
            MR_String demangle__V_227_227;
#line 560 "demangle.m"
            MR_String demangle__V_234_234;
#line 560 "demangle.m"
            MR_String demangle__V_236_236;
#line 560 "demangle.m"
            MR_String demangle__V_237_237;

#line 564 "demangle.m"
            {
#line 564 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_203_203, demangle__TypeSpec_27, &demangle__V_197_197);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_204_204 = mercury__string__f_43_43_2_f_0(demangle__V_197_197, (MR_String) ")");
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_206_206 = mercury__string__f_43_43_2_f_0((MR_String) " (type specialized ", demangle__V_204_204);
            }
#line 563 "demangle.m"
            {
#line 563 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_203_203, demangle__ModeNum_17, &demangle__V_207_207);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_214_214 = mercury__string__f_43_43_2_f_0(demangle__V_207_207, demangle__V_206_206);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_216_216 = mercury__string__f_43_43_2_f_0((MR_String) "\' mode ", demangle__V_214_214);
            }
#line 563 "demangle.m"
            {
#line 563 "demangle.m"
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(demangle__V_203_203, demangle__Arity_16, &demangle__V_217_217);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_224_224 = mercury__string__f_43_43_2_f_0(demangle__V_217_217, demangle__V_216_216);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_226_226 = mercury__string__f_43_43_2_f_0((MR_String) "/", demangle__V_224_224);
            }
#line 563 "demangle.m"
            {
#line 563 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_203_203, demangle__QualifiedName_21, &demangle__V_227_227);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_234_234 = mercury__string__f_43_43_2_f_0(demangle__V_227_227, demangle__V_226_226);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__V_236_236 = mercury__string__f_43_43_2_f_0((MR_String) " \140", demangle__V_234_234);
            }
#line 563 "demangle.m"
            {
#line 563 "demangle.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(demangle__V_203_203, demangle__PredOrFunc_14, &demangle__V_237_237);
            }
#line 561 "demangle.m"
            {
#line 561 "demangle.m"
              demangle__MainPart_22 = mercury__string__f_43_43_2_f_0(demangle__V_237_237, demangle__V_236_236);
            }
#line 560 "demangle.m"
          }
#line 543 "demangle.m"
      }
#line 592 "demangle.m"
    {
#line 592 "demangle.m"
      demangle__DCG_9_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 592 "demangle.m"
      MR_hl_field(MR_mktag(1), demangle__DCG_9_42, 0) = ((MR_Box) ((MR_String) ">"));
#line 592 "demangle.m"
      MR_hl_field(MR_mktag(1), demangle__DCG_9_42, 1) = ((MR_Box) (demangle__DCG_10_43));
#line 592 "demangle.m"
    }
#line 586 "demangle.m"
    demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeInternalLabelNum_20)) == (MR_mktag((MR_Integer) 1)));
#line 586 "demangle.m"
    if (demangle__succeeded)
#line 586 "demangle.m"
      {
#line 586 "demangle.m"
        demangle__Internal_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum_20, (MR_Integer) 0)));
#line 587 "demangle.m"
        {
#line 587 "demangle.m"
          MR_String demangle__Label_32;
#line 587 "demangle.m"
          MR_String demangle__V_366_366;

#line 587 "demangle.m"
          {
#line 587 "demangle.m"
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &demangle_scalar_common_2[1], demangle__Internal_31, &demangle__V_366_366);
          }
#line 587 "demangle.m"
          {
#line 587 "demangle.m"
            demangle__Label_32 = mercury__string__f_43_43_2_f_0((MR_String) " label ", demangle__V_366_366);
          }
#line 588 "demangle.m"
          {
#line 588 "demangle.m"
            demangle__DCG_7_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__DCG_7_40, 0) = ((MR_Box) (demangle__Label_32));
#line 588 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__DCG_7_40, 1) = ((MR_Box) (demangle__DCG_9_42));
#line 588 "demangle.m"
          }
#line 587 "demangle.m"
        }
#line 586 "demangle.m"
      }
#line 586 "demangle.m"
    else
#line 590 "demangle.m"
      demangle__DCG_7_40 = demangle__DCG_9_42;
#line 573 "demangle.m"
    demangle__succeeded = ((MR_tag((MR_Word) demangle__UnusedArgs_19)) == (MR_mktag((MR_Integer) 1)));
#line 573 "demangle.m"
    if (demangle__succeeded)
#line 573 "demangle.m"
      {
#line 573 "demangle.m"
        demangle__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_19, (MR_Integer) 0)));
#line 573 "demangle.m"
        demangle__UA_Num_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), demangle__V_116_116, (MR_Integer) 0)));
#line 573 "demangle.m"
        demangle__Extra_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), demangle__V_116_116, (MR_Integer) 1)));
#line 573 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 573 "demangle.m"
      }
#line 583 "demangle.m"
    if (demangle__succeeded)
#line 578 "demangle.m"
      {
#line 574 "demangle.m"
        demangle__succeeded = (demangle__Extra_30 == (MR_Integer) 1);
#line 578 "demangle.m"
        if (demangle__succeeded)
#line 575 "demangle.m"
          {
#line 575 "demangle.m"
            MR_Word demangle__V_118_118;
#line 575 "demangle.m"
            MR_String demangle__V_119_119;
#line 575 "demangle.m"
            MR_Word demangle__V_120_120;

#line 576 "demangle.m"
            {
#line 576 "demangle.m"
              demangle__V_119_119 = mercury__string__int_to_string_1_f_0(demangle__UA_Num_29);
            }
#line 577 "demangle.m"
            {
#line 577 "demangle.m"
              demangle__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 577 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_120_120, 0) = ((MR_Box) ((MR_String) "])"));
#line 577 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_120_120, 1) = ((MR_Box) (demangle__DCG_7_40));
#line 577 "demangle.m"
            }
#line 576 "demangle.m"
            {
#line 576 "demangle.m"
              demangle__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_118_118, 0) = ((MR_Box) (demangle__V_119_119));
#line 576 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_118_118, 1) = ((MR_Box) (demangle__V_120_120));
#line 576 "demangle.m"
            }
#line 575 "demangle.m"
            {
#line 575 "demangle.m"
              demangle__DCG_4_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__DCG_4_37, 0) = ((MR_Box) ((MR_String) " (minus extra unused args [#"));
#line 575 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__DCG_4_37, 1) = ((MR_Box) (demangle__V_118_118));
#line 575 "demangle.m"
            }
#line 575 "demangle.m"
          }
#line 578 "demangle.m"
        else
#line 579 "demangle.m"
          {
#line 579 "demangle.m"
            MR_Word demangle__V_123_123;
#line 579 "demangle.m"
            MR_String demangle__V_124_124;
#line 579 "demangle.m"
            MR_Word demangle__V_125_125;

#line 580 "demangle.m"
            {
#line 580 "demangle.m"
              demangle__V_124_124 = mercury__string__int_to_string_1_f_0(demangle__UA_Num_29);
            }
#line 581 "demangle.m"
            {
#line 581 "demangle.m"
              demangle__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_125_125, 0) = ((MR_Box) ((MR_String) "])"));
#line 581 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_125_125, 1) = ((MR_Box) (demangle__DCG_7_40));
#line 581 "demangle.m"
            }
#line 580 "demangle.m"
            {
#line 580 "demangle.m"
              demangle__V_123_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_123_123, 0) = ((MR_Box) (demangle__V_124_124));
#line 580 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__V_123_123, 1) = ((MR_Box) (demangle__V_125_125));
#line 580 "demangle.m"
            }
#line 579 "demangle.m"
            {
#line 579 "demangle.m"
              demangle__DCG_4_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 579 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__DCG_4_37, 0) = ((MR_Box) ((MR_String) " (minus unused args [#"));
#line 579 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__DCG_4_37, 1) = ((MR_Box) (demangle__V_123_123));
#line 579 "demangle.m"
            }
#line 579 "demangle.m"
          }
#line 578 "demangle.m"
      }
#line 583 "demangle.m"
    else
#line 584 "demangle.m"
      demangle__DCG_4_37 = demangle__DCG_7_40;
#line 568 "demangle.m"
    demangle__succeeded = ((MR_tag((MR_Word) demangle__HigherOrder_18)) == (MR_mktag((MR_Integer) 1)));
#line 568 "demangle.m"
    if (demangle__succeeded)
#line 568 "demangle.m"
      {
#line 568 "demangle.m"
        demangle__HO_Num_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__HigherOrder_18, (MR_Integer) 0)));
#line 569 "demangle.m"
        {
#line 569 "demangle.m"
          MR_Word demangle__V_112_112;
#line 569 "demangle.m"
          MR_String demangle__V_113_113;
#line 569 "demangle.m"
          MR_Word demangle__V_114_114;

#line 569 "demangle.m"
          {
#line 569 "demangle.m"
            demangle__V_113_113 = mercury__string__int_to_string_1_f_0(demangle__HO_Num_28);
          }
#line 569 "demangle.m"
          {
#line 569 "demangle.m"
            demangle__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__V_114_114, 0) = ((MR_Box) ((MR_String) "])"));
#line 569 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__V_114_114, 1) = ((MR_Box) (demangle__DCG_4_37));
#line 569 "demangle.m"
          }
#line 569 "demangle.m"
          {
#line 569 "demangle.m"
            demangle__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__V_112_112, 0) = ((MR_Box) (demangle__V_113_113));
#line 569 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__V_112_112, 1) = ((MR_Box) (demangle__V_114_114));
#line 569 "demangle.m"
          }
#line 569 "demangle.m"
          {
#line 569 "demangle.m"
            demangle__DCG_2_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__DCG_2_35, 0) = ((MR_Box) ((MR_String) " (specialized [#"));
#line 569 "demangle.m"
            MR_hl_field(MR_mktag(1), demangle__DCG_2_35, 1) = ((MR_Box) (demangle__V_112_112));
#line 569 "demangle.m"
          }
#line 569 "demangle.m"
        }
#line 568 "demangle.m"
      }
#line 568 "demangle.m"
    else
#line 571 "demangle.m"
      demangle__DCG_2_35 = demangle__DCG_4_37;
#line 567 "demangle.m"
    {
#line 567 "demangle.m"
      demangle__DCG_1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "demangle.m"
      MR_hl_field(MR_mktag(1), demangle__DCG_1_34, 0) = ((MR_Box) (demangle__MainPart_22));
#line 567 "demangle.m"
      MR_hl_field(MR_mktag(1), demangle__DCG_1_34, 1) = ((MR_Box) (demangle__DCG_2_35));
#line 567 "demangle.m"
    }
#line 524 "demangle.m"
    {
#line 524 "demangle.m"
      MR_Word base;
#line 524 "demangle.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "demangle.m"
      *demangle__DCG_0_33 = base;
#line 524 "demangle.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_String) "<"));
#line 524 "demangle.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (demangle__DCG_1_34));
#line 524 "demangle.m"
    }
#line 523 "demangle.m"
  }
#line 517 "demangle.m"
}

#line 431 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_category_etc_5_p_0(
#line 431 "demangle.m"
  MR_String * demangle__PredName_6,
#line 431 "demangle.m"
  MR_Word demangle__Category0_7,
#line 431 "demangle.m"
  MR_Word * demangle__Category_8,
#line 431 "demangle.m"
  MR_String demangle__DCG_0_20,
#line 431 "demangle.m"
  MR_String * demangle__DCG_19_39)
#line 431 "demangle.m"
{
#line 512 "demangle.m"
  {
#line 512 "demangle.m"
    MR_bool demangle__succeeded;
#line 512 "demangle.m"
    MR_Word demangle__IntroducedPredType0_10;
#line 512 "demangle.m"
    MR_String demangle__DCG_7_27;
#line 448 "demangle.m"
    MR_String demangle__DCG_1_21;

#line 445 "demangle.m"
    {
#line 445 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "IntroducedFrom__", demangle__DCG_0_20, &demangle__DCG_1_21);
    }
#line 448 "demangle.m"
    if (demangle__succeeded)
#line 448 "demangle.m"
      {
#line 447 "demangle.m"
        demangle__IntroducedPredType0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 448 "demangle.m"
        demangle__DCG_7_27 = demangle__DCG_1_21;
#line 448 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 448 "demangle.m"
      }
#line 448 "demangle.m"
    else
#line 452 "demangle.m"
      {
#line 452 "demangle.m"
        MR_String demangle__DCG_3_23;

#line 449 "demangle.m"
        {
#line 449 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "DeforestationIn__", demangle__DCG_0_20, &demangle__DCG_3_23);
        }
#line 452 "demangle.m"
        if (demangle__succeeded)
#line 452 "demangle.m"
          {
#line 451 "demangle.m"
            demangle__IntroducedPredType0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 452 "demangle.m"
            demangle__DCG_7_27 = demangle__DCG_3_23;
#line 452 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 452 "demangle.m"
          }
#line 452 "demangle.m"
        else
#line 456 "demangle.m"
          {
#line 456 "demangle.m"
            MR_String demangle__DCG_5_25;

#line 453 "demangle.m"
            {
#line 453 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "AccFrom__", demangle__DCG_0_20, &demangle__DCG_5_25);
            }
#line 456 "demangle.m"
            if (demangle__succeeded)
#line 456 "demangle.m"
              {
#line 455 "demangle.m"
                demangle__IntroducedPredType0_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 456 "demangle.m"
                demangle__DCG_7_27 = demangle__DCG_5_25;
#line 456 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 456 "demangle.m"
              }
#line 456 "demangle.m"
            else
#line 457 "demangle.m"
              {
#line 457 "demangle.m"
                MR_String demangle__V_44_44;

#line 457 "demangle.m"
                {
#line 457 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "TypeSpecOf__", demangle__DCG_0_20, &demangle__DCG_7_27);
                }
#line 457 "demangle.m"
                if (demangle__succeeded)
#line 457 "demangle.m"
                  {
#line 458 "demangle.m"
                    demangle__V_44_44 = (MR_String) "";
#line 458 "demangle.m"
                    demangle__IntroducedPredType0_10 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_2[0]);
#line 458 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 457 "demangle.m"
                  }
#line 457 "demangle.m"
              }
#line 456 "demangle.m"
          }
#line 452 "demangle.m"
      }
#line 512 "demangle.m"
    if (demangle__succeeded)
#line 476 "demangle.m"
      {
#line 476 "demangle.m"
        MR_String demangle__LambdaPredOrFunc_11;
#line 476 "demangle.m"
        MR_String demangle__DCG_13_33;
#line 465 "demangle.m"
        MR_String demangle__DCG_8_28;
#line 504 "demangle.m"
        MR_String demangle__PredName1_14;
#line 504 "demangle.m"
        MR_Word demangle__IntroducedPredType_17;
#line 504 "demangle.m"
        MR_Integer demangle__Seq_18;
#line 504 "demangle.m"
        MR_Integer demangle__Line_19;
#line 504 "demangle.m"
        MR_String demangle__DCG_18_38;
#line 478 "demangle.m"
        MR_Word demangle__MPredName_13;
#line 478 "demangle.m"
        MR_String demangle__DCG_14_34;
#line 874 "demangle.m"
        MR_Integer demangle__Index_52;
#line 868 "demangle.m"
        MR_String demangle__V_56_56;
#line 480 "demangle.m"
        MR_String demangle__V_15_15;

#line 462 "demangle.m"
        {
#line 462 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "pred__", demangle__DCG_7_27, &demangle__DCG_8_28);
        }
#line 465 "demangle.m"
        if (demangle__succeeded)
#line 465 "demangle.m"
          {
#line 464 "demangle.m"
            demangle__LambdaPredOrFunc_11 = (MR_String) "pred";
#line 465 "demangle.m"
            demangle__DCG_13_33 = demangle__DCG_8_28;
#line 465 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 465 "demangle.m"
          }
#line 465 "demangle.m"
        else
#line 469 "demangle.m"
          {
#line 469 "demangle.m"
            MR_String demangle__DCG_10_30;

#line 466 "demangle.m"
            {
#line 466 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "func__", demangle__DCG_7_27, &demangle__DCG_10_30);
            }
#line 469 "demangle.m"
            if (demangle__succeeded)
#line 469 "demangle.m"
              {
#line 468 "demangle.m"
                demangle__LambdaPredOrFunc_11 = (MR_String) "func";
#line 469 "demangle.m"
                demangle__DCG_13_33 = demangle__DCG_10_30;
#line 469 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 469 "demangle.m"
              }
#line 469 "demangle.m"
            else
#line 474 "demangle.m"
              {
#line 474 "demangle.m"
                MR_String demangle__V_47_47;
#line 470 "demangle.m"
                MR_String demangle__V_12_12;

#line 470 "demangle.m"
                demangle__succeeded = ((MR_tag((MR_Word) demangle__IntroducedPredType0_10)) == (MR_mktag((MR_Integer) 1)));
#line 470 "demangle.m"
                if (demangle__succeeded)
#line 470 "demangle.m"
                  {
#line 470 "demangle.m"
                    demangle__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__IntroducedPredType0_10, (MR_Integer) 0)));
#line 471 "demangle.m"
                    demangle__V_47_47 = (MR_String) "pred_or_func__";
#line 471 "demangle.m"
                    {
#line 471 "demangle.m"
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_47_47, demangle__DCG_7_27, &demangle__DCG_13_33);
                    }
#line 474 "demangle.m"
                    if (demangle__succeeded)
#line 474 "demangle.m"
                      {
#line 473 "demangle.m"
                        demangle__LambdaPredOrFunc_11 = (MR_String) "";
#line 473 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 474 "demangle.m"
                      }
#line 470 "demangle.m"
                  }
#line 474 "demangle.m"
              }
#line 469 "demangle.m"
          }
#line 476 "demangle.m"
        if (demangle__succeeded)
#line 476 "demangle.m"
          {
#line 868 "demangle.m"
            demangle__V_56_56 = (MR_String) "__";
#line 868 "demangle.m"
            {
#line 868 "demangle.m"
              demangle__succeeded = mercury__string__sub_string_search_3_p_0(demangle__DCG_13_33, demangle__V_56_56, &demangle__Index_52);
            }
#line 874 "demangle.m"
            if (demangle__succeeded)
#line 869 "demangle.m"
              {
#line 869 "demangle.m"
                MR_String demangle__PredName_53;
#line 869 "demangle.m"
                MR_Integer demangle__Len_54;
#line 869 "demangle.m"
                MR_Integer demangle__Index2_55;

#line 869 "demangle.m"
                {
#line 869 "demangle.m"
                  mercury__string__left_3_p_0(demangle__DCG_13_33, demangle__Index_52, &demangle__PredName_53);
                }
#line 870 "demangle.m"
                {
#line 870 "demangle.m"
                  mercury__string__length_2_p_0(demangle__DCG_13_33, &demangle__Len_54);
                }
#line 871 "demangle.m"
                demangle__Index2_55 = (demangle__Index_52 + (MR_Integer) 2);
#line 872 "demangle.m"
                {
#line 872 "demangle.m"
                  mercury__string__between_4_p_0(demangle__DCG_13_33, demangle__Index2_55, demangle__Len_54, &demangle__DCG_14_34);
                }
#line 873 "demangle.m"
                {
#line 873 "demangle.m"
                  demangle__MPredName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 873 "demangle.m"
                  MR_hl_field(MR_mktag(1), demangle__MPredName_13, 0) = ((MR_Box) (demangle__PredName_53));
#line 873 "demangle.m"
                }
#line 869 "demangle.m"
              }
#line 874 "demangle.m"
            else
#line 875 "demangle.m"
              {
#line 875 "demangle.m"
                demangle__DCG_14_34 = demangle__DCG_13_33;
#line 876 "demangle.m"
                demangle__MPredName_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 875 "demangle.m"
              }
#line 479 "demangle.m"
            demangle__succeeded = ((MR_tag((MR_Word) demangle__MPredName_13)) == (MR_mktag((MR_Integer) 1)));
#line 479 "demangle.m"
            if (demangle__succeeded)
#line 479 "demangle.m"
              {
#line 479 "demangle.m"
                demangle__PredName1_14 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MPredName_13, (MR_Integer) 0)));
#line 480 "demangle.m"
                demangle__succeeded = ((MR_tag((MR_Word) demangle__IntroducedPredType0_10)) == (MR_mktag((MR_Integer) 1)));
#line 480 "demangle.m"
                if (demangle__succeeded)
#line 480 "demangle.m"
                  {
#line 480 "demangle.m"
                    demangle__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__IntroducedPredType0_10, (MR_Integer) 0)));
#line 481 "demangle.m"
                    {
#line 481 "demangle.m"
                      MR_String demangle__TypeSpec_16;
#line 481 "demangle.m"
                      MR_Integer demangle__Length_61;
#line 481 "demangle.m"
                      MR_Integer demangle__NumBrackets_62;
#line 481 "demangle.m"
                      MR_Integer demangle__Index_63;
#line 481 "demangle.m"
                      MR_Integer demangle__V_65_65;
#line 481 "demangle.m"
                      MR_Char demangle__V_66_66;
#line 481 "demangle.m"
                      MR_Integer demangle__V_67_67;
#line 481 "demangle.m"
                      MR_Integer demangle__V_68_68;
#line 481 "demangle.m"
                      MR_Integer demangle__V_69_69;
#line 481 "demangle.m"
                      MR_Char demangle__V_70_70;

#line 882 "demangle.m"
                      {
#line 882 "demangle.m"
                        mercury__string__length_2_p_0(demangle__DCG_14_34, &demangle__Length_61);
                      }
#line 883 "demangle.m"
                      demangle__succeeded = (demangle__Length_61 > (MR_Integer) 2);
#line 481 "demangle.m"
                      if (demangle__succeeded)
#line 481 "demangle.m"
                        {
#line 884 "demangle.m"
                          demangle__V_65_65 = (MR_Integer) 0;
#line 884 "demangle.m"
                          demangle__V_66_66 = (MR_Char) 91;
#line 884 "demangle.m"
                          {
#line 884 "demangle.m"
                            mercury__string__unsafe_index_3_p_0(demangle__DCG_14_34, demangle__V_65_65, &demangle__V_70_70);
                          }
#line 884 "demangle.m"
                          demangle__succeeded = (demangle__V_66_66 == demangle__V_70_70);
#line 481 "demangle.m"
                          if (demangle__succeeded)
#line 481 "demangle.m"
                            {
#line 885 "demangle.m"
                              demangle__NumBrackets_62 = (MR_Integer) 0;
#line 887 "demangle.m"
                              demangle__V_67_67 = (MR_Integer) 1;
#line 886 "demangle.m"
                              {
#line 886 "demangle.m"
                                demangle__succeeded = demangle__find_matching_close_bracket_5_p_0(demangle__NumBrackets_62, demangle__Length_61, demangle__DCG_14_34, demangle__V_67_67, &demangle__Index_63);
                              }
#line 481 "demangle.m"
                              if (demangle__succeeded)
#line 481 "demangle.m"
                                {
#line 888 "demangle.m"
                                  demangle__V_69_69 = (MR_Integer) 1;
#line 888 "demangle.m"
                                  demangle__V_68_68 = (demangle__Index_63 + demangle__V_69_69);
#line 888 "demangle.m"
                                  {
#line 888 "demangle.m"
                                    mercury__string__split_4_p_0(demangle__DCG_14_34, demangle__V_68_68, &demangle__TypeSpec_16, &demangle__DCG_18_38);
                                  }
#line 483 "demangle.m"
                                  demangle__Seq_18 = (MR_Integer) 0;
#line 484 "demangle.m"
                                  demangle__Line_19 = (MR_Integer) 0;
#line 482 "demangle.m"
                                  {
#line 482 "demangle.m"
                                    demangle__IntroducedPredType_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "demangle.m"
                                    MR_hl_field(MR_mktag(1), demangle__IntroducedPredType_17, 0) = ((MR_Box) (demangle__TypeSpec_16));
#line 482 "demangle.m"
                                  }
#line 482 "demangle.m"
                                  demangle__succeeded = MR_TRUE;
#line 481 "demangle.m"
                                }
#line 481 "demangle.m"
                            }
#line 481 "demangle.m"
                        }
#line 481 "demangle.m"
                    }
#line 480 "demangle.m"
                  }
#line 480 "demangle.m"
                else
#line 495 "demangle.m"
                  {
#line 495 "demangle.m"
                    MR_String demangle__DCG_16_36;
#line 495 "demangle.m"
                    MR_String demangle__DCG_17_37;
#line 495 "demangle.m"
                    MR_String demangle__V_48_48;
#line 495 "demangle.m"
                    MR_Integer demangle__Digit_74;
#line 495 "demangle.m"
                    MR_String demangle__DCG_1_75;
#line 495 "demangle.m"
                    MR_Char demangle__Char_79;
#line 495 "demangle.m"
                    MR_Integer demangle__Digit_83;
#line 495 "demangle.m"
                    MR_String demangle__DCG_1_84;
#line 495 "demangle.m"
                    MR_Char demangle__Char_88;

#line 495 "demangle.m"
                    demangle__IntroducedPredType_17 = demangle__IntroducedPredType0_10;
#line 813 "demangle.m"
                    {
#line 813 "demangle.m"
                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__DCG_14_34, &demangle__Char_79, &demangle__DCG_1_75);
                    }
#line 495 "demangle.m"
                    if (demangle__succeeded)
#line 495 "demangle.m"
                      {
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 48))
#line 818 "demangle.m"
                          {
#line 818 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 0;
#line 818 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 818 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 49))
#line 819 "demangle.m"
                          {
#line 819 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 1;
#line 819 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 819 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 50))
#line 820 "demangle.m"
                          {
#line 820 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 2;
#line 820 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 820 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 51))
#line 821 "demangle.m"
                          {
#line 821 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 3;
#line 821 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 821 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 52))
#line 822 "demangle.m"
                          {
#line 822 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 4;
#line 822 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 822 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 53))
#line 823 "demangle.m"
                          {
#line 823 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 5;
#line 823 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 823 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 54))
#line 824 "demangle.m"
                          {
#line 824 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 6;
#line 824 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 824 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 55))
#line 825 "demangle.m"
                          {
#line 825 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 7;
#line 825 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 825 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 56))
#line 826 "demangle.m"
                          {
#line 826 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 8;
#line 826 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 826 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                        if ((demangle__Char_79 == (MR_Char) 57))
#line 827 "demangle.m"
                          {
#line 827 "demangle.m"
                            demangle__Digit_74 = (MR_Integer) 9;
#line 827 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 827 "demangle.m"
                          }
#line 818 "demangle.m"
                        else
#line 818 "demangle.m"
                          demangle__succeeded = MR_FALSE;
#line 495 "demangle.m"
                        if (demangle__succeeded)
#line 495 "demangle.m"
                          {
#line 798 "demangle.m"
                            {
#line 798 "demangle.m"
                              demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_74, &demangle__Line_19, demangle__DCG_1_75, &demangle__DCG_16_36);
                            }
#line 495 "demangle.m"
                            if (demangle__succeeded)
#line 495 "demangle.m"
                              {
#line 497 "demangle.m"
                                demangle__V_48_48 = (MR_String) "__";
#line 497 "demangle.m"
                                {
#line 497 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_48_48, demangle__DCG_16_36, &demangle__DCG_17_37);
                                }
#line 495 "demangle.m"
                                if (demangle__succeeded)
#line 495 "demangle.m"
                                  {
#line 813 "demangle.m"
                                    {
#line 813 "demangle.m"
                                      demangle__succeeded = mercury__string__first_char_3_p_3(demangle__DCG_17_37, &demangle__Char_88, &demangle__DCG_1_84);
                                    }
#line 495 "demangle.m"
                                    if (demangle__succeeded)
#line 495 "demangle.m"
                                      {
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 48))
#line 818 "demangle.m"
                                          {
#line 818 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 0;
#line 818 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 818 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 49))
#line 819 "demangle.m"
                                          {
#line 819 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 1;
#line 819 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 819 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 50))
#line 820 "demangle.m"
                                          {
#line 820 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 2;
#line 820 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 820 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 51))
#line 821 "demangle.m"
                                          {
#line 821 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 3;
#line 821 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 821 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 52))
#line 822 "demangle.m"
                                          {
#line 822 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 4;
#line 822 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 822 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 53))
#line 823 "demangle.m"
                                          {
#line 823 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 5;
#line 823 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 823 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 54))
#line 824 "demangle.m"
                                          {
#line 824 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 6;
#line 824 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 824 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 55))
#line 825 "demangle.m"
                                          {
#line 825 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 7;
#line 825 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 825 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 56))
#line 826 "demangle.m"
                                          {
#line 826 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 8;
#line 826 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 826 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                        if ((demangle__Char_88 == (MR_Char) 57))
#line 827 "demangle.m"
                                          {
#line 827 "demangle.m"
                                            demangle__Digit_83 = (MR_Integer) 9;
#line 827 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 827 "demangle.m"
                                          }
#line 818 "demangle.m"
                                        else
#line 818 "demangle.m"
                                          demangle__succeeded = MR_FALSE;
#line 495 "demangle.m"
                                        if (demangle__succeeded)
#line 798 "demangle.m"
                                          {
#line 798 "demangle.m"
                                            demangle__succeeded = demangle__remove_int_2_4_p_0(demangle__Digit_83, &demangle__Seq_18, demangle__DCG_1_84, &demangle__DCG_18_38);
                                          }
#line 495 "demangle.m"
                                      }
#line 495 "demangle.m"
                                  }
#line 495 "demangle.m"
                              }
#line 495 "demangle.m"
                          }
#line 495 "demangle.m"
                      }
#line 495 "demangle.m"
                  }
#line 479 "demangle.m"
              }
#line 504 "demangle.m"
            if (demangle__succeeded)
#line 504 "demangle.m"
              {
#line 501 "demangle.m"
                *demangle__PredName_6 = demangle__PredName1_14;
#line 502 "demangle.m"
                {
#line 502 "demangle.m"
                  MR_Word base;
#line 502 "demangle.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 502 "demangle.m"
                  *demangle__Category_8 = base;
#line 502 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__IntroducedPredType_17));
#line 502 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (demangle__Line_19));
#line 502 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (demangle__Seq_18));
#line 502 "demangle.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (demangle__LambdaPredOrFunc_11));
#line 502 "demangle.m"
                }
#line 504 "demangle.m"
                *demangle__DCG_19_39 = demangle__DCG_18_38;
#line 504 "demangle.m"
              }
#line 504 "demangle.m"
            else
#line 504 "demangle.m"
              {
#line 509 "demangle.m"
                *demangle__Category_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 510 "demangle.m"
                *demangle__PredName_6 = demangle__DCG_0_20;
#line 504 "demangle.m"
                *demangle__DCG_19_39 = demangle__DCG_13_33;
#line 504 "demangle.m"
              }
#line 504 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 476 "demangle.m"
          }
#line 476 "demangle.m"
      }
#line 512 "demangle.m"
    else
#line 512 "demangle.m"
      {
#line 513 "demangle.m"
        *demangle__Category_8 = demangle__Category0_7;
#line 514 "demangle.m"
        *demangle__PredName_6 = demangle__DCG_0_20;
#line 512 "demangle.m"
        *demangle__DCG_19_39 = demangle__DCG_0_20;
#line 512 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 512 "demangle.m"
      }
#line 512 "demangle.m"
    return demangle__succeeded;
#line 512 "demangle.m"
  }
#line 431 "demangle.m"
}

#line 410 "demangle.m"
static MR_bool MR_CALL 
demangle__handle_compiler_generated_pred_4_p_0(
#line 410 "demangle.m"
  MR_Integer demangle__ModeNum0_5,
#line 410 "demangle.m"
  MR_Word * demangle__Category0_6,
#line 410 "demangle.m"
  MR_String demangle__DCG_0_7,
#line 410 "demangle.m"
  MR_String * demangle__DCG_6_13)
#line 410 "demangle.m"
{
#line 416 "demangle.m"
  {
#line 416 "demangle.m"
    MR_bool demangle__succeeded;
#line 416 "demangle.m"
    MR_String demangle__DCG_1_8;

#line 414 "demangle.m"
    {
#line 414 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Unify__", demangle__DCG_0_7, &demangle__DCG_1_8);
    }
#line 416 "demangle.m"
    if (demangle__succeeded)
#line 416 "demangle.m"
      {
#line 415 "demangle.m"
        *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 416 "demangle.m"
        *demangle__DCG_6_13 = demangle__DCG_1_8;
#line 416 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 416 "demangle.m"
      }
#line 416 "demangle.m"
    else
#line 420 "demangle.m"
      {
#line 420 "demangle.m"
        MR_String demangle__DCG_3_10;

#line 416 "demangle.m"
        {
#line 416 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", demangle__DCG_0_7, &demangle__DCG_3_10);
        }
#line 420 "demangle.m"
        if (demangle__succeeded)
#line 420 "demangle.m"
          {
#line 419 "demangle.m"
            demangle__succeeded = (demangle__ModeNum0_5 == (MR_Integer) 0);
#line 420 "demangle.m"
            if (demangle__succeeded)
#line 420 "demangle.m"
              {
#line 417 "demangle.m"
                *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 420 "demangle.m"
                *demangle__DCG_6_13 = demangle__DCG_3_10;
#line 420 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 420 "demangle.m"
              }
#line 420 "demangle.m"
          }
#line 420 "demangle.m"
        else
#line 424 "demangle.m"
          {
#line 424 "demangle.m"
            MR_String demangle__DCG_5_12;

#line 420 "demangle.m"
            {
#line 420 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", demangle__DCG_0_7, &demangle__DCG_5_12);
            }
#line 424 "demangle.m"
            if (demangle__succeeded)
#line 424 "demangle.m"
              {
#line 423 "demangle.m"
                demangle__succeeded = (demangle__ModeNum0_5 == (MR_Integer) 0);
#line 424 "demangle.m"
                if (demangle__succeeded)
#line 424 "demangle.m"
                  {
#line 421 "demangle.m"
                    *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "demangle.m"
                    *demangle__DCG_6_13 = demangle__DCG_5_12;
#line 424 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 424 "demangle.m"
                  }
#line 424 "demangle.m"
              }
#line 424 "demangle.m"
            else
#line 424 "demangle.m"
              {
#line 425 "demangle.m"
                *demangle__Category0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 424 "demangle.m"
                *demangle__DCG_6_13 = demangle__DCG_0_7;
#line 424 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 424 "demangle.m"
              }
#line 424 "demangle.m"
          }
#line 420 "demangle.m"
      }
#line 416 "demangle.m"
    return demangle__succeeded;
#line 416 "demangle.m"
  }
#line 410 "demangle.m"
}

#line 384 "demangle.m"
static void MR_CALL 
demangle__demangle_higher_order_5_p_0(
#line 384 "demangle.m"
  MR_Word * demangle__HigherOrder_6,
#line 384 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 384 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 384 "demangle.m"
  MR_String demangle__DCG_0_10,
#line 384 "demangle.m"
  MR_String * demangle__DCG_3_13)
#line 384 "demangle.m"
{
#line 387 "demangle.m"
  {
#line 387 "demangle.m"
    MR_bool demangle__succeeded;
#line 398 "demangle.m"
    MR_Integer demangle__HO_Num_9;
#line 398 "demangle.m"
    MR_String demangle__DCG_2_12;
#line 394 "demangle.m"
    MR_String demangle__DCG_1_11;
#line 394 "demangle.m"
    MR_String demangle__V_14_14;

#line 394 "demangle.m"
    {
#line 394 "demangle.m"
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__HO_Num_9, demangle__DCG_0_10, &demangle__DCG_1_11);
    }
#line 394 "demangle.m"
    if (demangle__succeeded)
#line 394 "demangle.m"
      {
#line 395 "demangle.m"
        demangle__V_14_14 = (MR_String) "__ho";
#line 919 "demangle.m"
        {
#line 919 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_1_11, demangle__V_14_14, &demangle__DCG_2_12);
        }
#line 394 "demangle.m"
      }
#line 398 "demangle.m"
    if (demangle__succeeded)
#line 398 "demangle.m"
      {
#line 397 "demangle.m"
        {
#line 397 "demangle.m"
          MR_Word base;
#line 397 "demangle.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 397 "demangle.m"
          *demangle__HigherOrder_6 = base;
#line 397 "demangle.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__HO_Num_9));
#line 397 "demangle.m"
        }
#line 398 "demangle.m"
        *demangle__DCG_3_13 = demangle__DCG_2_12;
#line 398 "demangle.m"
      }
#line 398 "demangle.m"
    else
#line 398 "demangle.m"
      {
#line 399 "demangle.m"
        *demangle__HigherOrder_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 398 "demangle.m"
        *demangle__DCG_3_13 = demangle__DCG_0_10;
#line 398 "demangle.m"
      }
#line 401 "demangle.m"
    *demangle__ModeNum_8 = demangle__ModeNum0_7;
#line 387 "demangle.m"
  }
#line 384 "demangle.m"
}

#line 356 "demangle.m"
static void MR_CALL 
demangle__demangle_unused_args_5_p_0(
#line 356 "demangle.m"
  MR_Word * demangle__UnusedArgs_6,
#line 356 "demangle.m"
  MR_Integer demangle__ModeNum0_7,
#line 356 "demangle.m"
  MR_Integer * demangle__ModeNum_8,
#line 356 "demangle.m"
  MR_String demangle__DCG_0_10,
#line 356 "demangle.m"
  MR_String * demangle__DCG_6_16)
#line 356 "demangle.m"
{
#line 373 "demangle.m"
  {
#line 373 "demangle.m"
    MR_bool demangle__succeeded;
#line 373 "demangle.m"
    MR_Integer demangle__UA_ModeNum_9;
#line 373 "demangle.m"
    MR_String demangle__DCG_2_12;
#line 368 "demangle.m"
    MR_String demangle__DCG_1_11;
#line 368 "demangle.m"
    MR_String demangle__V_17_17;

#line 368 "demangle.m"
    {
#line 368 "demangle.m"
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__UA_ModeNum_9, demangle__DCG_0_10, &demangle__DCG_1_11);
    }
#line 368 "demangle.m"
    if (demangle__succeeded)
#line 368 "demangle.m"
      {
#line 369 "demangle.m"
        demangle__V_17_17 = (MR_String) "__ua";
#line 919 "demangle.m"
        {
#line 919 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_1_11, demangle__V_17_17, &demangle__DCG_2_12);
        }
#line 368 "demangle.m"
      }
#line 373 "demangle.m"
    if (demangle__succeeded)
#line 373 "demangle.m"
      {
#line 373 "demangle.m"
        MR_Word demangle__V_18_18;

#line 371 "demangle.m"
        {
#line 371 "demangle.m"
          demangle__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 371 "demangle.m"
          MR_hl_field(MR_mktag(0), demangle__V_18_18, 0) = ((MR_Box) (demangle__ModeNum0_7));
#line 371 "demangle.m"
          MR_hl_field(MR_mktag(0), demangle__V_18_18, 1) = ((MR_Box) ((MR_Integer) 0));
#line 371 "demangle.m"
        }
#line 371 "demangle.m"
        {
#line 371 "demangle.m"
          MR_Word base;
#line 371 "demangle.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "demangle.m"
          *demangle__UnusedArgs_6 = base;
#line 371 "demangle.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__V_18_18));
#line 371 "demangle.m"
        }
#line 372 "demangle.m"
        {
#line 372 "demangle.m"
          *demangle__ModeNum_8 = mercury__int__mod_2_f_0(demangle__UA_ModeNum_9, (MR_Integer) 10000);
        }
#line 373 "demangle.m"
        *demangle__DCG_6_16 = demangle__DCG_2_12;
#line 373 "demangle.m"
      }
#line 373 "demangle.m"
    else
#line 379 "demangle.m"
      {
#line 379 "demangle.m"
        MR_String demangle__DCG_5_15;
#line 379 "demangle.m"
        MR_Integer demangle__UA_ModeNum_25;
#line 374 "demangle.m"
        MR_String demangle__DCG_4_14;
#line 374 "demangle.m"
        MR_String demangle__V_21_21;

#line 374 "demangle.m"
        {
#line 374 "demangle.m"
          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__UA_ModeNum_25, demangle__DCG_0_10, &demangle__DCG_4_14);
        }
#line 374 "demangle.m"
        if (demangle__succeeded)
#line 374 "demangle.m"
          {
#line 375 "demangle.m"
            demangle__V_21_21 = (MR_String) "__uab";
#line 919 "demangle.m"
            {
#line 919 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_4_14, demangle__V_21_21, &demangle__DCG_5_15);
            }
#line 374 "demangle.m"
          }
#line 379 "demangle.m"
        if (demangle__succeeded)
#line 379 "demangle.m"
          {
#line 379 "demangle.m"
            MR_Word demangle__V_22_22;

#line 377 "demangle.m"
            {
#line 377 "demangle.m"
              demangle__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 377 "demangle.m"
              MR_hl_field(MR_mktag(0), demangle__V_22_22, 0) = ((MR_Box) (demangle__ModeNum0_7));
#line 377 "demangle.m"
              MR_hl_field(MR_mktag(0), demangle__V_22_22, 1) = ((MR_Box) ((MR_Integer) 1));
#line 377 "demangle.m"
            }
#line 377 "demangle.m"
            {
#line 377 "demangle.m"
              MR_Word base;
#line 377 "demangle.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 377 "demangle.m"
              *demangle__UnusedArgs_6 = base;
#line 377 "demangle.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (demangle__V_22_22));
#line 377 "demangle.m"
            }
#line 378 "demangle.m"
            {
#line 378 "demangle.m"
              *demangle__ModeNum_8 = mercury__int__mod_2_f_0(demangle__UA_ModeNum_25, (MR_Integer) 10000);
            }
#line 379 "demangle.m"
            *demangle__DCG_6_16 = demangle__DCG_5_15;
#line 379 "demangle.m"
          }
#line 379 "demangle.m"
        else
#line 379 "demangle.m"
          {
#line 380 "demangle.m"
            *demangle__UnusedArgs_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 381 "demangle.m"
            *demangle__ModeNum_8 = demangle__ModeNum0_7;
#line 379 "demangle.m"
            *demangle__DCG_6_16 = demangle__DCG_0_10;
#line 379 "demangle.m"
          }
#line 379 "demangle.m"
      }
#line 373 "demangle.m"
  }
#line 356 "demangle.m"
}

#line 202 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_hl_2_p_0(
#line 202 "demangle.m"
  MR_String demangle__DCG_0_27,
#line 202 "demangle.m"
  MR_String * demangle__DCG_23_50)
#line 202 "demangle.m"
{
#line 204 "demangle.m"
  {
#line 204 "demangle.m"
    MR_bool demangle__succeeded;
#line 204 "demangle.m"
    MR_Integer demangle__Int_3;
#line 204 "demangle.m"
    MR_Integer demangle__ModeNum1_5;
#line 204 "demangle.m"
    MR_Word demangle__MaybeInternalLabelNum0_6;
#line 204 "demangle.m"
    MR_String demangle__PredOrFunc_7;
#line 204 "demangle.m"
    MR_Integer demangle__Arity_10;
#line 204 "demangle.m"
    MR_Word demangle__MaybeInternalLabelNum_12;
#line 204 "demangle.m"
    MR_Word demangle__UnusedArgs_13;
#line 204 "demangle.m"
    MR_Word demangle__HigherOrder_15;
#line 204 "demangle.m"
    MR_Integer demangle__ModeNum_16;
#line 204 "demangle.m"
    MR_Word demangle__MaybeModule0_18;
#line 204 "demangle.m"
    MR_Word demangle__Category0_19;
#line 204 "demangle.m"
    MR_Word demangle__MaybeModule_20;
#line 204 "demangle.m"
    MR_String demangle__PredName_23;
#line 204 "demangle.m"
    MR_Word demangle__Category_24;
#line 204 "demangle.m"
    MR_Word demangle__Parts_25;
#line 204 "demangle.m"
    MR_String demangle__DCG_1_28;
#line 204 "demangle.m"
    MR_String demangle__DCG_2_29;
#line 204 "demangle.m"
    MR_String demangle__DCG_5_32;
#line 204 "demangle.m"
    MR_String demangle__DCG_20_47;
#line 204 "demangle.m"
    MR_String demangle__DCG_21_48;
#line 204 "demangle.m"
    MR_String demangle__V_56_56;
#line 204 "demangle.m"
    MR_Word demangle__V_57_57;
#line 204 "demangle.m"
    MR_Word demangle__V_71_71;
#line 914 "demangle.m"
    MR_String demangle__DCG_1_77;
#line 226 "demangle.m"
    MR_Integer demangle__ModeNum0_4;
#line 226 "demangle.m"
    MR_String demangle__DCG_4_31;
#line 221 "demangle.m"
    MR_String demangle__DCG_3_30;
#line 221 "demangle.m"
    MR_String demangle__V_52_52;
#line 7049 "demangle.c"
    MR_String demangle__DCG_6_33;
#line 235 "demangle.m"
    MR_String demangle__V_53_53;
#line 345 "demangle.m"
    MR_String demangle__DCG_22_49;

#line 914 "demangle.m"
    {
#line 914 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__DCG_0_27, &demangle__DCG_1_77);
    }
#line 914 "demangle.m"
    if (demangle__succeeded)
#line 914 "demangle.m"
      demangle__DCG_1_28 = demangle__DCG_1_77;
#line 914 "demangle.m"
    else
#line 914 "demangle.m"
      demangle__DCG_1_28 = demangle__DCG_0_27;
#line 213 "demangle.m"
    {
#line 213 "demangle.m"
      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Int_3, demangle__DCG_1_28, &demangle__DCG_2_29);
    }
#line 204 "demangle.m"
    if (demangle__succeeded)
#line 204 "demangle.m"
      {
#line 221 "demangle.m"
        demangle__V_52_52 = (MR_String) "_";
#line 919 "demangle.m"
        {
#line 919 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_2_29, demangle__V_52_52, &demangle__DCG_3_30);
        }
#line 221 "demangle.m"
        if (demangle__succeeded)
#line 222 "demangle.m"
          {
#line 222 "demangle.m"
            demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__ModeNum0_4, demangle__DCG_3_30, &demangle__DCG_4_31);
          }
#line 226 "demangle.m"
        if (demangle__succeeded)
#line 226 "demangle.m"
          {
#line 224 "demangle.m"
            demangle__ModeNum1_5 = demangle__ModeNum0_4;
#line 225 "demangle.m"
            {
#line 225 "demangle.m"
              demangle__MaybeInternalLabelNum0_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 225 "demangle.m"
              MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum0_6, 0) = ((MR_Box) (demangle__Int_3));
#line 225 "demangle.m"
            }
#line 226 "demangle.m"
            demangle__DCG_5_32 = demangle__DCG_4_31;
#line 226 "demangle.m"
          }
#line 226 "demangle.m"
        else
#line 226 "demangle.m"
          {
#line 227 "demangle.m"
            demangle__ModeNum1_5 = demangle__Int_3;
#line 228 "demangle.m"
            demangle__MaybeInternalLabelNum0_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 226 "demangle.m"
            demangle__DCG_5_32 = demangle__DCG_2_29;
#line 226 "demangle.m"
          }
#line 266 "demangle.m"
        demangle__V_56_56 = (MR_String) "_";
#line 290 "demangle.m"
        demangle__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[10]);
#line 235 "demangle.m"
        demangle__V_53_53 = (MR_String) "f_";
#line 919 "demangle.m"
        {
#line 919 "demangle.m"
          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_5_32, demangle__V_53_53, &demangle__DCG_6_33);
        }
#line 7133 "demangle.c"
        if (demangle__succeeded)
#line 7135 "demangle.c"
          {
#line 7137 "demangle.c"
            MR_Integer demangle__ModeNum3_14;
#line 7139 "demangle.c"
            MR_String demangle__DCG_10_37;
#line 7141 "demangle.c"
            MR_String demangle__DCG_11_38;
#line 7143 "demangle.c"
            MR_String demangle__DCG_13_40;
#line 7145 "demangle.c"
            MR_String demangle__DCG_14_41;
#line 7147 "demangle.c"
            MR_String demangle__DCG_16_43;
#line 7149 "demangle.c"
            MR_String demangle__DCG_17_44;
#line 7151 "demangle.c"
            MR_String demangle__DCG_18_45;

#line 236 "demangle.m"
            demangle__PredOrFunc_7 = (MR_String) "function";
#line 919 "demangle.m"
            {
#line 919 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_6_33, (MR_String) "_", &demangle__DCG_10_37);
            }
#line 7161 "demangle.c"
            if (demangle__succeeded)
#line 7163 "demangle.c"
              {
#line 252 "demangle.m"
                {
#line 252 "demangle.m"
                  demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_10, demangle__DCG_10_37, &demangle__DCG_11_38);
                }
#line 7170 "demangle.c"
                if (demangle__succeeded)
#line 7172 "demangle.c"
                  {
#line 256 "demangle.m"
                    demangle__MaybeInternalLabelNum_12 = demangle__MaybeInternalLabelNum0_6;
#line 919 "demangle.m"
                    {
#line 919 "demangle.m"
                      demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_11_38, demangle__V_56_56, &demangle__DCG_13_40);
                    }
#line 7181 "demangle.c"
                    if (demangle__succeeded)
#line 7183 "demangle.c"
                      {
#line 274 "demangle.m"
                        {
#line 274 "demangle.m"
                          demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_13, demangle__ModeNum1_5, &demangle__ModeNum3_14, demangle__DCG_13_40, &demangle__DCG_14_41);
                        }
#line 275 "demangle.m"
                        {
#line 275 "demangle.m"
                          demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_15, demangle__ModeNum3_14, &demangle__ModeNum_16, demangle__DCG_14_41, &demangle__DCG_16_43);
                        }
#line 290 "demangle.m"
                        {
#line 290 "demangle.m"
                          demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_18, demangle__V_57_57, demangle__DCG_16_43, &demangle__DCG_17_44);
                        }
#line 301 "demangle.m"
                        {
#line 301 "demangle.m"
                          demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_16, &demangle__Category0_19, demangle__DCG_17_44, &demangle__DCG_18_45);
                        }
#line 7205 "demangle.c"
                        if (demangle__succeeded)
#line 7207 "demangle.c"
                          {
#line 302 "demangle.m"
                            demangle__succeeded = (demangle__Category0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 302 "demangle.m"
                            demangle__succeeded = !(demangle__succeeded);
#line 304 "demangle.m"
                            if (demangle__succeeded)
#line 303 "demangle.m"
                              {
#line 303 "demangle.m"
                                {
#line 303 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__DCG_18_45, &demangle__DCG_20_47);
                                }
#line 303 "demangle.m"
                              }
#line 304 "demangle.m"
                            else
#line 305 "demangle.m"
                              {
#line 305 "demangle.m"
                                demangle__DCG_20_47 = demangle__DCG_18_45;
#line 305 "demangle.m"
                                demangle__succeeded = MR_TRUE;
#line 305 "demangle.m"
                              }
#line 7234 "demangle.c"
                            if (demangle__succeeded)
#line 312 "demangle.m"
                              demangle__succeeded = (demangle__Category0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 7238 "demangle.c"
                          }
#line 7240 "demangle.c"
                      }
#line 7242 "demangle.c"
                  }
#line 7244 "demangle.c"
              }
#line 7246 "demangle.c"
          }
#line 7248 "demangle.c"
        else
#line 7250 "demangle.c"
          {
#line 7252 "demangle.c"
            MR_String demangle__DCG_8_35;

#line 919 "demangle.m"
            {
#line 919 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_5_32, (MR_String) "p_", &demangle__DCG_8_35);
            }
#line 7260 "demangle.c"
            if (demangle__succeeded)
#line 7262 "demangle.c"
              {
#line 7264 "demangle.c"
                MR_String demangle__DCG_12_39;
#line 7266 "demangle.c"
                MR_Integer demangle__ModeNum3_149;
#line 7268 "demangle.c"
                MR_String demangle__DCG_10_150;
#line 7270 "demangle.c"
                MR_String demangle__DCG_13_151;
#line 7272 "demangle.c"
                MR_String demangle__DCG_14_152;
#line 7274 "demangle.c"
                MR_String demangle__DCG_16_153;
#line 7276 "demangle.c"
                MR_String demangle__DCG_17_154;
#line 7278 "demangle.c"
                MR_String demangle__DCG_18_155;

#line 239 "demangle.m"
                demangle__PredOrFunc_7 = (MR_String) "predicate";
#line 919 "demangle.m"
                {
#line 919 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_8_35, (MR_String) "_", &demangle__DCG_10_150);
                }
#line 7288 "demangle.c"
                if (demangle__succeeded)
#line 7290 "demangle.c"
                  {
#line 252 "demangle.m"
                    {
#line 252 "demangle.m"
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_10, demangle__DCG_10_150, &demangle__DCG_12_39);
                    }
#line 7297 "demangle.c"
                    if (demangle__succeeded)
#line 7299 "demangle.c"
                      {
#line 256 "demangle.m"
                        demangle__MaybeInternalLabelNum_12 = demangle__MaybeInternalLabelNum0_6;
#line 919 "demangle.m"
                        {
#line 919 "demangle.m"
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_12_39, demangle__V_56_56, &demangle__DCG_13_151);
                        }
#line 7308 "demangle.c"
                        if (demangle__succeeded)
#line 7310 "demangle.c"
                          {
#line 274 "demangle.m"
                            {
#line 274 "demangle.m"
                              demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_13, demangle__ModeNum1_5, &demangle__ModeNum3_149, demangle__DCG_13_151, &demangle__DCG_14_152);
                            }
#line 275 "demangle.m"
                            {
#line 275 "demangle.m"
                              demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_15, demangle__ModeNum3_149, &demangle__ModeNum_16, demangle__DCG_14_152, &demangle__DCG_16_153);
                            }
#line 290 "demangle.m"
                            {
#line 290 "demangle.m"
                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_18, demangle__V_57_57, demangle__DCG_16_153, &demangle__DCG_17_154);
                            }
#line 301 "demangle.m"
                            {
#line 301 "demangle.m"
                              demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_16, &demangle__Category0_19, demangle__DCG_17_154, &demangle__DCG_18_155);
                            }
#line 7332 "demangle.c"
                            if (demangle__succeeded)
#line 7334 "demangle.c"
                              {
#line 302 "demangle.m"
                                demangle__succeeded = (demangle__Category0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 302 "demangle.m"
                                demangle__succeeded = !(demangle__succeeded);
#line 304 "demangle.m"
                                if (demangle__succeeded)
#line 303 "demangle.m"
                                  {
#line 303 "demangle.m"
                                    {
#line 303 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__DCG_18_155, &demangle__DCG_20_47);
                                    }
#line 303 "demangle.m"
                                  }
#line 304 "demangle.m"
                                else
#line 305 "demangle.m"
                                  {
#line 305 "demangle.m"
                                    demangle__DCG_20_47 = demangle__DCG_18_155;
#line 305 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 305 "demangle.m"
                                  }
#line 7361 "demangle.c"
                                if (demangle__succeeded)
#line 312 "demangle.m"
                                  demangle__succeeded = (demangle__Category0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 7365 "demangle.c"
                              }
#line 7367 "demangle.c"
                          }
#line 7369 "demangle.c"
                      }
#line 7371 "demangle.c"
                  }
#line 7373 "demangle.c"
              }
#line 7375 "demangle.c"
            else
#line 7377 "demangle.c"
              {
#line 7379 "demangle.c"
                MR_Integer demangle__ModeNum2_129;
#line 7381 "demangle.c"
                MR_Integer demangle__ModeNum3_130;
#line 7383 "demangle.c"
                MR_String demangle__DCG_12_135;
#line 7385 "demangle.c"
                MR_String demangle__DCG_13_136;
#line 7387 "demangle.c"
                MR_String demangle__DCG_14_137;
#line 7389 "demangle.c"
                MR_String demangle__DCG_15_138;
#line 7391 "demangle.c"
                MR_String demangle__DCG_16_139;
#line 7393 "demangle.c"
                MR_String demangle__DCG_17_140;
#line 7395 "demangle.c"
                MR_String demangle__DCG_18_141;
#line 257 "demangle.m"
                MR_Integer demangle__Arity0_117;
#line 257 "demangle.m"
                MR_String demangle__DCG_11_119;
#line 251 "demangle.m"
                MR_String demangle__DCG_10_115;
#line 281 "demangle.m"
                MR_Word demangle__V_121_121;

#line 243 "demangle.m"
                demangle__PredOrFunc_7 = (MR_String) "predicate";
#line 919 "demangle.m"
                {
#line 919 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_5_32, (MR_String) "_", &demangle__DCG_10_115);
                }
#line 251 "demangle.m"
                if (demangle__succeeded)
#line 252 "demangle.m"
                  {
#line 252 "demangle.m"
                    demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity0_117, demangle__DCG_10_115, &demangle__DCG_11_119);
                  }
#line 257 "demangle.m"
                if (demangle__succeeded)
#line 257 "demangle.m"
                  {
#line 254 "demangle.m"
                    demangle__Arity_10 = demangle__Arity0_117;
#line 255 "demangle.m"
                    demangle__ModeNum2_129 = demangle__ModeNum1_5;
#line 256 "demangle.m"
                    demangle__MaybeInternalLabelNum_12 = demangle__MaybeInternalLabelNum0_6;
#line 257 "demangle.m"
                    demangle__DCG_12_135 = demangle__DCG_11_119;
#line 257 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 257 "demangle.m"
                  }
#line 257 "demangle.m"
                else
#line 257 "demangle.m"
                  {
#line 262 "demangle.m"
                    demangle__Arity_10 = demangle__ModeNum1_5;
#line 263 "demangle.m"
                    demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeInternalLabelNum0_6)) == (MR_mktag((MR_Integer) 1)));
#line 263 "demangle.m"
                    if (demangle__succeeded)
#line 263 "demangle.m"
                      {
#line 263 "demangle.m"
                        demangle__ModeNum2_129 = ((MR_Integer) (MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum0_6, (MR_Integer) 0)));
#line 264 "demangle.m"
                        demangle__MaybeInternalLabelNum_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 257 "demangle.m"
                        demangle__DCG_12_135 = demangle__DCG_5_32;
#line 257 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 263 "demangle.m"
                      }
#line 257 "demangle.m"
                  }
#line 7460 "demangle.c"
                if (demangle__succeeded)
#line 7462 "demangle.c"
                  {
#line 919 "demangle.m"
                    {
#line 919 "demangle.m"
                      demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_12_135, demangle__V_56_56, &demangle__DCG_13_136);
                    }
#line 7469 "demangle.c"
                    if (demangle__succeeded)
#line 7471 "demangle.c"
                      {
#line 274 "demangle.m"
                        {
#line 274 "demangle.m"
                          demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_13, demangle__ModeNum2_129, &demangle__ModeNum3_130, demangle__DCG_13_136, &demangle__DCG_14_137);
                        }
#line 275 "demangle.m"
                        {
#line 275 "demangle.m"
                          demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_15, demangle__ModeNum3_130, &demangle__ModeNum_16, demangle__DCG_14_137, &demangle__DCG_15_138);
                        }
#line 281 "demangle.m"
                        demangle__succeeded = ((MR_tag((MR_Word) demangle__UnusedArgs_13)) == (MR_mktag((MR_Integer) 1)));
#line 281 "demangle.m"
                        if (demangle__succeeded)
#line 281 "demangle.m"
                          {
#line 281 "demangle.m"
                            demangle__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_13, (MR_Integer) 0)));
#line 282 "demangle.m"
                            {
#line 282 "demangle.m"
                              MR_Integer demangle__V_122_122;

#line 282 "demangle.m"
                              {
#line 282 "demangle.m"
                                demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__V_122_122, demangle__DCG_15_138, &demangle__DCG_16_139);
                              }
#line 282 "demangle.m"
                              if (demangle__succeeded)
#line 282 "demangle.m"
                                demangle__succeeded = (demangle__Arity_10 == demangle__V_122_122);
#line 282 "demangle.m"
                            }
#line 281 "demangle.m"
                          }
#line 281 "demangle.m"
                        else
#line 283 "demangle.m"
                          {
#line 283 "demangle.m"
                            demangle__DCG_16_139 = demangle__DCG_15_138;
#line 283 "demangle.m"
                            demangle__succeeded = MR_TRUE;
#line 283 "demangle.m"
                          }
#line 7519 "demangle.c"
                        if (demangle__succeeded)
#line 7521 "demangle.c"
                          {
#line 290 "demangle.m"
                            {
#line 290 "demangle.m"
                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_18, demangle__V_57_57, demangle__DCG_16_139, &demangle__DCG_17_140);
                            }
#line 301 "demangle.m"
                            {
#line 301 "demangle.m"
                              demangle__succeeded = demangle__handle_compiler_generated_pred_4_p_0(demangle__ModeNum_16, &demangle__Category0_19, demangle__DCG_17_140, &demangle__DCG_18_141);
                            }
#line 7533 "demangle.c"
                            if (demangle__succeeded)
#line 7535 "demangle.c"
                              {
#line 302 "demangle.m"
                                demangle__succeeded = (demangle__Category0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 302 "demangle.m"
                                demangle__succeeded = !(demangle__succeeded);
#line 304 "demangle.m"
                                if (demangle__succeeded)
#line 303 "demangle.m"
                                  {
#line 303 "demangle.m"
                                    {
#line 303 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__", demangle__DCG_18_141, &demangle__DCG_20_47);
                                    }
#line 303 "demangle.m"
                                  }
#line 304 "demangle.m"
                                else
#line 305 "demangle.m"
                                  {
#line 305 "demangle.m"
                                    demangle__DCG_20_47 = demangle__DCG_18_141;
#line 305 "demangle.m"
                                    demangle__succeeded = MR_TRUE;
#line 305 "demangle.m"
                                  }
#line 7562 "demangle.c"
                                if (demangle__succeeded)
#line 7564 "demangle.c"
                                  {
#line 313 "demangle.m"
                                    demangle__succeeded = (demangle__Category0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 313 "demangle.m"
                                    demangle__succeeded = !(demangle__succeeded);
#line 7570 "demangle.c"
                                  }
#line 7572 "demangle.c"
                              }
#line 7574 "demangle.c"
                          }
#line 7576 "demangle.c"
                      }
#line 7578 "demangle.c"
                  }
#line 7580 "demangle.c"
              }
#line 7582 "demangle.c"
          }
#line 204 "demangle.m"
        if (demangle__succeeded)
#line 204 "demangle.m"
          {
#line 329 "demangle.m"
            {
#line 329 "demangle.m"
              demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__DCG_20_47, &demangle__DCG_21_48);
            }
#line 204 "demangle.m"
            if (demangle__succeeded)
#line 204 "demangle.m"
              {
#line 337 "demangle.m"
                if ((demangle__MaybeModule0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 336 "demangle.m"
                  {
#line 336 "demangle.m"
                    demangle__MaybeModule_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 336 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 336 "demangle.m"
                  }
#line 337 "demangle.m"
                else
#line 338 "demangle.m"
                  {
#line 338 "demangle.m"
                    MR_String demangle__ModuleName0_21 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_18, (MR_Integer) 0)));
#line 338 "demangle.m"
                    MR_String demangle__ModuleName_22;

#line 339 "demangle.m"
                    {
#line 339 "demangle.m"
                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__ModuleName0_21, &demangle__ModuleName_22);
                    }
#line 338 "demangle.m"
                    if (demangle__succeeded)
#line 338 "demangle.m"
                      {
#line 340 "demangle.m"
                        {
#line 340 "demangle.m"
                          demangle__MaybeModule_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 340 "demangle.m"
                          MR_hl_field(MR_mktag(1), demangle__MaybeModule_20, 0) = ((MR_Box) (demangle__ModuleName_22));
#line 340 "demangle.m"
                        }
#line 340 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 338 "demangle.m"
                      }
#line 338 "demangle.m"
                  }
#line 204 "demangle.m"
                if (demangle__succeeded)
#line 204 "demangle.m"
                  {
#line 345 "demangle.m"
                    {
#line 345 "demangle.m"
                      demangle__succeeded = demangle__handle_category_etc_5_p_0(&demangle__PredName_23, demangle__Category0_19, &demangle__Category_24, demangle__DCG_21_48, &demangle__DCG_22_49);
                    }
#line 204 "demangle.m"
                    if (demangle__succeeded)
#line 204 "demangle.m"
                      {
#line 352 "demangle.m"
                        demangle__V_71_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 350 "demangle.m"
                        {
#line 350 "demangle.m"
                          demangle__format_proc_11_p_0(demangle__Category_24, demangle__MaybeModule_20, demangle__PredOrFunc_7, demangle__PredName_23, demangle__Arity_10, demangle__ModeNum_16, demangle__HigherOrder_15, demangle__UnusedArgs_13, demangle__MaybeInternalLabelNum_12, &demangle__Parts_25, demangle__V_71_71);
                        }
#line 353 "demangle.m"
                        {
#line 353 "demangle.m"
                          mercury__string__append_list_2_p_0(demangle__Parts_25, demangle__DCG_23_50);
                        }
#line 353 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 204 "demangle.m"
                      }
#line 204 "demangle.m"
                  }
#line 204 "demangle.m"
              }
#line 204 "demangle.m"
          }
#line 204 "demangle.m"
      }
#line 204 "demangle.m"
    return demangle__succeeded;
#line 204 "demangle.m"
  }
#line 202 "demangle.m"
}

#line 100 "demangle.m"
static MR_bool MR_CALL 
demangle__demangle_proc_ll_2_p_0(
#line 100 "demangle.m"
  MR_String demangle__DCG_0_19,
#line 100 "demangle.m"
  MR_String * demangle__DCG_20_39)
#line 100 "demangle.m"
{
#line 102 "demangle.m"
  {
#line 102 "demangle.m"
    MR_bool demangle__succeeded;
#line 102 "demangle.m"
    MR_String demangle__PredOrFunc_3;
#line 102 "demangle.m"
    MR_Integer demangle__Int_4;
#line 102 "demangle.m"
    MR_Word demangle__MaybeInternalLabelNum_5;
#line 102 "demangle.m"
    MR_Integer demangle__ModeNum0_6;
#line 102 "demangle.m"
    MR_Integer demangle__Arity_7;
#line 102 "demangle.m"
    MR_Word demangle__Category0_8;
#line 102 "demangle.m"
    MR_Word demangle__UnusedArgs_9;
#line 102 "demangle.m"
    MR_Integer demangle__ModeNum1_10;
#line 102 "demangle.m"
    MR_Word demangle__HigherOrder_11;
#line 102 "demangle.m"
    MR_Integer demangle__ModeNum_12;
#line 102 "demangle.m"
    MR_Word demangle__MaybeModule_14;
#line 102 "demangle.m"
    MR_String demangle__PredName_15;
#line 102 "demangle.m"
    MR_Word demangle__Category_16;
#line 102 "demangle.m"
    MR_Word demangle__Parts_17;
#line 102 "demangle.m"
    MR_String demangle__DemangledName_18;
#line 102 "demangle.m"
    MR_String demangle__DCG_1_20;
#line 102 "demangle.m"
    MR_String demangle__DCG_3_22;
#line 102 "demangle.m"
    MR_String demangle__DCG_4_23;
#line 102 "demangle.m"
    MR_String demangle__DCG_7_26;
#line 102 "demangle.m"
    MR_String demangle__DCG_8_27;
#line 102 "demangle.m"
    MR_String demangle__DCG_9_28;
#line 102 "demangle.m"
    MR_String demangle__DCG_10_29;
#line 102 "demangle.m"
    MR_String demangle__DCG_11_30;
#line 102 "demangle.m"
    MR_String demangle__DCG_12_31;
#line 102 "demangle.m"
    MR_String demangle__DCG_13_32;
#line 102 "demangle.m"
    MR_String demangle__DCG_14_33;
#line 102 "demangle.m"
    MR_String demangle__DCG_15_34;
#line 102 "demangle.m"
    MR_String demangle__DCG_18_37;
#line 102 "demangle.m"
    MR_String demangle__V_44_44;
#line 102 "demangle.m"
    MR_String demangle__V_45_45;
#line 102 "demangle.m"
    MR_Word demangle__V_70_70;
#line 110 "demangle.m"
    MR_String demangle__DCG_2_21;
#line 108 "demangle.m"
    MR_String demangle__V_41_41;
#line 129 "demangle.m"
    MR_String demangle__DCG_5_24;
#line 120 "demangle.m"
    MR_String demangle__V_42_42;
#line 416 "demangle.m"
    MR_String demangle__DCG_1_89;
#line 414 "demangle.m"
    MR_String demangle__V_94_94;
#line 167 "demangle.m"
    MR_Word demangle__V_13_13;
#line 191 "demangle.m"
    MR_String demangle__DCG_19_38;
#line 200 "demangle.m"
    MR_Box demangle__conv0_DCG_20_39;

#line 103 "demangle.m"
    {
#line 103 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__DCG_0_19, &demangle__DCG_1_20);
    }
#line 102 "demangle.m"
    if (demangle__succeeded)
#line 102 "demangle.m"
      {
#line 108 "demangle.m"
        demangle__V_41_41 = (MR_String) "fn__";
#line 108 "demangle.m"
        {
#line 108 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_41_41, demangle__DCG_1_20, &demangle__DCG_2_21);
        }
#line 110 "demangle.m"
        if (demangle__succeeded)
#line 110 "demangle.m"
          {
#line 109 "demangle.m"
            demangle__PredOrFunc_3 = (MR_String) "function";
#line 110 "demangle.m"
            demangle__DCG_3_22 = demangle__DCG_2_21;
#line 110 "demangle.m"
          }
#line 110 "demangle.m"
        else
#line 110 "demangle.m"
          {
#line 111 "demangle.m"
            demangle__PredOrFunc_3 = (MR_String) "predicate";
#line 110 "demangle.m"
            demangle__DCG_3_22 = demangle__DCG_1_20;
#line 110 "demangle.m"
          }
#line 118 "demangle.m"
        {
#line 118 "demangle.m"
          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Int_4, demangle__DCG_3_22, &demangle__DCG_4_23);
        }
#line 102 "demangle.m"
        if (demangle__succeeded)
#line 102 "demangle.m"
          {
#line 120 "demangle.m"
            demangle__V_42_42 = (MR_String) "i";
#line 919 "demangle.m"
            {
#line 919 "demangle.m"
              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_4_23, demangle__V_42_42, &demangle__DCG_5_24);
            }
#line 129 "demangle.m"
            if (demangle__succeeded)
#line 126 "demangle.m"
              {
#line 126 "demangle.m"
                MR_String demangle__DCG_6_25;

#line 126 "demangle.m"
                {
#line 126 "demangle.m"
                  demangle__MaybeInternalLabelNum_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 126 "demangle.m"
                  MR_hl_field(MR_mktag(1), demangle__MaybeInternalLabelNum_5, 0) = ((MR_Box) (demangle__Int_4));
#line 126 "demangle.m"
                }
#line 919 "demangle.m"
                {
#line 919 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_5_24, (MR_String) "_", &demangle__DCG_6_25);
                }
#line 126 "demangle.m"
                if (demangle__succeeded)
#line 128 "demangle.m"
                  {
#line 128 "demangle.m"
                    demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__ModeNum0_6, demangle__DCG_6_25, &demangle__DCG_7_26);
                  }
#line 126 "demangle.m"
              }
#line 129 "demangle.m"
            else
#line 129 "demangle.m"
              {
#line 130 "demangle.m"
                demangle__MaybeInternalLabelNum_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 131 "demangle.m"
                demangle__ModeNum0_6 = demangle__Int_4;
#line 129 "demangle.m"
                demangle__DCG_7_26 = demangle__DCG_4_23;
#line 129 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 129 "demangle.m"
              }
#line 102 "demangle.m"
            if (demangle__succeeded)
#line 102 "demangle.m"
              {
#line 137 "demangle.m"
                demangle__V_44_44 = (MR_String) "_";
#line 919 "demangle.m"
                {
#line 919 "demangle.m"
                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_7_26, demangle__V_44_44, &demangle__DCG_8_27);
                }
#line 102 "demangle.m"
                if (demangle__succeeded)
#line 102 "demangle.m"
                  {
#line 138 "demangle.m"
                    {
#line 138 "demangle.m"
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_7, demangle__DCG_8_27, &demangle__DCG_9_28);
                    }
#line 102 "demangle.m"
                    if (demangle__succeeded)
#line 102 "demangle.m"
                      {
#line 139 "demangle.m"
                        demangle__V_45_45 = (MR_String) "_";
#line 919 "demangle.m"
                        {
#line 919 "demangle.m"
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_9_28, demangle__V_45_45, &demangle__DCG_10_29);
                        }
#line 102 "demangle.m"
                        if (demangle__succeeded)
#line 102 "demangle.m"
                          {
#line 414 "demangle.m"
                            demangle__V_94_94 = (MR_String) "__Unify__";
#line 414 "demangle.m"
                            {
#line 414 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_94_94, demangle__DCG_10_29, &demangle__DCG_1_89);
                            }
#line 416 "demangle.m"
                            if (demangle__succeeded)
#line 416 "demangle.m"
                              {
#line 415 "demangle.m"
                                demangle__Category0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 416 "demangle.m"
                                demangle__DCG_11_30 = demangle__DCG_1_89;
#line 416 "demangle.m"
                                demangle__succeeded = MR_TRUE;
#line 416 "demangle.m"
                              }
#line 416 "demangle.m"
                            else
#line 420 "demangle.m"
                              {
#line 420 "demangle.m"
                                MR_String demangle__DCG_3_91;

#line 416 "demangle.m"
                                {
#line 416 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Compare__", demangle__DCG_10_29, &demangle__DCG_3_91);
                                }
#line 420 "demangle.m"
                                if (demangle__succeeded)
#line 420 "demangle.m"
                                  {
#line 419 "demangle.m"
                                    demangle__succeeded = (demangle__ModeNum0_6 == (MR_Integer) 0);
#line 420 "demangle.m"
                                    if (demangle__succeeded)
#line 420 "demangle.m"
                                      {
#line 417 "demangle.m"
                                        demangle__Category0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 420 "demangle.m"
                                        demangle__DCG_11_30 = demangle__DCG_3_91;
#line 420 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 420 "demangle.m"
                                      }
#line 420 "demangle.m"
                                  }
#line 420 "demangle.m"
                                else
#line 424 "demangle.m"
                                  {
#line 424 "demangle.m"
                                    MR_String demangle__DCG_5_93;

#line 420 "demangle.m"
                                    {
#line 420 "demangle.m"
                                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "__Index__", demangle__DCG_10_29, &demangle__DCG_5_93);
                                    }
#line 424 "demangle.m"
                                    if (demangle__succeeded)
#line 424 "demangle.m"
                                      {
#line 423 "demangle.m"
                                        demangle__succeeded = (demangle__ModeNum0_6 == (MR_Integer) 0);
#line 424 "demangle.m"
                                        if (demangle__succeeded)
#line 424 "demangle.m"
                                          {
#line 421 "demangle.m"
                                            demangle__Category0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 424 "demangle.m"
                                            demangle__DCG_11_30 = demangle__DCG_5_93;
#line 424 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 424 "demangle.m"
                                          }
#line 424 "demangle.m"
                                      }
#line 424 "demangle.m"
                                    else
#line 424 "demangle.m"
                                      {
#line 425 "demangle.m"
                                        demangle__Category0_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 424 "demangle.m"
                                        demangle__DCG_11_30 = demangle__DCG_10_29;
#line 424 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 424 "demangle.m"
                                      }
#line 424 "demangle.m"
                                  }
#line 420 "demangle.m"
                              }
#line 102 "demangle.m"
                            if (demangle__succeeded)
#line 102 "demangle.m"
                              {
#line 153 "demangle.m"
                                {
#line 153 "demangle.m"
                                  demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__DCG_11_30, &demangle__DCG_12_31);
                                }
#line 102 "demangle.m"
                                if (demangle__succeeded)
#line 102 "demangle.m"
                                  {
#line 161 "demangle.m"
                                    {
#line 161 "demangle.m"
                                      demangle__demangle_unused_args_5_p_0(&demangle__UnusedArgs_9, demangle__ModeNum0_6, &demangle__ModeNum1_10, demangle__DCG_12_31, &demangle__DCG_13_32);
                                    }
#line 162 "demangle.m"
                                    {
#line 162 "demangle.m"
                                      demangle__demangle_higher_order_5_p_0(&demangle__HigherOrder_11, demangle__ModeNum1_10, &demangle__ModeNum_12, demangle__DCG_13_32, &demangle__DCG_14_33);
                                    }
#line 167 "demangle.m"
                                    demangle__succeeded = ((MR_tag((MR_Word) demangle__UnusedArgs_9)) == (MR_mktag((MR_Integer) 1)));
#line 167 "demangle.m"
                                    if (demangle__succeeded)
#line 167 "demangle.m"
                                      {
#line 167 "demangle.m"
                                        demangle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), demangle__UnusedArgs_9, (MR_Integer) 0)));
#line 167 "demangle.m"
                                        demangle__succeeded = (demangle__Category0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 167 "demangle.m"
                                        demangle__succeeded = !(demangle__succeeded);
#line 167 "demangle.m"
                                      }
#line 169 "demangle.m"
                                    if (demangle__succeeded)
#line 168 "demangle.m"
                                      {
#line 168 "demangle.m"
                                        MR_Integer demangle__V_72_72;

#line 168 "demangle.m"
                                        {
#line 168 "demangle.m"
                                          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__V_72_72, demangle__DCG_14_33, &demangle__DCG_15_34);
                                        }
#line 168 "demangle.m"
                                        if (demangle__succeeded)
#line 168 "demangle.m"
                                          demangle__succeeded = (demangle__Arity_7 == demangle__V_72_72);
#line 168 "demangle.m"
                                      }
#line 169 "demangle.m"
                                    else
#line 169 "demangle.m"
                                      {
#line 169 "demangle.m"
                                        demangle__DCG_15_34 = demangle__DCG_14_33;
#line 169 "demangle.m"
                                        demangle__succeeded = MR_TRUE;
#line 169 "demangle.m"
                                      }
#line 102 "demangle.m"
                                    if (demangle__succeeded)
#line 102 "demangle.m"
                                      {
#line 177 "demangle.m"
                                        demangle__succeeded = (demangle__Category0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 177 "demangle.m"
                                        demangle__succeeded = !(demangle__succeeded);
#line 183 "demangle.m"
                                        if (demangle__succeeded)
#line 178 "demangle.m"
                                          {
#line 178 "demangle.m"
                                            MR_String demangle__DCG_16_35;
#line 178 "demangle.m"
                                            MR_Word demangle__V_47_47;
#line 182 "demangle.m"
                                            MR_String demangle__V_58_58;

#line 178 "demangle.m"
                                            {
#line 178 "demangle.m"
                                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", demangle__DCG_15_34, &demangle__DCG_16_35);
                                            }
#line 178 "demangle.m"
                                            if (demangle__succeeded)
#line 178 "demangle.m"
                                              {
#line 179 "demangle.m"
                                                demangle__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]);
#line 179 "demangle.m"
                                                {
#line 179 "demangle.m"
                                                  demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule_14, demangle__V_47_47, demangle__DCG_16_35, &demangle__DCG_18_37);
                                                }
#line 182 "demangle.m"
                                                demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule_14)) == (MR_mktag((MR_Integer) 1)));
#line 182 "demangle.m"
                                                if (demangle__succeeded)
#line 182 "demangle.m"
                                                  {
#line 182 "demangle.m"
                                                    demangle__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule_14, (MR_Integer) 0)));
#line 182 "demangle.m"
                                                    demangle__succeeded = (strcmp(demangle__V_58_58, (MR_String) "") == 0);
#line 182 "demangle.m"
                                                  }
#line 182 "demangle.m"
                                                demangle__succeeded = !(demangle__succeeded);
#line 178 "demangle.m"
                                              }
#line 178 "demangle.m"
                                          }
#line 183 "demangle.m"
                                        else
#line 184 "demangle.m"
                                          {
#line 184 "demangle.m"
                                            {
#line 184 "demangle.m"
                                              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule_14, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[4]), demangle__DCG_15_34, &demangle__DCG_18_37);
                                            }
#line 184 "demangle.m"
                                            demangle__succeeded = MR_TRUE;
#line 184 "demangle.m"
                                          }
#line 102 "demangle.m"
                                        if (demangle__succeeded)
#line 102 "demangle.m"
                                          {
#line 191 "demangle.m"
                                            {
#line 191 "demangle.m"
                                              demangle__succeeded = demangle__handle_category_etc_5_p_0(&demangle__PredName_15, demangle__Category0_8, &demangle__Category_16, demangle__DCG_18_37, &demangle__DCG_19_38);
                                            }
#line 102 "demangle.m"
                                            if (demangle__succeeded)
#line 102 "demangle.m"
                                              {
#line 198 "demangle.m"
                                                demangle__V_70_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 196 "demangle.m"
                                                {
#line 196 "demangle.m"
                                                  demangle__format_proc_11_p_0(demangle__Category_16, demangle__MaybeModule_14, demangle__PredOrFunc_3, demangle__PredName_15, demangle__Arity_7, demangle__ModeNum_12, demangle__HigherOrder_11, demangle__UnusedArgs_9, demangle__MaybeInternalLabelNum_5, &demangle__Parts_17, demangle__V_70_70);
                                                }
#line 199 "demangle.m"
                                                {
#line 199 "demangle.m"
                                                  mercury__string__append_list_2_p_0(demangle__Parts_17, &demangle__DemangledName_18);
                                                }
#line 200 "demangle.m"
                                                {
#line 200 "demangle.m"
                                                  demangle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_99_103_95_115_101_116_95_95_91_49_44_32_50_44_32_52_93_95_48_3_p_0(((MR_Box) (demangle__DemangledName_18)), &demangle__conv0_DCG_20_39);
                                                }
#line 200 "demangle.m"
                                                *demangle__DCG_20_39 = ((MR_String) demangle__conv0_DCG_20_39);
#line 200 "demangle.m"
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
  MR_String demangle__DCG_0_3,
#line 83 "demangle.m"
  MR_String * demangle__DCG_8_11)
#line 83 "demangle.m"
{
#line 88 "demangle.m"
  {
#line 88 "demangle.m"
    MR_bool demangle__succeeded;
#line 88 "demangle.m"
    MR_String demangle__DCG_1_4;

#line 86 "demangle.m"
    {
#line 86 "demangle.m"
      demangle__succeeded = demangle__demangle_proc_hl_2_p_0(demangle__DCG_0_3, &demangle__DCG_1_4);
    }
#line 88 "demangle.m"
    if (demangle__succeeded)
#line 88 "demangle.m"
      {
#line 88 "demangle.m"
        *demangle__DCG_8_11 = demangle__DCG_1_4;
#line 88 "demangle.m"
        demangle__succeeded = MR_TRUE;
#line 88 "demangle.m"
      }
#line 88 "demangle.m"
    else
#line 90 "demangle.m"
      {
#line 90 "demangle.m"
        MR_String demangle__DCG_3_6;

#line 88 "demangle.m"
        {
#line 88 "demangle.m"
          demangle__succeeded = demangle__demangle_proc_ll_2_p_0(demangle__DCG_0_3, &demangle__DCG_3_6);
        }
#line 90 "demangle.m"
        if (demangle__succeeded)
#line 90 "demangle.m"
          {
#line 90 "demangle.m"
            *demangle__DCG_8_11 = demangle__DCG_3_6;
#line 90 "demangle.m"
            demangle__succeeded = MR_TRUE;
#line 90 "demangle.m"
          }
#line 90 "demangle.m"
        else
#line 92 "demangle.m"
          {
#line 92 "demangle.m"
            MR_String demangle__DCG_5_8;
#line 602 "demangle.m"
            MR_Word demangle__HighLevel_14;
#line 602 "demangle.m"
            MR_Word demangle__MaybeModule0_15;
#line 602 "demangle.m"
            MR_Word demangle__MaybeModule_16;
#line 602 "demangle.m"
            MR_Word demangle__DataCategory_19;
#line 602 "demangle.m"
            MR_Integer demangle__Arity_20;
#line 602 "demangle.m"
            MR_String demangle__Name_21;
#line 602 "demangle.m"
            MR_String demangle__DCG_3_25;
#line 602 "demangle.m"
            MR_String demangle__DCG_4_26;
#line 602 "demangle.m"
            MR_String demangle__DCG_15_37;
#line 606 "demangle.m"
            MR_String demangle__DCG_1_23;
#line 614 "demangle.m"
            MR_String demangle__V_50_50;
#line 632 "demangle.m"
            MR_String demangle__DCG_5_27;
#line 628 "demangle.m"
            MR_String demangle__V_57_57;

#line 603 "demangle.m"
            {
#line 603 "demangle.m"
              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury_data_", demangle__DCG_0_3, &demangle__DCG_1_23);
            }
#line 606 "demangle.m"
            if (demangle__succeeded)
#line 606 "demangle.m"
              {
#line 605 "demangle.m"
                demangle__HighLevel_14 = (MR_Integer) 0;
#line 606 "demangle.m"
                demangle__DCG_3_25 = demangle__DCG_1_23;
#line 606 "demangle.m"
              }
#line 606 "demangle.m"
            else
#line 608 "demangle.m"
              {
#line 914 "demangle.m"
                MR_String demangle__DCG_1_70;

#line 608 "demangle.m"
                demangle__HighLevel_14 = (MR_Integer) 1;
#line 914 "demangle.m"
                {
#line 914 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "mercury__", demangle__DCG_0_3, &demangle__DCG_1_70);
                }
#line 914 "demangle.m"
                if (demangle__succeeded)
#line 914 "demangle.m"
                  demangle__DCG_3_25 = demangle__DCG_1_70;
#line 914 "demangle.m"
                else
#line 914 "demangle.m"
                  demangle__DCG_3_25 = demangle__DCG_0_3;
#line 608 "demangle.m"
              }
#line 611 "demangle.m"
            {
#line 611 "demangle.m"
              demangle__remove_maybe_module_prefix_4_p_0(&demangle__MaybeModule0_15, (MR_Word) MR_mkword(MR_mktag(1), &demangle_scalar_common_1[14]), demangle__DCG_3_25, &demangle__DCG_4_26);
            }
#line 614 "demangle.m"
            demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
#line 614 "demangle.m"
            if (demangle__succeeded)
#line 614 "demangle.m"
              {
#line 614 "demangle.m"
                demangle__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_15, (MR_Integer) 0)));
#line 614 "demangle.m"
                demangle__succeeded = (strcmp(demangle__V_50_50, (MR_String) "") == 0);
#line 614 "demangle.m"
              }
#line 616 "demangle.m"
            if (demangle__succeeded)
#line 615 "demangle.m"
              {
#line 615 "demangle.m"
                demangle__MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 615 "demangle.m"
              }
#line 616 "demangle.m"
            else
#line 625 "demangle.m"
              {
#line 625 "demangle.m"
                MR_String demangle__Twice_17;

#line 619 "demangle.m"
                demangle__succeeded = (demangle__HighLevel_14 == (MR_Integer) 1);
#line 619 "demangle.m"
                if (demangle__succeeded)
#line 619 "demangle.m"
                  {
#line 620 "demangle.m"
                    demangle__succeeded = ((MR_tag((MR_Word) demangle__MaybeModule0_15)) == (MR_mktag((MR_Integer) 1)));
#line 620 "demangle.m"
                    if (demangle__succeeded)
#line 620 "demangle.m"
                      demangle__Twice_17 = ((MR_String) (MR_hl_field(MR_mktag(1), demangle__MaybeModule0_15, (MR_Integer) 0)));
#line 619 "demangle.m"
                  }
#line 625 "demangle.m"
                if (demangle__succeeded)
#line 622 "demangle.m"
                  {
#line 622 "demangle.m"
                    MR_String demangle__Once_18;
#line 622 "demangle.m"
                    MR_Integer demangle__V_51_51;
#line 622 "demangle.m"
                    MR_Integer demangle__V_52_52;
#line 622 "demangle.m"
                    MR_Integer demangle__V_54_54;
#line 622 "demangle.m"
                    MR_Integer demangle__V_55_55;
#line 622 "demangle.m"
                    MR_String demangle__V_66_66;

#line 622 "demangle.m"
                    {
#line 622 "demangle.m"
                      demangle__V_52_52 = mercury__string__length_1_f_0(demangle__Twice_17);
                    }
#line 622 "demangle.m"
                    {
#line 622 "demangle.m"
                      demangle__V_51_51 = mercury__int__f_47_47_2_f_0(demangle__V_52_52, (MR_Integer) 2);
                    }
#line 622 "demangle.m"
                    {
#line 622 "demangle.m"
                      demangle__Once_18 = mercury__string__left_2_f_0(demangle__Twice_17, demangle__V_51_51);
                    }
#line 623 "demangle.m"
                    {
#line 623 "demangle.m"
                      demangle__V_55_55 = mercury__string__length_1_f_0(demangle__Twice_17);
                    }
#line 623 "demangle.m"
                    {
#line 623 "demangle.m"
                      demangle__V_54_54 = mercury__int__f_47_47_2_f_0(demangle__V_55_55, (MR_Integer) 2);
                    }
#line 623 "demangle.m"
                    {
#line 623 "demangle.m"
                      demangle__V_66_66 = mercury__string__right_2_f_0(demangle__Twice_17, demangle__V_54_54);
                    }
#line 623 "demangle.m"
                    demangle__succeeded = (strcmp(demangle__Once_18, demangle__V_66_66) == 0);
#line 622 "demangle.m"
                    if (demangle__succeeded)
#line 622 "demangle.m"
                      {
#line 624 "demangle.m"
                        {
#line 624 "demangle.m"
                          demangle__MaybeModule_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 624 "demangle.m"
                          MR_hl_field(MR_mktag(1), demangle__MaybeModule_16, 0) = ((MR_Box) (demangle__Once_18));
#line 624 "demangle.m"
                        }
#line 624 "demangle.m"
                        demangle__succeeded = MR_TRUE;
#line 622 "demangle.m"
                      }
#line 622 "demangle.m"
                  }
#line 625 "demangle.m"
                else
#line 626 "demangle.m"
                  {
#line 626 "demangle.m"
                    demangle__MaybeModule_16 = demangle__MaybeModule0_15;
#line 626 "demangle.m"
                    demangle__succeeded = MR_TRUE;
#line 626 "demangle.m"
                  }
#line 625 "demangle.m"
              }
#line 602 "demangle.m"
            if (demangle__succeeded)
#line 602 "demangle.m"
              {
#line 628 "demangle.m"
                demangle__V_57_57 = (MR_String) "type_ctor_info_";
#line 628 "demangle.m"
                {
#line 628 "demangle.m"
                  demangle__succeeded = mercury__string__remove_prefix_3_p_0(demangle__V_57_57, demangle__DCG_4_26, &demangle__DCG_5_27);
                }
#line 632 "demangle.m"
                if (demangle__succeeded)
#line 629 "demangle.m"
                  {
#line 629 "demangle.m"
                    MR_String demangle__DCG_6_28;
#line 629 "demangle.m"
                    MR_String demangle__V_58_58;

#line 629 "demangle.m"
                    demangle__DataCategory_19 = (MR_Integer) 1;
#line 630 "demangle.m"
                    {
#line 630 "demangle.m"
                      demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__DCG_5_27, &demangle__DCG_6_28);
                    }
#line 629 "demangle.m"
                    if (demangle__succeeded)
#line 629 "demangle.m"
                      {
#line 631 "demangle.m"
                        demangle__V_58_58 = (MR_String) "_";
#line 919 "demangle.m"
                        {
#line 919 "demangle.m"
                          demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_6_28, demangle__V_58_58, &demangle__DCG_15_37);
                        }
#line 629 "demangle.m"
                      }
#line 629 "demangle.m"
                  }
#line 632 "demangle.m"
                else
#line 636 "demangle.m"
                  {
#line 636 "demangle.m"
                    MR_String demangle__DCG_8_30;

#line 632 "demangle.m"
                    {
#line 632 "demangle.m"
                      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_layout_", demangle__DCG_4_26, &demangle__DCG_8_30);
                    }
#line 636 "demangle.m"
                    if (demangle__succeeded)
#line 633 "demangle.m"
                      {
#line 633 "demangle.m"
                        MR_String demangle__DCG_9_31;
#line 633 "demangle.m"
                        MR_String demangle__V_60_60;

#line 633 "demangle.m"
                        demangle__DataCategory_19 = (MR_Integer) 2;
#line 634 "demangle.m"
                        {
#line 634 "demangle.m"
                          demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__DCG_8_30, &demangle__DCG_9_31);
                        }
#line 633 "demangle.m"
                        if (demangle__succeeded)
#line 633 "demangle.m"
                          {
#line 635 "demangle.m"
                            demangle__V_60_60 = (MR_String) "_";
#line 919 "demangle.m"
                            {
#line 919 "demangle.m"
                              demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_9_31, demangle__V_60_60, &demangle__DCG_15_37);
                            }
#line 633 "demangle.m"
                          }
#line 633 "demangle.m"
                      }
#line 636 "demangle.m"
                    else
#line 640 "demangle.m"
                      {
#line 640 "demangle.m"
                        MR_String demangle__DCG_11_33;

#line 636 "demangle.m"
                        {
#line 636 "demangle.m"
                          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "type_ctor_functors_", demangle__DCG_4_26, &demangle__DCG_11_33);
                        }
#line 640 "demangle.m"
                        if (demangle__succeeded)
#line 637 "demangle.m"
                          {
#line 637 "demangle.m"
                            MR_String demangle__DCG_12_34;
#line 637 "demangle.m"
                            MR_String demangle__V_62_62;

#line 637 "demangle.m"
                            demangle__DataCategory_19 = (MR_Integer) 3;
#line 638 "demangle.m"
                            {
#line 638 "demangle.m"
                              demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__DCG_11_33, &demangle__DCG_12_34);
                            }
#line 637 "demangle.m"
                            if (demangle__succeeded)
#line 637 "demangle.m"
                              {
#line 639 "demangle.m"
                                demangle__V_62_62 = (MR_String) "_";
#line 919 "demangle.m"
                                {
#line 919 "demangle.m"
                                  demangle__succeeded = mercury__string__remove_suffix_3_p_0(demangle__DCG_12_34, demangle__V_62_62, &demangle__DCG_15_37);
                                }
#line 637 "demangle.m"
                              }
#line 637 "demangle.m"
                          }
#line 640 "demangle.m"
                        else
#line 643 "demangle.m"
                          {
#line 643 "demangle.m"
                            MR_String demangle__DCG_14_36;

#line 640 "demangle.m"
                            {
#line 640 "demangle.m"
                              demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "common_", demangle__DCG_4_26, &demangle__DCG_14_36);
                            }
#line 643 "demangle.m"
                            if (demangle__succeeded)
#line 643 "demangle.m"
                              {
#line 641 "demangle.m"
                                demangle__DataCategory_19 = (MR_Integer) 0;
#line 642 "demangle.m"
                                {
#line 642 "demangle.m"
                                  demangle__succeeded = demangle__remove_trailing_int_3_p_0(&demangle__Arity_20, demangle__DCG_14_36, &demangle__DCG_15_37);
                                }
#line 643 "demangle.m"
                              }
#line 643 "demangle.m"
                          }
#line 640 "demangle.m"
                      }
#line 636 "demangle.m"
                  }
#line 602 "demangle.m"
                if (demangle__succeeded)
#line 602 "demangle.m"
                  {
#line 647 "demangle.m"
                    {
#line 647 "demangle.m"
                      demangle__succeeded = demangle__fix_mangled_ascii_2_p_0(demangle__DCG_15_37, &demangle__Name_21);
                    }
#line 602 "demangle.m"
                    if (demangle__succeeded)
#line 650 "demangle.m"
                      {
#line 650 "demangle.m"
                        demangle__succeeded = demangle__format_data_5_p_0(demangle__DataCategory_19, demangle__MaybeModule_16, demangle__Name_21, demangle__Arity_20, &demangle__DCG_5_8);
                      }
#line 602 "demangle.m"
                  }
#line 602 "demangle.m"
              }
#line 92 "demangle.m"
            if (demangle__succeeded)
#line 92 "demangle.m"
              {
#line 92 "demangle.m"
                *demangle__DCG_8_11 = demangle__DCG_5_8;
#line 92 "demangle.m"
                demangle__succeeded = MR_TRUE;
#line 92 "demangle.m"
              }
#line 92 "demangle.m"
            else
#line 92 "demangle.m"
              {
#line 92 "demangle.m"
                return demangle__succeeded = demangle__demangle_typeclass_info_2_p_0(demangle__DCG_0_3, demangle__DCG_8_11);
              }
#line 92 "demangle.m"
          }
#line 90 "demangle.m"
      }
#line 88 "demangle.m"
    return demangle__succeeded;
#line 88 "demangle.m"
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
#line 66 "demangle.m"
  {
#line 66 "demangle.m"
    MR_bool demangle__succeeded;
#line 66 "demangle.m"
    MR_String demangle__DemangledName_5;
#line 72 "demangle.m"
    MR_String demangle__DCG_4_11;
#line 77 "demangle.m"
    MR_String demangle__DCG_1_8;

#line 75 "demangle.m"
    {
#line 75 "demangle.m"
      demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", demangle__MangledName_3, &demangle__DCG_1_8);
    }
#line 77 "demangle.m"
    if (demangle__succeeded)
#line 76 "demangle.m"
      demangle__DCG_4_11 = demangle__DCG_1_8;
#line 77 "demangle.m"
    else
#line 78 "demangle.m"
      {
#line 78 "demangle.m"
        MR_String demangle__DCG_3_10;
#line 914 "demangle.m"
        MR_String demangle__DCG_1_18;
#line 914 "demangle.m"
        MR_String demangle__DCG_1_23;

#line 914 "demangle.m"
        {
#line 914 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_", demangle__MangledName_3, &demangle__DCG_1_18);
        }
#line 914 "demangle.m"
        if (demangle__succeeded)
#line 914 "demangle.m"
          demangle__DCG_3_10 = demangle__DCG_1_18;
#line 914 "demangle.m"
        else
#line 914 "demangle.m"
          demangle__DCG_3_10 = demangle__MangledName_3;
#line 914 "demangle.m"
        {
#line 914 "demangle.m"
          demangle__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_entry_", demangle__DCG_3_10, &demangle__DCG_1_23);
        }
#line 914 "demangle.m"
        if (demangle__succeeded)
#line 914 "demangle.m"
          demangle__DCG_4_11 = demangle__DCG_1_23;
#line 914 "demangle.m"
        else
#line 914 "demangle.m"
          demangle__DCG_4_11 = demangle__DCG_3_10;
#line 78 "demangle.m"
      }
#line 81 "demangle.m"
    {
#line 81 "demangle.m"
      demangle__succeeded = demangle__demangle_from_c_2_p_0(demangle__DCG_4_11, &demangle__DemangledName_5);
    }
#line 66 "demangle.m"
    if (demangle__succeeded)
#line 65 "demangle.m"
      *demangle__Name_4 = demangle__DemangledName_5;
#line 66 "demangle.m"
    else
#line 67 "demangle.m"
      *demangle__Name_4 = demangle__MangledName_3;
#line 66 "demangle.m"
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
