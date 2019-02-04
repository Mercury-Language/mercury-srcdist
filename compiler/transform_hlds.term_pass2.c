/*
** Automatically generated from `term_pass2.m'
** by the Mercury compiler,
** version rotd-2007-07-12, configured for i686-pc-linux-gnu.
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
INIT mercury__transform_hlds__term_pass2__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "transform_hlds.term_pass2.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "transform_hlds.term_pass2.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "transform_hlds.term_pass2.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "transform_hlds.term_pass2.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "transform_hlds.term_pass2.c"
#line 44 "transform_hlds.term_pass2.c"
#include "transform_hlds.term_pass2.mh"

#line 47 "transform_hlds.term_pass2.c"
#line 48 "transform_hlds.term_pass2.c"
#ifndef TRANSFORM_HLDS__TERM_PASS2_DECL_GUARD
#define TRANSFORM_HLDS__TERM_PASS2_DECL_GUARD

#line 52 "transform_hlds.term_pass2.c"
#line 53 "transform_hlds.term_pass2.c"

#endif
#line 56 "transform_hlds.term_pass2.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_transform_hlds__term_pass2__type_ctor_info_pass2_result_0,
	mercury_data_transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0,
	mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_info_0,
	mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0,
	mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0;
MR_decl_label2(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0, 3,2)
MR_decl_label8(transform_hlds__term_pass2__add_call_arcs_4_0, 63,4,6,8,10,11,9,14)
MR_decl_label8(transform_hlds__term_pass2__add_call_arcs_4_0, 17,20,22,19,25,16,28,29)
MR_decl_label3(transform_hlds__term_pass2__add_call_arcs_4_0, 30,13,3)
MR_decl_label7(transform_hlds__term_pass2__find_min_arity_proc_6_0, 4,5,6,8,7,9,3)
MR_decl_label7(transform_hlds__term_pass2__init_rec_input_suppliers_3_0, 4,5,6,7,8,9,3)
MR_decl_label8(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0, 4,7,3,10,9,12,15,1)
MR_decl_label6(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0, 14,4,5,6,7,3)
MR_decl_label8(transform_hlds__term_pass2__prove_termination_in_scc_8_0, 2,3,7,12,11,16,18,19)
MR_decl_label6(transform_hlds__term_pass2__prove_termination_in_scc_8_0, 20,21,22,15,6,4)
MR_decl_label7(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0, 21,2,3,4,8,7,24)
MR_decl_label8(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0, 37,3,4,5,6,7,8,9)
MR_decl_label8(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0, 10,11,12,15,16,17,18,19)
MR_decl_label8(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0, 20,21,22,23,24,14,26,27)
MR_decl_label8(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0, 24,3,4,5,7,8,9,10)
MR_decl_label2(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0, 12,2)
MR_decl_label7(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0, 2,5,10,11,14,9,4)
MR_decl_label8(transform_hlds__term_pass2__update_rec_input_suppliers_7_0, 3,10,11,9,15,13,19,30)
MR_decl_label3(transform_hlds__term_pass2__update_rec_input_suppliers_7_0, 18,22,8)
MR_decl_label7(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0, 4,5,6,7,8,9,3)
MR_decl_label8(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0, 4,7,2,10,11,20,9,13)
MR_decl_label1(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0, 14)
MR_decl_label3(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0, 4,5,3)
MR_decl_label4(__Unify___transform_hlds__term_pass2__pass2_result_0_0, 7,19,5,1)
MR_decl_label7(__Compare___transform_hlds__term_pass2__pass2_result_0_0, 3,2,9,7,5,15,45)
MR_decl_static(transform_hlds__term_pass2__init_rec_input_suppliers_3_0)
MR_decl_static(transform_hlds__term_pass2__find_min_arity_proc_6_0)
MR_decl_static(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0)
MR_decl_static(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0)
MR_decl_static(fn__transform_hlds__term_pass2__this_file_0_0)
MR_decl_static(transform_hlds__term_pass2__update_rec_input_suppliers_7_0)
MR_decl_static(transform_hlds__term_pass2__add_call_arcs_4_0)
MR_decl_static(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0)
MR_decl_static(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0)
MR_decl_static(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0)
MR_decl_static(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0)
MR_decl_static(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0)
MR_decl_static(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0)
MR_decl_static(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0)
MR_def_extern_entry(transform_hlds__term_pass2__prove_termination_in_scc_8_0)
MR_decl_static(__Unify___transform_hlds__term_pass2__call_weight_dst_map_0_0)
MR_decl_static(__Compare___transform_hlds__term_pass2__call_weight_dst_map_0_0)
MR_decl_static(__Unify___transform_hlds__term_pass2__call_weight_graph_0_0)
MR_decl_static(__Compare___transform_hlds__term_pass2__call_weight_graph_0_0)
MR_decl_static(__Unify___transform_hlds__term_pass2__call_weight_info_0_0)
MR_decl_static(__Compare___transform_hlds__term_pass2__call_weight_info_0_0)
MR_decl_static(__Unify___transform_hlds__term_pass2__fixpoint_dir_0_0)
MR_decl_static(__Compare___transform_hlds__term_pass2__fixpoint_dir_0_0)
MR_decl_static(__Unify___transform_hlds__term_pass2__pass2_result_0_0)
MR_decl_static(__Compare___transform_hlds__term_pass2__pass2_result_0_0)
MR_decl_static(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0)
MR_decl_static(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__258__1_2_0)
MR_decl_static(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__289__1_2_0)
MR_decl_static(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__415__1_2_0)
MR_decl_static(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__397__1_2_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_56_95_95_49_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_57_95_95_49_95_95_91_49_93_95_48_2_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_0 mercury_common_0[6] =
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
{
{
MR_LIST_CTOR_ADDR,
MR_BOOL_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_COMMON(1,3)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_TAG_COMMON(0,1,4)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,0),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_INT_CTOR_ADDR
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,1)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(transform_hlds__term_errors, termination_error)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_CTOR0_ADDR(term, context)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id),
MR_TAG_COMMON(0,1,2)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(1,0),
MR_COMMON(0,1),
MR_BOOL_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_2;
static const struct mercury_type_3 mercury_common_3[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode),
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,1),
MR_BOOL_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_COMMON(0,4)
},
{
(MR_Word *) &mercury_data__closure_layout__transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(0,4),
MR_COMMON(0,4)
},
};

static const struct mercury_type_4 mercury_common_4[2] =
{
{
MR_COMMON(3,0),
MR_ENTRY_AP(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__258__1_2_0),
0
},
{
MR_COMMON(3,1),
MR_ENTRY_AP(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__289__1_2_0),
0
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
0
},
};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_transform_hlds__term_errors__type_ctor_info_termination_error_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_context_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_pair__ti_pair_2list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 = {
	&mercury_data_pair__type_ctor_info_pair_2,
{	(MR_TypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_bool__type_ctor_info_bool_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
	(MR_TypeInfo) &mercury_data_list__ti_list_1bool__type_ctor_info_bool_0
}};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass2__field_types_pass2_result_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_pair__ti_pair_2list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0list__ti_list_1bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass2__du_functor_desc_pass2_result_0_0 = {
	"ok",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass2__field_types_pass2_result_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_transform_hlds__term_pass2__field_types_pass2_result_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0
};

static const MR_DuFunctorDesc mercury_data_transform_hlds__term_pass2__du_functor_desc_pass2_result_0_1 = {
	"error",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_transform_hlds__term_pass2__field_types_pass2_result_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass2__du_stag_ordered_pass2_result_0_0[] = {
	&mercury_data_transform_hlds__term_pass2__du_functor_desc_pass2_result_0_0

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass2__du_stag_ordered_pass2_result_0_1[] = {
	&mercury_data_transform_hlds__term_pass2__du_functor_desc_pass2_result_0_1

};

const MR_DuPtagLayout mercury_data_transform_hlds__term_pass2__du_ptag_ordered_pass2_result_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_pass2__du_stag_ordered_pass2_result_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_transform_hlds__term_pass2__du_stag_ordered_pass2_result_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_transform_hlds__term_pass2__du_name_ordered_pass2_result_0[] = {
	&mercury_data_transform_hlds__term_pass2__du_functor_desc_pass2_result_0_1,
	&mercury_data_transform_hlds__term_pass2__du_functor_desc_pass2_result_0_0
};

const MR_Integer mercury_data_transform_hlds__term_pass2__functor_number_map_pass2_result_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_pass2__type_ctor_info_pass2_result_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_pass2__pass2_result_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_pass2__pass2_result_0_0)),
	"transform_hlds.term_pass2",
	"pass2_result",
	{ (void *)mercury_data_transform_hlds__term_pass2__du_name_ordered_pass2_result_0 },
	{ (void *)mercury_data_transform_hlds__term_pass2__du_ptag_ordered_pass2_result_0 },
	2,
	4,
	mercury_data_transform_hlds__term_pass2__functor_number_map_pass2_result_0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0 = {
	"up",
	0
};

static const MR_EnumFunctorDesc mercury_data_transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1 = {
	"down",
	1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0[] = {
	&mercury_data_transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0,
	&mercury_data_transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1
};

const MR_EnumFunctorDescPtr mercury_data_transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0[] = {
	&mercury_data_transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_1,
	&mercury_data_transform_hlds__term_pass2__enum_functor_desc_fixpoint_dir_0_0
};

const MR_Integer mercury_data_transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_pass2__fixpoint_dir_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_pass2__fixpoint_dir_0_0)),
	"transform_hlds.term_pass2",
	"fixpoint_dir",
	{ (void *)mercury_data_transform_hlds__term_pass2__enum_name_ordered_fixpoint_dir_0 },
	{ (void *)mercury_data_transform_hlds__term_pass2__enum_value_ordered_fixpoint_dir_0 },
	2,
	4,
	mercury_data_transform_hlds__term_pass2__functor_number_map_fixpoint_dir_0
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_pass2__call_weight_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_pass2__call_weight_info_0_0)),
	"transform_hlds.term_pass2",
	"call_weight_info",
	{ 0 },
	{ (void *)&mercury_data_pair__ti_pair_2list__ti_list_1pair__ti_pair_2term__type_ctor_info_context_0transform_hlds__term_errors__type_ctor_info_termination_error_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_pass2__call_weight_graph_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_pass2__call_weight_graph_0_0)),
	"transform_hlds.term_pass2",
	"call_weight_graph",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___transform_hlds__term_pass2__call_weight_dst_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___transform_hlds__term_pass2__call_weight_dst_map_0_0)),
	"transform_hlds.term_pass2",
	"call_weight_dst_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0pair__ti_pair_2term__type_ctor_info_context_0builtin__type_ctor_info_int_0 },
	-1,
	0,
	NULL
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_3_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass2",
"transform_hlds.term_pass2",
"lambda_term_pass2_m_142",
3,
0
},
"transform_hlds.term_pass2",
"term_pass2.m",
139,
"d2;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass2",
"transform_hlds.term_pass2",
"lambda_term_pass2_m_258",
2,
0
},
"transform_hlds.term_pass2",
"term_pass2.m",
258,
"d1;c5;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass2",
"transform_hlds.term_pass2",
"lambda_term_pass2_m_289",
2,
0
},
"transform_hlds.term_pass2",
"term_pass2.m",
289,
"d2;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_1 = {
{
MR_PREDICATE,
"transform_hlds.term_pass2",
"transform_hlds.term_pass2",
"lambda_term_pass2_m_397",
2,
0
},
"transform_hlds.term_pass2",
"term_pass2.m",
397,
"d2;c24;d1;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_2 = {
{
MR_PREDICATE,
"transform_hlds.term_pass2",
"transform_hlds.term_pass2",
"lambda_term_pass2_m_415",
2,
0
},
"transform_hlds.term_pass2",
"term_pass2.m",
415,
"d2;c24;d2;c2;"
};

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(transform_hlds__term_util__partition_call_args_5_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(map__det_insert_4_0);
MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module0)
	MR_init_entry1(transform_hlds__term_pass2__init_rec_input_suppliers_3_0);
	MR_init_label7(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,4,5,6,7,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__init_rec_input_suppliers_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_3_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_np_localcall_lab(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_3_0_i4);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_3_0_i5);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_3_0_i6);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_3_0_i7);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_util__partition_call_args_5_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_3_0_i8);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_3_0_i9);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(map__det_insert_4_0);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_tailcall_ent(map__init_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module1)
	MR_init_entry1(transform_hlds__term_pass2__find_min_arity_proc_6_0);
	MR_init_label7(transform_hlds__term_pass2__find_min_arity_proc_6_0,4,5,6,8,7,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__find_min_arity_proc_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__find_min_arity_proc_6_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_r1, 0);
	MR_sv(5) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass2__find_min_arity_proc_6_0_i4);
MR_def_label(transform_hlds__term_pass2__find_min_arity_proc_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass2__find_min_arity_proc_6_0_i5);
MR_def_label(transform_hlds__term_pass2__find_min_arity_proc_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_pass2__find_min_arity_proc_6_0_i6);
MR_def_label(transform_hlds__term_pass2__find_min_arity_proc_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(2))) {
		MR_GOTO_LAB(transform_hlds__term_pass2__find_min_arity_proc_6_0_i7);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__term_pass2__find_min_arity_proc_6_0,
		transform_hlds__term_pass2__find_min_arity_proc_6_0_i8);
MR_def_label(transform_hlds__term_pass2__find_min_arity_proc_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__term_pass2__find_min_arity_proc_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__term_pass2__find_min_arity_proc_6_0,
		transform_hlds__term_pass2__find_min_arity_proc_6_0_i9);
MR_def_label(transform_hlds__term_pass2__find_min_arity_proc_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(transform_hlds__term_pass2__find_min_arity_proc_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_is_input_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(check_hlds__mode_util__mode_is_output_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module2)
	MR_init_entry1(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0);
	MR_init_label8(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,4,7,3,10,9,12,15,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i1);
	}
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(4) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i4);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i3);
	}
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i7);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_output_2_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i10);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i15);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_is_input_2_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i12);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i1);
	}
	if (MR_INT_LE(MR_sv(3),1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_np_localcall_lab(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i15);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,1)
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


MR_BEGIN_MODULE(transform_hlds__term_pass2_module3)
	MR_init_entry1(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0);
	MR_init_label6(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,14,4,5,6,7,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_i4);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_i5);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_BOOL_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,4,1);
	MR_np_call_localret_ent(list__map_3_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_i6);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_i7);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0_i14);
MR_def_label(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module4)
	MR_init_entry1(fn__transform_hlds__term_pass2__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__transform_hlds__term_pass2__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_pass2.m", 12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__insert_3_0);
MR_decl_entry(bag__contains_2_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module5)
	MR_init_entry1(transform_hlds__term_pass2__update_rec_input_suppliers_7_0);
	MR_init_label8(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,3,10,11,9,15,13,19,30)
	MR_init_label3(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,18,22,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__update_rec_input_suppliers_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r5;
	MR_proceed();
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i10);
	}
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i9);
	}
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_ctfield(1, MR_r4, 1);
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_r5;
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(bag__insert_3_0,
		transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i11);
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r1;
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(bag__contains_2_0,
		transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i15);
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i30);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 1;
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_localcall_lab(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,
		transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i22);
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(bag__contains_2_0,
		transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i19);
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i18);
	}
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_sv(1) = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_localcall_lab(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,
		transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i22);
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_sv(1) = (MR_Integer) 0;
	MR_r5 = MR_sv(5);
	MR_r1 = MR_sv(6);
	MR_np_localcall_lab(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,
		transform_hlds__term_pass2__update_rec_input_suppliers_7_0_i22);
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("term_pass2.m", 12);
	MR_r2 = (MR_Word) MR_string_const("update_rec_input_suppliers/7: unmatched variables.", 50);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(bag__is_subbag_2_0);
MR_decl_entry(map__search_3_0);
MR_decl_entry(map__det_update_4_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module6)
	MR_init_entry1(transform_hlds__term_pass2__add_call_arcs_4_0);
	MR_init_label8(transform_hlds__term_pass2__add_call_arcs_4_0,63,4,6,8,10,11,9,14)
	MR_init_label8(transform_hlds__term_pass2__add_call_arcs_4_0,17,20,22,19,25,16,28,29)
	MR_init_label3(transform_hlds__term_pass2__add_call_arcs_4_0,30,13,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__add_call_arcs_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i3);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r5 = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = MR_tempr2;
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i4);
	}
	MR_sv(2) = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = MR_r4;
	MR_tempr3 = MR_ctfield(1, MR_tempr2, 0);
	MR_r5 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr3, 1);
	MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i8);
	}
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__term_pass2__this_file_0_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i6);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("add_call_arcs/4: no call site in path in stage 2.", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i8);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 1);
	MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i9);
	}
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(7) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r4;
	MR_np_call_localret_ent(fn__transform_hlds__term_pass2__this_file_0_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i11);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("add_call_arc/4: gamma variables in path in stage 2.", 51);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i9);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(bag__is_subbag_2_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i14);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i13);
	}
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i17);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i16);
	}
	MR_sv(9) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i20);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 1);
	if (((MR_Integer) MR_tempr1 < (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i22);
	}
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r5 = MR_tempr2;
	MR_r2 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i25);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_r3 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	}
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i25);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i25);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_r5 = MR_r1;
	MR_r2 = MR_sv(11);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_np_call_localret_ent(map__det_update_4_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i30);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i28);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(9);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i29);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass2__add_call_arcs_4_0_i30);
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i63);
	}
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(12);
	MR_GOTO_LAB(transform_hlds__term_pass2__add_call_arcs_4_0_i63);
	}
MR_def_label(transform_hlds__term_pass2__add_call_arcs_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_context_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(transform_hlds__term_traversal__init_traversal_params_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_transform_hlds__term_traversal__type_ctor_info_path_info_0;
MR_decl_entry(set__init_1_0);
MR_decl_entry(transform_hlds__term_traversal__traverse_goal_8_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(transform_hlds__term_traversal__upper_bound_active_vars_2_0);
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(bag__init_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module7)
	MR_init_entry1(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0);
	MR_init_label8(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,37,3,4,5,6,7,8,9)
	MR_init_label8(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,10,11,12,15,16,17,18,19)
	MR_init_label8(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,20,21,22,23,24,14,26,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r1, 0) = MR_r6;
	MR_tfield(0, MR_r1, 1) = MR_r5;
	MR_r2 = MR_r7;
	MR_decr_sp_and_return(14);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(6) = MR_tempr1;
	MR_sv(7) = MR_ctfield(1, MR_r1, 0);
	MR_sv(8) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i4);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i5);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i6);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__goal_util__maybe_strip_equality_pretest_1_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i7);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i8);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_sv(13) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i9);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(10);
	MR_r4 = MR_sv(12);
	MR_r6 = MR_sv(3);
	MR_r7 = MR_ctfield(0, MR_tempr1, 1);
	MR_r8 = MR_ctfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__init_traversal_params_9_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i10);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_np_call_localret_ent(set__init_1_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i11);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__term_traversal__traverse_goal_8_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i12);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(10) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__397__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = MR_ctfield(0, MR_r1, 0);
	MR_sv(12) = MR_r2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_pass2__this_file_0_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i15);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r3 = (MR_Word) MR_string_const("can_loop detected in pass2 but not pass1", 40);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i16);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(transform_hlds__term_traversal, path_info);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i17);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(transform_hlds__term_traversal__upper_bound_active_vars_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i18);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i19);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i20);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(bag__init_1_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i21);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(transform_hlds__term_pass2__update_rec_input_suppliers_7_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i22);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r5 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(13);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i23);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__term_pass2__add_call_arcs_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i24);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r7 = MR_sv(12);
	MR_succip_word = MR_sv(14);
	MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i37);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__415__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	MR_sv(12) = MR_r2;
	}
	MR_np_call_localret_ent(fn__transform_hlds__term_pass2__this_file_0_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i26);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("can_loop detected in pass2 but not pass1", 40);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0_i27);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_r2 = MR_sv(12);
	MR_decr_sp_and_return(14);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module8)
	MR_init_entry1(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0);
	MR_init_label7(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,21,2,3,4,8,7,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0_i2);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0_i3);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r7 = MR_sv(6);
	}
	MR_np_call_localret_ent(transform_hlds__term_pass2__prove_termination_in_scc_pass_11_0,
		transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0_i4);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0_i24);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_r4 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0_i8);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0_i21);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module9)
	MR_init_entry1(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0);
	MR_init_label3(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_ctfield(1, MR_r1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0_i4);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_np_localcall_lab(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0_i5);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__append_3_1);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_pred__pred_proc_id_0_0);
MR_decl_entry(list__reverse_2_0);
MR_decl_entry(assoc_list__keys_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(map__to_assoc_list_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module10)
	MR_init_entry1(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0);
	MR_init_label8(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,4,7,2,10,11,20,9,13)
	MR_init_label1(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_sv(7) = ((MR_Integer) MR_r4 + (MR_Integer) MR_ctfield(0, MR_tempr1, 1));
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr2 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_tempr2;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(__Unify___hlds__hlds_pred__pred_proc_id_0_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i4);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i2);
	}
	if (MR_INT_LT(MR_sv(7),0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,5);
	}
	MR_np_call_localret_ent(list__reverse_2_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i7);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
	}
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_tempr2 = MR_sv(5);
	MR_tempr3 = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(term, context);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(assoc_list__keys_2_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i10);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__member_2_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i11);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i9);
	}
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_sv(5);
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i13);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0_i14);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbour_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module11)
	MR_init_entry1(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0);
	MR_init_label7(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,4,5,6,7,8,9,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(1, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,1,1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0_i4);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0_i5);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(0, MR_sv(3), 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0_i6);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_context_2_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0_i7);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(3);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_pass2__zero_or_positive_weight_cycles_from_neighbours_7_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0_i8);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_localcall_lab(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,
		transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0_i9);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__append_3_1);
MR_def_label(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__take_upto_3_0);
MR_decl_entry(map__keys_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module12)
	MR_init_entry1(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0);
	MR_init_label7(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,2,5,10,11,14,9,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_r4 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(transform_hlds__term_pass2__prove_termination_in_scc_fixpoint_9_0,
		transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i2);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i5);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i14);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,2);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__keys_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i10);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(transform_hlds__term_pass2__zero_or_positive_weight_cycles_2_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i11);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i9);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_ctfield(0, MR_sv(1), 1);
	MR_np_call_localret_ent(list__take_upto_3_0,
		transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0_i14);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(4);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module13)
	MR_init_entry1(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0);
	MR_init_label8(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,24,3,4,5,7,8,9,10)
	MR_init_label2(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,12,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i3);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i4);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__term_pass2__init_rec_input_suppliers_add_single_arg_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i5);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i2);
	}
	MR_sv(6) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(map__init_1_0,
		transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i7);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(map__det_insert_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i8);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(transform_hlds__term_pass2__init_rec_input_suppliers_single_arg_others_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i9);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,
		transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i10);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r5 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0_i24);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(8);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module14)
	MR_init_entry1(transform_hlds__term_pass2__prove_termination_in_scc_8_0);
	MR_init_label8(transform_hlds__term_pass2__prove_termination_in_scc_8_0,2,3,7,12,11,16,18,19)
	MR_init_label6(transform_hlds__term_pass2__prove_termination_in_scc_8_0,20,21,22,15,6,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__transform_hlds__term_pass2__prove_termination_in_scc_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(transform_hlds__term_pass2__init_rec_input_suppliers_3_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i2);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(transform_hlds__term_pass2__prove_termination_in_scc_trial_9_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i3);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_8_0_i4);
	}
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_ctfield(1, MR_r1, 0);
	MR_sv(6) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i7);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 > (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_8_0_i6);
	}
	MR_sv(7) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(8) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(9));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(transform_hlds__term_pass2__prove_termination_in_scc_8_0_i11);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__member_2_1,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i12);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(9));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_8_0_i6);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(7);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(8);
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_8_0_i16);
	}
	MR_r1 = (MR_Word) MR_string_const("term_pass2.m", 12);
	MR_r2 = (MR_Word) MR_string_const("prove_termination_in_scc_single_arg/3: empty SCC.", 49);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i15);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i18);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i19);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(list__length_2_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i20);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r4 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_pass2__find_min_arity_proc_6_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i21);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = (MR_Integer) 1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(6);
	MR_np_call_localret_ent(transform_hlds__term_pass2__prove_termination_in_scc_single_arg_2_9_0,
		transform_hlds__term_pass2__prove_termination_in_scc_8_0_i22);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__prove_termination_in_scc_8_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_decr_sp_and_return(10);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
MR_def_label(transform_hlds__term_pass2__prove_termination_in_scc_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module15)
	MR_init_entry1(__Unify___transform_hlds__term_pass2__call_weight_dst_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_pass2__call_weight_dst_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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

MR_BEGIN_MODULE(transform_hlds__term_pass2_module16)
	MR_init_entry1(__Compare___transform_hlds__term_pass2__call_weight_dst_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_pass2__call_weight_dst_map_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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


MR_BEGIN_MODULE(transform_hlds__term_pass2_module17)
	MR_init_entry1(__Unify___transform_hlds__term_pass2__call_weight_graph_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_pass2__call_weight_graph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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


MR_BEGIN_MODULE(transform_hlds__term_pass2_module18)
	MR_init_entry1(__Compare___transform_hlds__term_pass2__call_weight_graph_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_pass2__call_weight_graph_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
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

MR_decl_entry(__Unify___pair__pair_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module19)
	MR_init_entry1(__Unify___transform_hlds__term_pass2__call_weight_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_pass2__call_weight_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___pair__pair_2_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module20)
	MR_init_entry1(__Compare___transform_hlds__term_pass2__call_weight_info_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_pass2__call_weight_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___pair__pair_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module21)
	MR_init_entry1(__Unify___transform_hlds__term_pass2__fixpoint_dir_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_pass2__fixpoint_dir_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module22)
	MR_init_entry1(__Compare___transform_hlds__term_pass2__fixpoint_dir_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_pass2__fixpoint_dir_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module23)
	MR_init_entry1(__Unify___transform_hlds__term_pass2__pass2_result_0_0);
	MR_init_label4(__Unify___transform_hlds__term_pass2__pass2_result_0_0,7,19,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___transform_hlds__term_pass2__pass2_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass2__pass2_result_0_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass2__pass2_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass2__pass2_result_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(0, MR_tempr4, 1);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___pair__pair_2_0,
		__Unify___transform_hlds__term_pass2__pass2_result_0_0_i7);
MR_def_label(__Unify___transform_hlds__term_pass2__pass2_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass2__pass2_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
MR_def_label(__Unify___transform_hlds__term_pass2__pass2_result_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___transform_hlds__term_pass2__pass2_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___transform_hlds__term_pass2__pass2_result_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___transform_hlds__term_pass2__pass2_result_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(transform_hlds__term_pass2_module24)
	MR_init_entry1(__Compare___transform_hlds__term_pass2__pass2_result_0_0);
	MR_init_label7(__Compare___transform_hlds__term_pass2__pass2_result_0_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___transform_hlds__term_pass2__pass2_result_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass2__pass2_result_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___transform_hlds__term_pass2__pass2_result_0_0_i2);
MR_def_label(__Compare___transform_hlds__term_pass2__pass2_result_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___transform_hlds__term_pass2__pass2_result_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass2__pass2_result_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass2__pass2_result_0_0_i7);
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,1,6);
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___pair__pair_2_0,
		__Compare___transform_hlds__term_pass2__pass2_result_0_0_i9);
MR_def_label(__Compare___transform_hlds__term_pass2__pass2_result_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass2__pass2_result_0_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_proc_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___transform_hlds__term_pass2__pass2_result_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_pass2__pass2_result_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___transform_hlds__term_pass2__pass2_result_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___transform_hlds__term_pass2__pass2_result_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___transform_hlds__term_pass2__pass2_result_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module25)
	MR_init_entry1(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0);
	MR_init_label2(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(bag__contains_2_0,
		transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0_i3);
MR_def_label(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers__142__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module26)
	MR_init_entry1(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__258__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_add_single_arg__258__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_56_95_95_49_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module27)
	MR_init_entry1(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__289__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__IntroducedFrom__pred__init_rec_input_suppliers_single_arg_others__289__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_57_95_95_49_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module28)
	MR_init_entry1(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__415__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__415__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module29)
	MR_init_entry1(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__397__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(transform_hlds__term_pass2__IntroducedFrom__pred__prove_termination_in_scc_pass__397__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,1,4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module30)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_56_95_95_49_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_97_100_100_95_115_105_110_103_108_101_95_97_114_103_95_95_50_53_56_95_95_49_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(transform_hlds__term_pass2_module31)
	MR_init_entry1(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_57_95_95_49_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_116_114_97_110_115_102_111_114_109_95_104_108_100_115_95_95_116_101_114_109_95_112_97_115_115_50_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_105_110_105_116_95_114_101_99_95_105_110_112_117_116_95_115_117_112_112_108_105_101_114_115_95_115_105_110_103_108_101_95_97_114_103_95_111_116_104_101_114_115_95_95_50_56_57_95_95_49_95_95_91_49_93_95_48_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__transform_hlds__term_pass2_maybe_bunch_0(void)
{
	transform_hlds__term_pass2_module0();
	transform_hlds__term_pass2_module1();
	transform_hlds__term_pass2_module2();
	transform_hlds__term_pass2_module3();
	transform_hlds__term_pass2_module4();
	transform_hlds__term_pass2_module5();
	transform_hlds__term_pass2_module6();
	transform_hlds__term_pass2_module7();
	transform_hlds__term_pass2_module8();
	transform_hlds__term_pass2_module9();
	transform_hlds__term_pass2_module10();
	transform_hlds__term_pass2_module11();
	transform_hlds__term_pass2_module12();
	transform_hlds__term_pass2_module13();
	transform_hlds__term_pass2_module14();
	transform_hlds__term_pass2_module15();
	transform_hlds__term_pass2_module16();
	transform_hlds__term_pass2_module17();
	transform_hlds__term_pass2_module18();
	transform_hlds__term_pass2_module19();
	transform_hlds__term_pass2_module20();
	transform_hlds__term_pass2_module21();
	transform_hlds__term_pass2_module22();
	transform_hlds__term_pass2_module23();
	transform_hlds__term_pass2_module24();
	transform_hlds__term_pass2_module25();
	transform_hlds__term_pass2_module26();
	transform_hlds__term_pass2_module27();
	transform_hlds__term_pass2_module28();
	transform_hlds__term_pass2_module29();
	transform_hlds__term_pass2_module30();
	transform_hlds__term_pass2_module31();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__transform_hlds__term_pass2__init(void);
void mercury__transform_hlds__term_pass2__init_type_tables(void);
void mercury__transform_hlds__term_pass2__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__transform_hlds__term_pass2__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__transform_hlds__term_pass2__init_complexity_procs(void);
#endif

void mercury__transform_hlds__term_pass2__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__transform_hlds__term_pass2_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass2__type_ctor_info_pass2_result_0,
		transform_hlds__term_pass2__pass2_result_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0,
		transform_hlds__term_pass2__fixpoint_dir_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_info_0,
		transform_hlds__term_pass2__call_weight_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0,
		transform_hlds__term_pass2__call_weight_graph_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0,
		transform_hlds__term_pass2__call_weight_dst_map_0_0);
	mercury__transform_hlds__term_pass2__init_debugger();
}

void mercury__transform_hlds__term_pass2__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass2__type_ctor_info_pass2_result_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass2__type_ctor_info_fixpoint_dir_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_graph_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_transform_hlds__term_pass2__type_ctor_info_call_weight_dst_map_0);
	}
}


void mercury__transform_hlds__term_pass2__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__transform_hlds__term_pass2__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__transform_hlds__term_pass2__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
