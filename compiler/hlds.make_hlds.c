/*
** Automatically generated from `make_hlds.m'
** by the Mercury compiler,
** version 11.07.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__hlds__make_hlds__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "hlds.make_hlds.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "hlds.make_hlds.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "hlds.make_hlds.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "hlds.make_hlds.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "hlds.make_hlds.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "hlds.make_hlds.c"
#line 49 "hlds.make_hlds.c"
#include "hlds.make_hlds.mh"

#line 52 "hlds.make_hlds.c"
#line 53 "hlds.make_hlds.c"
#ifndef HLDS__MAKE_HLDS_DECL_GUARD
#define HLDS__MAKE_HLDS_DECL_GUARD

#line 57 "hlds.make_hlds.c"
#line 58 "hlds.make_hlds.c"

#endif
#line 61 "hlds.make_hlds.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0;
MR_def_extern_entry(hlds__make_hlds__parse_tree_to_hlds_11_0)
MR_def_extern_entry(hlds__make_hlds__add_new_proc_12_0)
MR_def_extern_entry(hlds__make_hlds__add_special_pred_for_real_9_0)
MR_def_extern_entry(hlds__make_hlds__add_special_pred_decl_for_real_8_0)
MR_def_extern_entry(hlds__make_hlds__produce_instance_method_clauses_16_0)
MR_def_extern_entry(hlds__make_hlds__set_module_recomp_info_3_0)
MR_def_extern_entry(__Unify___hlds__make_hlds__make_hlds_qual_info_0_0)
MR_def_extern_entry(__Compare___hlds__make_hlds__make_hlds_qual_info_0_0)
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__qual_info__type_ctor_info_qual_info_0;

const MR_TypeCtorInfo_Struct mercury_data_hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0 = {
	0,
	14,
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



MR_decl_entry(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_0);

MR_BEGIN_MODULE(hlds__make_hlds_module0)
	MR_init_entry1(hlds__make_hlds__parse_tree_to_hlds_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__parse_tree_to_hlds_11_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'parse_tree_to_hlds'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__parse_tree_to_hlds_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_pred__do_add_new_proc_12_0);

MR_BEGIN_MODULE(hlds__make_hlds_module1)
	MR_init_entry1(hlds__make_hlds__add_new_proc_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_new_proc_12_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_new_proc'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__add_new_proc_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__add_pred__do_add_new_proc_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_0);

MR_BEGIN_MODULE(hlds__make_hlds_module2)
	MR_init_entry1(hlds__make_hlds__add_special_pred_for_real_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_special_pred_for_real_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_special_pred_for_real'/9 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__add_special_pred_decl_for_real_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_special_pred_decl_for_real'/8 mode 0 */
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

MR_decl_entry(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0);

MR_BEGIN_MODULE(hlds__make_hlds_module4)
	MR_init_entry1(hlds__make_hlds__produce_instance_method_clauses_16_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__produce_instance_method_clauses_16_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'produce_instance_method_clauses'/16 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__hlds__make_hlds__produce_instance_method_clauses_16_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__make_hlds__qual_info__set_module_recompilation_info_3_0);

MR_BEGIN_MODULE(hlds__make_hlds_module5)
	MR_init_entry1(hlds__make_hlds__set_module_recomp_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__hlds__make_hlds__set_module_recomp_info_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_module_recomp_info'/3 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___hlds__make_hlds__make_hlds_qual_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___hlds__make_hlds__make_hlds_qual_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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
void mercury__hlds__make_hlds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__hlds__make_hlds__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__hlds__make_hlds__init_threadscope_string_table(void);
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

void mercury__hlds__make_hlds__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__hlds__make_hlds);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__hlds__make_hlds__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__hlds__make_hlds__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
