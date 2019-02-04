/*
** Automatically generated from `io_action.m'
** by the Mercury compiler,
** version rotd-2011-09-25, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__io_action__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.io_action.c"
#include "mdb.io_action.mh"

#line 28 "mdb.io_action.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.io_action.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.io_action.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.io_action.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.io_action.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.io_action.c"
#line 49 "mdb.io_action.c"
#ifndef MDB__IO_ACTION_DECL_GUARD
#define MDB__IO_ACTION_DECL_GUARD

#line 53 "mdb.io_action.c"
#line 54 "mdb.io_action.c"

#endif
#line 57 "mdb.io_action.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__io_action__type_ctor_info_io_action_0,
	mercury_data_mdb__io_action__type_ctor_info_io_action_range_0,
	mercury_data_mdb__io_action__type_ctor_info_io_seq_num_0,
	mercury_data_mdb__io_action__type_ctor_info_maybe_tabled_io_action_0;
MR_decl_label1(mdb__io_action__get_maybe_io_action_4_0, 3)
MR_decl_label1(fn__mdb__io_action__io_action_to_browser_term_1_0, 3)
MR_decl_label1(fn__mdb__io_action__make_yes_io_action_3_0, 3)
MR_decl_label2(__Unify___mdb__io_action__io_action_0_0, 6,1)
MR_decl_label2(__Unify___mdb__io_action__io_action_range_0_0, 4,1)
MR_decl_label3(__Unify___mdb__io_action__maybe_tabled_io_action_0_0, 12,5,1)
MR_decl_label5(__Compare___mdb__io_action__io_action_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___mdb__io_action__io_action_range_0_0, 3,2,5,21)
MR_decl_label4(__Compare___mdb__io_action__maybe_tabled_io_action_0_0, 18,7,5,9)
MR_def_extern_entry(fn__mdb__io_action__io_action_to_browser_term_1_0)
MR_decl_static(mdb__io_action__pickup_io_action_4_0)
MR_def_extern_entry(mdb__io_action__get_maybe_io_action_4_0)
MR_decl_static(fn__mdb__io_action__make_no_io_action_0_0)
MR_decl_static(fn__mdb__io_action__make_yes_io_action_3_0)
MR_def_extern_entry(__Unify___mdb__io_action__io_action_0_0)
MR_def_extern_entry(__Compare___mdb__io_action__io_action_0_0)
MR_def_extern_entry(__Unify___mdb__io_action__io_action_range_0_0)
MR_def_extern_entry(__Compare___mdb__io_action__io_action_range_0_0)
MR_def_extern_entry(__Unify___mdb__io_action__io_seq_num_0_0)
MR_def_extern_entry(__Compare___mdb__io_action__io_seq_num_0_0)
MR_def_extern_entry(__Unify___mdb__io_action__maybe_tabled_io_action_0_0)
MR_def_extern_entry(__Compare___mdb__io_action__maybe_tabled_io_action_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;
extern const MR_TypeCtorInfo_Struct mercury_data_univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1univ__type_ctor_info_univ_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_univ__type_ctor_info_univ_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

const MR_PseudoTypeInfo mercury_data_mdb__io_action__field_types_io_action_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1univ__type_ctor_info_univ_0
};

const MR_ConstString mercury_data_mdb__io_action__field_names_io_action_0_0[] = {
	"io_action_proc_name",
	"io_action_pf",
	"io_action_args"
};

static const MR_DuFunctorDesc mercury_data_mdb__io_action__du_functor_desc_io_action_0_0 = {
	"io_action",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__io_action__field_types_io_action_0_0,
	mercury_data_mdb__io_action__field_names_io_action_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__io_action__du_stag_ordered_io_action_0_0[] = {
	&mercury_data_mdb__io_action__du_functor_desc_io_action_0_0

};

const MR_DuPtagLayout mercury_data_mdb__io_action__du_ptag_ordered_io_action_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__io_action__du_stag_ordered_io_action_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__io_action__du_name_ordered_io_action_0[] = {
	&mercury_data_mdb__io_action__du_functor_desc_io_action_0_0
};

const MR_Integer mercury_data_mdb__io_action__functor_number_map_io_action_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__io_action__type_ctor_info_io_action_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__io_action__io_action_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__io_action__io_action_0_0)),
	"mdb.io_action",
	"io_action",
	{ (void *)mercury_data_mdb__io_action__du_name_ordered_io_action_0 },
	{ (void *)mercury_data_mdb__io_action__du_ptag_ordered_io_action_0 },
	1,
	4,
	mercury_data_mdb__io_action__functor_number_map_io_action_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdb__io_action__field_types_io_action_range_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdb__io_action__field_names_io_action_range_0_0[] = {
	"from_io_action",
	"to_io_action"
};

static const MR_DuFunctorDesc mercury_data_mdb__io_action__du_functor_desc_io_action_range_0_0 = {
	"io_action_range",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__io_action__field_types_io_action_range_0_0,
	mercury_data_mdb__io_action__field_names_io_action_range_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__io_action__du_stag_ordered_io_action_range_0_0[] = {
	&mercury_data_mdb__io_action__du_functor_desc_io_action_range_0_0

};

const MR_DuPtagLayout mercury_data_mdb__io_action__du_ptag_ordered_io_action_range_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__io_action__du_stag_ordered_io_action_range_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__io_action__du_name_ordered_io_action_range_0[] = {
	&mercury_data_mdb__io_action__du_functor_desc_io_action_range_0_0
};

const MR_Integer mercury_data_mdb__io_action__functor_number_map_io_action_range_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__io_action__type_ctor_info_io_action_range_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__io_action__io_action_range_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__io_action__io_action_range_0_0)),
	"mdb.io_action",
	"io_action_range",
	{ (void *)mercury_data_mdb__io_action__du_name_ordered_io_action_range_0 },
	{ (void *)mercury_data_mdb__io_action__du_ptag_ordered_io_action_range_0 },
	1,
	4,
	mercury_data_mdb__io_action__functor_number_map_io_action_range_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__io_action__type_ctor_info_io_seq_num_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__io_action__io_seq_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__io_action__io_seq_num_0_0)),
	"mdb.io_action",
	"io_seq_num",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__io_action__type_ctor_info_io_action_0;

const MR_PseudoTypeInfo mercury_data_mdb__io_action__field_types_maybe_tabled_io_action_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__io_action__type_ctor_info_io_action_0
};

static const MR_DuFunctorDesc mercury_data_mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0 = {
	"tabled",
	1,
	0,
	MR_SECTAG_NONE_DIRECT_ARG,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__io_action__field_types_maybe_tabled_io_action_0_0,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1 = {
	"untabled",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0[] = {
	&mercury_data_mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1[] = {
	&mercury_data_mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0

};

const MR_DuPtagLayout mercury_data_mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_0 },
	{ 1, MR_SECTAG_NONE_DIRECT_ARG,
	mercury_data_mdb__io_action__du_stag_ordered_maybe_tabled_io_action_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__io_action__du_name_ordered_maybe_tabled_io_action_0[] = {
	&mercury_data_mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_0,
	&mercury_data_mdb__io_action__du_functor_desc_maybe_tabled_io_action_0_1
};

const MR_Integer mercury_data_mdb__io_action__functor_number_map_maybe_tabled_io_action_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__io_action__type_ctor_info_maybe_tabled_io_action_0 = {
	0,
	15,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__io_action__maybe_tabled_io_action_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__io_action__maybe_tabled_io_action_0_0)),
	"mdb.io_action",
	"maybe_tabled_io_action",
	{ (void *)mercury_data_mdb__io_action__du_name_ordered_maybe_tabled_io_action_0 },
	{ (void *)mercury_data_mdb__io_action__du_ptag_ordered_maybe_tabled_io_action_0 },
	2,
	4,
	mercury_data_mdb__io_action__functor_number_map_maybe_tabled_io_action_0
};



MR_decl_entry(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0);

MR_BEGIN_MODULE(mdb__io_action_module0)
	MR_init_entry1(fn__mdb__io_action__io_action_to_browser_term_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__io_action__io_action_to_browser_term_1_0);
	MR_init_label1(fn__mdb__io_action__io_action_to_browser_term_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'io_action_to_browser_term'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdb__io_action__io_action_to_browser_term_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(fn__mdb__io_action__io_action_to_browser_term_1_0_i3);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = (MR_Integer) 1;
	MR_np_tailcall_ent(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0);
	}
MR_def_label(fn__mdb__io_action__io_action_to_browser_term_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__mdb__browser_term__synthetic_term_to_browser_term_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module1)
	MR_init_entry1(mdb__io_action__pickup_io_action_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__io_action__pickup_io_action_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pickup_io_action'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__io_action__pickup_io_action_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Integer	SeqNum;
	MR_Word	MaybeIOAction;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__mdb__io_action__pickup_io_action_4_0
	SeqNum = MR_r1;
	MR_save_registers();
{
#line 91 "io_action.m"
{
    const char  *problem;
    const char  *proc_name;
    MR_Bool     is_func;
    MR_Word     args;
    MR_bool     io_action_tabled;
    MR_String   ProcName;

    MR_save_transient_hp();
    io_action_tabled = MR_trace_get_action(SeqNum, &proc_name, &is_func,
        &args);
    MR_restore_transient_hp();

    /* cast away const */
    ProcName = (MR_String) (MR_Integer) proc_name;
    if (io_action_tabled) {
        MaybeIOAction = MR_IO_ACTION_make_yes_io_action(ProcName, is_func,
            args);
    } else {
        MaybeIOAction = MR_IO_ACTION_make_no_io_action();
    }

    S = S0;
};}
#line 413 "mdb.io_action.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r1 = MaybeIOAction;
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module2)
	MR_init_entry1(mdb__io_action__get_maybe_io_action_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__io_action__get_maybe_io_action_4_0);
	MR_init_label1(mdb__io_action__get_maybe_io_action_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_maybe_io_action'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__io_action__get_maybe_io_action_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Integer	SeqNum;
	MR_Word	MaybeIOAction;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__mdb__io_action__get_maybe_io_action_4_0
	SeqNum = MR_r1;
	MR_save_registers();
{
#line 91 "io_action.m"
{
    const char  *problem;
    const char  *proc_name;
    MR_Bool     is_func;
    MR_Word     args;
    MR_bool     io_action_tabled;
    MR_String   ProcName;

    MR_save_transient_hp();
    io_action_tabled = MR_trace_get_action(SeqNum, &proc_name, &is_func,
        &args);
    MR_restore_transient_hp();

    /* cast away const */
    ProcName = (MR_String) (MR_Integer) proc_name;
    if (io_action_tabled) {
        MaybeIOAction = MR_IO_ACTION_make_yes_io_action(ProcName, is_func,
            args);
    } else {
        MaybeIOAction = MR_IO_ACTION_make_no_io_action();
    }

    S = S0;
};}
#line 478 "mdb.io_action.c"
#ifndef MR_CONSERVATIVE_GC
	MR_restore_registers();
#endif
	MR_r3 = MaybeIOAction;
#undef	MR_PROC_LABEL
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(mdb__io_action__get_maybe_io_action_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(1);
MR_def_label(mdb__io_action__get_maybe_io_action_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tfield(1, MR_r3, 0));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module3)
	MR_init_entry1(fn__mdb__io_action__make_no_io_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__io_action__make_no_io_action_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_no_io_action'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__io_action__make_no_io_action_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module4)
	MR_init_entry1(fn__mdb__io_action__make_yes_io_action_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__io_action__make_yes_io_action_3_0);
	MR_init_label1(fn__mdb__io_action__make_yes_io_action_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_yes_io_action'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__io_action__make_yes_io_action_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdb__io_action__make_yes_io_action_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
MR_def_label(fn__mdb__io_action__make_yes_io_action_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 2) = MR_r3;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__io_action_module5)
	MR_init_entry1(__Unify___mdb__io_action__io_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__io_action__io_action_0_0);
	MR_init_label2(__Unify___mdb__io_action__io_action_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__io_action__io_action_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__io_action_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__io_action_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__io_action_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___mdb__io_action__io_action_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__io_action__io_action_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__io_action_module6)
	MR_init_entry1(__Compare___mdb__io_action__io_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__io_action__io_action_0_0);
	MR_init_label5(__Compare___mdb__io_action__io_action_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__io_action__io_action_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__io_action_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__io_action__io_action_0_0_i2);
MR_def_label(__Compare___mdb__io_action__io_action_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__io_action__io_action_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdb__io_action__io_action_0_0_i5);
MR_def_label(__Compare___mdb__io_action__io_action_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__io_action_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__io_action__io_action_0_0_i9);
MR_def_label(__Compare___mdb__io_action__io_action_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__io_action_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(univ, univ);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___mdb__io_action__io_action_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module7)
	MR_init_entry1(__Unify___mdb__io_action__io_action_range_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__io_action__io_action_range_0_0);
	MR_init_label2(__Unify___mdb__io_action__io_action_range_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__io_action__io_action_range_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__io_action_range_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__io_action_range_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__io_action__io_action_range_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__io_action__io_action_range_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module8)
	MR_init_entry1(__Compare___mdb__io_action__io_action_range_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__io_action__io_action_range_0_0);
	MR_init_label4(__Compare___mdb__io_action__io_action_range_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__io_action__io_action_range_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__io_action_range_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__io_action__io_action_range_0_0_i2);
MR_def_label(__Compare___mdb__io_action__io_action_range_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__io_action__io_action_range_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdb__io_action__io_action_range_0_0_i5);
MR_def_label(__Compare___mdb__io_action__io_action_range_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__io_action_range_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdb__io_action__io_action_range_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module9)
	MR_init_entry1(__Unify___mdb__io_action__io_seq_num_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__io_action__io_seq_num_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__io_action__io_seq_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module10)
	MR_init_entry1(__Compare___mdb__io_action__io_seq_num_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__io_action__io_seq_num_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__io_action__io_seq_num_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module11)
	MR_init_entry1(__Unify___mdb__io_action__maybe_tabled_io_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__io_action__maybe_tabled_io_action_0_0);
	MR_init_label3(__Unify___mdb__io_action__maybe_tabled_io_action_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__io_action__maybe_tabled_io_action_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__maybe_tabled_io_action_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__maybe_tabled_io_action_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__io_action__maybe_tabled_io_action_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__io_action__maybe_tabled_io_action_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__io_action__maybe_tabled_io_action_0_0_i1);
	}
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdb__io_action__io_action_0_0);
MR_def_label(__Unify___mdb__io_action__maybe_tabled_io_action_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__io_action_module12)
	MR_init_entry1(__Compare___mdb__io_action__maybe_tabled_io_action_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__io_action__maybe_tabled_io_action_0_0);
	MR_init_label4(__Compare___mdb__io_action__maybe_tabled_io_action_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__io_action__maybe_tabled_io_action_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__maybe_tabled_io_action_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__maybe_tabled_io_action_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__maybe_tabled_io_action_0_0_i7);
	}
