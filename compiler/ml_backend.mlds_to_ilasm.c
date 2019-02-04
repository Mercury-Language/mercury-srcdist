/*
** Automatically generated from `mlds_to_ilasm.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__mlds_to_ilasm__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 520 "../library/io.int"
#include "io.mh"

#line 27 "ml_backend.mlds_to_ilasm.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 31 "ml_backend.mlds_to_ilasm.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ml_backend.mlds_to_ilasm.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 39 "ml_backend.mlds_to_ilasm.c"
#line 40 "ml_backend.mlds_to_ilasm.c"
#include "ml_backend.mlds_to_ilasm.mh"

#line 43 "ml_backend.mlds_to_ilasm.c"
#line 44 "ml_backend.mlds_to_ilasm.c"
#ifndef ML_BACKEND__MLDS_TO_ILASM_DECL_GUARD
#define ML_BACKEND__MLDS_TO_ILASM_DECL_GUARD

#line 48 "ml_backend.mlds_to_ilasm.c"
#line 49 "ml_backend.mlds_to_ilasm.c"

#endif
#line 52 "ml_backend.mlds_to_ilasm.c"


struct mercury_type_0 {
	MR_Word * f1[2];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_3 mercury_common_3[];
MR_decl_label8(ml_backend__mlds_to_ilasm__output_assembler_4_0, 2,3,4,5,6,7,10,14)
MR_decl_label2(ml_backend__mlds_to_ilasm__output_assembler_4_0, 15,16)
MR_decl_label8(ml_backend__mlds_to_ilasm__output_foreign_file_4_0, 2,4,6,9,11,12,13,15)
MR_decl_label3(ml_backend__mlds_to_ilasm__output_foreign_file_4_0, 8,17,3)
MR_decl_label5(ml_backend__mlds_to_ilasm__output_mlds_3_0, 2,3,4,7,5)
MR_def_extern_entry(ml_backend__mlds_to_ilasm__output_mlds_3_0)
MR_decl_static(ml_backend__mlds_to_ilasm__output_foreign_file_4_0)
MR_decl_static(ml_backend__mlds_to_ilasm__output_assembler_4_0)
MR_decl_static(ml_backend__mlds_to_ilasm__IntroducedFrom__pred__output_foreign_file__86__1_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__globals, foreign_language)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(libs__globals, foreign_language)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_mlds_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_mlds_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_3;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_mlds_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_COMMON(0,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_mlds_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_COMMON(3,0),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(ml_backend__mlds_to_managed__output_managed_code_4_0);
static const struct mercury_type_2 mercury_common_2[2] =
{
{
MR_COMMON(1,2),
MR_ENTRY_AP(ml_backend__mlds_to_managed__output_managed_code_4_0),
1,
1
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(ml_backend__mlds_to_managed__output_managed_code_4_0),
1,
2
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
3,
MR_CTOR0_ADDR(ml_backend__mlds, mlds),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_mlds_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_ilasm",
"ml_backend.mlds_to_ilasm",
"output_assembler",
4,
0
},
"ml_backend.mlds_to_ilasm",
"mlds_to_ilasm.m",
58,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_mlds_3_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_ilasm",
"ml_backend.mlds_to_ilasm",
"output_foreign_file",
4,
0
},
"ml_backend.mlds_to_ilasm",
"mlds_to_ilasm.m",
64,
"d1;c10;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"output_managed_code",
4,
0
},
"ml_backend.mlds_to_ilasm",
"mlds_to_ilasm.m",
97,
"d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"output_managed_code",
4,
0
},
"ml_backend.mlds_to_ilasm",
"mlds_to_ilasm.m",
95,
"d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_ilasm__output_foreign_file_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_ilasm",
"ml_backend.mlds_to_ilasm",
"lambda_mlds_to_ilasm_m_86",
4,
0
},
"ml_backend.mlds_to_ilasm",
"mlds_to_ilasm.m",
85,
"d1;c6;t;c4;"
};

MR_decl_entry(fn__ml_backend__mlds__mlds_get_module_name_1_0);
MR_decl_entry(parse_tree__modules__module_name_to_file_name_6_0);
MR_decl_entry(hlds__passes_aux__output_to_file_5_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_ilasm_module0)
	MR_init_entry1(ml_backend__mlds_to_ilasm__output_mlds_3_0);
	MR_init_label5(ml_backend__mlds_to_ilasm__output_mlds_3_0,2,3,4,7,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_ilasm__output_mlds_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_ilasm__output_mlds_3_0_i2);
MR_def_label(ml_backend__mlds_to_ilasm__output_mlds_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(".il", 3);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		ml_backend__mlds_to_ilasm__output_mlds_3_0_i3);
MR_def_label(ml_backend__mlds_to_ilasm__output_mlds_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_ilasm__output_assembler_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	}
	MR_np_call_localret_ent(hlds__passes_aux__output_to_file_5_0,
		ml_backend__mlds_to_ilasm__output_mlds_3_0_i4);
MR_def_label(ml_backend__mlds_to_ilasm__output_mlds_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_ilasm__output_mlds_3_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_ilasm__output_foreign_file_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		ml_backend__mlds_to_ilasm__output_mlds_3_0_i7);
MR_def_label(ml_backend__mlds_to_ilasm__output_mlds_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__foldl_4_0);
MR_def_label(ml_backend__mlds_to_ilasm__output_mlds_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0);
MR_decl_entry(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(hlds__passes_aux__output_to_file_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_ilasm_module1)
	MR_init_entry1(ml_backend__mlds_to_ilasm__output_foreign_file_4_0);
	MR_init_label8(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,2,4,6,9,11,12,13,15)
	MR_init_label3(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,8,17,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_ilasm__output_foreign_file_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_module_name_1_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i2);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i4);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i3);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i6);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(2),
		MR_LABEL_AP(ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i12) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i13) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i15));
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_ilasm.m", 15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("language C foreign code not supported", 37);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i8);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i17);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i17);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_ilasm.m", 15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("language Java foreign code not supported", 40);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i8);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_ilasm.m", 15);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("language IL foreign code not supported", 38);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i8);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		ml_backend__mlds_to_ilasm__output_foreign_file_4_0_i17);
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_ilasm__IntroducedFrom__pred__output_foreign_file__86__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__passes_aux__output_to_file_4_0);
	}
MR_def_label(ml_backend__mlds_to_ilasm__output_foreign_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_ilasm.m", 15);
	MR_r2 = (MR_Word) MR_string_const("output_foreign_file: unexpected language", 40);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__mlds_to_managed__output_src_start_3_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(ml_backend__mlds_to_il__generate_il_5_0);
MR_decl_entry(libs__globals__io_lookup_bool_option_4_0);
MR_decl_entry(ml_backend__il_peephole__il_peephole_optimize_3_0);
MR_decl_entry(ml_backend__ilasm__output_3_0);
MR_decl_entry(ml_backend__mlds_to_managed__output_src_end_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_ilasm_module2)
	MR_init_entry1(ml_backend__mlds_to_ilasm__output_assembler_4_0);
	MR_init_label8(ml_backend__mlds_to_ilasm__output_assembler_4_0,2,3,4,5,6,7,10,14)
	MR_init_label2(ml_backend__mlds_to_ilasm__output_assembler_4_0,15,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_ilasm__output_assembler_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__output_src_start_3_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i2);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i3);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__generate_il_5_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i4);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Integer) 363;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i5);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__io_lookup_bool_option_4_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i6);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_ilasm__output_assembler_4_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__il_peephole__il_peephole_optimize_3_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i14);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_ilasm__output_assembler_4_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__il_peephole__il_peephole_optimize_3_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i14);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__ilasm__output_3_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i15);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__output_src_end_3_0,
		ml_backend__mlds_to_ilasm__output_assembler_4_0_i16);
MR_def_label(ml_backend__mlds_to_ilasm__output_assembler_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_ilasm_module3)
	MR_init_entry1(ml_backend__mlds_to_ilasm__IntroducedFrom__pred__output_foreign_file__86__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_ilasm__IntroducedFrom__pred__output_foreign_file__86__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(ml_backend__mlds_to_ilasm__IntroducedFrom__pred__output_foreign_file__86__1_4_0));
	MR_np_tailcall_ent(do_call_closure_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__mlds_to_ilasm_maybe_bunch_0(void)
{
	ml_backend__mlds_to_ilasm_module0();
	ml_backend__mlds_to_ilasm_module1();
	ml_backend__mlds_to_ilasm_module2();
	ml_backend__mlds_to_ilasm_module3();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__mlds_to_ilasm__init(void);
void mercury__ml_backend__mlds_to_ilasm__init_type_tables(void);
void mercury__ml_backend__mlds_to_ilasm__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__mlds_to_ilasm__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__mlds_to_ilasm__init_complexity_procs(void);
#endif

void mercury__ml_backend__mlds_to_ilasm__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__mlds_to_ilasm_maybe_bunch_0();
	mercury__ml_backend__mlds_to_ilasm__init_debugger();
}

void mercury__ml_backend__mlds_to_ilasm__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__mlds_to_ilasm__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__mlds_to_ilasm__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__mlds_to_ilasm__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
