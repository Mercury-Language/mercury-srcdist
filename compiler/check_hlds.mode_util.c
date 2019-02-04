/*
** Automatically generated from `mode_util.m'
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
INIT mercury__check_hlds__mode_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "check_hlds.mode_util.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "check_hlds.mode_util.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "check_hlds.mode_util.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "check_hlds.mode_util.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "check_hlds.mode_util.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "check_hlds.mode_util.c"
#line 49 "check_hlds.mode_util.c"
#include "check_hlds.mode_util.mh"

#line 52 "check_hlds.mode_util.c"
#line 53 "check_hlds.mode_util.c"
#ifndef CHECK_HLDS__MODE_UTIL_DECL_GUARD
#define CHECK_HLDS__MODE_UTIL_DECL_GUARD

#line 57 "check_hlds.mode_util.c"
#line 58 "check_hlds.mode_util.c"

#endif
#line 61 "check_hlds.mode_util.c"

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
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0,
	mercury_data_check_hlds__mode_util__type_ctor_info_recompute_info_0;
MR_decl_label3(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0, 2,4,1)
MR_decl_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0, 20,4,5,8)
MR_decl_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0, 25,5,6,8,9,12)
MR_decl_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0, 18,4,5)
MR_decl_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0, 2)
MR_decl_label2(check_hlds__mode_util__apply_type_subst_3_0, 4,2)
MR_decl_label9(check_hlds__mode_util__compute_inst_var_sub_8_0, 55,3,11,13,15,18,17,9,8)
MR_decl_label3(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0, 5,6,2)
MR_decl_label4(check_hlds__mode_util__default_higher_order_func_inst_3_0, 4,5,7,8)
MR_decl_label7(check_hlds__mode_util__fixup_instmap_switch_var_5_0, 2,3,4,7,5,9,10)
MR_decl_label5(check_hlds__mode_util__get_arg_lives_3_0, 28,4,7,6,10)
MR_decl_label10(check_hlds__mode_util__get_single_arg_inst_4_0, 79,3,7,5,10,13,12,15,16,17)
MR_decl_label3(check_hlds__mode_util__get_single_arg_inst_4_0, 31,19,20)
MR_decl_label5(check_hlds__mode_util__get_single_arg_inst_2_3_0, 30,7,3,4,1)
MR_decl_label10(check_hlds__mode_util__inst_lookup_3_0, 4,5,8,3,14,15,16,13,22,23)
MR_decl_label10(check_hlds__mode_util__inst_lookup_3_0, 24,25,28,26,21,34,35,36,33,42)
MR_decl_label10(check_hlds__mode_util__inst_lookup_3_0, 43,44,41,50,51,52,49,58,59,60)
MR_decl_label6(check_hlds__mode_util__inst_lookup_3_0, 61,57,67,65,70,72)
MR_decl_label1(check_hlds__mode_util__inst_lookup_subst_args_5_0, 3)
MR_decl_label2(check_hlds__mode_util__mode_get_insts_4_0, 3,2)
MR_decl_label10(check_hlds__mode_util__mode_get_insts_semidet_4_0, 39,3,4,5,6,9,7,12,15,18)
MR_decl_label1(check_hlds__mode_util__mode_get_insts_semidet_4_0, 1)
MR_decl_label1(check_hlds__mode_util__mode_is_fully_input_2_0, 2)
MR_decl_label3(check_hlds__mode_util__mode_is_fully_output_2_0, 2,3,1)
MR_decl_label1(check_hlds__mode_util__mode_is_input_2_0, 2)
MR_decl_label3(check_hlds__mode_util__mode_is_output_2_0, 2,3,1)
MR_decl_label2(check_hlds__mode_util__mode_is_undefined_2_0, 4,1)
MR_decl_label3(check_hlds__mode_util__mode_is_unused_2_0, 2,3,1)
MR_decl_label3(check_hlds__mode_util__mode_list_get_final_insts_3_0, 17,4,5)
MR_decl_label3(check_hlds__mode_util__mode_list_get_initial_insts_3_0, 17,4,5)
MR_decl_label10(check_hlds__mode_util__mode_to_arg_mode_2_5_0, 49,3,5,8,10,12,13,2,17,20)
MR_decl_label3(check_hlds__mode_util__mode_to_arg_mode_2_5_0, 18,23,22)
MR_decl_label4(check_hlds__mode_util__modes_to_arg_modes_4_0, 3,9,10,8)
MR_decl_label5(check_hlds__mode_util__modes_to_uni_modes_4_0, 3,9,10,14,8)
MR_decl_label10(check_hlds__mode_util__normalise_inst_4_0, 2,6,8,12,16,5,20,22,26,30)
MR_decl_label6(check_hlds__mode_util__normalise_inst_4_0, 19,34,38,42,33,48)
MR_decl_label4(check_hlds__mode_util__normalise_insts_4_0, 3,9,10,8)
MR_decl_label6(check_hlds__mode_util__partition_args_5_0, 3,9,11,12,10,8)
MR_decl_label10(check_hlds__mode_util__propagate_ctor_info_2_4_0, 4,2,9,12,13,15,16,19,20,8)
MR_decl_label10(check_hlds__mode_util__propagate_ctor_info_3_7_0, 66,4,9,14,16,19,20,10,11,24)
MR_decl_label10(check_hlds__mode_util__propagate_ctor_info_lazily_5_0, 3,7,9,11,8,6,15,17,19,21)
MR_decl_label10(check_hlds__mode_util__propagate_ctor_info_lazily_5_0, 4,26,27,29,25,32,31,35,101,36)
MR_decl_label10(check_hlds__mode_util__propagate_ctor_info_lazily_5_0, 34,41,45,47,49,46,44,53,55,57)
MR_decl_label4(check_hlds__mode_util__propagate_ctor_info_lazily_5_0, 59,42,63,64)
MR_decl_label6(check_hlds__mode_util__propagate_ctor_info_tuple_4_0, 5,6,8,9,2,3)
MR_decl_label4(check_hlds__mode_util__propagate_type_into_mode_4_0, 2,4,5,6)
MR_decl_label4(check_hlds__mode_util__propagate_types_into_inst_list_5_0, 3,9,10,8)
MR_decl_label4(check_hlds__mode_util__propagate_types_into_mode_list_4_0, 3,9,10,8)
MR_decl_label1(check_hlds__mode_util__recompute_instmap_delta_8_0, 3)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_1_8_0, 5,7,2,3,10,11,12,13,17,19)
MR_decl_label3(check_hlds__mode_util__recompute_instmap_delta_1_8_0, 20,16,24)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0, 4,7,6,10,12,3,13,18,19,17)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0, 16,23,22,25,15,30,31,128,33,34)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0, 36,37,38,39,27,41,40,45,44,48)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0, 49,43,54,53,52,59,60,61,62,63)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0, 64,65,58,68,72,67,79,80,82,77)
MR_decl_label8(check_hlds__mode_util__recompute_instmap_delta_2_9_0, 87,86,253,92,94,91,95,96)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_call_8_0, 2,3,5,6,4,7,8,9,10,12)
MR_decl_label4(check_hlds__mode_util__recompute_instmap_delta_call_8_0, 13,15,16,18)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0, 3,11,13,14,16,15,9,22,23,8)
MR_decl_label4(check_hlds__mode_util__recompute_instmap_delta_cases_10_0, 2,5,4,6)
MR_decl_label6(check_hlds__mode_util__recompute_instmap_delta_conj_8_0, 4,3,5,6,7,9)
MR_decl_label4(check_hlds__mode_util__recompute_instmap_delta_disj_9_0, 2,5,4,6)
MR_decl_label6(check_hlds__mode_util__recompute_instmap_delta_proc_5_0, 2,3,4,5,7,8)
MR_decl_label10(check_hlds__mode_util__recompute_instmap_delta_unify_8_0, 5,7,9,12,14,15,17,4,3,22)
MR_decl_label9(check_hlds__mode_util__recompute_instmap_delta_unify_8_0, 23,26,29,28,24,36,37,21,42)
MR_decl_label10(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0, 3,6,12,13,14,15,16,18,17,11)
MR_decl_label1(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0, 25)
MR_decl_label1(fn__check_hlds__mode_util__mode_get_final_inst_2_0, 2)
MR_decl_label7(fn__check_hlds__mode_util__select_output_vars_4_0, 42,3,9,10,13,12,8)
MR_decl_label3(__Unify___check_hlds__mode_util__recompute_info_0_0, 4,8,1)
MR_decl_label4(__Compare___check_hlds__mode_util__recompute_info_0_0, 3,2,5,21)
MR_def_extern_entry(check_hlds__mode_util__mode_get_insts_semidet_4_0)
MR_def_extern_entry(check_hlds__mode_util__mode_get_insts_4_0)
MR_def_extern_entry(check_hlds__mode_util__mode_is_input_2_0)
MR_def_extern_entry(check_hlds__mode_util__mode_is_fully_input_2_0)
MR_def_extern_entry(check_hlds__mode_util__mode_is_output_2_0)
MR_def_extern_entry(check_hlds__mode_util__mode_is_fully_output_2_0)
MR_def_extern_entry(check_hlds__mode_util__mode_is_unused_2_0)
MR_def_extern_entry(check_hlds__mode_util__mode_is_undefined_2_0)
MR_decl_static(check_hlds__mode_util__apply_type_subst_3_0)
MR_def_extern_entry(check_hlds__mode_util__propagate_types_into_mode_list_4_0)
MR_def_extern_entry(check_hlds__mode_util__propagate_types_into_inst_list_5_0)
MR_decl_static(check_hlds__mode_util__propagate_type_into_mode_4_0)
MR_decl_static(check_hlds__mode_util__propagate_type_into_inst_5_0)
MR_decl_static(check_hlds__mode_util__propagate_type_into_inst_lazily_5_0)
MR_decl_static(check_hlds__mode_util__propagate_ctor_info_lazily_5_0)
MR_decl_static(check_hlds__mode_util__default_higher_order_func_inst_3_0)
MR_decl_static(check_hlds__mode_util__propagate_ctor_info_2_4_0)
MR_decl_static(check_hlds__mode_util__propagate_ctor_info_3_7_0)
MR_decl_static(check_hlds__mode_util__inst_lookup_subst_args_5_0)
MR_def_extern_entry(check_hlds__mode_util__inst_lookup_3_0)
MR_decl_static(check_hlds__mode_util__get_single_arg_inst_2_3_0)
MR_decl_static(check_hlds__mode_util__get_single_arg_inst_4_0)
MR_decl_static(check_hlds__mode_util__mode_to_arg_mode_2_5_0)
MR_def_extern_entry(check_hlds__mode_util__mode_to_arg_mode_4_0)
MR_def_extern_entry(check_hlds__mode_util__modes_to_arg_modes_4_0)
MR_def_extern_entry(fn__check_hlds__mode_util__select_output_vars_4_0)
MR_def_extern_entry(fn__check_hlds__mode_util__mode_get_initial_inst_2_0)
MR_def_extern_entry(fn__check_hlds__mode_util__mode_get_final_inst_2_0)
MR_def_extern_entry(check_hlds__mode_util__mode_list_get_initial_insts_3_0)
MR_def_extern_entry(check_hlds__mode_util__mode_list_get_final_insts_3_0)
MR_def_extern_entry(check_hlds__mode_util__modes_to_uni_modes_4_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_call_8_0)
MR_decl_static(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_unify_8_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_1_8_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_2_9_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_conj_8_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_disj_9_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_cases_10_0)
MR_def_extern_entry(check_hlds__mode_util__recompute_instmap_delta_8_0)
MR_def_extern_entry(check_hlds__mode_util__recompute_instmap_delta_proc_5_0)
MR_decl_static(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0)
MR_def_extern_entry(check_hlds__mode_util__constructors_to_bound_insts_5_0)
MR_def_extern_entry(check_hlds__mode_util__constructors_to_bound_any_insts_5_0)
MR_def_extern_entry(check_hlds__mode_util__get_arg_lives_3_0)
MR_def_extern_entry(check_hlds__mode_util__fixup_instmap_switch_var_5_0)
MR_def_extern_entry(check_hlds__mode_util__normalise_inst_4_0)
MR_def_extern_entry(check_hlds__mode_util__normalise_insts_4_0)
MR_def_extern_entry(check_hlds__mode_util__partition_args_5_0)
MR_decl_static(check_hlds__mode_util__propagate_ctor_info_tuple_4_0)
MR_decl_static(check_hlds__mode_util__compute_inst_var_sub_8_0)
MR_decl_static(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0)
MR_def_extern_entry(__Unify___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0)
MR_def_extern_entry(__Compare___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0)
MR_decl_static(__Unify___check_hlds__mode_util__recompute_info_0_0)
MR_decl_static(__Compare___check_hlds__mode_util__recompute_info_0_0)
MR_decl_static(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0)
MR_decl_static(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__965__1_2_0)
MR_decl_static(check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1540__1_2_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0)
MR_def_extern_entry(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[9] =
{
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_TAG_COMMON(3,1,0),
MR_TAG_COMMON(3,1,0)
}
},
{
{
MR_tbmkword(0, 0),
MR_TAG_COMMON(3,1,0)
}
},
{
{
MR_TAG_COMMON(0,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type)
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
MR_tbmkword(0, 1),
MR_tbmkword(0, 1)
}
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
1,
0,
MR_tbmkword(0, 0)
},
{
1,
1,
MR_tbmkword(0, 0)
},
{
1,
2,
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_2_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_2_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(0,4),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_3_7_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_sym_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_3_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, sym_name),
MR_INT_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_3_7_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_unify_8_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_unify_8_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_2_9_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_2_9_0_2;
static const struct mercury_type_4 mercury_common_4[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_3_7_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_unify_8_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_unify_8_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_2_9_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,7)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_2_9_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(0,7)
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_5 mercury_common_5[5] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__965__1_2_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1540__1_2_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1540__1_2_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_inst_0;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst)
}
},
};

static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_TAG_COMMON(3,1,0)
},
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0 = {
	"recompute_atomic_instmap_deltas",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1 = {
	"do_not_recompute_atomic_instmap_deltas",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0[] = {
	&mercury_data_check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0,
	&mercury_data_check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0[] = {
	&mercury_data_check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_1,
	&mercury_data_check_hlds__mode_util__enum_functor_desc_recompute_atomic_instmap_deltas_0_0
};

const MR_Integer mercury_data_check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0)),
	"check_hlds.mode_util",
	"recompute_atomic_instmap_deltas",
	{ (void *)mercury_data_check_hlds__mode_util__enum_name_ordered_recompute_atomic_instmap_deltas_0 },
	{ (void *)mercury_data_check_hlds__mode_util__enum_value_ordered_recompute_atomic_instmap_deltas_0 },
	2,
	4,
	mercury_data_check_hlds__mode_util__functor_number_map_recompute_atomic_instmap_deltas_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_inst_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;

const MR_PseudoTypeInfo mercury_data_check_hlds__mode_util__field_types_recompute_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1parse_tree__prog_data__type_ctor_info_inst_var_type_0
};

const MR_ConstString mercury_data_check_hlds__mode_util__field_names_recompute_info_0_0[] = {
	"ri_module_info",
	"ri_inst_varset"
};

static const MR_DuFunctorDesc mercury_data_check_hlds__mode_util__du_functor_desc_recompute_info_0_0 = {
	"recompute_info",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_check_hlds__mode_util__field_types_recompute_info_0_0,
	mercury_data_check_hlds__mode_util__field_names_recompute_info_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_util__du_stag_ordered_recompute_info_0_0[] = {
	&mercury_data_check_hlds__mode_util__du_functor_desc_recompute_info_0_0

};

const MR_DuPtagLayout mercury_data_check_hlds__mode_util__du_ptag_ordered_recompute_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_check_hlds__mode_util__du_stag_ordered_recompute_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_check_hlds__mode_util__du_name_ordered_recompute_info_0[] = {
	&mercury_data_check_hlds__mode_util__du_functor_desc_recompute_info_0_0
};

const MR_Integer mercury_data_check_hlds__mode_util__functor_number_map_recompute_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__mode_util__type_ctor_info_recompute_info_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__mode_util__recompute_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__mode_util__recompute_info_0_0)),
	"check_hlds.mode_util",
	"recompute_info",
	{ (void *)mercury_data_check_hlds__mode_util__du_name_ordered_recompute_info_0 },
	{ (void *)mercury_data_check_hlds__mode_util__du_ptag_ordered_recompute_info_0 },
	1,
	4,
	mercury_data_check_hlds__mode_util__functor_number_map_recompute_info_0
};


static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_2_9_0_2 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.mode_util",
"mode_util.m",
1253,
"132"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_2_9_0_1 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"check_hlds.mode_util",
"mode_util.m",
1244,
"122"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_unify_8_0_2 = {
{
MR_PREDICATE,
"check_hlds.mode_util",
"check_hlds.mode_util",
"lambda_mode_util_m_1540",
2,
0
},
"check_hlds.mode_util",
"mode_util.m",
1540,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__recompute_instmap_delta_unify_8_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_util",
"check_hlds.mode_util",
"lambda_mode_util_m_1540",
2,
0
},
"check_hlds.mode_util",
"mode_util.m",
1540,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_3_7_0_2 = {
{
MR_PREDICATE,
"check_hlds.mode_util",
"check_hlds.mode_util",
"lambda_mode_util_m_965",
2,
0
},
"check_hlds.mode_util",
"mode_util.m",
964,
"40"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_3_7_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_util",
"check_hlds.mode_util",
"lambda_mode_util_m_957",
3,
0
},
"check_hlds.mode_util",
"mode_util.m",
957,
"29"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__mode_util__propagate_ctor_info_2_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.mode_util",
"check_hlds.mode_util",
"propagate_ctor_info_tuple",
4,
0
},
"check_hlds.mode_util",
"mode_util.m",
898,
"9"
};


MR_decl_entry(list__length_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_mode_table_2_0);
MR_decl_entry(hlds__hlds_data__mode_table_get_mode_defns_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mode_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_mode_defn_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(parse_tree__prog_mode__mode_substitute_arg_list_4_0);
MR_decl_entry(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module0)
	MR_init_entry1(check_hlds__mode_util__mode_get_insts_semidet_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_get_insts_semidet_4_0);
	MR_init_label10(check_hlds__mode_util__mode_get_insts_semidet_4_0,39,3,4,5,6,9,7,12,15,18)
	MR_init_label1(check_hlds__mode_util__mode_get_insts_semidet_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_get_insts_semidet'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_get_insts_semidet_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_get_insts_semidet_4_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i4);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_mode_table_2_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i5);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__mode_table_get_mode_defns_2_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i6);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mode_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_mode_defn);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i9);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_get_insts_semidet_4_0_i7);
	}
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__mode_substitute_arg_list_4_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i18);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_get_insts_semidet_4_0_i1);
	}
	MR_sv(5) = MR_tfield(0, MR_sv(5), 0);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_public_builtin_module_0_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i12);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mode_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_mode_defn);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i15);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_get_insts_semidet_4_0_i1);
	}
	MR_r3 = MR_sv(2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__mode_substitute_arg_list_4_0,
		check_hlds__mode_util__mode_get_insts_semidet_4_0_i18);
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(check_hlds__mode_util__mode_get_insts_semidet_4_0_i39);
	}
MR_def_label(check_hlds__mode_util__mode_get_insts_semidet_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module1)
	MR_init_entry1(check_hlds__mode_util__mode_get_insts_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_get_insts_4_0);
	MR_init_label2(check_hlds__mode_util__mode_get_insts_4_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_get_insts'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_get_insts_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		check_hlds__mode_util__mode_get_insts_4_0_i3);
MR_def_label(check_hlds__mode_util__mode_get_insts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_get_insts_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__mode_util__mode_get_insts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.mode_get_insts\'/4", 49);
	MR_r3 = (MR_Word) MR_string_const("mode_get_insts_semidet failed", 29);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_bound_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module2)
	MR_init_entry1(check_hlds__mode_util__mode_is_input_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_is_input_2_0);
	MR_init_label1(check_hlds__mode_util__mode_is_input_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_is_input'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_is_input_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_is_input_2_0_i2);
MR_def_label(check_hlds__mode_util__mode_is_input_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_bound_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_ground_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module3)
	MR_init_entry1(check_hlds__mode_util__mode_is_fully_input_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_is_fully_input_2_0);
	MR_init_label1(check_hlds__mode_util__mode_is_fully_input_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_is_fully_input'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_is_fully_input_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_is_fully_input_2_0_i2);
MR_def_label(check_hlds__mode_util__mode_is_fully_input_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_ground_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_free_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module4)
	MR_init_entry1(check_hlds__mode_util__mode_is_output_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_is_output_2_0);
	MR_init_label3(check_hlds__mode_util__mode_is_output_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_is_output'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_is_output_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_is_output_2_0_i2);
MR_def_label(check_hlds__mode_util__mode_is_output_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__mode_util__mode_is_output_2_0_i3);
MR_def_label(check_hlds__mode_util__mode_is_output_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_is_output_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_bound_2_0);
MR_def_label(check_hlds__mode_util__mode_is_output_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__mode_util_module5)
	MR_init_entry1(check_hlds__mode_util__mode_is_fully_output_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_is_fully_output_2_0);
	MR_init_label3(check_hlds__mode_util__mode_is_fully_output_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_is_fully_output'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_is_fully_output_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_is_fully_output_2_0_i2);
MR_def_label(check_hlds__mode_util__mode_is_fully_output_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__mode_util__mode_is_fully_output_2_0_i3);
MR_def_label(check_hlds__mode_util__mode_is_fully_output_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_is_fully_output_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_ground_2_0);
MR_def_label(check_hlds__mode_util__mode_is_fully_output_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__mode_util_module6)
	MR_init_entry1(check_hlds__mode_util__mode_is_unused_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_is_unused_2_0);
	MR_init_label3(check_hlds__mode_util__mode_is_unused_2_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_is_unused'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_is_unused_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_is_unused_2_0_i2);
MR_def_label(check_hlds__mode_util__mode_is_unused_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_free_2_0,
		check_hlds__mode_util__mode_is_unused_2_0_i3);
MR_def_label(check_hlds__mode_util__mode_is_unused_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_is_unused_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__inst_match__inst_is_free_2_0);
MR_def_label(check_hlds__mode_util__mode_is_unused_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__mode_util_module7)
	MR_init_entry1(check_hlds__mode_util__mode_is_undefined_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_is_undefined_2_0);
	MR_init_label2(check_hlds__mode_util__mode_is_undefined_2_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_is_undefined'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_is_undefined_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_semidet_4_0,
		check_hlds__mode_util__mode_is_undefined_2_0_i4);
MR_def_label(check_hlds__mode_util__mode_is_undefined_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_is_undefined_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__mode_util__mode_is_undefined_2_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
MR_decl_entry(map__is_empty_1_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_type_3_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module8)
	MR_init_entry1(check_hlds__mode_util__apply_type_subst_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__apply_type_subst_3_0);
	MR_init_label2(check_hlds__mode_util__apply_type_subst_3_0,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'apply_type_subst'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__apply_type_subst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__mode_util__apply_type_subst_3_0_i4);
MR_def_label(check_hlds__mode_util__apply_type_subst_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__apply_type_subst_3_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__apply_type_subst_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_subst_to_type_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module9)
	MR_init_entry1(check_hlds__mode_util__propagate_types_into_mode_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_types_into_mode_list_4_0);
	MR_init_label4(check_hlds__mode_util__propagate_types_into_mode_list_4_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_types_into_mode_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__propagate_types_into_mode_list_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_types_into_mode_list_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_types_into_mode_list_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__propagate_types_into_mode_list_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_types_into_mode_list_4_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_type_into_mode_4_0,
		check_hlds__mode_util__propagate_types_into_mode_list_4_0_i9);
MR_def_label(check_hlds__mode_util__propagate_types_into_mode_list_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(check_hlds__mode_util__propagate_types_into_mode_list_4_0,
		check_hlds__mode_util__propagate_types_into_mode_list_4_0_i10);
MR_def_label(check_hlds__mode_util__propagate_types_into_mode_list_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__mode_util__propagate_types_into_mode_list_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.propagate_types_into_mode_list\'/4", 65);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module10)
	MR_init_entry1(check_hlds__mode_util__propagate_types_into_inst_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_types_into_inst_list_5_0);
	MR_init_label4(check_hlds__mode_util__propagate_types_into_inst_list_5_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_types_into_inst_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__propagate_types_into_inst_list_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_types_into_inst_list_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_types_into_inst_list_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__propagate_types_into_inst_list_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_types_into_inst_list_5_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r4, 1);
	MR_sv(4) = MR_tfield(1, MR_r3, 1);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = MR_tfield(1, MR_r4, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_type_into_inst_5_0,
		check_hlds__mode_util__propagate_types_into_inst_list_5_0_i9);
MR_def_label(check_hlds__mode_util__propagate_types_into_inst_list_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__mode_util__propagate_types_into_inst_list_5_0,
		check_hlds__mode_util__propagate_types_into_inst_list_5_0_i10);
MR_def_label(check_hlds__mode_util__propagate_types_into_inst_list_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__mode_util__propagate_types_into_inst_list_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.propagate_types_into_inst_list\'/5", 65);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__init_1_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module11)
	MR_init_entry1(check_hlds__mode_util__propagate_type_into_mode_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_type_into_mode_4_0);
	MR_init_label4(check_hlds__mode_util__propagate_type_into_mode_4_0,2,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_type_into_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__propagate_type_into_mode_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__propagate_type_into_mode_4_0_i2);
MR_def_label(check_hlds__mode_util__propagate_type_into_mode_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__mode_util__propagate_type_into_mode_4_0_i4);
MR_def_label(check_hlds__mode_util__propagate_type_into_mode_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_type_into_inst_lazily_5_0,
		check_hlds__mode_util__propagate_type_into_mode_4_0_i5);
MR_def_label(check_hlds__mode_util__propagate_type_into_mode_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_type_into_inst_lazily_5_0,
		check_hlds__mode_util__propagate_type_into_mode_4_0_i6);
MR_def_label(check_hlds__mode_util__propagate_type_into_mode_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module12)
	MR_init_entry1(check_hlds__mode_util__propagate_type_into_inst_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_type_into_inst_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_type_into_inst'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__propagate_type_into_inst_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__mode_util__propagate_ctor_info_lazily_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module13)
	MR_init_entry1(check_hlds__mode_util__propagate_type_into_inst_lazily_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_type_into_inst_lazily_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_type_into_inst_lazily'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__propagate_type_into_inst_lazily_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__mode_util__propagate_ctor_info_lazily_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_is_higher_order_details_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_mode_0;
MR_decl_entry(list__same_length_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module14)
	MR_init_entry1(check_hlds__mode_util__propagate_ctor_info_lazily_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_ctor_info_lazily_5_0);
	MR_init_label10(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,3,7,9,11,8,6,15,17,19,21)
	MR_init_label10(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,4,26,27,29,25,32,31,35,101,36)
	MR_init_label10(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,34,41,45,47,49,46,44,53,55,57)
	MR_init_label4(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,59,42,63,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_ctor_info_lazily'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__propagate_ctor_info_lazily_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,5)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i3);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r4,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i4);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r5 = MR_tfield(2, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i6);
	}
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__apply_type_subst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i7);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i9);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i8);
	}
	if (((MR_Integer) 1 != (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i8);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_util__default_higher_order_func_inst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i11);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(7);
	MR_tfield(2, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_tempr1 = MR_body((MR_Integer) MR_r5, (MR_Integer) 1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(2, MR_tempr2, 0);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__apply_type_subst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i15);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i17);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i101);
	}
	if ((MR_sv(1) != MR_r3)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i101);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(6) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__same_length_2_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i19);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i101);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_types_into_mode_list_4_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i21);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_sv(7);
	MR_tfield(2, MR_r1, 1) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r2);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i25);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__apply_type_subst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i26);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_ctor_info_2_4_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i27);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i29);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,3)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i31);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(3, MR_r4, 1);
	MR_r4 = MR_tfield(3, MR_r4, 2);
	MR_np_localcall_lab(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i32);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,4)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i34);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__apply_type_subst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i35);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(5),3,5)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i36);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i41);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i42);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r5 = MR_tfield(3, MR_tempr1, 2);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i44);
	}
	MR_sv(5) = MR_r1;
	MR_sv(7) = MR_tfield(3, MR_tempr1, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__apply_type_subst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i45);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i47);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i46);
	}
	if (((MR_Integer) 1 != (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i46);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_r5;
	MR_np_call_localret_ent(check_hlds__mode_util__default_higher_order_func_inst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i49);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_r1);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(4) = MR_tempr2;
	MR_tempr1 = MR_body((MR_Integer) MR_r5, (MR_Integer) 1);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__apply_type_subst_3_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i53);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i55);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i101);
	}
	if ((MR_sv(2) != MR_r3)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i101);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__same_length_2_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i57);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i101);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_types_into_mode_list_4_0,
		check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i59);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_sv(7);
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_decr_sp_and_return(8);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r4,3,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i63);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r4,0,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_lazily_5_0_i64);
	}
	MR_r1 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__mode_util__propagate_ctor_info_lazily_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.propagate_ctor_info_lazily\'/5", 61);
	MR_r3 = (MR_Word) MR_string_const("typeinfo already present", 24);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__duplicate_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(check_hlds__mode_util_module15)
	MR_init_entry1(check_hlds__mode_util__default_higher_order_func_inst_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__default_higher_order_func_inst_3_0);
	MR_init_label4(check_hlds__mode_util__default_higher_order_func_inst_3_0,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'default_higher_order_func_inst'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__default_higher_order_func_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__mode_util__default_higher_order_func_inst_3_0_i4);
MR_def_label(check_hlds__mode_util__default_higher_order_func_inst_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,1);
	}
	MR_np_call_localret_ent(list__duplicate_3_0,
		check_hlds__mode_util__default_higher_order_func_inst_3_0_i5);
MR_def_label(check_hlds__mode_util__default_higher_order_func_inst_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(1,0,3);
	}
	MR_np_call_localret_ent(list__append_3_1,
		check_hlds__mode_util__default_higher_order_func_inst_3_0_i7);
MR_def_label(check_hlds__mode_util__default_higher_order_func_inst_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_types_into_mode_list_4_0,
		check_hlds__mode_util__default_higher_order_func_inst_3_0_i8);
MR_def_label(check_hlds__mode_util__default_higher_order_func_inst_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 0;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_is_tuple_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_bound_inst_0;
MR_decl_entry(list__map_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
MR_decl_entry(hlds__hlds_data__search_type_ctor_defn_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);
MR_decl_entry(list__sort_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module16)
	MR_init_entry1(check_hlds__mode_util__propagate_ctor_info_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_ctor_info_2_4_0);
	MR_init_label10(check_hlds__mode_util__propagate_ctor_info_2_4_0,4,2,9,12,13,15,16,19,20,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_ctor_info_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__propagate_ctor_info_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_tuple_2_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i4);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_2_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_util__propagate_ctor_info_tuple_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__map_3_0);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i9);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_2_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_2_4_0_i8);
	}
	MR_sv(3) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i12);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_data__search_type_ctor_defn_3_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i13);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_2_4_0_i8);
	}
	MR_sv(5) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i15);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i16);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_2_4_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i19);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(2);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_ctor_info_3_7_0,
		check_hlds__mode_util__propagate_ctor_info_2_4_0_i20);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, bound_inst);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(list__sort_2_0);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
MR_decl_entry(list__filter_3_0);
MR_decl_entry(__Unify___list__list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;

MR_BEGIN_MODULE(check_hlds__mode_util_module17)
	MR_init_entry1(check_hlds__mode_util__propagate_ctor_info_3_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_ctor_info_3_7_0);
	MR_init_label10(check_hlds__mode_util__propagate_ctor_info_3_7_0,66,4,9,14,16,19,20,10,11,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_ctor_info_3'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__propagate_ctor_info_3_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_3_7_0_i66);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr6 = MR_r6;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 0);
	MR_r7 = MR_tempr1;
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_r8 = MR_tempr2;
	MR_sv(5) = MR_tfield(1, MR_tempr6, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_3_7_0_i4);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	if (MR_PTAG_TESTR(MR_tempr3,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_3_7_0_i4);
	}
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r7 = MR_tempr4;
	MR_tempr7 = MR_r4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr4, 1) = MR_tfield(0, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_sv(8) = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr4;
	MR_tfield(3, MR_tempr5, 2) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr8 = MR_r3;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr8;
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr8;
	MR_sv(3) = MR_tempr7;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_3_7_0_i9);
	}
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r3 = MR_r5;
	MR_sv(8) = MR_r8;
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(8),3,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_3_7_0_i11);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 5);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(8);
	MR_tfield(0, MR_r2, 3) = MR_tfield(3, MR_tempr1, 1);
	MR_tfield(0, MR_r2, 4) = MR_tfield(3, MR_tempr1, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__mode_util__propagate_ctor_info_3_7_0_i14);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_3_7_0_i10);
	}
	MR_sv(9) = MR_tfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__mode_util__propagate_ctor_info_3_7_0_i16);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_3_7_0_i10);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_tfield(0, MR_sv(9), 3);
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__mode_util__propagate_ctor_info_3_7_0_i19);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_types_into_inst_list_5_0,
		check_hlds__mode_util__propagate_ctor_info_3_7_0_i20);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__mode_util__propagate_ctor_info_3_7_0,
		check_hlds__mode_util__propagate_ctor_info_3_7_0_i24);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(7);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_sv(5);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_localcall_lab(check_hlds__mode_util__propagate_ctor_info_3_7_0,
		check_hlds__mode_util__propagate_ctor_info_3_7_0_i24);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_3_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(6);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_mode__inst_substitute_arg_list_4_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module18)
	MR_init_entry1(check_hlds__mode_util__inst_lookup_subst_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__inst_lookup_subst_args_5_0);
	MR_init_label1(check_hlds__mode_util__inst_lookup_subst_args_5_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_lookup_subst_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__inst_lookup_subst_args_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_subst_args_5_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_r3;
	MR_tfield(3, MR_r1, 2) = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__mode_util__inst_lookup_subst_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_r4;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	MR_np_tailcall_ent(parse_tree__prog_mode__inst_substitute_arg_list_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_inst_table_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_merge_insts_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_maybe_inst_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_unify_insts_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_maybe_inst_det_0;
MR_decl_entry(hlds__hlds_data__inst_table_get_user_insts_2_0);
MR_decl_entry(hlds__hlds_data__user_inst_table_get_inst_defns_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_inst_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_inst_defn_0;
MR_decl_entry(hlds__hlds_data__inst_table_get_any_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_ground_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0);
MR_decl_entry(hlds__hlds_data__inst_table_get_shared_insts_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module19)
	MR_init_entry1(check_hlds__mode_util__inst_lookup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__inst_lookup_3_0);
	MR_init_label10(check_hlds__mode_util__inst_lookup_3_0,4,5,8,3,14,15,16,13,22,23)
	MR_init_label10(check_hlds__mode_util__inst_lookup_3_0,24,25,28,26,21,34,35,36,33,42)
	MR_init_label10(check_hlds__mode_util__inst_lookup_3_0,43,44,41,50,51,52,49,58,59,60)
	MR_init_label6(check_hlds__mode_util__inst_lookup_3_0,61,57,67,65,70,72)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__inst_lookup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_merge_insts_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i5);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i8);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i61);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i13);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i14);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_unify_insts_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i15);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i16);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i61);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i21);
	}
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i22);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_user_insts_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i23);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__user_inst_table_get_inst_defns_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i24);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i25);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_inst_defn);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i28);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i26);
	}
	MR_r1 = MR_tfield(0, MR_r2, 2);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__mode_util__inst_lookup_subst_args_5_0);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_tfield(3, MR_r1, 2) = MR_sv(2);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i33);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i34);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_any_insts_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i35);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i36);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i61);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i41);
	}
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i42);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_ground_insts_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i43);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst_det);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i44);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i61);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i49);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i50);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_mostly_uniq_insts_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i51);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i52);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i61);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i57);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_inst_table_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i58);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_data__inst_table_get_shared_insts_2_0,
		check_hlds__mode_util__inst_lookup_3_0_i59);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_name);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, maybe_inst);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i60);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i61);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_r1, 1) = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(check_hlds__mode_util__inst_lookup_3_0_i65);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__mode_util__inst_lookup_3_0_i67);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__mode_util__propagate_type_into_inst_5_0);
	}
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_localcall_lab(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__mode_util__inst_lookup_3_0_i70);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__mode_util__inst_lookup_3_0_i72);
MR_def_label(check_hlds__mode_util__inst_lookup_3_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(check_hlds__mode_util__propagate_type_into_inst_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_data__equivalent_cons_ids_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module20)
	MR_init_entry1(check_hlds__mode_util__get_single_arg_inst_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__get_single_arg_inst_2_3_0);
	MR_init_label5(check_hlds__mode_util__get_single_arg_inst_2_3_0,30,7,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_single_arg_inst_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__get_single_arg_inst_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mode_util__get_single_arg_inst_2_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_2_3_0_i1);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_2_3_0_i4);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_2_3_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_data__equivalent_cons_ids_2_0,
		check_hlds__mode_util__get_single_arg_inst_2_3_0_i7);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_2_3_0_i3);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_2_3_0_i30);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module21)
	MR_init_entry1(check_hlds__mode_util__get_single_arg_inst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__get_single_arg_inst_4_0);
	MR_init_label10(check_hlds__mode_util__get_single_arg_inst_4_0,79,3,7,5,10,13,12,15,16,17)
	MR_init_label3(check_hlds__mode_util__get_single_arg_inst_4_0,31,19,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_single_arg_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__get_single_arg_inst_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_r1, 0) = MR_tfield(2, MR_r2, 0);
	MR_tfield(2, MR_r1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i5);
	}
	MR_r1 = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__mode_util__get_single_arg_inst_2_3_0,
		check_hlds__mode_util__get_single_arg_inst_4_0_i7);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i31);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i10);
	}
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i79);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(check_hlds__mode_util__inst_lookup_3_0,
		check_hlds__mode_util__get_single_arg_inst_4_0_i13);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i79);
	}
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i16);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i17);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r1, 1) = MR_tfield(3, MR_r2, 1);
	MR_tfield(3, MR_r1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i19);
	}
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_single_arg_inst_4_0_i20);
	}
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("abstract insts not supported", 28);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__mode_util__get_single_arg_inst_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.get_single_arg_inst\'/4", 54);
	MR_r3 = (MR_Word) MR_string_const("inst_var", 8);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__type_is_no_tag_type_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module22)
	MR_init_entry1(check_hlds__mode_util__mode_to_arg_mode_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_to_arg_mode_2_5_0);
	MR_init_label10(check_hlds__mode_util__mode_to_arg_mode_2_5_0,49,3,5,8,10,12,13,2,17,20)
	MR_init_label3(check_hlds__mode_util__mode_to_arg_mode_2_5_0,18,23,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_to_arg_mode_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__mode_to_arg_mode_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_is_no_tag_type_4_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i3);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_to_arg_mode_2_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i5);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_to_arg_mode_2_5_0_i2);
	}
	MR_sv(4) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__member_2_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i8);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_to_arg_mode_2_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i10);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_sv(6) = MR_r2;
	MR_sv(5) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__get_single_arg_inst_4_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i12);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__get_single_arg_inst_4_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i13);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(6);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(check_hlds__mode_util__mode_to_arg_mode_2_5_0_i49);
	}
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i17);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i20);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_to_arg_mode_2_5_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		check_hlds__mode_util__mode_to_arg_mode_2_5_0_i23);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_to_arg_mode_2_5_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__mode_util__mode_to_arg_mode_2_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module23)
	MR_init_entry1(check_hlds__mode_util__mode_to_arg_mode_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_to_arg_mode'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_to_arg_mode_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(check_hlds__mode_util__mode_to_arg_mode_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module24)
	MR_init_entry1(check_hlds__mode_util__modes_to_arg_modes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__modes_to_arg_modes_4_0);
	MR_init_label4(check_hlds__mode_util__modes_to_arg_modes_4_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modes_to_arg_modes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__modes_to_arg_modes_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__modes_to_arg_modes_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__modes_to_arg_modes_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__modes_to_arg_modes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__modes_to_arg_modes_4_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_2_5_0,
		check_hlds__mode_util__modes_to_arg_modes_4_0_i9);
MR_def_label(check_hlds__mode_util__modes_to_arg_modes_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(check_hlds__mode_util__modes_to_arg_modes_4_0,
		check_hlds__mode_util__modes_to_arg_modes_4_0_i10);
MR_def_label(check_hlds__mode_util__modes_to_arg_modes_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__mode_util__modes_to_arg_modes_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.modes_to_arg_modes\'/4", 53);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module25)
	MR_init_entry1(fn__check_hlds__mode_util__select_output_vars_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_util__select_output_vars_4_0);
	MR_init_label7(fn__check_hlds__mode_util__select_output_vars_4_0,42,3,9,10,13,12,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'select_output_vars'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_util__select_output_vars_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__check_hlds__mode_util__select_output_vars_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__select_output_vars_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__select_output_vars_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(8);
MR_def_label(fn__check_hlds__mode_util__select_output_vars_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__select_output_vars_4_0_i8);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r5;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(5) = MR_r1;
	MR_tempr3 = MR_r3;
	MR_sv(6) = MR_tfield(1, MR_tempr3, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(7);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		fn__check_hlds__mode_util__select_output_vars_4_0_i9);
MR_def_label(fn__check_hlds__mode_util__select_output_vars_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_2_5_0,
		fn__check_hlds__mode_util__select_output_vars_4_0_i10);
MR_def_label(fn__check_hlds__mode_util__select_output_vars_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__select_output_vars_4_0_i12);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_np_localcall_lab(fn__check_hlds__mode_util__select_output_vars_4_0,
		fn__check_hlds__mode_util__select_output_vars_4_0_i13);
MR_def_label(fn__check_hlds__mode_util__select_output_vars_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(8);
	}
MR_def_label(fn__check_hlds__mode_util__select_output_vars_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__check_hlds__mode_util__select_output_vars_4_0_i42);
MR_def_label(fn__check_hlds__mode_util__select_output_vars_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_util.select_output_vars\'/4", 52);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module26)
	MR_init_entry1(fn__check_hlds__mode_util__mode_get_initial_inst_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_util__mode_get_initial_inst_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_get_initial_inst'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_util__mode_get_initial_inst_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(check_hlds__mode_util__mode_get_insts_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module27)
	MR_init_entry1(fn__check_hlds__mode_util__mode_get_final_inst_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_util__mode_get_final_inst_2_0);
	MR_init_label1(fn__check_hlds__mode_util__mode_get_final_inst_2_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_get_final_inst'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__mode_util__mode_get_final_inst_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		fn__check_hlds__mode_util__mode_get_final_inst_2_0_i2);
MR_def_label(fn__check_hlds__mode_util__mode_get_final_inst_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module28)
	MR_init_entry1(check_hlds__mode_util__mode_list_get_initial_insts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_list_get_initial_insts_3_0);
	MR_init_label3(check_hlds__mode_util__mode_list_get_initial_insts_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_list_get_initial_insts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_list_get_initial_insts_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_list_get_initial_insts_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__mode_list_get_initial_insts_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_list_get_initial_insts_3_0_i4);
MR_def_label(check_hlds__mode_util__mode_list_get_initial_insts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__mode_util__mode_list_get_initial_insts_3_0_i5);
MR_def_label(check_hlds__mode_util__mode_list_get_initial_insts_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module29)
	MR_init_entry1(check_hlds__mode_util__mode_list_get_final_insts_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__mode_list_get_final_insts_3_0);
	MR_init_label3(check_hlds__mode_util__mode_list_get_final_insts_3_0,17,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'mode_list_get_final_insts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__mode_list_get_final_insts_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__mode_list_get_final_insts_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__mode_list_get_final_insts_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__mode_list_get_final_insts_3_0_i4);
MR_def_label(check_hlds__mode_util__mode_list_get_final_insts_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_localcall_lab(check_hlds__mode_util__mode_list_get_final_insts_3_0,
		check_hlds__mode_util__mode_list_get_final_insts_3_0_i5);
MR_def_label(check_hlds__mode_util__mode_list_get_final_insts_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module30)
	MR_init_entry1(check_hlds__mode_util__modes_to_uni_modes_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__modes_to_uni_modes_4_0);
	MR_init_label5(check_hlds__mode_util__modes_to_uni_modes_4_0,3,9,10,14,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'modes_to_uni_modes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__modes_to_uni_modes_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__modes_to_uni_modes_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__modes_to_uni_modes_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__modes_to_uni_modes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__modes_to_uni_modes_4_0_i8);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__modes_to_uni_modes_4_0_i9);
MR_def_label(check_hlds__mode_util__modes_to_uni_modes_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__modes_to_uni_modes_4_0_i10);
MR_def_label(check_hlds__mode_util__modes_to_uni_modes_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr2, 1) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tempr3;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(check_hlds__mode_util__modes_to_uni_modes_4_0,
		check_hlds__mode_util__modes_to_uni_modes_4_0_i14);
MR_def_label(check_hlds__mode_util__modes_to_uni_modes_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(check_hlds__mode_util__modes_to_uni_modes_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.modes_to_uni_modes\'/4", 53);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_unreachable_1_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_argmodes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_inst_varset_2_0);
MR_decl_entry(parse_tree__prog_mode__rename_apart_inst_vars_4_0);
MR_decl_entry(parse_tree__prog_mode__mode_list_apply_substitution_3_0);
MR_decl_entry(hlds__instmap__instmap_delta_from_mode_list_4_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module31)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_call_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_call_8_0);
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_call_8_0,2,3,5,6,4,7,8,9,10,12)
	MR_init_label4(check_hlds__mode_util__recompute_instmap_delta_call_8_0,13,15,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_call'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_call_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(1) = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r6;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(5) = MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i2);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i3);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_call_8_0_i4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i6);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_decr_sp_and_return(8);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i7);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i8);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(5), 1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__rename_apart_inst_vars_4_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i9);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_list_get_initial_insts_3_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i10);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,5);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i12);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tfield(0, MR_sv(5), 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__compute_inst_var_sub_8_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i13);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(5), 1);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(parse_tree__prog_mode__mode_list_apply_substitution_3_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i15);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tfield(0, MR_sv(7), 0);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i16);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(7), 1);
	MR_tempr2 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_tempr3 = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_mode_list_4_0,
		check_hlds__mode_util__recompute_instmap_delta_call_8_0_i18);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_4_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(list__drop_3_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module32)
	MR_init_entry1(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0);
	MR_init_label10(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,3,6,12,13,14,15,16,18,17,11)
	MR_init_label1(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cons_id_to_shared_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(((((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 11)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 1))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 0))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 2))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 10))) || (MR_tag(MR_r2) == MR_mktag((MR_Integer) 1))) || ((MR_Integer) MR_r2 == (MR_Integer) MR_tbmkword(0, 0))))) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,7,0);
	MR_proceed();
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 7)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 6))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 5))) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 8))))) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i11);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i12);
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_4_0,
		fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i13);
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i14);
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i15);
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_argmodes_2_0,
		fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i16);
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__drop_3_0,
		fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i18);
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = (MR_Word) MR_tmkword(1, (MR_Word *) MR_tempr1);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_util.cons_id_to_shared_inst\'/3", 56);
	MR_r3 = (MR_Word) MR_string_const("list.drop failed", 16);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!((((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 2)) || ((MR_tag(MR_r2) == MR_mktag((MR_Integer) 3)) && ((MR_Integer) MR_tfield(3, MR_r2, 0) == (MR_Integer) 3))))) {
		MR_GOTO_LAB(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("function \140check_hlds.mode_util.cons_id_to_shared_inst\'/3", 56);
	MR_r3 = (MR_Word) MR_string_const("impl_defined_const", 18);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);
MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_search_var_3_0);
MR_decl_entry(fn__list__length_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_init_reachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_set_var_4_0);
MR_decl_entry(hlds__instmap__instmap_lookup_var_3_0);
MR_decl_entry(check_hlds__inst_util__abstractly_unify_inst_8_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_uni_mode_0;

MR_BEGIN_MODULE(check_hlds__mode_util_module33)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_unify_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_unify_8_0);
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,5,7,9,12,14,15,17,4,3,22)
	MR_init_label9(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,23,26,29,28,24,36,37,21,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_unify'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_unify_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i3);
	}
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(5) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_sv(7) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i7);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i4);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i9);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i12);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i4);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__list__length_1_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i14);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__mode_util__cons_id_to_shared_inst_3_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i15);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i4);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i17);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i42);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i42);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i21);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(1, MR_r1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 2);
	MR_sv(4) = MR_tfield(1, MR_r1, 3);
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i22);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i23);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_search_var_3_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i26);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i29);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i28);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r4;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(7), 1);
	MR_r4 = MR_sv(4);
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_sv(7) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i37);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.recompute_instmap_delta_unify\'/8", 64);
	MR_r3 = (MR_Word) MR_string_const("abstractly_unify_inst failed", 28);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i36);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r4 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_tempr1;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, uni_mode);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_mode);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i37);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_mode_list_4_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i42);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r5;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_unify_8_0_i42);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0);
MR_decl_entry(hlds__instmap__instmap_is_unreachable_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_restrict_3_0);
MR_decl_entry(hlds__hlds_goal__goal_info_set_instmap_delta_3_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module34)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_1_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_1_8_0);
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_1_8_0,5,7,2,3,10,11,12,13,17,19)
	MR_init_label3(check_hlds__mode_util__recompute_instmap_delta_1_8_0,20,16,24)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_1'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_1_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_r6 = MR_tempr1;
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_1_8_0_i3);
	}
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(6) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_expr_has_subgoals_1_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_1_8_0_i2);
	}
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_1_8_0_i7);
	}
	MR_r2 = MR_tfield(1, MR_sv(6), 1);
	if (MR_PTAG_TEST(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_1_8_0_i2);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_sv(6);
	MR_sv(4) = MR_sv(2);
	MR_sv(6) = MR_sv(5);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i17);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_r6 = MR_sv(6);
	MR_r5 = MR_sv(5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r2 = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_r5 = MR_sv(1);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_2_9_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i10);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i11);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_restrict_3_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i12);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i13);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__instmap__instmap_is_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i17);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_1_8_0_i16);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i19);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i20);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i24);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_1_8_0_i24);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_1_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_delta_is_reachable_1_0);
MR_decl_entry(hlds__instmap__pre_lambda_update_5_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0);
MR_decl_entry(hlds__instmap__instmap_delta_apply_instmap_delta_4_0);
MR_decl_entry(hlds__hlds_goal__goal_info_has_feature_2_0);
MR_decl_entry(hlds__instmap__apply_instmap_delta_3_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module35)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_2_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_2_9_0);
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0,4,7,6,10,12,3,13,18,19,17)
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0,16,23,22,25,15,30,31,128,33,34)
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0,36,37,38,39,27,41,40,45,44,48)
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0,49,43,54,53,52,59,60,61,62,63)
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_2_9_0,64,65,58,68,72,67,79,80,82,77)
	MR_init_label8(check_hlds__mode_util__recompute_instmap_delta_2_9_0,87,86,253,92,94,91,95,96)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_2'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_2_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i3);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_body((MR_Integer) MR_r2, (MR_Integer) 0);
	MR_sv(13) = MR_r6;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i4);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_is_reachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i7);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i6);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i10);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i10);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_sv(9) = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i12);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tmkword(0, (MR_Word *) MR_r1);
	MR_r2 = MR_sv(9);
	MR_decr_sp_and_return(18);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i13);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_r2 = MR_tfield(2, MR_r2, 1);
	MR_r3 = MR_tfield(2, MR_sv(5), 2);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_call_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i128);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i15);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(1, MR_r2, 1);
	MR_r7 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i17);
	}
	MR_sv(9) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 2);
	MR_sv(7) = MR_tfield(1, MR_r2, 3);
	MR_sv(8) = MR_tfield(1, MR_r2, 4);
	MR_sv(3) = ((MR_Integer) MR_tfield(2, MR_tempr1, 0) & (MR_Integer) 3);
	MR_sv(14) = (((MR_Integer) MR_tfield(2, MR_tempr1, 0) >> (MR_Integer) 2) & (MR_Integer) 1);
	MR_sv(10) = (((MR_Integer) MR_tfield(2, MR_tempr1, 0) >> (MR_Integer) 3) & (MR_Integer) 1);
	MR_sv(11) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(12) = MR_tfield(2, MR_tempr1, 6);
	MR_tempr3 = MR_r6;
	MR_sv(13) = MR_tempr3;
	MR_sv(15) = MR_tfield(2, MR_tempr1, 5);
	MR_sv(16) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(17) = MR_tfield(2, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(17);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__pre_lambda_update_5_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i18);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i19);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 7);
	MR_tfield(2, MR_r2, 0) = ((MR_Integer) MR_sv(3) | (((MR_Integer) MR_sv(14) << (MR_Integer) 2) | ((MR_Integer) MR_sv(10) << (MR_Integer) 3)));
	MR_tfield(2, MR_r2, 2) = MR_sv(16);
	MR_tfield(2, MR_r2, 3) = MR_sv(11);
	MR_tfield(2, MR_r2, 4) = MR_sv(17);
	MR_tfield(2, MR_r2, 5) = MR_sv(15);
	MR_tfield(2, MR_r2, 6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_r3;
	MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i16);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_r2, 0);
	MR_sv(6) = MR_tfield(1, MR_r2, 2);
	MR_sv(7) = MR_tfield(1, MR_r2, 3);
	MR_sv(8) = MR_tfield(1, MR_r2, 4);
	MR_r2 = MR_r7;
	MR_sv(4) = MR_r6;
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(9),1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i22);
	}
	MR_sv(9) = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i23);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(8);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_unify_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i25);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 5);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 2) = MR_r1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 4) = MR_sv(8);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i27);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(5) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(9) = MR_tfield(3, MR_r2, 5);
	MR_sv(13) = MR_r6;
	MR_sv(6) = MR_tfield(3, MR_r2, 2);
	MR_sv(7) = MR_tfield(3, MR_r2, 3);
	MR_sv(8) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_tfield(3, MR_sv(5), 4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i30);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_call_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i31);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(9),0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i33);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i34);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i36);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i37);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_restrict_3_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i38);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 0;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i39);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i40);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(9) = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i41);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i43);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(9) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i45);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i44);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i94);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i48);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_disj_9_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i49);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i52);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(4) = MR_tfield(3, MR_r2, 2);
	MR_sv(9) = MR_tfield(3, MR_r2, 3);
	MR_sv(5) = MR_r2;
	MR_sv(13) = MR_r6;
	MR_r1 = MR_tfield(3, MR_r2, 4);
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i54);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i53);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i94);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tfield(0, MR_sv(13), 0);
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_from_mode_list_4_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i94);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i58);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(4) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r5;
	MR_sv(2) = MR_tempr2;
	MR_sv(5) = MR_tfield(3, MR_r2, 1);
	MR_sv(6) = MR_tfield(3, MR_r2, 3);
	MR_sv(7) = MR_tfield(3, MR_r2, 4);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i59);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(14) = MR_r3;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i60);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(14);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i61);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i62);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Integer) 2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i63);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i64);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i65);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(8);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr3;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i67);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_r3 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_sv(9) = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,4)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i68);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 2);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i68);
	}
	MR_sv(5) = MR_r2;
	MR_sv(13) = MR_r6;
	MR_r1 = MR_tfield(0, MR_r3, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i94);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i72);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i253);
	}
	MR_r7 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_r7,1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i77);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tempr2 = MR_r7;
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(1, MR_tempr2, 4);
	MR_tfield(1, MR_tempr1, 1) = MR_tfield(1, MR_tempr2, 5);
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(5) = MR_tfield(1, MR_tempr2, 0);
	MR_sv(4) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 6);
	MR_sv(13) = MR_r6;
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i79);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_disj_9_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i80);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i82);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 7);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 4) = MR_tfield(1, MR_r1, 0);
	MR_tfield(1, MR_tempr1, 5) = MR_tfield(1, MR_r1, 1);
	MR_tfield(1, MR_tempr1, 6) = MR_sv(8);
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_sv(9) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", 60);
	MR_sv(4) = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("Goals = []", 10);
	MR_succip_word = MR_sv(18);
	MR_decr_sp(18);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r7,2)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i86);
	}
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r7;
	MR_sv(9) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_tfield(2, MR_tempr1, 2);
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_r6;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i87);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(2, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.recompute_instmap_delta_2\'/9", 60);
	MR_r3 = (MR_Word) MR_string_const("bi_implication", 14);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,253)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(18);
	MR_sv(18) = (MR_Word) MR_succip;
	MR_sv(8) = MR_tfield(3, MR_r2, 3);
	MR_sv(7) = MR_tfield(3, MR_r2, 2);
	MR_sv(6) = MR_tfield(3, MR_r2, 1);
	MR_sv(9) = MR_r1;
	MR_sv(5) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(13) = MR_r6;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 14;
	}
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_has_feature_2_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i92);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_2_9_0_i91);
	}
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i94);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(13);
	MR_decr_sp_and_return(18);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_nonlocals_1_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i95);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_sv(13);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_cases_10_0,
		check_hlds__mode_util__recompute_instmap_delta_2_9_0_i96);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_2_9_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(18);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module36)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_conj_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_conj_8_0);
	MR_init_label6(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,4,3,5,6,7,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_conj'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_conj_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_conj_8_0_i3);
	}
	MR_sv(1) = MR_r5;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_reachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_conj_8_0_i4);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_conj_8_0_i5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__instmap__apply_instmap_delta_3_0,
		check_hlds__mode_util__recompute_instmap_delta_conj_8_0_i6);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,
		check_hlds__mode_util__recompute_instmap_delta_conj_8_0_i7);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_sv(5);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_apply_instmap_delta_4_0,
		check_hlds__mode_util__recompute_instmap_delta_conj_8_0_i9);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_conj_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__merge_instmap_deltas_7_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module37)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_disj_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_disj_9_0);
	MR_init_label4(check_hlds__mode_util__recompute_instmap_delta_disj_9_0,2,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_disj'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_disj_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_r5 = MR_r6;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0,
		check_hlds__mode_util__recompute_instmap_delta_disj_9_0_i2);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_disj_9_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_disj_9_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_disj_9_0_i5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_disj_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_disj_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__mode_util__recompute_instmap_delta_disj_9_0_i6);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_disj_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(3), 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module38)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_cases_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_cases_10_0);
	MR_init_label4(check_hlds__mode_util__recompute_instmap_delta_cases_10_0,2,5,4,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_cases'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_cases_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(2) = MR_r6;
	MR_r6 = MR_r7;
	MR_np_call_localret_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,
		check_hlds__mode_util__recompute_instmap_delta_cases_10_0_i2);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_cases_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_cases_10_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_init_unreachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_cases_10_0_i5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_cases_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_cases_10_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr2;
	MR_tempr3 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr3;
	MR_r5 = MR_tfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_deltas_7_0,
		check_hlds__mode_util__recompute_instmap_delta_cases_10_0_i6);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_cases_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(3), 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module39)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_8_0);
	MR_init_label1(check_hlds__mode_util__recompute_instmap_delta_8_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__recompute_instmap_delta_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r6;
	MR_tfield(0, MR_tempr1, 1) = MR_r4;
	MR_r4 = MR_r5;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_8_0_i3);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r3, 0);
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_initial_instmap_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_set_goal_3_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module40)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
	MR_init_label6(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,2,3,4,5,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_proc'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__recompute_instmap_delta_proc_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_initial_instmap_3_0,
		check_hlds__mode_util__recompute_instmap_delta_proc_5_0_i2);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		check_hlds__mode_util__recompute_instmap_delta_proc_5_0_i3);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		check_hlds__mode_util__recompute_instmap_delta_proc_5_0_i4);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_inst_varset_2_0,
		check_hlds__mode_util__recompute_instmap_delta_proc_5_0_i5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		check_hlds__mode_util__recompute_instmap_delta_proc_5_0_i7);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r3, 0);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_set_goal_3_0,
		check_hlds__mode_util__recompute_instmap_delta_proc_5_0_i8);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_proc_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module41)
	MR_init_entry1(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0);
	MR_init_label3(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0,5,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ctor_arg_list_to_inst_list'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(1);
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(1, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r1,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(1);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp(1);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3))
		continue;
	MR_proceed();
	break;
	} /* end while */
