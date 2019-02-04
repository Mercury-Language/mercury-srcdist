/*
** Automatically generated from `rbmm.region_instruction.m'
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
INIT mercury__transform_hlds__rbmm__region_instruction__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "transform_hlds.rbmm.region_instruction.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 32 "transform_hlds.rbmm.region_instruction.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 36 "transform_hlds.rbmm.region_instruction.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 40 "transform_hlds.rbmm.region_instruction.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 44 "transform_hlds.rbmm.region_instruction.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 48 "transform_hlds.rbmm.region_instruction.c"
#line 49 "transform_hlds.rbmm.region_instruction.c"
#include "transform_hlds.rbmm.region_instruction.mh"

#line 52 "transform_hlds.rbmm.region_instruction.c"
#line 53 "transform_hlds.rbmm.region_instruction.c"
#ifndef TRANSFORM_HLDS__RBMM__REGION_INSTRUCTION_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__REGION_INSTRUCTION_DECL_GUARD

#line 57 "transform_hlds.rbmm.region_instruction.c"
#line 58 "transform_hlds.rbmm.region_instruction.c"

#endif
#line 61 "transform_hlds.rbmm.region_instruction.c"

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

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[18];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[19];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0;
MR_decl_label10(transform_hlds__rbmm__region_instruction__annotate_expr_11_0, 7,10,11,13,14,15,17,5,2,24)
MR_decl_label10(transform_hlds__rbmm__region_instruction__annotate_expr_11_0, 25,23,20,30,28,33,32,37,38,31)
MR_decl_label5(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0, 2,6,7,8,10)
MR_decl_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0, 49,3,5,6,7,8,9,10,11,12)
MR_decl_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0, 13,14,15,16,17,20,22,24,25,26)
MR_decl_label7(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0, 27,28,29,31,32,33,34)
MR_decl_label4(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0, 11,3,4,5)
MR_decl_label2(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0, 2,3)
MR_decl_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0, 5,3,7,8,10,11,12,14,15,16)
MR_decl_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0, 20,21,22,23,24,25,27,28,29,30)
MR_decl_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0, 3,7,2)
MR_decl_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0, 3,7,2)
MR_decl_label8(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0, 2,4,6,3,10,13,12,9)
MR_decl_label10(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0, 2,4,6,3,10,13,12,18,15,9)
MR_decl_label3(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0, 4,8,1)
MR_decl_label4(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0, 5,17,7,1)
MR_decl_label4(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0, 3,2,5,21)
MR_decl_label10(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0, 3,2,38,5,12,10,16,17,19,91)
MR_def_extern_entry(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__annotate_expr_11_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_instruction__region_instr_table_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_instruction__region_instr_table_0_0)
MR_def_extern_entry(__Unify___transform_hlds__rbmm__region_instruction__region_instr_type_0_0)
MR_def_extern_entry(__Compare___transform_hlds__rbmm__region_instruction__region_instr_type_0_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_0 mercury_common_0[15] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info)
}
},
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
MR_COMMON(1,1)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(1,2)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,1,3)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,8)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(0,1)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,0)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,0,14)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,5)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_1,
(MR_Word *) (MR_Integer) 0
},
18,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,0),
MR_COMMON(0,2),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_INT_CTOR_ADDR,
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0_1,
(MR_Word *) (MR_Integer) 0
},
19,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,2),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_INT_CTOR_ADDR,
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,4),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__annotate_expr_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__annotate_expr_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_3;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__annotate_expr_11_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__annotate_expr_11_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(1,4),
MR_COMMON(1,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,13),
MR_COMMON(0,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,13),
MR_COMMON(0,13)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_3,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,13),
MR_COMMON(0,13)
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0
};

const MR_ConstString mercury_data_transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0[] = {
	"instrs_before",
	"instrs_after"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0 = {
	"instrs_before_after",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__rbmm__region_instruction__field_types_instrs_before_after_0_0,
	mercury_data_transform_hlds__rbmm__region_instruction__field_names_instrs_before_after_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_instrs_before_after_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_instrs_before_after_0_0
};

const MR_Integer mercury_data_transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0)),
	"transform_hlds.rbmm.region_instruction",
	"instrs_before_after",
	{ (void *)mercury_data_transform_hlds__rbmm__region_instruction__du_name_ordered_instrs_before_after_0 },
	{ (void *)mercury_data_transform_hlds__rbmm__region_instruction__du_ptag_ordered_instrs_before_after_0 },
	1,
	4,
	mercury_data_transform_hlds__rbmm__region_instruction__functor_number_map_instrs_before_after_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0 = {
	"create_region",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__rbmm__region_instruction__field_types_region_instr_0_0,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1 = {
	"remove_region",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__rbmm__region_instruction__field_types_region_instr_0_1,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2 = {
	"rename_region",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__rbmm__region_instruction__field_types_region_instr_0_2,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2

};

const MR_DuPtagLayout mercury_data_transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__rbmm__region_instruction__du_stag_ordered_region_instr_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_0,
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_1,
	&mercury_data_transform_hlds__rbmm__region_instruction__du_functor_desc_region_instr_0_2
};

const MR_Integer mercury_data_transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0)),
	"transform_hlds.rbmm.region_instruction",
	"region_instr",
	{ (void *)mercury_data_transform_hlds__rbmm__region_instruction__du_name_ordered_region_instr_0 },
	{ (void *)mercury_data_transform_hlds__rbmm__region_instruction__du_ptag_ordered_region_instr_0 },
	3,
	4,
	mercury_data_transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0)),
	"transform_hlds.rbmm.region_instruction",
	"region_instr_proc",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_instruction__region_instr_table_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_instruction__region_instr_table_0_0)),
	"transform_hlds.rbmm.region_instruction",
	"region_instr_table",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 },
	-1,
	0,
	NULL
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0 = {
	"create_region_instr",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1 = {
	"remove_region_instr",
	1
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2 = {
	"renaming_region_instr",
	2
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
	&mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
	&mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0[] = {
	&mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_0,
	&mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_1,
	&mercury_data_transform_hlds__rbmm__region_instruction__enum_functor_desc_region_instr_type_0_2
};

const MR_Integer mercury_data_transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0[] = {
	0,
	1,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__rbmm__region_instruction__region_instr_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__rbmm__region_instruction__region_instr_type_0_0)),
	"transform_hlds.rbmm.region_instruction",
	"region_instr_type",
	{ (void *)mercury_data_transform_hlds__rbmm__region_instruction__enum_name_ordered_region_instr_type_0 },
	{ (void *)mercury_data_transform_hlds__rbmm__region_instruction__enum_value_ordered_region_instr_type_0 },
	3,
	4,
	mercury_data_transform_hlds__rbmm__region_instruction__functor_number_map_region_instr_type_0
};


static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_3 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"record_instruction_after_prog_point",
6,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
280,
"71"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"record_instruction_before_prog_point",
6,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
277,
"68"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"record_instruction_before_prog_point",
6,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
274,
"65"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__annotate_expr_11_0_2 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"process_mapping_rule_3",
6,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
350,
"27"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__annotate_expr_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"process_mapping_rule_1",
6,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
341,
"23"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"introduce_region_instructions_proc",
19,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
150,
"22"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"introduce_region_instructions_pred",
18,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
125,
"16"
};


MR_decl_entry(hlds__hlds_module__module_info_get_valid_predids_3_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl4_10_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module0)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0);
	MR_init_label5(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0,2,6,7,8,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_region_instructions'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_r5;
	MR_sv(8) = MR_r6;
	MR_sv(9) = MR_r7;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r9;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_valid_predids_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_i2);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 9;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(2);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_i6);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_i8);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_r2;
	MR_r4 = MR_r2;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_sv(3);
	MR_r8 = MR_sv(5);
	MR_r9 = MR_sv(6);
	MR_r10 = MR_sv(7);
	MR_r11 = MR_tempr1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(list__foldl4_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module1)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0);
	MR_init_label2(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_region_instructions_pred'/18 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r10;
	MR_sv(10) = MR_tempr1;
	MR_sv(11) = MR_r11;
	MR_sv(12) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(14) = MR_r14;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0_i2);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_18_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 10;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(10);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 12) = MR_sv(9);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_r2;
	MR_r4 = MR_r2;
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r7 = MR_tempr2;
	MR_r8 = MR_sv(11);
	MR_r9 = MR_sv(12);
	MR_r10 = MR_sv(13);
	MR_r11 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(list__foldl4_10_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_0);
MR_decl_entry(set__intersect_3_0);
MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module2)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__annotate_expr_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__annotate_expr_11_0);
	MR_init_label10(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,7,10,11,13,14,15,17,5,2,24)
	MR_init_label10(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,25,23,20,30,28,33,32,37,38,31)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'annotate_expr'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__annotate_expr_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i2);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(2, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(2, MR_r1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_tempr1;
	MR_sv(4) = MR_tfield(0, MR_r5, 1);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i5);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(9) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i11);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i13);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i14);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i15);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(1) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i17);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_r1;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i38);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i20);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(1, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i23);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r8;
	MR_sv(5) = MR_r9;
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_sv(7) = MR_tfield(0, MR_r5, 0);
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i24);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__rptg_reach_from_a_variable_6_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i25);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i30);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i30);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i28);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i30);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i33);
	}
	MR_r2 = MR_tfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i31);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i32);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i31);
	}
	MR_r2 = MR_tfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i31);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i37);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__annotate_expr_11_0_i38);
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(10);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.rbmm.region_instruction", 38);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.rbmm.region_instruction.annotate_expr\'/11", 67);
	MR_r3 = (MR_Word) MR_string_const("non-atomic goal", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__union_2_0);
MR_decl_entry(set__union_3_0);
MR_decl_entry(set__difference_3_0);
MR_decl_entry(fn__set__difference_2_0);
MR_decl_entry(map__set_4_0);
MR_decl_entry(set__fold_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module3)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0);
	MR_init_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,49,3,5,6,7,8,9,10,11,12)
	MR_init_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,13,14,15,16,17,20,22,24,25,26)
	MR_init_label7(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,27,28,29,31,32,33,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_region_instructions_exec_path'/21 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(28);
	MR_sv(28) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i3);
	}
	MR_r1 = MR_r14;
	MR_r2 = MR_r15;
	MR_r3 = MR_r16;
	MR_r4 = MR_r17;
	MR_decr_sp_and_return(28);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r15;
	MR_sv(15) = MR_r16;
	MR_sv(16) = MR_r17;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(17) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(18) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(19) = MR_tfield(1, MR_r1, 1);
	MR_sv(25) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_sv(26) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(17);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i5);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(24) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i6);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(17);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i8);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i9);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(21);
	MR_sv(21) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(20);
	}
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i11);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(22) = MR_r1;
	MR_sv(23) = MR_tfield(0, MR_sv(1), 0);
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(20);
	MR_np_call_localret_ent(fn__set__difference_2_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i12);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i13);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(24);
	MR_sv(24) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i14);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i15);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_sv(18) = MR_tfield(0, MR_sv(18), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_sv(13);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i16);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(17);
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(24);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(8);
	MR_r7 = MR_sv(9);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(11);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__annotate_expr_11_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i17);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(23);
	MR_tempr2 = MR_sv(16);
	MR_sv(16) = MR_r2;
	MR_sv(27) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(27);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i20);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(23);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(27);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i22);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(17);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(23);
	MR_tempr2 = MR_sv(16);
	MR_sv(16) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(27);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i24);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(27);
	MR_r3 = MR_sv(16);
	MR_r4 = MR_sv(22);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i25);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(22);
	MR_np_call_localret_ent(fn__set__union_2_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i26);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(15);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i27);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(18);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i28);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(12);
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	}
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i29);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(19),0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i31);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	MR_r4 = MR_sv(16);
	MR_decr_sp_and_return(28);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(26);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tfield(0, MR_tfield(1, MR_sv(19), 0), 0);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i32);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(20);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__set__difference_2_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i33);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(25);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i34);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(19);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_tempr1;
	MR_r14 = MR_sv(12);
	MR_r15 = MR_sv(14);
	MR_r16 = MR_sv(13);
	MR_r17 = MR_sv(16);
	MR_succip_word = MR_sv(28);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0_i49);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module4)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0);
	MR_init_label4(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0,11,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_region_instructions_exec_paths'/20 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0_i3);
	}
	MR_r1 = MR_r13;
	MR_r2 = MR_r14;
	MR_r3 = MR_r15;
	MR_r4 = MR_r16;
	MR_decr_sp_and_return(18);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_sv(13) = MR_r14;
	MR_sv(14) = MR_r15;
	MR_sv(15) = MR_r16;
	MR_sv(16) = MR_tfield(1, MR_r1, 0);
	MR_sv(17) = MR_tfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0_i4);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_tempr1;
	MR_r14 = MR_sv(12);
	MR_r15 = MR_sv(13);
	MR_r16 = MR_sv(14);
	MR_r17 = MR_sv(15);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_21_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0_i5);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(17);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_tempr4 = MR_r4;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(8);
	MR_r10 = MR_sv(9);
	MR_r11 = MR_sv(10);
	MR_r12 = MR_sv(11);
	MR_r13 = MR_tempr1;
	MR_r14 = MR_tempr2;
	MR_r15 = MR_tempr3;
	MR_r16 = MR_tempr4;
	MR_succip_word = MR_sv(18);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0_i11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__some_are_special_preds_2_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module5)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0);
	MR_init_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,5,3,7,8,10,11,12,14,15,16)
	MR_init_label10(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,20,21,22,23,24,25,27,28,29,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'introduce_region_instructions_proc'/19 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(26);
	MR_sv(26) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r11;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(12) = MR_r1;
	MR_sv(14) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(17) = MR_r5;
	MR_sv(7) = MR_r6;
	MR_sv(8) = MR_r7;
	MR_sv(1) = MR_r8;
	MR_sv(2) = MR_r9;
	MR_sv(6) = MR_r10;
	MR_sv(11) = MR_r12;
	MR_sv(13) = MR_r13;
	MR_sv(15) = MR_r14;
	MR_sv(16) = MR_r15;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(12);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i5);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i3);
	}
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(15);
	MR_r4 = MR_sv(16);
	MR_decr_sp_and_return(26);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_sv(21) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i8);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(19) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i11);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i12);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(17);
	MR_sv(17) = MR_r1;
	MR_sv(22) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_sv(23) = (MR_Word) MR_CTOR_ADDR(tree234, tree234, 2);
	MR_sv(24) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i14);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i15);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i16);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i20);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i21);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(19);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i22);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(22);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i23);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_sv(25) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_r1 = MR_sv(22);
	MR_r2 = MR_sv(25);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i24);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(17);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(8);
	MR_r8 = MR_sv(10);
	MR_r9 = MR_sv(1);
	MR_r10 = MR_sv(2);
	MR_r11 = MR_sv(12);
	MR_r12 = MR_sv(14);
	MR_r13 = MR_sv(18);
	MR_r14 = MR_sv(19);
	MR_r15 = MR_sv(20);
	MR_r16 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_20_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i25);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(14) = MR_r2;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(21);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(16);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i27);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(12);
	MR_r5 = MR_sv(11);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i28);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(14);
	MR_r5 = MR_sv(13);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i29);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(14) = MR_r1;
	MR_r1 = MR_sv(21);
	MR_r2 = MR_sv(24);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_sv(15);
	MR_np_call_localret_ent(map__set_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0_i30);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_19_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = MR_sv(14);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(17);
	MR_decr_sp_and_return(26);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);
MR_decl_entry(set__insert_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module6)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0);
	MR_init_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0,3,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_mapping_rule_1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(set__insert_3_0);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module7)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0);
	MR_init_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0,3,7,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'process_mapping_rule_3'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r5;
	MR_sv(5) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(set__insert_3_0);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module8)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,2,4,6,3,10,13,12,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_instruction_after_prog_point'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0,
		transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i2);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i4);
	}
	MR_tag_alloc_heap(MR_sv(2), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(2), 0) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i6);
	}
	MR_tag_alloc_heap(MR_sv(2), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(2), 0) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.rbmm.region_instruction", 38);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", 86);
	MR_r3 = (MR_Word) MR_string_const("unexpected region instruction type", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i9);
	}
	MR_r3 = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i13);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i12);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__set_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module9)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_init_label10(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,2,4,6,3,10,13,12,18,15,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'record_instruction_before_prog_point'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0,
		transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i2);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i4);
	}
	MR_tag_alloc_heap(MR_sv(3), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(3), 0) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i6);
	}
	MR_tag_alloc_heap(MR_sv(3), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(3), 0) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("transform_hlds.rbmm.region_instruction", 38);
	MR_r2 = (MR_Word) MR_string_const("predicate \140transform_hlds.rbmm.region_instruction.make_create_or_remove_instruction\'/3", 86);
	MR_r3 = (MR_Word) MR_string_const("unexpected region instruction type", 34);
	MR_np_call_localret_ent(require__unexpected_3_0,
		transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i9);
	}
	MR_sv(5) = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i13);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0_i18);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__set_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__set_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(map__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module10)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_init_label3(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0_i4);
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module11)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_init_label4(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0_i2);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0_i5);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module12)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_init_label4(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,5,17,7,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module13)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_init_label10(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,3,2,38,5,12,10,16,17,19,91)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i2);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i38);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i12);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i38);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i19);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i91);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module14)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
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

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module15)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module16)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module17)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module18)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module19)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__rbmm__region_instruction_maybe_bunch_0(void)
{
	transform_hlds__rbmm__region_instruction_module0();
	transform_hlds__rbmm__region_instruction_module1();
	transform_hlds__rbmm__region_instruction_module2();
	transform_hlds__rbmm__region_instruction_module3();
	transform_hlds__rbmm__region_instruction_module4();
	transform_hlds__rbmm__region_instruction_module5();
	transform_hlds__rbmm__region_instruction_module6();
	transform_hlds__rbmm__region_instruction_module7();
	transform_hlds__rbmm__region_instruction_module8();
	transform_hlds__rbmm__region_instruction_module9();
	transform_hlds__rbmm__region_instruction_module10();
	transform_hlds__rbmm__region_instruction_module11();
	transform_hlds__rbmm__region_instruction_module12();
	transform_hlds__rbmm__region_instruction_module13();
	transform_hlds__rbmm__region_instruction_module14();
	transform_hlds__rbmm__region_instruction_module15();
	transform_hlds__rbmm__region_instruction_module16();
	transform_hlds__rbmm__region_instruction_module17();
	transform_hlds__rbmm__region_instruction_module18();
	transform_hlds__rbmm__region_instruction_module19();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__rbmm__region_instruction__init(void);
void mercury__transform_hlds__rbmm__region_instruction__init_type_tables(void);
void mercury__transform_hlds__rbmm__region_instruction__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__rbmm__region_instruction__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__rbmm__region_instruction__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__transform_hlds__rbmm__region_instruction__init_threadscope_string_table(void);
#endif

void mercury__transform_hlds__rbmm__region_instruction__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__region_instruction_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0,
		transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0,
		transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0,
		transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0,
		transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0,
		transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
	mercury__transform_hlds__rbmm__region_instruction__init_debugger();
}

void mercury__transform_hlds__rbmm__region_instruction__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0);
	}
}


void mercury__transform_hlds__rbmm__region_instruction__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__rbmm__region_instruction__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__transform_hlds__rbmm__region_instruction);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__rbmm__region_instruction__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__transform_hlds__rbmm__region_instruction__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
