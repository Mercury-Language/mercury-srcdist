/*
** Automatically generated from `rtti_access.m'
** by the Mercury compiler,
** version rotd-2011-09-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdbcomp__rtti_access__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdbcomp.rtti_access.c"
#include "mdbcomp.rtti_access.mh"

#line 28 "mdbcomp.rtti_access.c"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 32 "mdbcomp.rtti_access.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "mdbcomp.rtti_access.c"
#line 140 "../library/io.int2"
#include "io.mh"

#line 40 "mdbcomp.rtti_access.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 44 "mdbcomp.rtti_access.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 48 "mdbcomp.rtti_access.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 52 "mdbcomp.rtti_access.c"
#line 53 "mdbcomp.rtti_access.c"
#ifndef MDBCOMP__RTTI_ACCESS_DECL_GUARD
#define MDBCOMP__RTTI_ACCESS_DECL_GUARD

#line 57 "mdbcomp.rtti_access.c"
#line 58 "mdbcomp.rtti_access.c"

#endif
#line 61 "mdbcomp.rtti_access.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_0,
	mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0,
	mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
	mercury_data_mdbcomp__rtti_access__type_ctor_info_module_common_layout_0,
	mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
	mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_0,
	mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_chars_0;
MR_decl_label1(mdbcomp__rtti_access__containing_module_common_layout_2_0, 1)
MR_decl_label1(mdbcomp__rtti_access__find_initial_version_arg_num_3_0, 1)
MR_decl_label1(mdbcomp__rtti_access__get_context_from_label_layout_3_0, 1)
MR_decl_label1(mdbcomp__rtti_access__proc_layout_is_uci_1_0, 1)
MR_decl_label1(mdbcomp__rtti_access__read_byte_4_0, 1)
MR_decl_label1(mdbcomp__rtti_access__read_int32_4_0, 1)
MR_decl_label4(mdbcomp__rtti_access__read_len_string_4_0, 2,4,6,1)
MR_decl_label4(mdbcomp__rtti_access__read_len_string_2_6_0, 23,2,3,1)
MR_decl_label3(mdbcomp__rtti_access__read_line_4_0, 2,4,1)
MR_decl_label4(mdbcomp__rtti_access__read_line_2_5_0, 25,2,4,1)
MR_decl_label4(mdbcomp__rtti_access__read_num_2_5_0, 20,2,4,1)
MR_decl_label1(mdbcomp__rtti_access__read_short_4_0, 1)
MR_decl_label2(mdbcomp__rtti_access__read_string_table_4_0, 2,1)
MR_decl_label2(mdbcomp__rtti_access__read_string_via_offset_5_0, 2,1)
MR_decl_label1(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0, 3)
MR_decl_label1(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0, 2)
MR_decl_label8(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0, 8,6,11,12,13,3,15,16)
MR_decl_label1(fn__mdbcomp__rtti_access__lookup_string_table_2_0, 2)
MR_decl_label3(__Unify___mdbcomp__rtti_access__bytecode_0_0, 4,6,1)
MR_decl_label3(__Unify___mdbcomp__rtti_access__string_table_0_0, 4,6,1)
MR_decl_label4(__Compare___mdbcomp__rtti_access__bytecode_0_0, 3,2,5,21)
MR_decl_label4(__Compare___mdbcomp__rtti_access__string_table_0_0, 3,2,5,21)
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
MR_def_extern_entry(fn__mdbcomp__rtti_access__containing_proc_layout_1_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__proc_bytecode_bytes_1_0)
MR_def_extern_entry(mdbcomp__rtti_access__containing_module_common_layout_2_0)
MR_decl_static(mdbcomp__rtti_access__module_string_table_components_3_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__module_common_string_table_1_0)
MR_decl_static(fn__mdbcomp__rtti_access__lookup_string_table_2_2_0)
MR_def_extern_entry(fn__mdbcomp__rtti_access__lookup_string_table_2_0)
MR_decl_static(mdbcomp__rtti_access__read_byte_2_4_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_byte_4_0)
MR_decl_static(mdbcomp__rtti_access__read_short_2_4_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_short_4_0)
MR_decl_static(mdbcomp__rtti_access__read_int32_2_4_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_int32_4_0)
MR_decl_static(mdbcomp__rtti_access__read_num_2_5_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_num_4_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_string_via_offset_5_0)
MR_decl_static(mdbcomp__rtti_access__read_line_2_5_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_line_4_0)
MR_decl_static(mdbcomp__rtti_access__read_len_string_2_6_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_len_string_4_0)
MR_decl_static(mdbcomp__rtti_access__bytecode_string_table_2_4_0)
MR_def_extern_entry(mdbcomp__rtti_access__read_string_table_4_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__bytecode_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__bytecode_0_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__bytecode_bytes_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__bytecode_bytes_0_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__label_layout_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__label_layout_0_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__module_common_layout_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__module_common_layout_0_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__proc_layout_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__proc_layout_0_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__string_table_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__string_table_0_0)
MR_def_extern_entry(__Unify___mdbcomp__rtti_access__string_table_chars_0_0)
MR_def_extern_entry(__Compare___mdbcomp__rtti_access__string_table_chars_0_0)
MR_decl_static(f_109_100_98_99_111_109_112_95_95_114_116_116_105_95_97_99_99_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_0)
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__rtti_access__field_types_bytecode_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__rtti_access__du_functor_desc_bytecode_0_0 = {
	"bytecode",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__rtti_access__field_types_bytecode_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__rtti_access__du_stag_ordered_bytecode_0_0[] = {
	&mercury_data_mdbcomp__rtti_access__du_functor_desc_bytecode_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__rtti_access__du_ptag_ordered_bytecode_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__rtti_access__du_stag_ordered_bytecode_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__rtti_access__du_name_ordered_bytecode_0[] = {
	&mercury_data_mdbcomp__rtti_access__du_functor_desc_bytecode_0_0
};

const MR_Integer mercury_data_mdbcomp__rtti_access__functor_number_map_bytecode_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__rtti_access__bytecode_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__rtti_access__bytecode_0_0)),
	"mdbcomp.rtti_access",
	"bytecode",
	{ (void *)mercury_data_mdbcomp__rtti_access__du_name_ordered_bytecode_0 },
	{ (void *)mercury_data_mdbcomp__rtti_access__du_ptag_ordered_bytecode_0 },
	1,
	4,
	mercury_data_mdbcomp__rtti_access__functor_number_map_bytecode_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__rtti_access__bytecode_bytes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__rtti_access__bytecode_bytes_0_0)),
	"mdbcomp.rtti_access",
	"bytecode_bytes",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
	0,
	15,
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

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_module_common_layout_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__rtti_access__module_common_layout_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__rtti_access__module_common_layout_0_0)),
	"mdbcomp.rtti_access",
	"module_common_layout",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0 = {
	0,
	15,
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
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_chars_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__rtti_access__field_types_string_table_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_chars_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__rtti_access__du_functor_desc_string_table_0_0 = {
	"string_table",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__rtti_access__field_types_string_table_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__rtti_access__du_stag_ordered_string_table_0_0[] = {
	&mercury_data_mdbcomp__rtti_access__du_functor_desc_string_table_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__rtti_access__du_ptag_ordered_string_table_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__rtti_access__du_stag_ordered_string_table_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__rtti_access__du_name_ordered_string_table_0[] = {
	&mercury_data_mdbcomp__rtti_access__du_functor_desc_string_table_0_0
};

const MR_Integer mercury_data_mdbcomp__rtti_access__functor_number_map_string_table_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__rtti_access__string_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__rtti_access__string_table_0_0)),
	"mdbcomp.rtti_access",
	"string_table",
	{ (void *)mercury_data_mdbcomp__rtti_access__du_name_ordered_string_table_0 },
	{ (void *)mercury_data_mdbcomp__rtti_access__du_ptag_ordered_string_table_0 },
	1,
	4,
	mercury_data_mdbcomp__rtti_access__functor_number_map_string_table_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_chars_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_STABLE_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__rtti_access__string_table_chars_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__rtti_access__string_table_chars_0_0)),
	"mdbcomp.rtti_access",
	"string_table_chars",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(mdbcomp__rtti_access_module0)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_proc_layout_from_label_layout'/2 mode 0 */
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
#line 189 "rtti_access.m"

    ProcLayout = Label->MR_sll_entry;