MR_def_label(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module42)
	MR_init_entry1(check_hlds__mode_util__constructors_to_bound_insts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__constructors_to_bound_insts_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constructors_to_bound_insts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__constructors_to_bound_insts_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module43)
	MR_init_entry1(check_hlds__mode_util__constructors_to_bound_any_insts_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__constructors_to_bound_any_insts_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'constructors_to_bound_any_insts'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__constructors_to_bound_any_insts_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_is_clobbered_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module44)
	MR_init_entry1(check_hlds__mode_util__get_arg_lives_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__get_arg_lives_3_0);
	MR_init_label5(check_hlds__mode_util__get_arg_lives_3_0,28,4,7,6,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_arg_lives'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__get_arg_lives_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_arg_lives_3_0_i28);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__get_arg_lives_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__get_arg_lives_3_0_i4);
MR_def_label(check_hlds__mode_util__get_arg_lives_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_clobbered_2_0,
		check_hlds__mode_util__get_arg_lives_3_0_i7);
MR_def_label(check_hlds__mode_util__get_arg_lives_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__get_arg_lives_3_0_i6);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 1;
	MR_np_localcall_lab(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__mode_util__get_arg_lives_3_0_i10);
MR_def_label(check_hlds__mode_util__get_arg_lives_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_sv(2) = (MR_Integer) 0;
	MR_np_localcall_lab(check_hlds__mode_util__get_arg_lives_3_0,
		check_hlds__mode_util__get_arg_lives_3_0_i10);
MR_def_label(check_hlds__mode_util__get_arg_lives_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___parse_tree__prog_data__mer_inst_0_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module45)
	MR_init_entry1(check_hlds__mode_util__fixup_instmap_switch_var_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__fixup_instmap_switch_var_5_0);
	MR_init_label7(check_hlds__mode_util__fixup_instmap_switch_var_5_0,2,3,4,7,5,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'fixup_instmap_switch_var'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__fixup_instmap_switch_var_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_instmap_delta_1_0,
		check_hlds__mode_util__fixup_instmap_switch_var_5_0_i2);
MR_def_label(check_hlds__mode_util__fixup_instmap_switch_var_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__mode_util__fixup_instmap_switch_var_5_0_i3);
MR_def_label(check_hlds__mode_util__fixup_instmap_switch_var_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__mode_util__fixup_instmap_switch_var_5_0_i4);
MR_def_label(check_hlds__mode_util__fixup_instmap_switch_var_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_inst_0_0,
		check_hlds__mode_util__fixup_instmap_switch_var_5_0_i7);
MR_def_label(check_hlds__mode_util__fixup_instmap_switch_var_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__fixup_instmap_switch_var_5_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__mode_util__fixup_instmap_switch_var_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_set_var_4_0,
		check_hlds__mode_util__fixup_instmap_switch_var_5_0_i9);
MR_def_label(check_hlds__mode_util__fixup_instmap_switch_var_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_goal__goal_info_set_instmap_delta_3_0,
		check_hlds__mode_util__fixup_instmap_switch_var_5_0_i10);
MR_def_label(check_hlds__mode_util__fixup_instmap_switch_var_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(3);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__inst_match__inst_expand_3_0);
MR_decl_entry(check_hlds__inst_match__inst_is_unique_2_0);
MR_decl_entry(parse_tree__prog_type__is_introduced_type_info_type_1_0);
MR_decl_entry(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0);
MR_decl_entry(check_hlds__inst_match__inst_is_mostly_unique_2_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module46)
	MR_init_entry1(check_hlds__mode_util__normalise_inst_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__normalise_inst_4_0);
	MR_init_label10(check_hlds__mode_util__normalise_inst_4_0,2,6,8,12,16,5,20,22,26,30)
	MR_init_label6(check_hlds__mode_util__normalise_inst_4_0,19,34,38,42,33,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_inst'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__normalise_inst_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(check_hlds__inst_match__inst_expand_3_0,
		check_hlds__mode_util__normalise_inst_4_0_i2);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i48);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i6);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_unique_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i8);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		check_hlds__mode_util__normalise_inst_4_0_i12);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i5);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i16);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i20);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_mostly_unique_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i22);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i19);
	}
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__is_introduced_type_info_type_1_0,
		check_hlds__mode_util__normalise_inst_4_0_i26);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i19);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i30);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i19);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_ground_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i34);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_clobbered_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i38);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i33);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__inst_util__inst_contains_nonstandard_func_mode_2_0,
		check_hlds__mode_util__normalise_inst_4_0_i42);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_inst_4_0_i33);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_decr_sp_and_return(4);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(check_hlds__mode_util__normalise_inst_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module47)
	MR_init_entry1(check_hlds__mode_util__normalise_insts_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__normalise_insts_4_0);
	MR_init_label4(check_hlds__mode_util__normalise_insts_4_0,3,9,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'normalise_insts'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__normalise_insts_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_insts_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_insts_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__normalise_insts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__normalise_insts_4_0_i8);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(1) = MR_tfield(1, MR_r3, 1);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_tfield(1, MR_r3, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__normalise_inst_4_0,
		check_hlds__mode_util__normalise_insts_4_0_i9);
