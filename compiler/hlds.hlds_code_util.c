/*
** Automatically generated from `hlds_code_util.m'
** by the Mercury compiler,
** version rotd-2007-08-01, configured for i686-pc-linux-gnu.
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
INIT mercury__hlds__hlds_code_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "hlds.hlds_code_util.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "hlds.hlds_code_util.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 35 "hlds.hlds_code_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "hlds.hlds_code_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "hlds.hlds_code_util.c"
#line 44 "hlds.hlds_code_util.c"
#include "hlds.hlds_code_util.mh"

#line 47 "hlds.hlds_code_util.c"
#line 48 "hlds.hlds_code_util.c"
#ifndef HLDS__HLDS_CODE_UTIL_DECL_GUARD
#define HLDS__HLDS_CODE_UTIL_DECL_GUARD

#line 52 "hlds.hlds_code_util.c"
#line 53 "hlds.hlds_code_util.c"

#endif
#line 56 "hlds.hlds_code_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label5(hlds__hlds_code_util__are_equivalence_types_expanded_1_0, 2,3,5,6,1)
MR_decl_label1(hlds__hlds_code_util__is_valid_mutable_inst_2_0, 2)
MR_decl_label8(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0, 52,5,8,9,10,6,13,15)
MR_decl_label5(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0, 17,19,20,4,1)
MR_decl_label1(hlds__hlds_code_util__make_instance_string_2_0, 2)
MR_decl_label6(hlds__hlds_code_util__type_to_string_2_0, 3,5,6,7,8,2)
MR_decl_label8(fn__hlds__hlds_code_util__cons_id_to_tag_3_0, 93,11,13,6,7,16,14,20)
MR_decl_label8(fn__hlds__hlds_code_util__cons_id_to_tag_3_0, 18,23,24,25,26,27,82,34)
MR_decl_label8(fn__hlds__hlds_code_util__cons_id_to_tag_3_0, 35,36,37,95,39,40,41,42)
MR_decl_label6(fn__hlds__hlds_code_util__cons_id_to_tag_3_0, 96,44,97,46,98,48)
MR_def_extern_entry(hlds__hlds_code_util__are_equivalence_types_expanded_1_0)
MR_def_extern_entry(fn__hlds__hlds_code_util__cons_id_to_tag_3_0)
MR_def_extern_entry(hlds__hlds_code_util__make_instance_string_2_0)
MR_decl_static(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0)
MR_def_extern_entry(hlds__hlds_code_util__is_valid_mutable_inst_2_0)
MR_decl_static(hlds__hlds_code_util__type_to_string_2_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
{
7,
0
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__make_instance_string_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__hlds__hlds_code_util__make_instance_string_2_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_STRING_CTOR_ADDR
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(hlds__hlds_code_util__type_to_string_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__hlds__hlds_code_util__make_instance_string_2_0_1 = {
{
MR_PREDICATE,
"hlds.hlds_code_util",
"hlds.hlds_code_util",
"type_to_string",
2,
0
},
"hlds.hlds_code_util",
"hlds_code_util.m",
146,
"d1;c3;"
};

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__get_target_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module0)
	MR_init_entry1(hlds__hlds_code_util__are_equivalence_types_expanded_1_0);
	MR_init_label5(hlds__hlds_code_util__are_equivalence_types_expanded_1_0,2,3,5,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_code_util__are_equivalence_types_expanded_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		hlds__hlds_code_util__are_equivalence_types_expanded_1_0_i2);
MR_def_label(hlds__hlds_code_util__are_equivalence_types_expanded_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 196;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		hlds__hlds_code_util__are_equivalence_types_expanded_1_0_i3);
MR_def_label(hlds__hlds_code_util__are_equivalence_types_expanded_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__are_equivalence_types_expanded_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		hlds__hlds_code_util__are_equivalence_types_expanded_1_0_i5);
MR_def_label(hlds__hlds_code_util__are_equivalence_types_expanded_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__are_equivalence_types_expanded_1_0_i6);
	}
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 2);
	MR_decr_sp_and_return(2);
MR_def_label(hlds__hlds_code_util__are_equivalence_types_expanded_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(hlds__hlds_code_util__are_equivalence_types_expanded_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__char_to_string_2_1);
MR_decl_entry(char__to_int_2_0);
MR_decl_entry(parse_tree__prog_type__type_is_tuple_2_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module1)
	MR_init_entry1(fn__hlds__hlds_code_util__cons_id_to_tag_3_0);
	MR_init_label8(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,93,11,13,6,7,16,14,20)
	MR_init_label8(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,18,23,24,25,26,27,82,34)
	MR_init_label8(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,35,36,37,95,39,40,41,42)
	MR_init_label6(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,96,44,97,46,98,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__hlds_code_util__cons_id_to_tag_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i42) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i93) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i34) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i35));
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(2, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,3)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i7);
	}
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(string__char_to_string_2_1,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i11);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i6);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__to_int_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i13);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_tuple_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i16);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i14);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i20);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i18);
	}
	MR_r1 = MR_sv(3);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i24);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("hlds_code_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("cons_id_to_tag: invalid type", 28);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i23);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i24);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i25);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i26);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i27);
	}
	MR_r4 = MR_sv(1);
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__lookup_3_0);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_code_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("cons_id_to_tag: type is not d.u. type?", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i82);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__lookup_3_0);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i36) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i37) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i95) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i40) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i41) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i42) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i96) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i97) MR_AND
		MR_LABEL_AP(fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i98));
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i39);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,0,0);
	MR_proceed();
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i44);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i46);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__hlds__hlds_code_util__cons_id_to_tag_3_0_i48);
MR_def_label(fn__hlds__hlds_code_util__cons_id_to_tag_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module2)
	MR_init_entry1(hlds__hlds_code_util__make_instance_string_2_0);
	MR_init_label1(hlds__hlds_code_util__make_instance_string_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_code_util__make_instance_string_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_call_localret_ent(list__map_3_0,
		hlds__hlds_code_util__make_instance_string_2_0_i2);
MR_def_label(hlds__hlds_code_util__make_instance_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__member_2_1);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
MR_declare_entry(MR_do_redo);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;
MR_decl_entry(set__member_2_0);
MR_decl_entry(fn__set__insert_2_0);
MR_decl_entry(check_hlds__mode_util__inst_lookup_3_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module3)
	MR_init_entry1(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0);
	MR_init_label8(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,52,5,8,9,10,6,13,15)
	MR_init_label5(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,17,19,20,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i5) MR_AND
		MR_LABEL_AP(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i13) MR_AND
		MR_LABEL_AP(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1) MR_AND
		MR_LABEL_AP(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1) MR_AND
		MR_LABEL_AP(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i15) MR_AND
		MR_LABEL_AP(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1));
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(5) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(6));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_ctfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i8);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(list__member_2_1,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i9);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i10);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(6));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(4);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(5);
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 0);
	MR_decr_sp_and_return(7);
	}
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__member_2_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i17);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__insert_2_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i19);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i20);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i52);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r2, 0);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0_i1);
	}
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module4)
	MR_init_entry1(hlds__hlds_code_util__is_valid_mutable_inst_2_0);
	MR_init_label1(hlds__hlds_code_util__is_valid_mutable_inst_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__hlds_code_util__is_valid_mutable_inst_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_np_call_localret_ent(set__init_1_0,
		hlds__hlds_code_util__is_valid_mutable_inst_2_0_i2);
MR_def_label(hlds__hlds_code_util__is_valid_mutable_inst_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(hlds__hlds_code_util__is_valid_mutable_inst_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(hlds__hlds_code_util_module5)
	MR_init_entry1(hlds__hlds_code_util__type_to_string_2_0);
	MR_init_label6(hlds__hlds_code_util__type_to_string_2_0,3,5,6,7,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(hlds__hlds_code_util__type_to_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		hlds__hlds_code_util__type_to_string_2_0_i3);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(hlds__hlds_code_util__type_to_string_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_sep_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i5);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i6);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i7);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__arity", 7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		hlds__hlds_code_util__type_to_string_2_0_i8);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(hlds__hlds_code_util__type_to_string_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("hlds_code_util.m", 16);
	MR_r2 = (MR_Word) MR_string_const("type_to_string: invalid type", 28);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__hlds_code_util_maybe_bunch_0(void)
{
	hlds__hlds_code_util_module0();
	hlds__hlds_code_util_module1();
	hlds__hlds_code_util_module2();
	hlds__hlds_code_util_module3();
	hlds__hlds_code_util_module4();
	hlds__hlds_code_util_module5();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__hlds_code_util__init(void);
void mercury__hlds__hlds_code_util__init_type_tables(void);
void mercury__hlds__hlds_code_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__hlds_code_util__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__hlds_code_util__init_complexity_procs(void);
#endif

void mercury__hlds__hlds_code_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__hlds_code_util_maybe_bunch_0();
	mercury__hlds__hlds_code_util__init_debugger();
}

void mercury__hlds__hlds_code_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__hlds__hlds_code_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__hlds_code_util__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__hlds_code_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
