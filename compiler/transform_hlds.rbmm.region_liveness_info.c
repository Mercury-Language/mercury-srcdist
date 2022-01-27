/*
** Automatically generated from `rbmm.region_liveness_info.m'
** by the Mercury compiler,
** version rotd-2013-02-19, configured for x86_64-apple-darwin12.2.1.
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
INIT mercury__transform_hlds__rbmm__region_liveness_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.rbmm.region_liveness_info.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "transform_hlds.rbmm.region_liveness_info.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "transform_hlds.rbmm.region_liveness_info.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "transform_hlds.rbmm.region_liveness_info.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.rbmm.region_liveness_info.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.rbmm.region_liveness_info.c"
#line 49 "transform_hlds.rbmm.region_liveness_info.c"
#include "transform_hlds.rbmm.region_liveness_info.mh"

#line 52 "transform_hlds.rbmm.region_liveness_info.c"
#line 53 "transform_hlds.rbmm.region_liveness_info.c"
#ifndef TRANSFORM_HLDS__RBMM__REGION_LIVENESS_INFO_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__REGION_LIVENESS_INFO_DECL_GUARD

#line 57 "transform_hlds.rbmm.region_liveness_info.c"
#line 58 "transform_hlds.rbmm.region_liveness_info.c"

#endif
#line 61 "transform_hlds.rbmm.region_liveness_info.c"

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_table_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_region_set_table_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_varset_table_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_region_set_table_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_varset_table_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_region_set_table_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_region_set_0,
	mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_variable_set_0;
MR_decl_label4(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0, 2,3,4,5)
MR_decl_label4(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0, 2,3,4,1)
MR_decl_label6(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0, 30,4,6,7,2,1)
MR_def_extern_entry(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0)
MR_def_extern_entry(transform_hlds__rbmm__region_liveness_info__region_set_equal_2_0)
MR_decl_static(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0)
MR_def_extern_entry(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__execution_path_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__execution_path_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__region_set_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__region_set_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_liveness_info__variable_set_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_liveness_info__variable_set_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[5] =
{
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
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
MR_TAG_COMMON(0,0,1)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_TAG_COMMON(0,0,3)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__execution_path_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__execution_path_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"execution_path",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"execution_path_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1list__ti_list_1pair__ti_pair_2transform_hlds__smm_common__type_ctor_info_program_point_0hlds__hlds_goal__type_ctor_info_hlds_goal_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_region_set_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"pp_region_set_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_set_ordlist__type_ctor_info_set_ordlist_1,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_varset_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"pp_varset_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_region_set_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"proc_pp_region_set_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_varset_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"proc_pp_varset_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_region_set_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"proc_region_set_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_region_set_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__region_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__region_set_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"region_set",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_variable_set_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_liveness_info__variable_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_liveness_info__variable_set_0_0)),
	"transform_hlds.rbmm.region_liveness_info",
	"variable_set",
	{ 0 },
	{ (void *)&mercury_data_set_ordlist__ti_set_ordlist_1term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 },
	-1,
	0,
	NULL
};



MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(parse_tree__prog_data__lookup_var_types_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__arg_info__compute_in_and_out_vars_6_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module0)
	MR_init_entry1(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0);
	MR_init_label4(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'find_input_output_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0_i2);
MR_def_label(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0_i3);
MR_def_label(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_data__lookup_var_types_3_0,
		transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0_i4);
MR_def_label(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0_i5);
MR_def_label(transform_hlds__rbmm__region_liveness_info__find_input_output_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(hlds__arg_info__compute_in_and_out_vars_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__equal_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module1)
	MR_init_entry1(transform_hlds__rbmm__region_liveness_info__region_set_equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_liveness_info__region_set_equal_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'region_set_equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__region_liveness_info__region_set_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(set__equal_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module2)
	MR_init_entry1(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0);
	MR_init_label6(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0,30,4,6,7,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prst_equal_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0_i4);
MR_def_label(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0_i6);
MR_def_label(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(set__equal_2_0,
		transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0_i7);
MR_def_label(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0_i30);
MR_def_label(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__count_2_0);
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module3)
	MR_init_entry1(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0);
	MR_init_label4(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0,2,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'proc_region_set_table_equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__count_2_0,
		transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0_i2);
MR_def_label(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__count_2_0,
		transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0_i3);
MR_def_label(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0_i4);
MR_def_label(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__rbmm__region_liveness_info__prst_equal_2_3_0);
MR_def_label(transform_hlds__rbmm__region_liveness_info__proc_region_set_table_equal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module4)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__execution_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__execution_path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__execution_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
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

MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module5)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__execution_path_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__execution_path_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__execution_path_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module6)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module7)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module8)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module9)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,2);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module10)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module11)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,3);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module12)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module13)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module14)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module15)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module16)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module17)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,6);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module18)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__region_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__region_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__region_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module19)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__region_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__region_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__region_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module20)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_liveness_info__variable_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_liveness_info__variable_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_liveness_info__variable_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_liveness_info_module21)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_liveness_info__variable_set_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_liveness_info__variable_set_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_liveness_info__variable_set_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
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

static void mercury__transform_hlds__rbmm__region_liveness_info_maybe_bunch_0(void)
{
	transform_hlds__rbmm__region_liveness_info_module0();
	transform_hlds__rbmm__region_liveness_info_module1();
	transform_hlds__rbmm__region_liveness_info_module2();
	transform_hlds__rbmm__region_liveness_info_module3();
	transform_hlds__rbmm__region_liveness_info_module4();
	transform_hlds__rbmm__region_liveness_info_module5();
	transform_hlds__rbmm__region_liveness_info_module6();
	transform_hlds__rbmm__region_liveness_info_module7();
	transform_hlds__rbmm__region_liveness_info_module8();
	transform_hlds__rbmm__region_liveness_info_module9();
	transform_hlds__rbmm__region_liveness_info_module10();
	transform_hlds__rbmm__region_liveness_info_module11();
	transform_hlds__rbmm__region_liveness_info_module12();
	transform_hlds__rbmm__region_liveness_info_module13();
	transform_hlds__rbmm__region_liveness_info_module14();
	transform_hlds__rbmm__region_liveness_info_module15();
	transform_hlds__rbmm__region_liveness_info_module16();
	transform_hlds__rbmm__region_liveness_info_module17();
	transform_hlds__rbmm__region_liveness_info_module18();
	transform_hlds__rbmm__region_liveness_info_module19();
	transform_hlds__rbmm__region_liveness_info_module20();
	transform_hlds__rbmm__region_liveness_info_module21();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__region_liveness_info__init(void);
void mercury__transform_hlds__rbmm__region_liveness_info__init_type_tables(void);
void mercury__transform_hlds__rbmm__region_liveness_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__region_liveness_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__region_liveness_info__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__rbmm__region_liveness_info__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__rbmm__region_liveness_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__region_liveness_info_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_0,
		transform_hlds__rbmm__region_liveness_info__execution_path_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_table_0,
		transform_hlds__rbmm__region_liveness_info__execution_path_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_region_set_table_0,
		transform_hlds__rbmm__region_liveness_info__pp_region_set_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_varset_table_0,
		transform_hlds__rbmm__region_liveness_info__pp_varset_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_region_set_table_0,
		transform_hlds__rbmm__region_liveness_info__proc_pp_region_set_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_varset_table_0,
		transform_hlds__rbmm__region_liveness_info__proc_pp_varset_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_region_set_table_0,
		transform_hlds__rbmm__region_liveness_info__proc_region_set_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_region_set_0,
		transform_hlds__rbmm__region_liveness_info__region_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_variable_set_0,
		transform_hlds__rbmm__region_liveness_info__variable_set_0_0);
	mercury__transform_hlds__rbmm__region_liveness_info__init_debugger();
}

void mercury__transform_hlds__rbmm__region_liveness_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_execution_path_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_region_set_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_pp_varset_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_region_set_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_pp_varset_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_proc_region_set_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_region_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_liveness_info__type_ctor_info_variable_set_0);
	}
}


void mercury__transform_hlds__rbmm__region_liveness_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__region_liveness_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_layout__transform_hlds__rbmm__region_liveness_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__region_liveness_info__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__rbmm__region_liveness_info__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