;}
#line 366 "mdbcomp.rtti_access.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_goal_path_from_label_layout_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_goal_path_from_label_layout'/2 mode 0 */
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
#line 196 "rtti_access.m"

    GoalPath = (MR_String) MR_label_goal_path(Label);
;}
#line 401 "mdbcomp.rtti_access.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0);
	MR_init_label1(fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_goal_path_from_maybe_label'/2 mode 0 */
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
	MR_r2 = MR_tfield(1, MR_r1, 0);
	{
	const MR_LabelLayout *	Label;
	MR_String	GoalPath;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_goal_path_from_maybe_label_1_0
	Label = (const MR_LabelLayout *) MR_r2;
{
#line 196 "rtti_access.m"

    GoalPath = (MR_String) MR_label_goal_path(Label);
;}
#line 445 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) GoalPath;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module3)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_port_from_label_layout_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_port_from_label_layout_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_port_from_label_layout'/2 mode 0 */
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
#line 221 "rtti_access.m"

    Port = Label->MR_sll_port;
;}
#line 480 "mdbcomp.rtti_access.c"
	MR_r1 = Port;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0);
MR_decl_entry(fn__mdbcomp__trace_counts__make_path_port_2_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module4)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0);
	MR_init_label1(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_path_port_from_label_layout'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	const MR_LabelLayout *	Label;
	MR_Word	Port;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 221 "rtti_access.m"

    Port = Label->MR_sll_port;
;}
#line 520 "mdbcomp.rtti_access.c"
	MR_r2 = Port;
