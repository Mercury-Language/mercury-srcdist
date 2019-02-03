/*
** Automatically generated from `name_mangle.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__name_mangle__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.name_mangle.c"
#include "mdb.name_mangle.mh"

#line 28 "mdb.name_mangle.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.name_mangle.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 36 "mdb.name_mangle.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 40 "mdb.name_mangle.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.name_mangle.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.name_mangle.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 52 "mdb.name_mangle.c"
#line 53 "mdb.name_mangle.c"
#ifndef MDB__NAME_MANGLE_DECL_GUARD
#define MDB__NAME_MANGLE_DECL_GUARD

#line 57 "mdb.name_mangle.c"
#line 58 "mdb.name_mangle.c"

#endif
#line 61 "mdb.name_mangle.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__name_mangle__type_ctor_info_arity_0,
	mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
	mercury_data_mdb__name_mangle__type_ctor_info_mercury_proc_0,
	mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0,
	mercury_data_mdb__name_mangle__type_ctor_info_module_name_0,
	mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0,
	mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0;
MR_decl_label6(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0, 4,6,7,8,9,2)
MR_decl_label1(mdb__name_mangle__high_level_code_0_0, 1)
MR_decl_label10(mdb__name_mangle__name_mangle_2_0, 4,7,6,2,13,14,15,16,17,18)
MR_decl_label8(mdb__name_mangle__name_mangle_2_0, 19,20,21,22,23,24,11,26)
MR_decl_label3(mdb__name_mangle__sym_name_mangle_2_0, 21,5,6)
MR_decl_label1(mdb__name_mangle__use_asm_labels_0_0, 1)
MR_decl_label10(fn__mdb__name_mangle__proc_name_mangle_1_0, 6,7,14,16,18,19,20,3,29,33)
MR_decl_label9(fn__mdb__name_mangle__proc_name_mangle_1_0, 31,42,43,44,45,51,53,55,62)
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_arity_0 = {
	0,
	14,
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
	14,
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
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

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
	14,
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

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0 = {
	0,
	14,
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

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_module_name_0 = {
	0,
	14,
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

const MR_TypeCtorInfo_Struct mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0 = {
	0,
	14,
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
	14,
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



MR_decl_entry(string__first_char_3_3);
MR_decl_entry(char__to_int_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(mdb__name_mangle_module0)
	MR_init_entry1(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__name_mangle__convert_to_valid_c_identifier_2_2_0);
	MR_init_label6(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,4,6,7,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_to_valid_c_identifier_2'/2 mode 0 */
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i8);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_localcall_lab(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,
		mdb__name_mangle__convert_to_valid_c_identifier_2_2_0_i9);
MR_def_label(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__name_mangle__name_mangle_2_0);
	MR_init_label10(mdb__name_mangle__name_mangle_2_0,4,7,6,2,13,14,15,16,17,18)
	MR_init_label8(mdb__name_mangle__name_mangle_2_0,19,20,21,22,23,24,11,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name_mangle'/2 mode 0 */
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
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("!", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("f_cut", 5);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("*", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_times", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("+", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_plus", 6);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const(",", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_comma", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("-", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_minus", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("/", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_slash", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const(";", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i19);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_semicolon", 11);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("<", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i20);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_less_than", 11);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("=", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i21);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_equal", 7);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const(">", 1)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i22);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_greater_than", 14);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("=<", 2)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_less_or_equal", 15);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const(">=", 2)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i24);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_greater_or_equal", 18);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("\\=", 2)) != 0)) {
		MR_GOTO_LAB(mdb__name_mangle__name_mangle_2_0_i11);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_not_equal", 11);
	MR_decr_sp_and_return(2);
MR_def_label(mdb__name_mangle__name_mangle_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__name_mangle__convert_to_valid_c_identifier_2_2_0,
		mdb__name_mangle__name_mangle_2_0_i26);
