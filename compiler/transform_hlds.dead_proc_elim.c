/*
** Automatically generated from `dead_proc_elim.m'
** by the Mercury compiler,
** version rotd-2007-06-30, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__dead_proc_elim__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.dead_proc_elim.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.dead_proc_elim.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 35 "transform_hlds.dead_proc_elim.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 39 "transform_hlds.dead_proc_elim.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 43 "transform_hlds.dead_proc_elim.c"
#line 44 "transform_hlds.dead_proc_elim.c"
#include "transform_hlds.dead_proc_elim.mh"

#line 47 "transform_hlds.dead_proc_elim.c"
#line 48 "transform_hlds.dead_proc_elim.c"
#ifndef TRANSFORM_HLDS__DEAD_PROC_ELIM_DECL_GUARD
#define TRANSFORM_HLDS__DEAD_PROC_ELIM_DECL_GUARD

#line 52 "transform_hlds.dead_proc_elim.c"
#line 53 "transform_hlds.dead_proc_elim.c"

#endif
#line 56 "transform_hlds.dead_proc_elim.c"

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

struct mercury_type_3 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[11];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Integer f1;
	MR_String f2;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0,
	mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0,
	mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0,
	mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0,
	mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0,
	mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
	mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_dead_proc_pass_0;
MR_decl_label2(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0, 3,2)
MR_decl_label4(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0, 2,3,4,5)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_pred_elim_2_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_pred_elim_2_0, 10,11,12,13,14,15,16,17)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_pred_elim_2_0, 18,19,20,21,22,23,24,25)
MR_decl_label1(transform_hlds__dead_proc_elim__dead_pred_elim_2_0, 26)
MR_decl_label3(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0, 4,5,3)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0, 27,3,6,5,8,9,10,11)
MR_decl_label4(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0, 12,13,29,2)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0, 2,4,5,6,10,8,14,12)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0, 17,19,16,25,28,29,21,32)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0, 33,31,36,35,39,7,41,42)
MR_decl_label1(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0, 3)
MR_decl_label7(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0, 3,2,5,6,8,10,7)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0, 10,11,12,13,14,15,16,17)
MR_decl_label2(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0, 18,19)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_elim_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label2(transform_hlds__dead_proc_elim__dead_proc_elim_4_0, 13,11)
MR_decl_label4(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0, 4,6,5,3)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0, 2,3,9,10,11,12,15,13)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0, 18,21,20,23,19,17,6,27)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0, 28,29,30,31,5,35,36,37)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0, 38,39,40,41,42,61,44,32)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0, 6,5,2,9,10,24,12,11)
MR_decl_label5(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0, 15,16,17,18,19)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_examine_5_0, 40,3,6,5,9,11,13,16)
MR_decl_label3(transform_hlds__dead_proc_elim__dead_proc_examine_5_0, 18,15,2)
MR_decl_label3(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0, 11,4,3)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0, 4,10,9,8,12,96,16,17)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0, 20,23,19,28,29,100,31,32)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0, 33,35,37,39,41,101,44,45)
MR_decl_label2(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0, 102,48)
MR_decl_label3(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0, 11,4,3)
MR_decl_label8(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0, 3,4,5,6,8,9,10,2)
MR_decl_label4(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0, 12,4,5,3)
MR_decl_label6(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0, 21,6,8,9,4,3)
MR_decl_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0, 2,3,4,5)
MR_decl_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0, 12,4,5,3)
MR_decl_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0, 12,4,5,3)
MR_decl_label5(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0, 13,4,5,6,3)
MR_decl_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0, 12,4,5,3)
MR_decl_label4(transform_hlds__dead_proc_elim__find_base_gen_info_5_0, 27,4,3,1)
MR_decl_label2(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0, 2,3)
MR_decl_label1(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0, 3)
MR_decl_label8(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0, 4,6,9,10,11,13,15,17)
MR_decl_label4(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0, 19,21,40,24)
MR_decl_label8(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0, 22,19,4,8,7,10,11,13)
MR_decl_label2(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0, 15,12)
MR_decl_label3(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0, 2,3,4)
MR_decl_label4(__Unify___transform_hlds__dead_proc_elim__entity_0_0, 15,5,8,1)
MR_decl_label6(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0, 4,6,8,10,14,1)
MR_decl_label5(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0, 4,6,8,12,1)
MR_decl_label8(__Compare___transform_hlds__dead_proc_elim__entity_0_0, 3,2,9,7,5,15,17,21)
MR_decl_label1(__Compare___transform_hlds__dead_proc_elim__entity_0_0, 63)
MR_decl_label7(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0, 3,2,5,9,13,17,45)
MR_decl_label7(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0, 3,2,5,9,13,17,45)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__find_base_gen_info_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0)
MR_decl_static(fn__transform_hlds__dead_proc_elim__this_file_0_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_examine_5_0)
MR_def_extern_entry(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0)
MR_def_extern_entry(transform_hlds__dead_proc_elim__dead_proc_elim_4_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0)
MR_def_extern_entry(transform_hlds__dead_proc_elim__dead_pred_elim_2_0)
MR_decl_static(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__get_class_pred_procs_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0)
MR_decl_static(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0)
MR_decl_static(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0)
MR_decl_static(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0)
MR_decl_static(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0)
MR_decl_static(transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_0)
MR_def_extern_entry(__Unify___transform_hlds__dead_proc_elim__dead_proc_pass_0_0)
MR_def_extern_entry(__Compare___transform_hlds__dead_proc_elim__dead_proc_pass_0_0)
MR_def_extern_entry(__Unify___transform_hlds__dead_proc_elim__entity_0_0)
MR_def_extern_entry(__Compare___transform_hlds__dead_proc_elim__entity_0_0)
MR_decl_static(__Unify___transform_hlds__dead_proc_elim__entity_queue_0_0)
MR_decl_static(__Compare___transform_hlds__dead_proc_elim__entity_queue_0_0)
MR_decl_static(__Unify___transform_hlds__dead_proc_elim__examined_set_0_0)
MR_decl_static(__Compare___transform_hlds__dead_proc_elim__examined_set_0_0)
MR_def_extern_entry(__Unify___transform_hlds__dead_proc_elim__needed_map_0_0)
MR_def_extern_entry(__Compare___transform_hlds__dead_proc_elim__needed_map_0_0)
MR_decl_static(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0)
MR_decl_static(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0)
MR_decl_static(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0)
MR_decl_static(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0)
MR_decl_static(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0)
MR_decl_static(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0)
MR_decl_static(transform_hlds__dead_proc_elim__IntroducedFrom__pred__pre_modecheck_examine_goal_expr__912__1_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_queue__type_ctor_info_queue_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0;
static const struct mercury_type_0 mercury_common_0[17] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn)
}
},
{
{
MR_CTOR1_ADDR(queue, queue),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity)
}
},
{
{
MR_CTOR1_ADDR(queue, queue),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(queue, queue),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(queue, queue),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_INT_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__error_util, error_spec)
}
},
{
{
MR_TAG_COMMON(3,8,0),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(3,8,1),
MR_TAG_COMMON(1,0,14)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, pred_id)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_id),
MR_CTOR0_ADDR(hlds__hlds_pred, proc_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_instance_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__get_class_pred_procs_5_0_1;
static const struct mercury_type_2 mercury_common_2[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity),
MR_COMMON(0,7),
MR_COMMON(0,7),
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__get_class_pred_procs_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc),
MR_COMMON(0,3),
MR_COMMON(0,3),
MR_COMMON(1,1),
MR_COMMON(1,1)
}
},
};

static const struct mercury_type_3 mercury_common_3[11] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__get_class_pred_procs_5_0),
0
},
{
MR_COMMON(6,0),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_0),
0
},
{
MR_COMMON(2,2),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0),
0
},
{
MR_COMMON(6,1),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0),
0
},
{
MR_COMMON(2,3),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0),
0
},
{
MR_COMMON(2,4),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0),
0
},
{
MR_COMMON(6,2),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0),
0
},
{
MR_COMMON(6,3),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0),
0
},
{
MR_COMMON(6,4),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__IntroducedFrom__pred__pre_modecheck_examine_goal_expr__912__1_3_0),
0
},
{
MR_COMMON(6,5),
MR_ENTRY_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
1
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_elim_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_dead_proc_pass_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_2;
static const struct mercury_type_5 mercury_common_5[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_elim_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, dead_proc_pass),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, proc_elim_info),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, proc_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,2),
MR_INT_CTOR_ADDR,
MR_COMMON(0,8),
MR_COMMON(0,8)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(1,3),
MR_INT_CTOR_ADDR,
MR_COMMON(1,3),
MR_COMMON(1,3)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_4;
static const struct mercury_type_6 mercury_common_6[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_clauses, clause),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, case),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_4,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info),
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_1,
(MR_Word *) (MR_Integer) 0
},
11,
{
MR_INT_CTOR_ADDR,
MR_COMMON(0,10),
MR_BOOL_CTOR_ADDR,
MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, proc_elim_info),
MR_INT_CTOR_ADDR,
MR_COMMON(1,3),
MR_COMMON(1,3),
MR_BOOL_CTOR_ADDR,
MR_BOOL_CTOR_ADDR,
MR_COMMON(0,11),
MR_COMMON(0,11)
}
},
};

static const struct mercury_type_8 mercury_common_8[2] =
{
{
3,
MR_string_const("Warning:", 8)
},
{
3,
MR_string_const("is never called.", 16)
},
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
	(MR_TypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__error_util__type_ctor_info_error_spec_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0maybe__ti_maybe_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_info_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__error_util__type_ctor_info_error_spec_0
};

const MR_ConstString mercury_data_transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0[] = {
	"proc_elim_needed_map",
	"proc_elim_module_info",
	"proc_elim_pred_table",
	"proc_elim_changed",
	"proc_elim_warnings"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0 = {
	"proc_elim_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dead_proc_elim__field_types_proc_elim_info_0_0,
	mercury_data_transform_hlds__dead_proc_elim__field_names_proc_elim_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_proc_elim_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_proc_elim_info_0_0
};

const MR_Integer mercury_data_transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0)),
	"transform_hlds.dead_proc_elim",
	"proc_elim_info",
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__du_name_ordered_proc_elim_info_0 },
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__du_ptag_ordered_proc_elim_info_0 },
	1,
	4,
	mercury_data_transform_hlds__dead_proc_elim__functor_number_map_proc_elim_info_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_queue__ti_queue_1builtin__type_ctor_info_int_0 = {
	&mercury_data_queue__type_ctor_info_queue_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_int_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_queue__ti_queue_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1mdbcomp__prim_data__type_ctor_info_sym_name_0
};

const MR_ConstString mercury_data_transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0[] = {
	"pred_elim_module_info",
	"pred_elim_queue",
	"pred_elim_examined",
	"pred_elim_needed_ids",
	"pred_elim_needed_named"
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0 = {
	"pred_elim_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dead_proc_elim__field_types_pred_elim_info_0_0,
	mercury_data_transform_hlds__dead_proc_elim__field_names_pred_elim_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0

};

const MR_DuPtagLayout mercury_data_transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_pred_elim_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_pred_elim_info_0_0
};

const MR_Integer mercury_data_transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0)),
	"transform_hlds.dead_proc_elim",
	"pred_elim_info",
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__du_name_ordered_pred_elim_info_0 },
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__du_ptag_ordered_pred_elim_info_0 },
	1,
	4,
	mercury_data_transform_hlds__dead_proc_elim__functor_number_map_pred_elim_info_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dead_proc_elim__needed_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dead_proc_elim__needed_map_0_0)),
	"transform_hlds.dead_proc_elim",
	"needed_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2transform_hlds__dead_proc_elim__type_ctor_info_entity_0maybe__ti_maybe_1builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dead_proc_elim__examined_set_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dead_proc_elim__examined_set_0_0)),
	"transform_hlds.dead_proc_elim",
	"examined_set",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
	&mercury_data_queue__type_ctor_info_queue_1,
{	(MR_TypeInfo) &mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0
}};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dead_proc_elim__entity_queue_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dead_proc_elim__entity_queue_0_0)),
	"transform_hlds.dead_proc_elim",
	"entity_queue",
	{ 0 },
	{ (void *)&mercury_data_queue__ti_queue_1transform_hlds__dead_proc_elim__type_ctor_info_entity_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__dead_proc_elim__field_types_entity_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0 = {
	"proc",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dead_proc_elim__field_types_entity_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_PseudoTypeInfo mercury_data_transform_hlds__dead_proc_elim__field_types_entity_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1 = {
	"base_gen_info",
	3,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__dead_proc_elim__field_types_entity_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1[] = {
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__dead_proc_elim__du_stag_ordered_entity_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__du_name_ordered_entity_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_entity_0_1,
	&mercury_data_transform_hlds__dead_proc_elim__du_functor_desc_entity_0_0
};

const MR_Integer mercury_data_transform_hlds__dead_proc_elim__functor_number_map_entity_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dead_proc_elim__entity_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dead_proc_elim__entity_0_0)),
	"transform_hlds.dead_proc_elim",
	"entity",
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__du_name_ordered_entity_0 },
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__du_ptag_ordered_entity_0 },
	2,
	4,
	mercury_data_transform_hlds__dead_proc_elim__functor_number_map_entity_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__dead_proc_elim__enum_functor_desc_dead_proc_pass_0_0 = {
	"warning_pass",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__dead_proc_elim__enum_functor_desc_dead_proc_pass_0_1 = {
	"final_optimization_pass",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__enum_value_ordered_dead_proc_pass_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__enum_functor_desc_dead_proc_pass_0_0,
	&mercury_data_transform_hlds__dead_proc_elim__enum_functor_desc_dead_proc_pass_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__dead_proc_elim__enum_name_ordered_dead_proc_pass_0[] = {
	&mercury_data_transform_hlds__dead_proc_elim__enum_functor_desc_dead_proc_pass_0_1,
	&mercury_data_transform_hlds__dead_proc_elim__enum_functor_desc_dead_proc_pass_0_0
};

const MR_Integer mercury_data_transform_hlds__dead_proc_elim__functor_number_map_dead_proc_pass_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_dead_proc_pass_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__dead_proc_elim__dead_proc_pass_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__dead_proc_elim__dead_proc_pass_0_0)),
	"transform_hlds.dead_proc_elim",
	"dead_proc_pass",
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__enum_name_ordered_dead_proc_pass_0 },
	{ (void *)mercury_data_transform_hlds__dead_proc_elim__enum_value_ordered_dead_proc_pass_0 },
	2,
	4,
	mercury_data_transform_hlds__dead_proc_elim__functor_number_map_dead_proc_pass_0
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"get_instance_pred_procs",
5,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
264,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"get_class_pred_procs",
5,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
266,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_elim_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"dead_proc_eliminate_pred",
4,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
527,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"dead_pred_elim_process_clause",
3,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
881,
"d1;c3;q;c2;t;c2;e;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"dead_pred_elim_add_entity",
5,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
755,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"dead_pred_elim_initialize",
3,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
764,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_pred_elim_2_0_3 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"lambda_dead_proc_elim_m_779",
4,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
776,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"get_class_interface_pred_proc",
5,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
281,
"d1;c7;d2;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__get_class_pred_procs_5_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"get_class_interface_pred_proc",
5,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
290,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"dead_proc_eliminate_proc",
11,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
597,
"d1;c8;t;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"lambda_dead_proc_elim_m_619",
4,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
619,
"d1;c8;e;t;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"pre_modecheck_examine_goal",
3,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
906,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_2 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"pre_modecheck_examine_goal",
3,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
908,
"d2;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_3 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"lambda_dead_proc_elim_m_912",
3,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
912,
"d4;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_4 = {
{
MR_PREDICATE,
"transform_hlds.dead_proc_elim",
"transform_hlds.dead_proc_elim",
"pre_modecheck_examine_goal",
3,
0
},
"transform_hlds.dead_proc_elim",
"dead_proc_elim.m",
910,
"d3;c4;"
};

MR_decl_entry(svqueue__put_3_0);
MR_decl_entry(svmap__set_4_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module0)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0);
	MR_init_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_exported_procids_1_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module1)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0);
	MR_init_label5(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0,13,4,5,6,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_exported_procids_1_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_procs_6_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0_i13);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module2)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0);
	MR_init_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module3)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0);
	MR_init_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__semidet_succeed_0_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module4)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0);
	MR_init_label6(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,21,6,8,9,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0_i3);
	}
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(builtin__semidet_succeed_0_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	}
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0_i21);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0_i21);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
MR_decl_entry(map__values_2_0);
MR_decl_entry(list__condense_2_0);
MR_decl_entry(list__foldl2_6_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_defn_0;

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module5)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0);
	MR_init_label4(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_np_call_localret_ent(list__condense_2_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r7 = MR_sv(3);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_instance_defn);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_np_call_localret_ent(map__values_2_0,
		transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_defn);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_r6 = MR_sv(1);
	MR_r7 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(list__foldl2_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module6)
	MR_init_entry1(transform_hlds__dead_proc_elim__find_base_gen_info_5_0);
	MR_init_label4(transform_hlds__dead_proc_elim__find_base_gen_info_5_0,27,4,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__find_base_gen_info_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__find_base_gen_info_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__find_base_gen_info_5_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 6);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 7);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__dead_proc_elim__find_base_gen_info_5_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__find_base_gen_info_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__find_base_gen_info_5_0_i3);
	}
	if ((strcmp((char *)MR_sv(2), (char *)MR_sv(7)) != 0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__find_base_gen_info_5_0_i3);
	}
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__find_base_gen_info_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dead_proc_elim__find_base_gen_info_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__find_base_gen_info_5_0_i27);
MR_def_label(transform_hlds__dead_proc_elim__find_base_gen_info_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module7)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0);
	MR_init_label4(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0,12,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module8)
	MR_init_entry1(fn__transform_hlds__dead_proc_elim__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dead_proc_elim__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dead_proc_elim.m", 16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module9)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0);
	MR_init_label3(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module10)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0);
	MR_init_label3(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0,11,4,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_ctfield(1, MR_r1, 0), 1);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module11)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(queue__put_3_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module12)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,4,10,9,8,12,96,16,17)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,20,23,19,28,29,100,31,32)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,33,35,37,39,41,101,44,45)
	MR_init_label2(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,102,48)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i96) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i28) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i29));
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i28);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i9);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r1 = MR_ctfield(3, MR_r5, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_r3 = MR_sv(1);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i8);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r5,3,3)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i28);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(3, MR_tempr2, 3);
	MR_sv(2) = MR_r4;
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i32);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(queue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i16);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_sv(3) != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i17);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if ((MR_sv(4) != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i17);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i32);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i20);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i19);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i23);
	}
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i32);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r4, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r4, 0) = ((MR_Integer) MR_ctfield(1, MR_r2, 0) + (MR_Integer) 1);
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_np_call_localret_ent(svmap__det_update_4_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i32);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i32);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i100) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i33) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i35) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i37) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i39) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i41) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i101) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i102));
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 3);
	MR_sv(2) = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	}
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i31);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i32);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goals_6_0);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 3);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_cases_6_0);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 3);
	MR_sv(3) = MR_ctfield(3, MR_r1, 4);
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i44);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i45);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_goal_6_0);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__dead_proc_elim__this_file_0_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0_i48);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("detect_cse_in_goal_2: unexpected shorthand", 42);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module13)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,3,4,5,6,8,9,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_proc_examine_expr_6_0);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(svqueue__get_3_0);
MR_decl_entry(set__member_2_0);
MR_decl_entry(svset__insert_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module14)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_examine_5_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,40,3,6,5,9,11,13,16)
	MR_init_label3(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,18,15,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_examine_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r2;
	MR_sv(5) = MR_r4;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_np_call_localret_ent(svqueue__get_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i2);
	}
	MR_sv(2) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i40);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i11);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_examine_proc_6_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i18);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i13);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__find_base_gen_info_5_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i16);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i15);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_examine_refs_5_0,
		transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i18);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i40);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_examine_5_0_i40);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__init_1_0);
MR_decl_entry(fn__queue__init_0_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0);
MR_decl_entry(hlds__hlds_module__module_info_user_init_pred_procs_2_0);
MR_decl_entry(hlds__hlds_module__module_info_user_final_pred_procs_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_class_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_instance_table_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module15)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,10,11,12,13,14,15,16,17)
	MR_init_label2(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dead_proc_elim__dead_proc_analyze_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_np_call_localret_ent(fn__queue__init_0_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_np_call_localret_ent(fn__map__init_0_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_preds_6_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_user_init_pred_procs_2_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_user_final_pred_procs_2_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_init_fn_procs_5_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i13);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i14);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_base_gen_infos_5_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i15);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i16);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_instance_table_2_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i17);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i18);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_examine_5_0,
		transform_hlds__dead_proc_elim__dead_proc_analyze_3_0_i19);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module16)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0);
	MR_init_label4(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0,4,6,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_sv(2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(1, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 3);
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__foldl_4_1);
MR_decl_entry(hlds__hlds_module__module_info_set_preds_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_0);
MR_decl_entry(hlds__hlds_module__module_info_clobber_dependency_info_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module17)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_elim_4_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,2,3,4,5,6,7,8,9)
	MR_init_label2(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,13,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dead_proc_elim__dead_proc_elim_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_analyze_3_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr2, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr2, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, proc_elim_info);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 4);
	MR_sv(2) = MR_ctfield(0, MR_r1, 3);
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_preds_3_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_ctor_gen_infos_2_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_eliminate_base_gen_infos_3_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_type_ctor_gen_infos_3_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i11);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_elim_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_clobber_dependency_info_2_0,
		transform_hlds__dead_proc_elim__dead_proc_elim_4_0_i13);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_clauses_info_2_0);
MR_decl_entry(hlds__hlds_clauses__clauses_info_get_clauses_rep_2_0);
MR_decl_entry(hlds__hlds_clauses__get_clause_list_any_order_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_clauses__type_ctor_info_clause_0;

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module18)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,27,3,6,5,8,9,10,11)
	MR_init_label4(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,12,13,29,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_ctfield(0, MR_sv(3), 1);
	MR_np_call_localret_ent(svqueue__get_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i2);
	}
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i5);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(1);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i27);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_clauses_info_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__clauses_info_get_clauses_rep_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_clauses__get_clause_list_any_order_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i13);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_clauses, clause);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,2);
	MR_r5 = MR_sv(1);
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i29);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0_i27);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(queue__init_1_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_spec_info_2_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(set__intersect_3_0);
MR_decl_entry(hlds__hlds_module__module_info_set_type_spec_info_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_partial_qualifier_info_2_0);
MR_decl_entry(fn__set__to_sorted_list_1_0);
MR_decl_entry(hlds__pred_table__predicate_table_restrict_4_0);
MR_decl_entry(hlds__hlds_module__module_info_set_predicate_table_3_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module19)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_pred_elim_2_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,2,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,10,11,12,13,14,15,16,17)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,18,19,20,21,22,23,24,25)
	MR_init_label1(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,26)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__dead_proc_elim__dead_pred_elim_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_np_call_localret_ent(queue__init_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_pragma_exports_5_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_instance_table_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_class_table_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_proc_initialize_class_methods_6_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(queue__init_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r3 = MR_sv(7);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,3);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl2_6_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i12);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i13);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i14);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i15);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,4);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i16);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(transform_hlds__dead_proc_elim__dead_pred_elim_analyze_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i17);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(0, MR_r1, 3);
	MR_sv(6) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_spec_info_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i18);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(0, MR_r1, 2);
	MR_sv(5) = MR_ctfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i19);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(7);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i20);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(set__intersect_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i21);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(6);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_set_type_spec_info_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i22);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i23);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_partial_qualifier_info_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i24);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_np_call_localret_ent(fn__set__to_sorted_list_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i25);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_restrict_4_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_2_0_i26);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(hlds__hlds_module__module_info_set_predicate_table_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_class_proc_0;

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module20)
	MR_init_entry1(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0);
	MR_init_label1(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r1, 6);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0_i3);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
MR_def_label(transform_hlds__dead_proc_elim__get_instance_pred_procs_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r7 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,5);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module21)
	MR_init_entry1(transform_hlds__dead_proc_elim__get_class_pred_procs_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__get_class_pred_procs_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_class_proc);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r7 = MR_r3;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,1,0);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,3,6);
	MR_r5 = MR_ctfield(0, MR_tempr1, 7);
	MR_np_tailcall_ent(list__foldl2_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module22)
	MR_init_entry1(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0);
	MR_init_label2(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(svmap__set_4_0,
		transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__get_class_interface_pred_proc_5_0,3)
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

MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__in_in_unification_proc_id_1_0);
MR_decl_entry(hlds__hlds_pred__is_unify_or_compare_pred_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(string__prefix_2_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_procids_1_0);
MR_decl_entry(list__foldl3_8_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_procedures_3_0);
MR_decl_entry(map__det_update_4_0);
MR_decl_entry(hlds__hlds_pred__pred_info_set_import_status_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__passes_aux__write_pred_progress_message_5_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module23)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,2,3,9,10,11,12,15,13)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,18,21,20,23,19,17,6,27)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,28,29,30,31,5,35,36,37)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,38,39,40,41,42,61,44,32)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(11) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i5);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i9) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i10) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i5) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i12));
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__in_in_unification_proc_id_1_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i15);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i13);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i18);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const("IntroducedFrom__", 16);
	MR_np_call_localret_ent(string__prefix_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i21);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i20);
	}
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i19);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = (MR_Word) MR_string_const("TypeSpecOf__", 12);
	MR_np_call_localret_ent(string__prefix_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i23);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i17);
	}
	MR_r1 = MR_sv(8);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 1;
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i27);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i28);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 7);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 4;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(9);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(11);
	MR_r7 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r3 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,0,12);
	MR_r6 = MR_sv(10);
	MR_r8 = MR_sv(6);
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl3_8_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i29);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i30);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i31);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i32);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i32);
	}
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_procids_1_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i35);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i36);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(list__foldl_4_1,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i37);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_procedures_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i38);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,4,0);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_set_import_status_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i39);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i40);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i41);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i42);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i44);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_sv(4);
	MR_tfield(0, MR_r1, 2) = MR_sv(1);
	MR_tfield(0, MR_r1, 3) = (MR_Integer) 1;
	MR_tfield(0, MR_r1, 4) = MR_sv(7);
	MR_decr_sp_and_return(12);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Eliminated opt_imported predicate ", 36);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(hlds__passes_aux__write_pred_progress_message_5_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0_i61);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_pred_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(11);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_error_util__describe_one_proc_name_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__error_util__type_ctor_info_format_component_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module24)
	MR_init_entry1(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0);
	MR_init_label3(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r4;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_error_util__describe_one_proc_name_3_0,
		fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0_i2);
MR_def_label(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,13);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,15);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0_i3);
MR_def_label(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, format_component);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0_i4);
MR_def_label(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 26;
	MR_tfield(1, MR_tempr1, 1) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(0, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(0, MR_r1, 2) = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);
MR_decl_entry(svmap__delete_3_0);
MR_decl_entry(fn__map__det_elem_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_context_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module25)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,6,5,2,9,10,24,12,11)
	MR_init_label5(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,15,16,17,18,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r4;
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr3 = MR_r5;
	MR_tfield(0, MR_tempr1, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr2, 0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i5);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_sv(2), 0);
	if ((MR_sv(4) != MR_tempr1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i2);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(6);
	MR_tempr4 = MR_sv(8);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i9);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 35;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i12);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("% Eliminated the dead procedure ", 32);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i24);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i15);
	}
	MR_sv(1) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(svmap__delete_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i19);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(6) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_np_call_localret_ent(fn__map__det_elem_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i16);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_context_2_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i17);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(fn__transform_hlds__dead_proc_elim__warn_dead_proc_4_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i18);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	}
	MR_np_call_localret_ent(svmap__delete_3_0,
		transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0_i19);
MR_def_label(transform_hlds__dead_proc_elim__dead_proc_eliminate_proc_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module26)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0);
	MR_init_label3(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_add_entity_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__pred_info_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);
MR_decl_entry(mdbcomp__prim_data__any_mercury_builtin_module_1_0);
MR_decl_entry(mdbcomp__prim_data__is_std_lib_module_name_2_0);
MR_decl_entry(check_hlds__simplify__simplify_may_introduce_calls_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_is_imported_1_0);
MR_decl_entry(__Unify___hlds__hlds_pred__import_status_0_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(string__remove_suffix_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_goal_type_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module27)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0);
	MR_init_label8(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,2,4,5,6,10,8,14,12)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,17,19,16,25,28,29,21,32)
	MR_init_label8(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,33,31,36,35,39,7,41,42)
	MR_init_label1(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(11) = MR_ctfield(0, MR_tempr1, 4);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_module_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__is_unify_or_compare_pred_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i8);
	}
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(mdbcomp__prim_data__any_mercury_builtin_module_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i14);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i12);
	}
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i17);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i16);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(check_hlds__simplify__simplify_may_introduce_calls_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i19);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i16);
	}
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_is_imported_1_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i25);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i21);
	}
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i28);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__import_status_0_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i29);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i21);
	}
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i32);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i33);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i31);
	}
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("_init_any", 9);
	MR_np_call_localret_ent(string__remove_suffix_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i36);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i35);
	}
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i35);
	}
	MR_r3 = MR_sv(11);
	MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i7);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_goal_type_2_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i39);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i3);
	}
	MR_r3 = MR_sv(11);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	}
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i41);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_sv(10);
	MR_np_call_localret_ent(svqueue__put_3_0,
		transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0_i42);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(12);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_elim_initialize_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__pred_table__predicate_table_search_sym_4_0);
MR_decl_entry(svqueue__put_list_3_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module28)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0);
	MR_init_label7(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,3,2,5,6,8,10,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0_i2);
	}
	MR_r1 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0_i6);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_sym_4_0,
		transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(svqueue__put_list_3_0,
		transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(2);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_tfield(0, MR_r1, 2) = MR_sv(3);
	MR_tfield(0, MR_r1, 3) = MR_sv(4);
	MR_tfield(0, MR_r1, 4) = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module29)
	MR_init_entry1(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_hlds_goal_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_case_0;

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module30)
	MR_init_entry1(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0);
	MR_init_label8(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,4,6,9,10,11,13,15,17)
	MR_init_label4(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,19,21,40,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i4) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i6) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i10) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i9));
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 5);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__dead_pred_info_add_pred_name_3_0);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i10) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i11) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i13) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i15) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i17) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i19) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i21) MR_AND
		MR_LABEL_AP(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i40));
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,7);
	MR_r4 = MR_ctfield(3, MR_tempr1, 2);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,8);
	MR_r4 = MR_ctfield(3, MR_tempr1, 1);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, case);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,9);
	MR_r4 = MR_ctfield(3, MR_tempr1, 3);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_ctfield(3, MR_r1, 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_ctfield(3, MR_r1, 2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, hlds_goal);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, pred_elim_info);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,3,10);
	MR_np_tailcall_ent(list__foldl_4_1);
	}
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__transform_hlds__dead_proc_elim__this_file_0_0,
		transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0_i24);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("pre_modecheck_examine_goal_expr: unexpected shorthand", 53);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module31)
	MR_init_entry1(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0);
	MR_init_label8(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,22,19,4,8,7,10,11,13)
	MR_init_label2(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,15,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i4);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i19);
	}
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(2, MR_r1, 7), 0);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i22);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r2;
	MR_r3 = MR_ctfield(0, MR_tempr3, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tempr3;
	MR_sv(2) = MR_tempr2;
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(set__member_2_0,
		transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i8);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i10);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(svset__insert_3_0,
		transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i11);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_search_sym_4_0,
		transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i13);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(svqueue__put_list_3_0,
		transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0_i15);
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__dead_proc_elim__pre_modecheck_examine_unify_rhs_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_tfield(0, MR_r1, 1) = MR_sv(6);
	MR_tfield(0, MR_r1, 2) = MR_sv(4);
	MR_tfield(0, MR_r1, 3) = MR_sv(5);
	MR_tfield(0, MR_r1, 4) = MR_sv(1);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module32)
	MR_init_entry1(transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__dead_pred_elim_process_clause_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 1), 0);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_expr_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module33)
	MR_init_entry1(__Unify___transform_hlds__dead_proc_elim__dead_proc_pass_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__dead_proc_elim__dead_proc_pass_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module34)
	MR_init_entry1(__Compare___transform_hlds__dead_proc_elim__dead_proc_pass_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__dead_proc_elim__dead_proc_pass_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module35)
	MR_init_entry1(__Unify___transform_hlds__dead_proc_elim__entity_0_0);
	MR_init_label4(__Unify___transform_hlds__dead_proc_elim__entity_0_0,15,5,8,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__dead_proc_elim__entity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__entity_0_0_i15);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__entity_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__entity_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__entity_0_0_i1);
	}
	MR_tempr3 = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = (MR_tempr3 == MR_tempr4);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___transform_hlds__dead_proc_elim__entity_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dead_proc_elim__entity_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__entity_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		__Unify___transform_hlds__dead_proc_elim__entity_0_0_i8);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__entity_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__entity_0_0_i1);
	}
	if ((strcmp((char *)MR_sv(1), (char *)MR_sv(3)) != 0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__entity_0_0_i1);
	}
	MR_r1 = (MR_sv(2) == MR_sv(4));
	MR_decr_sp_and_return(5);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__entity_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module36)
	MR_init_entry1(__Compare___transform_hlds__dead_proc_elim__entity_0_0);
	MR_init_label8(__Compare___transform_hlds__dead_proc_elim__entity_0_0,3,2,9,7,5,15,17,21)
	MR_init_label1(__Compare___transform_hlds__dead_proc_elim__entity_0_0,63)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__dead_proc_elim__entity_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i2);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r2 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__dead_proc_elim__entity_0_0_i9);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i63);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_ctfield(1, MR_tempr5, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_ctfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_ctfield(1, MR_tempr3, 0);
	MR_r2 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__sym_name_0_0,
		__Compare___transform_hlds__dead_proc_elim__entity_0_0_i17);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i63);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___transform_hlds__dead_proc_elim__entity_0_0_i21);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__entity_0_0_i63);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__entity_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___queue__queue_1_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module37)
	MR_init_entry1(__Unify___transform_hlds__dead_proc_elim__entity_queue_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dead_proc_elim__entity_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___queue__queue_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___queue__queue_1_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module38)
	MR_init_entry1(__Compare___transform_hlds__dead_proc_elim__entity_queue_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dead_proc_elim__entity_queue_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___queue__queue_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module39)
	MR_init_entry1(__Unify___transform_hlds__dead_proc_elim__examined_set_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dead_proc_elim__examined_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module40)
	MR_init_entry1(__Compare___transform_hlds__dead_proc_elim__examined_set_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dead_proc_elim__examined_set_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___list__list_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module41)
	MR_init_entry1(__Unify___transform_hlds__dead_proc_elim__needed_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___transform_hlds__dead_proc_elim__needed_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
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

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module42)
	MR_init_entry1(__Compare___transform_hlds__dead_proc_elim__needed_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___transform_hlds__dead_proc_elim__needed_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
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

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module43)
	MR_init_entry1(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0);
	MR_init_label6(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0,4,6,8,10,14,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i14);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___queue__queue_1_0,
		__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i10);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dead_proc_elim__pred_elim_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module44)
	MR_init_entry1(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0);
	MR_init_label7(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___queue__queue_1_0,
		__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__pred_elim_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module45)
	MR_init_entry1(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0);
	MR_init_label5(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0,4,6,8,12,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i12);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_ctfield(0, MR_tempr2, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i4);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i6);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i8);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i1);
	}
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__dead_proc_elim__proc_elim_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module46)
	MR_init_entry1(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0);
	MR_init_label7(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,3,2,5,9,13,17,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i2);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__dead_proc_elim, entity);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i5);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i45);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i9);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i13);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i45);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i17);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__error_util, error_spec);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__dead_proc_elim__proc_elim_info_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__insert_list_3_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module47)
	MR_init_entry1(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0);
	MR_init_label2(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r3 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(set__insert_list_3_0);
MR_def_label(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_pred_elim__779__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_goal__goal_info_init_1_0);
MR_decl_entry(fn__hlds__hlds_goal__true_goal_expr_0_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module48)
	MR_init_entry1(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0);
	MR_init_label4(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0,2,3,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r2;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0_i2);
MR_def_label(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_init_1_0,
		transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0_i3);
MR_def_label(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__true_goal_expr_0_0,
		transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0_i4);
MR_def_label(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0_i5);
MR_def_label(transform_hlds__dead_proc_elim__IntroducedFrom__pred__dead_proc_eliminate_pred__619__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_update_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__dead_proc_elim_module49)
	MR_init_entry1(transform_hlds__dead_proc_elim__IntroducedFrom__pred__pre_modecheck_examine_goal_expr__912__1_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__dead_proc_elim__IntroducedFrom__pred__pre_modecheck_examine_goal_expr__912__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_np_tailcall_ent(transform_hlds__dead_proc_elim__pre_modecheck_examine_goal_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__dead_proc_elim_maybe_bunch_0(void)
{
	transform_hlds__dead_proc_elim_module0();
	transform_hlds__dead_proc_elim_module1();
	transform_hlds__dead_proc_elim_module2();
	transform_hlds__dead_proc_elim_module3();
	transform_hlds__dead_proc_elim_module4();
	transform_hlds__dead_proc_elim_module5();
	transform_hlds__dead_proc_elim_module6();
	transform_hlds__dead_proc_elim_module7();
	transform_hlds__dead_proc_elim_module8();
	transform_hlds__dead_proc_elim_module9();
	transform_hlds__dead_proc_elim_module10();
	transform_hlds__dead_proc_elim_module11();
	transform_hlds__dead_proc_elim_module12();
	transform_hlds__dead_proc_elim_module13();
	transform_hlds__dead_proc_elim_module14();
	transform_hlds__dead_proc_elim_module15();
	transform_hlds__dead_proc_elim_module16();
	transform_hlds__dead_proc_elim_module17();
	transform_hlds__dead_proc_elim_module18();
	transform_hlds__dead_proc_elim_module19();
	transform_hlds__dead_proc_elim_module20();
	transform_hlds__dead_proc_elim_module21();
	transform_hlds__dead_proc_elim_module22();
	transform_hlds__dead_proc_elim_module23();
	transform_hlds__dead_proc_elim_module24();
	transform_hlds__dead_proc_elim_module25();
	transform_hlds__dead_proc_elim_module26();
	transform_hlds__dead_proc_elim_module27();
	transform_hlds__dead_proc_elim_module28();
	transform_hlds__dead_proc_elim_module29();
	transform_hlds__dead_proc_elim_module30();
	transform_hlds__dead_proc_elim_module31();
	transform_hlds__dead_proc_elim_module32();
	transform_hlds__dead_proc_elim_module33();
	transform_hlds__dead_proc_elim_module34();
	transform_hlds__dead_proc_elim_module35();
	transform_hlds__dead_proc_elim_module36();
	transform_hlds__dead_proc_elim_module37();
	transform_hlds__dead_proc_elim_module38();
	transform_hlds__dead_proc_elim_module39();
}

static void mercury__transform_hlds__dead_proc_elim_maybe_bunch_1(void)
{
	transform_hlds__dead_proc_elim_module40();
	transform_hlds__dead_proc_elim_module41();
	transform_hlds__dead_proc_elim_module42();
	transform_hlds__dead_proc_elim_module43();
	transform_hlds__dead_proc_elim_module44();
	transform_hlds__dead_proc_elim_module45();
	transform_hlds__dead_proc_elim_module46();
	transform_hlds__dead_proc_elim_module47();
	transform_hlds__dead_proc_elim_module48();
	transform_hlds__dead_proc_elim_module49();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__dead_proc_elim__init(void);
void mercury__transform_hlds__dead_proc_elim__init_type_tables(void);
void mercury__transform_hlds__dead_proc_elim__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__dead_proc_elim__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__dead_proc_elim__init_complexity_procs(void);
#endif

void mercury__transform_hlds__dead_proc_elim__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__dead_proc_elim_maybe_bunch_0();
	mercury__transform_hlds__dead_proc_elim_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0,
		transform_hlds__dead_proc_elim__proc_elim_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0,
		transform_hlds__dead_proc_elim__pred_elim_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0,
		transform_hlds__dead_proc_elim__needed_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0,
		transform_hlds__dead_proc_elim__examined_set_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0,
		transform_hlds__dead_proc_elim__entity_queue_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0,
		transform_hlds__dead_proc_elim__entity_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_dead_proc_pass_0,
		transform_hlds__dead_proc_elim__dead_proc_pass_0_0);
	mercury__transform_hlds__dead_proc_elim__init_debugger();
}

void mercury__transform_hlds__dead_proc_elim__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_proc_elim_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_pred_elim_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_needed_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_examined_set_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_queue_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_entity_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__dead_proc_elim__type_ctor_info_dead_proc_pass_0);
	}
}


void mercury__transform_hlds__dead_proc_elim__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__dead_proc_elim__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__dead_proc_elim__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
