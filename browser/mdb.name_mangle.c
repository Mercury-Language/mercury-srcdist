/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__mdb__name_mangle__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdb.name_mangle.c"
#include "mdb.name_mangle.mh"

#line 27 "mdb.name_mangle.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 31 "mdb.name_mangle.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 35 "mdb.name_mangle.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 39 "mdb.name_mangle.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "mdb.name_mangle.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "mdb.name_mangle.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 51 "mdb.name_mangle.c"
#line 52 "mdb.name_mangle.c"
#ifndef MDB__NAME_MANGLE_DECL_GUARD
#define MDB__NAME_MANGLE_DECL_GUARD

#line 56 "mdb.name_mangle.c"
#line 57 "mdb.name_mangle.c"

#endif
#line 60 "mdb.name_mangle.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[32];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_String f1[4];
	MR_Integer f2[6];
	MR_String f3[5];
	MR_Integer f4[11];
	MR_String f5;
	MR_Integer f6;
	MR_String f7[2];
	MR_Integer f8;
	MR_String f9;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0,
	mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0,
	mercury_data_mdb__name_mangle__type_ctor_info_module_name_0,
	mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0,
	mercury_data_mdb__name_mangle__type_ctor_info_mercury_proc_0,
	mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
	mercury_data_mdb__name_mangle__type_ctor_info_arity_0;
MR_decl_label6(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0, 4,6,7,8,9,2)
MR_decl_label1(mdb__name_mangle__high_level_code_0_0, 1)
MR_decl_label8(mdb__name_mangle__name_mangle_2_0, 4,7,6,2,13,36,15,16)
MR_decl_label8(mdb__name_mangle__name_mangle_2_0, 17,18,19,20,21,22,23,24)
MR_decl_label5(mdb__name_mangle__name_mangle_2_0, 25,26,27,28,29)
MR_decl_label3(mdb__name_mangle__sym_name_mangle_2_0, 4,5,3)
MR_decl_label1(mdb__name_mangle__use_asm_labels_0_0, 1)
MR_decl_label8(fn__mdb__name_mangle__proc_name_mangle_1_0, 6,7,11,13,15,16,17,3)
MR_decl_label8(fn__mdb__name_mangle__proc_name_mangle_1_0, 19,23,21,29,30,31,32,33)
MR_decl_label4(fn__mdb__name_mangle__proc_name_mangle_1_0, 54,35,37,44)
MR_decl_label3(__Unify___mdb__name_mangle__mercury_proc_0_0, 4,6,1)
MR_decl_label4(__Unify___mdb__name_mangle__sym_name_0_0, 7,15,5,1)
MR_decl_label7(__Compare___mdb__name_mangle__mercury_proc_0_0, 3,2,5,9,13,17,45)
MR_decl_label7(__Compare___mdb__name_mangle__sym_name_0_0, 3,2,9,7,5,15,45)
MR_decl_static(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0)
MR_decl_static(mdb__name_mangle__name_mangle_2_0)
MR_decl_static(mdb__name_mangle__sym_name_mangle_2_0)
MR_decl_static(mdb__name_mangle__use_asm_labels_0_0)
MR_decl_static(mdb__name_mangle__high_level_code_0_0)
MR_def_extern_entry(fn__mdb__name_mangle__proc_name_mangle_1_0)
MR_def_extern_entry(__Unify___mdb__name_mangle__arity_0_0)
MR_def_extern_entry(__Compare___mdb__name_mangle__arity_0_0)
MR_def_extern_entry(__Unify___mdb__name_mangle__is_pred_or_func_0_0)
MR_def_extern_entry(__Compare___mdb__name_mangle__is_pred_or_func_0_0)
MR_def_extern_entry(__Unify___mdb__name_mangle__mercury_proc_0_0)
MR_def_extern_entry(__Compare___mdb__name_mangle__mercury_proc_0_0)
MR_def_extern_entry(__Unify___mdb__name_mangle__mode_num_0_0)
MR_def_extern_entry(__Compare___mdb__name_mangle__mode_num_0_0)
MR_def_extern_entry(__Unify___mdb__name_mangle__module_name_0_0)
MR_def_extern_entry(__Compare___mdb__name_mangle__module_name_0_0)
MR_def_extern_entry(__Unify___mdb__name_mangle__pred_name_0_0)
MR_def_extern_entry(__Compare___mdb__name_mangle__pred_name_0_0)
MR_def_extern_entry(__Unify___mdb__name_mangle__sym_name_0_0)
MR_def_extern_entry(__Compare___mdb__name_mangle__sym_name_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
-1,
-1,
-1,
2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-1,
-1,
-1,
-1,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-2,
-1,
-2,
-1,
-1,
-2,
-1
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_string_const("!", 1),
MR_string_const(">=", 2),
MR_string_const("=<", 2),
MR_string_const("\\=", 2)
},
{
0,
0,
0,
0,
0,
0
},
{
MR_string_const("+", 1),
MR_string_const("*", 1),
MR_string_const("-", 1),
MR_string_const(",", 1),
MR_string_const("/", 1)
},
{
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0
},
MR_string_const(";", 1),
0,
{
MR_string_const("=", 1),
MR_string_const("<", 1)
},
0,
MR_string_const(">", 1)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_mdb__name_mangle__field_types_sym_name_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__name_mangle__du_functor_desc_sym_name_0_0 = {
	"qualified",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__name_mangle__field_types_sym_name_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__name_mangle__field_types_sym_name_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__name_mangle__du_functor_desc_sym_name_0_1 = {
	"unqualified",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__name_mangle__field_types_sym_name_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__name_mangle__du_stag_ordered_sym_name_0_0[] = {
	&mercury_data_mdb__name_mangle__du_functor_desc_sym_name_0_0

};

const MR_DuFunctorDescPtr mercury_data_mdb__name_mangle__du_stag_ordered_sym_name_0_1[] = {
	&mercury_data_mdb__name_mangle__du_functor_desc_sym_name_0_1

};

const MR_DuPtagLayout mercury_data_mdb__name_mangle__du_ptag_ordered_sym_name_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__name_mangle__du_stag_ordered_sym_name_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__name_mangle__du_stag_ordered_sym_name_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__name_mangle__du_name_ordered_sym_name_0[] = {
	&mercury_data_mdb__name_mangle__du_functor_desc_sym_name_0_0,
	&mercury_data_mdb__name_mangle__du_functor_desc_sym_name_0_1
};

const MR_Integer mercury_data_mdb__name_mangle__functor_number_map_sym_name_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__name_mangle__sym_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__name_mangle__sym_name_0_0)),
	"mdb.name_mangle",
	"sym_name",
	{ (void *)mercury_data_mdb__name_mangle__du_name_ordered_sym_name_0 },
	{ (void *)mercury_data_mdb__name_mangle__du_ptag_ordered_sym_name_0 },
	2,
	4,
	mercury_data_mdb__name_mangle__functor_number_map_sym_name_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__name_mangle__pred_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__name_mangle__pred_name_0_0)),
	"mdb.name_mangle",
	"pred_name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_module_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__name_mangle__module_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__name_mangle__module_name_0_0)),
	"mdb.name_mangle",
	"module_name",
	{ 0 },
	{ (void *)&mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__name_mangle__mode_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__name_mangle__mode_num_0_0)),
	"mdb.name_mangle",
	"mode_num",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0;

