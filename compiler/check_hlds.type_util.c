/*
** Automatically generated from `type_util.m'
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
INIT mercury__check_hlds__type_util__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 134 "../library/io.int2"
#include "io.mh"

#line 27 "check_hlds.type_util.c"
#line 142 "../library/io.int2"
#include "string.mh"

#line 31 "check_hlds.type_util.c"
#line 87 "../library/table_builtin.int2"
#include "table_builtin.mh"

#line 35 "check_hlds.type_util.c"
#line 17 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "check_hlds.type_util.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "check_hlds.type_util.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "check_hlds.type_util.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 51 "check_hlds.type_util.c"
#line 52 "check_hlds.type_util.c"
#include "check_hlds.type_util.mh"

#line 55 "check_hlds.type_util.c"
#line 56 "check_hlds.type_util.c"
#ifndef CHECK_HLDS__TYPE_UTIL_DECL_GUARD
#define CHECK_HLDS__TYPE_UTIL_DECL_GUARD

#line 60 "check_hlds.type_util.c"
#line 61 "check_hlds.type_util.c"

#endif
#line 64 "check_hlds.type_util.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_check_hlds__type_util__type_ctor_info_exist_qvar_action_0;
MR_decl_label1(check_hlds__type_util__apply_rec_subst_to_constraint_3_0, 2)
MR_decl_label1(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0, 2)
MR_decl_label3(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0, 2,4,5)
MR_decl_label8(check_hlds__type_util__apply_rec_subst_to_constraints_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(check_hlds__type_util__apply_subst_to_constraint_3_0, 2)
MR_decl_label1(check_hlds__type_util__apply_subst_to_constraint_proofs_3_0, 2)
MR_decl_label3(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0, 2,4,5)
MR_decl_label8(check_hlds__type_util__apply_subst_to_constraints_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label1(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0, 2)
MR_decl_label6(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0, 3,2,5,6,7,8)
MR_decl_label8(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(check_hlds__type_util__cons_id_arg_types_4_0, 1,3,4,6,8,9,10,11)
MR_decl_label5(check_hlds__type_util__cons_id_arg_types_4_0, 12,15,16,17,18)
MR_decl_label2(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0, 3,1)
MR_decl_label5(check_hlds__type_util__get_cons_defn_4_0, 2,3,5,7,1)
MR_decl_label8(check_hlds__type_util__get_cons_id_arg_types_4_0, 3,7,5,10,12,13,15,17)
MR_decl_label4(check_hlds__type_util__get_cons_id_arg_types_4_0, 16,19,20,2)
MR_decl_label8(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0, 3,7,5,10,12,13,15,17)
MR_decl_label4(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0, 18,19,2,1)
MR_decl_label8(check_hlds__type_util__get_existq_cons_defn_4_0, 2,4,7,8,9,11,12,13)
MR_decl_label6(check_hlds__type_util__get_existq_cons_defn_4_0, 14,15,16,18,20,1)
MR_decl_label5(check_hlds__type_util__get_type_and_cons_defn_5_0, 3,5,7,8,2)
MR_decl_label7(check_hlds__type_util__is_dummy_argument_type_2_0, 2,7,9,10,12,4,1)
MR_decl_label3(check_hlds__type_util__is_existq_cons_3_0, 2,4,1)
MR_decl_label4(check_hlds__type_util__is_existq_type_2_0, 2,5,4,1)
MR_decl_label5(check_hlds__type_util__is_solver_type_2_0, 2,3,5,7,1)
MR_decl_label5(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0, 7,9,4,5,2)
MR_decl_label3(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0, 5,2,3)
MR_decl_label2(check_hlds__type_util__rename_constraint_proof_3_0, 12,4)
MR_decl_label3(check_hlds__type_util__substitute_type_args_2_3_0, 4,5,3)
MR_decl_label3(check_hlds__type_util__substitute_type_args_3_3_0, 4,5,3)
MR_decl_label8(check_hlds__type_util__switch_type_num_functors_3_0, 2,8,9,4,12,10,14,15)
MR_decl_label3(check_hlds__type_util__switch_type_num_functors_3_0, 17,19,1)
MR_decl_label8(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0, 2,3,6,10,13,7,16,21)
MR_decl_label6(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0, 22,23,25,28,30,1)
MR_decl_label7(check_hlds__type_util__type_body_has_solver_type_details_3_0, 31,4,5,7,9,3,1)
MR_decl_label7(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0, 2,3,9,13,10,6,1)
MR_decl_label8(check_hlds__type_util__type_body_is_solver_type_2_0, 39,4,8,9,11,13,22,1)
MR_decl_label8(check_hlds__type_util__type_constructors_3_0, 2,6,8,9,4,10,11,13)
MR_decl_label5(check_hlds__type_util__type_constructors_3_0, 14,17,18,19,1)
MR_decl_label6(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0, 3,4,7,17,40,15)
MR_decl_label3(check_hlds__type_util__type_ctor_is_atomic_2_0, 2,25,3)
MR_decl_label8(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0, 3,2,5,6,8,12,13,15)
MR_decl_label4(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0, 17,18,20,1)
MR_decl_label1(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0, 2)
MR_decl_label5(check_hlds__type_util__type_has_solver_type_details_3_0, 2,3,5,7,1)
MR_decl_label5(check_hlds__type_util__type_has_user_defined_equality_pred_3_0, 2,3,5,7,1)
MR_decl_label2(check_hlds__type_util__type_is_atomic_2_0, 2,1)
MR_decl_label7(check_hlds__type_util__type_is_no_tag_type_4_0, 2,4,5,8,9,10,1)
MR_decl_label8(check_hlds__type_util__type_is_solver_type_2_0, 39,2,3,5,7,10,22,1)
MR_decl_label3(check_hlds__type_util__type_to_type_defn_3_0, 2,3,1)
MR_decl_label5(check_hlds__type_util__type_to_type_defn_body_3_0, 2,3,5,7,1)
MR_decl_label1(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0, 3)
MR_decl_label2(fn__check_hlds__type_util__classify_type_2_0, 3,2)
MR_decl_label8(fn__check_hlds__type_util__classify_type_ctor_2_0, 6,7,8,9,2,14,15,19)
MR_decl_label8(fn__check_hlds__type_util__classify_type_ctor_2_0, 20,21,11,12,25,23,29,27)
MR_decl_label6(fn__check_hlds__type_util__classify_type_ctor_2_0, 33,31,36,37,39,35)
MR_decl_label7(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0, 2,5,7,8,9,10,3)
MR_decl_label8(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0, 4,2,7,12,13,14,29,23)
MR_def_extern_entry(fn__check_hlds__type_util__type_ctor_module_2_0)
MR_def_extern_entry(fn__check_hlds__type_util__type_ctor_name_2_0)
MR_def_extern_entry(fn__check_hlds__type_util__type_ctor_arity_2_0)
MR_def_extern_entry(fn__check_hlds__type_util__classify_type_ctor_2_0)
MR_def_extern_entry(check_hlds__type_util__type_ctor_is_atomic_2_0)
MR_def_extern_entry(check_hlds__type_util__type_is_atomic_2_0)
MR_def_extern_entry(check_hlds__type_util__type_to_type_defn_3_0)
MR_def_extern_entry(check_hlds__type_util__type_to_type_defn_body_3_0)
MR_def_extern_entry(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0)
MR_def_extern_entry(check_hlds__type_util__type_has_user_defined_equality_pred_3_0)
MR_decl_static(check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0)
MR_decl_static(check_hlds__type_util__substitute_type_args_3_3_0)
MR_decl_static(check_hlds__type_util__substitute_type_args_2_3_0)
MR_def_extern_entry(check_hlds__type_util__type_constructors_3_0)
MR_def_extern_entry(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0)
MR_decl_static(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0)
MR_decl_static(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0)
MR_def_extern_entry(check_hlds__type_util__type_is_solver_type_2_0)
MR_def_extern_entry(check_hlds__type_util__type_has_solver_type_details_3_0)
MR_def_extern_entry(check_hlds__type_util__type_body_has_solver_type_details_3_0)
MR_def_extern_entry(check_hlds__type_util__is_solver_type_2_0)
MR_def_extern_entry(check_hlds__type_util__type_body_is_solver_type_2_0)
MR_def_extern_entry(check_hlds__type_util__is_existq_type_2_0)
MR_def_extern_entry(check_hlds__type_util__is_dummy_argument_type_2_0)
MR_def_extern_entry(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0)
MR_def_extern_entry(fn__check_hlds__type_util__classify_type_2_0)
MR_def_extern_entry(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0)
MR_def_extern_entry(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0)
MR_def_extern_entry(check_hlds__type_util__switch_type_num_functors_3_0)
MR_def_extern_entry(check_hlds__type_util__get_cons_defn_4_0)
MR_def_extern_entry(check_hlds__type_util__get_cons_id_arg_types_4_0)
MR_def_extern_entry(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0)
MR_def_extern_entry(check_hlds__type_util__cons_id_arg_types_4_0)
MR_def_extern_entry(check_hlds__type_util__get_type_and_cons_defn_5_0)
MR_def_extern_entry(check_hlds__type_util__get_existq_cons_defn_4_0)
MR_def_extern_entry(check_hlds__type_util__is_existq_cons_3_0)
MR_def_extern_entry(check_hlds__type_util__type_is_no_tag_type_4_0)
MR_def_extern_entry(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0)
MR_def_extern_entry(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0)
MR_def_extern_entry(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_subst_to_constraint_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_rec_subst_to_constraint_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_subst_to_constraint_list_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_rec_subst_to_constraint_list_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_subst_to_constraints_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_rec_subst_to_constraints_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_subst_to_constraint_proofs_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_subst_to_constraint_map_3_0)
MR_def_extern_entry(check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0)
MR_decl_static(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0)
MR_decl_static(check_hlds__type_util__rename_constraint_proof_3_0)
MR_decl_static(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0)
MR_decl_static(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0)
MR_decl_static(check_hlds__type_util__apply_variable_renaming_to_constraint_map_2_4_0)
MR_decl_static(check_hlds__type_util__apply_subst_to_constraint_map_2_4_0)
MR_decl_static(check_hlds__type_util__apply_rec_subst_to_constraint_map_2_4_0)
MR_decl_static(__Unify___check_hlds__type_util__exist_qvar_action_0_0)
MR_decl_static(__Compare___check_hlds__type_util__exist_qvar_action_0_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__type_constructors__704__1_2_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__858__1_1_0)
MR_decl_static(check_hlds__type_util__IntroducedFrom__pred__get_cons_defn__891__1_2_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__902__1_1_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__971__1_1_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__984__1_1_0)
MR_decl_static(check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1025__1_4_0)
MR_decl_static(check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1042__1_4_0)
MR_decl_static(check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1059__1_4_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__481__1_1_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__1_1_0)
MR_decl_static(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__2_1_0)
MR_def_extern_entry(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_109_111_100_117_108_101_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_2_0)
MR_def_extern_entry(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_2_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_50_53_95_95_49_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_52_50_95_95_49_95_95_91_50_93_95_48_4_0)
MR_decl_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_53_57_95_95_49_95_95_91_50_93_95_48_4_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_tvar_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const struct mercury_type_0 mercury_common_0[11] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
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
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(parse_tree__prog_data, tvar_type)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_map_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_2;
static const struct mercury_type_1 mercury_common_1[9] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(6,0),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(parse_tree__prog_data, class_id),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(6,0),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_map_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_id),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__type_constructors_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_constraint_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_list_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_50_53_95_95_49_95_95_91_50_93_95_48_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_52_50_95_95_49_95_95_91_50_93_95_48_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_53_57_95_95_49_95_95_91_50_93_95_48_4_0_1;
static const struct mercury_type_2 mercury_common_2[14] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__type_constructors_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(term, context),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,0),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_list_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,0),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,0),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_3,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,0),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_50_53_95_95_49_95_95_91_50_93_95_48_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,0),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_52_50_95_95_49_95_95_91_50_93_95_48_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_53_57_95_95_49_95_95_91_50_93_95_48_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint)
}
},
};

static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_string_const("{}", 2)
},
{
MR_string_const("", 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_cons_defn_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_cons_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_cons_id_arg_types_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__cons_id_arg_types_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_existq_cons_defn_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__maybe_get_higher_order_arg_types_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_1;
static const struct mercury_type_4 mercury_common_4[8] =
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__get_cons_defn_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor),
MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__get_cons_id_arg_types_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__cons_id_arg_types_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__get_existq_cons_defn_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,5)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__maybe_get_higher_order_arg_types_3_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type),
MR_COMMON(0,5)
},
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
},
};

static const struct mercury_type_5 mercury_common_5[7] =
{
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__2_1_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__1_1_0),
0
},
{
MR_COMMON(4,3),
MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__858__1_1_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__902__1_1_0),
0
},
{
MR_COMMON(4,5),
MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__971__1_1_0),
0
},
{
MR_COMMON(4,6),
MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__984__1_1_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__481__1_1_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_proof_0;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,6),
MR_COMMON(0,6)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(0,6),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_proofs_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0_1;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_proofs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof),
MR_COMMON(6,2),
MR_COMMON(6,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_COMMON(6,1),
MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint),
MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof),
MR_COMMON(6,2),
MR_COMMON(6,2)
}
},
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0 = {
	"fail_on_exist_qvar",
	0
};

static const MR_EnumFunctorDesc mercury_data_check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1 = {
	"abort_on_exist_qvar",
	1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[] = {
	&mercury_data_check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0,
	&mercury_data_check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1
};

const MR_EnumFunctorDescPtr mercury_data_check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[] = {
	&mercury_data_check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1,
	&mercury_data_check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0
};

const MR_Integer mercury_data_check_hlds__type_util__functor_number_map_exist_qvar_action_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_check_hlds__type_util__type_ctor_info_exist_qvar_action_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___check_hlds__type_util__exist_qvar_action_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___check_hlds__type_util__exist_qvar_action_0_0)),
	"check_hlds.type_util",
	"exist_qvar_action",
	{ (void *)mercury_data_check_hlds__type_util__enum_name_ordered_exist_qvar_action_0 },
	{ (void *)mercury_data_check_hlds__type_util__enum_value_ordered_exist_qvar_action_0 },
	2,
	4,
	mercury_data_check_hlds__type_util__functor_number_map_exist_qvar_action_0
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"type_definitely_has_no_user_defined_eq_pred_2",
4,
0
},
"check_hlds.type_util",
"type_util.m",
433,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__type_constructors_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_704",
3,
0
},
"check_hlds.type_util",
"type_util.m",
704,
"d1;c5;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"ctor_definitely_has_no_user_defined_eq_pred",
4,
0
},
"check_hlds.type_util",
"type_util.m",
456,
"d1;c8;d1;c2;e;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_cons_defn_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_891",
2,
0
},
"check_hlds.type_util",
"type_util.m",
891,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_cons_id_arg_types_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda2_type_util_m_830",
2,
0
},
"check_hlds.type_util",
"type_util.m",
830,
"d1;c6;t;e;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_830",
2,
0
},
"check_hlds.type_util",
"type_util.m",
830,
"d1;c6;t;e;t;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__cons_id_arg_types_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_858",
2,
0
},
"check_hlds.type_util",
"type_util.m",
858,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__get_existq_cons_defn_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_902",
2,
0
},
"check_hlds.type_util",
"type_util.m",
902,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_971",
2,
0
},
"check_hlds.type_util",
"type_util.m",
971,
"d1;c6;t;c2;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__maybe_get_higher_order_arg_types_3_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_984",
2,
0
},
"check_hlds.type_util",
"type_util.m",
984,
"d1;c4;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_variable_renaming_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1010,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_list_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_subst_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1013,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_list_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_rec_subst_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1016,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_variable_renaming_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1010,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_1025",
4,
0
},
"check_hlds.type_util",
"type_util.m",
1024,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_variable_renaming_to_prog_constraint_list",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1032,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_subst_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1013,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_1042",
4,
0
},
"check_hlds.type_util",
"type_util.m",
1041,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraints_3_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_subst_to_prog_constraint_list",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1049,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_rec_subst_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1016,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_2 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_1059",
4,
0
},
"check_hlds.type_util",
"type_util.m",
1058,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraints_3_0_3 = {
{
MR_PREDICATE,
"parse_tree.prog_type_subst",
"parse_tree.prog_type_subst",
"apply_rec_subst_to_prog_constraint_list",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1066,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"rename_constraint_proof",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1081,
"d1;c4;e;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_proofs_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_subst_to_constraint_proofs_2",
5,
0
},
"check_hlds.type_util",
"type_util.m",
1097,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_rec_subst_to_constraint_proofs_2",
5,
0
},
"check_hlds.type_util",
"type_util.m",
1117,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_variable_renaming_to_constraint_map_2",
4,
0
},
"check_hlds.type_util",
"type_util.m",
1139,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_subst_to_constraint_map_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_subst_to_constraint_map_2",
4,
0
},
"check_hlds.type_util",
"type_util.m",
1149,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_rec_subst_to_constraint_map_2",
4,
0
},
"check_hlds.type_util",
"type_util.m",
1158,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_1 = {
{
MR_FUNCTION,
"check_hlds.type_util",
"check_hlds.type_util",
"lambda_type_util_m_481",
2,
0
},
"check_hlds.type_util",
"type_util.m",
481,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_2 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"type_definitely_has_no_user_defined_eq_pred_2",
4,
0
},
"check_hlds.type_util",
"type_util.m",
482,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_50_53_95_95_49_95_95_91_50_93_95_48_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_variable_renaming_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1010,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_52_50_95_95_49_95_95_91_50_93_95_48_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_subst_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1013,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_53_57_95_95_49_95_95_91_50_93_95_48_4_0_1 = {
{
MR_PREDICATE,
"check_hlds.type_util",
"check_hlds.type_util",
"apply_rec_subst_to_constraint",
3,
0
},
"check_hlds.type_util",
"type_util.m",
1016,
"d1;c4;"
};


MR_BEGIN_MODULE(check_hlds__type_util_module0)
	MR_init_entry1(fn__check_hlds__type_util__type_ctor_module_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__type_util__type_ctor_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_109_111_100_117_108_101_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module1)
	MR_init_entry1(fn__check_hlds__type_util__type_ctor_name_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__type_util__type_ctor_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module2)
	MR_init_entry1(fn__check_hlds__type_util__type_ctor_arity_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__type_util__type_ctor_arity_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_tailcall_ent(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0);
MR_decl_entry(__Unify___mdbcomp__prim_data__sym_name_0_0);
MR_decl_entry(parse_tree__prog_type__is_builtin_dummy_argument_type_1_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_higher_order_4_0);
MR_decl_entry(parse_tree__prog_type__type_ctor_is_tuple_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_type_table_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_type_ctor_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;
MR_decl_entry(map__search_3_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_body_2_0);

MR_BEGIN_MODULE(check_hlds__type_util_module3)
	MR_init_entry1(fn__check_hlds__type_util__classify_type_ctor_2_0);
	MR_init_label8(fn__check_hlds__type_util__classify_type_ctor_2_0,6,7,8,9,2,14,15,19)
	MR_init_label8(fn__check_hlds__type_util__classify_type_ctor_2_0,20,21,11,12,25,23,29,27)
	MR_init_label6(fn__check_hlds__type_util__classify_type_ctor_2_0,33,31,36,37,39,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__type_util__classify_type_ctor_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_r3 = MR_tempr1;
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i2);
	}
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i2);
	}
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("character", 9)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr3;
	MR_tempr2 = MR_tempr1;
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
	}
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i7);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = (MR_Integer) 3;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("string", 6)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i9);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r4, (char *)(MR_Word) MR_string_const("void", 4)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i2);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r1 = (MR_Integer) 13;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i12);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i14);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i15);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i11);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i11);
	}
	if ((strcmp((char *)MR_sv(5), (char *)(MR_Word) MR_string_const("base_typeclass_info", 19)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i19);
	}
	MR_r1 = (MR_Integer) 12;
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)(MR_Word) MR_string_const("type_ctor_info", 14)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i20);
	}
	MR_r1 = (MR_Integer) 10;
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)(MR_Word) MR_string_const("type_info", 9)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i21);
	}
	MR_r1 = (MR_Integer) 9;
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(5), (char *)(MR_Word) MR_string_const("typeclass_info", 14)) != 0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i11);
	}
	MR_r1 = (MR_Integer) 11;
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__is_builtin_dummy_argument_type_1_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i25);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i23);
	}
	MR_r1 = (MR_Integer) 7;
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_higher_order_4_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i29);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i27);
	}
	MR_r1 = (MR_Integer) 4;
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i33);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i31);
	}
	MR_r1 = (MR_Integer) 5;
	MR_decr_sp_and_return(6);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i36);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i37);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i35);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		fn__check_hlds__type_util__classify_type_ctor_2_0_i39);
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_ctor_2_0_i35);
	}
	MR_r1 = (MR_Integer) 6;
	MR_decr_sp_and_return(6);
	}
MR_def_label(fn__check_hlds__type_util__classify_type_ctor_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module4)
	MR_init_entry1(check_hlds__type_util__type_ctor_is_atomic_2_0);
	MR_init_label3(check_hlds__type_util__type_ctor_is_atomic_2_0,2,25,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_ctor_is_atomic_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_ctor_2_0,
		check_hlds__type_util__type_ctor_is_atomic_2_0_i2);
MR_def_label(check_hlds__type_util__type_ctor_is_atomic_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i3) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_ctor_is_atomic_2_0_i25));
MR_def_label(check_hlds__type_util__type_ctor_is_atomic_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) 0 == (MR_Integer) 1);
	MR_decr_sp_and_return(1);
MR_def_label(check_hlds__type_util__type_ctor_is_atomic_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module5)
	MR_init_entry1(check_hlds__type_util__type_is_atomic_2_0);
	MR_init_label2(check_hlds__type_util__type_is_atomic_2_0,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_is_atomic_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_is_atomic_2_0_i2);
MR_def_label(check_hlds__type_util__type_is_atomic_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_atomic_2_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(check_hlds__type_util__type_ctor_is_atomic_2_0);
MR_def_label(check_hlds__type_util__type_is_atomic_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__type_util_module6)
	MR_init_entry1(check_hlds__type_util__type_to_type_defn_3_0);
	MR_init_label3(check_hlds__type_util__type_to_type_defn_3_0,2,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_to_type_defn_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_to_type_defn_3_0_i2);
MR_def_label(check_hlds__type_util__type_to_type_defn_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_to_type_defn_3_0_i3);
MR_def_label(check_hlds__type_util__type_to_type_defn_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_to_type_defn_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(map__search_3_0);
MR_def_label(check_hlds__type_util__type_to_type_defn_3_0,1)
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


MR_BEGIN_MODULE(check_hlds__type_util_module7)
	MR_init_entry1(check_hlds__type_util__type_to_type_defn_body_3_0);
	MR_init_label5(check_hlds__type_util__type_to_type_defn_body_3_0,2,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_to_type_defn_body_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_to_type_defn_body_3_0_i2);
MR_def_label(check_hlds__type_util__type_to_type_defn_body_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_to_type_defn_body_3_0_i3);
MR_def_label(check_hlds__type_util__type_to_type_defn_body_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_to_type_defn_body_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_to_type_defn_body_3_0_i5);
MR_def_label(check_hlds__type_util__type_to_type_defn_body_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_to_type_defn_body_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_to_type_defn_body_3_0_i7);
MR_def_label(check_hlds__type_util__type_to_type_defn_body_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_to_type_defn_body_3_0,1)
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

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__get_target_2_0);
MR_decl_entry(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0);
MR_decl_entry(backend_libs__foreign__have_foreign_type_for_backend_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module8)
	MR_init_entry1(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0);
	MR_init_label7(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,2,3,9,13,10,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i2);
MR_def_label(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i3);
MR_def_label(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TEST(MR_tempr1,3)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i6);
	}
	if (MR_PTAG_TEST(MR_tempr1,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i9);
	}
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0);
	}
MR_def_label(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 5);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i10);
	}
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(backend_libs__foreign__have_foreign_type_for_backend_3_0,
		check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i13);
MR_def_label(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i10);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0);
MR_def_label(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0_i1);
	}
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module9)
	MR_init_entry1(check_hlds__type_util__type_has_user_defined_equality_pred_3_0);
	MR_init_label5(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,2,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_has_user_defined_equality_pred_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_has_user_defined_equality_pred_3_0_i2);
MR_def_label(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_has_user_defined_equality_pred_3_0_i3);
MR_def_label(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_has_user_defined_equality_pred_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_has_user_defined_equality_pred_3_0_i5);
MR_def_label(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_has_user_defined_equality_pred_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_has_user_defined_equality_pred_3_0_i7);
MR_def_label(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__type_util__type_body_has_user_defined_equality_pred_3_0);
MR_def_label(check_hlds__type_util__type_has_user_defined_equality_pred_3_0,1)
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

MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(check_hlds__type_util_module10)
	MR_init_entry1(check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r5 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_type_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module11)
	MR_init_entry1(check_hlds__type_util__substitute_type_args_3_3_0);
	MR_init_label3(check_hlds__type_util__substitute_type_args_3_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__substitute_type_args_3_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__substitute_type_args_3_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_sv(2), 1);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_3_0,
		check_hlds__type_util__substitute_type_args_3_3_0_i4);
MR_def_label(check_hlds__type_util__substitute_type_args_3_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tempr2 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_localcall_lab(check_hlds__type_util__substitute_type_args_3_3_0,
		check_hlds__type_util__substitute_type_args_3_3_0_i5);
MR_def_label(check_hlds__type_util__substitute_type_args_3_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(check_hlds__type_util__substitute_type_args_3_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module12)
	MR_init_entry1(check_hlds__type_util__substitute_type_args_2_3_0);
	MR_init_label3(check_hlds__type_util__substitute_type_args_2_3_0,4,5,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__substitute_type_args_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__substitute_type_args_2_3_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 4);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(check_hlds__type_util__substitute_type_args_3_3_0,
		check_hlds__type_util__substitute_type_args_2_3_0_i4);
MR_def_label(check_hlds__type_util__substitute_type_args_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(check_hlds__type_util__substitute_type_args_2_3_0,
		check_hlds__type_util__substitute_type_args_2_3_0_i5);
MR_def_label(check_hlds__type_util__substitute_type_args_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_decr_sp_and_return(7);
	}
MR_def_label(check_hlds__type_util__substitute_type_args_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__term__context_init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_arg_0;
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_tparams_2_0);
MR_decl_entry(map__from_corresponding_lists_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module13)
	MR_init_entry1(check_hlds__type_util__type_constructors_3_0);
	MR_init_label8(check_hlds__type_util__type_constructors_3_0,2,6,8,9,4,10,11,13)
	MR_init_label5(check_hlds__type_util__type_constructors_3_0,14,17,18,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_constructors_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_constructors_3_0_i2);
MR_def_label(check_hlds__type_util__type_constructors_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_constructors_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		check_hlds__type_util__type_constructors_3_0_i6);
MR_def_label(check_hlds__type_util__type_constructors_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_constructors_3_0_i4);
	}
	MR_np_call_localret_ent(fn__term__context_init_0_0,
		check_hlds__type_util__type_constructors_3_0_i8);
MR_def_label(check_hlds__type_util__type_constructors_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(fn__check_hlds__type_util__IntroducedFrom__func__type_constructors__704__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__type_util__type_constructors_3_0_i9);
MR_def_label(check_hlds__type_util__type_constructors_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__type_util__type_constructors_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_constructors_3_0_i10);
MR_def_label(check_hlds__type_util__type_constructors_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_constructors_3_0_i11);
MR_def_label(check_hlds__type_util__type_constructors_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_constructors_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__type_util__type_constructors_3_0_i13);
MR_def_label(check_hlds__type_util__type_constructors_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_constructors_3_0_i14);
MR_def_label(check_hlds__type_util__type_constructors_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_constructors_3_0_i1);
	}
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_constructors_3_0_i17);
	}
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_constructors_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__type_constructors_3_0_i18);
MR_def_label(check_hlds__type_util__type_constructors_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__substitute_type_args_2_3_0,
		check_hlds__type_util__type_constructors_3_0_i19);
MR_def_label(check_hlds__type_util__type_constructors_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_constructors_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__set__init_0_0);

MR_BEGIN_MODULE(check_hlds__type_util_module14)
	MR_init_entry1(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0);
	MR_init_label1(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0_i2);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__contains_2_0);
MR_decl_entry(svset__insert_3_0);
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_det_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module15)
	MR_init_entry1(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0);
	MR_init_label8(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,3,2,5,6,8,12,13,15)
	MR_init_label4(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,17,18,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(set__contains_2_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i3);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i2);
	}
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(svset__insert_3_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i5);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i6);
	}
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i8);
	}
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i12);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i13);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i15);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i17);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i18);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_det_3_0,
		check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0_i20);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_0);
MR_def_label(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,1)
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

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_constructor_0;

MR_BEGIN_MODULE(check_hlds__type_util_module16)
	MR_init_entry1(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0);
	MR_init_label8(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,2,3,6,10,13,7,16,21)
	MR_init_label6(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,22,23,25,28,30,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(5) = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i2);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(libs__globals__get_target_2_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i3);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(3);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r3),
		MR_LABEL_AP(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i6) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i21) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i25) MR_AND
		MR_LABEL_AP(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i30));
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r3, 5);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i7);
	}
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_r2 = MR_sv(4);
	}
	MR_np_call_localret_ent(backend_libs__foreign__have_foreign_type_for_backend_3_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i10);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i13);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i1);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 3);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_constructors_3_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i16);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_ctfield(1, MR_r3, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(fn__set__init_0_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i22);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i23);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i1);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(2, MR_r3, 0);
	MR_np_call_localret_ent(backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_0,
		check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i28);
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i1);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r3, 0),0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r3, 2);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0_i1);
	}
	MR_r2 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_0,1)
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


MR_BEGIN_MODULE(check_hlds__type_util_module17)
	MR_init_entry1(check_hlds__type_util__type_is_solver_type_2_0);
	MR_init_label8(check_hlds__type_util__type_is_solver_type_2_0,39,2,3,5,7,10,22,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_is_solver_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_is_solver_type_2_0_i2);
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_is_solver_type_2_0_i3);
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_solver_type_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_is_solver_type_2_0_i5);
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_solver_type_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_is_solver_type_2_0_i7);
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_solver_type_2_0_i10);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_solver_type_2_0_i22);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(3, MR_r1, 1);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
	}
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_solver_type_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__type_util__type_is_solver_type_2_0_i39);
	}
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__type_util__type_is_solver_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module18)
	MR_init_entry1(check_hlds__type_util__type_has_solver_type_details_3_0);
	MR_init_label5(check_hlds__type_util__type_has_solver_type_details_3_0,2,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_has_solver_type_details_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_has_solver_type_details_3_0_i2);
MR_def_label(check_hlds__type_util__type_has_solver_type_details_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_has_solver_type_details_3_0_i3);
MR_def_label(check_hlds__type_util__type_has_solver_type_details_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_has_solver_type_details_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_has_solver_type_details_3_0_i5);
MR_def_label(check_hlds__type_util__type_has_solver_type_details_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_has_solver_type_details_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_has_solver_type_details_3_0_i7);
MR_def_label(check_hlds__type_util__type_has_solver_type_details_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__type_util__type_body_has_solver_type_details_3_0);
MR_def_label(check_hlds__type_util__type_has_solver_type_details_3_0,1)
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


MR_BEGIN_MODULE(check_hlds__type_util_module19)
	MR_init_entry1(check_hlds__type_util__type_body_has_solver_type_details_3_0);
	MR_init_label7(check_hlds__type_util__type_body_has_solver_type_details_3_0,31,4,5,7,9,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_body_has_solver_type_details_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__type_util__type_body_has_solver_type_details_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_solver_type_details_3_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_body_has_solver_type_details_3_0_i4);
MR_def_label(check_hlds__type_util__type_body_has_solver_type_details_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_body_has_solver_type_details_3_0_i5);
MR_def_label(check_hlds__type_util__type_body_has_solver_type_details_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_solver_type_details_3_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_body_has_solver_type_details_3_0_i7);
MR_def_label(check_hlds__type_util__type_body_has_solver_type_details_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_solver_type_details_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_body_has_solver_type_details_3_0_i9);
MR_def_label(check_hlds__type_util__type_body_has_solver_type_details_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__type_util__type_body_has_solver_type_details_3_0_i31);
MR_def_label(check_hlds__type_util__type_body_has_solver_type_details_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_has_solver_type_details_3_0_i1);
	}
	MR_r2 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__type_util__type_body_has_solver_type_details_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module20)
	MR_init_entry1(check_hlds__type_util__is_solver_type_2_0);
	MR_init_label5(check_hlds__type_util__is_solver_type_2_0,2,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__is_solver_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__is_solver_type_2_0_i2);
MR_def_label(check_hlds__type_util__is_solver_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__is_solver_type_2_0_i3);
MR_def_label(check_hlds__type_util__is_solver_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__is_solver_type_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__is_solver_type_2_0_i5);
MR_def_label(check_hlds__type_util__is_solver_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__is_solver_type_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__is_solver_type_2_0_i7);
MR_def_label(check_hlds__type_util__is_solver_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(check_hlds__type_util__type_body_is_solver_type_2_0);
MR_def_label(check_hlds__type_util__is_solver_type_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__type_util_module21)
	MR_init_entry1(check_hlds__type_util__type_body_is_solver_type_2_0);
	MR_init_label8(check_hlds__type_util__type_body_is_solver_type_2_0,39,4,8,9,11,13,22,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_body_is_solver_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_is_solver_type_2_0_i4);
	}
	if (MR_INT_EQ(MR_ctfield(3, MR_r2, 0),0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_is_solver_type_2_0_i22);
	}
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 1);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_is_solver_type_2_0_i1);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__type_body_is_solver_type_2_0_i8);
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_body_is_solver_type_2_0_i9);
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_is_solver_type_2_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_body_is_solver_type_2_0_i11);
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_body_is_solver_type_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__type_body_is_solver_type_2_0_i13);
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(check_hlds__type_util__type_body_is_solver_type_2_0_i39);
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__type_util__type_body_is_solver_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__member_2_1);
MR_declare_entry(MR_do_redo);

MR_BEGIN_MODULE(check_hlds__type_util_module22)
	MR_init_entry1(check_hlds__type_util__is_existq_type_2_0);
	MR_init_label4(check_hlds__type_util__is_existq_type_2_0,2,5,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__is_existq_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__type_constructors_3_0,
		check_hlds__type_util__is_existq_type_2_0_i2);
MR_def_label(check_hlds__type_util__is_existq_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__is_existq_type_2_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(2) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(3));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(check_hlds__type_util__is_existq_type_2_0_i4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__type_util__is_existq_type_2_0_i5);
MR_def_label(check_hlds__type_util__is_existq_type_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 0);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(3));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__is_existq_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(1);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__type_util__is_existq_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0);

MR_BEGIN_MODULE(check_hlds__type_util_module23)
	MR_init_entry1(check_hlds__type_util__is_dummy_argument_type_2_0);
	MR_init_label7(check_hlds__type_util__is_dummy_argument_type_2_0,2,7,9,10,12,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__is_dummy_argument_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__is_dummy_argument_type_2_0_i2);
MR_def_label(check_hlds__type_util__is_dummy_argument_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__is_dummy_argument_type_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__is_builtin_dummy_argument_type_1_0,
		check_hlds__type_util__is_dummy_argument_type_2_0_i7);
MR_def_label(check_hlds__type_util__is_dummy_argument_type_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(check_hlds__type_util__is_dummy_argument_type_2_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__is_dummy_argument_type_2_0_i9);
MR_def_label(check_hlds__type_util__is_dummy_argument_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__is_dummy_argument_type_2_0_i10);
MR_def_label(check_hlds__type_util__is_dummy_argument_type_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__is_dummy_argument_type_2_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__is_dummy_argument_type_2_0_i12);
MR_def_label(check_hlds__type_util__is_dummy_argument_type_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__type_util__is_dummy_argument_type_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(parse_tree__prog_type__constructor_list_represents_dummy_argument_type_2_0);
	}
MR_def_label(check_hlds__type_util__is_dummy_argument_type_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__is_dummy_argument_type_2_0,1)
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


MR_BEGIN_MODULE(check_hlds__type_util_module24)
	MR_init_entry1(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0);
	MR_init_label6(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,3,4,7,17,40,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i40);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__mercury_private_builtin_module_0_0,
		check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i3);
MR_def_label(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__sym_name_0_0,
		check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i4);
MR_def_label(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i40);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i40);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("base_typeclass_info", 19)) == 0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i7);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("type_ctor_info", 14)) == 0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i7);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("type_info", 9)) == 0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i7);
	}
	if ((strcmp((char *)MR_sv(2), (char *)(MR_Word) MR_string_const("typeclass_info", 14)) != 0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i40);
	}
MR_def_label(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	if (MR_PTAG_TEST(MR_r1,3)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i15);
	}
	if (MR_PTAG_TEST(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0_i17);
	}
	MR_r1 = (MR_tag(MR_r1) != MR_mktag((MR_Integer) 2));
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_r1 = ((MR_Integer) MR_tempr1 == (MR_Integer) MR_tbmkword(0, 0));
	MR_decr_sp_and_return(5);
	}
MR_def_label(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_ctfield(3, MR_r1, 0) != (MR_Integer) 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module25)
	MR_init_entry1(fn__check_hlds__type_util__classify_type_2_0);
	MR_init_label2(fn__check_hlds__type_util__classify_type_2_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__type_util__classify_type_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		fn__check_hlds__type_util__classify_type_2_0_i3);
MR_def_label(fn__check_hlds__type_util__classify_type_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__classify_type_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__check_hlds__type_util__classify_type_ctor_2_0);
MR_def_label(fn__check_hlds__type_util__classify_type_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module26)
	MR_init_entry1(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0);
	MR_init_label8(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,4,2,7,12,13,14,29,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i4);
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_ctor_2_0,
		fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i7);
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r1 = (MR_Integer) 8;
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i23) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i23) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i12) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i23) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i23) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i23) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29) MR_AND
		MR_LABEL_AP(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i29));
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i13);
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 187;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i14);
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0_i23);
	}
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(2);
MR_def_label(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module27)
	MR_init_entry1(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0);
	MR_init_label1(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__update_type_may_use_atomic_alloc_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0_i3);
	}
	MR_np_tailcall_ent(fn__check_hlds__type_util__type_may_use_atomic_alloc_2_0);
MR_def_label(check_hlds__type_util__update_type_may_use_atomic_alloc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__max_char_value_1_0);
MR_decl_entry(char__min_char_value_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_cons_tag_0;
MR_decl_entry(map__count_2_0);

MR_BEGIN_MODULE(check_hlds__type_util_module28)
	MR_init_entry1(check_hlds__type_util__switch_type_num_functors_3_0);
	MR_init_label8(check_hlds__type_util__switch_type_num_functors_3_0,2,8,9,4,12,10,14,15)
	MR_init_label3(check_hlds__type_util__switch_type_num_functors_3_0,17,19,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__switch_type_num_functors_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i2);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__switch_type_num_functors_3_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__type_util__switch_type_num_functors_3_0_i4);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__type_util__switch_type_num_functors_3_0_i4);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	if ((strcmp((char *)MR_tempr1, (char *)(MR_Word) MR_string_const("character", 9)) != 0)) {
		MR_GOTO_LAB(check_hlds__type_util__switch_type_num_functors_3_0_i4);
	}
	}
	MR_np_call_localret_ent(char__max_char_value_1_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i8);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(char__min_char_value_1_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i9);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (((MR_Integer) MR_sv(1) - (MR_Integer) MR_r1) + (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i12);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__switch_type_num_functors_3_0_i10);
	}
	MR_r2 = (MR_Integer) 1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i14);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i15);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__switch_type_num_functors_3_0_i1);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i17);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(check_hlds__type_util__switch_type_num_functors_3_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__count_2_0,
		check_hlds__type_util__switch_type_num_functors_3_0_i19);
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__switch_type_num_functors_3_0,1)
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

MR_decl_entry(hlds__hlds_module__module_info_get_cons_table_2_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(check_hlds__type_util_module29)
	MR_init_entry1(check_hlds__type_util__get_cons_defn_4_0);
	MR_init_label5(check_hlds__type_util__get_cons_defn_4_0,2,3,5,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__get_cons_defn_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_cons_table_2_0,
		check_hlds__type_util__get_cons_defn_4_0_i2);
MR_def_label(check_hlds__type_util__get_cons_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__get_cons_defn_4_0_i3);
MR_def_label(check_hlds__type_util__get_cons_defn_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_defn_4_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__IntroducedFrom__pred__get_cons_defn__891__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn);
	MR_r3 = MR_r2;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__filter_3_0,
		check_hlds__type_util__get_cons_defn_4_0_i5);
MR_def_label(check_hlds__type_util__get_cons_defn_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_defn_4_0_i1);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		check_hlds__type_util__get_cons_defn_4_0_i7);
MR_def_label(check_hlds__type_util__get_cons_defn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_defn_4_0_i1);
	}
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__get_cons_defn_4_0,1)
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

MR_decl_entry(map__lookup_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module30)
	MR_init_entry1(check_hlds__type_util__get_cons_id_arg_types_4_0);
	MR_init_label8(check_hlds__type_util__get_cons_id_arg_types_4_0,3,7,5,10,12,13,15,17)
	MR_init_label4(check_hlds__type_util__get_cons_id_arg_types_4_0,16,19,20,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__get_cons_id_arg_types_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i3);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_arg_types_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i7);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_arg_types_4_0_i5);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_defn_4_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i10);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_arg_types_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i12);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i13);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_arg_types_4_0_i2);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 0);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i15);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_arg_types_4_0_i17);
	}
	MR_r4 = MR_sv(4);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i19);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("type_util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("get_cons_id_arg_types: existentially typed cons_id", 50);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i16);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i19);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__type_util__get_cons_id_arg_types_4_0_i20);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0);
MR_def_label(check_hlds__type_util__get_cons_id_arg_types_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module31)
	MR_init_entry1(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0);
	MR_init_label8(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,3,7,5,10,12,13,15,17)
	MR_init_label4(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,18,19,2,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i3);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_ctor_is_tuple_1_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i7);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i5);
	}
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_defn_4_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i10);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i12);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i13);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_sv(1), 2);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i2);
	}
	MR_sv(1) = MR_ctfield(0, MR_sv(1), 0);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i15);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i1);
	}
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i17);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i18);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0_i19);
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,1)
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

MR_declare_entry(MR_do_fail);
MR_decl_entry(map__member_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);

MR_BEGIN_MODULE(check_hlds__type_util_module32)
	MR_init_entry1(check_hlds__type_util__cons_id_arg_types_4_0);
	MR_init_label8(check_hlds__type_util__cons_id_arg_types_4_0,1,3,4,6,8,9,10,11)
	MR_init_label5(check_hlds__type_util__cons_id_arg_types_4_0,12,15,16,17,18)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__cons_id_arg_types_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred check_hlds.type_util.cons_id_arg_types/4-0", 7,
		MR_ENTRY(MR_do_fail));
	MR_fv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i1);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	MR_fv(3) = MR_r2;
	MR_fv(4) = MR_r3;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i3);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_fv(3);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i4);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_fv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_body_2_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i6);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO(MR_ENTRY(MR_do_fail));
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, cons_tag);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(map__member_3_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i8);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(2) = MR_r1;
	MR_r1 = MR_fv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_cons_table_2_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i9);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,3);
	MR_r4 = MR_fv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i10);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_cons_defn);
	MR_np_call_localret_ent(list__member_2_1,
		check_hlds__type_util__cons_id_arg_types_4_0_i11);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = MR_ctfield(0, MR_r1, 0);
	MR_fv(7) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i12);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	if (MR_LTAGS_TESTR(MR_fv(6),0,0)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_r1 = MR_fv(5);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i15);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_fv(4);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i16);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_fv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r4 = MR_fv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i17);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_fv(6);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		check_hlds__type_util__cons_id_arg_types_4_0_i18);
MR_def_label(check_hlds__type_util__cons_id_arg_types_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_fv(2);
	MR_r2 = MR_tempr1;
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module33)
	MR_init_entry1(check_hlds__type_util__get_type_and_cons_defn_5_0);
	MR_init_label5(check_hlds__type_util__get_type_and_cons_defn_5_0,3,5,7,8,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__get_type_and_cons_defn_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__get_type_and_cons_defn_5_0_i3);
MR_def_label(check_hlds__type_util__get_type_and_cons_defn_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_type_and_cons_defn_5_0_i2);
	}
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r2;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_defn_4_0,
		check_hlds__type_util__get_type_and_cons_defn_5_0_i5);
MR_def_label(check_hlds__type_util__get_type_and_cons_defn_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_type_and_cons_defn_5_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__get_type_and_cons_defn_5_0_i7);
MR_def_label(check_hlds__type_util__get_type_and_cons_defn_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__type_util__get_type_and_cons_defn_5_0_i8);
MR_def_label(check_hlds__type_util__get_type_and_cons_defn_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__type_util__get_type_and_cons_defn_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("type_util.m", 11);
	MR_r2 = (MR_Word) MR_string_const("gget_type_and_cons_defn", 23);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_data__get_type_defn_tvarset_2_0);
MR_decl_entry(hlds__hlds_data__get_type_defn_kind_map_2_0);
MR_decl_entry(parse_tree__prog_type__var_list_to_type_list_3_0);
MR_decl_entry(parse_tree__prog_type__construct_type_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module34)
	MR_init_entry1(check_hlds__type_util__get_existq_cons_defn_4_0);
	MR_init_label8(check_hlds__type_util__get_existq_cons_defn_4_0,2,4,7,8,9,11,12,13)
	MR_init_label6(check_hlds__type_util__get_existq_cons_defn_4_0,14,15,16,18,20,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__get_existq_cons_defn_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i2);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_existq_cons_defn_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_defn_4_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i4);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_existq_cons_defn_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__get_existq_cons_defn_4_0_i1);
	}
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_r4 = MR_ctfield(0, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i7);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_type_table_2_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i8);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i9);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_existq_cons_defn_4_0_i1);
	}
	MR_r3 = MR_sv(5);
	MR_sv(5) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_type_defn);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(map__lookup_3_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i11);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tvarset_2_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i12);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_tparams_2_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i13);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_data__get_type_defn_kind_map_2_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i14);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(parse_tree__prog_type__var_list_to_type_list_3_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i15);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i16);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_existq_cons_defn_4_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i18);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__get_existq_cons_defn_4_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type__construct_type_3_0,
		check_hlds__type_util__get_existq_cons_defn_4_0_i20);
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__type_util__get_existq_cons_defn_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module35)
	MR_init_entry1(check_hlds__type_util__is_existq_cons_3_0);
	MR_init_label3(check_hlds__type_util__is_existq_cons_3_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__is_existq_cons_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__is_existq_cons_3_0_i2);
MR_def_label(check_hlds__type_util__is_existq_cons_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__is_existq_cons_3_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_defn_4_0,
		check_hlds__type_util__is_existq_cons_3_0_i4);
MR_def_label(check_hlds__type_util__is_existq_cons_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__is_existq_cons_3_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_r2, 0);
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__is_existq_cons_3_0_i1);
	}
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__is_existq_cons_3_0,1)
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

MR_decl_entry(hlds__hlds_module__module_info_get_no_tag_types_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_no_tag_type_0;

MR_BEGIN_MODULE(check_hlds__type_util_module36)
	MR_init_entry1(check_hlds__type_util__type_is_no_tag_type_4_0);
	MR_init_label7(check_hlds__type_util__type_is_no_tag_type_4_0,2,4,5,8,9,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__type_is_no_tag_type_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		check_hlds__type_util__type_is_no_tag_type_4_0_i2);
MR_def_label(check_hlds__type_util__type_is_no_tag_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_no_tag_type_4_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_no_tag_types_2_0,
		check_hlds__type_util__type_is_no_tag_type_4_0_i4);
MR_def_label(check_hlds__type_util__type_is_no_tag_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, type_ctor);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, no_tag_type);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		check_hlds__type_util__type_is_no_tag_type_4_0_i5);
MR_def_label(check_hlds__type_util__type_is_no_tag_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_no_tag_type_4_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__type_is_no_tag_type_4_0_i8);
	}
	MR_tempr1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_r2, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(check_hlds__type_util__type_is_no_tag_type_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_r4;
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	}
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__type_is_no_tag_type_4_0_i9);
MR_def_label(check_hlds__type_util__type_is_no_tag_type_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_3_0,
		check_hlds__type_util__type_is_no_tag_type_4_0_i10);
MR_def_label(check_hlds__type_util__type_is_no_tag_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_r1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(check_hlds__type_util__type_is_no_tag_type_4_0,1)
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

MR_decl_entry(fn__parse_tree__prog_util__cons_id_arity_1_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(parse_tree__prog_type__constraint_list_get_tvars_2_0);
MR_decl_entry(list__delete_elems_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module37)
	MR_init_entry1(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0);
	MR_init_label7(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,2,5,7,8,9,10,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__check_hlds__type_util__cons_id_adjusted_arity_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_util__cons_id_arity_1_0,
		fn__check_hlds__type_util__cons_id_adjusted_arity_3_0_i2);
MR_def_label(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__type_util__get_existq_cons_defn_4_0,
		fn__check_hlds__type_util__cons_id_adjusted_arity_3_0_i5);
MR_def_label(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0_i3);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(list__length_2_0,
		fn__check_hlds__type_util__cons_id_adjusted_arity_3_0_i7);
MR_def_label(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__constraint_list_get_tvars_2_0,
		fn__check_hlds__type_util__cons_id_adjusted_arity_3_0_i8);
MR_def_label(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r3 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(list__delete_elems_3_0,
		fn__check_hlds__type_util__cons_id_adjusted_arity_3_0_i9);
MR_def_label(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(list__length_2_0,
		fn__check_hlds__type_util__cons_id_adjusted_arity_3_0_i10);
MR_def_label(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (((MR_Integer) MR_sv(1) + (MR_Integer) MR_sv(3)) + (MR_Integer) MR_r1);
	MR_decr_sp_and_return(4);
MR_def_label(fn__check_hlds__type_util__cons_id_adjusted_arity_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__duplicate_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module38)
	MR_init_entry1(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0);
	MR_init_label5(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,7,9,4,5,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__maybe_get_cons_id_arg_types_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r3,1)) {
		MR_GOTO_LAB(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_i5);
	}
	MR_sv(1) = MR_r4;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(check_hlds__type_util__get_cons_id_non_existential_arg_types_4_0,
		check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_i7);
MR_def_label(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_i4);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_np_call_localret_ent(list__length_2_0,
		check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_i9);
MR_def_label(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(1) != MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0_i4);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,4);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(fn__list__map_2_0);
MR_def_label(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
MR_def_label(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r2 = MR_r4;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__duplicate_3_0);
MR_def_label(check_hlds__type_util__maybe_get_cons_id_arg_types_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type__type_is_higher_order_details_5_0);

MR_BEGIN_MODULE(check_hlds__type_util_module39)
	MR_init_entry1(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0);
	MR_init_label3(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0,5,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__maybe_get_higher_order_arg_types_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(parse_tree__prog_type__type_is_higher_order_details_5_0,
		check_hlds__type_util__maybe_get_higher_order_arg_types_3_0_i5);
MR_def_label(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0_i2);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,5);
	MR_r4 = MR_r5;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__list__map_2_0);
MR_def_label(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(check_hlds__type_util__maybe_get_higher_order_arg_types_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(list__duplicate_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module40)
	MR_init_entry1(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0);
	MR_init_label1(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_variable_renaming_to_constraint_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraint_3_0_i2);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module41)
	MR_init_entry1(check_hlds__type_util__apply_subst_to_constraint_3_0);
	MR_init_label1(check_hlds__type_util__apply_subst_to_constraint_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_subst_to_constraint_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_type_list_3_0,
		check_hlds__type_util__apply_subst_to_constraint_3_0_i2);
MR_def_label(check_hlds__type_util__apply_subst_to_constraint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module42)
	MR_init_entry1(check_hlds__type_util__apply_rec_subst_to_constraint_3_0);
	MR_init_label1(check_hlds__type_util__apply_rec_subst_to_constraint_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_rec_subst_to_constraint_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraint_3_0_i2);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraint_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module43)
	MR_init_entry1(check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module44)
	MR_init_entry1(check_hlds__type_util__apply_subst_to_constraint_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_subst_to_constraint_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_subst_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module45)
	MR_init_entry1(check_hlds__type_util__apply_rec_subst_to_constraint_list_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_rec_subst_to_constraint_list_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_rec_subst_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_class_id_0;
MR_decl_entry(map__map_values_3_0);
MR_decl_entry(map__keys_2_0);
MR_decl_entry(map__values_2_0);
MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module46)
	MR_init_entry1(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0);
	MR_init_label8(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_variable_renaming_to_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i2);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i3);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1025__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_r2;
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i4);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i5);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i6);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i7);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i8);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraints_3_0_i9);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraints_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module47)
	MR_init_entry1(check_hlds__type_util__apply_subst_to_constraints_3_0);
	MR_init_label8(check_hlds__type_util__apply_subst_to_constraints_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_subst_to_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_subst_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i2);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i3);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1042__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_r2;
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i4);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i5);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i6);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i7);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i8);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__apply_subst_to_constraints_3_0_i9);
MR_def_label(check_hlds__type_util__apply_subst_to_constraints_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module48)
	MR_init_entry1(check_hlds__type_util__apply_rec_subst_to_constraints_3_0);
	MR_init_label8(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,2,3,4,5,6,7,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_rec_subst_to_constraints_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_rec_subst_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_sv(5) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i2);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i3);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1059__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r5 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, class_id);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_r2;
	}
	MR_np_call_localret_ent(map__map_values_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i4);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,9);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i5);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i6);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i7);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,9);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_r1;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i8);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(map__from_corresponding_lists_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraints_3_0_i9);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraints_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(check_hlds__type_util_module49)
	MR_init_entry1(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0);
	MR_init_label6(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,3,2,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__is_empty_1_0,
		check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_i3);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_i2);
	}
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(map__keys_2_0,
		check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_i5);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_np_call_localret_ent(map__values_2_0,
		check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_i6);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_i7);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,10);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__rename_constraint_proof_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0_i8);
MR_def_label(check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__from_corresponding_lists_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(map__foldl_4_0);

MR_BEGIN_MODULE(check_hlds__type_util_module50)
	MR_init_entry1(check_hlds__type_util__apply_subst_to_constraint_proofs_3_0);
	MR_init_label1(check_hlds__type_util__apply_subst_to_constraint_proofs_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_subst_to_constraint_proofs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__type_util__apply_subst_to_constraint_proofs_3_0_i2);
MR_def_label(check_hlds__type_util__apply_subst_to_constraint_proofs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module51)
	MR_init_entry1(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0);
	MR_init_label1(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(2) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0_i2);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(map__foldl_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_data__type_ctor_info_constraint_id_0;

MR_BEGIN_MODULE(check_hlds__type_util_module52)
	MR_init_entry1(check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_variable_renaming_to_constraint_map_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_tailcall_ent(map__map_values_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module53)
	MR_init_entry1(check_hlds__type_util__apply_subst_to_constraint_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_subst_to_constraint_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_subst_to_constraint_map_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_tailcall_ent(map__map_values_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module54)
	MR_init_entry1(check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__check_hlds__type_util__apply_rec_subst_to_constraint_map_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_rec_subst_to_constraint_map_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_id);
	MR_r5 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_np_tailcall_ent(map__map_values_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module55)
	MR_init_entry1(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0);
	MR_init_label2(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0,3,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_i1);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, constructor_arg);
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,6);
	MR_r4 = MR_ctfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0_i3);
MR_def_label(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,8);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r5 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module56)
	MR_init_entry1(check_hlds__type_util__rename_constraint_proof_3_0);
	MR_init_label2(check_hlds__type_util__rename_constraint_proof_3_0,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__rename_constraint_proof_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(check_hlds__type_util__rename_constraint_proof_3_0_i12);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(check_hlds__type_util__rename_constraint_proof_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = MR_ctfield(1, MR_r2, 0);
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0,
		check_hlds__type_util__rename_constraint_proof_3_0_i4);
MR_def_label(check_hlds__type_util__rename_constraint_proof_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0);
MR_decl_entry(map__set_4_0);

MR_BEGIN_MODULE(check_hlds__type_util_module57)
	MR_init_entry1(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0);
	MR_init_label3(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0,2,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0,
		check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0_i2);
MR_def_label(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0_i4);
	}
	MR_r3 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
MR_def_label(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0,
		check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0_i5);
MR_def_label(check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module58)
	MR_init_entry1(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0);
	MR_init_label3(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0,2,4,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0_i2);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0_i4);
	}
	MR_r4 = MR_r1;
	MR_r5 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_ctfield(1, MR_sv(2), 0);
	}
	MR_np_call_localret_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0,
		check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0_i5);
MR_def_label(check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_r1;
	MR_r4 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_constraint);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, constraint_proof);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(map__set_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module59)
	MR_init_entry1(check_hlds__type_util__apply_variable_renaming_to_constraint_map_2_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__apply_variable_renaming_to_constraint_map_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module60)
	MR_init_entry1(check_hlds__type_util__apply_subst_to_constraint_map_2_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__apply_subst_to_constraint_map_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module61)
	MR_init_entry1(check_hlds__type_util__apply_rec_subst_to_constraint_map_2_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__apply_rec_subst_to_constraint_map_2_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module62)
	MR_init_entry1(__Unify___check_hlds__type_util__exist_qvar_action_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___check_hlds__type_util__exist_qvar_action_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module63)
	MR_init_entry1(__Compare___check_hlds__type_util__exist_qvar_action_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___check_hlds__type_util__exist_qvar_action_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module64)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__type_constructors__704__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__type_constructors__704__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module65)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__858__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__858__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module66)
	MR_init_entry1(check_hlds__type_util__IntroducedFrom__pred__get_cons_defn__891__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__IntroducedFrom__pred__get_cons_defn__891__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 3);
	MR_np_tailcall_ent(__Unify___parse_tree__prog_data__type_ctor_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module67)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__902__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__902__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module68)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__971__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__971__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module69)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__984__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__984__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module70)
	MR_init_entry1(check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1025__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1025__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_50_53_95_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module71)
	MR_init_entry1(check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1042__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1042__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_52_50_95_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module72)
	MR_init_entry1(check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1059__1_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1059__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_53_57_95_95_49_95_95_91_50_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module73)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__481__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__481__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module74)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__1_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module75)
	MR_init_entry1(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__2_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__830__2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_util__sym_name_get_module_name_3_0);

MR_BEGIN_MODULE(check_hlds__type_util_module76)
	MR_init_entry1(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_109_111_100_117_108_101_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_109_111_100_117_108_101_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_tailcall_ent(parse_tree__prog_util__sym_name_get_module_name_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_util__unqualify_name_1_0);

MR_BEGIN_MODULE(check_hlds__type_util_module77)
	MR_init_entry1(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_110_97_109_101_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__parse_tree__prog_util__unqualify_name_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module78)
	MR_init_entry1(fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_121_112_101_95_99_116_111_114_95_97_114_105_116_121_95_95_91_49_93_95_48_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module79)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module80)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module81)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_95_109_97_112_95_50_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module82)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_50_53_95_95_49_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_118_97_114_105_97_98_108_101_95_114_101_110_97_109_105_110_103_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_50_53_95_95_49_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,11);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_variable_renaming_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module83)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_52_50_95_95_49_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_52_50_95_95_49_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,12);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_subst_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(check_hlds__type_util_module84)
	MR_init_entry1(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_53_57_95_95_49_95_95_91_50_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_99_104_101_99_107_95_104_108_100_115_95_95_116_121_112_101_95_117_116_105_108_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_97_112_112_108_121_95_114_101_99_95_115_117_98_115_116_95_116_111_95_99_111_110_115_116_114_97_105_110_116_115_95_95_49_48_53_57_95_95_49_95_95_91_50_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(2,13);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(check_hlds__type_util__apply_rec_subst_to_constraint_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_data, hlds_constraint);
	MR_np_tailcall_ent(list__map_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__check_hlds__type_util_maybe_bunch_0(void)
{
	check_hlds__type_util_module0();
	check_hlds__type_util_module1();
	check_hlds__type_util_module2();
	check_hlds__type_util_module3();
	check_hlds__type_util_module4();
	check_hlds__type_util_module5();
	check_hlds__type_util_module6();
	check_hlds__type_util_module7();
	check_hlds__type_util_module8();
	check_hlds__type_util_module9();
	check_hlds__type_util_module10();
	check_hlds__type_util_module11();
	check_hlds__type_util_module12();
	check_hlds__type_util_module13();
	check_hlds__type_util_module14();
	check_hlds__type_util_module15();
	check_hlds__type_util_module16();
	check_hlds__type_util_module17();
	check_hlds__type_util_module18();
	check_hlds__type_util_module19();
	check_hlds__type_util_module20();
	check_hlds__type_util_module21();
	check_hlds__type_util_module22();
	check_hlds__type_util_module23();
	check_hlds__type_util_module24();
	check_hlds__type_util_module25();
	check_hlds__type_util_module26();
	check_hlds__type_util_module27();
	check_hlds__type_util_module28();
	check_hlds__type_util_module29();
	check_hlds__type_util_module30();
	check_hlds__type_util_module31();
	check_hlds__type_util_module32();
	check_hlds__type_util_module33();
	check_hlds__type_util_module34();
	check_hlds__type_util_module35();
	check_hlds__type_util_module36();
	check_hlds__type_util_module37();
	check_hlds__type_util_module38();
	check_hlds__type_util_module39();
}

static void mercury__check_hlds__type_util_maybe_bunch_1(void)
{
	check_hlds__type_util_module40();
	check_hlds__type_util_module41();
	check_hlds__type_util_module42();
	check_hlds__type_util_module43();
	check_hlds__type_util_module44();
	check_hlds__type_util_module45();
	check_hlds__type_util_module46();
	check_hlds__type_util_module47();
	check_hlds__type_util_module48();
	check_hlds__type_util_module49();
	check_hlds__type_util_module50();
	check_hlds__type_util_module51();
	check_hlds__type_util_module52();
	check_hlds__type_util_module53();
	check_hlds__type_util_module54();
	check_hlds__type_util_module55();
	check_hlds__type_util_module56();
	check_hlds__type_util_module57();
	check_hlds__type_util_module58();
	check_hlds__type_util_module59();
	check_hlds__type_util_module60();
	check_hlds__type_util_module61();
	check_hlds__type_util_module62();
	check_hlds__type_util_module63();
	check_hlds__type_util_module64();
	check_hlds__type_util_module65();
	check_hlds__type_util_module66();
	check_hlds__type_util_module67();
	check_hlds__type_util_module68();
	check_hlds__type_util_module69();
	check_hlds__type_util_module70();
	check_hlds__type_util_module71();
	check_hlds__type_util_module72();
	check_hlds__type_util_module73();
	check_hlds__type_util_module74();
	check_hlds__type_util_module75();
	check_hlds__type_util_module76();
	check_hlds__type_util_module77();
	check_hlds__type_util_module78();
	check_hlds__type_util_module79();
}

static void mercury__check_hlds__type_util_maybe_bunch_2(void)
{
	check_hlds__type_util_module80();
	check_hlds__type_util_module81();
	check_hlds__type_util_module82();
	check_hlds__type_util_module83();
	check_hlds__type_util_module84();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__check_hlds__type_util__init(void);
void mercury__check_hlds__type_util__init_type_tables(void);
void mercury__check_hlds__type_util__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__check_hlds__type_util__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__check_hlds__type_util__init_complexity_procs(void);
#endif

void mercury__check_hlds__type_util__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__check_hlds__type_util_maybe_bunch_0();
	mercury__check_hlds__type_util_maybe_bunch_1();
	mercury__check_hlds__type_util_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_check_hlds__type_util__type_ctor_info_exist_qvar_action_0,
		check_hlds__type_util__exist_qvar_action_0_0);
	mercury__check_hlds__type_util__init_debugger();
}

void mercury__check_hlds__type_util__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_check_hlds__type_util__type_ctor_info_exist_qvar_action_0);
	}
}


void mercury__check_hlds__type_util__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__check_hlds__type_util__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__check_hlds__type_util__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