#undef	MR_PROC_LABEL
	}
	{
	const MR_LabelLayout *	Label;
	MR_String	GoalPath;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0
	Label = (const MR_LabelLayout *) MR_r1;
{
#line 196 "rtti_access.m"

    GoalPath = (MR_String) MR_label_goal_path(Label);
;}
#line 534 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) GoalPath;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__goal_path__rev_goal_path_from_string_det_2_0,
		fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0_i2);
MR_def_label(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__get_context_from_label_layout_3_0);
	MR_init_label1(mdbcomp__rtti_access__get_context_from_label_layout_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_context_from_label_layout'/3 mode 0 */
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
#line 207 "rtti_access.m"

    const char  *filename;
    int         line_no;

    SUCCESS_INDICATOR = MR_find_context(Label, &filename, &line_no);
    LineNo = (MR_Integer) line_no;
    MR_TRACE_USE_HP(
        MR_make_aligned_string(FileName, (MR_String) filename);
    );
;}
#line 589 "mdbcomp.rtti_access.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__proc_layout_is_uci_1_0);
	MR_init_label1(mdbcomp__rtti_access__proc_layout_is_uci_1_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_layout_is_uci'/1 mode 0 */
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
#line 270 "rtti_access.m"

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 640 "mdbcomp.rtti_access.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__proc_layout_get_uci_fields_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_layout_get_uci_fields'/7 mode 0 */
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
#line 285 "rtti_access.m"

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
#line 697 "mdbcomp.rtti_access.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__proc_layout_get_non_uci_fields_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_layout_get_non_uci_fields'/7 mode 0 */
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
#line 307 "rtti_access.m"

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
#line 752 "mdbcomp.rtti_access.c"
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
MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module9)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0);
	MR_init_label8(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,8,6,11,12,13,3,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_proc_label_from_layout'/2 mode 0 */
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
#line 270 "rtti_access.m"

    if (MR_PROC_ID_IS_UCI(Layout->MR_sle_proc_id)) {
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 804 "mdbcomp.rtti_access.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i3);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
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
#line 285 "rtti_access.m"

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
#line 837 "mdbcomp.rtti_access.c"
	MR_r2 = (MR_Word) TypeName;
	MR_tempr1 = (MR_Word) TypeModule;
	MR_tempr2 = (MR_Word) DefModule;
	MR_r1 = (MR_Word) PredName;
	MR_tempr3 = TypeArity;
	MR_tempr4 = ModeNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tempr3;
	MR_sv(4) = MR_tempr4;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_2,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i8);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i12);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(5);
	MR_tempr2 = MR_sv(2);
	MR_tempr3 = MR_sv(3);
	MR_tempr4 = MR_sv(4);
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
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i13);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 6);
	MR_tfield(1, MR_r2, 0) = MR_sv(5);
	MR_tfield(1, MR_r2, 1) = MR_sv(2);
	MR_tfield(1, MR_r2, 2) = MR_r1;
	MR_tfield(1, MR_r2, 3) = MR_sv(1);
	MR_tfield(1, MR_r2, 4) = MR_sv(3);
	MR_tfield(1, MR_r2, 5) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
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
#line 307 "rtti_access.m"

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
#line 927 "mdbcomp.rtti_access.c"
	MR_r2 = PredOrFunc;
	MR_tempr1 = (MR_Word) DeclModule;
	MR_r1 = (MR_Word) DefModule;
	MR_tempr2 = (MR_Word) PredName;
	MR_tempr3 = Arity;
	MR_tempr4 = ModeNum;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = MR_tempr3;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr4;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i15);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0_i16);