const MR_PseudoTypeInfo mercury_data_mdb__name_mangle__field_types_mercury_proc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdb__name_mangle__du_functor_desc_mercury_proc_0_0 = {
	"mercury_proc",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__name_mangle__field_types_mercury_proc_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__name_mangle__du_stag_ordered_mercury_proc_0_0[] = {
	&mercury_data_mdb__name_mangle__du_functor_desc_mercury_proc_0_0

};

const MR_DuPtagLayout mercury_data_mdb__name_mangle__du_ptag_ordered_mercury_proc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__name_mangle__du_stag_ordered_mercury_proc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__name_mangle__du_name_ordered_mercury_proc_0[] = {
	&mercury_data_mdb__name_mangle__du_functor_desc_mercury_proc_0_0
};

const MR_Integer mercury_data_mdb__name_mangle__functor_number_map_mercury_proc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_mercury_proc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__name_mangle__mercury_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__name_mangle__mercury_proc_0_0)),
	"mdb.name_mangle",
	"mercury_proc",
	{ (void *)mercury_data_mdb__name_mangle__du_name_ordered_mercury_proc_0 },
	{ (void *)mercury_data_mdb__name_mangle__du_ptag_ordered_mercury_proc_0 },
	1,
	4,
	mercury_data_mdb__name_mangle__functor_number_map_mercury_proc_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0 = {
	"predicate",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1 = {
	"function",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__name_mangle__enum_value_ordered_is_pred_or_func_0[] = {
	&mercury_data_mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0,
	&mercury_data_mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdb__name_mangle__enum_name_ordered_is_pred_or_func_0[] = {
	&mercury_data_mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_1,
	&mercury_data_mdb__name_mangle__enum_functor_desc_is_pred_or_func_0_0
};

const MR_Integer mercury_data_mdb__name_mangle__functor_number_map_is_pred_or_func_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__name_mangle__is_pred_or_func_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__name_mangle__is_pred_or_func_0_0)),
	"mdb.name_mangle",
	"is_pred_or_func",
	{ (void *)mercury_data_mdb__name_mangle__enum_name_ordered_is_pred_or_func_0 },
	{ (void *)mercury_data_mdb__name_mangle__enum_value_ordered_is_pred_or_func_0 },
	2,
	4,
	mercury_data_mdb__name_mangle__functor_number_map_is_pred_or_func_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_arity_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__name_mangle__arity_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__name_mangle__arity_0_0)),
	"mdb.name_mangle",
	"arity",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

