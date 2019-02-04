/*
** Automatically generated from `char.m'
** by the Mercury compiler,
** version rotd-2011-08-21, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__char__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "char.c"
#include "char.mh"

#line 28 "char.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "char.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "char.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "char.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "char.c"
#line 33 "array.int2"
#include "array.mh"

#line 48 "char.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 52 "char.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 56 "char.c"
#line 57 "array.opt"
#include "store.mh"

#line 60 "char.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "char.c"
#line 156 "io.opt"
#include "dir.mh"

#line 68 "char.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 72 "char.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "char.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "char.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "char.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "char.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "char.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "char.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "char.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "char.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 108 "char.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "char.c"
#line 113 "char.c"
#ifndef CHAR_DECL_GUARD
#define CHAR_DECL_GUARD

#line 117 "char.c"
#line 634 "char.m"
#include <limits.h>
#line 120 "char.c"
#line 121 "char.c"

#endif
#line 124 "char.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_BaseTypeclassInfo
	mercury_data_base_typeclass_info_enum__enum__arity1__character__arity0__[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_char__type_ctor_info_char_0;
MR_decl_label1(char__det_from_int_2_0, 2)
MR_decl_label2(char__det_int_to_digit_2_0, 3,2)
MR_decl_label2(char__digit_to_int_2_0, 4,2)
MR_decl_label1(char__from_int_2_0, 1)
MR_decl_label10(char__int_to_digit_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(char__int_to_digit_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(char__int_to_digit_2_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label6(char__int_to_digit_2_0, 33,34,35,36,37,1)
MR_decl_label10(char__int_to_digit_2_1, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(char__int_to_digit_2_1, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(char__int_to_digit_2_1, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label6(char__int_to_digit_2_1, 33,34,35,36,37,1)
MR_decl_label10(char__int_to_hex_char_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label6(char__int_to_hex_char_2_0, 13,14,15,16,17,1)
MR_decl_label4(char__is_alnum_1_0, 6,8,24,2)
MR_decl_label1(char__is_alnum_or_underscore_1_0, 2)
MR_decl_label2(char__is_alpha_1_0, 4,8)
MR_decl_label2(char__is_alpha_or_underscore_1_0, 6,11)
MR_decl_label1(char__is_binary_digit_1_0, 2)
MR_decl_label1(char__is_digit_1_0, 2)
MR_decl_label10(char__is_hex_digit_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(char__is_hex_digit_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label2(char__is_hex_digit_2_0, 23,1)
MR_decl_label2(char__is_noncharacter_1_0, 3,2)
MR_decl_label1(char__is_octal_digit_1_0, 2)
MR_decl_label1(char__is_surrogate_1_0, 1)
MR_decl_label1(char__is_whitespace_1_0, 2)
MR_decl_label10(char__lower_upper_2_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(char__lower_upper_2_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label6(char__lower_upper_2_0, 23,24,25,26,27,1)
MR_decl_label10(char__lower_upper_2_1, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(char__lower_upper_2_1, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label6(char__lower_upper_2_1, 23,24,25,26,27,1)
MR_decl_label1(char__to_int_2_1, 1)
MR_decl_label1(char__to_int_2_2, 1)
MR_decl_label2(char__to_lower_2_0, 4,2)
MR_decl_label2(char__to_upper_2_0, 4,2)
MR_decl_label5(char__to_utf16_2_0, 2,14,4,5,7)
MR_decl_label10(char__to_utf8_2_0, 2,5,4,30,66,11,12,8,16,17)
MR_decl_label1(char__to_utf8_2_0, 18)
MR_decl_label1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0, 1)
MR_decl_label1(fn__char__char_to_doc_1_0, 2)
MR_decl_label1(fn__char__det_from_int_1_0, 2)
MR_decl_label2(fn__char__det_int_to_digit_1_0, 3,2)
MR_decl_label2(fn__char__to_lower_1_0, 4,2)
MR_decl_label2(fn__char__to_upper_1_0, 4,2)
MR_decl_label2(__Compare___char__char_0_0, 2,3)
MR_def_extern_entry(char__to_int_2_0)
MR_def_extern_entry(char__to_int_2_1)
MR_def_extern_entry(char__to_int_2_2)
MR_def_extern_entry(fn__char__to_int_1_0)
MR_def_extern_entry(char__from_int_2_0)
MR_def_extern_entry(char__det_from_int_2_0)
MR_def_extern_entry(fn__char__det_from_int_1_0)
MR_def_extern_entry(char__max_char_value_1_0)
MR_def_extern_entry(fn__char__max_char_value_0_0)
MR_def_extern_entry(char__min_char_value_1_0)
MR_def_extern_entry(fn__char__min_char_value_0_0)
MR_def_extern_entry(char__lower_upper_2_0)
MR_def_extern_entry(char__lower_upper_2_1)
MR_def_extern_entry(char__to_upper_2_0)
MR_def_extern_entry(fn__char__to_upper_1_0)
MR_def_extern_entry(char__to_lower_2_0)
MR_def_extern_entry(fn__char__to_lower_1_0)
MR_def_extern_entry(char__is_whitespace_1_0)
MR_def_extern_entry(char__is_upper_1_0)
MR_def_extern_entry(char__is_lower_1_0)
MR_def_extern_entry(char__is_alpha_1_0)
MR_def_extern_entry(char__is_digit_1_0)
MR_def_extern_entry(char__is_alnum_1_0)
MR_def_extern_entry(char__is_alpha_or_underscore_1_0)
MR_def_extern_entry(char__is_alnum_or_underscore_1_0)
MR_def_extern_entry(char__is_binary_digit_1_0)
MR_def_extern_entry(char__is_octal_digit_1_0)
MR_def_extern_entry(char__is_hex_digit_2_0)
MR_def_extern_entry(char__is_hex_digit_1_0)
MR_def_extern_entry(char__int_to_hex_char_2_0)
MR_def_extern_entry(char__int_to_digit_2_0)
MR_def_extern_entry(char__int_to_digit_2_1)
MR_def_extern_entry(char__digit_to_int_2_0)
MR_def_extern_entry(char__det_int_to_digit_2_0)
MR_def_extern_entry(fn__char__det_int_to_digit_1_0)
MR_def_extern_entry(fn__char__char_to_doc_1_0)
MR_def_extern_entry(char__is_surrogate_1_0)
MR_def_extern_entry(char__to_utf8_2_0)
MR_def_extern_entry(char__to_utf16_2_0)
MR_def_extern_entry(char__is_noncharacter_1_0)
MR_def_extern_entry(__Unify___char__char_0_0)
MR_def_extern_entry(__Compare___char__char_0_0)
MR_def_extern_entry(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0)
MR_def_extern_entry(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0)
MR_decl_static(fn__f_99_104_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;

const MR_TypeCtorInfo_Struct mercury_data_char__type_ctor_info_char_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___char__char_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___char__char_0_0)),
	"char",
	"char",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_character_0 },
	-1,
	0,
	NULL
};

const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_enum__enum__arity1__character__arity0__[] = {
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 0,
	(MR_Code *) 1,
	(MR_Code *) 2,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0))
};




MR_BEGIN_MODULE(char_module0)
	MR_init_entry1(char__to_int_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__to_int_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_int_2_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 284 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module1)
	MR_init_entry1(char__to_int_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__to_int_2_1);
	MR_init_label1(char__to_int_2_1,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_int'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_int_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_int_2_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Character = MR_r1;
	Int = MR_r2;
{
#line 548 "char.m"

    SUCCESS_INDICATOR = ((MR_UnsignedChar) Character == Int);
;}
#line 324 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__to_int_2_1_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__to_int_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module2)
	MR_init_entry1(char__to_int_2_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__to_int_2_2);
	MR_init_label1(char__to_int_2_2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_int'/2 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_int_2_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_int_2_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 556 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 371 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__to_int_2_2_i1);
	MR_r2 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__to_int_2_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module3)
	MR_init_entry1(fn__char__to_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__to_int_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__to_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__to_int_1_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 414 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module4)
	MR_init_entry1(char__from_int_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__from_int_2_0);
	MR_init_label1(char__from_int_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__from_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__from_int_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 556 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 454 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__from_int_2_0_i1);
	MR_r2 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__from_int_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(char_module5)
	MR_init_entry1(char__det_from_int_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__det_from_int_2_0);
	MR_init_label1(char__det_from_int_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_from_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__det_from_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__det_from_int_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 556 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 503 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(char__det_from_int_2_0_i2);
	MR_r1 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(char__det_from_int_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.det_from_int: conversion failed", 36);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module6)
	MR_init_entry1(fn__char__det_from_int_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__det_from_int_1_0);
	MR_init_label1(fn__char__det_from_int_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_from_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__det_from_int_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__det_from_int_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 556 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 550 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__char__det_from_int_1_0_i2);
	MR_r1 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__char__det_from_int_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.det_from_int: conversion failed", 36);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module7)
	MR_init_entry1(char__max_char_value_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__max_char_value_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_char_value'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__max_char_value_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__char__max_char_value_1_0
{
#line 643 "char.m"

    Max = 0x10ffff;
;}
#line 590 "char.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module8)
	MR_init_entry1(fn__char__max_char_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__max_char_value_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max_char_value'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__max_char_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Max;
#define	MR_PROC_LABEL	mercury__fn__char__max_char_value_0_0
{
#line 643 "char.m"

    Max = 0x10ffff;
;}
#line 623 "char.c"
	MR_r1 = Max;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module9)
	MR_init_entry1(char__min_char_value_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__min_char_value_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min_char_value'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__min_char_value_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module10)
	MR_init_entry1(fn__char__min_char_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__min_char_value_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'min_char_value'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__min_char_value_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module11)
	MR_init_entry1(char__lower_upper_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__lower_upper_2_0);
	MR_init_label10(char__lower_upper_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(char__lower_upper_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label6(char__lower_upper_2_0,23,24,25,26,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lower_upper'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__lower_upper_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,97)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i3);
	}
	MR_r2 = (MR_Integer) 65;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i4);
	}
	MR_r2 = (MR_Integer) 66;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,99)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i5);
	}
	MR_r2 = (MR_Integer) 67;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i6);
	}
	MR_r2 = (MR_Integer) 68;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i7);
	}
	MR_r2 = (MR_Integer) 69;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i8);
	}
	MR_r2 = (MR_Integer) 70;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,103)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i9);
	}
	MR_r2 = (MR_Integer) 71;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,104)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i10);
	}
	MR_r2 = (MR_Integer) 72;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,105)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i11);
	}
	MR_r2 = (MR_Integer) 73;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,106)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i12);
	}
	MR_r2 = (MR_Integer) 74;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,107)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i13);
	}
	MR_r2 = (MR_Integer) 75;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,108)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i14);
	}
	MR_r2 = (MR_Integer) 76;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,109)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i15);
	}
	MR_r2 = (MR_Integer) 77;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,110)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i16);
	}
	MR_r2 = (MR_Integer) 78;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,111)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i17);
	}
	MR_r2 = (MR_Integer) 79;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,112)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i18);
	}
	MR_r2 = (MR_Integer) 80;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,113)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i19);
	}
	MR_r2 = (MR_Integer) 81;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,114)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i20);
	}
	MR_r2 = (MR_Integer) 82;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,115)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i21);
	}
	MR_r2 = (MR_Integer) 83;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,116)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i22);
	}
	MR_r2 = (MR_Integer) 84;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,117)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i23);
	}
	MR_r2 = (MR_Integer) 85;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,118)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i24);
	}
	MR_r2 = (MR_Integer) 86;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,119)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i25);
	}
	MR_r2 = (MR_Integer) 87;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,120)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i26);
	}
	MR_r2 = (MR_Integer) 88;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,121)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i27);
	}
	MR_r2 = (MR_Integer) 89;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,122)) {
		MR_GOTO_LAB(char__lower_upper_2_0_i1);
	}
	MR_r2 = (MR_Integer) 90;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module12)
	MR_init_entry1(char__lower_upper_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__lower_upper_2_1);
	MR_init_label10(char__lower_upper_2_1,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(char__lower_upper_2_1,13,14,15,16,17,18,19,20,21,22)
	MR_init_label6(char__lower_upper_2_1,23,24,25,26,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lower_upper'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__lower_upper_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,65)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i3);
	}
	MR_r2 = (MR_Integer) 97;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,66)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i4);
	}
	MR_r2 = (MR_Integer) 98;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,67)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i5);
	}
	MR_r2 = (MR_Integer) 99;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i6);
	}
	MR_r2 = (MR_Integer) 100;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i7);
	}
	MR_r2 = (MR_Integer) 101;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,70)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i8);
	}
	MR_r2 = (MR_Integer) 102;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,71)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i9);
	}
	MR_r2 = (MR_Integer) 103;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,72)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i10);
	}
	MR_r2 = (MR_Integer) 104;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,73)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i11);
	}
	MR_r2 = (MR_Integer) 105;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,74)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i12);
	}
	MR_r2 = (MR_Integer) 106;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,75)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i13);
	}
	MR_r2 = (MR_Integer) 107;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,76)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i14);
	}
	MR_r2 = (MR_Integer) 108;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,77)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i15);
	}
	MR_r2 = (MR_Integer) 109;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,78)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i16);
	}
	MR_r2 = (MR_Integer) 110;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,79)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i17);
	}
	MR_r2 = (MR_Integer) 111;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,80)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i18);
	}
	MR_r2 = (MR_Integer) 112;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,81)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i19);
	}
	MR_r2 = (MR_Integer) 113;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,82)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i20);
	}
	MR_r2 = (MR_Integer) 114;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,83)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i21);
	}
	MR_r2 = (MR_Integer) 115;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,84)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i22);
	}
	MR_r2 = (MR_Integer) 116;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,85)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i23);
	}
	MR_r2 = (MR_Integer) 117;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i24);
	}
	MR_r2 = (MR_Integer) 118;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,87)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i25);
	}
	MR_r2 = (MR_Integer) 119;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,88)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i26);
	}
	MR_r2 = (MR_Integer) 120;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,89)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i27);
	}
	MR_r2 = (MR_Integer) 121;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,90)) {
		MR_GOTO_LAB(char__lower_upper_2_1_i1);
	}
	MR_r2 = (MR_Integer) 122;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__lower_upper_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module13)
	MR_init_entry1(char__to_upper_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__to_upper_2_0);
	MR_init_label2(char__to_upper_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_upper'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_upper_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__to_upper_2_0_i4);
MR_def_label(char__to_upper_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__to_upper_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(char__to_upper_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module14)
	MR_init_entry1(fn__char__to_upper_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__to_upper_1_0);
	MR_init_label2(fn__char__to_upper_1_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_upper'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__to_upper_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		fn__char__to_upper_1_0_i4);
MR_def_label(fn__char__to_upper_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__char__to_upper_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__char__to_upper_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module15)
	MR_init_entry1(char__to_lower_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__to_lower_2_0);
	MR_init_label2(char__to_lower_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_lower'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_lower_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_1,
		char__to_lower_2_0_i4);
MR_def_label(char__to_lower_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__to_lower_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(char__to_lower_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module16)
	MR_init_entry1(fn__char__to_lower_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__to_lower_1_0);
	MR_init_label2(fn__char__to_lower_1_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_lower'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__to_lower_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_1,
		fn__char__to_lower_1_0_i4);
MR_def_label(fn__char__to_lower_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__char__to_lower_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__char__to_lower_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module17)
	MR_init_entry1(char__is_whitespace_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_whitespace_1_0);
	MR_init_label1(char__is_whitespace_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_whitespace'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_whitespace_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,9)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,10)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,11)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,12)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,13)) {
		MR_GOTO_LAB(char__is_whitespace_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 32);
	MR_proceed();
MR_def_label(char__is_whitespace_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module18)
	MR_init_entry1(char__is_upper_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_upper_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_upper'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_upper_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(char__lower_upper_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module19)
	MR_init_entry1(char__is_lower_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_lower_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_lower'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_lower_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(char__lower_upper_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module20)
	MR_init_entry1(char__is_alpha_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_alpha_1_0);
	MR_init_label2(char__is_alpha_1_0,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_alpha'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alpha_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__is_alpha_1_0_i4);
MR_def_label(char__is_alpha_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(char__is_alpha_1_0_i8);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__lower_upper_2_1);
MR_def_label(char__is_alpha_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module21)
	MR_init_entry1(char__is_digit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_digit_1_0);
	MR_init_label1(char__is_digit_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_digit'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,48)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,49)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,50)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,51)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,52)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,53)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,54)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,55)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,56)) {
		MR_GOTO_LAB(char__is_digit_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 57);
	MR_proceed();
MR_def_label(char__is_digit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module22)
	MR_init_entry1(char__is_alnum_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_alnum_1_0);
	MR_init_label4(char__is_alnum_1_0,6,8,24,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_alnum'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alnum_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__is_alnum_1_0_i6);
MR_def_label(char__is_alnum_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(char__lower_upper_2_1,
		char__is_alnum_1_0_i8);
MR_def_label(char__is_alnum_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i2);
	}
MR_def_label(char__is_alnum_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_alnum_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	if (MR_INT_EQ(MR_r1,48)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,49)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,50)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,51)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,52)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,53)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,54)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,55)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	if (MR_INT_EQ(MR_r1,56)) {
		MR_GOTO_LAB(char__is_alnum_1_0_i24);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 57);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module23)
	MR_init_entry1(char__is_alpha_or_underscore_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_alpha_or_underscore_1_0);
	MR_init_label2(char__is_alpha_or_underscore_1_0,6,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_alpha_or_underscore'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alpha_or_underscore_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_INT_EQ(MR_r1,95)) {
		MR_GOTO_LAB(char__is_alpha_or_underscore_1_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__is_alpha_or_underscore_1_0_i6);
MR_def_label(char__is_alpha_or_underscore_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(char__is_alpha_or_underscore_1_0_i11);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__lower_upper_2_1);
MR_def_label(char__is_alpha_or_underscore_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module24)
	MR_init_entry1(char__is_alnum_or_underscore_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_alnum_or_underscore_1_0);
	MR_init_label1(char__is_alnum_or_underscore_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_alnum_or_underscore'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_alnum_or_underscore_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,48)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,49)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,50)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,51)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,52)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,53)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,54)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,55)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,56)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,57)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,65)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,66)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,67)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,68)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,69)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,70)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,71)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,72)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,73)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,74)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,75)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,76)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,77)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,78)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,79)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,80)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,81)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,82)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,83)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,84)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,85)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,86)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,87)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,88)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,89)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,90)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,95)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,97)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,98)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,99)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,100)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,101)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,102)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,103)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,104)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,105)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,106)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,107)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,108)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,109)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,110)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,111)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,112)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,113)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,114)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,115)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,116)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,117)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,118)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,119)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,120)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,121)) {
		MR_GOTO_LAB(char__is_alnum_or_underscore_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 122);
	MR_proceed();
MR_def_label(char__is_alnum_or_underscore_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module25)
	MR_init_entry1(char__is_binary_digit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_binary_digit_1_0);
	MR_init_label1(char__is_binary_digit_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_binary_digit'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_binary_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,48)) {
		MR_GOTO_LAB(char__is_binary_digit_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 49);
	MR_proceed();
MR_def_label(char__is_binary_digit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module26)
	MR_init_entry1(char__is_octal_digit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_octal_digit_1_0);
	MR_init_label1(char__is_octal_digit_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_octal_digit'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_octal_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,48)) {
		MR_GOTO_LAB(char__is_octal_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,49)) {
		MR_GOTO_LAB(char__is_octal_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,50)) {
		MR_GOTO_LAB(char__is_octal_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,51)) {
		MR_GOTO_LAB(char__is_octal_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,52)) {
		MR_GOTO_LAB(char__is_octal_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,53)) {
		MR_GOTO_LAB(char__is_octal_digit_1_0_i2);
	}
	if (MR_INT_EQ(MR_r1,54)) {
		MR_GOTO_LAB(char__is_octal_digit_1_0_i2);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 55);
	MR_proceed();
MR_def_label(char__is_octal_digit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module27)
	MR_init_entry1(char__is_hex_digit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_hex_digit_2_0);
	MR_init_label10(char__is_hex_digit_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(char__is_hex_digit_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label2(char__is_hex_digit_2_0,23,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_hex_digit'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_hex_digit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,49)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,50)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,51)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i6);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,52)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i7);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,53)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i8);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,54)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i9);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,55)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i10);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,56)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i11);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,57)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i12);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,65)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i13);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,66)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i14);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,67)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i15);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i16);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i17);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,70)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i18);
	}
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,97)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i19);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,98)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i20);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,99)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i21);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,100)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i22);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,101)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i23);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,102)) {
		MR_GOTO_LAB(char__is_hex_digit_2_0_i1);
	}
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__is_hex_digit_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module28)
	MR_init_entry1(char__is_hex_digit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_hex_digit_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_hex_digit'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_hex_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(char__is_hex_digit_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module29)
	MR_init_entry1(char__int_to_hex_char_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__int_to_hex_char_2_0);
	MR_init_label10(char__int_to_hex_char_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label6(char__int_to_hex_char_2_0,13,14,15,16,17,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_to_hex_char'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__int_to_hex_char_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i3);
	}
	MR_r2 = (MR_Integer) 48;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i4);
	}
	MR_r2 = (MR_Integer) 49;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i5);
	}
	MR_r2 = (MR_Integer) 50;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i6);
	}
	MR_r2 = (MR_Integer) 51;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i7);
	}
	MR_r2 = (MR_Integer) 52;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i8);
	}
	MR_r2 = (MR_Integer) 53;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i9);
	}
	MR_r2 = (MR_Integer) 54;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i10);
	}
	MR_r2 = (MR_Integer) 55;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i11);
	}
	MR_r2 = (MR_Integer) 56;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i12);
	}
	MR_r2 = (MR_Integer) 57;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i13);
	}
	MR_r2 = (MR_Integer) 65;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i14);
	}
	MR_r2 = (MR_Integer) 66;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i15);
	}
	MR_r2 = (MR_Integer) 67;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i16);
	}
	MR_r2 = (MR_Integer) 68;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i17);
	}
	MR_r2 = (MR_Integer) 69;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(char__int_to_hex_char_2_0_i1);
	}
	MR_r2 = (MR_Integer) 70;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_hex_char_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module30)
	MR_init_entry1(char__int_to_digit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__int_to_digit_2_0);
	MR_init_label10(char__int_to_digit_2_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(char__int_to_digit_2_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(char__int_to_digit_2_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label6(char__int_to_digit_2_0,33,34,35,36,37,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_to_digit'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__int_to_digit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i3);
	}
	MR_r2 = (MR_Integer) 48;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i4);
	}
	MR_r2 = (MR_Integer) 49;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i5);
	}
	MR_r2 = (MR_Integer) 50;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i6);
	}
	MR_r2 = (MR_Integer) 51;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i7);
	}
	MR_r2 = (MR_Integer) 52;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i8);
	}
	MR_r2 = (MR_Integer) 53;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i9);
	}
	MR_r2 = (MR_Integer) 54;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i10);
	}
	MR_r2 = (MR_Integer) 55;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i11);
	}
	MR_r2 = (MR_Integer) 56;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i12);
	}
	MR_r2 = (MR_Integer) 57;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i13);
	}
	MR_r2 = (MR_Integer) 65;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i14);
	}
	MR_r2 = (MR_Integer) 66;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i15);
	}
	MR_r2 = (MR_Integer) 67;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i16);
	}
	MR_r2 = (MR_Integer) 68;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i17);
	}
	MR_r2 = (MR_Integer) 69;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i18);
	}
	MR_r2 = (MR_Integer) 70;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,16)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i19);
	}
	MR_r2 = (MR_Integer) 71;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,17)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i20);
	}
	MR_r2 = (MR_Integer) 72;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,18)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i21);
	}
	MR_r2 = (MR_Integer) 73;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,19)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i22);
	}
	MR_r2 = (MR_Integer) 74;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,20)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i23);
	}
	MR_r2 = (MR_Integer) 75;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,21)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i24);
	}
	MR_r2 = (MR_Integer) 76;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,22)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i25);
	}
	MR_r2 = (MR_Integer) 77;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,23)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i26);
	}
	MR_r2 = (MR_Integer) 78;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,24)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i27);
	}
	MR_r2 = (MR_Integer) 79;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,25)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i28);
	}
	MR_r2 = (MR_Integer) 80;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,26)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i29);
	}
	MR_r2 = (MR_Integer) 81;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,27)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i30);
	}
	MR_r2 = (MR_Integer) 82;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,28)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i31);
	}
	MR_r2 = (MR_Integer) 83;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,29)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i32);
	}
	MR_r2 = (MR_Integer) 84;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,30)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i33);
	}
	MR_r2 = (MR_Integer) 85;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,31)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i34);
	}
	MR_r2 = (MR_Integer) 86;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,32)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i35);
	}
	MR_r2 = (MR_Integer) 87;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,33)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i36);
	}
	MR_r2 = (MR_Integer) 88;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,34)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i37);
	}
	MR_r2 = (MR_Integer) 89;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,35)) {
		MR_GOTO_LAB(char__int_to_digit_2_0_i1);
	}
	MR_r2 = (MR_Integer) 90;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module31)
	MR_init_entry1(char__int_to_digit_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__int_to_digit_2_1);
	MR_init_label10(char__int_to_digit_2_1,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(char__int_to_digit_2_1,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(char__int_to_digit_2_1,23,24,25,26,27,28,29,30,31,32)
	MR_init_label6(char__int_to_digit_2_1,33,34,35,36,37,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'int_to_digit'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__int_to_digit_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,48)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i3);
	}
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,49)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i4);
	}
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,50)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i5);
	}
	MR_r2 = (MR_Integer) 2;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,51)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i6);
	}
	MR_r2 = (MR_Integer) 3;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,52)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i7);
	}
	MR_r2 = (MR_Integer) 4;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,53)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i8);
	}
	MR_r2 = (MR_Integer) 5;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,54)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i9);
	}
	MR_r2 = (MR_Integer) 6;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,55)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i10);
	}
	MR_r2 = (MR_Integer) 7;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,56)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i11);
	}
	MR_r2 = (MR_Integer) 8;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,57)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i12);
	}
	MR_r2 = (MR_Integer) 9;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,65)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i13);
	}
	MR_r2 = (MR_Integer) 10;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,66)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i14);
	}
	MR_r2 = (MR_Integer) 11;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,67)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i15);
	}
	MR_r2 = (MR_Integer) 12;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,68)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i16);
	}
	MR_r2 = (MR_Integer) 13;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,69)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i17);
	}
	MR_r2 = (MR_Integer) 14;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,70)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i18);
	}
	MR_r2 = (MR_Integer) 15;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,71)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i19);
	}
	MR_r2 = (MR_Integer) 16;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,72)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i20);
	}
	MR_r2 = (MR_Integer) 17;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,73)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i21);
	}
	MR_r2 = (MR_Integer) 18;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,74)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i22);
	}
	MR_r2 = (MR_Integer) 19;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,75)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i23);
	}
	MR_r2 = (MR_Integer) 20;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,76)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i24);
	}
	MR_r2 = (MR_Integer) 21;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,77)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i25);
	}
	MR_r2 = (MR_Integer) 22;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,78)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i26);
	}
	MR_r2 = (MR_Integer) 23;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,79)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i27);
	}
	MR_r2 = (MR_Integer) 24;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,80)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i28);
	}
	MR_r2 = (MR_Integer) 25;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,81)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i29);
	}
	MR_r2 = (MR_Integer) 26;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,82)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i30);
	}
	MR_r2 = (MR_Integer) 27;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,83)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i31);
	}
	MR_r2 = (MR_Integer) 28;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,84)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i32);
	}
	MR_r2 = (MR_Integer) 29;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,85)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i33);
	}
	MR_r2 = (MR_Integer) 30;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,86)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i34);
	}
	MR_r2 = (MR_Integer) 31;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,87)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i35);
	}
	MR_r2 = (MR_Integer) 32;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,88)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i36);
	}
	MR_r2 = (MR_Integer) 33;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,89)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i37);
	}
	MR_r2 = (MR_Integer) 34;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,90)) {
		MR_GOTO_LAB(char__int_to_digit_2_1_i1);
	}
	MR_r2 = (MR_Integer) 35;
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__int_to_digit_2_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module32)
	MR_init_entry1(char__digit_to_int_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__digit_to_int_2_0);
	MR_init_label2(char__digit_to_int_2_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'digit_to_int'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__digit_to_int_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__lower_upper_2_0,
		char__digit_to_int_2_0_i4);
MR_def_label(char__digit_to_int_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__digit_to_int_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__int_to_digit_2_1);
MR_def_label(char__digit_to_int_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(char__int_to_digit_2_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module33)
	MR_init_entry1(char__det_int_to_digit_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__det_int_to_digit_2_0);
	MR_init_label2(char__det_int_to_digit_2_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_int_to_digit'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__det_int_to_digit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(char__int_to_digit_2_0,
		char__det_int_to_digit_2_0_i3);
MR_def_label(char__det_int_to_digit_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(char__det_int_to_digit_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(char__det_int_to_digit_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.int_to_digit failed", 24);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module34)
	MR_init_entry1(fn__char__det_int_to_digit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__det_int_to_digit_1_0);
	MR_init_label2(fn__char__det_int_to_digit_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'det_int_to_digit'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__det_int_to_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(char__int_to_digit_2_0,
		fn__char__det_int_to_digit_1_0_i3);
MR_def_label(fn__char__det_int_to_digit_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__char__det_int_to_digit_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(fn__char__det_int_to_digit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char.int_to_digit failed", 24);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term_io__quoted_char_1_0);

MR_BEGIN_MODULE(char_module35)
	MR_init_entry1(fn__char__char_to_doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__char_to_doc_1_0);
	MR_init_label1(fn__char__char_to_doc_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'char_to_doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__char_to_doc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__term_io__quoted_char_1_0,
		fn__char__char_to_doc_1_0_i2);
MR_def_label(fn__char__char_to_doc_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module36)
	MR_init_entry1(char__is_surrogate_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_surrogate_1_0);
	MR_init_label1(char__is_surrogate_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_surrogate'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_surrogate_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__is_surrogate_1_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3059 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_r1,55296)) {
		MR_GOTO_LAB(char__is_surrogate_1_0_i1);
	}
	MR_r1 = ((MR_Integer) MR_r1 <= (MR_Integer) 57343);
	MR_proceed();
MR_def_label(char__is_surrogate_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_62_62_2_0);

MR_BEGIN_MODULE(char_module37)
	MR_init_entry1(char__to_utf8_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__to_utf8_2_0);
	MR_init_label10(char__to_utf8_2_0,2,5,4,30,66,11,12,8,16,17)
	MR_init_label1(char__to_utf8_2_0,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_utf8'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_utf8_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_utf8_2_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3107 "char.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_INT_GT(MR_tempr1,127)) {
		MR_GOTO_LAB(char__to_utf8_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__to_utf8_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r3,2047)) {
		MR_GOTO_LAB(char__to_utf8_2_0_i4);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 6;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		char__to_utf8_2_0_i5);
MR_def_label(char__to_utf8_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 128 | ((MR_Integer) MR_sv(2) & (MR_Integer) 63));
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = ((MR_Integer) 192 | ((MR_Integer) MR_r1 & (MR_Integer) 31));
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(char__to_utf8_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r3,65535)) {
		MR_GOTO_LAB(char__to_utf8_2_0_i8);
	}
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_utf8_2_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3167 "char.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_LT(MR_tempr1,55296)) {
		MR_GOTO_LAB(char__to_utf8_2_0_i66);
	}
	if (MR_INT_GT(MR_tempr1,57343)) {
		MR_GOTO_LAB(char__to_utf8_2_0_i66);
	}
	}
MR_def_label(char__to_utf8_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(char__to_utf8_2_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 12;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		char__to_utf8_2_0_i11);
MR_def_label(char__to_utf8_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 224 | ((MR_Integer) MR_r1 & (MR_Integer) 15));
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		char__to_utf8_2_0_i12);
MR_def_label(char__to_utf8_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 128 | ((MR_Integer) MR_sv(2) & (MR_Integer) 63));
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) 128 | ((MR_Integer) MR_r1 & (MR_Integer) 63));
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(char__to_utf8_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r3,1114111)) {
		MR_GOTO_LAB(char__to_utf8_2_0_i30);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 18;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		char__to_utf8_2_0_i16);
MR_def_label(char__to_utf8_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = ((MR_Integer) 240 | ((MR_Integer) MR_r1 & (MR_Integer) 7));
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 12;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		char__to_utf8_2_0_i17);
MR_def_label(char__to_utf8_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) 128 | ((MR_Integer) MR_r1 & (MR_Integer) 63));
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 6;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		char__to_utf8_2_0_i18);
MR_def_label(char__to_utf8_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 128 | ((MR_Integer) MR_sv(2) & (MR_Integer) 63));
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = ((MR_Integer) 128 | ((MR_Integer) MR_r1 & (MR_Integer) 63));
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module38)
	MR_init_entry1(char__to_utf16_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__to_utf16_2_0);
	MR_init_label5(char__to_utf16_2_0,2,14,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_utf16'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__to_utf16_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__to_utf16_2_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3300 "char.c"
	MR_tempr1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_INT_GE(MR_tempr1,55296)) {
		MR_GOTO_LAB(char__to_utf16_2_0_i2);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(char__to_utf16_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r3,57343)) {
		MR_GOTO_LAB(char__to_utf16_2_0_i4);
	}
MR_def_label(char__to_utf16_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(char__to_utf16_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r3,65535)) {
		MR_GOTO_LAB(char__to_utf16_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r3;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(char__to_utf16_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r3,1114111)) {
		MR_GOTO_LAB(char__to_utf16_2_0_i14);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = ((MR_Integer) MR_r3 - (MR_Integer) 65536);
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 10;
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_62_62_2_0,
		char__to_utf16_2_0_i7);
MR_def_label(char__to_utf16_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = ((MR_Integer) 56320 | ((MR_Integer) MR_sv(1) & (MR_Integer) 1023));
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = ((MR_Integer) 55296 | (MR_Integer) MR_r1);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module39)
	MR_init_entry1(char__is_noncharacter_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__char__is_noncharacter_1_0);
	MR_init_label2(char__is_noncharacter_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_noncharacter'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__char__is_noncharacter_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__char__is_noncharacter_1_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3389 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) 64976 > (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(char__is_noncharacter_1_0_i3);
	}
	if (MR_INT_LE(MR_r1,65007)) {
		MR_GOTO_LAB(char__is_noncharacter_1_0_i2);
	}
MR_def_label(char__is_noncharacter_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = ((MR_Integer) MR_r1 & (MR_Integer) 65534);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 65534);
	MR_proceed();
MR_def_label(char__is_noncharacter_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module40)
	MR_init_entry1(__Unify___char__char_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___char__char_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___char__char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module41)
	MR_init_entry1(__Compare___char__char_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___char__char_0_0);
	MR_init_label2(__Compare___char__char_0_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___char__char_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury____Compare___char__char_0_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3461 "char.c"
	MR_r3 = Int;
#undef	MR_PROC_LABEL
	}
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury____Compare___char__char_0_0
	Character = MR_r2;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3475 "char.c"
	MR_r2 = Int;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___char__char_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___char__char_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___char__char_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___char__char_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module42)
	MR_init_entry1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____character__arity0______enum__to_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0
	Character = MR_r1;
{
#line 537 "char.m"

    Int = (MR_UnsignedChar) Character;
;}
#line 3525 "char.c"
	MR_r1 = Int;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module43)
	MR_init_entry1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0);
	MR_init_label1(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ClassMethod_for_enum__enum____character__arity0______enum__from_int_1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Char	Character;
	MR_Integer	Int;
#define	MR_PROC_LABEL	mercury__fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Int = MR_r1;
{
#line 556 "char.m"

    Character = Int;
    SUCCESS_INDICATOR = (Character >= 0 && Character <= 0x10ffff);
;}
#line 3565 "char.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0_i1);
	MR_r2 = (MR_UnsignedChar) Character;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(char_module44)
	MR_init_entry1(fn__f_99_104_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_99_104_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_99_104_97_114_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__char_maybe_bunch_0(void)
{
	char_module0();
	char_module1();
	char_module2();
	char_module3();
	char_module4();
	char_module5();
	char_module6();
	char_module7();
	char_module8();
	char_module9();
	char_module10();
	char_module11();
	char_module12();
	char_module13();
	char_module14();
	char_module15();
	char_module16();
	char_module17();
	char_module18();
	char_module19();
	char_module20();
	char_module21();
	char_module22();
	char_module23();
	char_module24();
	char_module25();
	char_module26();
	char_module27();
	char_module28();
	char_module29();
	char_module30();
	char_module31();
	char_module32();
	char_module33();
	char_module34();
	char_module35();
	char_module36();
	char_module37();
	char_module38();
	char_module39();
}

static void mercury__char_maybe_bunch_1(void)
{
	char_module40();
	char_module41();
	char_module42();
	char_module43();
	char_module44();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__char__init(void);
void mercury__char__init_type_tables(void);
void mercury__char__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__char__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__char__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__char__init_threadscope_string_table(void);
#endif

void mercury__char__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__char_maybe_bunch_0();
	mercury__char_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_char__type_ctor_info_char_0,
		char__char_0_0);
#ifndef MR_STATIC_CODE_ADDRESSES
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__character__arity0__, 5) =
			MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__to_int_1_1_0);
		MR_field(MR_mktag(0), mercury_data_base_typeclass_info_enum__enum__arity1__character__arity0__, 6) =
			MR_ENTRY_AP(fn__char__ClassMethod_for_enum__enum____character__arity0______enum__from_int_1_1_0);
#endif /* MR_STATIC_CODE_ADDRESSES */
	mercury__char__init_debugger();
}

void mercury__char__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_char__type_ctor_info_char_0);
	}
}


void mercury__char__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__char__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__char);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__char__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__char__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