MR_def_label(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = MR_sv(5);
	MR_tfield(0, MR_r2, 1) = MR_sv(1);
	MR_tfield(0, MR_r2, 2) = MR_r1;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(4);
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module10)
	MR_init_entry1(fn__mdbcomp__rtti_access__get_proc_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_proc_name_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_proc_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__get_proc_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module11)
	MR_init_entry1(mdbcomp__rtti_access__find_initial_version_arg_num_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__find_initial_version_arg_num_3_0);
	MR_init_label1(mdbcomp__rtti_access__find_initial_version_arg_num_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_initial_version_arg_num'/3 mode 0 */
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
#line 324 "rtti_access.m"

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
                        MR_strneq(out_name, in_name, start_of_num)
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
                        MR_strneq(out_name, in_name, start_of_num - 1)
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
#line 1147 "mdbcomp.rtti_access.c"
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
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__get_all_modes_for_layout_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_all_modes_for_layout'/2 mode 0 */
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
#line 458 "rtti_access.m"

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
#line 1264 "mdbcomp.rtti_access.c"
	MR_r1 = Layouts;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module13)
	MR_init_entry1(fn__mdbcomp__rtti_access__containing_proc_layout_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__containing_proc_layout_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'containing_proc_layout'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__containing_proc_layout_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_LabelLayout *	LabelLayout;
	const MR_ProcLayout *	ProcLayout;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__containing_proc_layout_1_0
	LabelLayout = (const MR_LabelLayout *) MR_r1;
{
#line 539 "rtti_access.m"

    ProcLayout = LabelLayout->MR_sll_entry;
;}
#line 1299 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) ProcLayout;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module14)
	MR_init_entry1(fn__mdbcomp__rtti_access__proc_bytecode_bytes_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__proc_bytecode_bytes_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_bytecode_bytes'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__proc_bytecode_bytes_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	const MR_uint_least8_t *	ByteCodeBytes;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__proc_bytecode_bytes_1_0
	ProcLayout = (const MR_ProcLayout *) MR_r1;
{
#line 546 "rtti_access.m"

    ByteCodeBytes = ProcLayout->MR_sle_body_bytes;
#ifdef MR_DEBUG_PROC_REP
    printf("lookup_proc_bytecode: %p %p\n", ProcLayout, ByteCodeBytes);
#endif
;}
#line 1337 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) ByteCodeBytes;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module15)
	MR_init_entry1(mdbcomp__rtti_access__containing_module_common_layout_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__containing_module_common_layout_2_0);
	MR_init_label1(mdbcomp__rtti_access__containing_module_common_layout_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'containing_module_common_layout'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__containing_module_common_layout_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ProcLayout *	ProcLayout;
	const MR_ModuleCommonLayout *	ModuleCommonLayout;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__containing_module_common_layout_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	ProcLayout = (const MR_ProcLayout *) MR_r1;
{
#line 598 "rtti_access.m"

    if (MR_PROC_LAYOUT_HAS_THIRD_GROUP(ProcLayout)) {
        ModuleCommonLayout = ProcLayout->MR_sle_module_common_layout;
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }
;}
#line 1381 "mdbcomp.rtti_access.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(mdbcomp__rtti_access__containing_module_common_layout_2_0_i1);
	MR_r2 = (MR_Word) ModuleCommonLayout;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__rtti_access__containing_module_common_layout_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module16)
	MR_init_entry1(mdbcomp__rtti_access__module_string_table_components_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__module_string_table_components_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_string_table_components'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__module_string_table_components_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_ModuleCommonLayout *	ModuleCommonLayout;
	MR_ConstString	StringTableChars;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__module_string_table_components_3_0
	ModuleCommonLayout = (const MR_ModuleCommonLayout *) MR_r1;
{
#line 618 "rtti_access.m"

    StringTableChars = ModuleCommonLayout->MR_mlc_string_table;
    Size = ModuleCommonLayout->MR_mlc_string_table_size;
;}
#line 1426 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) StringTableChars;
	MR_r2 = Size;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module17)
	MR_init_entry1(fn__mdbcomp__rtti_access__module_common_string_table_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__module_common_string_table_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'module_common_string_table'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__module_common_string_table_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	const MR_ModuleCommonLayout *	ModuleCommonLayout;
	MR_ConstString	StringTableChars;
	MR_Integer	Size;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__module_common_string_table_1_0
	ModuleCommonLayout = (const MR_ModuleCommonLayout *) MR_r1;
{
#line 618 "rtti_access.m"

    StringTableChars = ModuleCommonLayout->MR_mlc_string_table;
    Size = ModuleCommonLayout->MR_mlc_string_table_size;
;}
#line 1466 "mdbcomp.rtti_access.c"
	MR_r2 = (MR_Word) StringTableChars;
	MR_tempr1 = Size;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_tfield(0, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module18)
	MR_init_entry1(fn__mdbcomp__rtti_access__lookup_string_table_2_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__lookup_string_table_2_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_string_table_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__rtti_access__lookup_string_table_2_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ConstString	StringTableChars;
	MR_Integer	StartOffset;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__lookup_string_table_2_2_0
	StringTableChars = (MR_ConstString) MR_r1;
	StartOffset = MR_r2;
{
#line 639 "rtti_access.m"

    MR_make_aligned_string(Str, StringTableChars + StartOffset);
;}
#line 1508 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module19)
	MR_init_entry1(fn__mdbcomp__rtti_access__lookup_string_table_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdbcomp__rtti_access__lookup_string_table_2_0);
	MR_init_label1(fn__mdbcomp__rtti_access__lookup_string_table_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup_string_table'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__rtti_access__lookup_string_table_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(fn__mdbcomp__rtti_access__lookup_string_table_2_0_i2);
	}
	MR_r3 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__mdbcomp__rtti_access__lookup_string_table_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	MR_ConstString	StringTableChars;
	MR_Integer	StartOffset;
	MR_String	Str;
#define	MR_PROC_LABEL	mercury__fn__mdbcomp__rtti_access__lookup_string_table_2_0
	StringTableChars = (MR_ConstString) MR_tempr1;
	StartOffset = MR_r2;
{
#line 639 "rtti_access.m"

    MR_make_aligned_string(Str, StringTableChars + StartOffset);
;}
#line 1556 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) Str;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
	}
MR_def_label(fn__mdbcomp__rtti_access__lookup_string_table_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("lookup_string_table: bounds violation", 37);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module20)
	MR_init_entry1(mdbcomp__rtti_access__read_byte_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_byte_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_byte_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__read_byte_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_byte_2_4_0
	ByteCode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 655 "rtti_access.m"

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;
;}
#line 1600 "mdbcomp.rtti_access.c"
	MR_r1 = Value;
	MR_r2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module21)
	MR_init_entry1(mdbcomp__rtti_access__read_byte_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_byte_4_0);
	MR_init_label1(mdbcomp__rtti_access__read_byte_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_byte'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_byte_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_byte_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_byte_4_0
	ByteCode = (const MR_uint_least8_t *) MR_tempr1;
	Pos0 = MR_r2;
{
#line 655 "rtti_access.m"

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;
;}
#line 1649 "mdbcomp.rtti_access.c"
	MR_r2 = Value;
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__rtti_access__read_byte_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module22)
	MR_init_entry1(mdbcomp__rtti_access__read_short_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_short_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_short_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__read_short_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_short_2_4_0
	ByteCode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 670 "rtti_access.m"

    Value = (ByteCode[Pos0] << 8) + ByteCode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 1695 "mdbcomp.rtti_access.c"
	MR_r1 = Value;
	MR_r2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module23)
	MR_init_entry1(mdbcomp__rtti_access__read_short_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_short_4_0);
	MR_init_label1(mdbcomp__rtti_access__read_short_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_short'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_short_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_r2 + (MR_Integer) 2);
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_short_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_short_4_0
	ByteCode = (const MR_uint_least8_t *) MR_tempr1;
	Pos0 = MR_r2;
{
#line 670 "rtti_access.m"

    Value = (ByteCode[Pos0] << 8) + ByteCode[Pos0+1];
    Pos = Pos0 + 2;
;}
#line 1744 "mdbcomp.rtti_access.c"
	MR_r2 = Value;
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__rtti_access__read_short_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module24)
	MR_init_entry1(mdbcomp__rtti_access__read_int32_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_int32_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_int32_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__read_int32_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_int32_2_4_0
	ByteCode = (const MR_uint_least8_t *) MR_r1;
	Pos0 = MR_r2;
{
#line 685 "rtti_access.m"

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;
;}
#line 1791 "mdbcomp.rtti_access.c"
	MR_r1 = Value;
	MR_r2 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module25)
	MR_init_entry1(mdbcomp__rtti_access__read_int32_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_int32_4_0);
	MR_init_label1(mdbcomp__rtti_access__read_int32_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_int32'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_int32_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_r2 + (MR_Integer) 4);
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_int32_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_int32_4_0
	ByteCode = (const MR_uint_least8_t *) MR_tempr1;
	Pos0 = MR_r2;
{
#line 685 "rtti_access.m"

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;
;}
#line 1841 "mdbcomp.rtti_access.c"
	MR_r2 = Value;
	MR_r3 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__rtti_access__read_int32_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_105_110_116_95_95_60_60_2_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module26)
	MR_init_entry1(mdbcomp__rtti_access__read_num_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_num_2_5_0);
	MR_init_label4(mdbcomp__rtti_access__read_num_2_5_0,20,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_num_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__read_num_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__rtti_access__read_num_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_num_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_num_2_5_0
	ByteCode = (const MR_uint_least8_t *) MR_tempr1;
	Pos0 = MR_r3;
{
#line 655 "rtti_access.m"

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;
;}
#line 1901 "mdbcomp.rtti_access.c"
	MR_tempr2 = Value;
	MR_tempr1 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = (MR_Integer) 7;
	}
	MR_np_call_localret_ent(fn__f_105_110_116_95_95_60_60_2_0,
		mdbcomp__rtti_access__read_num_2_5_0_i2);
MR_def_label(mdbcomp__rtti_access__read_num_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_r1 | ((MR_Integer) MR_tempr1 & (MR_Integer) 127));
	MR_r4 = ((MR_Integer) MR_tempr1 & (MR_Integer) 128);
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_num_2_5_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdbcomp__rtti_access__read_num_2_5_0_i20);
	}