MR_decl_entry(string__first_char_3_3);
MR_decl_entry(char__to_int_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(mdb__name_mangle_module0)
	MR_init_entry1(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0);
	MR_init_label6(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,4,6,7,8,9,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__first_char_3_3,
		mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i4);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__to_int_2_0,
		mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i6);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__int_to_string_2_0,
		mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i7);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(string__append_3_2,
		mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i8);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,
		mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i9);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__is_all_alnum_or_underscore_1_0);
MR_decl_entry(string__append_3_1);

MR_BEGIN_MODULE(mdb__name_mangle_module1)
	MR_init_entry1(mdb__name_mangle__name_mangle_2_0);
	MR_init_label8(mdb__name_mangle__name_mangle_2_0,4,7,6,2,13,36,15,16)
	MR_init_label8(mdb__name_mangle__name_mangle_2_0,17,18,19,20,21,22,23,24)
	MR_init_label5(mdb__name_mangle__name_mangle_2_0,25,26,27,28,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__name_mangle__name_mangle_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		mdb__name_mangle__name_mangle_2_0_i4);
MR_def_label(mdb__name_mangle__name_mangle_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		mdb__name_mangle__name_mangle_2_0_i7);
MR_def_label(mdb__name_mangle__name_mangle_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("f__", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(mdb__name_mangle__name_mangle_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_COMMON(1,0))[(MR_Integer) MR_r2];
	if (((MR_Integer) MR_tempr1 && (strcmp((char *)MR_tempr1, (char *)MR_r1) == 0))) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i15);
	}
	MR_r2 = (MR_COMMON(0,0))[(MR_Integer) MR_r2];
	if (MR_INT_GE(MR_r2,0))
		continue;
	}
	break; } /* end while */
MR_def_label(mdb__name_mangle__name_mangle_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,
		mdb__name_mangle__name_mangle_2_0_i29);
MR_def_label(mdb__name_mangle__name_mangle_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i16) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i17) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i18) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i19) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i20) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i21) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i22) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i23) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i24) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i25) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i26) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i27) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i36) MR_AND
		MR_LABEL_AP(mdb__name_mangle__name_mangle_2_0_i28));
