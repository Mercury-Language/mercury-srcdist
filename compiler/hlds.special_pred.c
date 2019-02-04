/*
** Automatically generated from `special_pred.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__special_pred__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.special_pred.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.special_pred.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "hlds.special_pred.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 39 "hlds.special_pred.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "hlds.special_pred.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "hlds.special_pred.c"
#line 48 "hlds.special_pred.c"
#include "hlds.special_pred.mh"

#line 51 "hlds.special_pred.c"
#line 52 "hlds.special_pred.c"
#ifndef HLDS__SPECIAL_PRED_DECL_GUARD
#define HLDS__SPECIAL_PRED_DECL_GUARD

#line 56 "hlds.special_pred.c"
#line 57 "hlds.special_pred.c"

#endif
#line 60 "hlds.special_pred.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_3 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_2 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_vector_common_2_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__special_pred__type_ctor_info_special_pred_0,
	mercury_data_hlds__special_pred__type_ctor_info_special_pred_map_0;
MR_decl_label10(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0, 3,6,7,8,12,14,18,19,20,21)
MR_decl_label5(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0, 2,25,28,27,1)
MR_decl_label3(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0, 2,3,4)
MR_decl_label7(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0, 2,4,8,9,10,11,1)
MR_decl_label10(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0, 7,6,12,42,11,15,3,4,22,18)
MR_decl_label9(hlds__special_pred__special_pred_get_type_3_0, 3,5,7,9,12,14,16,18,1)
MR_decl_label2(hlds__special_pred__special_pred_get_type_det_3_0, 3,2)
MR_decl_label10(hlds__special_pred__special_pred_interface_5_0, 3,4,8,11,13,14,17,18,21,23)
MR_decl_label2(hlds__special_pred__special_pred_interface_5_0, 25,28)
MR_decl_label10(hlds__special_pred__special_pred_is_generated_lazily_2_0, 2,9,7,11,6,13,14,16,17,20)
MR_decl_label7(hlds__special_pred__special_pred_is_generated_lazily_2_0, 19,22,23,18,28,3,1)
MR_decl_label10(hlds__special_pred__special_pred_is_generated_lazily_4_0, 4,7,14,12,16,20,19,22,23,18)
MR_decl_label3(hlds__special_pred__special_pred_is_generated_lazily_4_0, 28,8,1)
MR_def_extern_entry(fn__hlds__special_pred__special_pred_name_2_0)
MR_def_extern_entry(hlds__special_pred__special_pred_interface_5_0)
MR_def_extern_entry(hlds__special_pred__special_pred_mode_num_2_0)
MR_def_extern_entry(hlds__special_pred__special_pred_list_1_0)
MR_def_extern_entry(hlds__special_pred__special_pred_get_type_3_0)
MR_def_extern_entry(hlds__special_pred__special_pred_get_type_det_3_0)
MR_def_extern_entry(hlds__special_pred__special_pred_description_2_0)
MR_def_extern_entry(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0)
MR_def_extern_entry(hlds__special_pred__special_pred_is_generated_lazily_2_0)
MR_def_extern_entry(hlds__special_pred__special_pred_is_generated_lazily_4_0)
MR_def_extern_entry(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0)
MR_def_extern_entry(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0)
MR_def_extern_entry(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0)
MR_def_extern_entry(__Unify___hlds__special_pred__special_pred_0_0)
MR_def_extern_entry(__Compare___hlds__special_pred__special_pred_0_0)
MR_def_extern_entry(__Unify___hlds__special_pred__special_pred_map_0_0)
MR_def_extern_entry(__Compare___hlds__special_pred__special_pred_map_0_0)
MR_def_extern_entry(fn__f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_0)
MR_def_extern_entry(f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_0)

static const struct mercury_type_0 mercury_common_0[3] =
{
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,0,0)
},
{
0,
MR_TAG_COMMON(1,0,1)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
};

static const struct mercury_type_2 mercury_vector_common_2_0[4] =
{
{
MR_string_const("unification predicate", 21)
},
{
MR_string_const("indexing predicate", 18)
},
{
MR_string_const("comparison predicate", 20)
},
{
MR_string_const("initialisation predicate", 24)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_special_pred_id_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__special_pred__type_ctor_info_special_pred_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__special_pred__special_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__special_pred__special_pred_0_0)),
	"hlds.special_pred",
	"special_pred",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_hlds__special_pred__type_ctor_info_special_pred_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__special_pred__special_pred_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__special_pred__special_pred_map_0_0)),
	"hlds.special_pred",
	"special_pred_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2pair__ti_pair_2mdbcomp__prim_data__type_ctor_info_special_pred_id_0parse_tree__prog_data__type_ctor_info_type_ctor_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(hlds__special_pred_module0)
	MR_init_entry1(fn__hlds__special_pred__special_pred_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__special_pred__special_pred_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__special_pred__special_pred_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0);
MR_decl_entry(parse_tree__prog_mode__in_mode_1_0);
MR_decl_entry(parse_tree__prog_mode__uo_mode_1_0);
MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_decl_entry(parse_tree__prog_mode__out_mode_1_0);
MR_decl_entry(fn__parse_tree__prog_mode__out_any_mode_0_0);

MR_BEGIN_MODULE(hlds__special_pred_module1)
	MR_init_entry1(hlds__special_pred__special_pred_interface_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_interface_5_0);
	MR_init_label10(hlds__special_pred__special_pred_interface_5_0,3,4,8,11,13,14,17,18,21,23)
	MR_init_label2(hlds__special_pred__special_pred_interface_5_0,25,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_interface'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_interface_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(hlds__special_pred__special_pred_interface_5_0_i25) MR_AND
		MR_LABEL_AP(hlds__special_pred__special_pred_interface_5_0_i13) MR_AND
		MR_LABEL_AP(hlds__special_pred__special_pred_interface_5_0_i3) MR_AND
		MR_LABEL_AP(hlds__special_pred__special_pred_interface_5_0_i21));
MR_def_label(hlds__special_pred__special_pred_interface_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__comparison_result_type_0_0,
		hlds__special_pred__special_pred_interface_5_0_i4);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr4 = MR_sv(1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		hlds__special_pred__special_pred_interface_5_0_i8);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__uo_mode_1_0,
		hlds__special_pred__special_pred_interface_5_0_i11);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__special_pred__special_pred_interface_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		hlds__special_pred__special_pred_interface_5_0_i14);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_sv(1) = MR_tempr2;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		hlds__special_pred__special_pred_interface_5_0_i17);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_mode__out_mode_1_0,
		hlds__special_pred__special_pred_interface_5_0_i18);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tempr3 = MR_tempr2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr3;
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__special_pred__special_pred_interface_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_mode__out_any_mode_0_0,
		hlds__special_pred__special_pred_interface_5_0_i23);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
	}
MR_def_label(hlds__special_pred__special_pred_interface_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tempr3 = MR_r2;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__in_mode_1_0,
		hlds__special_pred__special_pred_interface_5_0_i28);
MR_def_label(hlds__special_pred__special_pred_interface_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__special_pred_module2)
	MR_init_entry1(hlds__special_pred__special_pred_mode_num_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_mode_num_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_mode_num'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_mode_num_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__special_pred_module3)
	MR_init_entry1(hlds__special_pred__special_pred_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_list'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__reverse_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module4)
	MR_init_entry1(hlds__special_pred__special_pred_get_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_get_type_3_0);
	MR_init_label9(hlds__special_pred__special_pred_get_type_3_0,3,5,7,9,12,14,16,18,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_get_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_get_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(hlds__special_pred__special_pred_get_type_3_0_i16) MR_AND
		MR_LABEL_AP(hlds__special_pred__special_pred_get_type_3_0_i7) MR_AND
		MR_LABEL_AP(hlds__special_pred__special_pred_get_type_3_0_i3) MR_AND
		MR_LABEL_AP(hlds__special_pred__special_pred_get_type_3_0_i12));
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__special_pred__special_pred_get_type_3_0_i5);
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_get_type_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__special_pred__special_pred_get_type_3_0_i9);
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_get_type_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_get_type_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__special_pred__special_pred_get_type_3_0_i14);
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_get_type_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_np_call_localret_ent(list__reverse_2_0,
		hlds__special_pred__special_pred_get_type_3_0_i18);
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_get_type_3_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_get_type_3_0,1)
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

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module5)
	MR_init_entry1(hlds__special_pred__special_pred_get_type_det_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_get_type_det_3_0);
	MR_init_label2(hlds__special_pred__special_pred_get_type_det_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_get_type_det'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_get_type_det_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__special_pred__special_pred_get_type_3_0,
		hlds__special_pred__special_pred_get_type_det_3_0_i3);
MR_def_label(hlds__special_pred__special_pred_get_type_det_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_get_type_det_3_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
MR_def_label(hlds__special_pred__special_pred_get_type_det_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("special_pred.m", 14);
	MR_r2 = (MR_Word) MR_string_const("special_pred_get_type_det: special_pred_get_type failed", 55);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__special_pred_module6)
	MR_init_entry1(hlds__special_pred__special_pred_description_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_description_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_description'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_description_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_2_0, (MR_Integer) MR_tempr3);
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0);
MR_decl_entry(check_hlds__type_util__type_body_is_solver_type_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(hlds__special_pred_module7)
	MR_init_entry1(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_for_type_needs_typecheck_3_0);
	MR_init_label10(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,7,6,12,42,11,15,3,4,22,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_for_type_needs_typecheck'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_for_type_needs_typecheck_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i6);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,
		hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i7);
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i3);
	}
	MR_r1 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i3);
	}
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,3)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i11);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_body_is_solver_type_2_0,
		hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i12);
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i3);
	}
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i4);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,
		hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i15);
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i3);
	}
	if (MR_PTAG_TEST(MR_r2,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i42);
	}
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(4) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(5));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i18);
	if (MR_INT_EQ(MR_r2,3)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i18);
	}
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i18);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(list__member_2_1,
		hlds__special_pred__special_pred_for_type_needs_typecheck_3_0_i22);
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(5));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(3);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__classify_type_ctor_2_0);
MR_decl_entry(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_1);

MR_BEGIN_MODULE(hlds__special_pred_module8)
	MR_init_entry1(hlds__special_pred__special_pred_is_generated_lazily_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_is_generated_lazily_2_0);
	MR_init_label10(hlds__special_pred__special_pred_is_generated_lazily_2_0,2,9,7,11,6,13,14,16,17,20)
	MR_init_label7(hlds__special_pred__special_pred_is_generated_lazily_2_0,19,22,23,18,28,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_is_generated_lazily'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_is_generated_lazily_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_ctor_2_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i2);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i3);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i9);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i6);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i7);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i6);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i11);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i1);
	}
	MR_r1 = MR_sv(1);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i13);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i14);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i16);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_status_2_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i17);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i20);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i18);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i22);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 248;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i23);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,
		hlds__special_pred__special_pred_is_generated_lazily_2_0_i28);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_2_0_i1);
	}
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__special_pred_module9)
	MR_init_entry1(hlds__special_pred__special_pred_is_generated_lazily_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__special_pred_is_generated_lazily_4_0);
	MR_init_label10(hlds__special_pred__special_pred_is_generated_lazily_4_0,4,7,14,12,16,20,19,22,23,18)
	MR_init_label3(hlds__special_pred__special_pred_is_generated_lazily_4_0,28,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'special_pred_is_generated_lazily'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__special_pred_is_generated_lazily_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_RTAGS_TEST(MR_r3,3,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i1);
	}
	if (MR_RTAGS_TESTR(MR_r3,3,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r3, 1);
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i1);
	}
	}
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_ctor_2_0,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i7);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i8);
	}
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i20);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i12);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_tempr2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i20);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__parse_tree__prog_type__is_introduced_type_info_type_category_1_0,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i16);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i20);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i18);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i22);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 248;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_1,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i23);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r3,2)) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i1);
	}
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__special_pred__special_pred_for_type_needs_typecheck_3_0,
		hlds__special_pred__special_pred_is_generated_lazily_4_0_i28);
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__special_pred__special_pred_is_generated_lazily_4_0_i1);
	}
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__special_pred_is_generated_lazily_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(hlds__special_pred_module10)
	MR_init_entry1(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0);
	MR_init_label7(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,2,4,8,9,10,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_builtin_type_special_preds_defined_in_mercury'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i2);
MR_def_label(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i1);
	}
	MR_tempr2 = MR_tempr3;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i4);
MR_def_label(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i1);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i8);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i10);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i11);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(1), MR_string_const("character", 9)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__get_target_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module11)
	MR_init_entry1(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__compiler_generated_rtti_for_builtins_1_0);
	MR_init_label3(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compiler_generated_rtti_for_builtins'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__compiler_generated_rtti_for_builtins_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__special_pred__compiler_generated_rtti_for_builtins_1_0_i2);
MR_def_label(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__special_pred__compiler_generated_rtti_for_builtins_1_0_i3);
MR_def_label(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,5)) {
		MR_GOTO_LAB(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0_i4);
	}
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0_i4);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(1);
MR_def_label(hlds__special_pred__compiler_generated_rtti_for_builtins_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module12)
	MR_init_entry1(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0);
	MR_init_label10(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,3,6,7,8,12,14,18,19,20,21)
	MR_init_label5(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,2,25,28,27,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'can_generate_special_pred_clauses_for_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_RTAGS_TEST(MR_r3,3,1)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i2);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i6);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i7);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,5)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i8);
	}
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i8);
	}
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i1);
	}
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i12);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i1);
	}
	MR_sv(4) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i14);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i1);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i18);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i2);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("pred", 4)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i2);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i20);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i2);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i21);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i2);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_sv(4), MR_string_const("character", 9)) != 0)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,
		hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i25);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i1);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,
		hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i28);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0_i27);
	}
	MR_r1 = (MR_tag(MR_r2) != MR_mktag((MR_Integer) 1));
	MR_decr_sp_and_return(6);
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module13)
	MR_init_entry1(__Unify___hlds__special_pred__special_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__special_pred__special_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__special_pred__special_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module14)
	MR_init_entry1(__Compare___hlds__special_pred__special_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__special_pred__special_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__special_pred__special_pred_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module15)
	MR_init_entry1(__Unify___hlds__special_pred__special_pred_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__special_pred__special_pred_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__special_pred__special_pred_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(hlds__special_pred_module16)
	MR_init_entry1(__Compare___hlds__special_pred__special_pred_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__special_pred__special_pred_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__special_pred__special_pred_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0);

MR_BEGIN_MODULE(hlds__special_pred_module17)
	MR_init_entry1(fn__f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__special_pred_name__[2]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_110_97_109_101_95_95_91_50_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__mdbcomp__prim_data__get_special_pred_id_target_name_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__special_pred_module18)
	MR_init_entry1(f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__special_pred_mode_num__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_104_108_100_115_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_101_99_105_97_108_95_112_114_101_100_95_109_111_100_101_95_110_117_109_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__special_pred_maybe_bunch_0(void)
{
	hlds__special_pred_module0();
	hlds__special_pred_module1();
	hlds__special_pred_module2();
	hlds__special_pred_module3();
	hlds__special_pred_module4();
	hlds__special_pred_module5();
	hlds__special_pred_module6();
	hlds__special_pred_module7();
	hlds__special_pred_module8();
	hlds__special_pred_module9();
	hlds__special_pred_module10();
	hlds__special_pred_module11();
	hlds__special_pred_module12();
	hlds__special_pred_module13();
	hlds__special_pred_module14();
	hlds__special_pred_module15();
	hlds__special_pred_module16();
	hlds__special_pred_module17();
	hlds__special_pred_module18();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__special_pred__init(void);
void mercury__hlds__special_pred__init_type_tables(void);
void mercury__hlds__special_pred__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__special_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__special_pred__init_complexity_procs(void);
#endif

void mercury__hlds__special_pred__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__special_pred_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__special_pred__type_ctor_info_special_pred_0,
		hlds__special_pred__special_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__special_pred__type_ctor_info_special_pred_map_0,
		hlds__special_pred__special_pred_map_0_0);
	mercury__hlds__special_pred__init_debugger();
}

void mercury__hlds__special_pred__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__special_pred__type_ctor_info_special_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__special_pred__type_ctor_info_special_pred_map_0);
	}
}


void mercury__hlds__special_pred__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__special_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__special_pred);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__special_pred__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