MR_def_label(mdb__name_mangle__name_mangle_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(mdb__name_mangle_module2)
	MR_init_entry1(mdb__name_mangle__sym_name_mangle_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__name_mangle__sym_name_mangle_2_0);
	MR_init_label3(mdb__name_mangle__sym_name_mangle_2_0,21,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_mangle'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__name_mangle__sym_name_mangle_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__name_mangle__sym_name_mangle_2_0_i21);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(mdb__name_mangle__name_mangle_2_0);
MR_def_label(mdb__name_mangle__sym_name_mangle_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_localcall_lab(mdb__name_mangle__sym_name_mangle_2_0,
		mdb__name_mangle__sym_name_mangle_2_0_i5);
MR_def_label(mdb__name_mangle__sym_name_mangle_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		mdb__name_mangle__sym_name_mangle_2_0_i6);
MR_def_label(mdb__name_mangle__sym_name_mangle_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module3)
	MR_init_entry1(mdb__name_mangle__use_asm_labels_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__name_mangle__use_asm_labels_0_0);
	MR_init_label1(mdb__name_mangle__use_asm_labels_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'use_asm_labels'/0 mode 0 */
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
#line 688 "mdb.name_mangle.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__name_mangle__high_level_code_0_0);
	MR_init_label1(mdb__name_mangle__high_level_code_0_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'high_level_code'/0 mode 0 */
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
#line 735 "mdb.name_mangle.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__name_mangle__proc_name_mangle_1_0);
	MR_init_label10(fn__mdb__name_mangle__proc_name_mangle_1_0,6,7,14,16,18,19,20,3,29,33)
	MR_init_label9(fn__mdb__name_mangle__proc_name_mangle_1_0,31,42,43,44,45,51,53,55,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_name_mangle'/2 mode 0 */
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
#line 785 "mdb.name_mangle.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(4) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(mdb__name_mangle__sym_name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i6);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i7);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i7);
	}
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_string_const("p", 1);
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i18);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i14);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i16);
	}
	MR_sv(2) = (MR_Word) MR_string_const("f", 1);
	MR_sv(1) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i18);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_string_const("p", 1);
	MR_sv(1) = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i18);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i19);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i20);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_sv(5) = MR_tfield(0, MR_r1, 4);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(mdb__name_mangle__sym_name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i29);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i33);
	}
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i33);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i43);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(3), MR_string_const("main", 4)) != 0)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i31);
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i31);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i43);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i42);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__name_mangle__name_mangle_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i43);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i44);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i45);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("_", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i51);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i53);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fn__", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i53);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_np_call_localret_ent(string__append_3_2,
		fn__mdb__name_mangle__proc_name_mangle_1_0_i55);
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,55)
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
#line 1013 "mdb.name_mangle.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__mdb__name_mangle__proc_name_mangle_1_0_i62);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_entry_", 7);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(string__append_3_2);
	}
MR_def_label(fn__mdb__name_mangle__proc_name_mangle_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module6)
	MR_init_entry1(__Unify___mdb__name_mangle__arity_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__name_mangle__arity_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__name_mangle__arity_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__name_mangle__is_pred_or_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__name_mangle__is_pred_or_func_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__name_mangle__mercury_proc_0_0);
	MR_init_label3(__Unify___mdb__name_mangle__mercury_proc_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__mercury_proc_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___mdb__name_mangle__sym_name_0_0,
		__Unify___mdb__name_mangle__mercury_proc_0_0_i4);
MR_def_label(__Unify___mdb__name_mangle__mercury_proc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__mercury_proc_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(4)) != 0)) {
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__name_mangle__mercury_proc_0_0);
	MR_init_label7(__Compare___mdb__name_mangle__mercury_proc_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_sv(8) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__name_mangle__mode_num_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__name_mangle__mode_num_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__name_mangle__module_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__name_mangle__module_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__name_mangle__pred_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__name_mangle__pred_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__name_mangle_module17)
	MR_init_entry1(__Compare___mdb__name_mangle__pred_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__name_mangle__pred_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__name_mangle__sym_name_0_0);
	MR_init_label4(__Unify___mdb__name_mangle__sym_name_0_0,7,15,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_localcall_lab(__Unify___mdb__name_mangle__sym_name_0_0,
		__Unify___mdb__name_mangle__sym_name_0_0_i7);
MR_def_label(__Unify___mdb__name_mangle__sym_name_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__name_mangle__sym_name_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
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
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__name_mangle__sym_name_0_0);
	MR_init_label7(__Compare___mdb__name_mangle__sym_name_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
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
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
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
void mercury__mdb__name_mangle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__name_mangle__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__name_mangle__init_threadscope_string_table(void);
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
		mercury_data_mdb__name_mangle__type_ctor_info_arity_0,
		mdb__name_mangle__arity_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0,
		mdb__name_mangle__is_pred_or_func_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_mercury_proc_0,
		mdb__name_mangle__mercury_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0,
		mdb__name_mangle__mode_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_module_name_0,
		mdb__name_mangle__module_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0,
		mdb__name_mangle__pred_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0,
		mdb__name_mangle__sym_name_0_0);
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
		&mercury_data_mdb__name_mangle__type_ctor_info_arity_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_is_pred_or_func_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_mercury_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_mode_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_module_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_pred_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__name_mangle__type_ctor_info_sym_name_0);
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

void mercury__mdb__name_mangle__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__name_mangle);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__name_mangle__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__name_mangle__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