MR_def_label(mdb__name_mangle__name_mangle_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_cut", 5);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_greater_or_equal", 18);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_less_or_equal", 15);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_not_equal", 11);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_plus", 6);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_times", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_minus", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_comma", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_slash", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_semicolon", 11);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_equal", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_less_than", 11);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_greater_than", 14);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(mdb__name_mangle_module2)
	MR_init_entry1(mdb__name_mangle__sym_name_mangle_2_0);
	MR_init_label3(mdb__name_mangle__sym_name_mangle_2_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__name_mangle__sym_name_mangle_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__name_mangle__sym_name_mangle_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_localcall_lab(mdb__name_mangle__sym_name_mangle_2_0,
		mdb__name_mangle__sym_name_mangle_2_0_i4);
MR_def_label(mdb__name_mangle__sym_name_mangle_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		mdb__name_mangle__sym_name_mangle_2_0_i5);
MR_def_label(mdb__name_mangle__sym_name_mangle_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(mdb__name_mangle__sym_name_mangle_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_tailcall_ent(mdb__name_mangle__name_mangle_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module3)
	MR_init_entry1(mdb__name_mangle__use_asm_labels_0_0);
	MR_init_label1(mdb__name_mangle__use_asm_labels_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__name_mangle__use_asm_labels_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__mdb__name_mangle__use_asm_labels_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 256 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 790 "mdb.name_mangle.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__name_mangle__use_asm_labels_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__name_mangle__use_asm_labels_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module4)
	MR_init_entry1(mdb__name_mangle__high_level_code_0_0);
	MR_init_label1(mdb__name_mangle__high_level_code_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__name_mangle__high_level_code_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__mdb__name_mangle__high_level_code_0_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 271 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 834 "mdb.name_mangle.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdb__name_mangle__high_level_code_0_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdb__name_mangle__high_level_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module5)
	MR_init_entry1(fn__mdb__name_mangle__proc_name_mangle_1_0);
	MR_init_label8(fn__mdb__name_mangle__proc_name_mangle_1_0,6,7,11,13,15,16,17,3)
	MR_init_label8(fn__mdb__name_mangle__proc_name_mangle_1_0,19,23,21,29,30,31,32,33)
	MR_init_label4(fn__mdb__name_mangle__proc_name_mangle_1_0,54,35,37,44)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__name_mangle__proc_name_mangle_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
#define	MR_PROC_LABEL	mercury__fn__mdb__name_mangle__proc_name_mangle_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 271 "name_mangle.m"

#ifdef MR_HIGHLEVEL_CODE
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 882 "mdb.name_mangle.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_call_localret_ent(mdb__name_mangle__sym_name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i6);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i7);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i7);
	}
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_string_const("p", 1);
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i15);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i11);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i13);
	}
	MR_sv(2) = (MR_Word) MR_string_const("p", 1);
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i15);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("f", 1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i15);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i16);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i17);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_sv(4) = MR_ctfield(0, MR_r1, 3);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mdb__name_mangle__sym_name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i19);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i23);
	}
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	if ((strcmp((char *)MR_r2, (char *)(MR_Word) MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i23);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i30);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(3), (char *)(MR_Word) MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i21);
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i21);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i30);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i29);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i30);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i31);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i32);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i33);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i35);
	}
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__append_3_2,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i37);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fn__", 4);
	MR_np_call_localret_ent(string__append_3_2,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i54);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__fn__mdb__name_mangle__proc_name_mangle_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 256 "name_mangle.m"

#ifdef MR_USE_ASM_LABELS
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif
;}
#line 1111 "mdb.name_mangle.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i44);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_entry_", 7);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module6)
	MR_init_entry1(__Unify___mdb__name_mangle__arity_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__arity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdb__name_mangle_module7)
	MR_init_entry1(__Compare___mdb__name_mangle__arity_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__name_mangle__arity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module8)
	MR_init_entry1(__Unify___mdb__name_mangle__is_pred_or_func_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__is_pred_or_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module9)
	MR_init_entry1(__Compare___mdb__name_mangle__is_pred_or_func_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__name_mangle__is_pred_or_func_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module10)
	MR_init_entry1(__Unify___mdb__name_mangle__mercury_proc_0_0);
	MR_init_label3(__Unify___mdb__name_mangle__mercury_proc_0_0,4,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__mercury_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__mercury_proc_0_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__mercury_proc_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 4);
	MR_r1 = MR_ctfield(0, MR_tempr3, 1);
	MR_r2 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdb__name_mangle__sym_name_0_0,
		__Unify___mdb__name_mangle__mercury_proc_0_0_i4);
MR_def_label(__Unify___mdb__name_mangle__mercury_proc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__mercury_proc_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)MR_sv(4)) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__mercury_proc_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__mercury_proc_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___mdb__name_mangle__mercury_proc_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__name_mangle__mercury_proc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__name_mangle_module11)
	MR_init_entry1(__Compare___mdb__name_mangle__mercury_proc_0_0);
	MR_init_label7(__Compare___mdb__name_mangle__mercury_proc_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__name_mangle__mercury_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__mercury_proc_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__name_mangle__mercury_proc_0_0_i2);
MR_def_label(__Compare___mdb__name_mangle__mercury_proc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__name_mangle__mercury_proc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__name_mangle__mercury_proc_0_0_i5);
MR_def_label(__Compare___mdb__name_mangle__mercury_proc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__mercury_proc_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___mdb__name_mangle__sym_name_0_0,
		__Compare___mdb__name_mangle__mercury_proc_0_0_i9);
