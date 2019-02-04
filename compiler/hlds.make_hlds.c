/*
** Automatically generated from `make_hlds.m'
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
INIT mercury__hlds__make_hlds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "hlds.make_hlds.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "hlds.make_hlds.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "hlds.make_hlds.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "hlds.make_hlds.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "hlds.make_hlds.c"
#line 44 "hlds.make_hlds.c"
#include "hlds.make_hlds.mh"

#line 47 "hlds.make_hlds.c"
#line 48 "hlds.make_hlds.c"
#ifndef HLDS__MAKE_HLDS_DECL_GUARD
#define HLDS__MAKE_HLDS_DECL_GUARD

#line 52 "hlds.make_hlds.c"
#line 53 "hlds.make_hlds.c"

#endif
#line 56 "hlds.make_hlds.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0;
MR_def_extern_entry(hlds__make_hlds__parse_tree_to_hlds_10_0)
MR_def_extern_entry(hlds__make_hlds__add_new_proc_11_0)
MR_def_extern_entry(hlds__make_hlds__add_special_pred_for_real_9_0)
MR_def_extern_entry(hlds__make_hlds__add_special_pred_decl_for_real_8_0)
MR_def_extern_entry(hlds__make_hlds__produce_instance_method_clauses_14_0)
MR_def_extern_entry(hlds__make_hlds__set_module_recomp_info_3_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__make_hlds_qual_info_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__make_hlds_qual_info_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;

const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___hlds__make_hlds__make_hlds_qual_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___hlds__make_hlds__make_hlds_qual_info_0_0)),
	"hlds.make_hlds",
	"make_hlds_qual_info",
	{ 0 },
	{ (void *)&mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0 },
	-1,
	0,
	NULL
};

MR_decl_entry(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0);

MR_BEGIN_MODULE(hlds__make_hlds_module0)
	MR_init_entry1(hlds__make_hlds__parse_tree_to_hlds_10_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__parse_tree_to_hlds_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_10_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_pred__do_add_new_proc_11_0);

MR_BEGIN_MODULE(hlds__make_hlds_module1)
	MR_init_entry1(hlds__make_hlds__add_new_proc_11_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_new_proc_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__add_pred__do_add_new_proc_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);

MR_BEGIN_MODULE(hlds__make_hlds_module2)
	MR_init_entry1(hlds__make_hlds__add_special_pred_for_real_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_special_pred_for_real_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0);

MR_BEGIN_MODULE(hlds__make_hlds_module3)
	MR_init_entry1(hlds__make_hlds__add_special_pred_decl_for_real_8_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_special_pred_decl_for_real_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_class__do_produce_instance_method_clauses_14_0);

MR_BEGIN_MODULE(hlds__make_hlds_module4)
	MR_init_entry1(hlds__make_hlds__produce_instance_method_clauses_14_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__produce_instance_method_clauses_14_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__add_class__do_produce_instance_method_clauses_14_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0);

MR_BEGIN_MODULE(hlds__make_hlds_module5)
	MR_init_entry1(hlds__make_hlds__set_module_recomp_info_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__set_module_recomp_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__make_hlds__qual_info__qual_info_0_0);

MR_BEGIN_MODULE(hlds__make_hlds_module6)
	MR_init_entry1(__Unify___hlds__make_hlds__make_hlds_qual_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___hlds__make_hlds__make_hlds_qual_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___hlds__make_hlds__qual_info__qual_info_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__make_hlds__qual_info__qual_info_0_0);

MR_BEGIN_MODULE(hlds__make_hlds_module7)
	MR_init_entry1(__Compare___hlds__make_hlds__make_hlds_qual_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___hlds__make_hlds__make_hlds_qual_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___hlds__make_hlds__qual_info__qual_info_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__hlds__make_hlds_maybe_bunch_0(void)
{
	hlds__make_hlds_module0();
	hlds__make_hlds_module1();
	hlds__make_hlds_module2();
	hlds__make_hlds_module3();
	hlds__make_hlds_module4();
	hlds__make_hlds_module5();
	hlds__make_hlds_module6();
	hlds__make_hlds_module7();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__hlds__make_hlds__init(void);
void mercury__hlds__make_hlds__init_type_tables(void);
void mercury__hlds__make_hlds__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__hlds__make_hlds__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__init_complexity_procs(void);
#endif

void mercury__hlds__make_hlds__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__hlds__make_hlds_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0,
		hlds__make_hlds__make_hlds_qual_info_0_0);
	mercury__hlds__make_hlds__init_debugger();
}

void mercury__hlds__make_hlds__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0);
	}
}


void mercury__hlds__make_hlds__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__hlds__make_hlds__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