MR_def_label(mdbcomp__rtti_access__read_num_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(mdbcomp__rtti_access__read_num_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module27)
	MR_init_entry1(mdbcomp__rtti_access__read_num_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_num_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_num'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_num_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(mdbcomp__rtti_access__read_num_2_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module28)
	MR_init_entry1(mdbcomp__rtti_access__read_string_via_offset_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_string_via_offset_5_0);
	MR_init_label2(mdbcomp__rtti_access__read_string_via_offset_5_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_string_via_offset'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_string_via_offset_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) 4);
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_string_via_offset_5_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_string_via_offset_5_0
	ByteCode = (const MR_uint_least8_t *) MR_tempr1;
	Pos0 = MR_r3;
{
#line 685 "rtti_access.m"

    Value = (ByteCode[Pos0] << 24) + (ByteCode[Pos0+1] << 16) +
        (ByteCode[Pos0+2] << 8) + ByteCode[Pos0+3];
    Pos = Pos0 + 4;
;}
#line 2011 "mdbcomp.rtti_access.c"
	MR_tempr2 = Value;
	MR_tempr1 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__lookup_string_table_2_0,
		mdbcomp__rtti_access__read_string_via_offset_5_0_i2);
MR_def_label(mdbcomp__rtti_access__read_string_via_offset_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(mdbcomp__rtti_access__read_string_via_offset_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__from_int_2_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module29)
	MR_init_entry1(mdbcomp__rtti_access__read_line_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_line_2_5_0);
	MR_init_label4(mdbcomp__rtti_access__read_line_2_5_0,25,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_line_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__read_line_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__rtti_access__read_line_2_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) 1);
	MR_r5 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_line_2_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_line_2_5_0
	ByteCode = (const MR_uint_least8_t *) MR_tempr1;
	Pos0 = MR_r3;
{
#line 655 "rtti_access.m"

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2080 "mdbcomp.rtti_access.c"
	MR_tempr2 = Value;
	MR_tempr1 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__from_int_2_0,
		mdbcomp__rtti_access__read_line_2_5_0_i2);
MR_def_label(mdbcomp__rtti_access__read_line_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_line_2_5_0_i1);
	}
	if (MR_INT_NE(MR_r2,10)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_line_2_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdbcomp__rtti_access__read_line_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(mdbcomp__rtti_access__read_line_2_5_0_i25);
	}
MR_def_label(mdbcomp__rtti_access__read_line_2_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__from_rev_char_list_2_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module30)
	MR_init_entry1(mdbcomp__rtti_access__read_line_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_line_4_0);
	MR_init_label3(mdbcomp__rtti_access__read_line_4_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_line'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_line_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_line_2_5_0,
		mdbcomp__rtti_access__read_line_4_0_i2);
MR_def_label(mdbcomp__rtti_access__read_line_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_line_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		mdbcomp__rtti_access__read_line_4_0_i4);
MR_def_label(mdbcomp__rtti_access__read_line_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__rtti_access__read_line_4_0,1)
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


MR_BEGIN_MODULE(mdbcomp__rtti_access_module31)
	MR_init_entry1(mdbcomp__rtti_access__read_len_string_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_len_string_2_6_0);
	MR_init_label4(mdbcomp__rtti_access__read_len_string_2_6_0,23,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_len_string_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__read_len_string_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__rtti_access__read_len_string_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GT(MR_r2,0)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_len_string_2_6_0_i2);
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(5);
MR_def_label(mdbcomp__rtti_access__read_len_string_2_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = ((MR_Integer) MR_r4 + (MR_Integer) 1);
	MR_r6 = MR_tfield(0, MR_r1, 1);
	if (((MR_Integer) MR_r5 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_len_string_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	const MR_uint_least8_t *	ByteCode;
	MR_Integer	Value;
	MR_Integer	Pos0;
	MR_Integer	Pos;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_len_string_2_6_0
	ByteCode = (const MR_uint_least8_t *) MR_tempr1;
	Pos0 = MR_r4;
{
#line 655 "rtti_access.m"

    Value = ByteCode[Pos0];
    Pos = Pos0 + 1;
;}
#line 2238 "mdbcomp.rtti_access.c"
	MR_tempr2 = Value;
	MR_tempr1 = Pos;
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(char__from_int_2_0,
		mdbcomp__rtti_access__read_len_string_2_6_0_i3);
MR_def_label(mdbcomp__rtti_access__read_len_string_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_len_string_2_6_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_sv(2) - (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__rtti_access__read_len_string_2_6_0_i23);
	}
MR_def_label(mdbcomp__rtti_access__read_len_string_2_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module32)
	MR_init_entry1(mdbcomp__rtti_access__read_len_string_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_len_string_4_0);
	MR_init_label4(mdbcomp__rtti_access__read_len_string_4_0,2,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_len_string'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_len_string_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_2_5_0,
		mdbcomp__rtti_access__read_len_string_4_0_i2);
MR_def_label(mdbcomp__rtti_access__read_len_string_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_len_string_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_len_string_2_6_0,
		mdbcomp__rtti_access__read_len_string_4_0_i4);
MR_def_label(mdbcomp__rtti_access__read_len_string_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_len_string_4_0_i1);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		mdbcomp__rtti_access__read_len_string_4_0_i6);
MR_def_label(mdbcomp__rtti_access__read_len_string_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(mdbcomp__rtti_access__read_len_string_4_0,1)
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


MR_BEGIN_MODULE(mdbcomp__rtti_access_module33)
	MR_init_entry1(mdbcomp__rtti_access__bytecode_string_table_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__bytecode_string_table_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'bytecode_string_table_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__rtti_access__bytecode_string_table_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_np_tailcall_ent(f_109_100_98_99_111_109_112_95_95_114_116_116_105_95_97_99_99_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module34)
	MR_init_entry1(mdbcomp__rtti_access__read_string_table_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdbcomp__rtti_access__read_string_table_4_0);
	MR_init_label2(mdbcomp__rtti_access__read_string_table_4_0,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'read_string_table'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__rtti_access__read_string_table_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__rtti_access__read_num_2_5_0,
		mdbcomp__rtti_access__read_string_table_4_0_i2);
MR_def_label(mdbcomp__rtti_access__read_string_table_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_string_table_4_0_i1);
	}
	MR_r4 = ((MR_Integer) MR_r3 + (MR_Integer) MR_r2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(1);
	MR_r5 = MR_tfield(0, MR_tempr3, 1);
	if (((MR_Integer) MR_r4 > (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(mdbcomp__rtti_access__read_string_table_4_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	{
	const MR_uint_least8_t *	Bytes;
	MR_Word	Offset;
	MR_Word	Size;
	MR_ConstString	StringTableChars;
#define	MR_PROC_LABEL	mercury__mdbcomp__rtti_access__read_string_table_4_0
	Bytes = (const MR_uint_least8_t *) MR_tempr1;
	Offset = MR_r3;
	Size = MR_r2;
{
#line 760 "rtti_access.m"

    char    *buf;
    char    *table;
    int     i;

    MR_allocate_aligned_string_msg(buf, Size, MR_ALLOC_ID);
    table = ((char *) Bytes) + Offset;
    for (i = 0; i < Size; i++) {
        buf[i] = table[i];
    }

    StringTableChars = (MR_ConstString) buf;
;}
#line 2435 "mdbcomp.rtti_access.c"
	MR_tempr1 = (MR_Word) StringTableChars;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = ((MR_Integer) MR_r3 + (MR_Integer) MR_tfield(0, MR_r2, 1));
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdbcomp__rtti_access__read_string_table_4_0,1)
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

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module35)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__bytecode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__rtti_access__bytecode_0_0);
	MR_init_label3(__Unify___mdbcomp__rtti_access__bytecode_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__rtti_access__bytecode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__rtti_access__bytecode_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___builtin__c_pointer_0_0,
		__Unify___mdbcomp__rtti_access__bytecode_0_0_i4);
MR_def_label(__Unify___mdbcomp__rtti_access__bytecode_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__rtti_access__bytecode_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__rtti_access__bytecode_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__rtti_access__bytecode_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(mdbcomp__rtti_access_module36)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__bytecode_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__rtti_access__bytecode_0_0);
	MR_init_label4(__Compare___mdbcomp__rtti_access__bytecode_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__rtti_access__bytecode_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__rtti_access__bytecode_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__rtti_access__bytecode_0_0_i2);
MR_def_label(__Compare___mdbcomp__rtti_access__bytecode_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__rtti_access__bytecode_0_0,2)
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
	MR_np_call_localret_ent(__Compare___builtin__c_pointer_0_0,
		__Compare___mdbcomp__rtti_access__bytecode_0_0_i5);
MR_def_label(__Compare___mdbcomp__rtti_access__bytecode_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__rtti_access__bytecode_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__rtti_access__bytecode_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module37)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__bytecode_bytes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__rtti_access__bytecode_bytes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__rtti_access__bytecode_bytes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module38)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__bytecode_bytes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__rtti_access__bytecode_bytes_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__rtti_access__bytecode_bytes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module39)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__label_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__rtti_access__label_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(mdbcomp__rtti_access_module40)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__label_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__rtti_access__label_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(mdbcomp__rtti_access_module41)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__module_common_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__rtti_access__module_common_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__rtti_access__module_common_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module42)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__module_common_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__rtti_access__module_common_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__rtti_access__module_common_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module43)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__proc_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__rtti_access__proc_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
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


MR_BEGIN_MODULE(mdbcomp__rtti_access_module44)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__proc_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__rtti_access__proc_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
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


MR_BEGIN_MODULE(mdbcomp__rtti_access_module45)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__string_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__rtti_access__string_table_0_0);
	MR_init_label3(__Unify___mdbcomp__rtti_access__string_table_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__rtti_access__string_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__rtti_access__string_table_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___builtin__c_pointer_0_0,
		__Unify___mdbcomp__rtti_access__string_table_0_0_i4);
MR_def_label(__Unify___mdbcomp__rtti_access__string_table_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__rtti_access__string_table_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdbcomp__rtti_access__string_table_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdbcomp__rtti_access__string_table_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module46)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__string_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__rtti_access__string_table_0_0);
	MR_init_label4(__Compare___mdbcomp__rtti_access__string_table_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__rtti_access__string_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdbcomp__rtti_access__string_table_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdbcomp__rtti_access__string_table_0_0_i2);
MR_def_label(__Compare___mdbcomp__rtti_access__string_table_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdbcomp__rtti_access__string_table_0_0,2)
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
	MR_np_call_localret_ent(__Compare___builtin__c_pointer_0_0,
		__Compare___mdbcomp__rtti_access__string_table_0_0_i5);
MR_def_label(__Compare___mdbcomp__rtti_access__string_table_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__rtti_access__string_table_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__rtti_access__string_table_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module47)
	MR_init_entry1(__Unify___mdbcomp__rtti_access__string_table_chars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdbcomp__rtti_access__string_table_chars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__rtti_access__string_table_chars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module48)
	MR_init_entry1(__Compare___mdbcomp__rtti_access__string_table_chars_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdbcomp__rtti_access__string_table_chars_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__rtti_access__string_table_chars_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__rtti_access_module49)
	MR_init_entry1(f_109_100_98_99_111_109_112_95_95_114_116_116_105_95_97_99_99_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_99_111_109_112_95_95_114_116_116_105_95_97_99_99_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__bytecode_string_table_2__[1, 2]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_99_111_109_112_95_95_114_116_116_105_95_97_99_99_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	const MR_uint_least8_t *	Bytes;
	MR_Word	Offset;
	MR_Word	Size;
	MR_ConstString	StringTableChars;
#define	MR_PROC_LABEL	mercury__f_109_100_98_99_111_109_112_95_95_114_116_116_105_95_97_99_99_101_115_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_121_116_101_99_111_100_101_95_115_116_114_105_110_103_95_116_97_98_108_101_95_50_95_95_91_49_44_32_50_93_95_48_4_0
	Bytes = (const MR_uint_least8_t *) MR_r1;
	Offset = MR_r2;
	Size = MR_r3;
{
#line 760 "rtti_access.m"

    char    *buf;
    char    *table;
    int     i;

    MR_allocate_aligned_string_msg(buf, Size, MR_ALLOC_ID);
    table = ((char *) Bytes) + Offset;
    for (i = 0; i < Size; i++) {
        buf[i] = table[i];
    }

    StringTableChars = (MR_ConstString) buf;
;}
#line 2946 "mdbcomp.rtti_access.c"
	MR_r1 = (MR_Word) StringTableChars;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
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
	mdbcomp__rtti_access_module17();
	mdbcomp__rtti_access_module18();
	mdbcomp__rtti_access_module19();
	mdbcomp__rtti_access_module20();
	mdbcomp__rtti_access_module21();
	mdbcomp__rtti_access_module22();
	mdbcomp__rtti_access_module23();
	mdbcomp__rtti_access_module24();
	mdbcomp__rtti_access_module25();
	mdbcomp__rtti_access_module26();
	mdbcomp__rtti_access_module27();
	mdbcomp__rtti_access_module28();
	mdbcomp__rtti_access_module29();
	mdbcomp__rtti_access_module30();
	mdbcomp__rtti_access_module31();
	mdbcomp__rtti_access_module32();
	mdbcomp__rtti_access_module33();
	mdbcomp__rtti_access_module34();
	mdbcomp__rtti_access_module35();
	mdbcomp__rtti_access_module36();
	mdbcomp__rtti_access_module37();
	mdbcomp__rtti_access_module38();
	mdbcomp__rtti_access_module39();
}

static void mercury__mdbcomp__rtti_access_maybe_bunch_1(void)
{
	mdbcomp__rtti_access_module40();
	mdbcomp__rtti_access_module41();
	mdbcomp__rtti_access_module42();
	mdbcomp__rtti_access_module43();
	mdbcomp__rtti_access_module44();
	mdbcomp__rtti_access_module45();
	mdbcomp__rtti_access_module46();
	mdbcomp__rtti_access_module47();
	mdbcomp__rtti_access_module48();
	mdbcomp__rtti_access_module49();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__rtti_access__init(void);
void mercury__mdbcomp__rtti_access__init_type_tables(void);
void mercury__mdbcomp__rtti_access__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__rtti_access__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__rtti_access__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdbcomp__rtti_access__init_threadscope_string_table(void);
#endif

void mercury__mdbcomp__rtti_access__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__rtti_access_maybe_bunch_0();
	mercury__mdbcomp__rtti_access_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_0,
		mdbcomp__rtti_access__bytecode_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0,
		mdbcomp__rtti_access__bytecode_bytes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0,
		mdbcomp__rtti_access__label_layout_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_module_common_layout_0,
		mdbcomp__rtti_access__module_common_layout_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
		mdbcomp__rtti_access__proc_layout_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_0,
		mdbcomp__rtti_access__string_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_chars_0,
		mdbcomp__rtti_access__string_table_chars_0_0);
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
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_bytecode_bytes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_label_layout_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_module_common_layout_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_proc_layout_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__rtti_access__type_ctor_info_string_table_chars_0);
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

void mercury__mdbcomp__rtti_access__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdbcomp__rtti_access);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__rtti_access__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdbcomp__rtti_access__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
