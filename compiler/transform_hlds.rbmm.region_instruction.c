/*
** Automatically generated from `rbmm.region_instruction.m'
** by the Mercury compiler,
** version rotd-2008-08-03, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__rbmm__region_instruction__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.rbmm.region_instruction.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.rbmm.region_instruction.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.rbmm.region_instruction.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.rbmm.region_instruction.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "transform_hlds.rbmm.region_instruction.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "transform_hlds.rbmm.region_instruction.c"
#line 48 "transform_hlds.rbmm.region_instruction.c"
#include "transform_hlds.rbmm.region_instruction.mh"

#line 51 "transform_hlds.rbmm.region_instruction.c"
#line 52 "transform_hlds.rbmm.region_instruction.c"
#ifndef TRANSFORM_HLDS__RBMM__REGION_INSTRUCTION_DECL_GUARD
#define TRANSFORM_HLDS__RBMM__REGION_INSTRUCTION_DECL_GUARD

#line 56 "transform_hlds.rbmm.region_instruction.c"
#line 57 "transform_hlds.rbmm.region_instruction.c"

#endif
#line 60 "transform_hlds.rbmm.region_instruction.c"

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
	MR_Word * f3[12];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[13];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0,
	mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;
MR_decl_label2(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0, 2,4)
MR_decl_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0, 45,3,5,6,7,8,9,10)
MR_decl_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0, 11,14,15,16,17,20,21,22)
MR_decl_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0, 23,24,26,29,30,31,33,48)
MR_decl_label3(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0, 10,3,4)
MR_decl_label2(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0, 2,3)
MR_decl_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0, 5,3,7,8,10,11,12,14)
MR_decl_label5(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0, 15,16,20,21,22)
MR_decl_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0, 3,6,2)
MR_decl_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0, 3,6,2)
MR_decl_label8(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0, 2,4,6,3,10,13,12,9)
MR_decl_label8(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0, 2,4,6,3,10,13,12,18)
MR_decl_label2(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0, 15,9)
MR_decl_label8(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0, 7,10,11,5,2,27,21,23)
MR_decl_label1(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0, 19)
MR_decl_label8(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0, 5,6,7,2,18,25,30,13)
MR_decl_label3(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0, 15,46,11)
MR_decl_label8(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0, 7,10,11,5,2,27,21,23)
MR_decl_label1(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0, 19)
MR_decl_label5(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0, 2,15,9,11,7)
MR_decl_label3(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0, 4,8,1)
MR_decl_label4(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0, 9,7,13,1)
MR_decl_label4(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0, 3,2,5,21)
MR_decl_label8(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0, 3,2,41,9,21,25,27,13)
MR_decl_label3(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0, 55,18,88)
MR_def_extern_entry(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__transformation_rule_4_2_5_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0)
MR_decl_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0)
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
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const struct mercury_type_0 mercury_common_0[14] =
{
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
MR_COMMON(0,4)
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
MR_COMMON(0,7)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,0,0)
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
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_TAG_COMMON(0,1,3)
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
MR_COMMON(0,2)
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
MR_TAG_COMMON(0,0,13)
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
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0_1,
(MR_Word *) (MR_Integer) 0
},
12,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,1),
MR_COMMON(0,3),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_INT_CTOR_ADDR,
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0_1;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0_1,
(MR_Word *) (MR_Integer) 0
},
13,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_INT_CTOR_ADDR,
MR_COMMON(0,1),
MR_COMMON(0,3),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(0,5),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_COMMON(0,6),
MR_INT_CTOR_ADDR,
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rpt_graph_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_graph__type_ctor_info_rptg_node_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_1;
static const struct mercury_type_4 mercury_common_4[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_COMMON(1,4),
MR_COMMON(1,4),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_4_2_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_2;
static const struct mercury_type_5 mercury_common_5[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_4_2_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr_type),
MR_CTOR0_ADDR(transform_hlds__smm_common, program_point),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rpt_graph),
MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node),
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
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
	13,
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

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__smm_common__type_ctor_info_program_point_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__smm_common__type_ctor_info_program_point_0transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0 = {
	0,
	13,
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

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0 = {
	0,
	13,
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
	13,
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
	13,
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

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"introduce_region_instructions_pred",
12,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
106,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"introduce_region_instructions_proc",
13,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
123,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"process_mapping_rule_1",
8,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
291,
"d1;c8;t;c3;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_2 = {
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
300,
"d1;c8;t;c3;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_1 = {
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
353,
"d1;c9;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_1 = {
{
MR_PREDICATE,
"transform_hlds.rbmm.region_instruction",
"transform_hlds.rbmm.region_instruction",
"process_mapping_rule_3",
8,
0
},
"transform_hlds.rbmm.region_instruction",
"rbmm.region_instruction.m",
401,
"d1;c8;t;c3;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_2 = {
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
409,
"d1;c8;t;c3;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_1 = {
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
456,
"d1;c7;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__transformation_rule_4_2_5_0_1 = {
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
482,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_1 = {
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
209,
"d2;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_2 = {
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
245,
"d2;c30;d1;c6;"
};

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(map__init_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
MR_decl_entry(list__foldl_4_1);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module0)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0);
	MR_init_label2(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0,2,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0_i2);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0_i4);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 12);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 9;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 10) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 11) = MR_sv(9);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r4 = MR_sv(10);
	MR_r5 = MR_tempr2;
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl_4_1);
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
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0);
	MR_init_label2(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
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
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0_i2);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_pred_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 13);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0);
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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(11);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(set__fold_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module2)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,7,10,11,5,2,27,21,23)
	MR_init_label1(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i2);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr4 = MR_r5;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(7) = MR_r6;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i11);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(set__fold_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i27);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i21) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i23) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19));
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19);
	}
	MR_r1 = MR_r6;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0_i19);
	}
	MR_r1 = MR_r6;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.region_instruction.m", 25);
	MR_r2 = (MR_Word) MR_string_const("transformation_rule_1: found non-atomic goal", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);
MR_decl_entry(transform_hlds__rbmm__points_to_graph__reach_from_a_variable_6_0);
MR_decl_entry(set__intersect_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module3)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,5,6,7,2,18,25,30,13)
	MR_init_label3(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,15,46,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_sv(6) = MR_ctfield(0, MR_r4, 0);
	MR_sv(7) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	}
	MR_np_call_localret_ent(fn__set__init_0_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i5);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__points_to_graph__reach_from_a_variable_6_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i6);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(set__fold_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i30);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i18);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11);
	}
	MR_r1 = MR_r7;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i25);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i46);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11);
	}
	MR_r1 = MR_r7;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i46);
	}
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i15) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11));
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11);
	}
	MR_r1 = MR_r7;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0_i11);
	}
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.region_instruction.m", 25);
	MR_r2 = (MR_Word) MR_string_const("transformation_rule_2: non-atomic goal found", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module4)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,7,10,11,5,2,27,21,23)
	MR_init_label1(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i2);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr3 = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 0);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_tempr4 = MR_r5;
	MR_sv(3) = MR_tempr4;
	MR_sv(4) = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(7) = MR_r6;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr4;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,10);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i11);
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(map__foldl_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(7);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(set__fold_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i27);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i21) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i23) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19));
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19);
	}
	MR_r1 = MR_r6;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19);
	}
	MR_r1 = MR_r6;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0_i19);
	}
	MR_r1 = MR_r6;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.region_instruction.m", 25);
	MR_r2 = (MR_Word) MR_string_const("transformation_rule_3: non-atomic goal found", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module5)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0);
	MR_init_label5(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0,2,15,9,11,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(set__fold_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i15);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_tempr1, 0),
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7) MR_AND
		MR_LABEL_AP(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7));
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7);
	}
	MR_r1 = MR_r5;
	MR_proceed();
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7);
	}
	MR_r1 = MR_r5;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0_i7);
	}
	MR_r1 = MR_r5;
	MR_proceed();
	}
MR_def_label(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.region_instruction.m", 25);
	MR_r2 = (MR_Word) MR_string_const("transformation_rule_4: non-atomic goal found", 44);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module6)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__transformation_rule_4_2_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__transformation_rule_4_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_r3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_tempr3;
	MR_np_tailcall_ent(set__fold_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__difference_3_0);
MR_decl_entry(set__union_3_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module7)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,45,3,5,6,7,8,9,10)
	MR_init_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,11,14,15,16,17,20,21,22)
	MR_init_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,23,24,26,29,30,31,33,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(23);
	MR_sv(23) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i3);
	}
	MR_r1 = MR_r13;
	MR_decr_sp_and_return(23);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r6;
	MR_sv(5) = MR_tempr2;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(10) = MR_r11;
	MR_sv(11) = MR_r12;
	MR_sv(12) = MR_r13;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(13) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(14) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(15) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(21) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(13);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i5);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(16) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i6);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(17) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(17);
	}
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i8);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(18) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i9);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(19);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__union_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(18);
	MR_sv(18) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i11);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_sv(1), 0);
	MR_tempr2 = MR_sv(12);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(22) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(22);
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i14);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(20) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(16);
	MR_r3 = MR_sv(17);
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i15);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(18);
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i16);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(14), 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i17);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(20);
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__transformation_rule_4_2_5_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i26);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(14);
	MR_sv(14) = MR_r1;
	MR_tempr2 = MR_sv(16);
	MR_sv(16) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i20);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(19);
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i21);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(19) = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(19);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(8);
	MR_r6 = MR_sv(20);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__transformation_rule_1_7_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i22);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(19);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(10);
	MR_r6 = MR_sv(11);
	MR_r7 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__transformation_rule_2_8_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i23);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(9);
	MR_r6 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__transformation_rule_3_7_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i24);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(16);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(14);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__transformation_rule_4_6_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i26);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(15),0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i48);
	}
	MR_sv(13) = MR_ctfield(0, MR_ctfield(1, MR_sv(15), 0), 0);
	MR_sv(14) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = MR_sv(21);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(13);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i29);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(17);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__difference_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i30);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(18);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i31);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(12);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(22);
	MR_r4 = MR_tempr2;
	MR_r5 = MR_sv(14);
	}
	MR_np_call_localret_ent(set__fold_4_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i33);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(15);
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
	MR_succip_word = MR_sv(23);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0_i45);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(23);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module8)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0);
	MR_init_label3(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0,10,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(13);
	MR_sv(13) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0_i3);
	}
	MR_r1 = MR_r13;
	MR_decr_sp_and_return(13);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0,3)
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
	MR_sv(12) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_path_14_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0_i4);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
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
	MR_succip_word = MR_sv(13);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0_i10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(transform_hlds__smm_common__some_are_special_preds_2_0);
MR_decl_entry(hlds__hlds_module__module_info_proc_info_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__rbmm__points_to_info__type_ctor_info_rpta_info_0;
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module9)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,5,3,7,8,10,11,12,14)
	MR_init_label5(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,15,16,20,21,22)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(15);
	MR_sv(15) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_r11;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(8) = MR_r9;
	MR_sv(9) = MR_r10;
	MR_sv(14) = MR_r12;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(transform_hlds__smm_common__some_are_special_preds_2_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i5);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i3);
	}
	MR_r1 = MR_sv(14);
	MR_decr_sp_and_return(15);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(10);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_proc_info_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i7);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_info, rpta_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i8);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,1,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(7);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i10);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(10);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i11);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i12);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i14);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i15);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i16);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(10);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i20);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i21);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(12);
	MR_r4 = MR_sv(9);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(3);
	MR_r9 = MR_sv(7);
	MR_r10 = MR_sv(8);
	MR_r11 = MR_sv(1);
	MR_r12 = MR_sv(2);
	MR_r13 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__rbmm__region_instruction__introduce_region_instructions_exec_paths_14_0,
		transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0_i22);
MR_def_label(transform_hlds__rbmm__region_instruction__introduce_region_instructions_proc_13_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	MR_succip_word = MR_sv(15);
	MR_decr_sp(15);
	MR_np_tailcall_ent(svmap__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module10)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,2,4,6,3,10,13,12,18)
	MR_init_label2(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0,15,9)
MR_BEGIN_CODE

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
	MR_r1 = (MR_Word) MR_string_const("rbmm.region_instruction.m", 25);
	MR_r2 = (MR_Word) MR_string_const("make_create_or_remove_instruction: unexpected region instruction type", 69);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_sv(3);
	}
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
	MR_np_tailcall_ent(svmap__set_4_0);
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
	MR_np_tailcall_ent(svmap__set_4_0);
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
	MR_np_tailcall_ent(svmap__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module11)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0);
	MR_init_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0,3,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0_i6);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__rbmm__region_instruction__record_instruction_before_prog_point_6_0);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_1_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module12)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
	MR_init_label8(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,2,4,6,3,10,13,12,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__rbmm__points_to_graph__rptg_lookup_region_name_2_0,
		transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i2);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i4);
	}
	MR_tag_alloc_heap(MR_sv(1), 0, (MR_Integer) 1);
	MR_tfield(0, MR_sv(1), 0) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i6);
	}
	MR_tag_alloc_heap(MR_sv(1), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(1), 0) = MR_r1;
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("rbmm.region_instruction.m", 25);
	MR_r2 = (MR_Word) MR_string_const("make_create_or_remove_instruction: unexpected region instruction type", 69);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r4;
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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_sv(1);
	}
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
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__set_4_0);
	}
MR_def_label(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__smm_common, program_point);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, instrs_before_after);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__set_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module13)
	MR_init_entry1(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0);
	MR_init_label3(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0,3,6,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r7;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0_i3);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__points_to_graph, rptg_node);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__contains_2_0,
		transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0_i6);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(transform_hlds__rbmm__region_instruction__record_instruction_after_prog_point_6_0);
MR_def_label(transform_hlds__rbmm__region_instruction__process_mapping_rule_3_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module14)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_init_label3(__Unify___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,4,8,1)
MR_BEGIN_CODE

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
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
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

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module15)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
	MR_init_label4(__Compare___transform_hlds__rbmm__region_instruction__instrs_before_after_0_0,3,2,5,21)
MR_BEGIN_CODE

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
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__rbmm__region_instruction, region_instr);
	MR_r2 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_ctfield(0, MR_tempr4, 0);
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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module16)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_init_label4(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,9,7,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr3;
	if ((MR_tempr3 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i7);
	}
	if ((MR_tempr3 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr4) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(1);
	MR_r1 = MR_ctfield(2, MR_tempr2, 0);
	MR_tempr3 = MR_sv(2);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(2, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_sv(1), 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr1) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__rbmm__region_instruction__region_instr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
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

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module17)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_init_label8(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,3,2,41,9,21,25,27,13)
	MR_init_label3(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,55,18,88)
MR_BEGIN_CODE

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
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i13);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i21);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i9);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i18);
	}
	}
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_const_mask_field(MR_sv(1), 0);
	MR_r2 = MR_const_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i55);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(2, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_ctfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i27);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i88);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i41);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0_i18);
	}
	}
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
MR_def_label(__Compare___transform_hlds__rbmm__region_instruction__region_instr_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module18)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module19)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
MR_BEGIN_CODE

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


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module20)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
MR_BEGIN_CODE

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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module21)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
MR_BEGIN_CODE

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
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module22)
	MR_init_entry1(__Unify___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
MR_BEGIN_CODE

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

MR_BEGIN_MODULE(transform_hlds__rbmm__region_instruction_module23)
	MR_init_entry1(__Compare___transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
MR_BEGIN_CODE

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
	transform_hlds__rbmm__region_instruction_module20();
	transform_hlds__rbmm__region_instruction_module21();
	transform_hlds__rbmm__region_instruction_module22();
	transform_hlds__rbmm__region_instruction_module23();
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

void mercury__transform_hlds__rbmm__region_instruction__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__rbmm__region_instruction_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0,
		transform_hlds__rbmm__region_instruction__region_instr_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0,
		transform_hlds__rbmm__region_instruction__region_instr_table_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0,
		transform_hlds__rbmm__region_instruction__region_instr_proc_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0,
		transform_hlds__rbmm__region_instruction__region_instr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0,
		transform_hlds__rbmm__region_instruction__instrs_before_after_0_0);
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
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_table_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_proc_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_region_instr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__rbmm__region_instruction__type_ctor_info_instrs_before_after_0);
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
