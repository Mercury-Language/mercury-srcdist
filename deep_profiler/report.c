/*
** Automatically generated from `report.m'
** by the Mercury compiler,
** version 10.04.2, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__report__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 268 "profile.int"
#include "profile.mh"

#line 28 "report.c"
#line 231 "mdbcomp.program_representation.int"
#include "mdbcomp.program_representation.mh"

#line 32 "report.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 36 "report.c"
#line 141 "../library/io.int2"
#include "io.mh"

#line 40 "report.c"
#line 149 "../library/io.int2"
#include "string.mh"

#line 44 "report.c"
#line 33 "mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "report.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 52 "report.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 56 "report.c"
#line 57 "report.c"
#include "report.mh"

#line 60 "report.c"
#line 61 "report.c"
#ifndef REPORT_DECL_GUARD
#define REPORT_DECL_GUARD

#line 65 "report.c"
#line 66 "report.c"

#endif
#line 69 "report.c"

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

extern const MR_TypeCtorInfo_Struct
	mercury_data_report__type_ctor_info_ancestor_desc_0,
	mercury_data_report__type_ctor_info_call_site_desc_0,
	mercury_data_report__type_ctor_info_call_site_dynamic_dump_info_0,
	mercury_data_report__type_ctor_info_call_site_perf_0,
	mercury_data_report__type_ctor_info_call_site_static_dump_info_0,
	mercury_data_report__type_ctor_info_clique_call_site_report_0,
	mercury_data_report__type_ctor_info_clique_desc_0,
	mercury_data_report__type_ctor_info_clique_dump_info_0,
	mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0,
	mercury_data_report__type_ctor_info_clique_proc_report_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_report__type_ctor_info_clique_report_0,
	mercury_data_report__type_ctor_info_data_struct_name_0,
	mercury_data_report__type_ctor_info_deep_report_0,
	mercury_data_report__type_ctor_info_field_name_0,
	mercury_data_report__type_ctor_info_getter_or_setter_0,
	mercury_data_report__type_ctor_info_gs_ds_map_1,
	mercury_data_report__type_ctor_info_gs_ds_map_0,
	mercury_data_report__type_ctor_info_gs_field_info_2,
	mercury_data_report__type_ctor_info_gs_field_info_0,
	mercury_data_report__type_ctor_info_gs_field_map_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_report__type_ctor_info_gs_field_map_0,
	mercury_data_report__type_ctor_info_inheritable_perf_0,
	mercury_data_report__type_ctor_info_menu_report_0,
	mercury_data_report__type_ctor_info_message_report_0,
	mercury_data_report__type_ctor_info_module_active_0,
	mercury_data_report__type_ctor_info_module_getter_setters_report_0,
	mercury_data_report__type_ctor_info_module_is_active_0,
	mercury_data_report__type_ctor_info_module_report_0,
	mercury_data_report__type_ctor_info_normal_callee_id_0,
	mercury_data_report__type_ctor_info_perf_row_data_1;

extern const MR_TypeCtorInfo_Struct
	mercury_data_report__type_ctor_info_proc_active_0,
	mercury_data_report__type_ctor_info_proc_callers_0,
	mercury_data_report__type_ctor_info_proc_callers_report_0,
	mercury_data_report__type_ctor_info_proc_desc_0,
	mercury_data_report__type_ctor_info_proc_dynamic_dump_info_0,
	mercury_data_report__type_ctor_info_proc_is_active_0,
	mercury_data_report__type_ctor_info_proc_report_0,
	mercury_data_report__type_ctor_info_proc_static_dump_info_0,
	mercury_data_report__type_ctor_info_proc_var_use_dump_info_0,
	mercury_data_report__type_ctor_info_procrep_coverage_info_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_report__type_ctor_info_program_modules_report_0,
	mercury_data_report__type_ctor_info_report_ordering_0,
	mercury_data_report__type_ctor_info_top_procs_report_0;
MR_decl_label3(__Unify___report__ancestor_desc_0_0, 4,8,1)
MR_decl_label3(__Unify___report__call_site_desc_0_0, 4,8,1)
MR_decl_label2(__Unify___report__call_site_dynamic_dump_info_0_0, 6,1)
MR_decl_label4(__Unify___report__call_site_perf_0_0, 4,6,11,1)
MR_decl_label2(__Unify___report__call_site_static_dump_info_0_0, 6,1)
MR_decl_label4(__Unify___report__clique_call_site_report_0_0, 4,6,11,1)
MR_decl_label3(__Unify___report__clique_desc_0_0, 4,8,1)
MR_decl_label3(__Unify___report__clique_dump_info_0_0, 4,8,1)
MR_decl_label3(__Unify___report__clique_proc_dynamic_report_0_0, 4,8,1)
MR_decl_label4(__Unify___report__clique_proc_report_0_0, 4,6,10,1)
MR_decl_label3(__Unify___report__clique_report_0_0, 5,9,1)
MR_decl_label1(__Unify___report__data_struct_name_0_0, 4)
MR_decl_label10(__Unify___report__deep_report_0_0, 5,9,13,18,22,26,30,34,38,42)
MR_decl_label7(__Unify___report__deep_report_0_0, 46,50,54,58,116,62,1)
MR_decl_label1(__Unify___report__field_name_0_0, 4)
MR_decl_label6(__Unify___report__gs_field_info_2_0, 7,9,5,29,13,1)
MR_decl_label9(__Unify___report__inheritable_perf_0_0, 4,6,8,10,12,14,16,20,1)
MR_decl_label2(__Unify___report__menu_report_0_0, 4,1)
MR_decl_label1(__Unify___report__message_report_0_0, 4)
MR_decl_label2(__Unify___report__module_active_0_0, 4,1)
MR_decl_label2(__Unify___report__module_getter_setters_report_0_0, 10,1)
MR_decl_label2(__Unify___report__module_report_0_0, 7,1)
MR_decl_label3(__Unify___report__normal_callee_id_0_0, 4,6,1)
MR_decl_label4(__Unify___report__perf_row_data_1_0, 4,6,10,1)
MR_decl_label3(__Unify___report__proc_active_0_0, 4,6,1)
MR_decl_label5(__Unify___report__proc_callers_0_0, 5,10,34,15,1)
MR_decl_label4(__Unify___report__proc_callers_report_0_0, 4,6,10,1)
MR_decl_label2(__Unify___report__proc_desc_0_0, 4,1)
MR_decl_label2(__Unify___report__proc_dynamic_dump_info_0_0, 6,1)
MR_decl_label3(__Unify___report__proc_report_0_0, 4,8,1)
MR_decl_label2(__Unify___report__proc_static_dump_info_0_0, 4,1)
MR_decl_label2(__Unify___report__proc_var_use_dump_info_0_0, 6,1)
MR_decl_label2(__Unify___report__procrep_coverage_info_0_0, 6,1)
MR_decl_label1(__Unify___report__program_modules_report_0_0, 7)
MR_decl_label3(__Unify___report__report_ordering_0_0, 4,6,1)
MR_decl_label3(__Unify___report__top_procs_report_0_0, 4,9,1)
MR_decl_label10(__Index___report__deep_report_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label5(__Index___report__deep_report_0_0, 13,14,15,16,17)
MR_decl_label6(__Compare___report__ancestor_desc_0_0, 3,2,5,9,13,37)
MR_decl_label10(__Compare___report__call_site_desc_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label2(__Compare___report__call_site_desc_0_0, 37,85)
MR_decl_label6(__Compare___report__call_site_dynamic_dump_info_0_0, 3,2,5,9,13,37)
MR_decl_label5(__Compare___report__call_site_perf_0_0, 3,2,5,9,39)
MR_decl_label8(__Compare___report__call_site_static_dump_info_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label5(__Compare___report__clique_call_site_report_0_0, 3,2,5,9,39)
MR_decl_label5(__Compare___report__clique_desc_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___report__clique_dump_info_0_0, 3,2,5,9,29)
MR_decl_label4(__Compare___report__clique_proc_dynamic_report_0_0, 3,2,5,21)
MR_decl_label5(__Compare___report__clique_proc_report_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___report__clique_report_0_0, 3,2,5,10,39)
MR_decl_label2(__Compare___report__data_struct_name_0_0, 3,2)
MR_decl_label10(__Compare___report__deep_report_0_0, 3,2,4,5,6,7,10,13,16,19)
MR_decl_label10(__Compare___report__deep_report_0_0, 22,25,28,31,34,37,40,43,46,49)
MR_decl_label2(__Compare___report__deep_report_0_0, 52,219)
MR_decl_label2(__Compare___report__field_name_0_0, 3,2)
MR_decl_label10(__Compare___report__gs_field_info_2_0, 3,2,9,13,46,5,22,49,20,26)
MR_decl_label1(__Compare___report__gs_field_info_2_0, 97)
MR_decl_label10(__Compare___report__inheritable_perf_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label5(__Compare___report__inheritable_perf_0_0, 37,41,45,49,109)
MR_decl_label10(__Compare___report__menu_report_0_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label2(__Compare___report__menu_report_0_0, 37,85)
MR_decl_label2(__Compare___report__message_report_0_0, 3,2)
MR_decl_label4(__Compare___report__module_active_0_0, 3,2,5,21)
MR_decl_label4(__Compare___report__module_getter_setters_report_0_0, 3,2,5,31)
MR_decl_label4(__Compare___report__module_report_0_0, 3,2,5,28)
MR_decl_label4(__Compare___report__normal_callee_id_0_0, 3,2,5,21)
MR_decl_label10(__Compare___report__perf_row_data_1_0, 3,2,5,9,13,17,21,25,29,33)
MR_decl_label1(__Compare___report__perf_row_data_1_0, 77)
MR_decl_label4(__Compare___report__proc_active_0_0, 3,2,5,21)
MR_decl_label10(__Compare___report__proc_callers_0_0, 3,2,7,10,5,14,15,12,21,22)
MR_decl_label6(__Compare___report__proc_callers_0_0, 19,46,27,28,48,29)
MR_decl_label8(__Compare___report__proc_callers_report_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label8(__Compare___report__proc_desc_0_0, 3,2,5,9,13,17,21,53)
MR_decl_label9(__Compare___report__proc_dynamic_dump_info_0_0, 3,2,5,9,13,17,21,25,61)
MR_decl_label4(__Compare___report__proc_report_0_0, 3,2,5,21)
MR_decl_label10(__Compare___report__proc_static_dump_info_0_0, 3,2,5,9,13,17,21,25,29,69)
MR_decl_label4(__Compare___report__proc_var_use_dump_info_0_0, 3,2,5,21)
MR_decl_label4(__Compare___report__procrep_coverage_info_0_0, 3,2,5,21)
MR_decl_label2(__Compare___report__program_modules_report_0_0, 3,2)
MR_decl_label6(__Compare___report__report_ordering_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___report__top_procs_report_0_0, 3,2,5,28)
MR_def_extern_entry(__Unify___report__ancestor_desc_0_0)
MR_def_extern_entry(__Compare___report__ancestor_desc_0_0)
MR_def_extern_entry(__Unify___report__call_site_desc_0_0)
MR_def_extern_entry(__Compare___report__call_site_desc_0_0)
MR_def_extern_entry(__Unify___report__call_site_dynamic_dump_info_0_0)
MR_def_extern_entry(__Compare___report__call_site_dynamic_dump_info_0_0)
MR_def_extern_entry(__Unify___report__call_site_perf_0_0)
MR_def_extern_entry(__Compare___report__call_site_perf_0_0)
MR_def_extern_entry(__Unify___report__call_site_static_dump_info_0_0)
MR_def_extern_entry(__Compare___report__call_site_static_dump_info_0_0)
MR_def_extern_entry(__Unify___report__clique_call_site_report_0_0)
MR_def_extern_entry(__Compare___report__clique_call_site_report_0_0)
MR_def_extern_entry(__Unify___report__clique_desc_0_0)
MR_def_extern_entry(__Compare___report__clique_desc_0_0)
MR_def_extern_entry(__Unify___report__clique_dump_info_0_0)
MR_def_extern_entry(__Compare___report__clique_dump_info_0_0)
MR_def_extern_entry(__Unify___report__clique_proc_dynamic_report_0_0)
MR_def_extern_entry(__Compare___report__clique_proc_dynamic_report_0_0)
MR_def_extern_entry(__Unify___report__clique_proc_report_0_0)
MR_def_extern_entry(__Compare___report__clique_proc_report_0_0)
MR_def_extern_entry(__Unify___report__clique_report_0_0)
MR_def_extern_entry(__Compare___report__clique_report_0_0)
MR_def_extern_entry(__Unify___report__data_struct_name_0_0)
MR_def_extern_entry(__Compare___report__data_struct_name_0_0)
MR_def_extern_entry(__Unify___report__deep_report_0_0)
MR_def_extern_entry(__Index___report__deep_report_0_0)
MR_def_extern_entry(__Compare___report__deep_report_0_0)
MR_def_extern_entry(__Unify___report__field_name_0_0)
MR_def_extern_entry(__Compare___report__field_name_0_0)
MR_def_extern_entry(__Unify___report__getter_or_setter_0_0)
MR_def_extern_entry(__Compare___report__getter_or_setter_0_0)
MR_def_extern_entry(__Unify___report__gs_ds_map_0_0)
MR_def_extern_entry(__Compare___report__gs_ds_map_0_0)
MR_def_extern_entry(__Unify___report__gs_ds_map_1_0)
MR_def_extern_entry(__Compare___report__gs_ds_map_1_0)
MR_def_extern_entry(__Unify___report__gs_field_info_0_0)
MR_def_extern_entry(__Compare___report__gs_field_info_0_0)
MR_def_extern_entry(__Unify___report__gs_field_info_2_0)
MR_def_extern_entry(__Compare___report__gs_field_info_2_0)
MR_def_extern_entry(__Unify___report__gs_field_map_0_0)
MR_def_extern_entry(__Compare___report__gs_field_map_0_0)
MR_def_extern_entry(__Unify___report__gs_field_map_1_0)
MR_def_extern_entry(__Compare___report__gs_field_map_1_0)
MR_def_extern_entry(__Unify___report__inheritable_perf_0_0)
MR_def_extern_entry(__Compare___report__inheritable_perf_0_0)
MR_def_extern_entry(__Unify___report__menu_report_0_0)
MR_def_extern_entry(__Compare___report__menu_report_0_0)
MR_def_extern_entry(__Unify___report__message_report_0_0)
MR_def_extern_entry(__Compare___report__message_report_0_0)
MR_def_extern_entry(__Unify___report__module_active_0_0)
MR_def_extern_entry(__Compare___report__module_active_0_0)
MR_def_extern_entry(__Unify___report__module_getter_setters_report_0_0)
MR_def_extern_entry(__Compare___report__module_getter_setters_report_0_0)
MR_def_extern_entry(__Unify___report__module_is_active_0_0)
MR_def_extern_entry(__Compare___report__module_is_active_0_0)
MR_def_extern_entry(__Unify___report__module_report_0_0)
MR_def_extern_entry(__Compare___report__module_report_0_0)
MR_def_extern_entry(__Unify___report__normal_callee_id_0_0)
MR_def_extern_entry(__Compare___report__normal_callee_id_0_0)
MR_def_extern_entry(__Unify___report__perf_row_data_1_0)
MR_def_extern_entry(__Compare___report__perf_row_data_1_0)
MR_def_extern_entry(__Unify___report__proc_active_0_0)
MR_def_extern_entry(__Compare___report__proc_active_0_0)
MR_def_extern_entry(__Unify___report__proc_callers_0_0)
MR_def_extern_entry(__Compare___report__proc_callers_0_0)
MR_def_extern_entry(__Unify___report__proc_callers_report_0_0)
MR_def_extern_entry(__Compare___report__proc_callers_report_0_0)
MR_def_extern_entry(__Unify___report__proc_desc_0_0)
MR_def_extern_entry(__Compare___report__proc_desc_0_0)
MR_def_extern_entry(__Unify___report__proc_dynamic_dump_info_0_0)
MR_def_extern_entry(__Compare___report__proc_dynamic_dump_info_0_0)
MR_def_extern_entry(__Unify___report__proc_is_active_0_0)
MR_def_extern_entry(__Compare___report__proc_is_active_0_0)
MR_def_extern_entry(__Unify___report__proc_report_0_0)
MR_def_extern_entry(__Compare___report__proc_report_0_0)
MR_def_extern_entry(__Unify___report__proc_static_dump_info_0_0)
MR_def_extern_entry(__Compare___report__proc_static_dump_info_0_0)
MR_def_extern_entry(__Unify___report__proc_var_use_dump_info_0_0)
MR_def_extern_entry(__Compare___report__proc_var_use_dump_info_0_0)
MR_def_extern_entry(__Unify___report__procrep_coverage_info_0_0)
MR_def_extern_entry(__Compare___report__procrep_coverage_info_0_0)
MR_def_extern_entry(__Unify___report__program_modules_report_0_0)
MR_def_extern_entry(__Compare___report__program_modules_report_0_0)
MR_def_extern_entry(__Unify___report__report_ordering_0_0)
MR_def_extern_entry(__Compare___report__report_ordering_0_0)
MR_def_extern_entry(__Unify___report__top_procs_report_0_0)
MR_def_extern_entry(__Compare___report__top_procs_report_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_0 mercury_common_0[8] =
{
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, proc_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, clique_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, ancestor_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(unit, unit)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, proc_active)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, call_site_desc)
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_STRING_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(report, perf_row_data),
MR_CTOR0_ADDR(report, module_active)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
MR_CTOR_ADDR(report, gs_field_info, 2),
MR_TAG_COMMON(0,0,0),
MR_TAG_COMMON(0,0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(report, field_name),
MR_TAG_COMMON(0,1,0)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_clique_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_desc_0;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_desc_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_ancestor_desc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_call_site_desc_0
};

const MR_ConstString mercury_data_report__field_names_ancestor_desc_0_0[] = {
	"ad_caller_clique_ptr",
	"ad_callee_clique_ptr",
	"ad_callee_pdesc",
	"ad_call_site_desc"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_ancestor_desc_0_0 = {
	"ancestor_desc",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_ancestor_desc_0_0,
	mercury_data_report__field_names_ancestor_desc_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_ancestor_desc_0_0[] = {
	&mercury_data_report__du_functor_desc_ancestor_desc_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_ancestor_desc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_ancestor_desc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_ancestor_desc_0[] = {
	&mercury_data_report__du_functor_desc_ancestor_desc_0_0
};

const MR_Integer mercury_data_report__functor_number_map_ancestor_desc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_ancestor_desc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__ancestor_desc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__ancestor_desc_0_0)),
	"report",
	"ancestor_desc",
	{ (void *)mercury_data_report__du_name_ordered_ancestor_desc_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_ancestor_desc_0 },
	1,
	4,
	mercury_data_report__functor_number_map_ancestor_desc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1report__type_ctor_info_proc_desc_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_static_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_call_site_desc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__type_ctor_info_goal_path_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1report__type_ctor_info_proc_desc_0
};

const MR_ConstString mercury_data_report__field_names_call_site_desc_0_0[] = {
	"csdesc_css_ptr",
	"csdesc_container",
	"csdesc_file_name",
	"csdesc_line_number",
	"csdesc_caller_module_name",
	"csdesc_caller_uq_refined_name",
	"csdesc_caller_q_refined_name",
	"csdesc_slot_number",
	"csdesc_goal_path",
	"csdesc_maybe_callee"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_call_site_desc_0_0 = {
	"call_site_desc",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_call_site_desc_0_0,
	mercury_data_report__field_names_call_site_desc_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_call_site_desc_0_0[] = {
	&mercury_data_report__du_functor_desc_call_site_desc_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_call_site_desc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_call_site_desc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_call_site_desc_0[] = {
	&mercury_data_report__du_functor_desc_call_site_desc_0_0
};

const MR_Integer mercury_data_report__functor_number_map_call_site_desc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_desc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__call_site_desc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__call_site_desc_0_0)),
	"report",
	"call_site_desc",
	{ (void *)mercury_data_report__du_name_ordered_call_site_desc_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_call_site_desc_0 },
	1,
	4,
	mercury_data_report__functor_number_map_call_site_desc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_call_site_desc_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_call_site_dynamic_dump_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

const MR_ConstString mercury_data_report__field_names_call_site_dynamic_dump_info_0_0[] = {
	"csddi_csdptr",
	"csddi_caller_pdptr",
	"csddi_callee_pdptr",
	"csddi_own_perf"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_call_site_dynamic_dump_info_0_0 = {
	"call_site_dynamic_dump_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_call_site_dynamic_dump_info_0_0,
	mercury_data_report__field_names_call_site_dynamic_dump_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_call_site_dynamic_dump_info_0_0[] = {
	&mercury_data_report__du_functor_desc_call_site_dynamic_dump_info_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_call_site_dynamic_dump_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_call_site_dynamic_dump_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_call_site_dynamic_dump_info_0[] = {
	&mercury_data_report__du_functor_desc_call_site_dynamic_dump_info_0_0
};

const MR_Integer mercury_data_report__functor_number_map_call_site_dynamic_dump_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_dynamic_dump_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__call_site_dynamic_dump_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__call_site_dynamic_dump_info_0_0)),
	"report",
	"call_site_dynamic_dump_info",
	{ (void *)mercury_data_report__du_name_ordered_call_site_dynamic_dump_info_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_call_site_dynamic_dump_info_0 },
	1,
	4,
	mercury_data_report__functor_number_map_call_site_dynamic_dump_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_kind_and_info_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_normal_callee_id_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0 = {
	&mercury_data_profile__type_ctor_info_call_site_kind_and_info_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_normal_callee_id_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_call_site_perf_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__ti_call_site_kind_and_info_1report__type_ctor_info_normal_callee_id_0,
	(MR_PseudoTypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

const MR_ConstString mercury_data_report__field_names_call_site_perf_0_0[] = {
	"csf_kind",
	"csf_summary_perf",
	"csf_sub_callees"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_call_site_perf_0_0 = {
	"call_site_perf",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_call_site_perf_0_0,
	mercury_data_report__field_names_call_site_perf_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_call_site_perf_0_0[] = {
	&mercury_data_report__du_functor_desc_call_site_perf_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_call_site_perf_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_call_site_perf_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_call_site_perf_0[] = {
	&mercury_data_report__du_functor_desc_call_site_perf_0_0
};

const MR_Integer mercury_data_report__functor_number_map_call_site_perf_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__call_site_perf_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__call_site_perf_0_0)),
	"report",
	"call_site_perf",
	{ (void *)mercury_data_report__du_name_ordered_call_site_perf_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_call_site_perf_0 },
	1,
	4,
	mercury_data_report__functor_number_map_call_site_perf_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_kind_and_callee_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0 = {
	&mercury_data_profile__type_ctor_info_call_site_kind_and_callee_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_call_site_static_dump_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__ti_call_site_kind_and_callee_1profile__type_ctor_info_proc_static_ptr_0
};

const MR_ConstString mercury_data_report__field_names_call_site_static_dump_info_0_0[] = {
	"cssdi_cssptr",
	"cssdi_containing_psptr",
	"cssdi_slot_number",
	"cssdi_line_number",
	"cssdi_goal_path",
	"cssdi_callee"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_call_site_static_dump_info_0_0 = {
	"call_site_static_dump_info",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_call_site_static_dump_info_0_0,
	mercury_data_report__field_names_call_site_static_dump_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_call_site_static_dump_info_0_0[] = {
	&mercury_data_report__du_functor_desc_call_site_static_dump_info_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_call_site_static_dump_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_call_site_static_dump_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_call_site_static_dump_info_0[] = {
	&mercury_data_report__du_functor_desc_call_site_static_dump_info_0_0
};

const MR_Integer mercury_data_report__functor_number_map_call_site_static_dump_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_static_dump_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__call_site_static_dump_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__call_site_static_dump_info_0_0)),
	"report",
	"call_site_static_dump_info",
	{ (void *)mercury_data_report__du_name_ordered_call_site_static_dump_info_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_call_site_static_dump_info_0 },
	1,
	4,
	mercury_data_report__functor_number_map_call_site_static_dump_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0 = {
	&mercury_data_profile__type_ctor_info_call_site_kind_and_callee_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_desc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_desc_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_clique_call_site_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__ti_call_site_kind_and_callee_1report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

const MR_ConstString mercury_data_report__field_names_clique_call_site_report_0_0[] = {
	"ccsr_call_site_summary",
	"ccsr_kind_and_callee",
	"ccsr_callee_perfs"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_clique_call_site_report_0_0 = {
	"clique_call_site_report",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_clique_call_site_report_0_0,
	mercury_data_report__field_names_clique_call_site_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_clique_call_site_report_0_0[] = {
	&mercury_data_report__du_functor_desc_clique_call_site_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_clique_call_site_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_clique_call_site_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_clique_call_site_report_0[] = {
	&mercury_data_report__du_functor_desc_clique_call_site_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_clique_call_site_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_call_site_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__clique_call_site_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__clique_call_site_report_0_0)),
	"report",
	"clique_call_site_report",
	{ (void *)mercury_data_report__du_name_ordered_clique_call_site_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_clique_call_site_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_clique_call_site_report_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__type_ctor_info_proc_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_clique_desc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__type_ctor_info_proc_desc_0
};

const MR_ConstString mercury_data_report__field_names_clique_desc_0_0[] = {
	"cdesc_clique_ptr",
	"cdesc_entry_member",
	"cdesc_other_members"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_clique_desc_0_0 = {
	"clique_desc",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_clique_desc_0_0,
	mercury_data_report__field_names_clique_desc_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_clique_desc_0_0[] = {
	&mercury_data_report__du_functor_desc_clique_desc_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_clique_desc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_clique_desc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_clique_desc_0[] = {
	&mercury_data_report__du_functor_desc_clique_desc_0_0
};

const MR_Integer mercury_data_report__functor_number_map_clique_desc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_desc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__clique_desc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__clique_desc_0_0)),
	"report",
	"clique_desc",
	{ (void *)mercury_data_report__du_name_ordered_clique_desc_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_clique_desc_0 },
	1,
	4,
	mercury_data_report__functor_number_map_clique_desc_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_clique_dump_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_clique_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_call_site_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_proc_dynamic_ptr_0
};

const MR_ConstString mercury_data_report__field_names_clique_dump_info_0_0[] = {
	"cdi_clique_desc",
	"cdi_caller_csd_ptr",
	"cdi_member_pdptrs"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_clique_dump_info_0_0 = {
	"clique_dump_info",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_clique_dump_info_0_0,
	mercury_data_report__field_names_clique_dump_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_clique_dump_info_0_0[] = {
	&mercury_data_report__du_functor_desc_clique_dump_info_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_clique_dump_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_clique_dump_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_clique_dump_info_0[] = {
	&mercury_data_report__du_functor_desc_clique_dump_info_0_0
};

const MR_Integer mercury_data_report__functor_number_map_clique_dump_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_dump_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__clique_dump_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__clique_dump_info_0_0)),
	"report",
	"clique_dump_info",
	{ (void *)mercury_data_report__du_name_ordered_clique_dump_info_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_clique_dump_info_0 },
	1,
	4,
	mercury_data_report__functor_number_map_clique_dump_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_call_site_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__type_ctor_info_clique_call_site_report_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_call_site_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_clique_proc_dynamic_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__type_ctor_info_clique_call_site_report_0
};

const MR_ConstString mercury_data_report__field_names_clique_proc_dynamic_report_0_0[] = {
	"cpdr_proc_summary",
	"cpdr_call_sites"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_clique_proc_dynamic_report_0_0 = {
	"clique_proc_dynamic_report",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_clique_proc_dynamic_report_0_0,
	mercury_data_report__field_names_clique_proc_dynamic_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_clique_proc_dynamic_report_0_0[] = {
	&mercury_data_report__du_functor_desc_clique_proc_dynamic_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_clique_proc_dynamic_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_clique_proc_dynamic_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_clique_proc_dynamic_report_0[] = {
	&mercury_data_report__du_functor_desc_clique_proc_dynamic_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_clique_proc_dynamic_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__clique_proc_dynamic_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__clique_proc_dynamic_report_0_0)),
	"report",
	"clique_proc_dynamic_report",
	{ (void *)mercury_data_report__du_name_ordered_clique_proc_dynamic_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_clique_proc_dynamic_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_clique_proc_dynamic_report_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_clique_proc_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__type_ctor_info_clique_proc_dynamic_report_0
};

const MR_ConstString mercury_data_report__field_names_clique_proc_report_0_0[] = {
	"cpr_proc_summary",
	"cpr_first_proc_dynamic",
	"cpr_other_proc_dynamics"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_clique_proc_report_0_0 = {
	"clique_proc_report",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_clique_proc_report_0_0,
	mercury_data_report__field_names_clique_proc_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_clique_proc_report_0_0[] = {
	&mercury_data_report__du_functor_desc_clique_proc_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_clique_proc_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_clique_proc_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_clique_proc_report_0[] = {
	&mercury_data_report__du_functor_desc_clique_proc_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_clique_proc_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__clique_proc_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__clique_proc_report_0_0)),
	"report",
	"clique_proc_report",
	{ (void *)mercury_data_report__du_name_ordered_clique_proc_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_clique_proc_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_clique_proc_report_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_ancestor_desc_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_ancestor_desc_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_proc_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__type_ctor_info_clique_proc_report_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_proc_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_clique_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_clique_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_ancestor_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__type_ctor_info_clique_proc_report_0
};

const MR_ConstString mercury_data_report__field_names_clique_report_0_0[] = {
	"cr_clique_ptr",
	"cr_ancestor_call_sites",
	"cr_clique_procs"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_clique_report_0_0 = {
	"clique_report",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_clique_report_0_0,
	mercury_data_report__field_names_clique_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_clique_report_0_0[] = {
	&mercury_data_report__du_functor_desc_clique_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_clique_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_clique_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_clique_report_0[] = {
	&mercury_data_report__du_functor_desc_clique_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_clique_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__clique_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__clique_report_0_0)),
	"report",
	"clique_report",
	{ (void *)mercury_data_report__du_name_ordered_clique_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_clique_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_clique_report_0
};

static const MR_NotagFunctorDesc mercury_data_report__notag_functor_desc_data_struct_name_0 = {
	"data_struct_name",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_report__functor_number_map_data_struct_name_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_data_struct_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__data_struct_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__data_struct_name_0_0)),
	"report",
	"data_struct_name",
	{ (void *)&mercury_data_report__notag_functor_desc_data_struct_name_0 },
	{ (void *)&mercury_data_report__notag_functor_desc_data_struct_name_0 },
	1,
	4,
	mercury_data_report__functor_number_map_data_struct_name_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_message_report_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_message_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_0 = {
	"report_message",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_error_1;
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_menu_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_menu_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_menu_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_menu_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_1 = {
	"report_menu",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_clique_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_clique_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_2 = {
	"report_clique",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_program_modules_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_program_modules_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_program_modules_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_program_modules_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_3 = {
	"report_program_modules",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_module_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_module_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_module_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_4 = {
	"report_module",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_getter_setters_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_module_getter_setters_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_module_getter_setters_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_module_getter_setters_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_5 = {
	"report_module_getter_setters",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_top_procs_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_top_procs_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_top_procs_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_top_procs_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_6 = {
	"report_top_procs",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_6,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_7 = {
	"report_proc",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_7,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_procrep_coverage_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_procrep_coverage_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_procrep_coverage_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_procrep_coverage_info_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_8 = {
	"report_procrep_coverage",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_8,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_callers_report_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_callers_report_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_callers_report_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_callers_report_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_9 = {
	"report_proc_callers",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_9,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_static_dump_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_static_dump_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_static_dump_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_10[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_static_dump_info_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_10 = {
	"report_proc_static_dump",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_10,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_dynamic_dump_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_dynamic_dump_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_dynamic_dump_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_dynamic_dump_info_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_11 = {
	"report_proc_dynamic_dump",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_11,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_static_dump_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_call_site_static_dump_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_call_site_static_dump_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_12[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_call_site_static_dump_info_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_12 = {
	"report_call_site_static_dump",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	9,
	12,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_12,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_dynamic_dump_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_call_site_dynamic_dump_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_call_site_dynamic_dump_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_13[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_call_site_dynamic_dump_info_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_13 = {
	"report_call_site_dynamic_dump",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	10,
	13,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_13,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_clique_dump_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_clique_dump_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_clique_dump_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_14[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_clique_dump_info_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_14 = {
	"report_clique_dump",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	11,
	14,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_14,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_var_use_dump_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_var_use_dump_info_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_error_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_var_use_dump_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_deep_report_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_error_1report__type_ctor_info_proc_var_use_dump_info_0
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_deep_report_0_15 = {
	"report_proc_var_use_dump",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	12,
	15,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_deep_report_0_15,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_deep_report_0_0[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_0

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_deep_report_0_1[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_1

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_deep_report_0_2[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_2

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_deep_report_0_3[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_3,
	&mercury_data_report__du_functor_desc_deep_report_0_4,
	&mercury_data_report__du_functor_desc_deep_report_0_5,
	&mercury_data_report__du_functor_desc_deep_report_0_6,
	&mercury_data_report__du_functor_desc_deep_report_0_7,
	&mercury_data_report__du_functor_desc_deep_report_0_8,
	&mercury_data_report__du_functor_desc_deep_report_0_9,
	&mercury_data_report__du_functor_desc_deep_report_0_10,
	&mercury_data_report__du_functor_desc_deep_report_0_11,
	&mercury_data_report__du_functor_desc_deep_report_0_12,
	&mercury_data_report__du_functor_desc_deep_report_0_13,
	&mercury_data_report__du_functor_desc_deep_report_0_14,
	&mercury_data_report__du_functor_desc_deep_report_0_15

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_deep_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_deep_report_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_deep_report_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_deep_report_0_2 },
	{ 13, MR_SECTAG_REMOTE,
	mercury_data_report__du_stag_ordered_deep_report_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_deep_report_0[] = {
	&mercury_data_report__du_functor_desc_deep_report_0_13,
	&mercury_data_report__du_functor_desc_deep_report_0_12,
	&mercury_data_report__du_functor_desc_deep_report_0_2,
	&mercury_data_report__du_functor_desc_deep_report_0_14,
	&mercury_data_report__du_functor_desc_deep_report_0_1,
	&mercury_data_report__du_functor_desc_deep_report_0_0,
	&mercury_data_report__du_functor_desc_deep_report_0_4,
	&mercury_data_report__du_functor_desc_deep_report_0_5,
	&mercury_data_report__du_functor_desc_deep_report_0_7,
	&mercury_data_report__du_functor_desc_deep_report_0_9,
	&mercury_data_report__du_functor_desc_deep_report_0_11,
	&mercury_data_report__du_functor_desc_deep_report_0_10,
	&mercury_data_report__du_functor_desc_deep_report_0_15,
	&mercury_data_report__du_functor_desc_deep_report_0_8,
	&mercury_data_report__du_functor_desc_deep_report_0_3,
	&mercury_data_report__du_functor_desc_deep_report_0_6
};

const MR_Integer mercury_data_report__functor_number_map_deep_report_0[] = {
	5,
	4,
	2,
	14,
	6,
	7,
	15,
	8,
	13,
	9,
	11,
	10,
	1,
	0,
	3,
	12 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_deep_report_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__deep_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__deep_report_0_0)),
	"report",
	"deep_report",
	{ (void *)mercury_data_report__du_name_ordered_deep_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_deep_report_0 },
	16,
	4,
	mercury_data_report__functor_number_map_deep_report_0
};

static const MR_NotagFunctorDesc mercury_data_report__notag_functor_desc_field_name_0 = {
	"field_name",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_report__functor_number_map_field_name_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_field_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__field_name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__field_name_0_0)),
	"report",
	"field_name",
	{ (void *)&mercury_data_report__notag_functor_desc_field_name_0 },
	{ (void *)&mercury_data_report__notag_functor_desc_field_name_0 },
	1,
	4,
	mercury_data_report__functor_number_map_field_name_0
};

static const MR_EnumFunctorDesc mercury_data_report__enum_functor_desc_getter_or_setter_0_0 = {
	"getter",
	0
};

static const MR_EnumFunctorDesc mercury_data_report__enum_functor_desc_getter_or_setter_0_1 = {
	"setter",
	1
};

const MR_EnumFunctorDescPtr mercury_data_report__enum_value_ordered_getter_or_setter_0[] = {
	&mercury_data_report__enum_functor_desc_getter_or_setter_0_0,
	&mercury_data_report__enum_functor_desc_getter_or_setter_0_1
};

const MR_EnumFunctorDescPtr mercury_data_report__enum_name_ordered_getter_or_setter_0[] = {
	&mercury_data_report__enum_functor_desc_getter_or_setter_0_0,
	&mercury_data_report__enum_functor_desc_getter_or_setter_0_1
};

const MR_Integer mercury_data_report__functor_number_map_getter_or_setter_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_getter_or_setter_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__getter_or_setter_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__getter_or_setter_0_0)),
	"report",
	"getter_or_setter",
	{ (void *)mercury_data_report__enum_name_ordered_getter_or_setter_0 },
	{ (void *)mercury_data_report__enum_value_ordered_getter_or_setter_0 },
	2,
	4,
	mercury_data_report__functor_number_map_getter_or_setter_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_field_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_field_name_0,
	(MR_PseudoTypeInfo) 1
}};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_data_struct_name_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury_data_tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_data_struct_name_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1
}};

const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_ds_map_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__gs_ds_map_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__gs_ds_map_1_0)),
	"report",
	"gs_ds_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_report__type_ctor_info_data_struct_name_0__pseudo_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_unit__type_ctor_info_unit_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
	&mercury_data_report__type_ctor_info_gs_field_info_2,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_field_name_0,
	(MR_TypeInfo) &mercury_data_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_data_struct_name_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
}};

const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_ds_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__gs_ds_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__gs_ds_map_0_0)),
	"report",
	"gs_ds_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_report__field_types_gs_field_info_2_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

const MR_ConstString mercury_data_report__field_names_gs_field_info_2_0[] = {
	"gsf_both_getter",
	"gsf_both_setter",
	"gsf_both_summary"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_gs_field_info_2_0 = {
	"gs_field_both",
	3,
	7,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_gs_field_info_2_0,
	mercury_data_report__field_names_gs_field_info_2_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_report__field_types_gs_field_info_2_1[] = {
	(MR_PseudoTypeInfo) 1
};

const MR_ConstString mercury_data_report__field_names_gs_field_info_2_1[] = {
	"gsf_getter"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_gs_field_info_2_1 = {
	"gs_field_getter",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_gs_field_info_2_1,
	mercury_data_report__field_names_gs_field_info_2_1,
	NULL
};

const MR_PseudoTypeInfo mercury_data_report__field_types_gs_field_info_2_2[] = {
	(MR_PseudoTypeInfo) 1
};

const MR_ConstString mercury_data_report__field_names_gs_field_info_2_2[] = {
	"gsf_setter"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_gs_field_info_2_2 = {
	"gs_field_setter",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_gs_field_info_2_2,
	mercury_data_report__field_names_gs_field_info_2_2,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_gs_field_info_2_0[] = {
	&mercury_data_report__du_functor_desc_gs_field_info_2_0

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_gs_field_info_2_1[] = {
	&mercury_data_report__du_functor_desc_gs_field_info_2_1

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_gs_field_info_2_2[] = {
	&mercury_data_report__du_functor_desc_gs_field_info_2_2

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_gs_field_info_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_gs_field_info_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_gs_field_info_2_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_gs_field_info_2_2 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_gs_field_info_2[] = {
	&mercury_data_report__du_functor_desc_gs_field_info_2_0,
	&mercury_data_report__du_functor_desc_gs_field_info_2_1,
	&mercury_data_report__du_functor_desc_gs_field_info_2_2
};

const MR_Integer mercury_data_report__functor_number_map_gs_field_info_2[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_field_info_2 = {
	2,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__gs_field_info_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__gs_field_info_2_0)),
	"report",
	"gs_field_info",
	{ (void *)mercury_data_report__du_name_ordered_gs_field_info_2 },
	{ (void *)mercury_data_report__du_ptag_ordered_gs_field_info_2 },
	3,
	4,
	mercury_data_report__functor_number_map_gs_field_info_2
};

const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_field_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__gs_field_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__gs_field_info_0_0)),
	"report",
	"gs_field_info",
	{ 0 },
	{ (void *)&mercury_data_report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_field_map_1 = {
	1,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__gs_field_map_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__gs_field_map_1_0)),
	"report",
	"gs_field_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__pti_tree234_2__plain_report__type_ctor_info_field_name_0__pseudo_1 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_gs_field_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__gs_field_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__gs_field_map_0_0)),
	"report",
	"gs_field_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_time_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_percent_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_measurement_units__type_ctor_info_memory_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_inheritable_perf_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_time_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_percent_0,
	(MR_PseudoTypeInfo) &mercury_data_measurement_units__type_ctor_info_memory_0
};

const MR_ConstString mercury_data_report__field_names_inheritable_perf_0_0[] = {
	"perf_row_ticks",
	"perf_row_time",
	"perf_row_time_percent",
	"perf_row_time_percall",
	"perf_row_callseqs",
	"perf_row_callseqs_percent",
	"perf_row_callseqs_percall",
	"perf_row_allocs",
	"perf_row_allocs_percent",
	"perf_row_allocs_percall",
	"perf_row_mem",
	"perf_row_mem_percent",
	"perf_row_mem_percall"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_inheritable_perf_0_0 = {
	"inheritable_perf",
	13,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_inheritable_perf_0_0,
	mercury_data_report__field_names_inheritable_perf_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_inheritable_perf_0_0[] = {
	&mercury_data_report__du_functor_desc_inheritable_perf_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_inheritable_perf_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_inheritable_perf_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_inheritable_perf_0[] = {
	&mercury_data_report__du_functor_desc_inheritable_perf_0_0
};

const MR_Integer mercury_data_report__functor_number_map_inheritable_perf_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_inheritable_perf_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__inheritable_perf_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__inheritable_perf_0_0)),
	"report",
	"inheritable_perf",
	{ (void *)mercury_data_report__du_name_ordered_inheritable_perf_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_inheritable_perf_0 },
	1,
	4,
	mercury_data_report__functor_number_map_inheritable_perf_0
};

const MR_PseudoTypeInfo mercury_data_report__field_types_menu_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_report__field_names_menu_report_0_0[] = {
	"menu_program_name",
	"menu_quanta_per_sec",
	"menu_user_quanta",
	"menu_inst_quanta",
	"menu_num_callseqs",
	"menu_num_csd",
	"menu_num_css",
	"menu_num_pd",
	"menu_num_ps",
	"menu_num_clique"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_menu_report_0_0 = {
	"menu_report",
	10,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_menu_report_0_0,
	mercury_data_report__field_names_menu_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_menu_report_0_0[] = {
	&mercury_data_report__du_functor_desc_menu_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_menu_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_menu_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_menu_report_0[] = {
	&mercury_data_report__du_functor_desc_menu_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_menu_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_menu_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__menu_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__menu_report_0_0)),
	"report",
	"menu_report",
	{ (void *)mercury_data_report__du_name_ordered_menu_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_menu_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_menu_report_0
};

static const MR_NotagFunctorDesc mercury_data_report__notag_functor_desc_message_report_0 = {
	"message_report",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	NULL
};

const MR_Integer mercury_data_report__functor_number_map_message_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_message_report_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__message_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__message_report_0_0)),
	"report",
	"message_report",
	{ (void *)&mercury_data_report__notag_functor_desc_message_report_0 },
	{ (void *)&mercury_data_report__notag_functor_desc_message_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_message_report_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_is_active_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_module_active_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_module_is_active_0
};

const MR_ConstString mercury_data_report__field_names_module_active_0_0[] = {
	"ma_module_name",
	"ma_is_active"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_module_active_0_0 = {
	"module_active",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_module_active_0_0,
	mercury_data_report__field_names_module_active_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_module_active_0_0[] = {
	&mercury_data_report__du_functor_desc_module_active_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_module_active_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_module_active_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_module_active_0[] = {
	&mercury_data_report__du_functor_desc_module_active_0_0
};

const MR_Integer mercury_data_report__functor_number_map_module_active_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_active_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__module_active_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__module_active_0_0)),
	"report",
	"module_active",
	{ (void *)mercury_data_report__du_name_ordered_module_active_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_module_active_0 },
	1,
	4,
	mercury_data_report__functor_number_map_module_active_0
};

const MR_PseudoTypeInfo mercury_data_report__field_types_module_getter_setters_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2report__type_ctor_info_data_struct_name_0tree234__ti_tree234_2report__type_ctor_info_field_name_0report__ti_gs_field_info_2report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0report__ti_perf_row_data_1unit__type_ctor_info_unit_0
};

const MR_ConstString mercury_data_report__field_names_module_getter_setters_report_0_0[] = {
	"mgsr_module_name",
	"mgsr_procs"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_module_getter_setters_report_0_0 = {
	"module_getter_setters_report",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_module_getter_setters_report_0_0,
	mercury_data_report__field_names_module_getter_setters_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_module_getter_setters_report_0_0[] = {
	&mercury_data_report__du_functor_desc_module_getter_setters_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_module_getter_setters_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_module_getter_setters_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_module_getter_setters_report_0[] = {
	&mercury_data_report__du_functor_desc_module_getter_setters_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_module_getter_setters_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_getter_setters_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__module_getter_setters_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__module_getter_setters_report_0_0)),
	"report",
	"module_getter_setters_report",
	{ (void *)mercury_data_report__du_name_ordered_module_getter_setters_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_module_getter_setters_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_module_getter_setters_report_0
};

static const MR_EnumFunctorDesc mercury_data_report__enum_functor_desc_module_is_active_0_0 = {
	"module_is_active",
	0
};

static const MR_EnumFunctorDesc mercury_data_report__enum_functor_desc_module_is_active_0_1 = {
	"module_is_not_active",
	1
};

const MR_EnumFunctorDescPtr mercury_data_report__enum_value_ordered_module_is_active_0[] = {
	&mercury_data_report__enum_functor_desc_module_is_active_0_0,
	&mercury_data_report__enum_functor_desc_module_is_active_0_1
};

const MR_EnumFunctorDescPtr mercury_data_report__enum_name_ordered_module_is_active_0[] = {
	&mercury_data_report__enum_functor_desc_module_is_active_0_0,
	&mercury_data_report__enum_functor_desc_module_is_active_0_1
};

const MR_Integer mercury_data_report__functor_number_map_module_is_active_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_is_active_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__module_is_active_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__module_is_active_0_0)),
	"report",
	"module_is_active",
	{ (void *)mercury_data_report__enum_name_ordered_module_is_active_0 },
	{ (void *)mercury_data_report__enum_value_ordered_module_is_active_0 },
	2,
	4,
	mercury_data_report__functor_number_map_module_is_active_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_active_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_proc_active_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_module_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_active_0
};

const MR_ConstString mercury_data_report__field_names_module_report_0_0[] = {
	"mr_module_name",
	"mr_procs"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_module_report_0_0 = {
	"module_report",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_module_report_0_0,
	mercury_data_report__field_names_module_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_module_report_0_0[] = {
	&mercury_data_report__du_functor_desc_module_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_module_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_module_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_module_report_0[] = {
	&mercury_data_report__du_functor_desc_module_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_module_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__module_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__module_report_0_0)),
	"report",
	"module_report",
	{ (void *)mercury_data_report__du_name_ordered_module_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_module_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_module_report_0
};

const MR_PseudoTypeInfo mercury_data_report__field_types_normal_callee_id_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_report__field_names_normal_callee_id_0_0[] = {
	"nci_callee_desc",
	"nci_type_subst"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_normal_callee_id_0_0 = {
	"normal_callee_id",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_normal_callee_id_0_0,
	mercury_data_report__field_names_normal_callee_id_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_normal_callee_id_0_0[] = {
	&mercury_data_report__du_functor_desc_normal_callee_id_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_normal_callee_id_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_normal_callee_id_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_normal_callee_id_0[] = {
	&mercury_data_report__du_functor_desc_normal_callee_id_0_0
};

const MR_Integer mercury_data_report__functor_number_map_normal_callee_id_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_normal_callee_id_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__normal_callee_id_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__normal_callee_id_0_0)),
	"report",
	"normal_callee_id",
	{ (void *)mercury_data_report__du_name_ordered_normal_callee_id_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_normal_callee_id_0 },
	1,
	4,
	mercury_data_report__functor_number_map_normal_callee_id_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_inheritable_perf_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_inheritable_perf_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_perf_row_data_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_inheritable_perf_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1report__type_ctor_info_inheritable_perf_0
};

const MR_ConstString mercury_data_report__field_names_perf_row_data_1_0[] = {
	"perf_row_subject",
	"perf_row_calls",
	"perf_row_exits",
	"perf_row_fails",
	"perf_row_redos",
	"perf_row_excps",
	"perf_row_bytes_per_word",
	"perf_row_self",
	"perf_row_maybe_total"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_perf_row_data_1_0 = {
	"perf_row_data",
	9,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_perf_row_data_1_0,
	mercury_data_report__field_names_perf_row_data_1_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_perf_row_data_1_0[] = {
	&mercury_data_report__du_functor_desc_perf_row_data_1_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_perf_row_data_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_perf_row_data_1_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_perf_row_data_1[] = {
	&mercury_data_report__du_functor_desc_perf_row_data_1_0
};

const MR_Integer mercury_data_report__functor_number_map_perf_row_data_1[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_perf_row_data_1 = {
	1,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__perf_row_data_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__perf_row_data_1_0)),
	"report",
	"perf_row_data",
	{ (void *)mercury_data_report__du_name_ordered_perf_row_data_1 },
	{ (void *)mercury_data_report__du_ptag_ordered_perf_row_data_1 },
	1,
	4,
	mercury_data_report__functor_number_map_perf_row_data_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_is_active_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_active_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_is_active_0
};

const MR_ConstString mercury_data_report__field_names_proc_active_0_0[] = {
	"pa_proc_desc",
	"pa_is_active"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_active_0_0 = {
	"proc_active",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_active_0_0,
	mercury_data_report__field_names_proc_active_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_active_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_active_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_active_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_active_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_active_0[] = {
	&mercury_data_report__du_functor_desc_proc_active_0_0
};

const MR_Integer mercury_data_report__functor_number_map_proc_active_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_active_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_active_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_active_0_0)),
	"report",
	"proc_active",
	{ (void *)mercury_data_report__du_name_ordered_proc_active_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_active_0 },
	1,
	4,
	mercury_data_report__functor_number_map_proc_active_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_callers_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_call_site_desc_0
};

const MR_ConstString mercury_data_report__field_names_proc_callers_0_0[] = {
	"pc_caller_call_sites"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_callers_0_0 = {
	"proc_caller_call_sites",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_callers_0_0,
	mercury_data_report__field_names_proc_callers_0_0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_callers_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

const MR_ConstString mercury_data_report__field_names_proc_callers_0_1[] = {
	"pc_caller_procedures"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_callers_0_1 = {
	"proc_caller_procedures",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_callers_0_1,
	mercury_data_report__field_names_proc_callers_0_1,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1builtin__type_ctor_info_string_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_callers_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_report__field_names_proc_callers_0_2[] = {
	"pc_caller_modules"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_callers_0_2 = {
	"proc_caller_modules",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_callers_0_2,
	mercury_data_report__field_names_proc_callers_0_2,
	NULL
};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_callers_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_clique_desc_0
};

const MR_ConstString mercury_data_report__field_names_proc_callers_0_3[] = {
	"pc_caller_cliques"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_callers_0_3 = {
	"proc_caller_cliques",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_callers_0_3,
	mercury_data_report__field_names_proc_callers_0_3,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_callers_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_callers_0_0

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_callers_0_1[] = {
	&mercury_data_report__du_functor_desc_proc_callers_0_1

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_callers_0_2[] = {
	&mercury_data_report__du_functor_desc_proc_callers_0_2

};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_callers_0_3[] = {
	&mercury_data_report__du_functor_desc_proc_callers_0_3

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_callers_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_callers_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_callers_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_callers_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_callers_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_callers_0[] = {
	&mercury_data_report__du_functor_desc_proc_callers_0_0,
	&mercury_data_report__du_functor_desc_proc_callers_0_3,
	&mercury_data_report__du_functor_desc_proc_callers_0_2,
	&mercury_data_report__du_functor_desc_proc_callers_0_1
};

const MR_Integer mercury_data_report__functor_number_map_proc_callers_0[] = {
	0,
	3,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_callers_0 = {
	0,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_callers_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_callers_0_0)),
	"report",
	"proc_callers",
	{ (void *)mercury_data_report__du_name_ordered_proc_callers_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_callers_0 },
	4,
	4,
	mercury_data_report__functor_number_map_proc_callers_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_contour_exclusion_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_callers_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_contour_exclusion_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_callers_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_proc_callers_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_contour_exclusion_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_report__field_names_proc_callers_report_0_0[] = {
	"pc_proc_desc",
	"pc_callers",
	"pc_batch_number",
	"pc_callers_per_batch",
	"pc_contour_exclusion",
	"pc_contour_warn_message"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_callers_report_0_0 = {
	"proc_callers_report",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_callers_report_0_0,
	mercury_data_report__field_names_proc_callers_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_callers_report_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_callers_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_callers_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_callers_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_callers_report_0[] = {
	&mercury_data_report__du_functor_desc_proc_callers_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_proc_callers_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_callers_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_callers_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_callers_report_0_0)),
	"report",
	"proc_callers_report",
	{ (void *)mercury_data_report__du_name_ordered_proc_callers_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_callers_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_proc_callers_report_0
};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_desc_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_report__field_names_proc_desc_0_0[] = {
	"pdesc_ps_ptr",
	"pdesc_file_name",
	"pdesc_line_number",
	"pdesc_module_name",
	"pdesc_uq_refined_name",
	"pdesc_q_refined_name"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_desc_0_0 = {
	"proc_desc",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_desc_0_0,
	mercury_data_report__field_names_proc_desc_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_desc_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_desc_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_desc_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_desc_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_desc_0[] = {
	&mercury_data_report__du_functor_desc_proc_desc_0_0
};

const MR_Integer mercury_data_report__functor_number_map_proc_desc_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_desc_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_desc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_desc_0_0)),
	"report",
	"proc_desc",
	{ (void *)mercury_data_report__du_name_ordered_proc_desc_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_desc_0 },
	1,
	4,
	mercury_data_report__functor_number_map_proc_desc_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;
extern const MR_TypeCtorInfo_Struct mercury_data_profile__type_ctor_info_call_site_array_slot_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_profile__type_ctor_info_call_site_array_slot_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_dynamic_dump_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_dynamic_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1profile__type_ctor_info_call_site_array_slot_0
};

const MR_ConstString mercury_data_report__field_names_proc_dynamic_dump_info_0_0[] = {
	"pddi_pdptr",
	"pddi_psptr",
	"pddi_ps_raw_name",
	"pddi_ps_module_name",
	"pddi_ps_uq_refined_name",
	"pddi_ps_q_refined_name",
	"pddi_call_sites"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_dynamic_dump_info_0_0 = {
	"proc_dynamic_dump_info",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_dynamic_dump_info_0_0,
	mercury_data_report__field_names_proc_dynamic_dump_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_dynamic_dump_info_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_dynamic_dump_info_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_dynamic_dump_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_dynamic_dump_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_dynamic_dump_info_0[] = {
	&mercury_data_report__du_functor_desc_proc_dynamic_dump_info_0_0
};

const MR_Integer mercury_data_report__functor_number_map_proc_dynamic_dump_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_dynamic_dump_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_dynamic_dump_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_dynamic_dump_info_0_0)),
	"report",
	"proc_dynamic_dump_info",
	{ (void *)mercury_data_report__du_name_ordered_proc_dynamic_dump_info_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_dynamic_dump_info_0 },
	1,
	4,
	mercury_data_report__functor_number_map_proc_dynamic_dump_info_0
};

static const MR_EnumFunctorDesc mercury_data_report__enum_functor_desc_proc_is_active_0_0 = {
	"proc_is_active",
	0
};

static const MR_EnumFunctorDesc mercury_data_report__enum_functor_desc_proc_is_active_0_1 = {
	"proc_is_not_active",
	1
};

const MR_EnumFunctorDescPtr mercury_data_report__enum_value_ordered_proc_is_active_0[] = {
	&mercury_data_report__enum_functor_desc_proc_is_active_0_0,
	&mercury_data_report__enum_functor_desc_proc_is_active_0_1
};

const MR_EnumFunctorDescPtr mercury_data_report__enum_name_ordered_proc_is_active_0[] = {
	&mercury_data_report__enum_functor_desc_proc_is_active_0_0,
	&mercury_data_report__enum_functor_desc_proc_is_active_0_1
};

const MR_Integer mercury_data_report__functor_number_map_proc_is_active_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_is_active_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_is_active_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_is_active_0_0)),
	"report",
	"proc_is_active",
	{ (void *)mercury_data_report__enum_name_ordered_proc_is_active_0 },
	{ (void *)mercury_data_report__enum_value_ordered_proc_is_active_0 },
	2,
	4,
	mercury_data_report__functor_number_map_proc_is_active_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_call_site_perf_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__type_ctor_info_call_site_perf_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_call_site_perf_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__type_ctor_info_call_site_perf_0
};

const MR_ConstString mercury_data_report__field_names_proc_report_0_0[] = {
	"proc_summary",
	"proc_call_site_summaries"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_report_0_0 = {
	"proc_report",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_report_0_0,
	mercury_data_report__field_names_proc_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_report_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_report_0[] = {
	&mercury_data_report__du_functor_desc_proc_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_proc_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_report_0_0)),
	"report",
	"proc_report",
	{ (void *)mercury_data_report__du_name_ordered_proc_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_proc_report_0
};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_static_dump_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_report__field_names_proc_static_dump_info_0_0[] = {
	"psdi_psptr",
	"psdi_raw_name",
	"psdi_uq_refined_name",
	"psdi_q_refined_name",
	"psdi_filename",
	"psdi_linenumber",
	"psdi_num_call_sites",
	"psdi_num_coverage_points"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_static_dump_info_0_0 = {
	"proc_static_dump_info",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_static_dump_info_0_0,
	mercury_data_report__field_names_proc_static_dump_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_static_dump_info_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_static_dump_info_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_static_dump_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_static_dump_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_static_dump_info_0[] = {
	&mercury_data_report__du_functor_desc_proc_static_dump_info_0_0
};

const MR_Integer mercury_data_report__functor_number_map_proc_static_dump_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_static_dump_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_static_dump_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_static_dump_info_0_0)),
	"report",
	"proc_static_dump_info",
	{ (void *)mercury_data_report__du_name_ordered_proc_static_dump_info_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_static_dump_info_0 },
	1,
	4,
	mercury_data_report__functor_number_map_proc_static_dump_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_var_use_analysis__type_ctor_info_var_use_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1var_use_analysis__type_ctor_info_var_use_info_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_var_use_analysis__type_ctor_info_var_use_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_proc_var_use_dump_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1var_use_analysis__type_ctor_info_var_use_info_0
};

const MR_ConstString mercury_data_report__field_names_proc_var_use_dump_info_0_0[] = {
	"pvui_total_proc_time",
	"pvui_var_uses"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_proc_var_use_dump_info_0_0 = {
	"proc_var_use_dump_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_proc_var_use_dump_info_0_0,
	mercury_data_report__field_names_proc_var_use_dump_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_proc_var_use_dump_info_0_0[] = {
	&mercury_data_report__du_functor_desc_proc_var_use_dump_info_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_proc_var_use_dump_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_proc_var_use_dump_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_proc_var_use_dump_info_0[] = {
	&mercury_data_report__du_functor_desc_proc_var_use_dump_info_0_0
};

const MR_Integer mercury_data_report__functor_number_map_proc_var_use_dump_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_proc_var_use_dump_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__proc_var_use_dump_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__proc_var_use_dump_info_0_0)),
	"report",
	"proc_var_use_dump_info",
	{ (void *)mercury_data_report__du_name_ordered_proc_var_use_dump_info_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_proc_var_use_dump_info_0 },
	1,
	4,
	mercury_data_report__functor_number_map_proc_var_use_dump_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_1;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_coverage__type_ctor_info_coverage_info_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_mdbcomp__program_representation__ti_proc_rep_1coverage__type_ctor_info_coverage_info_0 = {
	&mercury_data_mdbcomp__program_representation__type_ctor_info_proc_rep_1,
{	(MR_TypeInfo) &mercury_data_coverage__type_ctor_info_coverage_info_0
}};

const MR_PseudoTypeInfo mercury_data_report__field_types_procrep_coverage_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_profile__type_ctor_info_proc_static_ptr_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__program_representation__ti_proc_rep_1coverage__type_ctor_info_coverage_info_0
};

const MR_ConstString mercury_data_report__field_names_procrep_coverage_info_0_0[] = {
	"prci_proc",
	"prci_proc_rep"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_procrep_coverage_info_0_0 = {
	"procrep_coverage_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_procrep_coverage_info_0_0,
	mercury_data_report__field_names_procrep_coverage_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_procrep_coverage_info_0_0[] = {
	&mercury_data_report__du_functor_desc_procrep_coverage_info_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_procrep_coverage_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_procrep_coverage_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_procrep_coverage_info_0[] = {
	&mercury_data_report__du_functor_desc_procrep_coverage_info_0_0
};

const MR_Integer mercury_data_report__functor_number_map_procrep_coverage_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_procrep_coverage_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__procrep_coverage_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__procrep_coverage_info_0_0)),
	"report",
	"procrep_coverage_info",
	{ (void *)mercury_data_report__du_name_ordered_procrep_coverage_info_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_procrep_coverage_info_0 },
	1,
	4,
	mercury_data_report__functor_number_map_procrep_coverage_info_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_module_active_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
	&mercury_data_report__type_ctor_info_perf_row_data_1,
{	(MR_TypeInfo) &mercury_data_report__type_ctor_info_module_active_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_report__ti_perf_row_data_1report__type_ctor_info_module_active_0
}};

static const MR_NotagFunctorDesc mercury_data_report__notag_functor_desc_program_modules_report_0 = {
	"program_modules_report",
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_module_active_0,
	"program_modules"
};

const MR_Integer mercury_data_report__functor_number_map_program_modules_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_program_modules_report_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__program_modules_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__program_modules_report_0_0)),
	"report",
	"program_modules_report",
	{ (void *)&mercury_data_report__notag_functor_desc_program_modules_report_0 },
	{ (void *)&mercury_data_report__notag_functor_desc_program_modules_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_program_modules_report_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_include_descendants_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_measurement_scope_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_display_limit_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_cost_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_include_descendants_0;
extern const MR_TypeCtorInfo_Struct mercury_data_query__type_ctor_info_measurement_scope_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_report_ordering_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_display_limit_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_cost_kind_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_include_descendants_0,
	(MR_PseudoTypeInfo) &mercury_data_query__type_ctor_info_measurement_scope_0
};

const MR_ConstString mercury_data_report__field_names_report_ordering_0_0[] = {
	"display_limit",
	"cost_kind",
	"incl_desc",
	"scope"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_report_ordering_0_0 = {
	"report_ordering",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_report_ordering_0_0,
	mercury_data_report__field_names_report_ordering_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_report_ordering_0_0[] = {
	&mercury_data_report__du_functor_desc_report_ordering_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_report_ordering_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_report_ordering_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_report_ordering_0[] = {
	&mercury_data_report__du_functor_desc_report_ordering_0_0
};

const MR_Integer mercury_data_report__functor_number_map_report_ordering_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_ordering_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__report_ordering_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__report_ordering_0_0)),
	"report",
	"report_ordering",
	{ (void *)mercury_data_report__du_name_ordered_report_ordering_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_report_ordering_0 },
	1,
	4,
	mercury_data_report__functor_number_map_report_ordering_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_report_ordering_0;

const MR_PseudoTypeInfo mercury_data_report__field_types_top_procs_report_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_report__type_ctor_info_report_ordering_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1report__ti_perf_row_data_1report__type_ctor_info_proc_desc_0
};

const MR_ConstString mercury_data_report__field_names_top_procs_report_0_0[] = {
	"tp_ordering",
	"tp_top_procs"
};

static const MR_DuFunctorDesc mercury_data_report__du_functor_desc_top_procs_report_0_0 = {
	"top_procs_report",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_report__field_types_top_procs_report_0_0,
	mercury_data_report__field_names_top_procs_report_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_report__du_stag_ordered_top_procs_report_0_0[] = {
	&mercury_data_report__du_functor_desc_top_procs_report_0_0

};

const MR_DuPtagLayout mercury_data_report__du_ptag_ordered_top_procs_report_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_report__du_stag_ordered_top_procs_report_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_report__du_name_ordered_top_procs_report_0[] = {
	&mercury_data_report__du_functor_desc_top_procs_report_0_0
};

const MR_Integer mercury_data_report__functor_number_map_top_procs_report_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_report__type_ctor_info_top_procs_report_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___report__top_procs_report_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___report__top_procs_report_0_0)),
	"report",
	"top_procs_report",
	{ (void *)mercury_data_report__du_name_ordered_top_procs_report_0 },
	{ (void *)mercury_data_report__du_ptag_ordered_top_procs_report_0 },
	1,
	4,
	mercury_data_report__functor_number_map_top_procs_report_0
};




MR_BEGIN_MODULE(report_module0)
	MR_init_entry1(__Unify___report__ancestor_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__ancestor_desc_0_0);
	MR_init_label3(__Unify___report__ancestor_desc_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__ancestor_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__ancestor_desc_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__ancestor_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__ancestor_desc_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 3);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = MR_tfield(0, MR_tempr3, 2);
	MR_r2 = MR_tfield(0, MR_tempr4, 2);
	}
	MR_np_call_localret_ent(__Unify___report__proc_desc_0_0,
		__Unify___report__ancestor_desc_0_0_i4);
MR_def_label(__Unify___report__ancestor_desc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__ancestor_desc_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___report__call_site_desc_0_0);
MR_def_label(__Unify___report__ancestor_desc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__ancestor_desc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(report_module1)
	MR_init_entry1(__Compare___report__ancestor_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__ancestor_desc_0_0);
	MR_init_label6(__Compare___report__ancestor_desc_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__ancestor_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__ancestor_desc_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__ancestor_desc_0_0_i2);
MR_def_label(__Compare___report__ancestor_desc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__ancestor_desc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__ancestor_desc_0_0_i5);
MR_def_label(__Compare___report__ancestor_desc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__ancestor_desc_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__ancestor_desc_0_0_i9);
MR_def_label(__Compare___report__ancestor_desc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__ancestor_desc_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___report__proc_desc_0_0,
		__Compare___report__ancestor_desc_0_0_i13);
MR_def_label(__Compare___report__ancestor_desc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__ancestor_desc_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___report__call_site_desc_0_0);
MR_def_label(__Compare___report__ancestor_desc_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__goal_path_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);

MR_BEGIN_MODULE(report_module2)
	MR_init_entry1(__Unify___report__call_site_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__call_site_desc_0_0);
	MR_init_label3(__Unify___report__call_site_desc_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__call_site_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 4);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 5);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 5);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 6);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 6);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 7);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 9);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 9);
	MR_r1 = MR_tfield(0, MR_tempr3, 8);
	MR_r2 = MR_tfield(0, MR_tempr4, 8);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__program_representation__goal_path_0_0,
		__Unify___report__call_site_desc_0_0_i4);
MR_def_label(__Unify___report__call_site_desc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__call_site_desc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___report__call_site_desc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__call_site_desc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___mdbcomp__program_representation__goal_path_0_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);

MR_BEGIN_MODULE(report_module3)
	MR_init_entry1(__Compare___report__call_site_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__call_site_desc_0_0);
	MR_init_label10(__Compare___report__call_site_desc_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label2(__Compare___report__call_site_desc_0_0,37,85)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__call_site_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i2);
MR_def_label(__Compare___report__call_site_desc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__call_site_desc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__call_site_desc_0_0_i5);
MR_def_label(__Compare___report__call_site_desc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_desc_0_0_i9);
MR_def_label(__Compare___report__call_site_desc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__call_site_desc_0_0_i13);
MR_def_label(__Compare___report__call_site_desc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_desc_0_0_i17);
MR_def_label(__Compare___report__call_site_desc_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__call_site_desc_0_0_i21);
MR_def_label(__Compare___report__call_site_desc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__call_site_desc_0_0_i25);
MR_def_label(__Compare___report__call_site_desc_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__call_site_desc_0_0_i29);
MR_def_label(__Compare___report__call_site_desc_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_desc_0_0_i33);
MR_def_label(__Compare___report__call_site_desc_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___mdbcomp__program_representation__goal_path_0_0,
		__Compare___report__call_site_desc_0_0_i37);
MR_def_label(__Compare___report__call_site_desc_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_desc_0_0_i85);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___report__call_site_desc_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module4)
	MR_init_entry1(__Unify___report__call_site_dynamic_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__call_site_dynamic_dump_info_0_0);
	MR_init_label2(__Unify___report__call_site_dynamic_dump_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__call_site_dynamic_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__call_site_dynamic_dump_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_dynamic_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_dynamic_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_dynamic_dump_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_desc);
	MR_r2 = MR_tfield(0, MR_tempr1, 3);
	MR_r3 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___report__perf_row_data_1_0);
	}
MR_def_label(__Unify___report__call_site_dynamic_dump_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__call_site_dynamic_dump_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module5)
	MR_init_entry1(__Compare___report__call_site_dynamic_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__call_site_dynamic_dump_info_0_0);
	MR_init_label6(__Compare___report__call_site_dynamic_dump_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__call_site_dynamic_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__call_site_dynamic_dump_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__call_site_dynamic_dump_info_0_0_i2);
MR_def_label(__Compare___report__call_site_dynamic_dump_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__call_site_dynamic_dump_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__call_site_dynamic_dump_info_0_0_i5);
MR_def_label(__Compare___report__call_site_dynamic_dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_dynamic_dump_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_dynamic_dump_info_0_0_i9);
MR_def_label(__Compare___report__call_site_dynamic_dump_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_dynamic_dump_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_dynamic_dump_info_0_0_i13);
MR_def_label(__Compare___report__call_site_dynamic_dump_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_dynamic_dump_info_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_desc);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___report__perf_row_data_1_0);
MR_def_label(__Compare___report__call_site_dynamic_dump_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___profile__call_site_kind_and_info_1_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(report_module6)
	MR_init_entry1(__Unify___report__call_site_perf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__call_site_perf_0_0);
	MR_init_label4(__Unify___report__call_site_perf_0_0,4,6,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__call_site_perf_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__call_site_perf_0_0_i11);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, normal_callee_id);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___profile__call_site_kind_and_info_1_0,
		__Unify___report__call_site_perf_0_0_i4);
MR_def_label(__Unify___report__call_site_perf_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__call_site_perf_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_desc);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___report__perf_row_data_1_0,
		__Unify___report__call_site_perf_0_0_i6);
MR_def_label(__Unify___report__call_site_perf_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__call_site_perf_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__call_site_perf_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__call_site_perf_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___profile__call_site_kind_and_info_1_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(report_module7)
	MR_init_entry1(__Compare___report__call_site_perf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__call_site_perf_0_0);
	MR_init_label5(__Compare___report__call_site_perf_0_0,3,2,5,9,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__call_site_perf_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__call_site_perf_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__call_site_perf_0_0_i2);
MR_def_label(__Compare___report__call_site_perf_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__call_site_perf_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, normal_callee_id);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___profile__call_site_kind_and_info_1_0,
		__Compare___report__call_site_perf_0_0_i5);
MR_def_label(__Compare___report__call_site_perf_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_perf_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_desc);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___report__perf_row_data_1_0,
		__Compare___report__call_site_perf_0_0_i9);
MR_def_label(__Compare___report__call_site_perf_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_perf_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__call_site_perf_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___profile__call_site_kind_and_callee_1_0);

MR_BEGIN_MODULE(report_module8)
	MR_init_entry1(__Unify___report__call_site_static_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__call_site_static_dump_info_0_0);
	MR_init_label2(__Unify___report__call_site_static_dump_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__call_site_static_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__call_site_static_dump_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_static_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_static_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 4);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__call_site_static_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_static_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__call_site_static_dump_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_tfield(0, MR_tempr1, 5);
	MR_r3 = MR_tfield(0, MR_tempr2, 5);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___profile__call_site_kind_and_callee_1_0);
	}
MR_def_label(__Unify___report__call_site_static_dump_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__call_site_static_dump_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___profile__call_site_kind_and_callee_1_0);

MR_BEGIN_MODULE(report_module9)
	MR_init_entry1(__Compare___report__call_site_static_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__call_site_static_dump_info_0_0);
	MR_init_label8(__Compare___report__call_site_static_dump_info_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__call_site_static_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__call_site_static_dump_info_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__call_site_static_dump_info_0_0_i2);
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__call_site_static_dump_info_0_0_i5);
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_static_dump_info_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_static_dump_info_0_0_i9);
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_static_dump_info_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_static_dump_info_0_0_i13);
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_static_dump_info_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__call_site_static_dump_info_0_0_i17);
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_static_dump_info_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__call_site_static_dump_info_0_0_i21);
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__call_site_static_dump_info_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_static_ptr);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___profile__call_site_kind_and_callee_1_0);
MR_def_label(__Compare___report__call_site_static_dump_info_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module10)
	MR_init_entry1(__Unify___report__clique_call_site_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__clique_call_site_report_0_0);
	MR_init_label4(__Unify___report__clique_call_site_report_0_0,4,6,11,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__clique_call_site_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__clique_call_site_report_0_0_i11);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_desc);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___report__perf_row_data_1_0,
		__Unify___report__clique_call_site_report_0_0_i4);
MR_def_label(__Unify___report__clique_call_site_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_call_site_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___profile__call_site_kind_and_callee_1_0,
		__Unify___report__clique_call_site_report_0_0_i6);
MR_def_label(__Unify___report__clique_call_site_report_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_call_site_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__clique_call_site_report_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__clique_call_site_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module11)
	MR_init_entry1(__Compare___report__clique_call_site_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__clique_call_site_report_0_0);
	MR_init_label5(__Compare___report__clique_call_site_report_0_0,3,2,5,9,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__clique_call_site_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__clique_call_site_report_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__clique_call_site_report_0_0_i2);
MR_def_label(__Compare___report__clique_call_site_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__clique_call_site_report_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_desc);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___report__perf_row_data_1_0,
		__Compare___report__clique_call_site_report_0_0_i5);
MR_def_label(__Compare___report__clique_call_site_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_call_site_report_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___profile__call_site_kind_and_callee_1_0,
		__Compare___report__clique_call_site_report_0_0_i9);
MR_def_label(__Compare___report__clique_call_site_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_call_site_report_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__clique_call_site_report_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module12)
	MR_init_entry1(__Unify___report__clique_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__clique_desc_0_0);
	MR_init_label3(__Unify___report__clique_desc_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__clique_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__clique_desc_0_0_i8);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__clique_desc_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___report__proc_desc_0_0,
		__Unify___report__clique_desc_0_0_i4);
MR_def_label(__Unify___report__clique_desc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_desc_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__clique_desc_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__clique_desc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module13)
	MR_init_entry1(__Compare___report__clique_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__clique_desc_0_0);
	MR_init_label5(__Compare___report__clique_desc_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__clique_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__clique_desc_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__clique_desc_0_0_i2);
MR_def_label(__Compare___report__clique_desc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__clique_desc_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__clique_desc_0_0_i5);
MR_def_label(__Compare___report__clique_desc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_desc_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___report__proc_desc_0_0,
		__Compare___report__clique_desc_0_0_i9);
MR_def_label(__Compare___report__clique_desc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_desc_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__clique_desc_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module14)
	MR_init_entry1(__Unify___report__clique_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__clique_dump_info_0_0);
	MR_init_label3(__Unify___report__clique_dump_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__clique_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__clique_dump_info_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___report__clique_desc_0_0,
		__Unify___report__clique_dump_info_0_0_i4);
MR_def_label(__Unify___report__clique_dump_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_dump_info_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(3))) {
		MR_GOTO_LAB(__Unify___report__clique_dump_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__clique_dump_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__clique_dump_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module15)
	MR_init_entry1(__Compare___report__clique_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__clique_dump_info_0_0);
	MR_init_label5(__Compare___report__clique_dump_info_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__clique_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__clique_dump_info_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__clique_dump_info_0_0_i2);
MR_def_label(__Compare___report__clique_dump_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__clique_dump_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___report__clique_desc_0_0,
		__Compare___report__clique_dump_info_0_0_i5);
MR_def_label(__Compare___report__clique_dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_dump_info_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__clique_dump_info_0_0_i9);
MR_def_label(__Compare___report__clique_dump_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_dump_info_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, proc_dynamic_ptr);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__clique_dump_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module16)
	MR_init_entry1(__Unify___report__clique_proc_dynamic_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__clique_proc_dynamic_report_0_0);
	MR_init_label3(__Unify___report__clique_proc_dynamic_report_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__clique_proc_dynamic_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__clique_proc_dynamic_report_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___report__perf_row_data_1_0,
		__Unify___report__clique_proc_dynamic_report_0_0_i4);
MR_def_label(__Unify___report__clique_proc_dynamic_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_proc_dynamic_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__clique_proc_dynamic_report_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__clique_proc_dynamic_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module17)
	MR_init_entry1(__Compare___report__clique_proc_dynamic_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__clique_proc_dynamic_report_0_0);
	MR_init_label4(__Compare___report__clique_proc_dynamic_report_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__clique_proc_dynamic_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__clique_proc_dynamic_report_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__clique_proc_dynamic_report_0_0_i2);
MR_def_label(__Compare___report__clique_proc_dynamic_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__clique_proc_dynamic_report_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___report__perf_row_data_1_0,
		__Compare___report__clique_proc_dynamic_report_0_0_i5);
MR_def_label(__Compare___report__clique_proc_dynamic_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_proc_dynamic_report_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_call_site_report);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__clique_proc_dynamic_report_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module18)
	MR_init_entry1(__Unify___report__clique_proc_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__clique_proc_report_0_0);
	MR_init_label4(__Unify___report__clique_proc_report_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__clique_proc_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__clique_proc_report_0_0_i10);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___report__perf_row_data_1_0,
		__Unify___report__clique_proc_report_0_0_i4);
MR_def_label(__Unify___report__clique_proc_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_proc_report_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___report__clique_proc_dynamic_report_0_0,
		__Unify___report__clique_proc_report_0_0_i6);
MR_def_label(__Unify___report__clique_proc_report_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_proc_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_dynamic_report);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__clique_proc_report_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__clique_proc_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module19)
	MR_init_entry1(__Compare___report__clique_proc_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__clique_proc_report_0_0);
	MR_init_label5(__Compare___report__clique_proc_report_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__clique_proc_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__clique_proc_report_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__clique_proc_report_0_0_i2);
MR_def_label(__Compare___report__clique_proc_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__clique_proc_report_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___report__perf_row_data_1_0,
		__Compare___report__clique_proc_report_0_0_i5);
MR_def_label(__Compare___report__clique_proc_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_proc_report_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___report__clique_proc_dynamic_report_0_0,
		__Compare___report__clique_proc_report_0_0_i9);
MR_def_label(__Compare___report__clique_proc_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_proc_report_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_dynamic_report);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__clique_proc_report_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module20)
	MR_init_entry1(__Unify___report__clique_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__clique_report_0_0);
	MR_init_label3(__Unify___report__clique_report_0_0,5,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__clique_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__clique_report_0_0_i9);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__clique_report_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr4, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___report__clique_report_0_0_i5);
MR_def_label(__Unify___report__clique_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__clique_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__clique_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__clique_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module21)
	MR_init_entry1(__Compare___report__clique_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__clique_report_0_0);
	MR_init_label5(__Compare___report__clique_report_0_0,3,2,5,10,39)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__clique_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__clique_report_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__clique_report_0_0_i2);
MR_def_label(__Compare___report__clique_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__clique_report_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__clique_report_0_0_i5);
MR_def_label(__Compare___report__clique_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_report_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___report__clique_report_0_0_i10);
MR_def_label(__Compare___report__clique_report_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__clique_report_0_0_i39);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_proc_report);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__clique_report_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module22)
	MR_init_entry1(__Unify___report__data_struct_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__data_struct_name_0_0);
	MR_init_label1(__Unify___report__data_struct_name_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__data_struct_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__data_struct_name_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___report__data_struct_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module23)
	MR_init_entry1(__Compare___report__data_struct_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__data_struct_name_0_0);
	MR_init_label2(__Compare___report__data_struct_name_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__data_struct_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__data_struct_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__data_struct_name_0_0_i2);
MR_def_label(__Compare___report__data_struct_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__data_struct_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___maybe__maybe_error_1_0);

MR_BEGIN_MODULE(report_module24)
	MR_init_entry1(__Unify___report__deep_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__deep_report_0_0);
	MR_init_label10(__Unify___report__deep_report_0_0,5,9,13,18,22,26,30,34,38,42)
	MR_init_label7(__Unify___report__deep_report_0_0,46,50,54,58,116,62,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__deep_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i116);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_report);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	MR_r3 = MR_tfield(2, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
	}
MR_def_label(__Unify___report__deep_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, menu_report);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 0);
	MR_tempr2 = MR_tfield(0, MR_sv(1), 0);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i116);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___report__deep_report_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i18);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_dynamic_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_static_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i26);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i30);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, module_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i34);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, module_getter_setters_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i38);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i42);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_callers_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i46);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_dynamic_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i50);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_static_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i54);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_var_use_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i58);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, procrep_coverage_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i62);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, program_modules_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__deep_report_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___report__deep_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, top_procs_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___maybe__maybe_error_1_0);
MR_def_label(__Unify___report__deep_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module25)
	MR_init_entry1(__Index___report__deep_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___report__deep_report_0_0);
	MR_init_label10(__Index___report__deep_report_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label5(__Index___report__deep_report_0_0,13,14,15,16,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___report__deep_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i3);
	}
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i4);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i5);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,10)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i6);
	}
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,9)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i7);
	}
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,11)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i8);
	}
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i9);
	}
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i10);
	}
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i11);
	}
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,6)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i12);
	}
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,8)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i13);
	}
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,7)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i14);
	}
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,12)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i15);
	}
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i16);
	}
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(__Index___report__deep_report_0_0_i17);
	}
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___report__deep_report_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___maybe__maybe_error_1_0);
MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(report_module26)
	MR_init_entry1(__Compare___report__deep_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__deep_report_0_0);
	MR_init_label10(__Compare___report__deep_report_0_0,3,2,4,5,6,7,10,13,16,19)
	MR_init_label10(__Compare___report__deep_report_0_0,22,25,28,31,34,37,40,43,46,49)
	MR_init_label2(__Compare___report__deep_report_0_0,52,219)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__deep_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__deep_report_0_0_i2);
MR_def_label(__Compare___report__deep_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__deep_report_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(__Index___report__deep_report_0_0,
		__Compare___report__deep_report_0_0_i4);
MR_def_label(__Compare___report__deep_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___report__deep_report_0_0,
		__Compare___report__deep_report_0_0_i5);
MR_def_label(__Compare___report__deep_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___report__deep_report_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___report__deep_report_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_report);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, menu_report);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___report__deep_report_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,10)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i19);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,10)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_dynamic_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,9)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i22);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,9)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_static_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,11)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,11)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, clique_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i28);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, module_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, module_getter_setters_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i34);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i37);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_callers_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i40);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_dynamic_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i43);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_static_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,12)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i46);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,12)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_var_use_dump_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i49);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, procrep_coverage_info);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i52);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, program_modules_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___report__deep_report_0_0_i219);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, top_procs_report);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___maybe__maybe_error_1_0);
MR_def_label(__Compare___report__deep_report_0_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module27)
	MR_init_entry1(__Unify___report__field_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__field_name_0_0);
	MR_init_label1(__Unify___report__field_name_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__field_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__field_name_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___report__field_name_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module28)
	MR_init_entry1(__Compare___report__field_name_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__field_name_0_0);
	MR_init_label2(__Compare___report__field_name_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__field_name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__field_name_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__field_name_0_0_i2);
MR_def_label(__Compare___report__field_name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__field_name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module29)
	MR_init_entry1(__Unify___report__getter_or_setter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__getter_or_setter_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__getter_or_setter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module30)
	MR_init_entry1(__Compare___report__getter_or_setter_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__getter_or_setter_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__getter_or_setter_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(report_module31)
	MR_init_entry1(__Unify___report__gs_ds_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__gs_ds_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__gs_ds_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
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

MR_BEGIN_MODULE(report_module32)
	MR_init_entry1(__Compare___report__gs_ds_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__gs_ds_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__gs_ds_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
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


MR_BEGIN_MODULE(report_module33)
	MR_init_entry1(__Unify___report__gs_ds_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__gs_ds_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__gs_ds_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module34)
	MR_init_entry1(__Compare___report__gs_ds_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__gs_ds_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__gs_ds_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module35)
	MR_init_entry1(__Unify___report__gs_field_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__gs_field_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__gs_field_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___report__gs_field_info_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module36)
	MR_init_entry1(__Compare___report__gs_field_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__gs_field_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__gs_field_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___report__gs_field_info_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(report_module37)
	MR_init_entry1(__Unify___report__gs_field_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__gs_field_info_2_0);
	MR_init_label6(__Unify___report__gs_field_info_2_0,7,9,5,29,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__gs_field_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i29);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 2);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___report__gs_field_info_2_0_i7);
MR_def_label(__Unify___report__gs_field_info_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___report__gs_field_info_2_0_i9);
MR_def_label(__Unify___report__gs_field_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i1);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___report__gs_field_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___report__gs_field_info_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__gs_field_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___report__gs_field_info_2_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___report__gs_field_info_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(report_module38)
	MR_init_entry1(__Compare___report__gs_field_info_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__gs_field_info_2_0);
	MR_init_label10(__Compare___report__gs_field_info_2_0,3,2,9,13,46,5,22,49,20,26)
	MR_init_label1(__Compare___report__gs_field_info_2_0,97)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__gs_field_info_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i2);
MR_def_label(__Compare___report__gs_field_info_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__gs_field_info_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i46);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___report__gs_field_info_2_0_i9);
MR_def_label(__Compare___report__gs_field_info_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i97);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___report__gs_field_info_2_0_i13);
MR_def_label(__Compare___report__gs_field_info_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i97);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___report__gs_field_info_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___report__gs_field_info_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i20);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i22);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___report__gs_field_info_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i46);
	}
MR_def_label(__Compare___report__gs_field_info_2_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_mask_field(MR_sv(1), 0);
	MR_r3 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___report__gs_field_info_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___report__gs_field_info_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___report__gs_field_info_2_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___report__gs_field_info_2_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module39)
	MR_init_entry1(__Unify___report__gs_field_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__gs_field_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__gs_field_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module40)
	MR_init_entry1(__Compare___report__gs_field_map_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__gs_field_map_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__gs_field_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module41)
	MR_init_entry1(__Unify___report__gs_field_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__gs_field_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__gs_field_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module42)
	MR_init_entry1(__Compare___report__gs_field_map_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__gs_field_map_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__gs_field_map_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, field_name);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr3;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___measurement_units__time_0_0);
MR_decl_entry(__Unify___measurement_units__percent_0_0);
MR_decl_entry(__Unify___measurement_units__memory_0_0);

MR_BEGIN_MODULE(report_module43)
	MR_init_entry1(__Unify___report__inheritable_perf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__inheritable_perf_0_0);
	MR_init_label9(__Unify___report__inheritable_perf_0_0,4,6,8,10,12,14,16,20,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__inheritable_perf_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i20);
	}
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 5);
	MR_sv(5) = MR_tfield(0, MR_tempr3, 6);
	MR_sv(6) = MR_tfield(0, MR_tempr3, 7);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 8);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 9);
	MR_sv(9) = MR_tfield(0, MR_tempr3, 10);
	MR_sv(10) = MR_tfield(0, MR_tempr3, 11);
	MR_sv(11) = MR_tfield(0, MR_tempr3, 12);
	MR_sv(12) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr4, 4);
	MR_sv(15) = MR_tfield(0, MR_tempr4, 5);
	MR_sv(16) = MR_tfield(0, MR_tempr4, 6);
	MR_sv(17) = MR_tfield(0, MR_tempr4, 7);
	MR_sv(18) = MR_tfield(0, MR_tempr4, 8);
	MR_sv(19) = MR_tfield(0, MR_tempr4, 9);
	MR_sv(20) = MR_tfield(0, MR_tempr4, 10);
	MR_sv(21) = MR_tfield(0, MR_tempr4, 11);
	MR_sv(22) = MR_tfield(0, MR_tempr4, 12);
	MR_r1 = MR_tfield(0, MR_tempr3, 1);
	MR_r2 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___measurement_units__time_0_0,
		__Unify___report__inheritable_perf_0_0_i4);
MR_def_label(__Unify___report__inheritable_perf_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__inheritable_perf_0_0_i6);
MR_def_label(__Unify___report__inheritable_perf_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Unify___measurement_units__time_0_0,
		__Unify___report__inheritable_perf_0_0_i8);
MR_def_label(__Unify___report__inheritable_perf_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__inheritable_perf_0_0_i10);
MR_def_label(__Unify___report__inheritable_perf_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	if ((MR_word_to_float(MR_sv(5)) != MR_word_to_float(MR_sv(16)))) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	if ((MR_sv(6) != MR_sv(17))) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__inheritable_perf_0_0_i12);
MR_def_label(__Unify___report__inheritable_perf_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	if ((MR_word_to_float(MR_sv(8)) != MR_word_to_float(MR_sv(19)))) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Unify___measurement_units__memory_0_0,
		__Unify___report__inheritable_perf_0_0_i14);
MR_def_label(__Unify___report__inheritable_perf_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(__Unify___measurement_units__percent_0_0,
		__Unify___report__inheritable_perf_0_0_i16);
MR_def_label(__Unify___report__inheritable_perf_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__inheritable_perf_0_0_i1);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(22);
	MR_succip_word = MR_sv(23);
	MR_decr_sp(23);
	MR_np_tailcall_ent(__Unify___measurement_units__memory_0_0);
MR_def_label(__Unify___report__inheritable_perf_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__inheritable_perf_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___measurement_units__time_0_0);
MR_decl_entry(__Compare___measurement_units__percent_0_0);
MR_decl_entry(private_builtin__builtin_compare_float_3_0);
MR_decl_entry(__Compare___measurement_units__memory_0_0);

MR_BEGIN_MODULE(report_module44)
	MR_init_entry1(__Compare___report__inheritable_perf_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__inheritable_perf_0_0);
	MR_init_label10(__Compare___report__inheritable_perf_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label5(__Compare___report__inheritable_perf_0_0,37,41,45,49,109)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__inheritable_perf_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i3);
	}
	MR_incr_sp(25);
	MR_sv(25) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i2);
MR_def_label(__Compare___report__inheritable_perf_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__inheritable_perf_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(24) = MR_tfield(0, MR_tempr5, 12);
	MR_sv(23) = MR_tfield(0, MR_tempr5, 11);
	MR_sv(22) = MR_tfield(0, MR_tempr5, 10);
	MR_sv(21) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(20) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(19) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__inheritable_perf_0_0_i5);
MR_def_label(__Compare___report__inheritable_perf_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(__Compare___measurement_units__time_0_0,
		__Compare___report__inheritable_perf_0_0_i9);
MR_def_label(__Compare___report__inheritable_perf_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__inheritable_perf_0_0_i13);
MR_def_label(__Compare___report__inheritable_perf_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___measurement_units__time_0_0,
		__Compare___report__inheritable_perf_0_0_i17);
MR_def_label(__Compare___report__inheritable_perf_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__inheritable_perf_0_0_i21);
MR_def_label(__Compare___report__inheritable_perf_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__inheritable_perf_0_0_i25);
MR_def_label(__Compare___report__inheritable_perf_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(18);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___report__inheritable_perf_0_0_i29);
MR_def_label(__Compare___report__inheritable_perf_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__inheritable_perf_0_0_i33);
MR_def_label(__Compare___report__inheritable_perf_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(20);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__inheritable_perf_0_0_i37);
MR_def_label(__Compare___report__inheritable_perf_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(21);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___report__inheritable_perf_0_0_i41);
MR_def_label(__Compare___report__inheritable_perf_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(22);
	MR_np_call_localret_ent(__Compare___measurement_units__memory_0_0,
		__Compare___report__inheritable_perf_0_0_i45);
MR_def_label(__Compare___report__inheritable_perf_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(23);
	MR_np_call_localret_ent(__Compare___measurement_units__percent_0_0,
		__Compare___report__inheritable_perf_0_0_i49);
MR_def_label(__Compare___report__inheritable_perf_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__inheritable_perf_0_0_i109);
	}
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(24);
	MR_succip_word = MR_sv(25);
	MR_decr_sp(25);
	MR_np_tailcall_ent(__Compare___measurement_units__memory_0_0);
MR_def_label(__Compare___report__inheritable_perf_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module45)
	MR_init_entry1(__Unify___report__menu_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__menu_report_0_0);
	MR_init_label2(__Unify___report__menu_report_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__menu_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 8);
	MR_r2 = MR_tfield(0, MR_tempr2, 8);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__menu_report_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 9);
	MR_r2 = MR_tfield(0, MR_tempr2, 9);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___report__menu_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__menu_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module46)
	MR_init_entry1(__Compare___report__menu_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__menu_report_0_0);
	MR_init_label10(__Compare___report__menu_report_0_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label2(__Compare___report__menu_report_0_0,37,85)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__menu_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i3);
	}
	MR_incr_sp(19);
	MR_sv(19) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__menu_report_0_0_i2);
MR_def_label(__Compare___report__menu_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__menu_report_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(18) = MR_tfield(0, MR_tempr5, 9);
	MR_sv(17) = MR_tfield(0, MR_tempr5, 8);
	MR_sv(16) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(15) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__menu_report_0_0_i5);
MR_def_label(__Compare___report__menu_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i9);
MR_def_label(__Compare___report__menu_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i13);
MR_def_label(__Compare___report__menu_report_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i17);
MR_def_label(__Compare___report__menu_report_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i21);
MR_def_label(__Compare___report__menu_report_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i25);
MR_def_label(__Compare___report__menu_report_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i29);
MR_def_label(__Compare___report__menu_report_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(16);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i33);
MR_def_label(__Compare___report__menu_report_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(17);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__menu_report_0_0_i37);
MR_def_label(__Compare___report__menu_report_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__menu_report_0_0_i85);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(18);
	MR_succip_word = MR_sv(19);
	MR_decr_sp(19);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___report__menu_report_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(19);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module47)
	MR_init_entry1(__Unify___report__message_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__message_report_0_0);
	MR_init_label1(__Unify___report__message_report_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__message_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__message_report_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___report__message_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module48)
	MR_init_entry1(__Compare___report__message_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__message_report_0_0);
	MR_init_label2(__Compare___report__message_report_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__message_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__message_report_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__message_report_0_0_i2);
MR_def_label(__Compare___report__message_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__message_report_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module49)
	MR_init_entry1(__Unify___report__module_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__module_active_0_0);
	MR_init_label2(__Unify___report__module_active_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__module_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__module_active_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__module_active_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___report__module_active_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__module_active_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module50)
	MR_init_entry1(__Compare___report__module_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__module_active_0_0);
	MR_init_label4(__Compare___report__module_active_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__module_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__module_active_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__module_active_0_0_i2);
MR_def_label(__Compare___report__module_active_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__module_active_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__module_active_0_0_i5);
MR_def_label(__Compare___report__module_active_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__module_active_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___report__module_active_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module51)
	MR_init_entry1(__Unify___report__module_getter_setters_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__module_getter_setters_report_0_0);
	MR_init_label2(__Unify___report__module_getter_setters_report_0_0,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__module_getter_setters_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__module_getter_setters_report_0_0_i10);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__module_getter_setters_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___report__module_getter_setters_report_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__module_getter_setters_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module52)
	MR_init_entry1(__Compare___report__module_getter_setters_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__module_getter_setters_report_0_0);
	MR_init_label4(__Compare___report__module_getter_setters_report_0_0,3,2,5,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__module_getter_setters_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__module_getter_setters_report_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__module_getter_setters_report_0_0_i2);
MR_def_label(__Compare___report__module_getter_setters_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__module_getter_setters_report_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__module_getter_setters_report_0_0_i5);
MR_def_label(__Compare___report__module_getter_setters_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__module_getter_setters_report_0_0_i31);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, data_struct_name);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___report__module_getter_setters_report_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module53)
	MR_init_entry1(__Unify___report__module_is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__module_is_active_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__module_is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module54)
	MR_init_entry1(__Compare___report__module_is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__module_is_active_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__module_is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module55)
	MR_init_entry1(__Unify___report__module_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__module_report_0_0);
	MR_init_label2(__Unify___report__module_report_0_0,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__module_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__module_report_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__module_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___report__module_report_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__module_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module56)
	MR_init_entry1(__Compare___report__module_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__module_report_0_0);
	MR_init_label4(__Compare___report__module_report_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__module_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__module_report_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__module_report_0_0_i2);
MR_def_label(__Compare___report__module_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__module_report_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__module_report_0_0_i5);
MR_def_label(__Compare___report__module_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__module_report_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__module_report_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module57)
	MR_init_entry1(__Unify___report__normal_callee_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__normal_callee_id_0_0);
	MR_init_label3(__Unify___report__normal_callee_id_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__normal_callee_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__normal_callee_id_0_0_i6);
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
	MR_np_call_localret_ent(__Unify___report__proc_desc_0_0,
		__Unify___report__normal_callee_id_0_0_i4);
MR_def_label(__Unify___report__normal_callee_id_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__normal_callee_id_0_0_i1);
	}
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___report__normal_callee_id_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__normal_callee_id_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module58)
	MR_init_entry1(__Compare___report__normal_callee_id_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__normal_callee_id_0_0);
	MR_init_label4(__Compare___report__normal_callee_id_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__normal_callee_id_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__normal_callee_id_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__normal_callee_id_0_0_i2);
MR_def_label(__Compare___report__normal_callee_id_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__normal_callee_id_0_0,2)
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
	MR_np_call_localret_ent(__Compare___report__proc_desc_0_0,
		__Compare___report__normal_callee_id_0_0_i5);
MR_def_label(__Compare___report__normal_callee_id_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__normal_callee_id_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___report__normal_callee_id_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module59)
	MR_init_entry1(__Unify___report__perf_row_data_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__perf_row_data_1_0);
	MR_init_label4(__Unify___report__perf_row_data_1_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__perf_row_data_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i10);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_sv(3);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(16) = MR_tfield(0, MR_tempr2, 8);
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___report__perf_row_data_1_0_i4);
MR_def_label(__Unify___report__perf_row_data_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	if ((MR_sv(1) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	if ((MR_sv(2) != MR_sv(10))) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	if ((MR_sv(3) != MR_sv(11))) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	if ((MR_sv(5) != MR_sv(13))) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Unify___report__inheritable_perf_0_0,
		__Unify___report__perf_row_data_1_0_i6);
MR_def_label(__Unify___report__perf_row_data_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__perf_row_data_1_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, inheritable_perf);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___report__perf_row_data_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__perf_row_data_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module60)
	MR_init_entry1(__Compare___report__perf_row_data_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__perf_row_data_1_0);
	MR_init_label10(__Compare___report__perf_row_data_1_0,3,2,5,9,13,17,21,25,29,33)
	MR_init_label1(__Compare___report__perf_row_data_1_0,77)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__perf_row_data_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i3);
	}
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i2);
MR_def_label(__Compare___report__perf_row_data_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__perf_row_data_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr7 = MR_sv(2);
	MR_sv(16) = MR_tfield(0, MR_tempr7, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr7, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr7, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr7, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr7, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr7, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr7, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr7, 1);
	MR_tempr8 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr8, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr8, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr8, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr8, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr8, 4);
	MR_tempr1 = MR_tfield(0, MR_tempr8, 3);
	MR_tempr2 = MR_tfield(0, MR_tempr8, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr8, 1);
	MR_tempr4 = MR_tempr8;
	MR_sv(1) = MR_tempr3;
	MR_tempr5 = MR_tempr7;
	MR_sv(2) = MR_tempr2;
	MR_tempr6 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr6;
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	MR_r3 = MR_tfield(0, MR_tempr5, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___report__perf_row_data_1_0_i5);
MR_def_label(__Compare___report__perf_row_data_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__perf_row_data_1_0_i9);
MR_def_label(__Compare___report__perf_row_data_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__perf_row_data_1_0_i13);
MR_def_label(__Compare___report__perf_row_data_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__perf_row_data_1_0_i17);
MR_def_label(__Compare___report__perf_row_data_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__perf_row_data_1_0_i21);
MR_def_label(__Compare___report__perf_row_data_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__perf_row_data_1_0_i25);
MR_def_label(__Compare___report__perf_row_data_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(14);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__perf_row_data_1_0_i29);
MR_def_label(__Compare___report__perf_row_data_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(__Compare___report__inheritable_perf_0_0,
		__Compare___report__perf_row_data_1_0_i33);
MR_def_label(__Compare___report__perf_row_data_1_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__perf_row_data_1_0_i77);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, inheritable_perf);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(16);
	MR_succip_word = MR_sv(17);
	MR_decr_sp(17);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___report__perf_row_data_1_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(17);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module61)
	MR_init_entry1(__Unify___report__proc_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_active_0_0);
	MR_init_label3(__Unify___report__proc_active_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_active_0_0_i6);
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
	MR_np_call_localret_ent(__Unify___report__proc_desc_0_0,
		__Unify___report__proc_active_0_0_i4);
MR_def_label(__Unify___report__proc_active_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__proc_active_0_0_i1);
	}
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___report__proc_active_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_active_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module62)
	MR_init_entry1(__Compare___report__proc_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_active_0_0);
	MR_init_label4(__Compare___report__proc_active_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_active_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_active_0_0_i2);
MR_def_label(__Compare___report__proc_active_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_active_0_0,2)
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
	MR_np_call_localret_ent(__Compare___report__proc_desc_0_0,
		__Compare___report__proc_active_0_0_i5);
MR_def_label(__Compare___report__proc_active_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_active_0_0_i21);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___report__proc_active_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module63)
	MR_init_entry1(__Unify___report__proc_callers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_callers_0_0);
	MR_init_label5(__Unify___report__proc_callers_0_0,5,10,34,15,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_callers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i34);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___report__proc_callers_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__proc_callers_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__proc_callers_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_callers_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__proc_callers_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module64)
	MR_init_entry1(__Compare___report__proc_callers_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_callers_0_0);
	MR_init_label10(__Compare___report__proc_callers_0_0,3,2,7,10,5,14,15,12,21,22)
	MR_init_label6(__Compare___report__proc_callers_0_0,19,46,27,28,48,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_callers_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i2);
MR_def_label(__Compare___report__proc_callers_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_callers_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__proc_callers_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i14);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__proc_callers_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i19);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i21);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i46);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__proc_callers_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i27);
	}
MR_def_label(__Compare___report__proc_callers_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_0_0_i29);
	}
MR_def_label(__Compare___report__proc_callers_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___report__proc_callers_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module65)
	MR_init_entry1(__Unify___report__proc_callers_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_callers_report_0_0);
	MR_init_label4(__Unify___report__proc_callers_report_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_callers_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_report_0_0_i10);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___report__proc_desc_0_0,
		__Unify___report__proc_callers_report_0_0_i4);
MR_def_label(__Unify___report__proc_callers_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_report_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___report__proc_callers_0_0,
		__Unify___report__proc_callers_report_0_0_i6);
MR_def_label(__Unify___report__proc_callers_report_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__proc_callers_report_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___report__proc_callers_report_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Unify___report__proc_callers_report_0_0_i1);
	}
	if ((MR_sv(4) != MR_sv(9))) {
		MR_GOTO_LAB(__Unify___report__proc_callers_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___report__proc_callers_report_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_callers_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module66)
	MR_init_entry1(__Compare___report__proc_callers_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_callers_report_0_0);
	MR_init_label8(__Compare___report__proc_callers_report_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_callers_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_report_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_callers_report_0_0_i2);
MR_def_label(__Compare___report__proc_callers_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_callers_report_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___report__proc_desc_0_0,
		__Compare___report__proc_callers_report_0_0_i5);
MR_def_label(__Compare___report__proc_callers_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_report_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___report__proc_callers_0_0,
		__Compare___report__proc_callers_report_0_0_i9);
MR_def_label(__Compare___report__proc_callers_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_report_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__proc_callers_report_0_0_i13);
MR_def_label(__Compare___report__proc_callers_report_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_report_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__proc_callers_report_0_0_i17);
MR_def_label(__Compare___report__proc_callers_report_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_report_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__proc_callers_report_0_0_i21);
MR_def_label(__Compare___report__proc_callers_report_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_callers_report_0_0_i53);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___report__proc_callers_report_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module67)
	MR_init_entry1(__Unify___report__proc_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_desc_0_0);
	MR_init_label2(__Unify___report__proc_desc_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_desc_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_desc_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_desc_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_desc_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_desc_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_desc_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___report__proc_desc_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_desc_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module68)
	MR_init_entry1(__Compare___report__proc_desc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_desc_0_0);
	MR_init_label8(__Compare___report__proc_desc_0_0,3,2,5,9,13,17,21,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_desc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_desc_0_0_i3);
	}
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_desc_0_0_i2);
MR_def_label(__Compare___report__proc_desc_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_desc_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__proc_desc_0_0_i5);
MR_def_label(__Compare___report__proc_desc_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_desc_0_0_i53);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_desc_0_0_i9);
MR_def_label(__Compare___report__proc_desc_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_desc_0_0_i53);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__proc_desc_0_0_i13);
MR_def_label(__Compare___report__proc_desc_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_desc_0_0_i53);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_desc_0_0_i17);
MR_def_label(__Compare___report__proc_desc_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_desc_0_0_i53);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_desc_0_0_i21);
MR_def_label(__Compare___report__proc_desc_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_desc_0_0_i53);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___report__proc_desc_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module69)
	MR_init_entry1(__Unify___report__proc_dynamic_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_dynamic_dump_info_0_0);
	MR_init_label2(__Unify___report__proc_dynamic_dump_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_dynamic_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_dynamic_dump_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_dynamic_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 3);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_dynamic_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 4);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 4);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_dynamic_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 5);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 5);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_dynamic_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__proc_dynamic_dump_info_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__proc_dynamic_dump_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_tfield(0, MR_tempr1, 6);
	MR_r3 = MR_tfield(0, MR_tempr2, 6);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___report__proc_dynamic_dump_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_dynamic_dump_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module70)
	MR_init_entry1(__Compare___report__proc_dynamic_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_dynamic_dump_info_0_0);
	MR_init_label9(__Compare___report__proc_dynamic_dump_info_0_0,3,2,5,9,13,17,21,25,61)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_dynamic_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i3);
	}
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i2);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__proc_dynamic_dump_info_0_0_i5);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i61);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__proc_dynamic_dump_info_0_0_i9);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i61);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_dynamic_dump_info_0_0_i13);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i61);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_dynamic_dump_info_0_0_i17);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i61);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_dynamic_dump_info_0_0_i21);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i61);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_dynamic_dump_info_0_0_i25);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_dynamic_dump_info_0_0_i61);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(profile, call_site_array_slot);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(12);
	MR_succip_word = MR_sv(13);
	MR_decr_sp(13);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__proc_dynamic_dump_info_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module71)
	MR_init_entry1(__Unify___report__proc_is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_is_active_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module72)
	MR_init_entry1(__Compare___report__proc_is_active_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_is_active_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_is_active_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module73)
	MR_init_entry1(__Unify___report__proc_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_report_0_0);
	MR_init_label3(__Unify___report__proc_report_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_report_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___report__perf_row_data_1_0,
		__Unify___report__proc_report_0_0_i4);
MR_def_label(__Unify___report__proc_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__proc_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__proc_report_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module74)
	MR_init_entry1(__Compare___report__proc_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_report_0_0);
	MR_init_label4(__Compare___report__proc_report_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_report_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_report_0_0_i2);
MR_def_label(__Compare___report__proc_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_report_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, proc_desc);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___report__perf_row_data_1_0,
		__Compare___report__proc_report_0_0_i5);
MR_def_label(__Compare___report__proc_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_report_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(report, call_site_perf);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__proc_report_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module75)
	MR_init_entry1(__Unify___report__proc_static_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_static_dump_info_0_0);
	MR_init_label2(__Unify___report__proc_static_dump_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_static_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_static_dump_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___report__proc_static_dump_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_static_dump_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module76)
	MR_init_entry1(__Compare___report__proc_static_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_static_dump_info_0_0);
	MR_init_label10(__Compare___report__proc_static_dump_info_0_0,3,2,5,9,13,17,21,25,29,69)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_static_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i3);
	}
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i2);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_static_dump_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(14) = MR_tfield(0, MR_tempr5, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr5, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr5, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr5, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
		__Compare___report__proc_static_dump_info_0_0_i5);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i69);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_static_dump_info_0_0_i9);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i69);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_static_dump_info_0_0_i13);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i69);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_static_dump_info_0_0_i17);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i69);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___report__proc_static_dump_info_0_0_i21);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i69);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(12);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__proc_static_dump_info_0_0_i25);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i69);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__proc_static_dump_info_0_0_i29);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_static_dump_info_0_0_i69);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___report__proc_static_dump_info_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(15);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module77)
	MR_init_entry1(__Unify___report__proc_var_use_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__proc_var_use_dump_info_0_0);
	MR_init_label2(__Unify___report__proc_var_use_dump_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__proc_var_use_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__proc_var_use_dump_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_word_to_float(MR_tempr3) != MR_word_to_float(MR_tempr4))) {
		MR_GOTO_LAB(__Unify___report__proc_var_use_dump_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___report__proc_var_use_dump_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__proc_var_use_dump_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module78)
	MR_init_entry1(__Compare___report__proc_var_use_dump_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__proc_var_use_dump_info_0_0);
	MR_init_label4(__Compare___report__proc_var_use_dump_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__proc_var_use_dump_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__proc_var_use_dump_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__proc_var_use_dump_info_0_0_i2);
MR_def_label(__Compare___report__proc_var_use_dump_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__proc_var_use_dump_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		__Compare___report__proc_var_use_dump_info_0_0_i5);
MR_def_label(__Compare___report__proc_var_use_dump_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__proc_var_use_dump_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(var_use_analysis, var_use_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__proc_var_use_dump_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__program_representation__proc_rep_1_0);

MR_BEGIN_MODULE(report_module79)
	MR_init_entry1(__Unify___report__procrep_coverage_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__procrep_coverage_info_0_0);
	MR_init_label2(__Unify___report__procrep_coverage_info_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__procrep_coverage_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__procrep_coverage_info_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___report__procrep_coverage_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr2, 1);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___mdbcomp__program_representation__proc_rep_1_0);
	}
MR_def_label(__Unify___report__procrep_coverage_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__procrep_coverage_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__program_representation__proc_rep_1_0);

MR_BEGIN_MODULE(report_module80)
	MR_init_entry1(__Compare___report__procrep_coverage_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__procrep_coverage_info_0_0);
	MR_init_label4(__Compare___report__procrep_coverage_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__procrep_coverage_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__procrep_coverage_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__procrep_coverage_info_0_0_i2);
MR_def_label(__Compare___report__procrep_coverage_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__procrep_coverage_info_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__procrep_coverage_info_0_0_i5);
MR_def_label(__Compare___report__procrep_coverage_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__procrep_coverage_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(coverage, coverage_info);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___mdbcomp__program_representation__proc_rep_1_0);
MR_def_label(__Compare___report__procrep_coverage_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module81)
	MR_init_entry1(__Unify___report__program_modules_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__program_modules_report_0_0);
	MR_init_label1(__Unify___report__program_modules_report_0_0,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__program_modules_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__program_modules_report_0_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__program_modules_report_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module82)
	MR_init_entry1(__Compare___report__program_modules_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__program_modules_report_0_0);
	MR_init_label2(__Compare___report__program_modules_report_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__program_modules_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__program_modules_report_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__program_modules_report_0_0_i2);
MR_def_label(__Compare___report__program_modules_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__program_modules_report_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___query__display_limit_0_0);

MR_BEGIN_MODULE(report_module83)
	MR_init_entry1(__Unify___report__report_ordering_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__report_ordering_0_0);
	MR_init_label3(__Unify___report__report_ordering_0_0,4,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__report_ordering_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i6);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___query__display_limit_0_0,
		__Unify___report__report_ordering_0_0_i4);
MR_def_label(__Unify___report__report_ordering_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i1);
	}
	if ((MR_sv(1) != MR_sv(4))) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i1);
	}
	if ((MR_sv(2) != MR_sv(5))) {
		MR_GOTO_LAB(__Unify___report__report_ordering_0_0_i1);
	}
	MR_r1 = (MR_sv(3) == MR_sv(6));
	MR_decr_sp_and_return(7);
MR_def_label(__Unify___report__report_ordering_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__report_ordering_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___query__display_limit_0_0);

MR_BEGIN_MODULE(report_module84)
	MR_init_entry1(__Compare___report__report_ordering_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__report_ordering_0_0);
	MR_init_label6(__Compare___report__report_ordering_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__report_ordering_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i2);
MR_def_label(__Compare___report__report_ordering_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__report_ordering_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
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
	MR_np_call_localret_ent(__Compare___query__display_limit_0_0,
		__Compare___report__report_ordering_0_0_i5);
MR_def_label(__Compare___report__report_ordering_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__report_ordering_0_0_i9);
MR_def_label(__Compare___report__report_ordering_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___report__report_ordering_0_0_i13);
MR_def_label(__Compare___report__report_ordering_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__report_ordering_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___report__report_ordering_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module85)
	MR_init_entry1(__Unify___report__top_procs_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___report__top_procs_report_0_0);
	MR_init_label3(__Unify___report__top_procs_report_0_0,4,9,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___report__top_procs_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___report__top_procs_report_0_0_i9);
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
	MR_np_call_localret_ent(__Unify___report__report_ordering_0_0,
		__Unify___report__top_procs_report_0_0_i4);
MR_def_label(__Unify___report__top_procs_report_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___report__top_procs_report_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___report__top_procs_report_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___report__top_procs_report_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(report_module86)
	MR_init_entry1(__Compare___report__top_procs_report_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___report__top_procs_report_0_0);
	MR_init_label4(__Compare___report__top_procs_report_0_0,3,2,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___report__top_procs_report_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___report__top_procs_report_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___report__top_procs_report_0_0_i2);
MR_def_label(__Compare___report__top_procs_report_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___report__top_procs_report_0_0,2)
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
	MR_np_call_localret_ent(__Compare___report__report_ordering_0_0,
		__Compare___report__top_procs_report_0_0_i5);
MR_def_label(__Compare___report__top_procs_report_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___report__top_procs_report_0_0_i28);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___report__top_procs_report_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__report_maybe_bunch_0(void)
{
	report_module0();
	report_module1();
	report_module2();
	report_module3();
	report_module4();
	report_module5();
	report_module6();
	report_module7();
	report_module8();
	report_module9();
	report_module10();
	report_module11();
	report_module12();
	report_module13();
	report_module14();
	report_module15();
	report_module16();
	report_module17();
	report_module18();
	report_module19();
	report_module20();
	report_module21();
	report_module22();
	report_module23();
	report_module24();
	report_module25();
	report_module26();
	report_module27();
	report_module28();
	report_module29();
	report_module30();
	report_module31();
	report_module32();
	report_module33();
	report_module34();
	report_module35();
	report_module36();
	report_module37();
	report_module38();
	report_module39();
}

static void mercury__report_maybe_bunch_1(void)
{
	report_module40();
	report_module41();
	report_module42();
	report_module43();
	report_module44();
	report_module45();
	report_module46();
	report_module47();
	report_module48();
	report_module49();
	report_module50();
	report_module51();
	report_module52();
	report_module53();
	report_module54();
	report_module55();
	report_module56();
	report_module57();
	report_module58();
	report_module59();
	report_module60();
	report_module61();
	report_module62();
	report_module63();
	report_module64();
	report_module65();
	report_module66();
	report_module67();
	report_module68();
	report_module69();
	report_module70();
	report_module71();
	report_module72();
	report_module73();
	report_module74();
	report_module75();
	report_module76();
	report_module77();
	report_module78();
	report_module79();
}

static void mercury__report_maybe_bunch_2(void)
{
	report_module80();
	report_module81();
	report_module82();
	report_module83();
	report_module84();
	report_module85();
	report_module86();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__report__init(void);
void mercury__report__init_type_tables(void);
void mercury__report__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__report__init_complexity_procs(void);
#endif

void mercury__report__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__report_maybe_bunch_0();
	mercury__report_maybe_bunch_1();
	mercury__report_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_ancestor_desc_0,
		report__ancestor_desc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_call_site_desc_0,
		report__call_site_desc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_call_site_dynamic_dump_info_0,
		report__call_site_dynamic_dump_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_call_site_perf_0,
		report__call_site_perf_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_call_site_static_dump_info_0,
		report__call_site_static_dump_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_clique_call_site_report_0,
		report__clique_call_site_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_clique_desc_0,
		report__clique_desc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_clique_dump_info_0,
		report__clique_dump_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0,
		report__clique_proc_dynamic_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_clique_proc_report_0,
		report__clique_proc_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_clique_report_0,
		report__clique_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_data_struct_name_0,
		report__data_struct_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_deep_report_0,
		report__deep_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_field_name_0,
		report__field_name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_getter_or_setter_0,
		report__getter_or_setter_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_gs_ds_map_1,
		report__gs_ds_map_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_gs_ds_map_0,
		report__gs_ds_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_gs_field_info_2,
		report__gs_field_info_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_gs_field_info_0,
		report__gs_field_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_gs_field_map_1,
		report__gs_field_map_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_gs_field_map_0,
		report__gs_field_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_inheritable_perf_0,
		report__inheritable_perf_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_menu_report_0,
		report__menu_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_message_report_0,
		report__message_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_module_active_0,
		report__module_active_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_module_getter_setters_report_0,
		report__module_getter_setters_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_module_is_active_0,
		report__module_is_active_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_module_report_0,
		report__module_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_normal_callee_id_0,
		report__normal_callee_id_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_perf_row_data_1,
		report__perf_row_data_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_active_0,
		report__proc_active_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_callers_0,
		report__proc_callers_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_callers_report_0,
		report__proc_callers_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_desc_0,
		report__proc_desc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_dynamic_dump_info_0,
		report__proc_dynamic_dump_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_is_active_0,
		report__proc_is_active_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_report_0,
		report__proc_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_static_dump_info_0,
		report__proc_static_dump_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_proc_var_use_dump_info_0,
		report__proc_var_use_dump_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_procrep_coverage_info_0,
		report__procrep_coverage_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_program_modules_report_0,
		report__program_modules_report_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_report_ordering_0,
		report__report_ordering_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_report__type_ctor_info_top_procs_report_0,
		report__top_procs_report_0_0);
	mercury__report__init_debugger();
}

void mercury__report__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_ancestor_desc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_call_site_desc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_call_site_dynamic_dump_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_call_site_perf_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_call_site_static_dump_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_clique_call_site_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_clique_desc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_clique_dump_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_clique_proc_dynamic_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_clique_proc_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_clique_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_data_struct_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_deep_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_field_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_getter_or_setter_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_gs_ds_map_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_gs_ds_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_gs_field_info_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_gs_field_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_gs_field_map_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_gs_field_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_inheritable_perf_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_menu_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_message_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_module_active_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_module_getter_setters_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_module_is_active_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_module_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_normal_callee_id_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_perf_row_data_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_active_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_callers_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_callers_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_desc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_dynamic_dump_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_is_active_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_static_dump_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_proc_var_use_dump_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_procrep_coverage_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_program_modules_report_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_report_ordering_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_report__type_ctor_info_top_procs_report_0);
	}
}


void mercury__report__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__report__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__report);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__report__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
