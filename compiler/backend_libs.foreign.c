/*
** Automatically generated from `foreign.m'
** by the Mercury compiler,
** version rotd-2012-03-21, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__backend_libs__foreign__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "backend_libs.foreign.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "backend_libs.foreign.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "backend_libs.foreign.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "backend_libs.foreign.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "backend_libs.foreign.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "backend_libs.foreign.c"
#line 49 "backend_libs.foreign.c"
#include "backend_libs.foreign.mh"

#line 52 "backend_libs.foreign.c"
#line 53 "backend_libs.foreign.c"
#ifndef BACKEND_LIBS__FOREIGN_DECL_GUARD
#define BACKEND_LIBS__FOREIGN_DECL_GUARD

#line 57 "backend_libs.foreign.c"
#line 58 "backend_libs.foreign.c"

#endif
#line 61 "backend_libs.foreign.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_String f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__foreign__type_ctor_info_exported_type_0;
MR_decl_label6(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0, 4,6,5,8,9,3)
MR_decl_label10(backend_libs__foreign__extrude_pragma_implementation_2_6_0, 100,3,102,12,104,21,106,33,30,108)
MR_decl_label5(backend_libs__foreign__extrude_pragma_implementation_2_6_0, 41,42,43,44,45)
MR_decl_label2(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0, 2,1)
MR_decl_label10(backend_libs__foreign__foreign_type_body_to_exported_type_5_0, 2,3,5,10,17,15,22,20,27,25)
MR_decl_label3(backend_libs__foreign__foreign_type_body_to_exported_type_5_0, 31,29,35)
MR_decl_label7(backend_libs__foreign__have_foreign_type_for_backend_3_0, 37,3,5,9,13,17,22)
MR_decl_label2(fn__backend_libs__foreign__decl_guard_1_0, 2,3)
MR_decl_label10(fn__backend_libs__foreign__exported_type_to_string_2_0, 7,5,3,13,16,17,18,14,19,20)
MR_decl_label10(fn__backend_libs__foreign__exported_type_to_string_2_0, 11,26,27,28,24,22,33,34,35,31)
MR_decl_label2(fn__backend_libs__foreign__exported_type_to_string_2_0, 29,36)
MR_decl_label1(fn__backend_libs__foreign__is_foreign_type_1_0, 3)
MR_decl_label1(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0, 2)
MR_decl_label6(fn__backend_libs__foreign__to_exported_type_2_0, 2,4,6,8,11,3)
MR_decl_label4(__Unify___backend_libs__foreign__exported_type_0_0, 7,19,5,1)
MR_decl_label7(__Compare___backend_libs__foreign__exported_type_0_0, 3,2,9,7,5,15,45)
MR_def_extern_entry(fn__backend_libs__foreign__non_foreign_type_1_0)
MR_def_extern_entry(backend_libs__foreign__have_foreign_type_for_backend_3_0)
MR_def_extern_entry(backend_libs__foreign__foreign_type_body_to_exported_type_5_0)
MR_def_extern_entry(fn__backend_libs__foreign__to_exported_type_2_0)
MR_def_extern_entry(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0)
MR_def_extern_entry(fn__backend_libs__foreign__is_foreign_type_1_0)
MR_def_extern_entry(fn__backend_libs__foreign__exported_type_to_string_2_0)
MR_def_extern_entry(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0)
MR_def_extern_entry(backend_libs__foreign__filter_decls_4_0)
MR_def_extern_entry(backend_libs__foreign__filter_imports_4_0)
MR_def_extern_entry(backend_libs__foreign__filter_bodys_4_0)
MR_def_extern_entry(backend_libs__foreign__filter_exports_4_0)
MR_decl_static(backend_libs__foreign__extrude_pragma_implementation_2_6_0)
MR_def_extern_entry(backend_libs__foreign__extrude_pragma_implementation_11_0)
MR_def_extern_entry(fn__backend_libs__foreign__decl_guard_1_0)
MR_def_extern_entry(__Unify___backend_libs__foreign__exported_type_0_0)
MR_def_extern_entry(__Compare___backend_libs__foreign__exported_type_0_0)
MR_decl_static(backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_0)
MR_decl_static(backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_0)
MR_decl_static(backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_0)
MR_decl_static(backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_0)
MR_def_extern_entry(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("", 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_decls_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_imports_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_bodys_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_exports_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;
static const struct mercury_type_1 mercury_common_1[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__foreign__filter_decls_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__foreign__filter_imports_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__foreign__filter_bodys_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code)
},
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__foreign__filter_exports_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(hlds__hlds_module, pragma_exported_proc)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__foreign__field_types_exported_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__foreign__du_functor_desc_exported_type_0_0 = {
	"exported_type_foreign",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__foreign__field_types_exported_type_0_0,
	NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__foreign__field_types_exported_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__foreign__du_functor_desc_exported_type_0_1 = {
	"exported_type_mercury",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__foreign__field_types_exported_type_0_1,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__foreign__du_stag_ordered_exported_type_0_0[] = {
	&mercury_data_backend_libs__foreign__du_functor_desc_exported_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__foreign__du_stag_ordered_exported_type_0_1[] = {
	&mercury_data_backend_libs__foreign__du_functor_desc_exported_type_0_1

};

const MR_DuPtagLayout mercury_data_backend_libs__foreign__du_ptag_ordered_exported_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__foreign__du_stag_ordered_exported_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__foreign__du_stag_ordered_exported_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__foreign__du_name_ordered_exported_type_0[] = {
	&mercury_data_backend_libs__foreign__du_functor_desc_exported_type_0_0,
	&mercury_data_backend_libs__foreign__du_functor_desc_exported_type_0_1
};

const MR_Integer mercury_data_backend_libs__foreign__functor_number_map_exported_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__foreign__type_ctor_info_exported_type_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__foreign__exported_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__foreign__exported_type_0_0)),
	"backend_libs.foreign",
	"exported_type",
	{ (void *)mercury_data_backend_libs__foreign__du_name_ordered_exported_type_0 },
	{ (void *)mercury_data_backend_libs__foreign__du_ptag_ordered_exported_type_0 },
	2,
	4,
	mercury_data_backend_libs__foreign__functor_number_map_exported_type_0
};


static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_exports_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.foreign",
"backend_libs.foreign",
"lambda_foreign_m_191",
2,
0
},
"backend_libs.foreign",
"foreign.m",
191,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_bodys_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.foreign",
"backend_libs.foreign",
"lambda_foreign_m_186",
2,
0
},
"backend_libs.foreign",
"foreign.m",
186,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_imports_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.foreign",
"backend_libs.foreign",
"lambda_foreign_m_181",
2,
0
},
"backend_libs.foreign",
"foreign.m",
181,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__foreign__filter_decls_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.foreign",
"backend_libs.foreign",
"lambda_foreign_m_176",
2,
0
},
"backend_libs.foreign",
"foreign.m",
176,
"6"
};



MR_BEGIN_MODULE(backend_libs__foreign_module0)
	MR_init_entry1(fn__backend_libs__foreign__non_foreign_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__foreign__non_foreign_type_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'non_foreign_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__foreign__non_foreign_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module1)
	MR_init_entry1(backend_libs__foreign__have_foreign_type_for_backend_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__have_foreign_type_for_backend_3_0);
	MR_init_label7(backend_libs__foreign__have_foreign_type_for_backend_3_0,37,3,5,9,13,17,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'have_foreign_type_for_backend'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__have_foreign_type_for_backend_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i3);
	}
MR_def_label(backend_libs__foreign__have_foreign_type_for_backend_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_localtailcall(backend_libs__foreign__have_foreign_type_for_backend_3_0);
MR_def_label(backend_libs__foreign__have_foreign_type_for_backend_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(backend_libs__foreign__have_foreign_type_for_backend_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 3);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(backend_libs__foreign__have_foreign_type_for_backend_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i13);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(backend_libs__foreign__have_foreign_type_for_backend_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(backend_libs__foreign__have_foreign_type_for_backend_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i37);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__have_foreign_type_for_backend_3_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
	}
MR_def_label(backend_libs__foreign__have_foreign_type_for_backend_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(backend_libs__foreign_module2)
	MR_init_entry1(backend_libs__foreign__foreign_type_body_to_exported_type_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__foreign_type_body_to_exported_type_5_0);
	MR_init_label10(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,2,3,5,10,17,15,22,20,27,25)
	MR_init_label3(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,31,29,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_type_body_to_exported_type'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__foreign_type_body_to_exported_type_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_tfield(0, MR_r2, 4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i2);
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i3);
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i5);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i35);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i10);
	}
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i35);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i15);
	}
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(4), 0);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", 69);
	MR_r3 = (MR_Word) MR_string_const("no C# type", 10);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i20);
	}
	if (MR_LTAGS_TEST(MR_sv(5),0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i22);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(5), 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", 69);
	MR_r3 = (MR_Word) MR_string_const("no Erlang type", 14);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i25);
	}
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = MR_tfield(0, MR_tfield(0, MR_tempr1, 0), 2);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", 69);
	MR_r3 = (MR_Word) MR_string_const("no IL type", 10);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i29);
	}
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i31);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(3), 0);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", 69);
	MR_r3 = (MR_Word) MR_string_const("no Java type", 12);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_to_exported_type_5_0_i35);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(0, MR_r1, 0) = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.foreign.foreign_type_body_to_exported_type\'/5", 69);
	MR_r3 = (MR_Word) MR_string_const("no C type", 9);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_2_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);

MR_BEGIN_MODULE(backend_libs__foreign_module3)
	MR_init_entry1(fn__backend_libs__foreign__to_exported_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__foreign__to_exported_type_2_0);
	MR_init_label6(fn__backend_libs__foreign__to_exported_type_2_0,2,4,6,8,11,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_exported_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__foreign__to_exported_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__backend_libs__foreign__to_exported_type_2_0_i2);
MR_def_label(fn__backend_libs__foreign__to_exported_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_2_0,
		fn__backend_libs__foreign__to_exported_type_2_0_i4);
MR_def_label(fn__backend_libs__foreign__to_exported_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__to_exported_type_2_0_i3);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		fn__backend_libs__foreign__to_exported_type_2_0_i6);
MR_def_label(fn__backend_libs__foreign__to_exported_type_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__to_exported_type_2_0_i3);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		fn__backend_libs__foreign__to_exported_type_2_0_i8);
MR_def_label(fn__backend_libs__foreign__to_exported_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__to_exported_type_2_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_body((MR_Integer) MR_tempr1, (MR_Integer) 0);
	}
	MR_np_call_localret_ent(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,
		fn__backend_libs__foreign__to_exported_type_2_0_i11);
MR_def_label(fn__backend_libs__foreign__to_exported_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = MR_r3;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
MR_def_label(fn__backend_libs__foreign__to_exported_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module4)
	MR_init_entry1(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0);
	MR_init_label2(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_type_body_has_user_defined_eq_comp_pred'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(backend_libs__foreign__foreign_type_body_to_exported_type_5_0,
		backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0_i2);
MR_def_label(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module5)
	MR_init_entry1(fn__backend_libs__foreign__is_foreign_type_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__foreign__is_foreign_type_1_0);
	MR_init_label1(fn__backend_libs__foreign__is_foreign_type_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_foreign_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__foreign__is_foreign_type_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__is_foreign_type_1_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__is_foreign_type_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(backend_libs__foreign_module6)
	MR_init_entry1(fn__backend_libs__foreign__exported_type_to_string_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__foreign__exported_type_to_string_2_0);
	MR_init_label10(fn__backend_libs__foreign__exported_type_to_string_2_0,7,5,3,13,16,17,18,14,19,20)
	MR_init_label10(fn__backend_libs__foreign__exported_type_to_string_2_0,11,26,27,28,24,22,33,34,35,31)
	MR_init_label2(fn__backend_libs__foreign__exported_type_to_string_2_0,29,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'exported_type_to_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__foreign__exported_type_to_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i3);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.foreign.exported_type_to_string\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("qualified C type", 16);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_r4 = MR_tempr1;
	if (!(((((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 2)) || (MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 1))) || ((MR_tag(MR_tempr1) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_tempr1, 0) == (MR_Integer) 1))))) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_proceed();
	}
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i14);
	}
	MR_r5 = MR_tfield(2, MR_r4, 0);
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Char", 7);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Float", 8);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i18);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Integer", 10);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MR_String", 9);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Tuple", 8);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("MR_Word", 7);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.foreign.exported_type_to_string\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("kinded type", 11);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i24);
	}
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i26);
	}
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_proceed();
	}
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("double", 6);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i28);
	}
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("object", 6);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i29);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i31);
	}
	MR_r5 = MR_tfield(2, MR_tempr1, 0);
	if (MR_INT_NE(MR_r5,3)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_proceed();
	}
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,1)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i34);
	}
	MR_r1 = (MR_Word) MR_string_const("double", 6);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i35);
	}
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.String", 16);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("java.lang.Object", 16);
	MR_proceed();
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(fn__backend_libs__foreign__exported_type_to_string_2_0_i36);
	}
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.foreign.exported_type_to_string\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("erlang", 6);
	MR_np_tailcall_ent(require__sorry_3_0);
MR_def_label(fn__backend_libs__foreign__exported_type_to_string_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140backend_libs.foreign.exported_type_to_string\'/2", 57);
	MR_r3 = (MR_Word) MR_string_const("il", 2);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module7)
	MR_init_entry1(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__foreign__mercury_exported_type_to_string_3_0);
	MR_init_label1(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mercury_exported_type_to_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__foreign__mercury_exported_type_to_string_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		fn__backend_libs__foreign__mercury_exported_type_to_string_3_0_i2);
MR_def_label(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__backend_libs__foreign__exported_type_to_string_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
MR_decl_entry(list__filter_4_0);

MR_BEGIN_MODULE(backend_libs__foreign_module8)
	MR_init_entry1(backend_libs__foreign__filter_decls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__filter_decls_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_decls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__filter_decls_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__filter_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_import_module_info_0;

MR_BEGIN_MODULE(backend_libs__foreign_module9)
	MR_init_entry1(backend_libs__foreign__filter_imports_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__filter_imports_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_imports'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__filter_imports_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_import_module_info);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__filter_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

MR_BEGIN_MODULE(backend_libs__foreign_module10)
	MR_init_entry1(backend_libs__foreign__filter_bodys_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__filter_bodys_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_bodys'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__filter_bodys_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__filter_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_pragma_exported_proc_0;

MR_BEGIN_MODULE(backend_libs__foreign_module11)
	MR_init_entry1(backend_libs__foreign__filter_exports_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__filter_exports_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'filter_exports'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__filter_exports_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_module, pragma_exported_proc);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(list__filter_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__globals__foreign_language_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(backend_libs__foreign_module12)
	MR_init_entry1(backend_libs__foreign__extrude_pragma_implementation_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__extrude_pragma_implementation_2_6_0);
	MR_init_label10(backend_libs__foreign__extrude_pragma_implementation_2_6_0,100,3,102,12,104,21,106,33,30,108)
	MR_init_label5(backend_libs__foreign__extrude_pragma_implementation_2_6_0,41,42,43,44,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extrude_pragma_implementation_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__foreign__extrude_pragma_implementation_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i100);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i33);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i12);
	}
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i102);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i33);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i21);
	}
	if (MR_INT_NE(MR_r2,4)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i104);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i33);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i30);
	}
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i106);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i33);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i42);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(backend_libs__foreign__extrude_pragma_implementation_2_6_0_i108);
	}
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i41);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__foreign_language_string_1_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i42);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" foreign code from ", 19);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i43);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i44);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("unimplemented: calling ", 23);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__foreign__extrude_pragma_implementation_2_6_0_i45);
MR_def_label(backend_libs__foreign__extrude_pragma_implementation_2_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.foreign.unimplemented_combination\'/2", 60);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(require__sorry_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module13)
	MR_init_entry1(backend_libs__foreign__extrude_pragma_implementation_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__extrude_pragma_implementation_11_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'extrude_pragma_implementation'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__foreign__extrude_pragma_implementation_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(string__to_upper_2_0);

MR_BEGIN_MODULE(backend_libs__foreign_module14)
	MR_init_entry1(fn__backend_libs__foreign__decl_guard_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__backend_libs__foreign__decl_guard_1_0);
	MR_init_label2(fn__backend_libs__foreign__decl_guard_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'decl_guard'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__backend_libs__foreign__decl_guard_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__backend_libs__foreign__decl_guard_1_0_i2);
MR_def_label(fn__backend_libs__foreign__decl_guard_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_upper_2_0,
		fn__backend_libs__foreign__decl_guard_1_0_i3);
MR_def_label(fn__backend_libs__foreign__decl_guard_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_DECL_GUARD", 11);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(backend_libs__foreign_module15)
	MR_init_entry1(__Unify___backend_libs__foreign__exported_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__foreign__exported_type_0_0);
	MR_init_label4(__Unify___backend_libs__foreign__exported_type_0_0,7,19,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__foreign__exported_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__foreign__exported_type_0_0_i19);
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
		MR_GOTO_LAB(__Unify___backend_libs__foreign__exported_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__foreign__exported_type_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 1);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___backend_libs__foreign__exported_type_0_0_i7);
MR_def_label(__Unify___backend_libs__foreign__exported_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__foreign__exported_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___backend_libs__foreign__exported_type_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__foreign__exported_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___backend_libs__foreign__exported_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Unify___backend_libs__foreign__exported_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___parse_tree__prog_data__mer_type_0_0);

MR_BEGIN_MODULE(backend_libs__foreign_module16)
	MR_init_entry1(__Compare___backend_libs__foreign__exported_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__foreign__exported_type_0_0);
	MR_init_label7(__Compare___backend_libs__foreign__exported_type_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__foreign__exported_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__foreign__exported_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__foreign__exported_type_0_0_i2);
MR_def_label(__Compare___backend_libs__foreign__exported_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__foreign__exported_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__foreign__exported_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__foreign__exported_type_0_0_i7);
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
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___backend_libs__foreign__exported_type_0_0_i9);
MR_def_label(__Compare___backend_libs__foreign__exported_type_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__foreign__exported_type_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___backend_libs__foreign__exported_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__foreign__exported_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__foreign__exported_type_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__foreign__exported_type_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___parse_tree__prog_data__mer_type_0_0);
MR_def_label(__Compare___backend_libs__foreign__exported_type_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module17)
	MR_init_entry1(backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__filter_decls__176__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__foreign__IntroducedFrom__pred__filter_decls__176__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module18)
	MR_init_entry1(backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__filter_imports__181__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__foreign__IntroducedFrom__pred__filter_imports__181__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module19)
	MR_init_entry1(backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__filter_bodys__186__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__foreign__IntroducedFrom__pred__filter_bodys__186__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__foreign_module20)
	MR_init_entry1(backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__filter_exports__191__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__foreign__IntroducedFrom__pred__filter_exports__191__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(parse_tree__prog_data__set_foreign_language_3_0);

MR_BEGIN_MODULE(backend_libs__foreign_module21)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0);
	MR_init_label6(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0,4,6,5,8,9,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__extrude_pragma_implementation__[2, 3, 4, 5]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0_i4);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0_i6);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__set_foreign_language_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0_i8);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(backend_libs__foreign__extrude_pragma_implementation_2_6_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0_i9);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_117_100_101_95_112_114_97_103_109_97_95_105_109_112_108_101_109_101_110_116_97_116_105_111_110_95_95_91_50_44_32_51_44_32_52_44_32_53_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("backend_libs.foreign", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140backend_libs.foreign.extrude_pragma_implementation\'/11", 65);
	MR_r3 = (MR_Word) MR_string_const("no suitable target languages available", 38);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__foreign_maybe_bunch_0(void)
{
	backend_libs__foreign_module0();
	backend_libs__foreign_module1();
	backend_libs__foreign_module2();
	backend_libs__foreign_module3();
	backend_libs__foreign_module4();
	backend_libs__foreign_module5();
	backend_libs__foreign_module6();
	backend_libs__foreign_module7();
	backend_libs__foreign_module8();
	backend_libs__foreign_module9();
	backend_libs__foreign_module10();
	backend_libs__foreign_module11();
	backend_libs__foreign_module12();
	backend_libs__foreign_module13();
	backend_libs__foreign_module14();
	backend_libs__foreign_module15();
	backend_libs__foreign_module16();
	backend_libs__foreign_module17();
	backend_libs__foreign_module18();
	backend_libs__foreign_module19();
	backend_libs__foreign_module20();
	backend_libs__foreign_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__foreign__init(void);
void mercury__backend_libs__foreign__init_type_tables(void);
void mercury__backend_libs__foreign__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__foreign__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__foreign__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__backend_libs__foreign__init_threadscope_string_table(void);
#endif

void mercury__backend_libs__foreign__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__foreign_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__foreign__type_ctor_info_exported_type_0,
		backend_libs__foreign__exported_type_0_0);
	mercury__backend_libs__foreign__init_debugger();
}

void mercury__backend_libs__foreign__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__foreign__type_ctor_info_exported_type_0);
	}
}


void mercury__backend_libs__foreign__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__foreign__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__foreign);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__foreign__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__backend_libs__foreign__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
