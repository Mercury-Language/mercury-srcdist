/*
** Automatically generated from `rbmm.points_to_info.m'
** by the Mercury compiler,
** version rotd-2011-08-03, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__transform_hlds__rbmm__points_to_info__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.rbmm.points_to_info.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.rbmm.points_to_info.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.rbmm.points_to_info.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.rbmm.points_to_info.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.rbmm.points_to_info.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.rbmm.points_to_info.c"
#line 49 "transform_hlds.rbmm.points_to_info.c"
#include "transform_hlds.rbmm.points_to_info.mh"

#line 52 "transform_hlds.rbmm.points_to_info.c"
#line 53 "transform_hlds.rbmm.points_to_info.c"
#ifndef TRANSFORM_HLDS__RBMM__POINTS_TO_INFO_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__POINTS_TO_INFO_DECL_GUARD

#line 57 "transform_hlds.rbmm.points_to_info.c"
#line 58 "transform_hlds.rbmm.points_to_info.c"

#endif
#line 61 "transform_hlds.rbmm.points_to_info.c"

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
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0,
	mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0,
	mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0,
	mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0;
MR_decl_label7(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0, 3,4,5,6,7,8,10)
MR_decl_label5(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0, 22,4,6,2,1)
MR_decl_label9(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0, 40,5,7,8,9,10,11,2,1)
MR_decl_label5(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0, 2,5,6,7,1)
MR_decl_label5(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0, 2,4,6,7,9)
MR_decl_label3(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0, 4,9,1)
MR_decl_label4(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0, 3,2,5,28)
MR_def_extern_entry(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_0)
MR_def_extern_entry(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0)
MR_def_extern_entry(transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_0)
MR_def_extern_entry(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0)
MR_decl_static(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0)
MR_decl_static(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0)
MR_def_extern_entry(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0)
MR_decl_static(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[3] =
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
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,0),
MR_COMMON(0,2),
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0)),
	"transform_hlds.rbmm.points_to_info",
	"rpt_alpha_mapping",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0)),
	"transform_hlds.rbmm.points_to_info",
	"rpt_call_alpha_mapping",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0tree234__ti_tree234_2transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0 = {
	"rpta_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__rbmm__points_to_info__field_types_rpta_info_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0[] = {
	&mercury_data_transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__rbmm__points_to_info__du_stag_ordered_rpta_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0[] = {
	&mercury_data_transform_hlds__rbmm__points_to_info__du_functor_desc_rpta_info_0_0
};

const MR_Integer mercury_data_transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0)),
	"transform_hlds.rbmm.points_to_info",
	"rpta_info",
	{ (void *)mercury_data_transform_hlds__rbmm__points_to_info__du_name_ordered_rpta_info_0 },
	{ (void *)mercury_data_transform_hlds__rbmm__points_to_info__du_ptag_ordered_rpta_info_0 },
	1,
	4,
	mercury_data_transform_hlds__rbmm__points_to_info__functor_number_map_rpta_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0)),
	"transform_hlds.rbmm.points_to_info",
	"rpta_info_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.points_to_info",
"transform_hlds.rbmm.points_to_info",
"add_node_from_var",
6,
0
},
"transform_hlds.rbmm.points_to_info",
"rbmm.points_to_info.m",
92,
"6"
};


MR_decl_entry(fn__map__init_0_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module0)
	MR_init_entry1(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rpta_info_table_init'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__rbmm__points_to_info__rpta_info_table_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_np_tailcall_ent(fn__map__init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__elem_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module1)
	MR_init_entry1(fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rpta_info_table_search_rpta_info'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__rbmm__points_to_info__rpta_info_table_search_rpta_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(fn__map__elem_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module2)
	MR_init_entry1(transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rpta_info_table_set_rpta_info'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__points_to_info__rpta_info_table_set_rpta_info_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(fn__f_109_97_112_95_95_101_108_101_109_32_58_61_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__keys_2_0);
MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(list__foldl2_6_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module3)
	MR_init_entry1(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0);
	MR_init_label5(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0,2,4,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rpta_info_init'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_i2);
MR_def_label(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__keys_2_0,
		fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_i4);
MR_def_label(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	}
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rpt_graph_init_0_0,
		fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_i6);
MR_def_label(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_r6 = (MR_Integer) 1;
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__foldl2_6_0,
		fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_i7);
MR_def_label(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_np_call_localret_ent(map__init_1_0,
		fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0_i9);
MR_def_label(fn__transform_hlds__rbmm__points_to_info__rpta_info_init_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__lookup_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module4)
	MR_init_entry1(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0);
	MR_init_label5(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0,22,4,6,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rpt_alpha_mapping_at_call_site_equal_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(4))) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0_i22);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__count_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module5)
	MR_init_entry1(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0);
	MR_init_label9(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,40,5,7,8,9,10,11,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rpt_alpha_mapping_equal_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i2);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = MR_tfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__count_2_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__count_2_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i9);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_at_call_site_equal_2_3_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i11);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0_i40);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_equal_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module6)
	MR_init_entry1(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0);
	MR_init_label5(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0,2,5,6,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rpta_info_equal'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 1);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_equal_2_0,
		transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0_i2);
MR_def_label(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0_i1);
	}
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__count_2_0,
		transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__count_2_0,
		transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_equal_2_3_0);
MR_def_label(transform_hlds__rbmm__points_to_info__rpta_info_equal_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__init_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_add_node_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module7)
	MR_init_entry1(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__points_to_info__add_node_from_var_6_0);
	MR_init_label7(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,3,4,5,6,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'add_node_from_var'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__rbmm__points_to_info__add_node_from_var_6_0_i3);
MR_def_label(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__rbmm__points_to_info__add_node_from_var_6_0_i4);
MR_def_label(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		transform_hlds__rbmm__points_to_info__add_node_from_var_6_0_i5);
MR_def_label(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(1) = ((MR_Integer) MR_tempr1 + (MR_Integer) 1);
	MR_r2 = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		transform_hlds__rbmm__points_to_info__add_node_from_var_6_0_i6);
MR_def_label(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("R", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		transform_hlds__rbmm__points_to_info__add_node_from_var_6_0_i7);
MR_def_label(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__points_to_info__add_node_from_var_6_0_i8);
MR_def_label(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_add_node_4_0,
		transform_hlds__rbmm__points_to_info__add_node_from_var_6_0_i10);
MR_def_label(transform_hlds__rbmm__points_to_info__add_node_from_var_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module8)
	MR_init_entry1(__Unify___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
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

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module9)
	MR_init_entry1(__Compare___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module10)
	MR_init_entry1(__Unify___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module11)
	MR_init_entry1(__Compare___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___transform_hlds__rbmm__points_to_graph__rpt_graph_0_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module12)
	MR_init_entry1(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0);
	MR_init_label3(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0_i9);
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
	MR_np_call_localret_ent(__Unify___transform_hlds__rbmm__points_to_graph__rpt_graph_0_0,
		__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___transform_hlds__rbmm__points_to_graph__rpt_graph_0_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module13)
	MR_init_entry1(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0);
	MR_init_label4(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___transform_hlds__rbmm__points_to_graph__rpt_graph_0_0,
		__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module14)
	MR_init_entry1(__Unify___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__points_to_info_module15)
	MR_init_entry1(__Compare___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__points_to_info__rpta_info_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm__points_to_info_maybe_bunch_0(void)
{
	transform_hlds__rbmm__points_to_info_module0();
	transform_hlds__rbmm__points_to_info_module1();
	transform_hlds__rbmm__points_to_info_module2();
	transform_hlds__rbmm__points_to_info_module3();
	transform_hlds__rbmm__points_to_info_module4();
	transform_hlds__rbmm__points_to_info_module5();
	transform_hlds__rbmm__points_to_info_module6();
	transform_hlds__rbmm__points_to_info_module7();
	transform_hlds__rbmm__points_to_info_module8();
	transform_hlds__rbmm__points_to_info_module9();
	transform_hlds__rbmm__points_to_info_module10();
	transform_hlds__rbmm__points_to_info_module11();
	transform_hlds__rbmm__points_to_info_module12();
	transform_hlds__rbmm__points_to_info_module13();
	transform_hlds__rbmm__points_to_info_module14();
	transform_hlds__rbmm__points_to_info_module15();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__points_to_info__init(void);
void mercury__transform_hlds__rbmm__points_to_info__init_type_tables(void);
void mercury__transform_hlds__rbmm__points_to_info__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__points_to_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__points_to_info__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__rbmm__points_to_info__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__rbmm__points_to_info__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__points_to_info_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0,
		transform_hlds__rbmm__points_to_info__rpt_alpha_mapping_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0,
		transform_hlds__rbmm__points_to_info__rpt_call_alpha_mapping_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0,
		transform_hlds__rbmm__points_to_info__rpta_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0,
		transform_hlds__rbmm__points_to_info__rpta_info_table_0_0);
	mercury__transform_hlds__rbmm__points_to_info__init_debugger();
}

void mercury__transform_hlds__rbmm__points_to_info__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_alpha_mapping_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpt_call_alpha_mapping_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_table_0);
	}
}


void mercury__transform_hlds__rbmm__points_to_info__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__points_to_info__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__rbmm__points_to_info);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__points_to_info__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__rbmm__points_to_info__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
