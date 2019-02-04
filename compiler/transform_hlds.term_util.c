/*
** Automatically generated from `term_util.m'
** by the Mercury compiler,
** version rotd-2012-06-11, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__term_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "transform_hlds.term_util.c"
#line 150 "../library/io.int2"
#include "time.mh"

#line 32 "transform_hlds.term_util.c"
#line 151 "../library/io.int2"
#include "string.mh"

#line 36 "transform_hlds.term_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 40 "transform_hlds.term_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "transform_hlds.term_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "transform_hlds.term_util.c"
#line 49 "transform_hlds.term_util.c"
#include "transform_hlds.term_util.mh"

#line 52 "transform_hlds.term_util.c"
#line 53 "transform_hlds.term_util.c"
#ifndef TRANSFORM_HLDS__TERM_UTIL_DECL_GUARD
#define TRANSFORM_HLDS__TERM_UTIL_DECL_GUARD

#line 57 "transform_hlds.term_util.c"
#line 58 "transform_hlds.term_util.c"

#endif
#line 61 "transform_hlds.term_util.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_0 {
	MR_Word * f1[2];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_1 {
	MR_Word * f1[3];
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_2 {
	MR_Integer f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];


#ifdef MR_MSVC
#pragma pack(push, MR_BYTES_PER_WORD)
#endif
struct mercury_type_3 {
	MR_Word * f1;
};
#ifdef MR_MSVC
#pragma pack(pop)
#endif
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_util__type_ctor_info_arg_size_info_0,
	mercury_data_transform_hlds__term_util__type_ctor_info_pass_info_0,
	mercury_data_transform_hlds__term_util__type_ctor_info_termination_info_0,
	mercury_data_transform_hlds__term_util__type_ctor_info_used_args_0;
MR_decl_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0, 5,6,2)
MR_decl_label2(transform_hlds__term_util__add_context_to_arg_size_info_3_0, 3,2)
MR_decl_label2(transform_hlds__term_util__add_context_to_termination_info_3_0, 3,5)
MR_decl_label2(transform_hlds__term_util__all_args_input_or_zero_size_3_0, 2,3)
MR_decl_label8(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0, 50,3,11,32,9,15,8,1)
MR_decl_label5(transform_hlds__term_util__attributes_imply_termination_1_0, 4,6,8,2,1)
MR_decl_label2(transform_hlds__term_util__get_context_from_scc_3_0, 13,3)
MR_decl_label5(transform_hlds__term_util__horder_vars_2_0, 23,5,6,3,1)
MR_decl_label3(transform_hlds__term_util__is_termination_known_2_0, 2,3,1)
MR_decl_label1(transform_hlds__term_util__lookup_proc_arg_size_info_3_0, 2)
MR_decl_label1(transform_hlds__term_util__lookup_proc_termination_info_3_0, 2)
MR_decl_label4(transform_hlds__term_util__make_bool_list_3_0, 2,5,4,8)
MR_decl_label3(transform_hlds__term_util__partition_call_args_5_0, 2,3,4)
MR_decl_label7(transform_hlds__term_util__partition_call_args_2_5_0, 3,9,12,10,17,15,8)
MR_decl_label3(transform_hlds__term_util__pred_proc_id_terminates_2_0, 2,3,1)
MR_decl_label6(transform_hlds__term_util__remove_unused_args_4_0, 36,20,3,11,10,40)
MR_decl_label10(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0, 19,3,4,5,6,7,9,10,11,12)
MR_decl_label1(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0, 13)
MR_decl_label10(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0, 19,3,4,5,6,7,9,10,11,12)
MR_decl_label1(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0, 13)
MR_decl_label10(transform_hlds__term_util__split_unification_vars_5_0, 6,3,10,13,15,11,17,19,21,16)
MR_decl_label1(transform_hlds__term_util__split_unification_vars_5_0, 9)
MR_decl_label3(__Unify___transform_hlds__term_util__pass_info_0_0, 4,6,1)
MR_decl_label5(__Compare___transform_hlds__term_util__pass_info_0_0, 3,2,5,9,29)
MR_decl_static(transform_hlds__term_util__partition_call_args_2_5_0)
MR_def_extern_entry(transform_hlds__term_util__partition_call_args_5_0)
MR_def_extern_entry(transform_hlds__term_util__split_unification_vars_5_0)
MR_def_extern_entry(transform_hlds__term_util__make_bool_list_3_0)
MR_def_extern_entry(transform_hlds__term_util__remove_unused_args_4_0)
MR_def_extern_entry(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0)
MR_def_extern_entry(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0)
MR_def_extern_entry(transform_hlds__term_util__lookup_proc_termination_info_3_0)
MR_def_extern_entry(transform_hlds__term_util__lookup_proc_arg_size_info_3_0)
MR_def_extern_entry(transform_hlds__term_util__horder_vars_2_0)
MR_def_extern_entry(transform_hlds__term_util__get_context_from_scc_3_0)
MR_def_extern_entry(transform_hlds__term_util__is_termination_known_2_0)
MR_def_extern_entry(transform_hlds__term_util__attributes_imply_termination_1_0)
MR_def_extern_entry(transform_hlds__term_util__pred_proc_id_terminates_2_0)
MR_decl_static(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0)
MR_def_extern_entry(transform_hlds__term_util__all_args_input_or_zero_size_3_0)
MR_def_extern_entry(transform_hlds__term_util__add_context_to_termination_info_3_0)
MR_def_extern_entry(transform_hlds__term_util__add_context_to_arg_size_info_3_0)
MR_def_extern_entry(__Unify___transform_hlds__term_util__arg_size_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_util__arg_size_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_util__pass_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_util__pass_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_util__termination_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_util__termination_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__term_util__used_args_0_0)
MR_def_extern_entry(__Compare___transform_hlds__term_util__used_args_0_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
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
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error_context)
}
},
{
{
MR_CTOR1_ADDR(parse_tree__prog_data, generic_arg_size_info),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2;
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(parse_tree__prog_data, generic_termination_info, 2),
MR_CTOR0_ADDR(unit, unit),
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,3)
}
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
0
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_TAG_COMMON(0,2,0)
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_context_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
	&mercury_data_parse_tree__prog_data__type_ctor_info_generic_arg_size_info_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_util__type_ctor_info_arg_size_info_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_util__arg_size_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_util__arg_size_info_0_0)),
	"transform_hlds.term_util",
	"arg_size_info",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_data__ti_generic_arg_size_info_1list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_util__field_types_pass_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__term_norm__type_ctor_info_functor_info_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_util__du_functor_desc_pass_info_0_0 = {
	"pass_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_util__field_types_pass_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_util__du_stag_ordered_pass_info_0_0[] = {
	&mercury_data_transform_hlds__term_util__du_functor_desc_pass_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_util__du_ptag_ordered_pass_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_util__du_stag_ordered_pass_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_util__du_name_ordered_pass_info_0[] = {
	&mercury_data_transform_hlds__term_util__du_functor_desc_pass_info_0_0
};

const MR_Integer mercury_data_transform_hlds__term_util__functor_number_map_pass_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_util__type_ctor_info_pass_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_util__pass_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_util__pass_info_0_0)),
	"transform_hlds.term_util",
	"pass_info",
	{ (void *)mercury_data_transform_hlds__term_util__du_name_ordered_pass_info_0 },
	{ (void *)mercury_data_transform_hlds__term_util__du_ptag_ordered_pass_info_0 },
	1,
	4,
	mercury_data_transform_hlds__term_util__functor_number_map_pass_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 = {
	&mercury_data_parse_tree__prog_data__type_ctor_info_generic_termination_info_2,
{	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_util__type_ctor_info_termination_info_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_util__termination_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_util__termination_info_0_0)),
	"transform_hlds.term_util",
	"termination_info",
	{ 0 },
	{ (void *)&mercury_data_parse_tree__prog_data__ti_generic_termination_info_2unit__type_ctor_info_unit_0list__ti_list_1transform_hlds__term_errors__type_ctor_info_termination_error_context_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1bool__type_ctor_info_bool_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_util__type_ctor_info_used_args_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_util__used_args_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_util__used_args_0_0)),
	"transform_hlds.term_util",
	"used_args",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module0)
	MR_init_entry1(transform_hlds__term_util__partition_call_args_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__partition_call_args_2_5_0);
	MR_init_label7(transform_hlds__term_util__partition_call_args_2_5_0,3,9,12,10,17,15,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_call_args_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_util__partition_call_args_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__partition_call_args_2_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__partition_call_args_2_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_util__partition_call_args_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__partition_call_args_2_5_0_i8);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__term_util__partition_call_args_2_5_0,
		transform_hlds__term_util__partition_call_args_2_5_0_i9);
MR_def_label(transform_hlds__term_util__partition_call_args_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__term_util__partition_call_args_2_5_0_i12);
MR_def_label(transform_hlds__term_util__partition_call_args_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__partition_call_args_2_5_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_util__partition_call_args_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__term_util__partition_call_args_2_5_0_i17);
MR_def_label(transform_hlds__term_util__partition_call_args_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__partition_call_args_2_5_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(4);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_util__partition_call_args_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__term_util__partition_call_args_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_util", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_util.partition_call_args_2\'/5", 60);
	MR_r3 = (MR_Word) MR_string_const("unmatched variables", 19);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__from_list_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module1)
	MR_init_entry1(transform_hlds__term_util__partition_call_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__partition_call_args_5_0);
	MR_init_label3(transform_hlds__term_util__partition_call_args_5_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_call_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__partition_call_args_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(transform_hlds__term_util__partition_call_args_2_5_0,
		transform_hlds__term_util__partition_call_args_5_0_i2);
MR_def_label(transform_hlds__term_util__partition_call_args_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bag__from_list_2_0,
		transform_hlds__term_util__partition_call_args_5_0_i3);
MR_def_label(transform_hlds__term_util__partition_call_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bag__from_list_2_0,
		transform_hlds__term_util__partition_call_args_5_0_i4);
MR_def_label(transform_hlds__term_util__partition_call_args_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__init_1_0);
MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);
MR_decl_entry(bag__insert_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module2)
	MR_init_entry1(transform_hlds__term_util__split_unification_vars_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__split_unification_vars_5_0);
	MR_init_label10(transform_hlds__term_util__split_unification_vars_5_0,6,3,10,13,15,11,17,19,21,16)
	MR_init_label1(transform_hlds__term_util__split_unification_vars_5_0,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'split_unification_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__split_unification_vars_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__split_unification_vars_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__split_unification_vars_5_0_i9);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(bag__init_1_0,
		transform_hlds__term_util__split_unification_vars_5_0_i6);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__split_unification_vars_5_0_i9);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r3, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_np_localcall_lab(transform_hlds__term_util__split_unification_vars_5_0,
		transform_hlds__term_util__split_unification_vars_5_0_i10);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_sv(5) = MR_tfield(0, MR_tfield(0, MR_tempr2, 1), 1);
	MR_tempr1 = MR_tfield(0, MR_tfield(0, MR_tempr2, 0), 1);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__term_util__split_unification_vars_5_0_i13);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__split_unification_vars_5_0_i11);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(bag__insert_3_0,
		transform_hlds__term_util__split_unification_vars_5_0_i15);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		transform_hlds__term_util__split_unification_vars_5_0_i17);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__split_unification_vars_5_0_i16);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		transform_hlds__term_util__split_unification_vars_5_0_i19);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__split_unification_vars_5_0_i16);
	}
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(bag__insert_3_0,
		transform_hlds__term_util__split_unification_vars_5_0_i21);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__term_util__split_unification_vars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_util", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_util.split_unification_vars\'/5", 61);
	MR_r3 = (MR_Word) MR_string_const("unmatched variables", 19);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);
MR_decl_entry(list__drop_3_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module3)
	MR_init_entry1(transform_hlds__term_util__make_bool_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__make_bool_list_3_0);
	MR_init_label4(transform_hlds__term_util__make_bool_list_3_0,2,5,4,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_bool_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__make_bool_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_util__make_bool_list_3_0_i2);
MR_def_label(transform_hlds__term_util__make_bool_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__drop_3_0,
		transform_hlds__term_util__make_bool_list_3_0_i5);
MR_def_label(transform_hlds__term_util__make_bool_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__make_bool_list_3_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0);
	}
MR_def_label(transform_hlds__term_util__make_bool_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_util", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_util.make_bool_list\'/3", 53);
	MR_r3 = (MR_Word) MR_string_const("unmatched variables", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_util__make_bool_list_3_0_i8);
MR_def_label(transform_hlds__term_util__make_bool_list_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__delete_3_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module4)
	MR_init_entry1(transform_hlds__term_util__remove_unused_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__remove_unused_args_4_0);
	MR_init_label6(transform_hlds__term_util__remove_unused_args_4_0,36,20,3,11,10,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_unused_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__remove_unused_args_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_util__remove_unused_args_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__remove_unused_args_4_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__remove_unused_args_4_0_i40);
	}
MR_def_label(transform_hlds__term_util__remove_unused_args_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_util", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_util.remove_unused_args\'/4", 57);
	MR_r3 = (MR_Word) MR_string_const("unmatched variables", 19);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
	}
MR_def_label(transform_hlds__term_util__remove_unused_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__remove_unused_args_4_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__remove_unused_args_4_0_i10);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bag__delete_3_0,
		transform_hlds__term_util__remove_unused_args_4_0_i11);
MR_def_label(transform_hlds__term_util__remove_unused_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_util__remove_unused_args_4_0_i36);
MR_def_label(transform_hlds__term_util__remove_unused_args_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_util__remove_unused_args_4_0_i36);
MR_def_label(transform_hlds__term_util__remove_unused_args_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module5)
	MR_init_entry1(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0);
	MR_init_label10(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,19,3,4,5,6,7,9,10,11,12)
	MR_init_label1(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_pred_proc_ids_arg_size_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i4);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i5);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i6);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i7);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_arg_size_info_3_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i9);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i10);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i11);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i12);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i13);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__term_util__set_pred_proc_ids_arg_size_info_4_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module6)
	MR_init_entry1(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0);
	MR_init_label10(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,19,3,4,5,6,7,9,10,11,12)
	MR_init_label1(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_pred_proc_ids_termination_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i3);
	}
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_preds_2_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i4);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i5);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i6);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(11) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_sv(12) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i7);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_maybe_termination_info_3_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i9);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i10);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i11);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i12);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i13);
MR_def_label(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__term_util__set_pred_proc_ids_termination_info_4_0_i19);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module7)
	MR_init_entry1(transform_hlds__term_util__lookup_proc_termination_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__lookup_proc_termination_info_3_0);
	MR_init_label1(transform_hlds__term_util__lookup_proc_termination_info_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_proc_termination_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__lookup_proc_termination_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_util__lookup_proc_termination_info_3_0_i2);
MR_def_label(transform_hlds__term_util__lookup_proc_termination_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module8)
	MR_init_entry1(transform_hlds__term_util__lookup_proc_arg_size_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__lookup_proc_arg_size_info_3_0);
	MR_init_label1(transform_hlds__term_util__lookup_proc_arg_size_info_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_proc_arg_size_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__lookup_proc_arg_size_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_util__lookup_proc_arg_size_info_3_0_i2);
MR_def_label(transform_hlds__term_util__lookup_proc_arg_size_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_pred__proc_info_get_maybe_arg_size_info_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(parse_tree__prog_type__type_is_higher_order_1_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module9)
	MR_init_entry1(transform_hlds__term_util__horder_vars_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__horder_vars_2_0);
	MR_init_label5(transform_hlds__term_util__horder_vars_2_0,23,5,6,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'horder_vars'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__horder_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_util__horder_vars_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__horder_vars_2_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_util__horder_vars_2_0_i5);
MR_def_label(transform_hlds__term_util__horder_vars_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_1_0,
		transform_hlds__term_util__horder_vars_2_0_i6);
MR_def_label(transform_hlds__term_util__horder_vars_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__term_util__horder_vars_2_0_i3);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__term_util__horder_vars_2_0_i23);
MR_def_label(transform_hlds__term_util__horder_vars_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__term_util__horder_vars_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module10)
	MR_init_entry1(transform_hlds__term_util__get_context_from_scc_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__get_context_from_scc_3_0);
	MR_init_label2(transform_hlds__term_util__get_context_from_scc_3_0,13,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_context_from_scc'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__get_context_from_scc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__get_context_from_scc_3_0_i3);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__term_util__get_context_from_scc_3_0_i13);
MR_def_label(transform_hlds__term_util__get_context_from_scc_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(hlds__hlds_pred__pred_info_get_context_2_0);
MR_def_label(transform_hlds__term_util__get_context_from_scc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_util", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_util.get_context_from_scc\'/3", 59);
	MR_r3 = (MR_Word) MR_string_const("empty SCC", 9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module11)
	MR_init_entry1(transform_hlds__term_util__is_termination_known_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__is_termination_known_2_0);
	MR_init_label3(transform_hlds__term_util__is_termination_known_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'is_termination_known'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__is_termination_known_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_util__is_termination_known_2_0_i2);
MR_def_label(transform_hlds__term_util__is_termination_known_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__term_util__is_termination_known_2_0_i3);
MR_def_label(transform_hlds__term_util__is_termination_known_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__is_termination_known_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_util__is_termination_known_2_0,1)
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

MR_decl_entry(fn__parse_tree__prog_data__get_terminates_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_may_call_mercury_1_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module12)
	MR_init_entry1(transform_hlds__term_util__attributes_imply_termination_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__attributes_imply_termination_1_0);
	MR_init_label5(transform_hlds__term_util__attributes_imply_termination_1_0,4,6,8,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'attributes_imply_termination'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__attributes_imply_termination_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__term_util__attributes_imply_termination_1_0_i4);
MR_def_label(transform_hlds__term_util__attributes_imply_termination_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__attributes_imply_termination_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_terminates_1_0,
		transform_hlds__term_util__attributes_imply_termination_1_0_i6);
MR_def_label(transform_hlds__term_util__attributes_imply_termination_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__term_util__attributes_imply_termination_1_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_may_call_mercury_1_0,
		transform_hlds__term_util__attributes_imply_termination_1_0_i8);
MR_def_label(transform_hlds__term_util__attributes_imply_termination_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(2);
MR_def_label(transform_hlds__term_util__attributes_imply_termination_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(transform_hlds__term_util__attributes_imply_termination_1_0,1)
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


MR_BEGIN_MODULE(transform_hlds__term_util_module13)
	MR_init_entry1(transform_hlds__term_util__pred_proc_id_terminates_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__pred_proc_id_terminates_2_0);
	MR_init_label3(transform_hlds__term_util__pred_proc_id_terminates_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'pred_proc_id_terminates'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__pred_proc_id_terminates_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_util__pred_proc_id_terminates_2_0_i2);
MR_def_label(transform_hlds__term_util__pred_proc_id_terminates_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_maybe_termination_info_2_0,
		transform_hlds__term_util__pred_proc_id_terminates_2_0_i3);
MR_def_label(transform_hlds__term_util__pred_proc_id_terminates_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__pred_proc_id_terminates_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_tag(MR_r2) == MR_mktag((MR_Integer) 0));
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_util__pred_proc_id_terminates_2_0,1)
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

MR_decl_entry(transform_hlds__term_norm__zero_size_type_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module14)
	MR_init_entry1(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__all_args_input_or_zero_size_2_3_0);
	MR_init_label8(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,50,3,11,32,9,15,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_args_input_or_zero_size_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i3);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i32);
	}
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_util", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", 68);
	MR_r3 = (MR_Word) MR_string_const("unmatched lists", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i32);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i8);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i11);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i50);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__term_norm__zero_size_type_2_0,
		transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i15);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i50);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.term_util", 24);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.term_util.all_args_input_or_zero_size_2\'/3", 68);
	MR_r3 = (MR_Word) MR_string_const("unmatched lists", 15);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__term_util__all_args_input_or_zero_size_2_3_0_i32);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module15)
	MR_init_entry1(transform_hlds__term_util__all_args_input_or_zero_size_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__all_args_input_or_zero_size_3_0);
	MR_init_label2(transform_hlds__term_util__all_args_input_or_zero_size_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_args_input_or_zero_size'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__all_args_input_or_zero_size_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		transform_hlds__term_util__all_args_input_or_zero_size_3_0_i2);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_util__all_args_input_or_zero_size_3_0_i3);
MR_def_label(transform_hlds__term_util__all_args_input_or_zero_size_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(transform_hlds__term_util__all_args_input_or_zero_size_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module16)
	MR_init_entry1(transform_hlds__term_util__add_context_to_termination_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__add_context_to_termination_info_3_0);
	MR_init_label2(transform_hlds__term_util__add_context_to_termination_info_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_context_to_termination_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__add_context_to_termination_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__add_context_to_termination_info_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_util__add_context_to_termination_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__term_util__add_context_to_termination_info_3_0_i5);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_util__add_context_to_termination_info_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module17)
	MR_init_entry1(transform_hlds__term_util__add_context_to_arg_size_info_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__term_util__add_context_to_arg_size_info_3_0);
	MR_init_label2(transform_hlds__term_util__add_context_to_arg_size_info_3_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_context_to_arg_size_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_util__add_context_to_arg_size_info_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__add_context_to_arg_size_info_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(transform_hlds__term_util__add_context_to_arg_size_info_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_util__add_context_to_arg_size_info_3_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	}
MR_def_label(transform_hlds__term_util__add_context_to_arg_size_info_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module18)
	MR_init_entry1(__Unify___transform_hlds__term_util__arg_size_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_util__arg_size_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_util__arg_size_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module19)
	MR_init_entry1(__Compare___transform_hlds__term_util__arg_size_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_util__arg_size_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_util__arg_size_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__term_norm__functor_info_0_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module20)
	MR_init_entry1(__Unify___transform_hlds__term_util__pass_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_util__pass_info_0_0);
	MR_init_label3(__Unify___transform_hlds__term_util__pass_info_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_util__pass_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_util__pass_info_0_0_i6);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___transform_hlds__term_norm__functor_info_0_0,
		__Unify___transform_hlds__term_util__pass_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__term_util__pass_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_util__pass_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_util__pass_info_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__term_util__pass_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_util__pass_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__term_norm__functor_info_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__term_util_module21)
	MR_init_entry1(__Compare___transform_hlds__term_util__pass_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_util__pass_info_0_0);
	MR_init_label5(__Compare___transform_hlds__term_util__pass_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_util__pass_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_util__pass_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_util__pass_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_util__pass_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_util__pass_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___transform_hlds__term_norm__functor_info_0_0,
		__Compare___transform_hlds__term_util__pass_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__term_util__pass_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_util__pass_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__term_util__pass_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_util__pass_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_util__pass_info_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__term_util__pass_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module22)
	MR_init_entry1(__Unify___transform_hlds__term_util__termination_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_util__termination_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_util__termination_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module23)
	MR_init_entry1(__Compare___transform_hlds__term_util__termination_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_util__termination_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_util__termination_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module24)
	MR_init_entry1(__Unify___transform_hlds__term_util__used_args_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__term_util__used_args_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__term_util__used_args_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module25)
	MR_init_entry1(__Compare___transform_hlds__term_util__used_args_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__term_util__used_args_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__term_util__used_args_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(builtin__compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_util_module26)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0);
	MR_init_label3(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__make_bool_list_2__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0_i2);
	}
	MR_r3 = (MR_Integer) 0;
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = MR_r2;
	break;
	} /* end while */
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_r3 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	if (MR_INT_GT(MR_r3,0))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_107_101_95_98_111_111_108_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_util_maybe_bunch_0(void)
{
	transform_hlds__term_util_module0();
	transform_hlds__term_util_module1();
	transform_hlds__term_util_module2();
	transform_hlds__term_util_module3();
	transform_hlds__term_util_module4();
	transform_hlds__term_util_module5();
	transform_hlds__term_util_module6();
	transform_hlds__term_util_module7();
	transform_hlds__term_util_module8();
	transform_hlds__term_util_module9();
	transform_hlds__term_util_module10();
	transform_hlds__term_util_module11();
	transform_hlds__term_util_module12();
	transform_hlds__term_util_module13();
	transform_hlds__term_util_module14();
	transform_hlds__term_util_module15();
	transform_hlds__term_util_module16();
	transform_hlds__term_util_module17();
	transform_hlds__term_util_module18();
	transform_hlds__term_util_module19();
	transform_hlds__term_util_module20();
	transform_hlds__term_util_module21();
	transform_hlds__term_util_module22();
	transform_hlds__term_util_module23();
	transform_hlds__term_util_module24();
	transform_hlds__term_util_module25();
	transform_hlds__term_util_module26();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_util__init(void);
void mercury__transform_hlds__term_util__init_type_tables(void);
void mercury__transform_hlds__term_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__term_util__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__term_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_util_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_util__type_ctor_info_arg_size_info_0,
		transform_hlds__term_util__arg_size_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_util__type_ctor_info_pass_info_0,
		transform_hlds__term_util__pass_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_util__type_ctor_info_termination_info_0,
		transform_hlds__term_util__termination_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_util__type_ctor_info_used_args_0,
		transform_hlds__term_util__used_args_0_0);
	mercury__transform_hlds__term_util__init_debugger();
}

void mercury__transform_hlds__term_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_util__type_ctor_info_arg_size_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_util__type_ctor_info_pass_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_util__type_ctor_info_termination_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_util__type_ctor_info_used_args_0);
	}
}


void mercury__transform_hlds__term_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__term_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__term_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
