/*
** Automatically generated from `rtti_access.m'
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
INIT mercury__mdbcomp__rtti_access__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdbcomp.rtti_access.c"
#include "mdbcomp.rtti_access.mh"

#line 27 "mdbcomp.rtti_access.c"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 31 "mdbcomp.rtti_access.c"
#line 134 "../library/io.int2"
#include "io.mh"

#line 35 "mdbcomp.rtti_access.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 39 "mdbcomp.rtti_access.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "mdbcomp.rtti_access.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "mdbcomp.rtti_access.c"
#line 48 "mdbcomp.rtti_access.c"
#ifndef MDBCOMP__RTTI_ACCESS_DECL_GUARD
#define MDBCOMP__RTTI_ACCESS_DECL_GUARD

#line 52 "mdbcomp.rtti_access.c"
#line 53 "mdbcomp.rtti_access.c"

#endif
#line 56 "mdbcomp.rtti_access.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
	mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0;
MR_decl_label1(mdbcomp__rtti_access__find_initial_version_arg_num_3_0, 1)
MR_decl_label1(mdbcomp__rtti_access__get_context_from_label_layout_3_0, 1)
MR_decl_label1(mdbcomp__rtti_access__proc_layout_is_uci_1_0, 1)
MR_decl_label1(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0, 3)
MR_decl_label3(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0, 4,2,7)
MR_decl_label8(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0, 8,6,11,12,13,3,14,15)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_port_from_label_layout_1_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0)
MR_def_extern_entry(mdbcomp__rtti_access__get_context_from_label_layout_3_0)
MR_decl_static(mdbcomp__rtti_access__proc_layout_is_uci_1_0)
MR_decl_static(mdbcomp__rtti_access__proc_layout_get_uci_fields_7_0)
MR_decl_static(mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_proc_name_1_0)
MR_def_extern_entry(mdbcomp__rtti_access__find_initial_version_arg_num_3_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__label_layout_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__label_layout_0_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__proc_layout_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__proc_layout_0_0)

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__rtti_access__proc_layout_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__rtti_access__proc_layout_0_0)),
	"mdbcomp.rtti_access",
	"proc_layout",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__rtti_access__label_layout_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__rtti_access__label_layout_0_0)),
	"mdbcomp.rtti_access",
	"label_layout",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};


MR_BEGIN_MODULE(mdbcomp__rtti_access_module0)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_LabelLayout *	Label;
	const MR_ProcLayout *	ProcLayout;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 84 "rtti_access.m"

    ProcLayout = Label->MR_sll_entry;
;}
#line 144 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) ProcLayout;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module1)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_LabelLayout *	Label;
	MR_String	GoalPath;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 91 "rtti_access.m"

    GoalPath = (MR_String) MR_label_goal_path(Label);
;}
#line 176 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) GoalPath;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module2)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0);
	MR_init_label1(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	{
	const MR_LabelLayout *	Label;
	MR_String	GoalPath;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0
	Label = (const MR_LabelLayout *) MR_tempr1;
{
#line 91 "rtti_access.m"

    GoalPath = (MR_String) MR_label_goal_path(Label);
;}
#line 219 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) GoalPath;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module3)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_port_from_label_layout_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_port_from_label_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_LabelLayout *	Label;
	MR_Word	Port;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_port_from_label_layout_1_0
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 116 "rtti_access.m"

    Port = Label->MR_sll_port;
;}
#line 252 "mdbcomp.rtti_access.c"
	MR_r1 = Port;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__program_representation__path_from_string_2_0);
MR_decl_entry(fn__mdbcomp__trace_counts__make_path_port_2_0);
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module4)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0);
	MR_init_label3(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0,4,2,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	{
	const MR_LabelLayout *	Label;
	MR_Word	Port;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 116 "rtti_access.m"

    Port = Label->MR_sll_port;
;}
#line 292 "mdbcomp.rtti_access.c"
	MR_tempr1 = Port;
#undef	MR_PROC_LABEL
	}
	{
	const MR_LabelLayout *	Label;
	MR_String	GoalPath;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 91 "rtti_access.m"

    GoalPath = (MR_String) MR_label_goal_path(Label);
;}
#line 306 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) GoalPath;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__program_representation__path_from_string_2_0,
		fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0_i4);
MR_def_label(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__mdbcomp__trace_counts__make_path_port_2_0);
MR_def_label(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = (MR_Word) MR_string_const("get_path_port_from_label_layout: invalid goal path", 50);
	}
	MR_np_call_localret_ent(require__error_1_0,
		fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0_i7);
MR_def_label(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__mdbcomp__trace_counts__make_path_port_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module5)
	MR_init_entry1(mdbcomp__rtti_access__get_context_from_label_layout_3_0);
	MR_init_label1(mdbcomp__rtti_access__get_context_from_label_layout_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__get_context_from_label_layout_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_LabelLayout *	Label;
	MR_String	FileName;
	MR_Integer	LineNo;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__get_context_from_label_layout_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 102 "rtti_access.m"

    const char  *filename;
    int         line_no;

    SUCCESS_INDICATOR = MR_find_context(Label, &filename, &line_no);
    LineNo = (MR_Integer) line_no;
    MR_TRACE_USE_HP(
        MR_make_aligned_string(FileName, (MR_String) filename);
    );
;}
#line 377 "mdbcomp.rtti_access.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__rtti_access__get_context_from_label_layout_3_0_i1);
	MR_r2 = (MR_Word) FileName;
	MR_r3 = LineNo;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__rtti_access__get_context_from_label_layout_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module6)
	MR_init_entry1(mdbcomp__rtti_access__proc_layout_is_uci_1_0);
	MR_init_label1(mdbcomp__rtti_access__proc_layout_is_uci_1_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__proc_layout_is_uci_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	Layout;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__proc_layout_is_uci_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Layout = (const MR_ProcLayout *) MR_r1;
{
#line 166 "rtti_access.m"

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 425 "mdbcomp.rtti_access.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__rtti_access__proc_layout_is_uci_1_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__rtti_access__proc_layout_is_uci_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module7)
	MR_init_entry1(mdbcomp__rtti_access__proc_layout_get_uci_fields_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__proc_layout_get_uci_fields_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	Layout;
	MR_String	TypeName;
	MR_String	TypeModule;
	MR_String	DefModule;
	MR_String	PredName;
	MR_Integer	TypeArity;
	MR_Integer	ModeNum;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__proc_layout_get_uci_fields_7_0
	Layout = (const MR_ProcLayout *) MR_r1;
{
#line 181 "rtti_access.m"

    const MR_UCIProcId  *proc_id;

    proc_id = &Layout->MR_sle_uci;

    /* The casts are there to cast away const without warnings */
    TypeName   = (MR_String) (MR_Integer) proc_id->MR_uci_type_name;
    TypeModule = (MR_String) (MR_Integer) proc_id->MR_uci_type_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_uci_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_uci_pred_name;
    TypeArity  = proc_id->MR_uci_type_arity;
    ModeNum    = proc_id->MR_uci_mode;
