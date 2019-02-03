/*
** Automatically generated from `optimize.m'
** by the Mercury compiler,
** version 11.07-beta-2011-07-20, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ll_backend__optimize__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 58 "../library/dir.int"
#include "dir.mh"

#line 28 "ll_backend.optimize.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 32 "ll_backend.optimize.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 36 "ll_backend.optimize.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "ll_backend.optimize.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ll_backend.optimize.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "ll_backend.optimize.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "ll_backend.optimize.c"
#line 53 "ll_backend.optimize.c"
#include "ll_backend.optimize.mh"

#line 56 "ll_backend.optimize.c"
#line 57 "ll_backend.optimize.c"
#ifndef LL_BACKEND__OPTIMIZE_DECL_GUARD
#define LL_BACKEND__OPTIMIZE_DECL_GUARD

#line 61 "ll_backend.optimize.c"
#line 62 "ll_backend.optimize.c"

#endif
#line 65 "ll_backend.optimize.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ll_backend__optimize__type_ctor_info_llds_opt_info_0,
	mercury_data_ll_backend__optimize__type_ctor_info_opt_debug_info_0;
MR_decl_label3(ll_backend__optimize__escape_dir_char_3_0, 4,2,7)
MR_decl_label10(ll_backend__optimize__maybe_opt_debug_8_0, 69,4,5,6,7,8,9,10,11,12)
MR_decl_label10(ll_backend__optimize__maybe_opt_debug_8_0, 13,15,14,19,20,23,24,25,29,30)
MR_decl_label10(ll_backend__optimize__maybe_opt_debug_8_0, 31,32,33,34,35,36,37,27,39,40)
MR_decl_label3(ll_backend__optimize__maybe_opt_debug_8_0, 41,22,42)
MR_decl_label10(ll_backend__optimize__need_opt_debug_info_5_0, 2,3,9,10,7,15,16,14,13,24)
MR_decl_label10(ll_backend__optimize__need_opt_debug_info_5_0, 25,22,28,30,31,32,33,34,35,36)
MR_decl_label7(ll_backend__optimize__need_opt_debug_info_5_0, 37,38,39,40,41,42,4)
MR_decl_label9(ll_backend__optimize__optimize_initial_11_0, 2,18,8,9,10,7,12,13,3)
MR_decl_label10(ll_backend__optimize__optimize_last_8_0, 2,6,8,10,5,14,15,16,17,18)
MR_decl_label10(ll_backend__optimize__optimize_last_8_0, 19,4,20,22,24,25,26,27,28,29)
MR_decl_label10(ll_backend__optimize__optimize_last_8_0, 21,34,35,36,32,37,38,30,41,42)
MR_decl_label10(ll_backend__optimize__optimize_last_8_0, 43,39,44,45,47,49,50,51,52,53)
MR_decl_label9(ll_backend__optimize__optimize_last_8_0, 54,46,58,59,60,61,62,63,55)
MR_decl_label10(ll_backend__optimize__optimize_middle_12_0, 2,4,6,7,8,9,5,11,13,14)
MR_decl_label10(ll_backend__optimize__optimize_middle_12_0, 15,19,18,24,25,26,22,27,28,17)
MR_decl_label10(ll_backend__optimize__optimize_middle_12_0, 29,33,34,35,36,37,38,30,42,43)
MR_decl_label10(ll_backend__optimize__optimize_middle_12_0, 44,45,46,47,3,51,52,53,54,50)
MR_decl_label3(ll_backend__optimize__optimize_middle_12_0, 55,56,48)
MR_decl_label10(ll_backend__optimize__optimize_proc_4_0, 2,3,5,6,7,8,9,4,13,15)
MR_decl_label10(ll_backend__optimize__optimize_proc_4_0, 17,18,11,19,20,21,22,23,24,25)
MR_decl_label2(ll_backend__optimize__optimize_proc_4_0, 26,27)
MR_decl_label3(ll_backend__optimize__optimize_procs_4_0, 17,4,5)
MR_decl_label6(ll_backend__optimize__optimize_repeat_11_0, 24,3,5,6,2,26)
MR_decl_label10(ll_backend__optimize__optimize_repeated_12_0, 2,4,6,7,8,9,5,10,11,3)
MR_decl_label10(ll_backend__optimize__optimize_repeated_12_0, 13,15,16,17,18,19,20,12,22,24)
MR_decl_label10(ll_backend__optimize__optimize_repeated_12_0, 25,26,27,28,29,21,31,33,34,35)
MR_decl_label10(ll_backend__optimize__optimize_repeated_12_0, 36,32,37,38,30,44,39,40,46,47)
MR_decl_label10(ll_backend__optimize__output_first_opt_debug_7_0, 2,6,9,10,11,13,14,8,16,3)
MR_decl_label10(fn__ll_backend__optimize__init_llds_opt_info_1_0, 2,3,4,5,6,7,8,9,10,11)
MR_decl_label10(fn__ll_backend__optimize__init_llds_opt_info_1_0, 12,13,14,15,16,17,18,19,20,21)
MR_decl_label4(fn__ll_backend__optimize__init_llds_opt_info_1_0, 22,23,24,25)
MR_decl_label2(fn__ll_backend__optimize__num_to_str_1_0, 3,15)
MR_decl_label3(__Unify___ll_backend__optimize__llds_opt_info_0_0, 4,8,1)
MR_decl_label3(__Unify___ll_backend__optimize__opt_debug_info_0_0, 12,5,1)
MR_decl_label10(__Compare___ll_backend__optimize__llds_opt_info_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label10(__Compare___ll_backend__optimize__llds_opt_info_0_0, 37,41,45,49,53,57,61,65,69,73)
MR_decl_label6(__Compare___ll_backend__optimize__llds_opt_info_0_0, 77,81,85,89,93,197)
MR_decl_label10(__Compare___ll_backend__optimize__opt_debug_info_0_0, 48,7,5,9,11,15,19,23,27,36)
MR_decl_static(fn__ll_backend__optimize__opt_subdir_name_0_0)
MR_decl_static(fn__ll_backend__optimize__mangle_name_as_filename_1_0)
MR_decl_static(ll_backend__optimize__need_opt_debug_info_5_0)
MR_decl_static(ll_backend__optimize__output_first_opt_debug_7_0)
MR_decl_static(fn__ll_backend__optimize__num_to_str_1_0)
MR_decl_static(ll_backend__optimize__maybe_opt_debug_8_0)
MR_decl_static(ll_backend__optimize__optimize_initial_11_0)
MR_decl_static(ll_backend__optimize__optimize_repeated_12_0)
MR_decl_static(ll_backend__optimize__optimize_repeat_11_0)
MR_decl_static(ll_backend__optimize__optimize_middle_12_0)
MR_decl_static(ll_backend__optimize__optimize_last_8_0)
MR_decl_static(fn__ll_backend__optimize__init_llds_opt_info_1_0)
MR_def_extern_entry(ll_backend__optimize__optimize_proc_4_0)
MR_def_extern_entry(ll_backend__optimize__optimize_procs_4_0)
MR_decl_static(fn__ll_backend__optimize__make_internal_label_for_proc_label_2_0)
MR_decl_static(ll_backend__optimize__escape_dir_char_3_0)
MR_decl_static(__Unify___ll_backend__optimize__llds_opt_info_0_0)
MR_decl_static(__Compare___ll_backend__optimize__llds_opt_info_0_0)
MR_decl_static(__Unify___ll_backend__optimize__opt_debug_info_0_0)
MR_decl_static(__Compare___ll_backend__optimize__opt_debug_info_0_0)

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__optimize__mangle_name_as_filename_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__optimize__optimize_proc_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__ll_backend__optimize__mangle_name_as_filename_1_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CHAR_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ll_backend__optimize__optimize_proc_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(ll_backend__llds, label)
}
},
};

static const struct mercury_type_1 mercury_common_1[1] =
{
{
MR_COMMON(0,0),
MR_ENTRY_AP(ll_backend__optimize__escape_dir_char_3_0),
0
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_gc_method_0;

const MR_PseudoTypeInfo mercury_data_ll_backend__optimize__field_types_llds_opt_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_gc_method_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_ll_backend__optimize__field_names_llds_opt_info_0_0[] = {
	"lopt_auto_comments",
	"lopt_detailed_statistics",
	"lopt_very_verbose",
	"lopt_checked_nondet_tailcalls",
	"lopt_num_real_r_regs",
	"lopt_gc_method",
	"lopt_opt_delay_slots",
	"lopt_opt_dups",
	"lopt_opt_frames",
	"lopt_frameopt_comments",
	"lopt_opt_jumps",
	"lopt_opt_fulljumps",
	"lopt_opt_labels",
	"lopt_opt_peep",
	"lopt_opt_peep_mkword",
	"lopt_opt_reassign",
	"lopt_pes_tailcalls",
	"lopt_std_labels",
	"lopt_use_local_vars",
	"lopt_local_vars_access_threshold",
	"lopt_opt_repeat",
	"lopt_debug_opt",
	"lopt_debug_opt_pred_ids",
	"lopt_debug_opt_pred_names"
};

static const MR_DuFunctorDesc mercury_data_ll_backend__optimize__du_functor_desc_llds_opt_info_0_0 = {
	"llds_opt_info",
	24,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__optimize__field_types_llds_opt_info_0_0,
	mercury_data_ll_backend__optimize__field_names_llds_opt_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0[] = {
	&mercury_data_ll_backend__optimize__du_functor_desc_llds_opt_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__optimize__du_ptag_ordered_llds_opt_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__optimize__du_stag_ordered_llds_opt_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__optimize__du_name_ordered_llds_opt_info_0[] = {
	&mercury_data_ll_backend__optimize__du_functor_desc_llds_opt_info_0_0
};

const MR_Integer mercury_data_ll_backend__optimize__functor_number_map_llds_opt_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__optimize__type_ctor_info_llds_opt_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__optimize__llds_opt_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__optimize__llds_opt_info_0_0)),
	"ll_backend.optimize",
	"llds_opt_info",
	{ (void *)mercury_data_ll_backend__optimize__du_name_ordered_llds_opt_info_0 },
	{ (void *)mercury_data_ll_backend__optimize__du_ptag_ordered_llds_opt_info_0 },
	1,
	4,
	mercury_data_ll_backend__optimize__functor_number_map_llds_opt_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_instruction_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ll_backend__llds__type_ctor_info_instruction_0
}};

const MR_PseudoTypeInfo mercury_data_ll_backend__optimize__field_types_opt_debug_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ll_backend__llds__type_ctor_info_instruction_0
};

static const MR_DuFunctorDesc mercury_data_ll_backend__optimize__du_functor_desc_opt_debug_info_0_0 = {
	"opt_debug_info",
	6,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ll_backend__optimize__field_types_opt_debug_info_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ll_backend__optimize__du_functor_desc_opt_debug_info_0_1 = {
	"no_opt_debug_info",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0[] = {
	&mercury_data_ll_backend__optimize__du_functor_desc_opt_debug_info_0_1

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1[] = {
	&mercury_data_ll_backend__optimize__du_functor_desc_opt_debug_info_0_0

};

const MR_DuPtagLayout mercury_data_ll_backend__optimize__du_ptag_ordered_opt_debug_info_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ll_backend__optimize__du_stag_ordered_opt_debug_info_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ll_backend__optimize__du_stag_ordered_opt_debug_info_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ll_backend__optimize__du_name_ordered_opt_debug_info_0[] = {
	&mercury_data_ll_backend__optimize__du_functor_desc_opt_debug_info_0_1,
	&mercury_data_ll_backend__optimize__du_functor_desc_opt_debug_info_0_0
};

const MR_Integer mercury_data_ll_backend__optimize__functor_number_map_opt_debug_info_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ll_backend__optimize__type_ctor_info_opt_debug_info_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ll_backend__optimize__opt_debug_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ll_backend__optimize__opt_debug_info_0_0)),
	"ll_backend.optimize",
	"opt_debug_info",
	{ (void *)mercury_data_ll_backend__optimize__du_name_ordered_opt_debug_info_0 },
	{ (void *)mercury_data_ll_backend__optimize__du_ptag_ordered_opt_debug_info_0 },
	2,
	4,
	mercury_data_ll_backend__optimize__functor_number_map_opt_debug_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__ll_backend__optimize__optimize_proc_4_0_1 = {
{
MR_FUNCTION,
"ll_backend.optimize",
"ll_backend.optimize",
"make_internal_label_for_proc_label",
3,
0
},
"ll_backend.optimize",
"optimize.m",
102,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__ll_backend__optimize__mangle_name_as_filename_1_0_1 = {
{
MR_PREDICATE,
"ll_backend.optimize",
"ll_backend.optimize",
"escape_dir_char",
3,
0
},
"ll_backend.optimize",
"optimize.m",
738,
"4"
};



MR_BEGIN_MODULE(ll_backend__optimize_module0)
	MR_init_entry1(fn__ll_backend__optimize__opt_subdir_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__optimize__opt_subdir_name_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'opt_subdir_name'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__optimize__opt_subdir_name_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("OptSubdir", 9);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(string__foldl_4_1);

MR_BEGIN_MODULE(ll_backend__optimize_module1)
	MR_init_entry1(fn__ll_backend__optimize__mangle_name_as_filename_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__optimize__mangle_name_as_filename_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mangle_name_as_filename'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__optimize__mangle_name_as_filename_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("", 0);
	MR_np_tailcall_ent(string__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_id_to_int_2_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(list__member_2_1);
MR_decl_entry(string__to_int_2_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ll_backend__optimize_module2)
	MR_init_entry1(ll_backend__optimize__need_opt_debug_info_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__need_opt_debug_info_5_0);
	MR_init_label10(ll_backend__optimize__need_opt_debug_info_5_0,2,3,9,10,7,15,16,14,13,24)
	MR_init_label10(ll_backend__optimize__need_opt_debug_info_5_0,25,22,28,30,31,32,33,34,35,36)
	MR_init_label7(ll_backend__optimize__need_opt_debug_info_5_0,37,38,39,40,41,42,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'need_opt_debug_info'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__need_opt_debug_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_r1, 21);
	MR_sv(4) = MR_tfield(0, MR_r1, 22);
	MR_sv(5) = MR_tfield(0, MR_r1, 23);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_id_to_int_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i2);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i3);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(ll_backend__optimize__need_opt_debug_info_5_0_i4);
	}
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ll_backend__optimize__need_opt_debug_info_5_0_i7);
	}
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__optimize__need_opt_debug_info_5_0_i9);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__ll_backend__optimize__opt_subdir_name_0_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i30);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i10);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__optimize__need_opt_debug_info_5_0_i4);
	}
	MR_np_call_localret_ent(fn__ll_backend__optimize__opt_subdir_name_0_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i30);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ll_backend__optimize__need_opt_debug_info_5_0_i13);
	}
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__optimize__need_opt_debug_info_5_0_i14);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__optimize__need_opt_debug_info_5_0_i15);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i16);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_r2 != MR_sv(6))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_np_call_localret_ent(fn__ll_backend__optimize__opt_subdir_name_0_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i30);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(ll_backend__optimize__need_opt_debug_info_5_0_i4);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ll_backend__optimize__need_opt_debug_info_5_0_i22);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_1,
		ll_backend__optimize__need_opt_debug_info_5_0_i24);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_int_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i25);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if ((MR_r2 != MR_sv(6))) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_np_call_localret_ent(fn__ll_backend__optimize__opt_subdir_name_0_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i30);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i28);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__optimize__need_opt_debug_info_5_0_i4);
	}
	MR_np_call_localret_ent(fn__ll_backend__optimize__opt_subdir_name_0_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i30);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ll_backend__optimize__mangle_name_as_filename_1_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i31);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i32);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i33);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i34);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".proc", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i35);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i36);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".pred", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i37);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i38);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i39);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i40);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i41);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__need_opt_debug_info_5_0_i42);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
MR_def_label(ll_backend__optimize__need_opt_debug_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__call_system_4_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(counter__allocate_3_0);
MR_decl_entry(ll_backend__opt_debug__msg_5_0);
MR_decl_entry(ll_backend__opt_debug__maybe_write_instrs_6_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ll_backend__optimize_module3)
	MR_init_entry1(ll_backend__optimize__output_first_opt_debug_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__output_first_opt_debug_7_0);
	MR_init_label10(ll_backend__optimize__output_first_opt_debug_7_0,2,6,9,10,11,13,14,8,16,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_first_opt_debug'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__output_first_opt_debug_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("mkdir -p OptSubdir", 18);
	MR_np_call_localret_ent(io__call_system_4_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i2);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__optimize__output_first_opt_debug_7_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__optimize__output_first_opt_debug_7_0_i3);
	}
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(io__open_output_4_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i6);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__optimize__output_first_opt_debug_7_0_i8);
	}
	MR_sv(2) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i9);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i10);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("before optimization", 19);
	}
	MR_np_call_localret_ent(ll_backend__opt_debug__msg_5_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i11);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(3);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(ll_backend__opt_debug__maybe_write_instrs_6_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i13);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i14);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__close_output_3_0);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot open ", 12);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__output_first_opt_debug_7_0_i16);
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.optimize", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.optimize.output_first_opt_debug\'/7", 56);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
MR_def_label(ll_backend__optimize__output_first_opt_debug_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ll_backend.optimize", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.optimize.output_first_opt_debug\'/7", 56);
	MR_r3 = (MR_Word) MR_string_const("cannot make OptSubdir", 21);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__optimize_module4)
	MR_init_entry1(fn__ll_backend__optimize__num_to_str_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__optimize__num_to_str_1_0);
	MR_init_label2(fn__ll_backend__optimize__num_to_str_1_0,3,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'num_to_str'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__optimize__num_to_str_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r1,10)) {
		MR_GOTO_LAB(fn__ll_backend__optimize__num_to_str_1_0_i15);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__ll_backend__optimize__num_to_str_1_0_i3);
MR_def_label(fn__ll_backend__optimize__num_to_str_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(fn__ll_backend__optimize__num_to_str_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__string__int_to_string_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ll_backend__optimize_module5)
	MR_init_entry1(ll_backend__optimize__maybe_opt_debug_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__maybe_opt_debug_8_0);
	MR_init_label10(ll_backend__optimize__maybe_opt_debug_8_0,69,4,5,6,7,8,9,10,11,12)
	MR_init_label10(ll_backend__optimize__maybe_opt_debug_8_0,13,15,14,19,20,23,24,25,29,30)
	MR_init_label10(ll_backend__optimize__maybe_opt_debug_8_0,31,32,33,34,35,36,37,27,39,40)
	MR_init_label3(ll_backend__optimize__maybe_opt_debug_8_0,41,22,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_opt_debug'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__maybe_opt_debug_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r7,0,0)) {
		MR_GOTO_LAB(ll_backend__optimize__maybe_opt_debug_8_0_i69);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(7) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr1, 3);
	MR_sv(9) = MR_tfield(1, MR_tempr1, 4);
	MR_sv(10) = MR_tfield(1, MR_tempr1, 5);
	MR_sv(11) = ((MR_Integer) MR_tfield(1, MR_tempr1, 1) + (MR_Integer) 1);
	MR_r1 = MR_sv(11);
	}
	MR_np_call_localret_ent(fn__ll_backend__optimize__num_to_str_1_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i4);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i5);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i6);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".opt", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i7);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i8);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(fn__ll_backend__optimize__num_to_str_1_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i9);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i10);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i11);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".diff", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i12);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i13);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i15);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__optimize__maybe_opt_debug_8_0_i14);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_sv(10) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(11);
	MR_tempr2 = MR_sv(12);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_r1 = MR_tempr2;
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__optimize__maybe_opt_debug_8_0_i19);
	}
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_sv(10) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tempr2 = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr3 = MR_sv(12);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 3) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 4) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 5) = MR_sv(2);
	MR_r1 = MR_tempr3;
	MR_sv(7) = (MR_Integer) 0;
	}
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_np_call_localret_ent(io__open_output_4_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i20);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ll_backend__optimize__maybe_opt_debug_8_0_i22);
	}
	MR_sv(8) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i23);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i24);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__opt_debug__msg_5_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i25);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__maybe_opt_debug_8_0_i27);
	}
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(6);
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__opt_debug__maybe_write_instrs_6_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i29);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i30);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__close_output_3_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i31);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i32);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' > \'", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i33);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i34);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\' \'", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i35);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i36);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("diff -u \'", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i37);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i41);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("same as previous version\n", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i39);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i40);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__close_output_3_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i41);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_decr_sp_and_return(13);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("cannot open ", 12);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__maybe_opt_debug_8_0_i42);
MR_def_label(ll_backend__optimize__maybe_opt_debug_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ll_backend.optimize", 19);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ll_backend.optimize.maybe_opt_debug\'/8", 49);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ll_backend__opt_util__format_proc_label_1_0);
MR_decl_entry(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0);

MR_BEGIN_MODULE(ll_backend__optimize_module6)
	MR_init_entry1(ll_backend__optimize__optimize_initial_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__optimize_initial_11_0);
	MR_init_label9(ll_backend__optimize__optimize_initial_11_0,2,18,8,9,10,7,12,13,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_initial'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__optimize_initial_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
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
	MR_np_call_localret_ent(fn__ll_backend__opt_util__format_proc_label_1_0,
		ll_backend__optimize__optimize_initial_11_0_i2);
MR_def_label(ll_backend__optimize__optimize_initial_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 8);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_initial_11_0_i3);
	}
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_initial_11_0_i3);
	}
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_initial_11_0_i3);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_initial_11_0_i8);
	}
	}
MR_def_label(ll_backend__optimize__optimize_initial_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(8);
	MR_GOTO_LAB(ll_backend__optimize__optimize_initial_11_0_i7);
MR_def_label(ll_backend__optimize__optimize_initial_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing nondet frames for ", 31);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_initial_11_0_i9);
MR_def_label(ll_backend__optimize__optimize_initial_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_initial_11_0_i10);
MR_def_label(ll_backend__optimize__optimize_initial_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_initial_11_0_i18);
MR_def_label(ll_backend__optimize__optimize_initial_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__frameopt__frameopt_keep_nondet_frame_7_0,
		ll_backend__optimize__optimize_initial_11_0_i12);
MR_def_label(ll_backend__optimize__optimize_initial_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("ndframeopt", 10);
	MR_r5 = (MR_Word) MR_string_const("after nondet frame opt", 22);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_initial_11_0_i13);
MR_def_label(ll_backend__optimize__optimize_initial_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ll_backend__optimize__optimize_initial_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__jumpopt__optimize_jumps_in_proc_12_0);
MR_decl_entry(ll_backend__peephole__peephole_optimize_5_0);
MR_decl_entry(ll_backend__labelopt__labelopt_main_5_0);
MR_decl_entry(ll_backend__dupelim__dupelim_main_5_0);
MR_decl_entry(libs__file_util__maybe_report_stats_3_0);

MR_BEGIN_MODULE(ll_backend__optimize_module7)
	MR_init_entry1(ll_backend__optimize__optimize_repeated_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__optimize_repeated_12_0);
	MR_init_label10(ll_backend__optimize__optimize_repeated_12_0,2,4,6,7,8,9,5,10,11,3)
	MR_init_label10(ll_backend__optimize__optimize_repeated_12_0,13,15,16,17,18,19,20,12,22,24)
	MR_init_label10(ll_backend__optimize__optimize_repeated_12_0,25,26,27,28,29,21,31,33,34,35)
	MR_init_label10(ll_backend__optimize__optimize_repeated_12_0,36,32,37,38,30,44,39,40,46,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_repeated'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__optimize_repeated_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(14) = MR_r6;
	MR_sv(15) = MR_r7;
	MR_sv(16) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__format_proc_label_1_0,
		ll_backend__optimize__optimize_repeated_12_0_i2);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 10);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i4);
	}
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = (MR_Integer) 0;
	MR_sv(11) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 7);
	MR_r3 = MR_sv(16);
	MR_sv(9) = MR_sv(14);
	MR_r2 = MR_r3;
	MR_sv(10) = MR_sv(15);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 14);
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i3);
	}
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	MR_r10 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i6);
	}
	MR_r5 = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_sv(7) = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_tempr2, 11);
	MR_r6 = MR_tfield(0, MR_tempr2, 16);
	MR_r7 = MR_tfield(0, MR_tempr2, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 7);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_sv(16);
	MR_sv(17) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(18) = MR_tfield(0, MR_tempr2, 14);
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i5);
	}
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r10;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 16);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 12);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 14);
	MR_r1 = (MR_Word) MR_string_const("% Optimizing jumps for ", 23);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i7);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i8);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i9);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(8);
	MR_r6 = MR_sv(9);
	MR_r7 = MR_sv(10);
	MR_r8 = MR_sv(14);
	MR_r9 = MR_sv(16);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(16) = MR_r9;
	MR_np_call_localret_ent(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,
		ll_backend__optimize__optimize_repeated_12_0_i10);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r3;
	MR_sv(9) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_string_const("jump", 4);
	MR_r5 = (MR_Word) MR_string_const("after jump opt", 14);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_repeated_12_0_i11);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(16);
	MR_r2 = MR_sv(8);
	MR_sv(10) = MR_r1;
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(11),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i13);
	}
	MR_sv(8) = (MR_Integer) 0;
	MR_sv(11) = MR_sv(10);
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i12);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i15);
	}
	MR_sv(16) = MR_r3;
	MR_r3 = MR_r2;
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__peephole__peephole_optimize_5_0,
		ll_backend__optimize__optimize_repeated_12_0_i19);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing locally for ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i16);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i17);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i18);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(8);
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(ll_backend__peephole__peephole_optimize_5_0,
		ll_backend__optimize__optimize_repeated_12_0_i19);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_string_const("peep", 4);
	MR_r5 = (MR_Word) MR_string_const("after peephole", 14);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_repeated_12_0_i20);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(16);
	MR_r2 = MR_sv(10);
	MR_sv(11) = MR_r1;
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(12),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i22);
	}
	MR_sv(2) = (MR_Integer) 0;
	MR_r1 = MR_sv(11);
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i21);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i24);
	}
	MR_r1 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_sv(16) = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__labelopt__labelopt_main_5_0,
		ll_backend__optimize__optimize_repeated_12_0_i28);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r3;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing labels for ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i25);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i26);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i27);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__labelopt__labelopt_main_5_0,
		ll_backend__optimize__optimize_repeated_12_0_i28);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_r4 = (MR_Word) MR_string_const("label", 5);
	MR_r5 = (MR_Word) MR_string_const("after label opt", 15);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_repeated_12_0_i29);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(16);
	MR_r2 = MR_sv(3);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(13),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i31);
	}
	MR_sv(3) = MR_sv(9);
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i30);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i33);
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(16) = MR_r3;
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(9);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i32);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing duplicates for ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i34);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i35);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i36);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(3);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__dupelim__dupelim_main_5_0,
		ll_backend__optimize__optimize_repeated_12_0_i37);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("dup", 3);
	MR_r5 = (MR_Word) MR_string_const("after duplicates", 16);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(7);
	}
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_repeated_12_0_i38);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(16);
	MR_r2 = MR_sv(4);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i40);
	}
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i40);
	}
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i40);
	}
	MR_sv(2) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		ll_backend__optimize__optimize_repeated_12_0_i44);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeated_12_0_i46);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_sv(4) = MR_r2;
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		ll_backend__optimize__optimize_repeated_12_0_i47);
MR_def_label(ll_backend__optimize__optimize_repeated_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__optimize_module8)
	MR_init_entry1(ll_backend__optimize__optimize_repeat_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__optimize_repeat_11_0);
	MR_init_label6(ll_backend__optimize__optimize_repeat_11_0,24,3,5,6,2,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_repeat'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__optimize_repeat_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(ll_backend__optimize__optimize_repeat_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeat_11_0_i2);
	}
	MR_sv(5) = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	if (MR_INT_NE(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeat_11_0_i3);
	}
	MR_r2 = (MR_Integer) 1;
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeat_11_0_i5);
MR_def_label(ll_backend__optimize__optimize_repeat_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 0;
MR_def_label(ll_backend__optimize__optimize_repeat_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(ll_backend__optimize__optimize_repeated_12_0,
		ll_backend__optimize__optimize_repeat_11_0_i6);
MR_def_label(ll_backend__optimize__optimize_repeat_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_repeat_11_0_i26);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(ll_backend__optimize__optimize_repeat_11_0_i24);
	}
MR_def_label(ll_backend__optimize__optimize_repeat_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
MR_def_label(ll_backend__optimize__optimize_repeat_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__frameopt__frameopt_main_nondet_stack_7_0);
MR_decl_entry(ll_backend__frameopt__frameopt_main_det_stack_7_0);
MR_decl_entry(ll_backend__use_local_vars__use_local_vars_proc_8_0);

MR_BEGIN_MODULE(ll_backend__optimize_module9)
	MR_init_entry1(ll_backend__optimize__optimize_middle_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__optimize_middle_12_0);
	MR_init_label10(ll_backend__optimize__optimize_middle_12_0,2,4,6,7,8,9,5,11,13,14)
	MR_init_label10(ll_backend__optimize__optimize_middle_12_0,15,19,18,24,25,26,22,27,28,17)
	MR_init_label10(ll_backend__optimize__optimize_middle_12_0,29,33,34,35,36,37,38,30,42,43)
	MR_init_label10(ll_backend__optimize__optimize_middle_12_0,44,45,46,47,3,51,52,53,54,50)
	MR_init_label3(ll_backend__optimize__optimize_middle_12_0,55,56,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_middle'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__optimize_middle_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_tfield(0, MR_r1, 2);
	MR_sv(9) = MR_r7;
	MR_sv(10) = MR_r8;
	MR_sv(11) = MR_r9;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__format_proc_label_1_0,
		ll_backend__optimize__optimize_middle_12_0_i2);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r4 = MR_tfield(0, MR_tempr1, 8);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i4);
	}
	MR_sv(8) = MR_r1;
	MR_sv(12) = MR_tfield(0, MR_tempr1, 18);
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 19);
	MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i3);
	}
MR_def_label(ll_backend__optimize__optimize_middle_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i6);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 18);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 4);
	MR_r4 = MR_tfield(0, MR_tempr1, 9);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 19);
	MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i5);
	}
MR_def_label(ll_backend__optimize__optimize_middle_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 18);
	MR_sv(16) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 9);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 19);
	MR_r1 = (MR_Word) MR_string_const("% Optimizing frames for ", 24);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i7);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i8);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i9);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(11);
	MR_r4 = MR_sv(13);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),2)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i11);
	}
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__frameopt__frameopt_main_nondet_stack_7_0,
		ll_backend__optimize__optimize_middle_12_0_i13);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(ll_backend__frameopt__frameopt_main_det_stack_7_0,
		ll_backend__optimize__optimize_middle_12_0_i13);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r6 = MR_sv(4);
	MR_sv(5) = MR_r3;
	MR_r7 = MR_sv(10);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_string_const("frame", 5);
	MR_r5 = (MR_Word) MR_string_const("after frame opt", 15);
	MR_sv(13) = MR_r3;
	MR_sv(14) = MR_r2;
	}
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_middle_12_0_i14);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 16);
	MR_sv(11) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(15) = MR_r1;
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		ll_backend__optimize__optimize_middle_12_0_i15);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i19);
	}
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
	MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i18);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i17);
	}
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i22);
	}
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r2;
	MR_sv(9) = MR_r4;
	MR_sv(10) = MR_r6;
	MR_sv(11) = MR_r7;
	MR_sv(13) = MR_r8;
	MR_sv(14) = MR_r9;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing jumps for ", 23);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i24);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i25);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i26);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(9);
	MR_r6 = MR_sv(10);
	MR_r7 = MR_sv(11);
	MR_r8 = MR_sv(13);
	MR_r9 = MR_sv(14);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(ll_backend__jumpopt__optimize_jumps_in_proc_12_0,
		ll_backend__optimize__optimize_middle_12_0_i27);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_string_const("jump", 4);
	MR_r5 = (MR_Word) MR_string_const("after jumps", 11);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(15);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_middle_12_0_i28);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_r2 = MR_r4;
	MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i29);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r2 = MR_sv(15);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i30);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i33);
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(10) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__labelopt__labelopt_main_5_0,
		ll_backend__optimize__optimize_middle_12_0_i37);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing labels for ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i34);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i35);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i36);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ll_backend__labelopt__labelopt_main_5_0,
		ll_backend__optimize__optimize_middle_12_0_i37);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_string_const("label", 5);
	MR_r5 = (MR_Word) MR_string_const("after labels", 12);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(10);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_middle_12_0_i38);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__optimize__optimize_middle_12_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(5),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i3);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i42);
	}
	MR_sv(6) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_sv(3) = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 14);
	}
	MR_np_call_localret_ent(ll_backend__peephole__peephole_optimize_5_0,
		ll_backend__optimize__optimize_middle_12_0_i46);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing locally for ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i43);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i44);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i45);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr1, 14);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(ll_backend__peephole__peephole_optimize_5_0,
		ll_backend__optimize__optimize_middle_12_0_i46);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = (MR_Word) MR_string_const("peep", 4);
	MR_r5 = (MR_Word) MR_string_const("after peephole", 14);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_middle_12_0_i47);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
MR_def_label(ll_backend__optimize__optimize_middle_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(12),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i48);
	}
	if (MR_INT_NE(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i51);
	}
	MR_r5 = MR_sv(4);
	MR_r6 = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(3) = MR_r2;
	MR_r4 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
	MR_GOTO_LAB(ll_backend__optimize__optimize_middle_12_0_i50);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing local vars for ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i52);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i53);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_middle_12_0_i54);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(16);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(18);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r5;
	MR_np_call_localret_ent(ll_backend__use_local_vars__use_local_vars_proc_8_0,
		ll_backend__optimize__optimize_middle_12_0_i55);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = (MR_Word) MR_string_const("use_local", 9);
	MR_r5 = (MR_Word) MR_string_const("after use_local_vars", 20);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	}
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_middle_12_0_i56);
MR_def_label(ll_backend__optimize__optimize_middle_12_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
MR_def_label(ll_backend__optimize__optimize_middle_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__reassign__remove_reassign_2_0);
MR_decl_entry(ll_backend__delay_slot__fill_branch_delay_slot_2_0);
MR_decl_entry(ll_backend__peephole__combine_decr_sp_2_0);
MR_decl_entry(ll_backend__stdlabel__standardize_labels_4_0);
MR_decl_entry(ll_backend__wrap_blocks__wrap_blocks_2_0);

MR_BEGIN_MODULE(ll_backend__optimize_module10)
	MR_init_entry1(ll_backend__optimize__optimize_last_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__optimize_last_8_0);
	MR_init_label10(ll_backend__optimize__optimize_last_8_0,2,6,8,10,5,14,15,16,17,18)
	MR_init_label10(ll_backend__optimize__optimize_last_8_0,19,4,20,22,24,25,26,27,28,29)
	MR_init_label10(ll_backend__optimize__optimize_last_8_0,21,34,35,36,32,37,38,30,41,42)
	MR_init_label10(ll_backend__optimize__optimize_last_8_0,43,39,44,45,47,49,50,51,52,53)
	MR_init_label9(ll_backend__optimize__optimize_last_8_0,54,46,58,59,60,61,62,63,55)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_last'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__optimize_last_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_r1, 2);
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	MR_sv(12) = MR_r6;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ll_backend__opt_util__format_proc_label_1_0,
		ll_backend__optimize__optimize_last_8_0_i2);
MR_def_label(ll_backend__optimize__optimize_last_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 17);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 18);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 15);
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i5);
	}
MR_def_label(ll_backend__optimize__optimize_last_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(7),1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i8);
	}
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i5);
MR_def_label(ll_backend__optimize__optimize_last_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i10);
	}
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(12);
	MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i5);
MR_def_label(ll_backend__optimize__optimize_last_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i4);
	}
	MR_r2 = MR_sv(2);
	MR_sv(5) = MR_r1;
	MR_r3 = MR_sv(12);
MR_def_label(ll_backend__optimize__optimize_last_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__labelopt__labelopt_main_5_0,
		ll_backend__optimize__optimize_last_8_0_i18);
MR_def_label(ll_backend__optimize__optimize_last_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(12) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing labels for ", 24);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i15);
MR_def_label(ll_backend__optimize__optimize_last_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i16);
MR_def_label(ll_backend__optimize__optimize_last_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i17);
MR_def_label(ll_backend__optimize__optimize_last_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(12);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(ll_backend__labelopt__labelopt_main_5_0,
		ll_backend__optimize__optimize_last_8_0_i18);
MR_def_label(ll_backend__optimize__optimize_last_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_string_const("label", 5);
	MR_r5 = (MR_Word) MR_string_const("after label opt", 15);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(11);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_last_8_0_i19);
MR_def_label(ll_backend__optimize__optimize_last_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i20);
MR_def_label(ll_backend__optimize__optimize_last_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(11);
MR_def_label(ll_backend__optimize__optimize_last_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i22);
	}
	MR_sv(6) = MR_r2;
	MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i21);
MR_def_label(ll_backend__optimize__optimize_last_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i24);
	}
	MR_sv(6) = MR_r2;
	MR_np_call_localret_ent(ll_backend__reassign__remove_reassign_2_0,
		ll_backend__optimize__optimize_last_8_0_i28);
MR_def_label(ll_backend__optimize__optimize_last_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing reassign for ", 26);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i25);
MR_def_label(ll_backend__optimize__optimize_last_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i26);
MR_def_label(ll_backend__optimize__optimize_last_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i27);
MR_def_label(ll_backend__optimize__optimize_last_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__reassign__remove_reassign_2_0,
		ll_backend__optimize__optimize_last_8_0_i28);
MR_def_label(ll_backend__optimize__optimize_last_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_string_const("reassign", 8);
	MR_r5 = (MR_Word) MR_string_const("after reassign", 14);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_last_8_0_i29);
MR_def_label(ll_backend__optimize__optimize_last_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__optimize__optimize_last_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(7),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i30);
	}
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i32);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing delay slot for ", 28);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i34);
MR_def_label(ll_backend__optimize__optimize_last_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i35);
MR_def_label(ll_backend__optimize__optimize_last_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i36);
MR_def_label(ll_backend__optimize__optimize_last_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__optimize__optimize_last_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__delay_slot__fill_branch_delay_slot_2_0,
		ll_backend__optimize__optimize_last_8_0_i37);
MR_def_label(ll_backend__optimize__optimize_last_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_string_const("delay_slot", 10);
	MR_r5 = (MR_Word) MR_string_const("after delay slots", 17);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_last_8_0_i38);
MR_def_label(ll_backend__optimize__optimize_last_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__optimize__optimize_last_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i39);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Optimizing returns for ", 25);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i41);
MR_def_label(ll_backend__optimize__optimize_last_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i42);
MR_def_label(ll_backend__optimize__optimize_last_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i43);
MR_def_label(ll_backend__optimize__optimize_last_8_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ll_backend__optimize__optimize_last_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ll_backend__peephole__combine_decr_sp_2_0,
		ll_backend__optimize__optimize_last_8_0_i44);
MR_def_label(ll_backend__optimize__optimize_last_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(10);
	MR_r4 = (MR_Word) MR_string_const("decr_sp", 7);
	MR_r5 = (MR_Word) MR_string_const("after combine decr_sp", 21);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_last_8_0_i45);
MR_def_label(ll_backend__optimize__optimize_last_8_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i47);
	}
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r4;
	MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i46);
MR_def_label(ll_backend__optimize__optimize_last_8_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i49);
	}
	MR_r2 = MR_sv(10);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__stdlabel__standardize_labels_4_0,
		ll_backend__optimize__optimize_last_8_0_i53);
MR_def_label(ll_backend__optimize__optimize_last_8_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("% Standardizing labels for ", 27);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i50);
MR_def_label(ll_backend__optimize__optimize_last_8_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i51);
MR_def_label(ll_backend__optimize__optimize_last_8_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i52);
MR_def_label(ll_backend__optimize__optimize_last_8_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(10);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__stdlabel__standardize_labels_4_0,
		ll_backend__optimize__optimize_last_8_0_i53);
MR_def_label(ll_backend__optimize__optimize_last_8_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("stdlabel", 8);
	MR_r5 = (MR_Word) MR_string_const("after standard labels", 21);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_last_8_0_i54);
MR_def_label(ll_backend__optimize__optimize_last_8_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
MR_def_label(ll_backend__optimize__optimize_last_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_sv(8),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i55);
	}
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_last_8_0_i58);
	}
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_sv(4) = MR_r3;
	MR_np_call_localret_ent(ll_backend__wrap_blocks__wrap_blocks_2_0,
		ll_backend__optimize__optimize_last_8_0_i62);
MR_def_label(ll_backend__optimize__optimize_last_8_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("% Wrapping blocks for ", 22);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i59);
MR_def_label(ll_backend__optimize__optimize_last_8_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i60);
MR_def_label(ll_backend__optimize__optimize_last_8_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ll_backend__optimize__optimize_last_8_0_i61);
MR_def_label(ll_backend__optimize__optimize_last_8_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ll_backend__wrap_blocks__wrap_blocks_2_0,
		ll_backend__optimize__optimize_last_8_0_i62);
MR_def_label(ll_backend__optimize__optimize_last_8_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const("wrapblocks", 10);
	MR_r5 = (MR_Word) MR_string_const("after wrap blocks", 17);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_sv(4);
	}
	MR_np_call_localret_ent(ll_backend__optimize__maybe_opt_debug_8_0,
		ll_backend__optimize__optimize_last_8_0_i63);
MR_def_label(ll_backend__optimize__optimize_last_8_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
MR_def_label(ll_backend__optimize__optimize_last_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(libs__globals__lookup_int_option_3_0);
MR_decl_entry(libs__globals__get_gc_method_2_0);
MR_decl_entry(libs__globals__lookup_accumulating_option_3_0);

MR_BEGIN_MODULE(ll_backend__optimize_module11)
	MR_init_entry1(fn__ll_backend__optimize__init_llds_opt_info_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__optimize__init_llds_opt_info_1_0);
	MR_init_label10(fn__ll_backend__optimize__init_llds_opt_info_1_0,2,3,4,5,6,7,8,9,10,11)
	MR_init_label10(fn__ll_backend__optimize__init_llds_opt_info_1_0,12,13,14,15,16,17,18,19,20,21)
	MR_init_label4(fn__ll_backend__optimize__init_llds_opt_info_1_0,22,23,24,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init_llds_opt_info'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__optimize__init_llds_opt_info_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(24);
	MR_sv(24) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r2 = (MR_Integer) 125;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i2);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 52;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i3);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 42;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i4);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 446;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i5);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 292;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i6);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(libs__globals__get_gc_method_2_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i7);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 454;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i8);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 451;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i9);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 453;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i10);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 126;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i11);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 443;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i12);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 444;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i13);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 450;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i14);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 441;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i15);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(15) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 442;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i16);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 455;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i17);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 445;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i18);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 449;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i19);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 447;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i20);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 448;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i21);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 456;
	MR_np_call_localret_ent(libs__globals__lookup_int_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i22);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 63;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i23);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(23) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 65;
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i24);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 66;
	}
	MR_np_call_localret_ent(libs__globals__lookup_accumulating_option_3_0,
		fn__ll_backend__optimize__init_llds_opt_info_1_0_i25);
MR_def_label(fn__ll_backend__optimize__init_llds_opt_info_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 24);
	MR_tfield(0, MR_r2, 0) = MR_sv(2);
	MR_tfield(0, MR_r2, 1) = MR_sv(3);
	MR_tfield(0, MR_r2, 2) = MR_sv(4);
	MR_tfield(0, MR_r2, 3) = MR_sv(5);
	MR_tfield(0, MR_r2, 4) = MR_sv(6);
	MR_tfield(0, MR_r2, 5) = MR_sv(7);
	MR_tfield(0, MR_r2, 6) = MR_sv(8);
	MR_tfield(0, MR_r2, 7) = MR_sv(9);
	MR_tfield(0, MR_r2, 8) = MR_sv(10);
	MR_tfield(0, MR_r2, 9) = MR_sv(11);
	MR_tfield(0, MR_r2, 10) = MR_sv(12);
	MR_tfield(0, MR_r2, 11) = MR_sv(13);
	MR_tfield(0, MR_r2, 12) = MR_sv(14);
	MR_tfield(0, MR_r2, 13) = MR_sv(15);
	MR_tfield(0, MR_r2, 14) = MR_sv(16);
	MR_tfield(0, MR_r2, 15) = MR_sv(17);
	MR_tfield(0, MR_r2, 16) = MR_sv(18);
	MR_tfield(0, MR_r2, 17) = MR_sv(19);
	MR_tfield(0, MR_r2, 18) = MR_sv(20);
	MR_tfield(0, MR_r2, 19) = MR_sv(21);
	MR_tfield(0, MR_r2, 20) = MR_sv(22);
	MR_tfield(0, MR_r2, 21) = MR_sv(23);
	MR_tfield(0, MR_r2, 22) = MR_sv(1);
	MR_tfield(0, MR_r2, 23) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ll_backend__global_data__global_data_maybe_get_proc_layout_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__continuation_info__type_ctor_info_internal_layout_info_0;
MR_decl_entry(map__sorted_keys_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ll_backend__llds__type_ctor_info_label_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(set__sorted_list_to_set_2_0);
MR_decl_entry(set__init_1_0);

MR_BEGIN_MODULE(ll_backend__optimize_module12)
	MR_init_entry1(ll_backend__optimize__optimize_proc_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__optimize_proc_4_0);
	MR_init_label10(ll_backend__optimize__optimize_proc_4_0,2,3,5,6,7,8,9,4,13,15)
	MR_init_label10(ll_backend__optimize__optimize_proc_4_0,17,18,11,19,20,21,22,23,24,25)
	MR_init_label2(ll_backend__optimize__optimize_proc_4_0,26,27)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__optimize__optimize_proc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__ll_backend__optimize__init_llds_opt_info_1_0,
		ll_backend__optimize__optimize_proc_4_0_i2);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(12) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(ll_backend__optimize__need_opt_debug_info_5_0,
		ll_backend__optimize__optimize_proc_4_0_i3);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_proc_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tfield(0, MR_sv(2), 20);
	MR_sv(10) = (MR_Word) MR_tbmkword(0, 0);
	MR_GOTO_LAB(ll_backend__optimize__optimize_proc_4_0_i4);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__ll_backend__optimize__num_to_str_1_0,
		ll_backend__optimize__optimize_proc_4_0_i6);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".opt", 4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__optimize_proc_4_0_i7);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ll_backend__optimize__optimize_proc_4_0_i8);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__optimize__output_first_opt_debug_7_0,
		ll_backend__optimize__optimize_proc_4_0_i9);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 6);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tempr2 = MR_sv(11);
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 4) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 5) = MR_sv(12);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tfield(0, MR_sv(2), 20);
	MR_sv(10) = MR_tempr1;
	}
MR_def_label(ll_backend__optimize__optimize_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_np_call_localret_ent(ll_backend__global_data__global_data_maybe_get_proc_layout_3_0,
		ll_backend__optimize__optimize_proc_4_0_i13);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_proc_4_0_i11);
	}
	MR_sv(11) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(11);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__continuation_info, internal_layout_info);
	MR_r3 = MR_tfield(0, MR_tempr1, 18);
	}
	MR_np_call_localret_ent(map__sorted_keys_2_0,
		ll_backend__optimize__optimize_proc_4_0_i15);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(0,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__ll_backend__optimize__make_internal_label_for_proc_label_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		ll_backend__optimize__optimize_proc_4_0_i17);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__sorted_list_to_set_2_0,
		ll_backend__optimize__optimize_proc_4_0_i18);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r9 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r2 = MR_r9;
	MR_sv(11) = MR_tfield(0, MR_r1, 1);
	MR_r8 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(10);
	MR_GOTO_LAB(ll_backend__optimize__optimize_proc_4_0_i20);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, label);
	MR_np_call_localret_ent(set__init_1_0,
		ll_backend__optimize__optimize_proc_4_0_i19);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r3 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r2 = MR_tempr1;
	MR_sv(11) = MR_tfield(0, MR_r1, 1);
	MR_r8 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_r7 = MR_sv(10);
	}
MR_def_label(ll_backend__optimize__optimize_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r3;
	MR_sv(8) = MR_r5;
	MR_sv(10) = MR_r2;
	MR_np_call_localret_ent(ll_backend__optimize__optimize_initial_11_0,
		ll_backend__optimize__optimize_proc_4_0_i21);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr3;
	}
	MR_np_call_localret_ent(ll_backend__optimize__optimize_repeat_11_0,
		ll_backend__optimize__optimize_proc_4_0_i22);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		ll_backend__optimize__optimize_proc_4_0_i23);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(1);
	MR_r8 = MR_sv(12);
	MR_r9 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__optimize__optimize_middle_12_0,
		ll_backend__optimize__optimize_proc_4_0_i24);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(12) = MR_r2;
	MR_sv(13) = MR_r3;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		ll_backend__optimize__optimize_proc_4_0_i25);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(12);
	MR_r6 = MR_sv(13);
	MR_np_call_localret_ent(ll_backend__optimize__optimize_last_8_0,
		ll_backend__optimize__optimize_proc_4_0_i26);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(11);
	MR_np_call_localret_ent(libs__file_util__maybe_report_stats_3_0,
		ll_backend__optimize__optimize_proc_4_0_i27);
MR_def_label(ll_backend__optimize__optimize_proc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 9);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_sv(5);
	MR_tfield(0, MR_r1, 3) = MR_sv(6);
	MR_tfield(0, MR_r1, 4) = MR_sv(2);
	MR_tfield(0, MR_r1, 5) = MR_sv(7);
	MR_tfield(0, MR_r1, 6) = MR_sv(1);
	MR_tfield(0, MR_r1, 7) = MR_sv(8);
	MR_tfield(0, MR_r1, 8) = MR_sv(9);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__optimize_module13)
	MR_init_entry1(ll_backend__optimize__optimize_procs_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__optimize_procs_4_0);
	MR_init_label3(ll_backend__optimize__optimize_procs_4_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'optimize_procs'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ll_backend__optimize__optimize_procs_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ll_backend__optimize__optimize_procs_4_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ll_backend__optimize__optimize_procs_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(ll_backend__optimize__optimize_proc_4_0,
		ll_backend__optimize__optimize_procs_4_0_i4);
MR_def_label(ll_backend__optimize__optimize_procs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_localcall_lab(ll_backend__optimize__optimize_procs_4_0,
		ll_backend__optimize__optimize_procs_4_0_i5);
MR_def_label(ll_backend__optimize__optimize_procs_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__optimize_module14)
	MR_init_entry1(fn__ll_backend__optimize__make_internal_label_for_proc_label_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ll_backend__optimize__make_internal_label_for_proc_label_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_internal_label_for_proc_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ll_backend__optimize__make_internal_label_for_proc_label_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(dir__is_directory_separator_1_0);
MR_decl_entry(fn__string__char_to_string_1_0);

MR_BEGIN_MODULE(ll_backend__optimize_module15)
	MR_init_entry1(ll_backend__optimize__escape_dir_char_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ll_backend__optimize__escape_dir_char_3_0);
	MR_init_label3(ll_backend__optimize__escape_dir_char_3_0,4,2,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'escape_dir_char'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ll_backend__optimize__escape_dir_char_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(dir__is_directory_separator_1_0,
		ll_backend__optimize__escape_dir_char_3_0_i4);
MR_def_label(ll_backend__optimize__escape_dir_char_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ll_backend__optimize__escape_dir_char_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("_slash_", 7);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(ll_backend__optimize__escape_dir_char_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__string__char_to_string_1_0,
		ll_backend__optimize__escape_dir_char_3_0_i7);
MR_def_label(ll_backend__optimize__escape_dir_char_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__optimize_module16)
	MR_init_entry1(__Unify___ll_backend__optimize__llds_opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__optimize__llds_opt_info_0_0);
	MR_init_label3(__Unify___ll_backend__optimize__llds_opt_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__optimize__llds_opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 5);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 6);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 7);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 8);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 8);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 9);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 9);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 10);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 10);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 11);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 11);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 12);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 12);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 13);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 13);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 14);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 14);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 15);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 15);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 16);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 16);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 17);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 17);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 18);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 18);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 19);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 19);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 20);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 20);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 21);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 21);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 23);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 23);
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 22);
	MR_r3 = MR_tfield(0, MR_tempr4, 22);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ll_backend__optimize__llds_opt_info_0_0_i4);
MR_def_label(__Unify___ll_backend__optimize__llds_opt_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__llds_opt_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ll_backend__optimize__llds_opt_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__optimize__llds_opt_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(ll_backend__optimize_module17)
	MR_init_entry1(__Compare___ll_backend__optimize__llds_opt_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__optimize__llds_opt_info_0_0);
	MR_init_label10(__Compare___ll_backend__optimize__llds_opt_info_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label10(__Compare___ll_backend__optimize__llds_opt_info_0_0,37,41,45,49,53,57,61,65,69,73)
	MR_init_label6(__Compare___ll_backend__optimize__llds_opt_info_0_0,77,81,85,89,93,197)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__optimize__llds_opt_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i3);
	}
	MR_incr_sp(47);
	MR_sv(47) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i2);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(46) = MR_tfield(0, MR_tempr5, 23);
	MR_sv(45) = MR_tfield(0, MR_tempr5, 22);
	MR_sv(44) = MR_tfield(0, MR_tempr5, 21);
	MR_sv(43) = MR_tfield(0, MR_tempr5, 20);
	MR_sv(42) = MR_tfield(0, MR_tempr5, 19);
	MR_sv(41) = MR_tfield(0, MR_tempr5, 18);
	MR_sv(40) = MR_tfield(0, MR_tempr5, 17);
	MR_sv(39) = MR_tfield(0, MR_tempr5, 16);
	MR_sv(38) = MR_tfield(0, MR_tempr5, 15);
	MR_sv(37) = MR_tfield(0, MR_tempr5, 14);
	MR_sv(36) = MR_tfield(0, MR_tempr5, 13);
	MR_sv(35) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(34) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(33) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(32) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(31) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(30) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(29) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(28) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(27) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(26) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(25) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(23) = MR_tfield(0, MR_tempr6, 23);
	MR_sv(22) = MR_tfield(0, MR_tempr6, 22);
	MR_sv(21) = MR_tfield(0, MR_tempr6, 21);
	MR_sv(20) = MR_tfield(0, MR_tempr6, 20);
	MR_sv(19) = MR_tfield(0, MR_tempr6, 19);
	MR_sv(18) = MR_tfield(0, MR_tempr6, 18);
	MR_sv(17) = MR_tfield(0, MR_tempr6, 17);
	MR_sv(16) = MR_tfield(0, MR_tempr6, 16);
	MR_sv(15) = MR_tfield(0, MR_tempr6, 15);
	MR_sv(14) = MR_tfield(0, MR_tempr6, 14);
	MR_sv(13) = MR_tfield(0, MR_tempr6, 13);
	MR_sv(12) = MR_tfield(0, MR_tempr6, 12);
	MR_sv(11) = MR_tfield(0, MR_tempr6, 11);
	MR_sv(10) = MR_tfield(0, MR_tempr6, 10);
	MR_sv(9) = MR_tfield(0, MR_tempr6, 9);
	MR_sv(8) = MR_tfield(0, MR_tempr6, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr6, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr6, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i5);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(24);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i9);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i13);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(26);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i17);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(27);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i21);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(28);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i25);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(29);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i29);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(30);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i33);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(31);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i37);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(32);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i41);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(33);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i45);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(34);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i49);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(35);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i53);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(36);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i57);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(37);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i61);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(38);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i65);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(39);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i69);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(17);
	MR_r2 = MR_sv(40);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i73);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(18);
	MR_r2 = MR_sv(41);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i77);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(42);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i81);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(20);
	MR_r2 = MR_sv(43);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i85);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(44);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i89);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(22);
	MR_r3 = MR_sv(45);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ll_backend__optimize__llds_opt_info_0_0_i93);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__llds_opt_info_0_0_i197);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(23);
	MR_r3 = MR_sv(46);
	MR_succip_word = MR_sv(47);
	MR_decr_sp(47);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__optimize__llds_opt_info_0_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(47);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ll_backend__optimize_module18)
	MR_init_entry1(__Unify___ll_backend__optimize__opt_debug_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ll_backend__optimize__opt_debug_info_0_0);
	MR_init_label3(__Unify___ll_backend__optimize__opt_debug_info_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ll_backend__optimize__opt_debug_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ll_backend__optimize__opt_debug_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ll_backend__optimize__opt_debug_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i1);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr3, 4);
	MR_tempr2 = MR_tfield(1, MR_tempr4, 4);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ll_backend__optimize__opt_debug_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_tfield(1, MR_tempr3, 5);
	MR_r3 = MR_tfield(1, MR_tempr4, 5);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ll_backend__optimize__opt_debug_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(ll_backend__optimize_module19)
	MR_init_entry1(__Compare___ll_backend__optimize__opt_debug_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ll_backend__optimize__opt_debug_info_0_0);
	MR_init_label10(__Compare___ll_backend__optimize__opt_debug_info_0_0,48,7,5,9,11,15,19,23,27,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ll_backend__optimize__opt_debug_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i48);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i7);
	}
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(11);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(10) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(9) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 4);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(5) = MR_tfield(1, MR_tempr6, 5);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__optimize__opt_debug_info_0_0_i11);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i36);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__opt_debug_info_0_0_i15);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i36);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__optimize__opt_debug_info_0_0_i19);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i36);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ll_backend__optimize__opt_debug_info_0_0_i23);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i36);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ll_backend__optimize__opt_debug_info_0_0_i27);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ll_backend__optimize__opt_debug_info_0_0_i36);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ll_backend__llds, instruction);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ll_backend__optimize__opt_debug_info_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ll_backend__optimize_maybe_bunch_0(void)
{
	ll_backend__optimize_module0();
	ll_backend__optimize_module1();
	ll_backend__optimize_module2();
	ll_backend__optimize_module3();
	ll_backend__optimize_module4();
	ll_backend__optimize_module5();
	ll_backend__optimize_module6();
	ll_backend__optimize_module7();
	ll_backend__optimize_module8();
	ll_backend__optimize_module9();
	ll_backend__optimize_module10();
	ll_backend__optimize_module11();
	ll_backend__optimize_module12();
	ll_backend__optimize_module13();
	ll_backend__optimize_module14();
	ll_backend__optimize_module15();
	ll_backend__optimize_module16();
	ll_backend__optimize_module17();
	ll_backend__optimize_module18();
	ll_backend__optimize_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ll_backend__optimize__init(void);
void mercury__ll_backend__optimize__init_type_tables(void);
void mercury__ll_backend__optimize__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ll_backend__optimize__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ll_backend__optimize__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ll_backend__optimize__init_threadscope_string_table(void);
#endif

void mercury__ll_backend__optimize__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ll_backend__optimize_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__optimize__type_ctor_info_llds_opt_info_0,
		ll_backend__optimize__llds_opt_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ll_backend__optimize__type_ctor_info_opt_debug_info_0,
		ll_backend__optimize__opt_debug_info_0_0);
	mercury__ll_backend__optimize__init_debugger();
}

void mercury__ll_backend__optimize__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__optimize__type_ctor_info_llds_opt_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ll_backend__optimize__type_ctor_info_opt_debug_info_0);
	}
}


void mercury__ll_backend__optimize__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ll_backend__optimize__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ll_backend__optimize);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ll_backend__optimize__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ll_backend__optimize__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
