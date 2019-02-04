/*
** Automatically generated from `code_model.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__code_model__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 231 "../mdbcomp/mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 28 "hlds.code_model.c"
#line 136 "../library/io.int2"
#include "io.mh"

#line 32 "hlds.code_model.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.code_model.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.code_model.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "hlds.code_model.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 48 "hlds.code_model.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 52 "hlds.code_model.c"
#line 53 "hlds.code_model.c"
#include "hlds.code_model.mh"

#line 56 "hlds.code_model.c"
#line 57 "hlds.code_model.c"
#ifndef HLDS__CODE_MODEL_DECL_GUARD
#define HLDS__CODE_MODEL_DECL_GUARD

#line 61 "hlds.code_model.c"
#line 62 "hlds.code_model.c"

#endif
#line 65 "hlds.code_model.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_0[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_1[];

MR_STATIC_LINKAGE const struct mercury_type_0 mercury_vector_common_0_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__code_model__type_ctor_info_code_model_0;
MR_decl_label9(hlds__code_model__determinism_to_code_model_2_1, 4,5,6,2,9,7,11,12,13)
MR_decl_label1(fn__hlds__code_model__goal_info_get_code_model_1_0, 2)
MR_decl_label1(fn__hlds__code_model__proc_info_interface_code_model_1_0, 2)
MR_decl_label8(fn__hlds__code_model__represent_determinism_1_0, 3,5,7,9,11,13,15,17)
MR_def_extern_entry(hlds__code_model__determinism_to_code_model_2_0)
MR_def_extern_entry(hlds__code_model__determinism_to_code_model_2_1)
MR_def_extern_entry(fn__hlds__code_model__proc_info_interface_code_model_1_0)
MR_def_extern_entry(fn__hlds__code_model__goal_info_get_code_model_1_0)
MR_def_extern_entry(fn__hlds__code_model__represent_determinism_1_0)
MR_def_extern_entry(__Unify___hlds__code_model__code_model_0_0)
MR_def_extern_entry(__Compare___hlds__code_model__code_model_0_0)

static const struct mercury_type_0 mercury_vector_common_0_0[8] =
{
{
0
},
{
1
},
{
2
},
{
2
},
{
0
},
{
1
},
{
0
},
{
1
},
};

static const struct mercury_type_0 mercury_vector_common_0_1[3] =
{
{
0
},
{
4
},
{
6
},
};

static const struct mercury_type_0 mercury_vector_common_0_2[3] =
{
{
1
},
{
5
},
{
7
},
};

static const MR_EnumFunctorDesc mercury_data_hlds__code_model__enum_functor_desc_code_model_0_0 = {
	"model_det",
	0
};

static const MR_EnumFunctorDesc mercury_data_hlds__code_model__enum_functor_desc_code_model_0_1 = {
	"model_semi",
	1
};

static const MR_EnumFunctorDesc mercury_data_hlds__code_model__enum_functor_desc_code_model_0_2 = {
	"model_non",
	2
};

const MR_EnumFunctorDescPtr mercury_data_hlds__code_model__enum_value_ordered_code_model_0[] = {
	&mercury_data_hlds__code_model__enum_functor_desc_code_model_0_0,
	&mercury_data_hlds__code_model__enum_functor_desc_code_model_0_1,
	&mercury_data_hlds__code_model__enum_functor_desc_code_model_0_2
};

const MR_EnumFunctorDescPtr mercury_data_hlds__code_model__enum_name_ordered_code_model_0[] = {
	&mercury_data_hlds__code_model__enum_functor_desc_code_model_0_0,
	&mercury_data_hlds__code_model__enum_functor_desc_code_model_0_2,
	&mercury_data_hlds__code_model__enum_functor_desc_code_model_0_1
};

const MR_Integer mercury_data_hlds__code_model__functor_number_map_code_model_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_hlds__code_model__type_ctor_info_code_model_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__code_model__code_model_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__code_model__code_model_0_0)),
	"hlds.code_model",
	"code_model",
	{ (void *)mercury_data_hlds__code_model__enum_name_ordered_code_model_0 },
	{ (void *)mercury_data_hlds__code_model__enum_value_ordered_code_model_0 },
	3,
	4,
	mercury_data_hlds__code_model__functor_number_map_code_model_0
};




MR_BEGIN_MODULE(hlds__code_model_module0)
	MR_init_entry1(hlds__code_model__determinism_to_code_model_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__code_model__determinism_to_code_model_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determinism_to_code_model'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__code_model__determinism_to_code_model_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_0, (MR_Integer) MR_r1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(hlds__code_model_module1)
	MR_init_entry1(hlds__code_model__determinism_to_code_model_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__code_model__determinism_to_code_model_2_1);
	MR_init_label9(hlds__code_model__determinism_to_code_model_2_1,4,5,6,2,9,7,11,12,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'determinism_to_code_model'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__code_model__determinism_to_code_model_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred hlds.code_model.determinism_to_code_model/2-1", 1,
		MR_ENTRY(MR_do_fail));
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(hlds__code_model__determinism_to_code_model_2_1_i2);
	}
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, 0);
	MR_fv(1) = (MR_Integer) 1;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__code_model__determinism_to_code_model_2_1_i4);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succeed();
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	if (MR_INT_GE(MR_r2,2)) {
		MR_GOTO_LAB(hlds__code_model__determinism_to_code_model_2_1_i5);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_GOTO_LAB(hlds__code_model__determinism_to_code_model_2_1_i6);
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_1, (MR_Integer) MR_r2);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succeed();
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(hlds__code_model__determinism_to_code_model_2_1_i7);
	}
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__code_model__determinism_to_code_model_2_1_i9);
	MR_r1 = (MR_Integer) 3;
	MR_succeed();
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_succeed_discard();
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, 0);
	MR_fv(1) = (MR_Integer) 1;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(hlds__code_model__determinism_to_code_model_2_1_i11);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succeed();
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	if (MR_INT_GE(MR_r2,2)) {
		MR_GOTO_LAB(hlds__code_model__determinism_to_code_model_2_1_i12);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_GOTO_LAB(hlds__code_model__determinism_to_code_model_2_1_i13);
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(hlds__code_model__determinism_to_code_model_2_1,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_0_2, (MR_Integer) MR_r2);
	MR_r1 = MR_tfield(0, MR_r2, 0);
	MR_succeed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);

MR_BEGIN_MODULE(hlds__code_model_module2)
	MR_init_entry1(fn__hlds__code_model__proc_info_interface_code_model_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__code_model__proc_info_interface_code_model_1_0);
	MR_init_label1(fn__hlds__code_model__proc_info_interface_code_model_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_info_interface_code_model'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__code_model__proc_info_interface_code_model_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		fn__hlds__code_model__proc_info_interface_code_model_1_0_i2);
MR_def_label(fn__hlds__code_model__proc_info_interface_code_model_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__code_model__determinism_to_code_model_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);

MR_BEGIN_MODULE(hlds__code_model_module3)
	MR_init_entry1(fn__hlds__code_model__goal_info_get_code_model_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__code_model__goal_info_get_code_model_1_0);
	MR_init_label1(fn__hlds__code_model__goal_info_get_code_model_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'goal_info_get_code_model'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__code_model__goal_info_get_code_model_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		fn__hlds__code_model__goal_info_get_code_model_1_0_i2);
MR_def_label(fn__hlds__code_model__goal_info_get_code_model_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__code_model__determinism_to_code_model_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__program_representation__detism_rep_1_0);

MR_BEGIN_MODULE(hlds__code_model_module4)
	MR_init_entry1(fn__hlds__code_model__represent_determinism_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__hlds__code_model__represent_determinism_1_0);
	MR_init_label8(fn__hlds__code_model__represent_determinism_1_0,3,5,7,9,11,13,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'represent_determinism'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__hlds__code_model__represent_determinism_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i7) MR_AND
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i17) MR_AND
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i13) MR_AND
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i15) MR_AND
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i3) MR_AND
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i5) MR_AND
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i9) MR_AND
		MR_LABEL_AP(fn__hlds__code_model__represent_determinism_1_0_i11));
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
MR_def_label(fn__hlds__code_model__represent_determinism_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__mdbcomp__program_representation__detism_rep_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(hlds__code_model_module5)
	MR_init_entry1(__Unify___hlds__code_model__code_model_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__code_model__code_model_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__code_model__code_model_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(hlds__code_model_module6)
	MR_init_entry1(__Compare___hlds__code_model__code_model_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__code_model__code_model_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__code_model__code_model_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__code_model_maybe_bunch_0(void)
{
	hlds__code_model_module0();
	hlds__code_model_module1();
	hlds__code_model_module2();
	hlds__code_model_module3();
	hlds__code_model_module4();
	hlds__code_model_module5();
	hlds__code_model_module6();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__code_model__init(void);
void mercury__hlds__code_model__init_type_tables(void);
void mercury__hlds__code_model__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__code_model__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__code_model__init_complexity_procs(void);
#endif

void mercury__hlds__code_model__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__code_model_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__code_model__type_ctor_info_code_model_0,
		hlds__code_model__code_model_0_0);
	mercury__hlds__code_model__init_debugger();
}

void mercury__hlds__code_model__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__code_model__type_ctor_info_code_model_0);
	}
}


void mercury__hlds__code_model__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__code_model__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__code_model);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__code_model__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