MR_def_label(check_hlds__mode_util__normalise_insts_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(check_hlds__mode_util__normalise_insts_4_0,
		check_hlds__mode_util__normalise_insts_4_0_i10);
MR_def_label(check_hlds__mode_util__normalise_insts_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__mode_util__normalise_insts_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.normalise_insts\'/4", 50);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module48)
	MR_init_entry1(check_hlds__mode_util__partition_args_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__partition_args_5_0);
	MR_init_label6(check_hlds__mode_util__partition_args_5_0,3,9,11,12,10,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'partition_args'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__mode_util__partition_args_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__partition_args_5_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__partition_args_5_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(check_hlds__mode_util__partition_args_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__partition_args_5_0_i8);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_r4, 0);
	MR_sv(4) = MR_tfield(1, MR_r3, 0);
	MR_r3 = MR_tfield(1, MR_r3, 1);
	MR_r4 = MR_tfield(1, MR_r4, 1);
	MR_np_localcall_lab(check_hlds__mode_util__partition_args_5_0,
		check_hlds__mode_util__partition_args_5_0_i9);
MR_def_label(check_hlds__mode_util__partition_args_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__partition_args_5_0_i11);
MR_def_label(check_hlds__mode_util__partition_args_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_is_bound_2_0,
		check_hlds__mode_util__partition_args_5_0_i12);
MR_def_label(check_hlds__mode_util__partition_args_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__partition_args_5_0_i10);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(2);
	MR_tfield(1, MR_r1, 1) = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__mode_util__partition_args_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(2);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__mode_util__partition_args_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.partition_args\'/5", 49);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module49)
	MR_init_entry1(check_hlds__mode_util__propagate_ctor_info_tuple_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__propagate_ctor_info_tuple_4_0);
	MR_init_label6(check_hlds__mode_util__propagate_ctor_info_tuple_4_0,5,6,8,9,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'propagate_ctor_info_tuple'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__propagate_ctor_info_tuple_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_tuple_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__mode_util__propagate_ctor_info_tuple_4_0_i5);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_tuple_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__mode_util__propagate_ctor_info_tuple_4_0_i6);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_tuple_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__propagate_ctor_info_tuple_4_0_i2);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__init_1_0,
		check_hlds__mode_util__propagate_ctor_info_tuple_4_0_i8);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_tuple_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__propagate_types_into_inst_list_5_0,
		check_hlds__mode_util__propagate_ctor_info_tuple_4_0_i9);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_tuple_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(4);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(7);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_tuple_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
