/*
** Automatically generated from `delay_info.m'
** by the Mercury compiler,
** version rotd-2007-08-16, configured for i686-pc-linux-gnu.
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
INIT mercury__check_hlds__delay_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.delay_info.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.delay_info.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "check_hlds.delay_info.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "check_hlds.delay_info.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 43 "check_hlds.delay_info.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "check_hlds.delay_info.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.delay_info.c"
#line 52 "check_hlds.delay_info.c"
#include "check_hlds.delay_info.mh"

#line 55 "check_hlds.delay_info.c"
#line 56 "check_hlds.delay_info.c"
#ifndef CHECK_HLDS__DELAY_INFO_DECL_GUARD
#define CHECK_HLDS__DELAY_INFO_DECL_GUARD

#line 60 "check_hlds.delay_info.c"
#line 61 "check_hlds.delay_info.c"

#endif
#line 64 "check_hlds.delay_info.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_table_0,
	mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_0,
	mercury_data_check_hlds__delay_info__type_ctor_info_seq_num_0,
	mercury_data_check_hlds__delay_info__type_ctor_info_pending_goals_table_0,
	mercury_data_check_hlds__delay_info__type_ctor_info_depth_num_0,
	mercury_data_check_hlds__delay_info__type_ctor_info_delay_info_0,
	mercury_data_check_hlds__delay_info__type_ctor_info_delay_goal_num_0;
MR_decl_label8(check_hlds__delay_info__add_pending_goals_6_0, 22,4,5,7,9,6,11,3)
MR_decl_label8(check_hlds__delay_info__add_waiting_vars_5_0, 21,5,4,7,8,9,10,3)
MR_decl_label1(check_hlds__delay_info__delay_info_bind_all_vars_2_0, 2)
MR_decl_label4(check_hlds__delay_info__delay_info_bind_var_3_0, 3,5,6,2)
MR_decl_label3(check_hlds__delay_info__delay_info_bind_var_list_3_0, 11,4,3)
MR_decl_label7(check_hlds__delay_info__delay_info_delay_goal_4_0, 2,3,4,5,6,7,8)
MR_decl_label3(check_hlds__delay_info__delay_info_enter_conj_2_0, 2,3,4)
MR_decl_label4(check_hlds__delay_info__delay_info_init_1_0, 2,3,4,5)
MR_decl_label5(check_hlds__delay_info__delay_info_leave_conj_3_0, 2,3,4,5,6)
MR_decl_label8(check_hlds__delay_info__delay_info_wakeup_goals_3_0, 3,6,7,8,9,10,11,2)
MR_decl_label7(check_hlds__delay_info__delete_waiting_vars_4_0, 24,4,5,7,6,10,3)
MR_decl_label5(check_hlds__delay_info__remove_delayed_goals_5_0, 13,4,5,6,3)
MR_decl_label2(__Unify___check_hlds__delay_info__delay_goal_num_0_0, 4,1)
MR_decl_label5(__Unify___check_hlds__delay_info__delay_info_0_0, 4,6,8,12,1)
MR_decl_label4(__Compare___check_hlds__delay_info__delay_goal_num_0_0, 3,2,5,21)
MR_decl_label7(__Compare___check_hlds__delay_info__delay_info_0_0, 3,2,5,9,13,17,45)
MR_def_extern_entry(check_hlds__delay_info__delay_info_check_invariant_1_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_init_1_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_enter_conj_2_0)
MR_decl_static(check_hlds__delay_info__delete_waiting_vars_4_0)
MR_decl_static(check_hlds__delay_info__remove_delayed_goals_5_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_leave_conj_3_0)
MR_decl_static(check_hlds__delay_info__add_waiting_vars_5_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_delay_goal_4_0)
MR_decl_static(check_hlds__delay_info__add_pending_goals_6_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_bind_var_3_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_bind_var_list_3_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_bind_all_vars_2_0)
MR_def_extern_entry(check_hlds__delay_info__delay_info_wakeup_goals_3_0)
MR_decl_static(__Unify___check_hlds__delay_info__delay_goal_num_0_0)
MR_decl_static(__Compare___check_hlds__delay_info__delay_goal_num_0_0)
MR_def_extern_entry(__Unify___check_hlds__delay_info__delay_info_0_0)
MR_def_extern_entry(__Compare___check_hlds__delay_info__delay_info_0_0)
MR_decl_static(__Unify___check_hlds__delay_info__depth_num_0_0)
MR_decl_static(__Compare___check_hlds__delay_info__depth_num_0_0)
MR_decl_static(__Unify___check_hlds__delay_info__pending_goals_table_0_0)
MR_decl_static(__Compare___check_hlds__delay_info__pending_goals_table_0_0)
MR_decl_static(__Unify___check_hlds__delay_info__seq_num_0_0)
MR_decl_static(__Compare___check_hlds__delay_info__seq_num_0_0)
MR_decl_static(__Unify___check_hlds__delay_info__waiting_goals_0_0)
MR_decl_static(__Compare___check_hlds__delay_info__waiting_goals_0_0)
MR_decl_static(__Unify___check_hlds__delay_info__waiting_goals_table_0_0)
MR_decl_static(__Compare___check_hlds__delay_info__waiting_goals_table_0_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_108_97_121_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_97_121_95_105_110_102_111_95_99_104_101_99_107_95_105_110_118_97_114_105_97_110_116_95_95_91_49_93_95_48_1_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;
static const struct mercury_type_0 mercury_common_0[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num),
MR_TAG_COMMON(0,1,1)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[3] =
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
MR_TAG_COMMON(0,1,0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_delay_goal_num_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_info__waiting_goals_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_info__waiting_goals_table_0_0)),
	"check_hlds.delay_info",
	"waiting_goals_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_info__waiting_goals_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_info__waiting_goals_0_0)),
	"check_hlds.delay_info",
	"waiting_goals",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_seq_num_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_info__seq_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_info__seq_num_0_0)),
	"check_hlds.delay_info",
	"seq_num",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
}};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_pending_goals_table_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_info__pending_goals_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_info__pending_goals_table_0_0)),
	"check_hlds.delay_info",
	"pending_goals_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_depth_num_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_info__depth_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_info__depth_num_0_0)),
	"check_hlds.delay_info",
	"depth_num",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_check_hlds__mode_errors__type_ctor_info_delayed_goal_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0
}};

const MR_PseudoTypeInfo mercury_data_check_hlds__delay_info__field_types_delay_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1tree234__ti_tree234_2builtin__type_ctor_info_int_0check_hlds__mode_errors__type_ctor_info_delayed_goal_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0tree234__ti_tree234_2check_hlds__delay_info__type_ctor_info_delay_goal_num_0list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_check_hlds__delay_info__field_names_delay_info_0_0[] = {
	"delay_depth",
	"delay_goals",
	"delay_waiting",
	"delay_pending",
	"delay_seqs"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__delay_info__du_functor_desc_delay_info_0_0 = {
	"delay_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__delay_info__field_types_delay_info_0_0,
	mercury_data_check_hlds__delay_info__field_names_delay_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__delay_info__du_stag_ordered_delay_info_0_0[] = {
	&mercury_data_check_hlds__delay_info__du_functor_desc_delay_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__delay_info__du_ptag_ordered_delay_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__delay_info__du_stag_ordered_delay_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__delay_info__du_name_ordered_delay_info_0[] = {
	&mercury_data_check_hlds__delay_info__du_functor_desc_delay_info_0_0
};

const MR_Integer mercury_data_check_hlds__delay_info__functor_number_map_delay_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_delay_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_info__delay_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_info__delay_info_0_0)),
	"check_hlds.delay_info",
	"delay_info",
	{ (void *)mercury_data_check_hlds__delay_info__du_name_ordered_delay_info_0 },
	{ (void *)mercury_data_check_hlds__delay_info__du_ptag_ordered_delay_info_0 },
	1,
	4,
	mercury_data_check_hlds__delay_info__functor_number_map_delay_info_0
};

const MR_PseudoTypeInfo mercury_data_check_hlds__delay_info__field_types_delay_goal_num_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0 = {
	"delay_goal_num",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__delay_info__field_types_delay_goal_num_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0[] = {
	&mercury_data_check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__delay_info__du_stag_ordered_delay_goal_num_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__delay_info__du_name_ordered_delay_goal_num_0[] = {
	&mercury_data_check_hlds__delay_info__du_functor_desc_delay_goal_num_0_0
};

const MR_Integer mercury_data_check_hlds__delay_info__functor_number_map_delay_goal_num_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__delay_info__type_ctor_info_delay_goal_num_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__delay_info__delay_goal_num_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__delay_info__delay_goal_num_0_0)),
	"check_hlds.delay_info",
	"delay_goal_num",
	{ (void *)mercury_data_check_hlds__delay_info__du_name_ordered_delay_goal_num_0 },
	{ (void *)mercury_data_check_hlds__delay_info__du_ptag_ordered_delay_goal_num_0 },
	1,
	4,
	mercury_data_check_hlds__delay_info__functor_number_map_delay_goal_num_0
};


MR_BEGIN_MODULE(check_hlds__delay_info_module0)
	MR_init_entry1(check_hlds__delay_info__delay_info_check_invariant_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_check_invariant_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_108_97_121_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_97_121_95_105_110_102_111_95_99_104_101_99_107_95_105_110_118_97_114_105_97_110_116_95_95_91_49_93_95_48_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__init_1_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module1)
	MR_init_entry1(check_hlds__delay_info__delay_info_init_1_0);
	MR_init_label4(check_hlds__delay_info__delay_info_init_1_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(stack__init_1_0,
		check_hlds__delay_info__delay_info_init_1_0_i2);
MR_def_label(check_hlds__delay_info__delay_info_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__delay_info__delay_info_init_1_0_i3);
MR_def_label(check_hlds__delay_info__delay_info_init_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__delay_info__delay_info_init_1_0_i4);
MR_def_label(check_hlds__delay_info__delay_info_init_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(stack__init_1_0,
		check_hlds__delay_info__delay_info_init_1_0_i5);
MR_def_label(check_hlds__delay_info__delay_info_init_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__push_3_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module2)
	MR_init_entry1(check_hlds__delay_info__delay_info_enter_conj_2_0);
	MR_init_label3(check_hlds__delay_info__delay_info_enter_conj_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_enter_conj_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 2);
	MR_sv(4) = MR_ctfield(0, MR_r1, 3);
	MR_sv(5) = MR_ctfield(0, MR_r1, 4);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__delay_info__delay_info_enter_conj_2_0_i2);
MR_def_label(check_hlds__delay_info__delay_info_enter_conj_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(stack__push_3_0,
		check_hlds__delay_info__delay_info_enter_conj_2_0_i3);
MR_def_label(check_hlds__delay_info__delay_info_enter_conj_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(stack__push_3_0,
		check_hlds__delay_info__delay_info_enter_conj_2_0_i4);
MR_def_label(check_hlds__delay_info__delay_info_enter_conj_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(map__delete_3_0);
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(svmap__delete_3_0);
MR_decl_entry(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module3)
	MR_init_entry1(check_hlds__delay_info__delete_waiting_vars_4_0);
	MR_init_label7(check_hlds__delay_info__delete_waiting_vars_4_0,24,4,5,7,6,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_info__delete_waiting_vars_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__delay_info__delete_waiting_vars_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_info__delete_waiting_vars_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__delay_info__delete_waiting_vars_4_0_i4);
MR_def_label(check_hlds__delay_info__delete_waiting_vars_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__delete_3_0,
		check_hlds__delay_info__delete_waiting_vars_4_0_i5);
MR_def_label(check_hlds__delay_info__delete_waiting_vars_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__delay_info__delete_waiting_vars_4_0_i7);
MR_def_label(check_hlds__delay_info__delete_waiting_vars_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_info__delete_waiting_vars_4_0_i6);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(svmap__delete_3_0,
		check_hlds__delay_info__delete_waiting_vars_4_0_i10);
MR_def_label(check_hlds__delay_info__delete_waiting_vars_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__delay_info__delete_waiting_vars_4_0_i10);
MR_def_label(check_hlds__delay_info__delete_waiting_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__delay_info__delete_waiting_vars_4_0_i24);
MR_def_label(check_hlds__delay_info__delete_waiting_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(set__to_sorted_list_2_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module4)
	MR_init_entry1(check_hlds__delay_info__remove_delayed_goals_5_0);
	MR_init_label5(check_hlds__delay_info__remove_delayed_goals_5_0,13,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_info__remove_delayed_goals_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__delay_info__remove_delayed_goals_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_info__remove_delayed_goals_5_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		check_hlds__delay_info__remove_delayed_goals_5_0_i4);
MR_def_label(check_hlds__delay_info__remove_delayed_goals_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__delay_info__remove_delayed_goals_5_0_i5);
MR_def_label(check_hlds__delay_info__remove_delayed_goals_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__delay_info__delete_waiting_vars_4_0,
		check_hlds__delay_info__remove_delayed_goals_5_0_i6);
MR_def_label(check_hlds__delay_info__remove_delayed_goals_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__delay_info__remove_delayed_goals_5_0_i13);
MR_def_label(check_hlds__delay_info__remove_delayed_goals_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(stack__pop_det_3_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(map__values_2_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module5)
	MR_init_entry1(check_hlds__delay_info__delay_info_leave_conj_3_0);
	MR_init_label5(check_hlds__delay_info__delay_info_leave_conj_3_0,2,3,4,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_leave_conj_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		check_hlds__delay_info__delay_info_leave_conj_3_0_i2);
MR_def_label(check_hlds__delay_info__delay_info_leave_conj_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__delay_info__delay_info_leave_conj_3_0_i3);
MR_def_label(check_hlds__delay_info__delay_info_leave_conj_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__delay_info__remove_delayed_goals_5_0,
		check_hlds__delay_info__delay_info_leave_conj_3_0_i4);
MR_def_label(check_hlds__delay_info__delay_info_leave_conj_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		check_hlds__delay_info__delay_info_leave_conj_3_0_i5);
MR_def_label(check_hlds__delay_info__delay_info_leave_conj_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__delay_info__delay_info_leave_conj_3_0_i6);
MR_def_label(check_hlds__delay_info__delay_info_leave_conj_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module6)
	MR_init_entry1(check_hlds__delay_info__add_waiting_vars_5_0);
	MR_init_label8(check_hlds__delay_info__add_waiting_vars_5_0,21,5,4,7,8,9,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_info__add_waiting_vars_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_info__add_waiting_vars_5_0_i3);
	}
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r5 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__delay_info__add_waiting_vars_5_0_i5);
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_info__add_waiting_vars_5_0_i4);
	}
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r3 = MR_r2;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_GOTO_LAB(check_hlds__delay_info__add_waiting_vars_5_0_i8);
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__delay_info__add_waiting_vars_5_0_i7);
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(8) = MR_r2;
	MR_np_call_localret_ent(map__set_4_0,
		check_hlds__delay_info__add_waiting_vars_5_0_i9);
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(8);
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_115_118_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		check_hlds__delay_info__add_waiting_vars_5_0_i10);
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__delay_info__add_waiting_vars_5_0_i21);
MR_def_label(check_hlds__delay_info__add_waiting_vars_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module7)
	MR_init_entry1(check_hlds__delay_info__delay_info_delay_goal_4_0);
	MR_init_label7(check_hlds__delay_info__delay_info_delay_goal_4_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_delay_goal_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 0);
	MR_sv(5) = MR_ctfield(0, MR_r1, 1);
	MR_sv(6) = MR_ctfield(0, MR_r1, 2);
	MR_sv(7) = MR_ctfield(0, MR_r1, 3);
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(stack__pop_det_3_0,
		check_hlds__delay_info__delay_info_delay_goal_4_0_i2);
MR_def_label(check_hlds__delay_info__delay_info_delay_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = ((MR_Integer) MR_sv(8) + (MR_Integer) 1);
	MR_np_call_localret_ent(stack__push_3_0,
		check_hlds__delay_info__delay_info_delay_goal_4_0_i3);
MR_def_label(check_hlds__delay_info__delay_info_delay_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		check_hlds__delay_info__delay_info_delay_goal_4_0_i4);
MR_def_label(check_hlds__delay_info__delay_info_delay_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_sv(1) = MR_r2;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__delay_info__delay_info_delay_goal_4_0_i5);
MR_def_label(check_hlds__delay_info__delay_info_delay_goal_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(stack__push_3_0,
		check_hlds__delay_info__delay_info_delay_goal_4_0_i6);
MR_def_label(check_hlds__delay_info__delay_info_delay_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(8);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		check_hlds__delay_info__delay_info_delay_goal_4_0_i7);
MR_def_label(check_hlds__delay_info__delay_info_delay_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__delay_info__add_waiting_vars_5_0,
		check_hlds__delay_info__delay_info_delay_goal_4_0_i8);
MR_def_label(check_hlds__delay_info__delay_info_delay_goal_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(check_hlds__delay_info_module8)
	MR_init_entry1(check_hlds__delay_info__add_pending_goals_6_0);
	MR_init_label8(check_hlds__delay_info__add_pending_goals_6_0,22,4,5,7,9,6,11,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__delay_info__add_pending_goals_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_info__add_pending_goals_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__delay_info__add_pending_goals_6_0_i4);
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__delay_info__delete_waiting_vars_4_0,
		check_hlds__delay_info__add_pending_goals_6_0_i5);
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		check_hlds__delay_info__add_pending_goals_6_0_i7);
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_info__add_pending_goals_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__delay_info__add_pending_goals_6_0_i9);
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r2 = MR_sv(7);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__delay_info__add_pending_goals_6_0_i11);
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		check_hlds__delay_info__add_pending_goals_6_0_i11);
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(check_hlds__delay_info__add_pending_goals_6_0_i22);
MR_def_label(check_hlds__delay_info__add_pending_goals_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module9)
	MR_init_entry1(check_hlds__delay_info__delay_info_bind_var_3_0);
	MR_init_label4(check_hlds__delay_info__delay_info_bind_var_3_0,3,5,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_bind_var_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__delay_info__delay_info_bind_var_3_0_i3);
MR_def_label(check_hlds__delay_info__delay_info_bind_var_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_info__delay_info_bind_var_3_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__delay_info__delay_info_bind_var_3_0_i5);
MR_def_label(check_hlds__delay_info__delay_info_bind_var_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__delay_info__add_pending_goals_6_0,
		check_hlds__delay_info__delay_info_bind_var_3_0_i6);
MR_def_label(check_hlds__delay_info__delay_info_bind_var_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__delay_info__delay_info_bind_var_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module10)
	MR_init_entry1(check_hlds__delay_info__delay_info_bind_var_list_3_0);
	MR_init_label3(check_hlds__delay_info__delay_info_bind_var_list_3_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_bind_var_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(check_hlds__delay_info__delay_info_bind_var_list_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_info__delay_info_bind_var_list_3_0_i3);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(check_hlds__delay_info__delay_info_bind_var_3_0,
		check_hlds__delay_info__delay_info_bind_var_list_3_0_i4);
MR_def_label(check_hlds__delay_info__delay_info_bind_var_list_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(check_hlds__delay_info__delay_info_bind_var_list_3_0_i11);
MR_def_label(check_hlds__delay_info__delay_info_bind_var_list_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module11)
	MR_init_entry1(check_hlds__delay_info__delay_info_bind_all_vars_2_0);
	MR_init_label1(check_hlds__delay_info__delay_info_bind_all_vars_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_bind_all_vars_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__delay_info__delay_info_bind_all_vars_2_0_i2);
MR_def_label(check_hlds__delay_info__delay_info_bind_all_vars_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__delay_info__delay_info_bind_var_list_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module12)
	MR_init_entry1(check_hlds__delay_info__delay_info_wakeup_goals_3_0);
	MR_init_label8(check_hlds__delay_info__delay_info_wakeup_goals_3_0,3,6,7,8,9,10,11,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__delay_info__delay_info_wakeup_goals_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r1, 3);
	MR_sv(6) = MR_ctfield(0, MR_r1, 4);
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		check_hlds__delay_info__delay_info_wakeup_goals_3_0_i3);
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__delay_info__delay_info_wakeup_goals_3_0_i2);
	}
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__delay_info__delay_info_wakeup_goals_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_0,
		check_hlds__delay_info__delay_info_wakeup_goals_3_0_i6);
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(stack__pop_det_3_0,
		check_hlds__delay_info__delay_info_wakeup_goals_3_0_i7);
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_0,
		check_hlds__delay_info__delay_info_wakeup_goals_3_0_i8);
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(check_hlds__mode_errors, delayed_goal);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__delete_3_0,
		check_hlds__delay_info__delay_info_wakeup_goals_3_0_i9);
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(stack__push_3_0,
		check_hlds__delay_info__delay_info_wakeup_goals_3_0_i10);
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__delay_info__delay_info_wakeup_goals_3_0,
		check_hlds__delay_info__delay_info_wakeup_goals_3_0_i11);
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(check_hlds__delay_info__delay_info_wakeup_goals_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module13)
	MR_init_entry1(__Unify___check_hlds__delay_info__delay_goal_num_0_0);
	MR_init_label2(__Unify___check_hlds__delay_info__delay_goal_num_0_0,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_info__delay_goal_num_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_info__delay_goal_num_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_info__delay_goal_num_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___check_hlds__delay_info__delay_goal_num_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__delay_info__delay_goal_num_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module14)
	MR_init_entry1(__Compare___check_hlds__delay_info__delay_goal_num_0_0);
	MR_init_label4(__Compare___check_hlds__delay_info__delay_goal_num_0_0,3,2,5,21)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_info__delay_goal_num_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_goal_num_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_goal_num_0_0_i2);
MR_def_label(__Compare___check_hlds__delay_info__delay_goal_num_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__delay_info__delay_goal_num_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__delay_info__delay_goal_num_0_0_i5);
MR_def_label(__Compare___check_hlds__delay_info__delay_goal_num_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_goal_num_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___check_hlds__delay_info__delay_goal_num_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);
MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module15)
	MR_init_entry1(__Unify___check_hlds__delay_info__delay_info_0_0);
	MR_init_label5(__Unify___check_hlds__delay_info__delay_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__delay_info__delay_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_info__delay_info_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_info__delay_info_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_ctfield(0, MR_tempr4, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr4, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr4, 4);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_ctfield(0, MR_tempr3, 1);
	MR_r3 = MR_ctfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___check_hlds__delay_info__delay_info_0_0_i4);
MR_def_label(__Unify___check_hlds__delay_info__delay_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_info__delay_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__delay_info__delay_info_0_0_i6);
MR_def_label(__Unify___check_hlds__delay_info__delay_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_info__delay_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___check_hlds__delay_info__delay_info_0_0_i8);
MR_def_label(__Unify___check_hlds__delay_info__delay_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__delay_info__delay_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___check_hlds__delay_info__delay_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__delay_info__delay_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(check_hlds__delay_info_module16)
	MR_init_entry1(__Compare___check_hlds__delay_info__delay_info_0_0);
	MR_init_label7(__Compare___check_hlds__delay_info__delay_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__delay_info__delay_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_info_0_0_i2);
MR_def_label(__Compare___check_hlds__delay_info__delay_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__delay_info__delay_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(8) = MR_ctfield(0, MR_tempr5, 4);
	MR_sv(7) = MR_ctfield(0, MR_tempr5, 3);
	MR_sv(6) = MR_ctfield(0, MR_tempr5, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(4) = MR_ctfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_ctfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___check_hlds__delay_info__delay_info_0_0_i5);
MR_def_label(__Compare___check_hlds__delay_info__delay_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___check_hlds__delay_info__delay_info_0_0_i9);
MR_def_label(__Compare___check_hlds__delay_info__delay_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__delay_info__delay_info_0_0_i13);
MR_def_label(__Compare___check_hlds__delay_info__delay_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___check_hlds__delay_info__delay_info_0_0_i17);
MR_def_label(__Compare___check_hlds__delay_info__delay_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__delay_info__delay_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___check_hlds__delay_info__delay_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module17)
	MR_init_entry1(__Unify___check_hlds__delay_info__depth_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_info__depth_num_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module18)
	MR_init_entry1(__Compare___check_hlds__delay_info__depth_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_info__depth_num_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module19)
	MR_init_entry1(__Unify___check_hlds__delay_info__pending_goals_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_info__pending_goals_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module20)
	MR_init_entry1(__Compare___check_hlds__delay_info__pending_goals_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_info__pending_goals_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module21)
	MR_init_entry1(__Unify___check_hlds__delay_info__seq_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_info__seq_num_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module22)
	MR_init_entry1(__Compare___check_hlds__delay_info__seq_num_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_info__seq_num_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module23)
	MR_init_entry1(__Unify___check_hlds__delay_info__waiting_goals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_info__waiting_goals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module24)
	MR_init_entry1(__Compare___check_hlds__delay_info__waiting_goals_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_info__waiting_goals_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(check_hlds__delay_info, delay_goal_num);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module25)
	MR_init_entry1(__Unify___check_hlds__delay_info__waiting_goals_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__delay_info__waiting_goals_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module26)
	MR_init_entry1(__Compare___check_hlds__delay_info__waiting_goals_table_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__delay_info__waiting_goals_table_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__delay_info_module27)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_108_97_121_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_97_121_95_105_110_102_111_95_99_104_101_99_107_95_105_110_118_97_114_105_97_110_116_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_100_101_108_97_121_95_105_110_102_111_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_97_121_95_105_110_102_111_95_99_104_101_99_107_95_105_110_118_97_114_105_97_110_116_95_95_91_49_93_95_48_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__delay_info_maybe_bunch_0(void)
{
	check_hlds__delay_info_module0();
	check_hlds__delay_info_module1();
	check_hlds__delay_info_module2();
	check_hlds__delay_info_module3();
	check_hlds__delay_info_module4();
	check_hlds__delay_info_module5();
	check_hlds__delay_info_module6();
	check_hlds__delay_info_module7();
	check_hlds__delay_info_module8();
	check_hlds__delay_info_module9();
	check_hlds__delay_info_module10();
	check_hlds__delay_info_module11();
	check_hlds__delay_info_module12();
	check_hlds__delay_info_module13();
	check_hlds__delay_info_module14();
	check_hlds__delay_info_module15();
	check_hlds__delay_info_module16();
	check_hlds__delay_info_module17();
	check_hlds__delay_info_module18();
	check_hlds__delay_info_module19();
	check_hlds__delay_info_module20();
	check_hlds__delay_info_module21();
	check_hlds__delay_info_module22();
	check_hlds__delay_info_module23();
	check_hlds__delay_info_module24();
	check_hlds__delay_info_module25();
	check_hlds__delay_info_module26();
	check_hlds__delay_info_module27();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__delay_info__init(void);
void mercury__check_hlds__delay_info__init_type_tables(void);
void mercury__check_hlds__delay_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__delay_info__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__delay_info__init_complexity_procs(void);
#endif

void mercury__check_hlds__delay_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__delay_info_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_table_0,
		check_hlds__delay_info__waiting_goals_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_0,
		check_hlds__delay_info__waiting_goals_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_info__type_ctor_info_seq_num_0,
		check_hlds__delay_info__seq_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_info__type_ctor_info_pending_goals_table_0,
		check_hlds__delay_info__pending_goals_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_info__type_ctor_info_depth_num_0,
		check_hlds__delay_info__depth_num_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_info__type_ctor_info_delay_info_0,
		check_hlds__delay_info__delay_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__delay_info__type_ctor_info_delay_goal_num_0,
		check_hlds__delay_info__delay_goal_num_0_0);
	mercury__check_hlds__delay_info__init_debugger();
}

void mercury__check_hlds__delay_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_info__type_ctor_info_waiting_goals_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_info__type_ctor_info_seq_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_info__type_ctor_info_pending_goals_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_info__type_ctor_info_depth_num_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_info__type_ctor_info_delay_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__delay_info__type_ctor_info_delay_goal_num_0);
	}
}


void mercury__check_hlds__delay_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__delay_info__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__delay_info__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
