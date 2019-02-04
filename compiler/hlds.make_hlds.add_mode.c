/*
** Automatically generated from `add_mode.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__add_mode__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.add_mode.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "hlds.make_hlds.add_mode.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "hlds.make_hlds.add_mode.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "hlds.make_hlds.add_mode.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "hlds.make_hlds.add_mode.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "hlds.make_hlds.add_mode.c"
#line 49 "hlds.make_hlds.add_mode.c"
#include "hlds.make_hlds.add_mode.mh"

#line 52 "hlds.make_hlds.add_mode.c"
#line 53 "hlds.make_hlds.add_mode.c"
#ifndef HLDS__MAKE_HLDS__ADD_MODE_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_MODE_DECL_GUARD

#line 57 "hlds.make_hlds.add_mode.c"
#line 58 "hlds.make_hlds.add_mode.c"

#endif
#line 61 "hlds.make_hlds.add_mode.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
MR_decl_label7(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0, 5,11,9,13,14,15,3)
MR_decl_label9(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0, 41,3,5,2,6,8,11,14,7)
MR_decl_label8(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0, 30,3,5,2,6,8,11,7)
MR_decl_label8(hlds__make_hlds__add_mode__module_add_inst_defn_7_0, 2,3,4,5,6,8,10,11)
MR_decl_label10(hlds__make_hlds__add_mode__module_add_mode_defn_7_0, 2,4,9,7,11,12,13,14,15,16)
MR_decl_label8(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0, 5,8,10,12,17,20,21,7)
MR_decl_label8(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0, 5,8,10,12,17,20,21,7)
MR_decl_label3(__Unify___hlds__make_hlds__add_mode__circ_id_0_0, 4,6,1)
MR_decl_label4(__Compare___hlds__make_hlds__add_mode__circ_id_0_0, 3,2,5,21)
MR_decl_static(fn__hlds__make_hlds__add_mode__inst_id_to_circ_id_1_0)
MR_decl_static(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0)
MR_decl_static(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0)
MR_def_extern_entry(hlds__make_hlds__add_mode__module_add_inst_defn_7_0)
MR_decl_static(fn__hlds__make_hlds__add_mode__mode_id_to_circ_id_1_0)
MR_decl_static(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0)
MR_decl_static(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0)
MR_def_extern_entry(hlds__make_hlds__add_mode__module_add_mode_defn_7_0)
MR_decl_static(__Unify___hlds__make_hlds__add_mode__circ_id_0_0)
MR_decl_static(__Compare___hlds__make_hlds__add_mode__circ_id_0_0)
MR_decl_static(fn__hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__240__1_1_0)
MR_decl_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0)

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__add_mode__type_ctor_info_circ_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mode_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_2;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, inst_id),
MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id),
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mode_id),
MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id)
},
{
(MR_Word *) &mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id),
MR_CTOR0_ADDR(parse_tree__error_util, format_component)
},
};

static const struct mercury_type_1 mercury_common_1[4] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(fn__hlds__make_hlds__add_mode__inst_id_to_circ_id_1_0),
0
},
{
MR_COMMON(0,1),
MR_ENTRY_AP(fn__hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__240__1_1_0),
0
},
{
MR_COMMON(0,2),
MR_ENTRY_AP(fn__hlds__make_hlds__add_mode__mode_id_to_circ_id_1_0),
0
},
{
MR_COMMON(0,3),
MR_ENTRY_AP(fn__hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__240__1_1_0),
0
},
};

static const struct mercury_type_2 mercury_common_2[2] =
{
{
4,
MR_string_const("Error: circular equivalence", 27)
},
{
3,
MR_string_const(".", 1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
static const struct mercury_type_3 mercury_common_3[2] =
{
{
{
MR_TAG_COMMON(3,2,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_hlds__make_hlds__add_mode__field_types_circ_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0 = {
	"circ_id",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_hlds__make_hlds__add_mode__field_types_circ_id_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0[] = {
	&mercury_data_hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0

};

const MR_DuPtagLayout mercury_data_hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_hlds__make_hlds__add_mode__du_stag_ordered_circ_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_hlds__make_hlds__add_mode__du_name_ordered_circ_id_0[] = {
	&mercury_data_hlds__make_hlds__add_mode__du_functor_desc_circ_id_0_0
};

const MR_Integer mercury_data_hlds__make_hlds__add_mode__functor_number_map_circ_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__add_mode__type_ctor_info_circ_id_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__add_mode__circ_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__add_mode__circ_id_0_0)),
	"hlds.make_hlds.add_mode",
	"circ_id",
	{ (void *)mercury_data_hlds__make_hlds__add_mode__du_name_ordered_circ_id_0 },
	{ (void *)mercury_data_hlds__make_hlds__add_mode__du_ptag_ordered_circ_id_0 },
	1,
	4,
	mercury_data_hlds__make_hlds__add_mode__functor_number_map_circ_id_0
};


static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_2 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_mode",
"hlds.make_hlds.add_mode",
"lambda_add_mode_m_240",
2,
0
},
"hlds.make_hlds.add_mode",
"add_mode.m",
240,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_mode",
"hlds.make_hlds.add_mode",
"mode_id_to_circ_id",
2,
0
},
"hlds.make_hlds.add_mode",
"add_mode.m",
211,
"13"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_2 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_mode",
"hlds.make_hlds.add_mode",
"lambda_add_mode_m_240",
2,
0
},
"hlds.make_hlds.add_mode",
"add_mode.m",
240,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_1 = {
{
MR_FUNCTION,
"hlds.make_hlds.add_mode",
"hlds.make_hlds.add_mode",
"inst_id_to_circ_id",
2,
0
},
"hlds.make_hlds.add_mode",
"add_mode.m",
200,
"13"
};



MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module0)
	MR_init_entry1(fn__hlds__make_hlds__add_mode__inst_id_to_circ_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_mode__inst_id_to_circ_id_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_id_to_circ_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_mode__inst_id_to_circ_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_id_0;
MR_decl_entry(fn__list__map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__parse_tree__error_util__choose_number_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__parse_tree__error_util__component_list_to_pieces_1_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module1)
	MR_init_entry1(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0);
	MR_init_label8(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,5,8,10,12,17,20,21,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_circular_inst_equiv_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i5);
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__add_mode__circ_id_0_0,
		hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i8);
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i7);
	}
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("inst", 4);
	MR_r5 = (MR_Word) MR_string_const("insts", 5);
	MR_np_call_localret_ent(fn__parse_tree__error_util__choose_number_3_0,
		hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i10);
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i12);
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_pieces_1_0,
		hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i17);
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i20);
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0_i21);
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_data__user_inst_table_get_inst_defns_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(parse_tree__prog_mode__inst_substitute_arg_list_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module2)
	MR_init_entry1(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0);
	MR_init_label9(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,41,3,5,2,6,8,11,14,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_cyclic_inst'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(6) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i3);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__add_mode__report_circular_inst_equiv_error_6_0,
		hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i5);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_data__user_inst_table_get_inst_defns_2_0,
		hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i6);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_inst_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i8);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_r2, 1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__inst_substitute_arg_list_4_0,
		hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i11);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i7);
	}
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i14);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r5 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0_i41);
	}
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_inst_table_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_user_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_set_user_insts_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_inst_table_3_0);
MR_decl_entry(fn__list__duplicate_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module3)
	MR_init_entry1(hlds__make_hlds__add_mode__module_add_inst_defn_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_mode__module_add_inst_defn_7_0);
	MR_init_label8(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,2,3,4,5,6,8,10,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_inst_defn'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_mode__module_add_inst_defn_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(0, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 0);
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_r1, 2);
	MR_sv(9) = MR_tfield(0, MR_r1, 3);
	MR_sv(2) = MR_tfield(0, MR_r1, 5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(6) = MR_tempr1;
	MR_sv(8) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i2);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_user_insts_2_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i3);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_sv(8);
	}
	MR_np_call_localret_ent(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i4);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_set_user_insts_3_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i5);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_inst_table_3_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i6);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i8);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(fn__list__duplicate_2_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i10);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(2);
	MR_r7 = MR_sv(9);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_mode__check_for_cyclic_inst_9_0,
		hlds__make_hlds__add_mode__module_add_inst_defn_7_0_i11);
MR_def_label(hlds__make_hlds__add_mode__module_add_inst_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module4)
	MR_init_entry1(fn__hlds__make_hlds__add_mode__mode_id_to_circ_id_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_mode__mode_id_to_circ_id_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_id_to_circ_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_mode__mode_id_to_circ_id_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mode_id_0;

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module5)
	MR_init_entry1(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0);
	MR_init_label8(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,5,8,10,12,17,20,21,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'report_circular_mode_equiv_error'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(4) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r2, 1);
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mode_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i5);
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___hlds__make_hlds__add_mode__circ_id_0_0,
		hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i8);
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i7);
	}
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_string_const("mode", 4);
	MR_r5 = (MR_Word) MR_string_const("modes", 5);
	MR_np_call_localret_ent(fn__parse_tree__error_util__choose_number_3_0,
		hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i10);
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__make_hlds__add_mode, circ_id);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i12);
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(4);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(4) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__error_util__component_list_to_pieces_1_0,
		hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i17);
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,3,0);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i20);
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0_i21);
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(0, MR_r2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_decr_sp_and_return(5);
	}
MR_def_label(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__mode_table_get_mode_defns_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_mode_defn_0;

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module6)
	MR_init_entry1(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0);
	MR_init_label8(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,30,3,5,2,6,8,11,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'check_for_cyclic_mode'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mode_id);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__member_2_0,
		hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i3);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_mode__report_circular_mode_equiv_error_6_0,
		hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i5);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_data__mode_table_get_mode_defns_2_0,
		hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i6);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mode_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_mode_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i8);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i7);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 2);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i7);
	}
	MR_sv(6) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__list__length_1_0,
		hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i11);
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0_i30);
	}
MR_def_label(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_mode_table_2_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_data__mode_table_insert_4_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0);
MR_decl_entry(hlds__hlds_module__module_info_set_mode_table_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module7)
	MR_init_entry1(hlds__make_hlds__add_mode__module_add_mode_defn_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_mode__module_add_mode_defn_7_0);
	MR_init_label10(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,2,4,9,7,11,12,13,14,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_add_mode_defn'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_mode__module_add_mode_defn_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(9) = MR_tfield(0, MR_r1, 2);
	MR_sv(3) = MR_tfield(0, MR_r1, 3);
	MR_sv(1) = MR_tfield(0, MR_r1, 5);
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_mode_table_2_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i2);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i4);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(8);
	MR_tfield(0, MR_r2, 1) = MR_sv(9);
	MR_tfield(0, MR_r2, 2) = MR_sv(7);
	MR_tfield(0, MR_r2, 3) = MR_sv(1);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_data__mode_table_insert_4_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i9);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i7);
	}
	MR_r5 = MR_sv(1);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r6 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i14);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_data__mode_table_get_mode_defns_2_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i11);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mode_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_mode_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i12);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = (MR_Word) MR_string_const("mode", 4);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tfield(0, MR_tempr1, 3);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i13);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_r6 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r3 = MR_r2;
	MR_np_call_localret_ent(hlds__make_hlds__add_mode__check_for_cyclic_mode_8_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i15);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_mode_table_3_0,
		hlds__make_hlds__add_mode__module_add_mode_defn_7_0_i16);
MR_def_label(hlds__make_hlds__add_mode__module_add_mode_defn_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module8)
	MR_init_entry1(__Unify___hlds__make_hlds__add_mode__circ_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__add_mode__circ_id_0_0);
	MR_init_label3(__Unify___hlds__make_hlds__add_mode__circ_id_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___hlds__make_hlds__add_mode__circ_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_mode__circ_id_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___hlds__make_hlds__add_mode__circ_id_0_0_i4);
MR_def_label(__Unify___hlds__make_hlds__add_mode__circ_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___hlds__make_hlds__add_mode__circ_id_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___hlds__make_hlds__add_mode__circ_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___hlds__make_hlds__add_mode__circ_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module9)
	MR_init_entry1(__Compare___hlds__make_hlds__add_mode__circ_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__add_mode__circ_id_0_0);
	MR_init_label4(__Compare___hlds__make_hlds__add_mode__circ_id_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___hlds__make_hlds__add_mode__circ_id_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_mode__circ_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___hlds__make_hlds__add_mode__circ_id_0_0_i2);
MR_def_label(__Compare___hlds__make_hlds__add_mode__circ_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___hlds__make_hlds__add_mode__circ_id_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___hlds__make_hlds__add_mode__circ_id_0_0_i5);
MR_def_label(__Compare___hlds__make_hlds__add_mode__circ_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___hlds__make_hlds__add_mode__circ_id_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___hlds__make_hlds__add_mode__circ_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module10)
	MR_init_entry1(fn__hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__240__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__240__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__report_circular_equiv_error__240__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__hlds__make_hlds__add_mode__IntroducedFrom__func__report_circular_equiv_error__240__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__user_inst_table_insert_4_0);
MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_mode_module11)
	MR_init_entry1(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0);
	MR_init_label7(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,5,11,9,13,14,15,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__insts_add__[5]_0'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(8) = MR_tempr1;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(5) = MR_r8;
	MR_sv(6) = MR_tfield(1, MR_r4, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0_i5);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_sv(8);
	MR_tfield(0, MR_r2, 2) = MR_tempr2;
	MR_tfield(0, MR_r2, 3) = MR_sv(2);
	MR_tfield(0, MR_r2, 4) = MR_sv(3);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_data__user_inst_table_insert_4_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0_i11);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0_i9);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(9);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_data__user_inst_table_get_inst_defns_2_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0_i13);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_inst_defn);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0_i14);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Word) MR_string_const("inst", 4);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(0, MR_tempr1, 3);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_r8 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__make_hlds__make_hlds_error__multiple_def_error_9_0,
		f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0_i15);
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(f_104_108_100_115_95_95_109_97_107_101_95_104_108_100_115_95_95_97_100_100_95_109_111_100_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_116_115_95_97_100_100_95_95_91_53_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds.make_hlds.add_mode", 23);
	MR_r2 = (MR_Word) MR_string_const("predicate \140hlds.make_hlds.add_mode.insts_add\'/11", 48);
	MR_r3 = (MR_Word) MR_string_const("abstract insts not implemented", 30);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__add_mode_maybe_bunch_0(void)
{
	hlds__make_hlds__add_mode_module0();
	hlds__make_hlds__add_mode_module1();
	hlds__make_hlds__add_mode_module2();
	hlds__make_hlds__add_mode_module3();
	hlds__make_hlds__add_mode_module4();
	hlds__make_hlds__add_mode_module5();
	hlds__make_hlds__add_mode_module6();
	hlds__make_hlds__add_mode_module7();
	hlds__make_hlds__add_mode_module8();
	hlds__make_hlds__add_mode_module9();
	hlds__make_hlds__add_mode_module10();
	hlds__make_hlds__add_mode_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__add_mode__init(void);
void mercury__hlds__make_hlds__add_mode__init_type_tables(void);
void mercury__hlds__make_hlds__add_mode__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__add_mode__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__add_mode__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__add_mode__init_threadscope_string_table(void);
#endif

void mercury__hlds__make_hlds__add_mode__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__add_mode_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__add_mode__type_ctor_info_circ_id_0,
		hlds__make_hlds__add_mode__circ_id_0_0);
	mercury__hlds__make_hlds__add_mode__init_debugger();
}

void mercury__hlds__make_hlds__add_mode__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__add_mode__type_ctor_info_circ_id_0);
	}
}


void mercury__hlds__make_hlds__add_mode__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__add_mode__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__add_mode);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_mode__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__add_mode__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