MR_def_label(check_hlds__mode_util__propagate_ctor_info_tuple_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__instmap_is_reachable_1_0);
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(check_hlds__inst_match__inst_matches_initial_sub_7_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module50)
	MR_init_entry1(check_hlds__mode_util__compute_inst_var_sub_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__compute_inst_var_sub_8_0);
	MR_init_label9(check_hlds__mode_util__compute_inst_var_sub_8_0,55,3,11,13,15,18,17,9,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compute_inst_var_sub'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__compute_inst_var_sub_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i8);
	}
	MR_r1 = MR_r5;
	MR_r2 = MR_r6;
	MR_decr_sp_and_return(9);
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i8);
	}
	MR_sv(8) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r4;
	MR_sv(6) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(1) = MR_r2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__mode_util__compute_inst_var_sub_8_0_i11);
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i9);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__mode_util__compute_inst_var_sub_8_0_i13);
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		check_hlds__mode_util__compute_inst_var_sub_8_0_i15);
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__inst_match__inst_matches_initial_sub_7_0,
		check_hlds__mode_util__compute_inst_var_sub_8_0_i18);
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i55);
	}
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(6);
	MR_r6 = MR_sv(4);
	MR_r5 = MR_sv(3);
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i55);
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r4 = MR_sv(6);
	MR_r1 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(check_hlds__mode_util__compute_inst_var_sub_8_0_i55);