;}
#line 479 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) TypeName;
	MR_r2 = (MR_Word) TypeModule;
	MR_r3 = (MR_Word) DefModule;
	MR_r4 = (MR_Word) PredName;
	MR_r5 = TypeArity;
	MR_r6 = ModeNum;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module8)
	MR_init_entry1(mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	Layout;
	MR_Word	PredOrFunc;
	MR_String	DeclModule;
	MR_String	DefModule;
	MR_String	PredName;
	MR_Integer	Arity;
	MR_Integer	ModeNum;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_0
	Layout = (const MR_ProcLayout *) MR_r1;
{
#line 203 "rtti_access.m"

    const MR_UserProcId *proc_id;

    proc_id = &Layout->MR_sle_user;

    /* The casts are there to cast away const without warnings */
    PredOrFunc = proc_id->MR_user_pred_or_func;
    DeclModule = (MR_String) (MR_Integer) proc_id->MR_user_decl_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_user_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_user_name;
    Arity      = proc_id->MR_user_arity;
    ModeNum    = proc_id->MR_user_mode;
;}
#line 531 "mdbcomp.rtti_access.c"
	MR_r1 = PredOrFunc;
	MR_r2 = (MR_Word) DeclModule;
	MR_r3 = (MR_Word) DefModule;
	MR_r4 = (MR_Word) PredName;
	MR_r5 = Arity;
	MR_r6 = ModeNum;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__prim_data__special_pred_name_arity_4_2);
MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module9)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0);
	MR_init_label8(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,8,6,11,12,13,3,14,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	const MR_ProcLayout *	Layout;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Layout = (const MR_ProcLayout *) MR_r1;
{
#line 166 "rtti_access.m"

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 579 "mdbcomp.rtti_access.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	const MR_ProcLayout *	Layout;
	MR_String	TypeName;
	MR_String	TypeModule;
	MR_String	DefModule;
	MR_String	PredName;
	MR_Integer	TypeArity;
	MR_Integer	ModeNum;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0
	Layout = (const MR_ProcLayout *) MR_r1;
{
#line 181 "rtti_access.m"

    const MR_UCIProcId  *proc_id;

    proc_id = &Layout->MR_sle_uci;

    /* The casts are there to cast away const without warnings */
    TypeName   = (MR_String) (MR_Integer) proc_id->MR_uci_type_name;
    TypeModule = (MR_String) (MR_Integer) proc_id->MR_uci_type_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_uci_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_uci_pred_name;
    TypeArity  = proc_id->MR_uci_type_arity;
    ModeNum    = proc_id->MR_uci_mode;
;}
#line 612 "mdbcomp.rtti_access.c"
	MR_tempr1 = (MR_Word) TypeName;
	MR_tempr2 = (MR_Word) TypeModule;
	MR_tempr3 = (MR_Word) DefModule;
	MR_r1 = (MR_Word) PredName;
	MR_tempr4 = TypeArity;
	MR_tempr5 = ModeNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	MR_sv(5) = MR_tempr5;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_2,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i8);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i12);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_tempr4 = MR_sv(4);
	MR_tempr5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_string_const("get_proc_label_from_layout: bad special_pred_id", 47);
	}
	MR_np_call_localret_ent(require__error_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i11);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i12);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i13);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	{
	const MR_ProcLayout *	Layout;
	MR_Word	PredOrFunc;
	MR_String	DeclModule;
	MR_String	DefModule;
	MR_String	PredName;
	MR_Integer	Arity;
	MR_Integer	ModeNum;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0
	Layout = (const MR_ProcLayout *) MR_r1;
{
#line 203 "rtti_access.m"

    const MR_UserProcId *proc_id;

    proc_id = &Layout->MR_sle_user;

    /* The casts are there to cast away const without warnings */
    PredOrFunc = proc_id->MR_user_pred_or_func;
    DeclModule = (MR_String) (MR_Integer) proc_id->MR_user_decl_module;
    DefModule  = (MR_String) (MR_Integer) proc_id->MR_user_def_module;
    PredName   = (MR_String) (MR_Integer) proc_id->MR_user_name;
    Arity      = proc_id->MR_user_arity;
    ModeNum    = proc_id->MR_user_mode;
;}
#line 708 "mdbcomp.rtti_access.c"
	MR_tempr1 = PredOrFunc;
	MR_tempr2 = (MR_Word) DeclModule;
	MR_r1 = (MR_Word) DefModule;
	MR_tempr3 = (MR_Word) PredName;
	MR_tempr4 = Arity;
	MR_tempr5 = ModeNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_tempr5;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i14);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i15);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module10)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_proc_name_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_proc_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module11)
	MR_init_entry1(mdbcomp__rtti_access__find_initial_version_arg_num_3_0);
	MR_init_label1(mdbcomp__rtti_access__find_initial_version_arg_num_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__find_initial_version_arg_num_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	Layout;
	MR_Integer	OutArgNum;
	MR_Integer	InArgNum;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__find_initial_version_arg_num_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	Layout = (const MR_ProcLayout *) MR_r1;
	OutArgNum = MR_r2;
{
#line 220 "rtti_access.m"

    const MR_ProcLayout     *proc;
    int                     out_hlds_num;
    const char              *out_name;

    proc = Layout;

    if (! MR_PROC_LAYOUT_HAS_EXEC_TRACE(proc)) {
        MR_fatal_error("find_initial_version_arg_num: proc");
    }

    out_hlds_num = proc->MR_sle_head_var_nums[OutArgNum - 1];
    out_name = MR_hlds_var_name(proc, out_hlds_num);
    if (out_name == NULL || MR_streq(out_name, "")) {
        /* out_hlds_num was not named by the user */
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        int                     out_base_name_len;
        int                     out_numerical_suffix;
        int                     num_matches;
        int                     in_hlds_num;
        int                     in_arg_num;
        const char              *in_name;
        int                     start_of_num;
        int                     in_numerical_suffix;
        int                     head_var_num;
        int                     call_var_num;
        int                     call_num_vars;
        const MR_LabelLayout    *call_label;
        MR_bool                 found;

        start_of_num = MR_find_start_of_num_suffix(out_name);
        if (start_of_num < 0) {
            out_base_name_len = strlen(out_name);
            out_numerical_suffix = -1;
        } else {
            out_base_name_len = start_of_num;
            out_numerical_suffix = atoi(out_name + start_of_num);
        }

        num_matches = 0;
        in_arg_num = -1;

        for (head_var_num = 0; head_var_num < proc->MR_sle_num_head_vars;
            head_var_num++)
        {
            in_hlds_num = proc->MR_sle_head_var_nums[head_var_num];
            in_name = MR_hlds_var_name(proc, in_hlds_num);
            if (in_name == NULL || MR_streq(in_name, "")) {
                continue;
            }

            start_of_num = MR_find_start_of_num_suffix(in_name);
            if (start_of_num < 0) {
                continue;
            }

            if (! (
                    (
                        /*
                        ** The names are exactly the same except
                        ** for the numerical suffix.
                        */
                        start_of_num == out_base_name_len &&
                        strneq(out_name, in_name, start_of_num)
                    )
                ||
                    (
                        /*
                        ** The names are exactly the same except
                        ** for an underscore and the numerical suffix
                        ** (as is the case with state variable notation).
                        */
                        start_of_num == out_base_name_len + 1 &&
                        start_of_num > 0 &&
                        in_name[start_of_num - 1] == '_' &&
                        strneq(out_name, in_name, start_of_num - 1)
                    )
                ))
            {
                continue;
            }

            in_numerical_suffix = atoi(in_name + start_of_num);
            if (! ((in_numerical_suffix >= out_numerical_suffix)
                || (out_numerical_suffix < 0)))
            {
                continue;
            }

            call_label = proc->MR_sle_call_label;
            if (! MR_has_valid_var_count(call_label)) {
                    continue;
            }

            if (! MR_has_valid_var_info(call_label)) {
                continue;
            }

            /*
            ** The in_hlds_num has the same prefix as the output variable.
            ** Check if in_hlds_num is an input argument.
            */
            call_num_vars = MR_all_desc_var_count(call_label);
            found = MR_FALSE;
            for (call_var_num = 0 ; call_var_num < call_num_vars;
                    call_var_num++)
            {
                if (call_label->MR_sll_var_nums[call_var_num] == in_hlds_num) {
                    found = MR_TRUE;
                    break;
                }
            }

            if (! found) {
                continue;
            }

            num_matches++;
            in_arg_num = head_var_num;
        }

        if (num_matches == 1) {
            InArgNum = in_arg_num + 1;
            SUCCESS_INDICATOR = MR_TRUE;
        } else {
            SUCCESS_INDICATOR = MR_FALSE;
        }
    }
;}
#line 928 "mdbcomp.rtti_access.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__rtti_access__find_initial_version_arg_num_3_0_i1);
	MR_r2 = InArgNum;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__rtti_access__find_initial_version_arg_num_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module12)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	Layout;
	MR_Word	Layouts;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0
	Layout = (const MR_ProcLayout *) MR_r1;
{
#line 354 "rtti_access.m"

    const MR_ModuleLayout   *module;
    const MR_ProcLayout     *proc;
    int                     i;
    MR_Word                 list;
    MR_bool                 match;
    const MR_ProcLayout     *selected_proc;

    selected_proc = Layout;

    if (! MR_PROC_LAYOUT_HAS_EXEC_TRACE(selected_proc)) {
        MR_fatal_error("get_all_modes_for_layout: selected_proc");
    }

    module = selected_proc->MR_sle_module_layout;
    list = MR_list_empty();
    for (i = 0; i < module->MR_ml_proc_count; i++) {
        proc = module->MR_ml_procs[i];
        if (! MR_PROC_LAYOUT_HAS_EXEC_TRACE(selected_proc)) {
            MR_fatal_error("get_all_modes_for_layout: proc");
        }

        if (MR_PROC_LAYOUT_IS_UCI(selected_proc)
            && MR_PROC_LAYOUT_IS_UCI(proc))
        {
            const MR_UCIProcId  *proc_id;
            const MR_UCIProcId  *selected_proc_id;

            proc_id = &proc->MR_sle_uci;
            selected_proc_id = &selected_proc->MR_sle_uci;

            if (MR_streq(proc_id->MR_uci_type_name,
                selected_proc_id->MR_uci_type_name)
            && MR_streq(proc_id->MR_uci_type_module,
                selected_proc_id->MR_uci_type_module)
            && MR_streq(proc_id->MR_uci_pred_name,
                selected_proc_id->MR_uci_pred_name)
            && (proc_id->MR_uci_type_arity ==
                selected_proc_id->MR_uci_type_arity))
            {
                match = MR_TRUE;
            } else {
                match = MR_FALSE;
            }
        } else if (!MR_PROC_LAYOUT_IS_UCI(selected_proc)
            && !MR_PROC_LAYOUT_IS_UCI(proc))
        {
            const MR_UserProcId *proc_id;
            const MR_UserProcId *selected_proc_id;

            proc_id = &proc->MR_sle_user;
            selected_proc_id = &selected_proc->MR_sle_user;

            if ((proc_id->MR_user_pred_or_func ==
                selected_proc_id->MR_user_pred_or_func)
            && MR_streq(proc_id->MR_user_decl_module,
                selected_proc_id->MR_user_decl_module)
            && MR_streq(proc_id->MR_user_name,
                selected_proc_id->MR_user_name)
            && (proc_id->MR_user_arity ==
                selected_proc_id->MR_user_arity))
            {
                match = MR_TRUE;
            } else {
                match = MR_FALSE;
            }
        } else {
            match = MR_FALSE;
        }

        if (match) {
            list = MR_int_list_cons((MR_Integer) proc, list);
        }
    }

    Layouts = list;
;}
#line 1042 "mdbcomp.rtti_access.c"
	MR_r1 = Layouts;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module13)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__rtti_access__label_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module14)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__rtti_access__label_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module15)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__proc_layout_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__rtti_access__proc_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module16)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__proc_layout_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__rtti_access__proc_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__mdbcomp__rtti_access_maybe_bunch_0(void)
{
	mdbcomp__rtti_access_module0();
	mdbcomp__rtti_access_module1();
	mdbcomp__rtti_access_module2();
	mdbcomp__rtti_access_module3();
	mdbcomp__rtti_access_module4();
	mdbcomp__rtti_access_module5();
	mdbcomp__rtti_access_module6();
	mdbcomp__rtti_access_module7();
	mdbcomp__rtti_access_module8();
	mdbcomp__rtti_access_module9();
	mdbcomp__rtti_access_module10();
	mdbcomp__rtti_access_module11();
	mdbcomp__rtti_access_module12();
	mdbcomp__rtti_access_module13();
	mdbcomp__rtti_access_module14();
	mdbcomp__rtti_access_module15();
	mdbcomp__rtti_access_module16();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__rtti_access__init(void);
void mercury__mdbcomp__rtti_access__init_type_tables(void);
void mercury__mdbcomp__rtti_access__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__rtti_access__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__rtti_access__init_complexity_procs(void);
#endif

void mercury__mdbcomp__rtti_access__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__rtti_access_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
		mdbcomp__rtti_access__proc_layout_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
		mdbcomp__rtti_access__label_layout_0_0);
	mercury__mdbcomp__rtti_access__init_debugger();
}

void mercury__mdbcomp__rtti_access__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0);
	}
}


void mercury__mdbcomp__rtti_access__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__rtti_access__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__rtti_access__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
