/*
** Automatically generated from `measurements.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__measurements__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "measurements.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "measurements.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "measurements.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "measurements.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "measurements.c"
#line 44 "measurements.c"
#include "measurements.mh"

#line 47 "measurements.c"
#line 48 "measurements.c"
#ifndef MEASUREMENTS_DECL_GUARD
#define MEASUREMENTS_DECL_GUARD

#line 52 "measurements.c"
#line 53 "measurements.c"

#endif
#line 56 "measurements.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_measurements__type_ctor_info_own_prof_info_0,
	mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
MR_decl_label4(measurements__decompress_profile_10_0, 4,5,6,7)
MR_decl_label4(measurements__is_inactive_1_0, 4,11,13,1)
MR_decl_label1(measurements__is_zero_inherit_prof_info_1_0, 1)
MR_decl_label5(measurements__is_zero_own_prof_info_1_0, 4,13,19,24,1)
MR_decl_label8(fn__measurements__add_inherit_to_own_2_0, 4,5,6,7,8,9,2,10)
MR_decl_label2(fn__measurements__add_inherit_to_own_2_0, 11,12)
MR_decl_label4(fn__measurements__add_own_to_inherit_2_0, 4,5,6,7)
MR_decl_label8(fn__measurements__add_own_to_own_2_0, 6,7,2,10,11,12,13,14)
MR_decl_label8(fn__measurements__add_own_to_own_2_0, 15,8,16,17,18,19,20,21)
MR_decl_label5(fn__measurements__add_own_to_own_2_0, 22,23,24,25,26)
MR_decl_label4(fn__measurements__allocs_1_0, 4,5,6,7)
MR_decl_label3(fn__measurements__calls_1_0, 4,6,7)
MR_decl_label3(fn__measurements__callseqs_1_0, 4,6,7)
MR_decl_label7(fn__measurements__compress_profile_1_0, 4,5,15,20,21,28,2)
MR_decl_label3(fn__measurements__compress_profile_8_0, 2,12,8)
MR_decl_label1(fn__measurements__excps_1_0, 7)
MR_decl_label2(fn__measurements__fails_1_0, 6,7)
MR_decl_label8(fn__measurements__own_to_string_1_0, 4,5,6,7,8,9,10,11)
MR_decl_label8(fn__measurements__own_to_string_1_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(fn__measurements__own_to_string_1_0, 20,21,22,23,24,25,26,27)
MR_decl_label8(fn__measurements__own_to_string_1_0, 29,30,31,32,33,34,35,36)
MR_decl_label8(fn__measurements__own_to_string_1_0, 37,38,39,40,41,42,43,45)
MR_decl_label8(fn__measurements__own_to_string_1_0, 46,47,48,49,50,51,52,53)
MR_decl_label8(fn__measurements__own_to_string_1_0, 54,55,58,59,60,61,62,63)
MR_decl_label3(fn__measurements__own_to_string_1_0, 64,65,66)
MR_decl_label3(fn__measurements__quanta_1_0, 4,5,7)
MR_decl_label1(fn__measurements__redos_1_0, 7)
MR_decl_label4(fn__measurements__subtract_own_from_inherit_2_0, 4,5,6,7)
MR_decl_label4(fn__measurements__words_1_0, 4,5,6,7)
MR_decl_label2(__Unify___measurements__inherit_prof_info_0_0, 4,1)
MR_decl_label6(__Unify___measurements__own_prof_info_0_0, 6,8,10,12,39,1)
MR_decl_label6(__Compare___measurements__inherit_prof_info_0_0, 3,2,5,9,13,37)
MR_decl_label8(__Compare___measurements__own_prof_info_0_0, 3,2,6,11,15,19,23,27)
MR_decl_label8(__Compare___measurements__own_prof_info_0_0, 31,35,49,53,55,59,63,67)
MR_decl_label8(__Compare___measurements__own_prof_info_0_0, 77,82,84,88,92,99,100,105)
MR_decl_label4(__Compare___measurements__own_prof_info_0_0, 106,108,112,218)
MR_def_extern_entry(fn__measurements__calls_1_0)
MR_def_extern_entry(fn__measurements__exits_1_0)
MR_def_extern_entry(fn__measurements__fails_1_0)
MR_def_extern_entry(fn__measurements__redos_1_0)
MR_def_extern_entry(fn__measurements__excps_1_0)
MR_def_extern_entry(fn__measurements__quanta_1_0)
MR_def_extern_entry(fn__measurements__callseqs_1_0)
MR_def_extern_entry(fn__measurements__allocs_1_0)
MR_def_extern_entry(fn__measurements__words_1_0)
MR_def_extern_entry(fn__measurements__zero_own_prof_info_0_0)
MR_def_extern_entry(measurements__is_zero_own_prof_info_1_0)
MR_def_extern_entry(fn__measurements__inherit_quanta_1_0)
MR_def_extern_entry(fn__measurements__inherit_callseqs_1_0)
MR_def_extern_entry(fn__measurements__inherit_allocs_1_0)
MR_def_extern_entry(fn__measurements__inherit_words_1_0)
MR_def_extern_entry(fn__measurements__zero_inherit_prof_info_0_0)
MR_def_extern_entry(measurements__is_zero_inherit_prof_info_1_0)
MR_def_extern_entry(fn__measurements__add_inherit_to_inherit_2_0)
MR_def_extern_entry(fn__measurements__add_own_to_inherit_2_0)
MR_def_extern_entry(fn__measurements__subtract_own_from_inherit_2_0)
MR_def_extern_entry(fn__measurements__subtract_inherit_from_inherit_2_0)
MR_def_extern_entry(fn__measurements__compress_profile_8_0)
MR_def_extern_entry(fn__measurements__add_inherit_to_own_2_0)
MR_def_extern_entry(fn__measurements__add_own_to_own_2_0)
MR_def_extern_entry(fn__measurements__sum_own_infos_1_0)
MR_def_extern_entry(fn__measurements__sum_inherit_infos_1_0)
MR_def_extern_entry(fn__measurements__compress_profile_1_0)
MR_def_extern_entry(measurements__decompress_profile_10_0)
MR_def_extern_entry(fn__measurements__own_to_string_1_0)
MR_def_extern_entry(measurements__is_inactive_1_0)
MR_def_extern_entry(__Unify___measurements__inherit_prof_info_0_0)
MR_def_extern_entry(__Compare___measurements__inherit_prof_info_0_0)
MR_def_extern_entry(__Unify___measurements__own_prof_info_0_0)
MR_def_extern_entry(__Compare___measurements__own_prof_info_0_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
0,
0,
0
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
0,
0,
0,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_own_infos_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_inherit_infos_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__measurements__sum_own_infos_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info),
MR_CTOR0_ADDR(measurements, own_prof_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__measurements__sum_inherit_infos_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info),
MR_CTOR0_ADDR(measurements, inherit_prof_info)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(fn__measurements__add_own_to_own_2_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(fn__measurements__add_inherit_to_inherit_2_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_0[] = {
	"opa_exits",
	"opa_fails",
	"opa_redos",
	"opa_excps",
	"opa_quanta",
	"opa_callseqs",
	"opa_allocs",
	"opa_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_0 = {
	"own_prof_all",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_0,
	mercury_data_measurements__field_names_own_prof_info_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_1[] = {
	"opd_exits",
	"opd_quanta",
	"opd_callseqs",
	"opd_allocs",
	"opd_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_1 = {
	"own_prof_det",
	5,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_1,
	mercury_data_measurements__field_names_own_prof_info_0_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_2[] = {
	"opfd_exits",
	"opfd_callseqs",
	"opfd_allocs",
	"opfd_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_2 = {
	"own_prof_fast_det",
	4,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_2,
	mercury_data_measurements__field_names_own_prof_info_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_own_prof_info_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_own_prof_info_0_3[] = {
	"opfns_exits",
	"opfns_fails",
	"opfns_callseqs"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_own_prof_info_0_3 = {
	"own_prof_fast_nomem_semi",
	3,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_own_prof_info_0_3,
	mercury_data_measurements__field_names_own_prof_info_0_3,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_0[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_0

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_1[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_2[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_2

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_own_prof_info_0_3[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_3

};

const MR_DuPtagLayout mercury_data_measurements__du_ptag_ordered_own_prof_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_own_prof_info_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_name_ordered_own_prof_info_0[] = {
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_0,
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_1,
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_2,
	&mercury_data_measurements__du_functor_desc_own_prof_info_0_3
};

const MR_Integer mercury_data_measurements__functor_number_map_own_prof_info_0[] = {
	0,
	1,
	2,
	3 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_own_prof_info_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__own_prof_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__own_prof_info_0_0)),
	"measurements",
	"own_prof_info",
	{ (void *)mercury_data_measurements__du_name_ordered_own_prof_info_0 },
	{ (void *)mercury_data_measurements__du_ptag_ordered_own_prof_info_0 },
	4,
	4,
	mercury_data_measurements__functor_number_map_own_prof_info_0
};

const MR_PseudoTypeInfo mercury_data_measurements__field_types_inherit_prof_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_measurements__field_names_inherit_prof_info_0_0[] = {
	"ipo_quanta",
	"ipo_callseqs",
	"ipo_allocs",
	"ipo_words"
};

static const MR_DuFunctorDesc mercury_data_measurements__du_functor_desc_inherit_prof_info_0_0 = {
	"inherit_prof_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_measurements__field_types_inherit_prof_info_0_0,
	mercury_data_measurements__field_names_inherit_prof_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_measurements__du_stag_ordered_inherit_prof_info_0_0[] = {
	&mercury_data_measurements__du_functor_desc_inherit_prof_info_0_0

};

const MR_DuPtagLayout mercury_data_measurements__du_ptag_ordered_inherit_prof_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_measurements__du_stag_ordered_inherit_prof_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_measurements__du_name_ordered_inherit_prof_info_0[] = {
	&mercury_data_measurements__du_functor_desc_inherit_prof_info_0_0
};

const MR_Integer mercury_data_measurements__functor_number_map_inherit_prof_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_measurements__type_ctor_info_inherit_prof_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___measurements__inherit_prof_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___measurements__inherit_prof_info_0_0)),
	"measurements",
	"inherit_prof_info",
	{ (void *)mercury_data_measurements__du_name_ordered_inherit_prof_info_0 },
	{ (void *)mercury_data_measurements__du_ptag_ordered_inherit_prof_info_0 },
	1,
	4,
	mercury_data_measurements__functor_number_map_inherit_prof_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_own_infos_1_0_1 = {
{
MR_FUNCTION,
"measurements",
"measurements",
"add_own_to_own",
3,
0
},
"measurements",
"measurements.m",
250,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__measurements__sum_inherit_infos_1_0_1 = {
{
MR_FUNCTION,
"measurements",
"measurements",
"add_inherit_to_inherit",
3,
0
},
"measurements",
"measurements.m",
253,
"d1;c3;"
};


MR_BEGIN_MODULE(measurements_module0)
	MR_init_entry1(fn__measurements__calls_1_0);
	MR_init_label3(fn__measurements__calls_1_0,4,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__calls_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__calls_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__calls_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__calls_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__calls_1_0_i7));
MR_def_label(fn__measurements__calls_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((((MR_Integer) MR_ctfield(0, MR_r1, 0) + (MR_Integer) MR_ctfield(0, MR_r1, 1)) + (MR_Integer) MR_ctfield(0, MR_r1, 3)) - (MR_Integer) MR_ctfield(0, MR_r1, 2));
	MR_proceed();
MR_def_label(fn__measurements__calls_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_proceed();
MR_def_label(fn__measurements__calls_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_ctfield(3, MR_r1, 0) + (MR_Integer) MR_ctfield(3, MR_r1, 1));
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module1)
	MR_init_entry1(fn__measurements__exits_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__exits_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module2)
	MR_init_entry1(fn__measurements__fails_1_0);
	MR_init_label2(fn__measurements__fails_1_0,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__fails_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__fails_1_0_i7) MR_AND
		MR_LABEL_AP(fn__measurements__fails_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__fails_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__fails_1_0_i7));
MR_def_label(fn__measurements__fails_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__measurements__fails_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module3)
	MR_init_entry1(fn__measurements__redos_1_0);
	MR_init_label1(fn__measurements__redos_1_0,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__redos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(fn__measurements__redos_1_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__measurements__redos_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module4)
	MR_init_entry1(fn__measurements__excps_1_0);
	MR_init_label1(fn__measurements__excps_1_0,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__excps_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_r1),0)) {
		MR_GOTO_LAB(fn__measurements__excps_1_0_i7);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
MR_def_label(fn__measurements__excps_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module5)
	MR_init_entry1(fn__measurements__quanta_1_0);
	MR_init_label3(fn__measurements__quanta_1_0,4,5,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__quanta_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__quanta_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__quanta_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__quanta_1_0_i7) MR_AND
		MR_LABEL_AP(fn__measurements__quanta_1_0_i7));
MR_def_label(fn__measurements__quanta_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_proceed();
MR_def_label(fn__measurements__quanta_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__measurements__quanta_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module6)
	MR_init_entry1(fn__measurements__callseqs_1_0);
	MR_init_label3(fn__measurements__callseqs_1_0,4,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__callseqs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i7) MR_AND
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__callseqs_1_0_i7));
MR_def_label(fn__measurements__callseqs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 5);
	MR_proceed();
MR_def_label(fn__measurements__callseqs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__measurements__callseqs_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module7)
	MR_init_entry1(fn__measurements__allocs_1_0);
	MR_init_label4(fn__measurements__allocs_1_0,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__allocs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__allocs_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__allocs_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__allocs_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__allocs_1_0_i7));
MR_def_label(fn__measurements__allocs_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 6);
	MR_proceed();
MR_def_label(fn__measurements__allocs_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 3);
	MR_proceed();
MR_def_label(fn__measurements__allocs_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 2);
	MR_proceed();
MR_def_label(fn__measurements__allocs_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module8)
	MR_init_entry1(fn__measurements__words_1_0);
	MR_init_label4(fn__measurements__words_1_0,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__words_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__words_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__words_1_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__words_1_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__words_1_0_i7));
MR_def_label(fn__measurements__words_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 7);
	MR_proceed();
MR_def_label(fn__measurements__words_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 4);
	MR_proceed();
MR_def_label(fn__measurements__words_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(2, MR_r1, 3);
	MR_proceed();
MR_def_label(fn__measurements__words_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module9)
	MR_init_entry1(fn__measurements__zero_own_prof_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__zero_own_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module10)
	MR_init_entry1(measurements__is_zero_own_prof_info_1_0);
	MR_init_label5(measurements__is_zero_own_prof_info_1_0,4,13,19,24,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__is_zero_own_prof_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i4) MR_AND
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i13) MR_AND
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i19) MR_AND
		MR_LABEL_AP(measurements__is_zero_own_prof_info_1_0_i24));
MR_def_label(measurements__is_zero_own_prof_info_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 7);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_zero_own_prof_info_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 4);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_zero_own_prof_info_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 3);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_zero_own_prof_info_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_own_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_zero_own_prof_info_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module11)
	MR_init_entry1(fn__measurements__inherit_quanta_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_quanta_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module12)
	MR_init_entry1(fn__measurements__inherit_callseqs_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_callseqs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module13)
	MR_init_entry1(fn__measurements__inherit_allocs_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_allocs_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module14)
	MR_init_entry1(fn__measurements__inherit_words_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__inherit_words_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module15)
	MR_init_entry1(fn__measurements__zero_inherit_prof_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__zero_inherit_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module16)
	MR_init_entry1(measurements__is_zero_inherit_prof_info_1_0);
	MR_init_label1(measurements__is_zero_inherit_prof_info_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__is_zero_inherit_prof_info_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_inherit_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_inherit_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_zero_inherit_prof_info_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_zero_inherit_prof_info_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module17)
	MR_init_entry1(fn__measurements__add_inherit_to_inherit_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_inherit_to_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_r1, 0) + (MR_Integer) MR_ctfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_r1, 1) + (MR_Integer) MR_ctfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_r1, 2) + (MR_Integer) MR_ctfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_r1, 3) + (MR_Integer) MR_ctfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module18)
	MR_init_entry1(fn__measurements__add_own_to_inherit_2_0);
	MR_init_label4(fn__measurements__add_own_to_inherit_2_0,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_own_to_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_inherit_2_0_i7));
MR_def_label(fn__measurements__add_own_to_inherit_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_r1, 4) + (MR_Integer) MR_ctfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_r1, 5) + (MR_Integer) MR_ctfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_r1, 6) + (MR_Integer) MR_ctfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_r1, 7) + (MR_Integer) MR_ctfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__add_own_to_inherit_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(1, MR_r1, 1) + (MR_Integer) MR_ctfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(1, MR_r1, 2) + (MR_Integer) MR_ctfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(1, MR_r1, 3) + (MR_Integer) MR_ctfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(1, MR_r1, 4) + (MR_Integer) MR_ctfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__add_own_to_inherit_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 + (MR_Integer) MR_ctfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(2, MR_r1, 1) + (MR_Integer) MR_ctfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(2, MR_r1, 2) + (MR_Integer) MR_ctfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(2, MR_r1, 3) + (MR_Integer) MR_ctfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__add_own_to_inherit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) 0 + (MR_Integer) MR_ctfield(0, MR_tempr2, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(3, MR_r1, 2) + (MR_Integer) MR_ctfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) 0 + (MR_Integer) MR_ctfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) 0 + (MR_Integer) MR_ctfield(0, MR_tempr2, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module19)
	MR_init_entry1(fn__measurements__subtract_own_from_inherit_2_0);
	MR_init_label4(fn__measurements__subtract_own_from_inherit_2_0,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__subtract_own_from_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__subtract_own_from_inherit_2_0_i7));
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 0) - (MR_Integer) MR_ctfield(0, MR_r1, 4));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 1) - (MR_Integer) MR_ctfield(0, MR_r1, 5));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) - (MR_Integer) MR_ctfield(0, MR_r1, 6));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) - (MR_Integer) MR_ctfield(0, MR_r1, 7));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 0) - (MR_Integer) MR_ctfield(1, MR_r1, 1));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 1) - (MR_Integer) MR_ctfield(1, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) - (MR_Integer) MR_ctfield(1, MR_r1, 3));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) - (MR_Integer) MR_ctfield(1, MR_r1, 4));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 0) - (MR_Integer) 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 1) - (MR_Integer) MR_ctfield(2, MR_r1, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) - (MR_Integer) MR_ctfield(2, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) - (MR_Integer) MR_ctfield(2, MR_r1, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__subtract_own_from_inherit_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 0) - (MR_Integer) 0);
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 1) - (MR_Integer) MR_ctfield(3, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) - (MR_Integer) 0);
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) - (MR_Integer) 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module20)
	MR_init_entry1(fn__measurements__subtract_inherit_from_inherit_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__subtract_inherit_from_inherit_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 0) - (MR_Integer) MR_ctfield(0, MR_r1, 0));
	MR_tfield(0, MR_tempr1, 1) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 1) - (MR_Integer) MR_ctfield(0, MR_r1, 1));
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) - (MR_Integer) MR_ctfield(0, MR_r1, 2));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) - (MR_Integer) MR_ctfield(0, MR_r1, 3));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module21)
	MR_init_entry1(fn__measurements__compress_profile_8_0);
	MR_init_label3(fn__measurements__compress_profile_8_0,2,12,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__compress_profile_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tfield(3, MR_tempr1, 2) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__compress_profile_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i8);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i8);
	}
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i8);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_8_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = MR_r6;
	MR_tfield(2, MR_tempr1, 2) = MR_r7;
	MR_tfield(2, MR_tempr1, 3) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__compress_profile_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r5;
	MR_tfield(1, MR_tempr1, 2) = MR_r6;
	MR_tfield(1, MR_tempr1, 3) = MR_r7;
	MR_tfield(1, MR_tempr1, 4) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__compress_profile_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 8);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_r5;
	MR_tfield(0, MR_tempr1, 5) = MR_r6;
	MR_tfield(0, MR_tempr1, 6) = MR_r7;
	MR_tfield(0, MR_tempr1, 7) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module22)
	MR_init_entry1(fn__measurements__add_inherit_to_own_2_0);
	MR_init_label8(fn__measurements__add_inherit_to_own_2_0,4,5,6,7,8,9,2,10)
	MR_init_label2(fn__measurements__add_inherit_to_own_2_0,11,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_inherit_to_own_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i5) MR_AND
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__add_inherit_to_own_2_0_i8));
MR_def_label(fn__measurements__add_inherit_to_own_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 2);
	MR_sv(6) = MR_ctfield(0, MR_r1, 3);
	MR_sv(7) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 0) + (MR_Integer) MR_ctfield(0, MR_r1, 4));
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(fn__measurements__add_inherit_to_own_2_0_i2);
	}
MR_def_label(fn__measurements__add_inherit_to_own_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = (MR_Integer) 0;
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 0) + (MR_Integer) MR_ctfield(1, MR_r1, 1));
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(fn__measurements__add_inherit_to_own_2_0_i2);
	}
MR_def_label(fn__measurements__add_inherit_to_own_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_inherit_to_own_2_0_i7);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(4) = (MR_Integer) 0;
	MR_r3 = MR_sv(5);
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = ((MR_Integer) MR_r3 + (MR_Integer) MR_r2);
	MR_sv(8) = MR_ctfield(0, MR_sv(1), 1);
	MR_GOTO_LAB(fn__measurements__add_inherit_to_own_2_0_i2);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_inherit_to_own_2_0_i9);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(6) = (MR_Integer) 0;
	MR_sv(7) = ((MR_Integer) MR_tempr2 + (MR_Integer) MR_tempr1);
	MR_sv(8) = MR_ctfield(0, MR_sv(1), 1);
	}
MR_def_label(fn__measurements__add_inherit_to_own_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__measurements__add_inherit_to_own_2_0_i10);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = ((MR_Integer) MR_sv(8) + (MR_Integer) MR_r1);
	MR_sv(9) = MR_ctfield(0, MR_sv(1), 2);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__measurements__add_inherit_to_own_2_0_i11);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(9) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__measurements__add_inherit_to_own_2_0_i12);
MR_def_label(fn__measurements__add_inherit_to_own_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__measurements__compress_profile_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module23)
	MR_init_entry1(fn__measurements__add_own_to_own_2_0);
	MR_init_label8(fn__measurements__add_own_to_own_2_0,6,7,2,10,11,12,13,14)
	MR_init_label8(fn__measurements__add_own_to_own_2_0,15,8,16,17,18,19,20,21)
	MR_init_label5(fn__measurements__add_own_to_own_2_0,22,23,24,25,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__add_own_to_own_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i7) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i6) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i7));
MR_def_label(fn__measurements__add_own_to_own_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_const_mask_field(MR_r1, 0);
	MR_sv(4) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__measurements__add_own_to_own_2_0_i2);
MR_def_label(fn__measurements__add_own_to_own_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(3) = MR_const_mask_field(MR_r1, 0);
	MR_sv(4) = MR_const_mask_field(MR_r1, 1);
MR_def_label(fn__measurements__add_own_to_own_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i10) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i11) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i12) MR_AND
		MR_LABEL_AP(fn__measurements__add_own_to_own_2_0_i14));
MR_def_label(fn__measurements__add_own_to_own_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 0) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 1) + (MR_Integer) MR_sv(4));
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_GOTO_LAB(fn__measurements__add_own_to_own_2_0_i8);
	}
MR_def_label(fn__measurements__add_own_to_own_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_ctfield(1, MR_r2, 0) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) 0 + (MR_Integer) MR_sv(4));
	MR_sv(5) = (MR_Integer) 0;
	MR_GOTO_LAB(fn__measurements__add_own_to_own_2_0_i8);
MR_def_label(fn__measurements__add_own_to_own_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(2, MR_tempr1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__measurements__add_own_to_own_2_0_i13);
MR_def_label(fn__measurements__add_own_to_own_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) 0 + (MR_Integer) MR_sv(4));
	MR_sv(5) = MR_r2;
	MR_GOTO_LAB(fn__measurements__add_own_to_own_2_0_i8);
MR_def_label(fn__measurements__add_own_to_own_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(3, MR_tempr1, 0);
	MR_sv(6) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__measurements__add_own_to_own_2_0_i15);
MR_def_label(fn__measurements__add_own_to_own_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(3) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_sv(3));
	MR_sv(4) = ((MR_Integer) MR_sv(6) + (MR_Integer) MR_sv(4));
	MR_sv(5) = MR_tempr1;
	}
MR_def_label(fn__measurements__add_own_to_own_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__measurements__redos_1_0,
		fn__measurements__add_own_to_own_2_0_i16);
MR_def_label(fn__measurements__add_own_to_own_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = ((MR_Integer) MR_sv(5) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__excps_1_0,
		fn__measurements__add_own_to_own_2_0_i17);
MR_def_label(fn__measurements__add_own_to_own_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__excps_1_0,
		fn__measurements__add_own_to_own_2_0_i18);
MR_def_label(fn__measurements__add_own_to_own_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = ((MR_Integer) MR_sv(6) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_own_to_own_2_0_i19);
MR_def_label(fn__measurements__add_own_to_own_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__quanta_1_0,
		fn__measurements__add_own_to_own_2_0_i20);
MR_def_label(fn__measurements__add_own_to_own_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = ((MR_Integer) MR_sv(7) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__measurements__add_own_to_own_2_0_i21);
MR_def_label(fn__measurements__add_own_to_own_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__callseqs_1_0,
		fn__measurements__add_own_to_own_2_0_i22);
MR_def_label(fn__measurements__add_own_to_own_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = ((MR_Integer) MR_sv(8) + (MR_Integer) MR_r1);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__measurements__add_own_to_own_2_0_i23);
MR_def_label(fn__measurements__add_own_to_own_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__measurements__allocs_1_0,
		fn__measurements__add_own_to_own_2_0_i24);
MR_def_label(fn__measurements__add_own_to_own_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = ((MR_Integer) MR_sv(9) + (MR_Integer) MR_tempr1);
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__measurements__add_own_to_own_2_0_i25);
MR_def_label(fn__measurements__add_own_to_own_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__measurements__words_1_0,
		fn__measurements__add_own_to_own_2_0_i26);
MR_def_label(fn__measurements__add_own_to_own_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = ((MR_Integer) MR_sv(2) + (MR_Integer) MR_tempr1);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(fn__measurements__compress_profile_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__list__foldl_3_0);

MR_BEGIN_MODULE(measurements_module24)
	MR_init_entry1(fn__measurements__sum_own_infos_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__sum_own_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, own_prof_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r5 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module25)
	MR_init_entry1(fn__measurements__sum_inherit_infos_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__sum_inherit_infos_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(measurements, inherit_prof_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_tailcall_ent(fn__list__foldl_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module26)
	MR_init_entry1(fn__measurements__compress_profile_1_0);
	MR_init_label7(fn__measurements__compress_profile_1_0,4,5,15,20,21,28,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__compress_profile_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i20) MR_AND
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i28) MR_AND
		MR_LABEL_AP(fn__measurements__compress_profile_1_0_i2));
MR_def_label(fn__measurements__compress_profile_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 7);
	MR_r3 = MR_ctfield(0, MR_r1, 6);
	MR_r4 = MR_ctfield(0, MR_r1, 5);
	MR_r5 = MR_ctfield(0, MR_r1, 4);
	MR_r6 = MR_ctfield(0, MR_r1, 3);
	MR_r7 = MR_ctfield(0, MR_r1, 2);
	MR_r8 = MR_ctfield(0, MR_r1, 1);
	MR_r9 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i5);
	}
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i5);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i5);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i5);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = MR_r9;
	MR_tfield(3, MR_r1, 1) = MR_r8;
	MR_tfield(3, MR_r1, 2) = MR_r4;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r8,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	if (MR_INT_NE(MR_r7,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	if (MR_INT_NE(MR_r6,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i15);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r9;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = MR_r3;
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_r1, 0) = MR_r9;
	MR_tfield(1, MR_r1, 1) = MR_r5;
	MR_tfield(1, MR_r1, 2) = MR_r4;
	MR_tfield(1, MR_r1, 3) = MR_r3;
	MR_tfield(1, MR_r1, 4) = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(1, MR_r1, 4);
	MR_r3 = MR_ctfield(1, MR_r1, 3);
	MR_r4 = MR_ctfield(1, MR_r1, 2);
	MR_r5 = MR_ctfield(1, MR_r1, 1);
	MR_r6 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i21);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i21);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = MR_r6;
	MR_tfield(3, MR_r1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r1, 2) = MR_r4;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 4);
	MR_tfield(2, MR_r1, 0) = MR_r6;
	MR_tfield(2, MR_r1, 1) = MR_r4;
	MR_tfield(2, MR_r1, 2) = MR_r3;
	MR_tfield(2, MR_r1, 3) = MR_r2;
	MR_proceed();
MR_def_label(fn__measurements__compress_profile_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__measurements__compress_profile_1_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__measurements__compress_profile_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module27)
	MR_init_entry1(measurements__decompress_profile_10_0);
	MR_init_label4(measurements__decompress_profile_10_0,4,5,6,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__decompress_profile_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(measurements__decompress_profile_10_0_i4) MR_AND
		MR_LABEL_AP(measurements__decompress_profile_10_0_i5) MR_AND
		MR_LABEL_AP(measurements__decompress_profile_10_0_i6) MR_AND
		MR_LABEL_AP(measurements__decompress_profile_10_0_i7));
MR_def_label(measurements__decompress_profile_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (((MR_Integer) MR_ctfield(0, MR_r1, 0) + (MR_Integer) MR_ctfield(0, MR_r1, 1)) - (MR_Integer) MR_ctfield(0, MR_r1, 2));
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr1, 2);
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	MR_r6 = MR_ctfield(0, MR_tempr1, 4);
	MR_r7 = MR_ctfield(0, MR_tempr1, 5);
	MR_r8 = MR_ctfield(0, MR_tempr1, 6);
	MR_r9 = MR_ctfield(0, MR_tempr1, 7);
	MR_proceed();
	}
MR_def_label(measurements__decompress_profile_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = MR_ctfield(1, MR_tempr1, 1);
	MR_r7 = MR_ctfield(1, MR_tempr1, 2);
	MR_r8 = MR_ctfield(1, MR_tempr1, 3);
	MR_r9 = MR_ctfield(1, MR_tempr1, 4);
	MR_proceed();
	}
MR_def_label(measurements__decompress_profile_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_ctfield(2, MR_tempr1, 1);
	MR_r8 = MR_ctfield(2, MR_tempr1, 2);
	MR_r9 = MR_ctfield(2, MR_tempr1, 3);
	MR_proceed();
	}
MR_def_label(measurements__decompress_profile_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = ((MR_Integer) MR_ctfield(3, MR_r1, 0) + (MR_Integer) MR_ctfield(3, MR_r1, 1));
	MR_r2 = MR_ctfield(3, MR_tempr1, 0);
	MR_r3 = MR_ctfield(3, MR_tempr1, 1);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Integer) 0;
	MR_r6 = (MR_Integer) 0;
	MR_r7 = MR_ctfield(3, MR_tempr1, 2);
	MR_r8 = (MR_Integer) 0;
	MR_r9 = (MR_Integer) 0;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(measurements_module28)
	MR_init_entry1(fn__measurements__own_to_string_1_0);
	MR_init_label8(fn__measurements__own_to_string_1_0,4,5,6,7,8,9,10,11)
	MR_init_label8(fn__measurements__own_to_string_1_0,12,13,14,15,16,17,18,19)
	MR_init_label8(fn__measurements__own_to_string_1_0,20,21,22,23,24,25,26,27)
	MR_init_label8(fn__measurements__own_to_string_1_0,29,30,31,32,33,34,35,36)
	MR_init_label8(fn__measurements__own_to_string_1_0,37,38,39,40,41,42,43,45)
	MR_init_label8(fn__measurements__own_to_string_1_0,46,47,48,49,50,51,52,53)
	MR_init_label8(fn__measurements__own_to_string_1_0,54,55,58,59,60,61,62,63)
	MR_init_label3(fn__measurements__own_to_string_1_0,64,65,66)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__measurements__own_to_string_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i4) MR_AND
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i29) MR_AND
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i45) MR_AND
		MR_LABEL_AP(fn__measurements__own_to_string_1_0_i58));
MR_def_label(fn__measurements__own_to_string_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(6) = MR_ctfield(0, MR_r1, 6);
	MR_sv(7) = MR_ctfield(0, MR_r1, 7);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i5);
MR_def_label(fn__measurements__own_to_string_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i6);
MR_def_label(fn__measurements__own_to_string_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i7);
MR_def_label(fn__measurements__own_to_string_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i8);
MR_def_label(fn__measurements__own_to_string_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i9);
MR_def_label(fn__measurements__own_to_string_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i10);
MR_def_label(fn__measurements__own_to_string_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i11);
MR_def_label(fn__measurements__own_to_string_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_sv(7) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i12);
MR_def_label(fn__measurements__own_to_string_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i13);
MR_def_label(fn__measurements__own_to_string_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i14);
MR_def_label(fn__measurements__own_to_string_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i15);
MR_def_label(fn__measurements__own_to_string_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i16);
MR_def_label(fn__measurements__own_to_string_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i17);
MR_def_label(fn__measurements__own_to_string_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i18);
MR_def_label(fn__measurements__own_to_string_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i19);
MR_def_label(fn__measurements__own_to_string_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i20);
MR_def_label(fn__measurements__own_to_string_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i21);
MR_def_label(fn__measurements__own_to_string_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i22);
MR_def_label(fn__measurements__own_to_string_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i23);
MR_def_label(fn__measurements__own_to_string_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i24);
MR_def_label(fn__measurements__own_to_string_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i25);
MR_def_label(fn__measurements__own_to_string_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i26);
MR_def_label(fn__measurements__own_to_string_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i27);
MR_def_label(fn__measurements__own_to_string_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("all(", 4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__measurements__own_to_string_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 2);
	MR_sv(3) = MR_ctfield(1, MR_r1, 3);
	MR_sv(4) = MR_ctfield(1, MR_r1, 4);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i30);
MR_def_label(fn__measurements__own_to_string_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i31);
MR_def_label(fn__measurements__own_to_string_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i32);
MR_def_label(fn__measurements__own_to_string_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i33);
MR_def_label(fn__measurements__own_to_string_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i34);
MR_def_label(fn__measurements__own_to_string_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i35);
MR_def_label(fn__measurements__own_to_string_1_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i36);
MR_def_label(fn__measurements__own_to_string_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i37);
MR_def_label(fn__measurements__own_to_string_1_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i38);
MR_def_label(fn__measurements__own_to_string_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i39);
MR_def_label(fn__measurements__own_to_string_1_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i40);
MR_def_label(fn__measurements__own_to_string_1_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i41);
MR_def_label(fn__measurements__own_to_string_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i42);
MR_def_label(fn__measurements__own_to_string_1_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i43);
MR_def_label(fn__measurements__own_to_string_1_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("det(", 4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__measurements__own_to_string_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_sv(2) = MR_ctfield(2, MR_r1, 2);
	MR_sv(3) = MR_ctfield(2, MR_r1, 3);
	MR_r1 = MR_ctfield(2, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i46);
MR_def_label(fn__measurements__own_to_string_1_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i47);
MR_def_label(fn__measurements__own_to_string_1_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i48);
MR_def_label(fn__measurements__own_to_string_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i49);
MR_def_label(fn__measurements__own_to_string_1_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i50);
MR_def_label(fn__measurements__own_to_string_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i51);
MR_def_label(fn__measurements__own_to_string_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i52);
MR_def_label(fn__measurements__own_to_string_1_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i53);
MR_def_label(fn__measurements__own_to_string_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i54);
MR_def_label(fn__measurements__own_to_string_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i55);
MR_def_label(fn__measurements__own_to_string_1_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i66);
MR_def_label(fn__measurements__own_to_string_1_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(3, MR_r1, 1);
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r1, 0);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i59);
MR_def_label(fn__measurements__own_to_string_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i60);
MR_def_label(fn__measurements__own_to_string_1_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__measurements__own_to_string_1_0_i61);
MR_def_label(fn__measurements__own_to_string_1_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i62);
MR_def_label(fn__measurements__own_to_string_1_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i63);
MR_def_label(fn__measurements__own_to_string_1_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i64);
MR_def_label(fn__measurements__own_to_string_1_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i65);
MR_def_label(fn__measurements__own_to_string_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__measurements__own_to_string_1_0_i66);
MR_def_label(fn__measurements__own_to_string_1_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("fast_det(", 9);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module29)
	MR_init_entry1(measurements__is_inactive_1_0);
	MR_init_label4(measurements__is_inactive_1_0,4,11,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__measurements__is_inactive_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(measurements__is_inactive_1_0_i4) MR_AND
		MR_LABEL_AP(measurements__is_inactive_1_0_i11) MR_AND
		MR_LABEL_AP(measurements__is_inactive_1_0_i11) MR_AND
		MR_LABEL_AP(measurements__is_inactive_1_0_i13));
MR_def_label(measurements__is_inactive_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_inactive_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_inactive_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_inactive_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_inactive_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_const_mask_field(MR_r1, 0);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_inactive_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(measurements__is_inactive_1_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_proceed();
	}
MR_def_label(measurements__is_inactive_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module30)
	MR_init_entry1(__Unify___measurements__inherit_prof_info_0_0);
	MR_init_label2(__Unify___measurements__inherit_prof_info_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__inherit_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___measurements__inherit_prof_info_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__inherit_prof_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurements__inherit_prof_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(measurements_module31)
	MR_init_entry1(__Compare___measurements__inherit_prof_info_0_0);
	MR_init_label6(__Compare___measurements__inherit_prof_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__inherit_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i2);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___measurements__inherit_prof_info_0_0_i5);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__inherit_prof_info_0_0_i9);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__inherit_prof_info_0_0_i13);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__inherit_prof_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__inherit_prof_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module32)
	MR_init_entry1(__Unify___measurements__own_prof_info_0_0);
	MR_init_label6(__Unify___measurements__own_prof_info_0_0,6,8,10,12,39,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___measurements__own_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i39);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i6) MR_AND
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i8) MR_AND
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i10) MR_AND
		MR_LABEL_AP(__Unify___measurements__own_prof_info_0_0_i12));
MR_def_label(__Unify___measurements__own_prof_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 5);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 6);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 6);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 7);
	MR_r1 = MR_ctfield(0, MR_tempr3, 7);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 3);
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 4);
	MR_r1 = MR_ctfield(1, MR_tempr3, 4);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(2, MR_r1, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 1);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(2, MR_r1, 3);
	MR_r1 = MR_ctfield(2, MR_tempr3, 3);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(3, MR_r1, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_tempr2 = MR_ctfield(3, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___measurements__own_prof_info_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_tempr3, 2);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___measurements__own_prof_info_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___measurements__own_prof_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(measurements_module33)
	MR_init_entry1(__Compare___measurements__own_prof_info_0_0);
	MR_init_label8(__Compare___measurements__own_prof_info_0_0,3,2,6,11,15,19,23,27)
	MR_init_label8(__Compare___measurements__own_prof_info_0_0,31,35,49,53,55,59,63,67)
	MR_init_label8(__Compare___measurements__own_prof_info_0_0,77,82,84,88,92,99,100,105)
	MR_init_label4(__Compare___measurements__own_prof_info_0_0,106,108,112,218)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___measurements__own_prof_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i2);
MR_def_label(__Compare___measurements__own_prof_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___measurements__own_prof_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i6) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i49) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i77) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i100));
MR_def_label(__Compare___measurements__own_prof_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(2);
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i99);
	}
	MR_tempr4 = MR_r3;
	MR_sv(14) = MR_ctfield(0, MR_tempr4, 1);
	MR_sv(13) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(12) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(11) = MR_ctfield(0, MR_tempr4, 4);
	MR_sv(10) = MR_ctfield(0, MR_tempr4, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr4, 6);
	MR_sv(8) = MR_ctfield(0, MR_tempr4, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr4, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i11);
MR_def_label(__Compare___measurements__own_prof_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i15);
MR_def_label(__Compare___measurements__own_prof_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i19);
MR_def_label(__Compare___measurements__own_prof_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i23);
MR_def_label(__Compare___measurements__own_prof_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i27);
MR_def_label(__Compare___measurements__own_prof_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i31);
MR_def_label(__Compare___measurements__own_prof_info_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i35);
MR_def_label(__Compare___measurements__own_prof_info_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i53) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i99) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i99));
MR_def_label(__Compare___measurements__own_prof_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(8) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(6) = MR_ctfield(1, MR_tempr3, 3);
	MR_sv(5) = MR_ctfield(1, MR_tempr3, 4);
	MR_tempr4 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr4, 4);
	MR_sv(3) = MR_ctfield(1, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(1, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i55);
MR_def_label(__Compare___measurements__own_prof_info_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i59);
MR_def_label(__Compare___measurements__own_prof_info_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i63);
MR_def_label(__Compare___measurements__own_prof_info_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i67);
MR_def_label(__Compare___measurements__own_prof_info_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r4),
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i105) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i82) MR_AND
		MR_LABEL_AP(__Compare___measurements__own_prof_info_0_0_i99));
MR_def_label(__Compare___measurements__own_prof_info_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_ctfield(2, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(2, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(2, MR_tempr3, 3);
	MR_tempr4 = MR_r4;
	MR_sv(3) = MR_ctfield(2, MR_tempr4, 3);
	MR_tempr1 = MR_ctfield(2, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(2, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i84);
MR_def_label(__Compare___measurements__own_prof_info_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i88);
MR_def_label(__Compare___measurements__own_prof_info_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i92);
MR_def_label(__Compare___measurements__own_prof_info_0_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___measurements__own_prof_info_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	if (MR_INT_EQ(MR_tag(MR_r4),3)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i106);
	}
MR_def_label(__Compare___measurements__own_prof_info_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(15);
MR_def_label(__Compare___measurements__own_prof_info_0_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_r3;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 2);
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_tempr2 = MR_ctfield(3, MR_tempr4, 1);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(3, MR_tempr3, 0);
	MR_r2 = MR_ctfield(3, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i108);
MR_def_label(__Compare___measurements__own_prof_info_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___measurements__own_prof_info_0_0_i112);
MR_def_label(__Compare___measurements__own_prof_info_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___measurements__own_prof_info_0_0_i218);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___measurements__own_prof_info_0_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__measurements_maybe_bunch_0(void)
{
	measurements_module0();
	measurements_module1();
	measurements_module2();
	measurements_module3();
	measurements_module4();
	measurements_module5();
	measurements_module6();
	measurements_module7();
	measurements_module8();
	measurements_module9();
	measurements_module10();
	measurements_module11();
	measurements_module12();
	measurements_module13();
	measurements_module14();
	measurements_module15();
	measurements_module16();
	measurements_module17();
	measurements_module18();
	measurements_module19();
	measurements_module20();
	measurements_module21();
	measurements_module22();
	measurements_module23();
	measurements_module24();
	measurements_module25();
	measurements_module26();
	measurements_module27();
	measurements_module28();
	measurements_module29();
	measurements_module30();
	measurements_module31();
	measurements_module32();
	measurements_module33();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__measurements__init(void);
void mercury__measurements__init_type_tables(void);
void mercury__measurements__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__measurements__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__measurements__init_complexity_procs(void);
#endif

void mercury__measurements__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__measurements_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_own_prof_info_0,
		measurements__own_prof_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_measurements__type_ctor_info_inherit_prof_info_0,
		measurements__inherit_prof_info_0_0);
	mercury__measurements__init_debugger();
}

void mercury__measurements__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_own_prof_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_measurements__type_ctor_info_inherit_prof_info_0);
	}
}


void mercury__measurements__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__measurements__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__measurements__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