MR_def_label(check_hlds__mode_util__compute_inst_var_sub_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.compute_inst_var_sub\'/8", 55);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module51)
	MR_init_entry1(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__recompute_instmap_delta_call_2_6_0);
	MR_init_label10(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,3,11,13,14,16,15,9,22,23,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'recompute_instmap_delta_call_2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_r4;
	MR_proceed();
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i8);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(5) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(4) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(1, MR_r1, 0);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_is_reachable_1_0,
		check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i11);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(hlds__instmap__instmap_lookup_var_3_0,
		check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i13);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_get_insts_4_0,
		check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i14);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	MR_r4 = (MR_Integer) 1;
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__inst_util__abstractly_unify_inst_8_0,
		check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i16);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_sv(5);
	}
	MR_np_localcall_lab(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,
		check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i23);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", 65);
	MR_r3 = (MR_Word) MR_string_const("unify_inst failed", 17);
	MR_np_call_localret_ent(require__unexpected_3_0,
		check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i22);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = MR_sv(5);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,
		check_hlds__mode_util__recompute_instmap_delta_call_2_6_0_i23);
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__mode_util__recompute_instmap_delta_call_2_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("check_hlds.mode_util", 20);
	MR_r2 = (MR_Word) MR_string_const("predicate \140check_hlds.mode_util.recompute_instmap_delta_call_2\'/6", 65);
	MR_r3 = (MR_Word) MR_string_const("length mismatch", 15);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module52)
	MR_init_entry1(__Unify___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module53)
	MR_init_entry1(__Compare___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module54)
	MR_init_entry1(__Unify___check_hlds__mode_util__recompute_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___check_hlds__mode_util__recompute_info_0_0);
	MR_init_label3(__Unify___check_hlds__mode_util__recompute_info_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__mode_util__recompute_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_util__recompute_info_0_0_i8);
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
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___check_hlds__mode_util__recompute_info_0_0_i4);
MR_def_label(__Unify___check_hlds__mode_util__recompute_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___check_hlds__mode_util__recompute_info_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
MR_def_label(__Unify___check_hlds__mode_util__recompute_info_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___check_hlds__mode_util__recompute_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module55)
	MR_init_entry1(__Compare___check_hlds__mode_util__recompute_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___check_hlds__mode_util__recompute_info_0_0);
	MR_init_label4(__Compare___check_hlds__mode_util__recompute_info_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__mode_util__recompute_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_util__recompute_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___check_hlds__mode_util__recompute_info_0_0_i2);
MR_def_label(__Compare___check_hlds__mode_util__recompute_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___check_hlds__mode_util__recompute_info_0_0,2)
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
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___check_hlds__mode_util__recompute_info_0_0_i5);
MR_def_label(__Compare___check_hlds__mode_util__recompute_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___check_hlds__mode_util__recompute_info_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, inst_var_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
MR_def_label(__Compare___check_hlds__mode_util__recompute_info_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module56)
	MR_init_entry1(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0);
	MR_init_label3(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0,2,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__propagate_ctor_info_3__957__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0_i2);
MR_def_label(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0_i4);
MR_def_label(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(1) == MR_r1);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__957__1_3_0,1)
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


