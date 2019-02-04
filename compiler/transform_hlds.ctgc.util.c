/*
** Automatically generated from `ctgc.util.m'
** by the Mercury compiler,
** version rotd-2011-08-23, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__ctgc__util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.ctgc.util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "transform_hlds.ctgc.util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "transform_hlds.ctgc.util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "transform_hlds.ctgc.util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "transform_hlds.ctgc.util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "transform_hlds.ctgc.util.c"
#line 49 "transform_hlds.ctgc.util.c"
#include "transform_hlds.ctgc.util.mh"

#line 52 "transform_hlds.ctgc.util.c"
#line 53 "transform_hlds.ctgc.util.c"
#ifndef TRANSFORM_HLDS__CTGC__UTIL_DECL_GUARD
#define TRANSFORM_HLDS__CTGC__UTIL_DECL_GUARD

#line 57 "transform_hlds.ctgc.util.c"
#line 58 "transform_hlds.ctgc.util.c"

#endif
#line 61 "transform_hlds.ctgc.util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];
MR_decl_label2(transform_hlds__ctgc__util__pred_requires_analysis_2_0, 3,4)
MR_decl_label2(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0, 2,3)
MR_decl_label2(transform_hlds__ctgc__util__reverse_renaming_5_0, 2,3)
MR_decl_label4(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0, 3,4,5,2)
MR_decl_label3(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0, 2,9,1)
MR_decl_label3(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0, 2,14,1)
MR_decl_label2(transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0, 2,4)
MR_decl_label10(fn__transform_hlds__ctgc__util__get_type_substitution_5_0, 2,3,4,5,6,7,12,11,16,9)
MR_decl_label8(fn__transform_hlds__ctgc__util__get_type_substitution_5_0, 20,21,18,8,25,26,27,29)
MR_decl_label2(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0, 2,3)
MR_def_extern_entry(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0)
MR_def_extern_entry(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0)
MR_def_extern_entry(transform_hlds__ctgc__util__pred_requires_analysis_2_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0)
MR_def_extern_entry(fn__transform_hlds__ctgc__util__get_type_substitution_5_0)
MR_def_extern_entry(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0)
MR_def_extern_entry(transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0)
MR_def_extern_entry(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0)
MR_decl_static(transform_hlds__ctgc__util__reverse_renaming_5_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,2),
MR_COMMON(0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__util__get_type_substitution_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__ctgc__util__get_type_substitution_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(1,0),
MR_COMMON(0,3),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__ctgc__util__get_type_substitution_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.ctgc.util",
"transform_hlds.ctgc.util",
"reverse_renaming",
5,
0
},
"transform_hlds.ctgc.util",
"ctgc.util.m",
163,
"37"
};


MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module0)
	MR_init_entry1(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__util__pred_requires_no_analysis_2_0);
	MR_init_label2(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_requires_no_analysis'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__pred_requires_no_analysis_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i2);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__util__pred_requires_no_analysis_2_0_i3);
MR_def_label(transform_hlds__ctgc__util__pred_requires_no_analysis_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) == MR_mktag((MR_Integer) 2));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module1)
	MR_init_entry1(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0);
	MR_init_label4(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0,3,4,5,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'some_preds_requiring_no_analysis'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(3) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(4));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0_i2);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0_i3);
MR_def_label(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0_i4);
MR_def_label(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0_i5);
MR_def_label(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(4));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__util__some_preds_requiring_no_analysis_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(2);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__util_module2)
	MR_init_entry1(transform_hlds__ctgc__util__pred_requires_analysis_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__util__pred_requires_analysis_2_0);
	MR_init_label2(transform_hlds__ctgc__util__pred_requires_analysis_2_0,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_requires_analysis'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__pred_requires_analysis_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__ctgc__util__pred_requires_analysis_2_0_i3);
MR_def_label(transform_hlds__ctgc__util__pred_requires_analysis_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__ctgc__util__pred_requires_analysis_2_0_i4);
MR_def_label(transform_hlds__ctgc__util__pred_requires_analysis_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_tag(MR_r1) != MR_mktag((MR_Integer) 2));
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module3)
	MR_init_entry1(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__util__get_variable_renaming_3_0);
	MR_init_label2(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_variable_renaming'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__util__get_variable_renaming_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		fn__transform_hlds__ctgc__util__get_variable_renaming_3_0_i2);
MR_def_label(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		fn__transform_hlds__ctgc__util__get_variable_renaming_3_0_i3);
MR_def_label(fn__transform_hlds__ctgc__util__get_variable_renaming_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__from_corresponding_lists_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_typevarset_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0);
MR_decl_entry(parse_tree__prog_data__tvarset_merge_renaming_4_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);
MR_decl_entry(parse_tree__prog_type__type_list_subsumes_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(parse_tree__prog_type__type_unify_list_5_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module4)
	MR_init_entry1(fn__transform_hlds__ctgc__util__get_type_substitution_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__ctgc__util__get_type_substitution_5_0);
	MR_init_label10(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,2,3,4,5,6,7,12,11,16,9)
	MR_init_label8(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,20,21,18,8,25,26,27,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_type_substitution'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__ctgc__util__get_type_substitution_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i2);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_typevarset_2_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i3);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i4);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i5);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__tvarset_merge_renaming_4_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i6);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i7);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i9);
	}
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type__type_list_subsumes_3_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i12);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i11);
	}
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_GOTO_LAB(fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i8);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i16);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i8);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i20);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_unify_list_5_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i21);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i18);
	}
	MR_r3 = MR_sv(5);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i8);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.ctgc.util", 24);
	MR_r2 = (MR_Word) MR_string_const("function \140transform_hlds.ctgc.util.get_type_substitution\'/5", 59);
	MR_r3 = (MR_Word) MR_string_const("type unification failed", 23);
	MR_np_call_localret_ent(require__unexpected_3_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i8);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(4) = MR_r1;
	MR_r2 = MR_r1;
	MR_np_call_localret_ent(map__keys_2_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i25);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__values_2_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i26);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i27);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__ctgc__util__reverse_renaming_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		fn__transform_hlds__ctgc__util__get_type_substitution_5_0_i29);
MR_def_label(fn__transform_hlds__ctgc__util__get_type_substitution_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tempr3 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_tempr4 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_tempr4;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__classify_type_2_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module5)
	MR_init_entry1(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0);
	MR_init_label3(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0,2,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'type_needs_sharing_analysis'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0_i2);
MR_def_label(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0_i14);
	}
	if (MR_LTAGS_TEST(MR_r1,0,3)) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0_i14);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_INT_EQ(MR_r2,2)) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0_i14);
	}
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0,1)
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

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module6)
	MR_init_entry1(transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0);
	MR_init_label2(transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'var_needs_sharing_analysis'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0_i2);
MR_def_label(transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0_i4);
MR_def_label(transform_hlds__ctgc__util__var_needs_sharing_analysis_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__ctgc__util__type_needs_sharing_analysis_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__ctgc__util_module7)
	MR_init_entry1(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0);
	MR_init_label3(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0,2,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'top_cell_may_be_reusable'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_2_0,
		transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0_i2);
MR_def_label(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0_i9);
	}
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0_i1);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_r2 == (MR_Integer) 2);
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__ctgc__util__top_cell_may_be_reusable_2_0,1)
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

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(transform_hlds__ctgc__util_module8)
	MR_init_entry1(transform_hlds__ctgc__util__reverse_renaming_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__ctgc__util__reverse_renaming_5_0);
	MR_init_label2(transform_hlds__ctgc__util__reverse_renaming_5_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reverse_renaming'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__ctgc__util__reverse_renaming_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_tvar_3_0,
		transform_hlds__ctgc__util__reverse_renaming_5_0_i2);
MR_def_label(transform_hlds__ctgc__util__reverse_renaming_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_3_0,
		transform_hlds__ctgc__util__reverse_renaming_5_0_i3);
MR_def_label(transform_hlds__ctgc__util__reverse_renaming_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__ctgc__util_maybe_bunch_0(void)
{
	transform_hlds__ctgc__util_module0();
	transform_hlds__ctgc__util_module1();
	transform_hlds__ctgc__util_module2();
	transform_hlds__ctgc__util_module3();
	transform_hlds__ctgc__util_module4();
	transform_hlds__ctgc__util_module5();
	transform_hlds__ctgc__util_module6();
	transform_hlds__ctgc__util_module7();
	transform_hlds__ctgc__util_module8();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__ctgc__util__init(void);
void mercury__transform_hlds__ctgc__util__init_type_tables(void);
void mercury__transform_hlds__ctgc__util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__ctgc__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__ctgc__util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__ctgc__util__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__ctgc__util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__ctgc__util_maybe_bunch_0();
	mercury__transform_hlds__ctgc__util__init_debugger();
}

void mercury__transform_hlds__ctgc__util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__transform_hlds__ctgc__util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__ctgc__util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__ctgc__util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__ctgc__util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__ctgc__util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