MR_def_label(__Compare___mdb__io_action__maybe_tabled_io_action_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__io_action__maybe_tabled_io_action_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__io_action__maybe_tabled_io_action_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__io_action__maybe_tabled_io_action_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__io_action__maybe_tabled_io_action_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_body((MR_Integer) MR_sv(1), (MR_Integer) 1);
	MR_r2 = MR_body((MR_Integer) MR_sv(2), (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdb__io_action__io_action_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__fn__mdb__io_action__make_yes_io_action_3_0);

MR_Word
MR_IO_ACTION_make_yes_io_action(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3);

MR_Word
MR_IO_ACTION_make_yes_io_action(MR_String Mercury__argument1, MR_Word Mercury__argument2, MR_Word Mercury__argument3)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__io_action__make_yes_io_action_3_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = Mercury__argument3;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__io_action__make_yes_io_action_3_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__fn__mdb__io_action__make_no_io_action_0_0);

MR_Word
MR_IO_ACTION_make_no_io_action(void);

MR_Word
MR_IO_ACTION_make_no_io_action(void)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Word return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdb__io_action__make_no_io_action_0_0));
#endif
	MR_restore_registers();
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdb__io_action__make_no_io_action_0_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


static void mercury__mdb__io_action_maybe_bunch_0(void)
{
	mdb__io_action_module0();
	mdb__io_action_module1();
	mdb__io_action_module2();
	mdb__io_action_module3();
	mdb__io_action_module4();
	mdb__io_action_module5();
	mdb__io_action_module6();
	mdb__io_action_module7();
	mdb__io_action_module8();
	mdb__io_action_module9();
	mdb__io_action_module10();
	mdb__io_action_module11();
	mdb__io_action_module12();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__io_action__init(void);
void mercury__mdb__io_action__init_type_tables(void);
void mercury__mdb__io_action__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__io_action__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__io_action__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__io_action__init_threadscope_string_table(void);
#endif

void mercury__mdb__io_action__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__io_action_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__io_action__type_ctor_info_io_action_0,
		mdb__io_action__io_action_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__io_action__type_ctor_info_io_action_range_0,
		mdb__io_action__io_action_range_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__io_action__type_ctor_info_io_seq_num_0,
		mdb__io_action__io_seq_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__io_action__type_ctor_info_maybe_tabled_io_action_0,
		mdb__io_action__maybe_tabled_io_action_0_0);
	mercury__mdb__io_action__init_debugger();
}

void mercury__mdb__io_action__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__io_action__type_ctor_info_io_action_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__io_action__type_ctor_info_io_action_range_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__io_action__type_ctor_info_io_seq_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__io_action__type_ctor_info_maybe_tabled_io_action_0);
	}
}


void mercury__mdb__io_action__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__io_action__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__io_action);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__io_action__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__io_action__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