MR_def_label(__Compare___mdb__name_mangle__mercury_proc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__mercury_proc_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__name_mangle__mercury_proc_0_0_i13);
MR_def_label(__Compare___mdb__name_mangle__mercury_proc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__mercury_proc_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__name_mangle__mercury_proc_0_0_i17);
MR_def_label(__Compare___mdb__name_mangle__mercury_proc_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__mercury_proc_0_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__name_mangle__mercury_proc_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module12)
	MR_init_entry1(__Unify___mdb__name_mangle__mode_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__mode_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module13)
	MR_init_entry1(__Compare___mdb__name_mangle__mode_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__name_mangle__mode_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module14)
	MR_init_entry1(__Unify___mdb__name_mangle__module_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__module_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___mdb__name_mangle__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module15)
	MR_init_entry1(__Compare___mdb__name_mangle__module_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__name_mangle__module_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___mdb__name_mangle__sym_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module16)
	MR_init_entry1(__Unify___mdb__name_mangle__pred_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__pred_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *)MR_r1, (char *)MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module17)
	MR_init_entry1(__Compare___mdb__name_mangle__pred_name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__name_mangle__pred_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module18)
	MR_init_entry1(__Unify___mdb__name_mangle__sym_name_0_0);
	MR_init_label4(__Unify___mdb__name_mangle__sym_name_0_0,7,15,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__sym_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__sym_name_0_0_i15);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__sym_name_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__sym_name_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Unify___mdb__name_mangle__sym_name_0_0,
		__Unify___mdb__name_mangle__sym_name_0_0_i7);
MR_def_label(__Unify___mdb__name_mangle__sym_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__sym_name_0_0_i1);
	}
	MR_r1 = (strcmp((char *)MR_sv(1), (char *)MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__name_mangle__sym_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__name_mangle__sym_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__sym_name_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *)MR_tempr1, (char *)MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___mdb__name_mangle__sym_name_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module19)
	MR_init_entry1(__Compare___mdb__name_mangle__sym_name_0_0);
	MR_init_label7(__Compare___mdb__name_mangle__sym_name_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__name_mangle__sym_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__sym_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__name_mangle__sym_name_0_0_i2);
MR_def_label(__Compare___mdb__name_mangle__sym_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__name_mangle__sym_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__sym_name_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__sym_name_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Compare___mdb__name_mangle__sym_name_0_0,
		__Compare___mdb__name_mangle__sym_name_0_0_i9);
MR_def_label(__Compare___mdb__name_mangle__sym_name_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__sym_name_0_0_i45);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__name_mangle__sym_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__name_mangle__sym_name_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___mdb__name_mangle__sym_name_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__name_mangle__sym_name_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__name_mangle__sym_name_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdb__name_mangle_maybe_bunch_0(void)
{
	mdb__name_mangle_module0();
	mdb__name_mangle_module1();
	mdb__name_mangle_module2();
	mdb__name_mangle_module3();
	mdb__name_mangle_module4();
	mdb__name_mangle_module5();
	mdb__name_mangle_module6();
	mdb__name_mangle_module7();
	mdb__name_mangle_module8();
	mdb__name_mangle_module9();
	mdb__name_mangle_module10();
	mdb__name_mangle_module11();
	mdb__name_mangle_module12();
	mdb__name_mangle_module13();
	mdb__name_mangle_module14();
	mdb__name_mangle_module15();
	mdb__name_mangle_module16();
	mdb__name_mangle_module17();
	mdb__name_mangle_module18();
	mdb__name_mangle_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__name_mangle__init(void);
void mercury__mdb__name_mangle__init_type_tables(void);
void mercury__mdb__name_mangle__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__name_mangle__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__name_mangle__init_complexity_procs(void);
#endif

void mercury__mdb__name_mangle__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__name_mangle_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0,
		mdb__name_mangle__sym_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0,
		mdb__name_mangle__pred_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_module_name_0,
		mdb__name_mangle__module_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0,
		mdb__name_mangle__mode_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_mercury_proc_0,
		mdb__name_mangle__mercury_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
		mdb__name_mangle__is_pred_or_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_arity_0,
		mdb__name_mangle__arity_0_0);
	mercury__mdb__name_mangle__init_debugger();
}

void mercury__mdb__name_mangle__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_module_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_mercury_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_arity_0);
	}
}


void mercury__mdb__name_mangle__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__name_mangle__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__name_mangle__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
