/*
** Automatically generated from `add_special_pred.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__make_hlds__add_special_pred__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "hlds.make_hlds.add_special_pred.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "hlds.make_hlds.add_special_pred.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.make_hlds.add_special_pred.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.make_hlds.add_special_pred.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "hlds.make_hlds.add_special_pred.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "hlds.make_hlds.add_special_pred.c"
#line 48 "hlds.make_hlds.add_special_pred.c"
#include "hlds.make_hlds.add_special_pred.mh"

#line 51 "hlds.make_hlds.add_special_pred.c"
#line 52 "hlds.make_hlds.add_special_pred.c"
#ifndef HLDS__MAKE_HLDS__ADD_SPECIAL_PRED_DECL_GUARD
#define HLDS__MAKE_HLDS__ADD_SPECIAL_PRED_DECL_GUARD

#line 56 "hlds.make_hlds.add_special_pred.c"
#line 57 "hlds.make_hlds.add_special_pred.c"

#endif
#line 60 "hlds.make_hlds.add_special_pred.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];
MR_decl_label8(hlds__make_hlds__add_special_pred__add_special_pred_9_0, 2,3,7,13,14,16,15,21)
MR_decl_label2(hlds__make_hlds__add_special_pred__add_special_pred_9_0, 39,22)
MR_decl_label5(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0, 2,3,10,23,11)
MR_decl_label8(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0, 45,3,4,5,12,13,16,7)
MR_decl_label1(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0, 18)
MR_decl_label8(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0, 61,3,4,5,9,15,16,19)
MR_decl_label8(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0, 18,24,25,28,29,7,30,65)
MR_decl_label2(hlds__make_hlds__add_special_pred__add_special_preds_8_0, 4,2)
MR_decl_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0, 2,3,4,7,6,5,10,11)
MR_decl_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0, 15,14,19,22,25,23,32,33)
MR_decl_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0, 34,37,38,39,42,43,44,45)
MR_decl_label2(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0, 46,48)
MR_decl_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0, 3,5,9,13,2,15,17,16)
MR_decl_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0, 21,24,27,25,33,34,38,35)
MR_decl_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0, 41,42,45,46,47,50,48,57)
MR_decl_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0, 59,53,54,64,65,66,67,68)
MR_decl_label2(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0, 70,71)
MR_decl_label8(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0, 4,6,7,10,14,11,9,23)
MR_decl_label8(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0, 24,25,19,29,30,8,33,31)
MR_decl_label3(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0, 2,39,37)
MR_def_extern_entry(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0)
MR_def_extern_entry(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0)
MR_decl_static(hlds__make_hlds__add_special_pred__add_special_pred_9_0)
MR_decl_static(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0)
MR_decl_static(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0)
MR_decl_static(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0)
MR_def_extern_entry(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0)
MR_def_extern_entry(hlds__make_hlds__add_special_pred__add_special_preds_8_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
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
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, special_pred_id),
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor)
}
},
};

static const struct mercury_type_3 mercury_common_3[6] =
{
{
2,
MR_tbmkword(0, 0)
},
{
1,
MR_TAG_COMMON(1,3,0)
},
{
3,
MR_tbmkword(0, 0)
},
{
2,
MR_TAG_COMMON(1,3,2)
},
{
0,
MR_TAG_COMMON(1,3,3)
},
{
0,
MR_TAG_COMMON(1,3,0)
},
};

MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(hlds__special_pred__special_pred_interface_5_0);
MR_decl_entry(fn__hlds__special_pred__special_pred_name_2_0);
MR_decl_entry(mdbcomp__prim_data__sym_name_get_module_name_default_3_0);
MR_decl_entry(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_init_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
MR_decl_entry(hlds__hlds_pred__init_markers_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(hlds__hlds_pred__pred_info_init_18_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
MR_decl_entry(varset__init_1_0);
MR_decl_entry(hlds__make_hlds__add_pred__do_add_new_proc_11_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_insert_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_special_pred_map_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(map__set_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_special_pred_map_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module0)
	MR_init_entry1(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0);
	MR_init_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,2,3,4,7,6,5,10,11)
	MR_init_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,15,14,19,22,25,23,32,33)
	MR_init_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,34,37,38,39,42,43,44,45)
	MR_init_label2(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,46,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(16) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i2);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__special_pred__special_pred_interface_5_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i3);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__special_pred__special_pred_name_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i4);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i6);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_sv(4), 0);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(mdbcomp__prim_data__sym_name_get_module_name_default_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i7);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(10);
	MR_r1 = MR_sv(1);
	MR_sv(10) = MR_tempr1;
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i5);
	}
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(10), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(10), 0) = MR_r1;
	MR_r1 = MR_sv(1);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__get_special_pred_id_arity_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i10);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_init_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i11);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(17) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_sv(4), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(4), 0) = MR_tempr1;
	if (MR_LTAGS_TEST(MR_sv(6),0,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i15);
	}
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i14);
	}
	}
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i22);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,5)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i19);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i22);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i23);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i25);
	}
	MR_sv(1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i32);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i23);
	}
	MR_sv(1) = MR_r1;
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i32);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i32);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i33);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__init_markers_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i34);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_sv(15) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i37);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(11);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(6);
	MR_r8 = (MR_Word) MR_tbmkword(0, 3);
	MR_r9 = MR_sv(14);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_sv(2);
	MR_r12 = (MR_Word) MR_tbmkword(0, 0);
	MR_r13 = MR_sv(15);
	MR_r14 = MR_sv(12);
	MR_r15 = MR_sv(13);
	MR_r16 = MR_sv(1);
	MR_r17 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_init_18_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i38);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_np_call_localret_ent(varset__init_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i39);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(1, MR_r4, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r6, 0) = MR_sv(9);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = MR_sv(5);
	MR_r8 = (MR_Integer) 1;
	MR_r9 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_pred__do_add_new_proc_11_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i42);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i43);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_insert_4_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i44);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_predicate_table_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i45);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i46);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(17);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__set_4_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0_i48);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_special_pred_map_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);
MR_decl_entry(map__contains_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(hlds__hlds_pred__pred_info_set_import_status_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(fn__hlds__hlds_pred__status_is_imported_1_0);
MR_decl_entry(check_hlds__unify_proc__generate_clause_info_6_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_clauses_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__add_marker_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_markers_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_origin_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module1)
	MR_init_entry1(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);
	MR_init_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,3,5,9,13,2,15,17,16)
	MR_init_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,21,24,27,25,33,34,38,35)
	MR_init_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,41,42,45,46,47,50,48,57)
	MR_init_label8(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,59,53,54,64,65,66,67,68)
	MR_init_label2(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,70,71)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i3);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i2);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i5);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i2);
	}
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__special_pred__is_builtin_type_special_preds_defined_in_mercury_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i9);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r1 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i13);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i15);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(7),0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i16);
	}
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_TAG_COMMON(2,0,0);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i24);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,5)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i21);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 3);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i24);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i25);
	}
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i27);
	}
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 2);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i33);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i25);
	}
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 6);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i33);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i34);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__contains_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i38);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i35);
	}
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i41);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i41);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i42);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i45);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i46);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i47);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(7),0,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i50);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i54);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i54);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i54);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(5), 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i54);
	}
	MR_sv(8) = MR_r1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i57);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i53);
	}
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_is_imported_1_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i59);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i53);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i54);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	MR_r5 = MR_sv(9);
	}
	MR_np_call_localret_ent(check_hlds__unify_proc__generate_clause_info_6_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i64);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_clauses_info_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i65);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i66);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 19;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__add_marker_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i67);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_markers_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i68);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(10);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_origin_3_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i70);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0_i71);
MR_def_label(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_preds_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module2)
	MR_init_entry1(hlds__make_hlds__add_special_pred__add_special_pred_9_0);
	MR_init_label8(hlds__make_hlds__add_special_pred__add_special_pred_9_0,2,3,7,13,14,16,15,21)
	MR_init_label2(hlds__make_hlds__add_special_pred__add_special_pred_9_0,39,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_special_pred__add_special_pred_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_special_pred__add_special_pred_9_0_i2);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 241;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__add_special_pred__add_special_pred_9_0_i3);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i39);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(1),
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i21) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i13) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i7) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i14));
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(5);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i13);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);
	}
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		hlds__make_hlds__add_special_pred__add_special_pred_9_0_i16);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i15);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("add_special_pred.m", 18);
	MR_r2 = (MR_Word) MR_string_const("add_special_pred: attempt to add initialise pred for non-solver type or solver type without automatic initialisation.", 117);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(5), 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_9_0_i22);
	}
	}
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = (MR_Word) MR_tbmkword(0, 2);
	MR_r8 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module3)
	MR_init_entry1(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0);
	MR_init_label8(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,61,3,4,5,9,15,16,19)
	MR_init_label8(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,18,24,25,28,29,7,30,65)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i3);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i4);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 241;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i5);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i7);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_sv(8),
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i24) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i15) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i9) MR_AND
		MR_LABEL_AP(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i16));
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i15);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i29);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r1 = MR_sv(9);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i61);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i19);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i18);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i29);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("add_special_pred.m", 18);
	MR_r2 = (MR_Word) MR_string_const("add_special_pred: attempt to add initialise pred for non-solver type or solver type without automatic initialisation.", 117);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i65);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i25);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r9 = MR_ctfield(0, MR_tempr1, 4);
	if (MR_LTAGS_TEST(MR_r9,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i25);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r7 = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i28);
	}
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r8 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r7 = (MR_Word) MR_tbmkword(0, 2);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i29);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i61);
	}
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0,
		hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i30);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r8 = MR_tempr1;
	}
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0_i61);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module4)
	MR_init_entry1(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0);
	MR_init_label5(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0,2,3,10,23,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0_i2);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 241;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0_i3);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0_i23);
	}
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0_i10);
	}
	MR_r1 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(5), 4);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0_i11);
	}
	}
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = (MR_Word) MR_tbmkword(0, 2);
	MR_r7 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module5)
	MR_init_entry1(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0);
	MR_init_label8(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,45,3,4,5,12,13,16,7)
	MR_init_label1(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i3);
	}
	MR_r1 = MR_r8;
	MR_decr_sp_and_return(10);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r8;
	MR_sv(7) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(8) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(9) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i4);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 241;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i5);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i7);
	}
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i12);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r1 = MR_sv(9);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i45);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i13);
	}
	MR_r8 = MR_ctfield(0, MR_sv(4), 4);
	if (MR_LTAGS_TEST(MR_r8,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i13);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r6 = MR_sv(6);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i16);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(7);
	MR_r1 = MR_sv(8);
	MR_r6 = (MR_Word) MR_tbmkword(0, 2);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,
		hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i18);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0,
		hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i18);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r8 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0_i45);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module6)
	MR_init_entry1(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0);
	MR_init_label8(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,4,6,7,10,14,11,9,23)
	MR_init_label8(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,24,25,19,29,30,8,33,31)
	MR_init_label3(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,2,39,37)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_tempr3 = MR_r7;
	MR_sv(7) = MR_tempr3;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__special_pred__can_generate_special_pred_clauses_for_type_3_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i4);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__add_special_pred_9_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i6);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i7);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i9);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_special_pred_map_2_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i10);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__contains_2_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i14);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i11);
	}
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i8);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(8);
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__add_special_pred_decl_9_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i30);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 3);
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i19);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i19);
	}
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i23);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 282;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i24);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i25);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 <= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i19);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,1);
	MR_r8 = MR_sv(8);
	MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i29);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_r8 = MR_sv(8);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_np_call_localret_ent(hlds__make_hlds__add_special_pred__add_special_pred_list_9_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i30);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i33);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i31);
	}
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__add_special_pred_9_0);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(9);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_tempr4 = MR_sv(6);
	MR_tempr5 = MR_sv(7);
	MR_r1 = MR_tempr5;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_is_solver_type_with_auto_init_2_0,
		hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i39);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0_i37);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0);
MR_def_label(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_tempr4 = MR_r5;
	MR_r5 = MR_tempr3;
	MR_tempr5 = MR_r6;
	MR_r6 = MR_tempr4;
	MR_tempr6 = MR_r7;
	MR_r7 = MR_tempr5;
	MR_r8 = MR_tempr6;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,5);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__add_special_pred_decl_list_9_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__special_pred__special_pred_is_generated_lazily_4_0);

MR_BEGIN_MODULE(hlds__make_hlds__add_special_pred_module7)
	MR_init_entry1(hlds__make_hlds__add_special_pred__add_special_preds_8_0);
	MR_init_label2(hlds__make_hlds__add_special_pred__add_special_preds_8_0,4,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_special_pred__add_special_preds_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(6) = MR_tempr3;
	MR_tempr4 = MR_r7;
	MR_sv(7) = MR_tempr4;
	MR_r1 = MR_tempr4;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	}
	MR_np_call_localret_ent(hlds__special_pred__special_pred_is_generated_lazily_4_0,
		hlds__make_hlds__add_special_pred__add_special_preds_8_0_i4);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_preds_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__make_hlds__add_special_pred__add_special_preds_8_0_i2);
	}
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(hlds__make_hlds__add_special_pred__add_special_preds_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__eagerly_add_special_preds_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds__add_special_pred_maybe_bunch_0(void)
{
	hlds__make_hlds__add_special_pred_module0();
	hlds__make_hlds__add_special_pred_module1();
	hlds__make_hlds__add_special_pred_module2();
	hlds__make_hlds__add_special_pred_module3();
	hlds__make_hlds__add_special_pred_module4();
	hlds__make_hlds__add_special_pred_module5();
	hlds__make_hlds__add_special_pred_module6();
	hlds__make_hlds__add_special_pred_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__add_special_pred__init(void);
void mercury__hlds__make_hlds__add_special_pred__init_type_tables(void);
void mercury__hlds__make_hlds__add_special_pred__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__add_special_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__add_special_pred__init_complexity_procs(void);
#endif

void mercury__hlds__make_hlds__add_special_pred__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds__add_special_pred_maybe_bunch_0();
	mercury__hlds__make_hlds__add_special_pred__init_debugger();
}

void mercury__hlds__make_hlds__add_special_pred__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__make_hlds__add_special_pred__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__add_special_pred__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds__add_special_pred);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__add_special_pred__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