MR_BEGIN_MODULE(check_hlds__mode_util_module57)
	MR_init_entry1(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__965__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__965__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__propagate_ctor_info_3__965__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__IntroducedFrom__pred__propagate_ctor_info_3__965__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module58)
	MR_init_entry1(check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1540__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1540__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__recompute_instmap_delta_unify__1540__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__mode_util__IntroducedFrom__pred__recompute_instmap_delta_unify__1540__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_tfield(0, MR_tfield(0, MR_r1, 0), 1);
	MR_tfield(0, MR_r2, 1) = MR_tfield(0, MR_tfield(0, MR_r1, 1), 1);
	MR_r1 = MR_r2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module59)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__constructors_to_bound_insts__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module60)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__constructors_to_bound_any_insts__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_97_110_121_95_105_110_115_116_115_95_95_91_49_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_r1;
	MR_tfield(2, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module61)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0);
	MR_init_label4(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0,20,4,5,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__constructors_to_bound_insts_2__[1, 2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0_i20);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__ctor_arg_list_to_inst_list_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_inst);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(list__length_2_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(5);
	MR_sv(3) = MR_tempr2;
	MR_r1 = MR_tfield(3, MR_tempr1, 3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	}
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_111_110_115_116_114_117_99_116_111_114_115_95_116_111_95_98_111_117_110_100_95_105_110_115_116_115_95_50_95_95_91_49_44_32_50_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__mode_util_module62)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0);
	MR_init_label3(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0,18,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__recompute_instmap_delta_disj_2__[6]_0'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0_i18);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r5;
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0_i4);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr3;
	}
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_100_105_115_106_95_50_95_95_91_54_93_95_48_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__bind_var_to_functors_8_0);
MR_decl_entry(hlds__instmap__instmap_delta_bind_var_to_functors_9_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module63)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0);
	MR_init_label6(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,25,5,6,8,9,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__recompute_instmap_delta_cases_2__[7]_0'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0_i25);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_r6;
	MR_proceed();
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(9) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r5 = MR_sv(5);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0_i5);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tfield(0, MR_sv(9), 0);
	MR_np_call_localret_ent(hlds__instmap__bind_var_to_functors_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0_i6);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(9), 1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__recompute_instmap_delta_1_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0_i8);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(10) = MR_r3;
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(2);
	MR_r6 = MR_tempr1;
	MR_r7 = MR_tfield(0, MR_sv(10), 0);
	}
	MR_np_call_localret_ent(hlds__instmap__instmap_delta_bind_var_to_functors_9_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0_i9);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(10), 1);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(9);
	MR_tempr3 = MR_sv(4);
	MR_sv(4) = MR_tempr2;
	MR_tempr4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr3;
	MR_r2 = MR_tempr4;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	}
	MR_np_localcall_lab(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0_i12);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_99_111_109_112_117_116_101_95_105_110_115_116_109_97_112_95_100_101_108_116_97_95_99_97_115_101_115_95_50_95_95_91_55_93_95_48_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__instmap__merge_instmap_delta_8_0);

MR_BEGIN_MODULE(check_hlds__mode_util_module64)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0);
	MR_init_label1(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__update_module_info__ho6__[6]_0'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r6;
	MR_r6 = MR_tfield(0, MR_r6, 0);
	MR_np_call_localret_ent(hlds__instmap__merge_instmap_delta_8_0,
		f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0_i2);
MR_def_label(f_99_104_101_99_107_95_104_108_100_115_95_95_109_111_100_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_117_112_100_97_116_101_95_109_111_100_117_108_101_95_105_110_102_111_95_95_104_111_54_95_95_91_54_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(0, MR_sv(1), 1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__mode_util_maybe_bunch_0(void)
{
	check_hlds__mode_util_module0();
	check_hlds__mode_util_module1();
	check_hlds__mode_util_module2();
	check_hlds__mode_util_module3();
	check_hlds__mode_util_module4();
	check_hlds__mode_util_module5();
	check_hlds__mode_util_module6();
	check_hlds__mode_util_module7();
	check_hlds__mode_util_module8();
	check_hlds__mode_util_module9();
	check_hlds__mode_util_module10();
	check_hlds__mode_util_module11();
	check_hlds__mode_util_module12();
	check_hlds__mode_util_module13();
	check_hlds__mode_util_module14();
	check_hlds__mode_util_module15();
	check_hlds__mode_util_module16();
	check_hlds__mode_util_module17();
	check_hlds__mode_util_module18();
	check_hlds__mode_util_module19();
	check_hlds__mode_util_module20();
	check_hlds__mode_util_module21();
	check_hlds__mode_util_module22();
	check_hlds__mode_util_module23();
	check_hlds__mode_util_module24();
	check_hlds__mode_util_module25();
	check_hlds__mode_util_module26();
	check_hlds__mode_util_module27();
	check_hlds__mode_util_module28();
	check_hlds__mode_util_module29();
	check_hlds__mode_util_module30();
	check_hlds__mode_util_module31();
	check_hlds__mode_util_module32();
	check_hlds__mode_util_module33();
	check_hlds__mode_util_module34();
	check_hlds__mode_util_module35();
	check_hlds__mode_util_module36();
	check_hlds__mode_util_module37();
	check_hlds__mode_util_module38();
	check_hlds__mode_util_module39();
}

static void mercury__check_hlds__mode_util_maybe_bunch_1(void)
{
	check_hlds__mode_util_module40();
	check_hlds__mode_util_module41();
	check_hlds__mode_util_module42();
	check_hlds__mode_util_module43();
	check_hlds__mode_util_module44();
	check_hlds__mode_util_module45();
	check_hlds__mode_util_module46();
	check_hlds__mode_util_module47();
	check_hlds__mode_util_module48();
	check_hlds__mode_util_module49();
	check_hlds__mode_util_module50();
	check_hlds__mode_util_module51();
	check_hlds__mode_util_module52();
	check_hlds__mode_util_module53();
	check_hlds__mode_util_module54();
	check_hlds__mode_util_module55();
	check_hlds__mode_util_module56();
	check_hlds__mode_util_module57();
	check_hlds__mode_util_module58();
	check_hlds__mode_util_module59();
	check_hlds__mode_util_module60();
	check_hlds__mode_util_module61();
	check_hlds__mode_util_module62();
	check_hlds__mode_util_module63();
	check_hlds__mode_util_module64();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__mode_util__init(void);
void mercury__check_hlds__mode_util__init_type_tables(void);
void mercury__check_hlds__mode_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__mode_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__mode_util__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__check_hlds__mode_util__init_threadscope_string_table(void);
#endif

void mercury__check_hlds__mode_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__mode_util_maybe_bunch_0();
	mercury__check_hlds__mode_util_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0,
		check_hlds__mode_util__recompute_atomic_instmap_deltas_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__mode_util__type_ctor_info_recompute_info_0,
		check_hlds__mode_util__recompute_info_0_0);
	mercury__check_hlds__mode_util__init_debugger();
}

void mercury__check_hlds__mode_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_util__type_ctor_info_recompute_atomic_instmap_deltas_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__mode_util__type_ctor_info_recompute_info_0);
	}
}


void mercury__check_hlds__mode_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__mode_util__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__check_hlds__mode_util);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__mode_util__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__check_hlds__mode_util__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
