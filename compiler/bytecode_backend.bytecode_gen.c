/*
** Automatically generated from `bytecode_gen.m'
** by the Mercury compiler,
** version rotd-2009-09-19, configured for i686-pc-linux-gnu.
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
INIT mercury__bytecode_backend__bytecode_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "bytecode_backend.bytecode_gen.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "bytecode_backend.bytecode_gen.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "bytecode_backend.bytecode_gen.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "bytecode_backend.bytecode_gen.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "bytecode_backend.bytecode_gen.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "bytecode_backend.bytecode_gen.c"
#line 48 "bytecode_backend.bytecode_gen.c"
#include "bytecode_backend.bytecode_gen.mh"

#line 51 "bytecode_backend.bytecode_gen.c"
#line 52 "bytecode_backend.bytecode_gen.c"
#ifndef BYTECODE_BACKEND__BYTECODE_GEN_DECL_GUARD
#define BYTECODE_BACKEND__BYTECODE_GEN_DECL_GUARD

#line 56 "bytecode_backend.bytecode_gen.c"
#line 57 "bytecode_backend.bytecode_gen.c"

#endif
#line 60 "bytecode_backend.bytecode_gen.c"

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
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Integer f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0;
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0, 3,5,7,8,9,10,12,13)
MR_decl_label7(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0, 14,15,18,23,24,25,26)
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 11,12,13,14,15,19,21,20)
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 25,30,31,32,33,34,36,35)
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 40,3,4,5,111,45,46,47)
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 48,50,52,56,55,58,49,61)
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 63,64,102,66,68,70,72,74)
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 78,80,82,105,88,93,94,76)
MR_decl_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 84,85,90,91,96,97,99,100)
MR_decl_label3(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0, 65,8,9)
MR_decl_label2(bytecode_backend__bytecode_gen__all_dirs_same_2_0, 2,1)
MR_decl_label5(bytecode_backend__bytecode_gen__create_varmap_7_0, 18,5,6,7,8)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_builtin_5_0, 2,3,6,9,13,15,11,4)
MR_decl_label1(bytecode_backend__bytecode_gen__gen_builtin_5_0, 21)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_call_6_0, 2,3,5,6,7,9,8,10)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_call_6_0, 11,12,13,14,15,17,18,19)
MR_decl_label3(bytecode_backend__bytecode_gen__gen_call_6_0, 22,24,25)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_conj_4_0, 3,5,6,7,9,10,11,12)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_disj_5_0, 4,5,6,8,9,13,15,16)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_disj_5_0, 17,11,18,19,22,27,28,29)
MR_decl_label2(bytecode_backend__bytecode_gen__gen_disj_5_0, 30,3)
MR_decl_label5(bytecode_backend__bytecode_gen__gen_goal_4_0, 2,3,4,6,7)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 153,154,81,80,155,27,28,119)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 156,5,163,9,157,14,13,15)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 16,18,22,23,161,37,38,39)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 40,41,42,44,46,53,57,58)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 59,60,61,62,159,65,66,67)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 69,75,76,160,85,86,87,88)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 89,90,91,93,95,96,162,100)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0, 158,103,104,105,107,111,112,113)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0, 2,5,6,7,8,10,11,12)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0, 13,14,15,16,18,19,22,24)
MR_decl_label1(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0, 25)
MR_decl_label3(bytecode_backend__bytecode_gen__gen_module_5_0, 2,3,4)
MR_decl_label4(bytecode_backend__bytecode_gen__gen_pickups_3_0, 19,5,7,9)
MR_decl_label4(bytecode_backend__bytecode_gen__gen_places_3_0, 19,5,7,9)
MR_decl_label4(bytecode_backend__bytecode_gen__gen_pred_7_0, 17,5,6,7)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_preds_5_0, 45,5,6,7,9,11,12,13)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_preds_5_0, 14,15,16,17,18,20,23,24)
MR_decl_label3(bytecode_backend__bytecode_gen__gen_preds_5_0, 25,26,27)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_proc_4_0, 2,3,4,5,6,7,8,9)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_proc_4_0, 10,12,13,14,15,16,17,19)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_proc_4_0, 20,21,22,23,24,25,27,29)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_proc_4_0, 30,33,34,35,32,41,42,47)
MR_decl_label8(bytecode_backend__bytecode_gen__gen_proc_4_0, 48,49,50,51,52,53,54,55)
MR_decl_label5(bytecode_backend__bytecode_gen__gen_proc_4_0, 57,59,56,63,64)
MR_decl_label2(bytecode_backend__bytecode_gen__get_counts_3_0, 2,3)
MR_decl_label1(bytecode_backend__bytecode_gen__get_next_label_3_0, 2)
MR_decl_label1(bytecode_backend__bytecode_gen__get_next_temp_3_0, 2)
MR_decl_label3(bytecode_backend__bytecode_gen__map_arg_3_0, 24,9,5)
MR_decl_label8(bytecode_backend__bytecode_gen__map_assign_4_0, 38,39,3,9,11,7,4,22)
MR_decl_label6(bytecode_backend__bytecode_gen__map_assign_4_0, 24,19,28,31,33,34)
MR_decl_label8(bytecode_backend__bytecode_gen__map_cons_id_3_0, 45,75,18,17,20,21,76,39)
MR_decl_label8(bytecode_backend__bytecode_gen__map_cons_id_3_0, 40,49,3,5,78,8,9,10)
MR_decl_label8(bytecode_backend__bytecode_gen__map_cons_id_3_0, 11,13,14,23,25,27,29,31)
MR_decl_label4(bytecode_backend__bytecode_gen__map_cons_id_3_0, 33,35,42,44)
MR_decl_label8(bytecode_backend__bytecode_gen__map_cons_tag_2_0, 36,15,26,9,40,3,5,7)
MR_decl_label8(bytecode_backend__bytecode_gen__map_cons_tag_2_0, 11,13,18,20,22,28,30,32)
MR_decl_label1(bytecode_backend__bytecode_gen__map_cons_tag_2_0, 34)
MR_decl_label8(bytecode_backend__bytecode_gen__map_test_3_0, 9,11,7,4,22,24,19,3)
MR_decl_label3(bytecode_backend__bytecode_gen__map_test_3_0, 82,39,34)
MR_decl_label8(bytecode_backend__bytecode_gen__map_uni_modes_4_0, 3,10,12,14,15,18,21,27)
MR_decl_label2(bytecode_backend__bytecode_gen__map_uni_modes_4_0, 28,8)
MR_decl_label3(bytecode_backend__bytecode_gen__map_vars_2_3_0, 15,5,6)
MR_decl_label6(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0, 5,7,9,11,15,1)
MR_decl_label7(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0, 3,2,6,11,15,19,47)
MR_decl_static(bytecode_backend__bytecode_gen__map_var_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_places_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_pickups_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_call_6_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_arg_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_test_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_assign_4_0)
MR_decl_static(fn__bytecode_backend__bytecode_gen__this_file_0_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_builtin_5_0)
MR_decl_static(bytecode_backend__bytecode_gen__get_var_type_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_uni_modes_4_0)
MR_decl_static(bytecode_backend__bytecode_gen__all_dirs_same_2_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_cons_tag_2_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_cons_id_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_vars_2_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__map_vars_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__get_next_label_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__get_next_temp_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_goal_4_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_goal_expr_5_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_conj_4_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_disj_5_0)
MR_decl_static(bytecode_backend__bytecode_gen__create_varmap_7_0)
MR_decl_static(bytecode_backend__bytecode_gen__get_counts_3_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_proc_4_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_pred_7_0)
MR_decl_static(bytecode_backend__bytecode_gen__gen_preds_5_0)
MR_def_extern_entry(bytecode_backend__bytecode_gen__gen_module_5_0)
MR_decl_static(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0)
MR_decl_static(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0)
MR_decl_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0)
MR_decl_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
static const struct mercury_type_0 mercury_common_0[4] =
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
MR_tbmkword(0, 5),
MR_tbmkword(0, 0)
}
},
{
{
MR_tbmkword(0, 1),
MR_tbmkword(0, 0)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;
static const struct mercury_type_1 mercury_common_1[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(bytecode_backend__bytecode_gen, byte_info),
MR_COMMON(0,1),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(bytecode_backend__bytecode_gen, byte_info),
MR_CTOR0_ADDR(parse_tree__prog_data, cons_id),
MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id)
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
static const struct mercury_type_2 mercury_common_2[1] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_TAG_COMMON(0,0,0),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info)
}
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
0
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_string_const("builtin", 7)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
2,
-1
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
	&mercury_data_term__type_ctor_info_var_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_int_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
	(MR_TypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_counter__type_ctor_info_counter_0;

const MR_PseudoTypeInfo mercury_data_bytecode_backend__bytecode_gen__field_types_byte_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
	(MR_PseudoTypeInfo) &mercury_data_hlds__hlds_module__type_ctor_info_module_info_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0,
	(MR_PseudoTypeInfo) &mercury_data_counter__type_ctor_info_counter_0
};

const MR_ConstString mercury_data_bytecode_backend__bytecode_gen__field_names_byte_info_0_0[] = {
	"byteinfo_varmap",
	"byteinfo_vartypes",
	"byteinfo_moduleinfo",
	"byteinfo_label_counter",
	"byteinfo_temp_counter"
};

static const MR_DuFunctorDesc mercury_data_bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0 = {
	"byte_info",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_bytecode_backend__bytecode_gen__field_types_byte_info_0_0,
	mercury_data_bytecode_backend__bytecode_gen__field_names_byte_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0[] = {
	&mercury_data_bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0

};

const MR_DuPtagLayout mercury_data_bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_bytecode_backend__bytecode_gen__du_stag_ordered_byte_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0[] = {
	&mercury_data_bytecode_backend__bytecode_gen__du_functor_desc_byte_info_0_0
};

const MR_Integer mercury_data_bytecode_backend__bytecode_gen__functor_number_map_byte_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0)),
	"bytecode_backend.bytecode_gen",
	"byte_info",
	{ (void *)mercury_data_bytecode_backend__bytecode_gen__du_name_ordered_byte_info_0 },
	{ (void *)mercury_data_bytecode_backend__bytecode_gen__du_ptag_ordered_byte_info_0 },
	1,
	4,
	mercury_data_bytecode_backend__bytecode_gen__functor_number_map_byte_info_0
};

static const MR_UserClosureId
mercury_data__closure_layout__bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_1 = {
{
MR_PREDICATE,
"bytecode_backend.bytecode_gen",
"bytecode_backend.bytecode_gen",
"get_var_type",
3,
0
},
"bytecode_backend.bytecode_gen",
"bytecode_gen.m",
353,
"d1;c9;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_1 = {
{
MR_PREDICATE,
"bytecode_backend.bytecode_gen",
"bytecode_backend.bytecode_gen",
"map_cons_id",
3,
0
},
"bytecode_backend.bytecode_gen",
"bytecode_gen.m",
691,
"d2;c9;"
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module0)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_var_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_var'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_var_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_code_0;
MR_decl_entry(fn__cord__empty_0_0);
MR_decl_entry(fn__cord__singleton_1_0);
MR_decl_entry(fn__f_99_111_114_100_95_95_43_43_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module1)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_places_3_0);
	MR_init_label4(bytecode_backend__bytecode_gen__gen_places_3_0,19,5,7,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_places'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_places_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_places_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_places_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__gen_places_3_0,
		bytecode_backend__bytecode_gen__gen_places_3_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_places_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__gen_places_3_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_places_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 21;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_places_3_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__gen_places_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module2)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_pickups_3_0);
	MR_init_label4(bytecode_backend__bytecode_gen__gen_pickups_3_0,19,5,7,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_pickups'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_pickups_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_pickups_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_pickups_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__gen_pickups_3_0,
		bytecode_backend__bytecode_gen__gen_pickups_3_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_pickups_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__gen_pickups_3_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_pickups_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 22;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_pickups_3_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__gen_pickups_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__code_model__determinism_to_code_model_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(hlds__arg_info__make_arg_infos_5_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(hlds__arg_info__partition_args_3_0);
MR_decl_entry(list__length_2_0);
MR_decl_entry(ll_backend__call_gen__input_arg_locs_2_0);
MR_decl_entry(ll_backend__call_gen__output_arg_locs_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module3)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,2,5,6,7,8,10,11,12)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,13,14,15,16,18,19,22,24)
	MR_init_label1(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_higher_order_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(bytecode_backend__bytecode_gen__get_var_type_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(list__map_3_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(hlds__arg_info__make_arg_infos_5_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__arg_info__partition_args_3_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i8);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r2;
	MR_sv(7) = (MR_Word) MR_TAG_COMMON(0,2,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i10);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i11);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ll_backend__call_gen__input_arg_locs_2_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i12);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_places_3_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i13);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__output_arg_locs_2_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_pickups_3_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i15);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(5), 0);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i16);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 24;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i18);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i19);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i22);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i22);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i24);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_higher_order_call_6_0_i25);
MR_def_label(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_module__predicate_id_5_0);
MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module4)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_call_6_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_call_6_0,2,3,5,6,7,9,8,10)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_call_6_0,11,12,13,14,15,17,18,19)
	MR_init_label3(bytecode_backend__bytecode_gen__gen_call_6_0,22,24,25)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_call'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_call_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i3);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_call_6_0_i9);
	}
	MR_r1 = MR_sv(3);
	MR_sv(7) = (MR_Integer) 1;
	MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_call_6_0_i8);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(7) = (MR_Integer) 0;
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(ll_backend__call_gen__input_arg_locs_2_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i10);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_places_3_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i11);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__output_arg_locs_2_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i12);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_pickups_3_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i13);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i15);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 23;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i17);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i18);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_call_6_0_i19);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 7);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i22);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i22);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i24);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_call_6_0_i25);
MR_def_label(bytecode_backend__bytecode_gen__gen_call_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module5)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_arg_3_0);
	MR_init_label3(bytecode_backend__bytecode_gen__map_arg_3_0,24,9,5)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_arg'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_arg_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_arg_3_0_i5);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_arg_3_0_i24);
	}
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_ctfield(2, MR_tempr2, 0);
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_arg_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_arg_3_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__map_arg_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(1);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_arg_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(1, MR_r2, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module6)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_test_3_0);
	MR_init_label8(bytecode_backend__bytecode_gen__map_test_3_0,9,11,7,4,22,24,19,3)
	MR_init_label3(bytecode_backend__bytecode_gen__map_test_3_0,82,39,34)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_test'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_test_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r4 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i7);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_sv(1) = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(2, MR_tempr1, 0);
	MR_r3 = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr4, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 3);
	MR_r1 = MR_r3;
	MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i4);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(1), 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_test_3_0_i11);
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i4);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tempr2 = MR_tempr1;
	MR_sv(1) = MR_r1;
	MR_tempr3 = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 3);
	MR_r1 = MR_tempr2;
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(3);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i19);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i22);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_sv(3), 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_test_3_0_i24);
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(3), 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 27;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(3, MR_tempr2, 2) = MR_r1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_r3 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i34);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_test_3_0_i82);
	}
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_ctfield(2, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 28;
	MR_tfield(3, MR_tempr3, 1) = MR_ctfield(3, MR_tempr4, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_tempr2 = MR_r3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_tempr1, 0);
	MR_r5 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_test_3_0_i39);
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 28;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_test_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 28;
	MR_tfield(3, MR_tempr2, 1) = MR_ctfield(3, MR_r2, 1);
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module7)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_assign_4_0);
	MR_init_label8(bytecode_backend__bytecode_gen__map_assign_4_0,38,39,3,9,11,7,4,22)
	MR_init_label6(bytecode_backend__bytecode_gen__map_assign_4_0,24,19,28,31,33,34)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_assign'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_assign_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 3))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i31);
	}
	if (MR_INT_NE(MR_ctfield(3, MR_tempr2, 0),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 1);
	MR_r2 = MR_ctfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_arg_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i38);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i39);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 26;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_ctfield(3, MR_tempr4, 2);
	MR_r6 = MR_tempr1;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r7 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i7);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i9);
	}
	MR_tag_alloc_heap(MR_tempr3, 2, (MR_Integer) 1);
	MR_sv(4) = MR_tempr3;
	MR_tfield(2, MR_tempr3, 0) = MR_ctfield(2, MR_tempr1, 0);
	MR_sv(1) = MR_r1;
	MR_r5 = MR_r2;
	MR_sv(3) = MR_ctfield(3, MR_tempr4, 1);
	MR_r6 = MR_tempr3;
	MR_sv(4) = MR_ctfield(3, MR_tempr4, 3);
	MR_r1 = MR_r6;
	MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i4);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(3, MR_tempr1, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(1), 0);
	MR_r5 = MR_ctfield(0, MR_r6, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i11);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r5 = MR_sv(2);
	MR_r1 = MR_tempr1;
	MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i4);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_sv(4) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r6, 0);
	MR_sv(1) = MR_r1;
	MR_r5 = MR_r2;
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_ctfield(3, MR_tempr3, 1);
	MR_tempr2 = MR_tempr1;
	MR_sv(4) = MR_ctfield(3, MR_tempr3, 3);
	MR_r1 = MR_tempr2;
	}
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_tag(MR_tempr3);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i19);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_assign_4_0_i22);
	}
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(2, MR_tempr3, 0);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(1), 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i24);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r5 = MR_sv(2);
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_sv(4), 0);
	MR_sv(4) = MR_r1;
	MR_tempr2 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 5);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 25;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_ctfield(0, MR_sv(1), 0);
	MR_r5 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i33);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		bytecode_backend__bytecode_gen__map_assign_4_0_i34);
MR_def_label(bytecode_backend__bytecode_gen__map_assign_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module8)
	MR_init_entry1(fn__bytecode_backend__bytecode_gen__this_file_0_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__bytecode_backend__bytecode_gen__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_module__predicate_module_2_0);
MR_decl_entry(fn__hlds__hlds_module__predicate_name_2_0);
MR_decl_entry(backend_libs__builtin_ops__translate_builtin_5_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module9)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_builtin_5_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_builtin_5_0,2,3,6,9,13,15,11,4)
	MR_init_label1(bytecode_backend__bytecode_gen__gen_builtin_5_0,21)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_builtin'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_builtin_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_module_2_0,
		bytecode_backend__bytecode_gen__gen_builtin_5_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		bytecode_backend__bytecode_gen__gen_builtin_5_0_i3);
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(backend_libs__builtin_ops__translate_builtin_5_0,
		bytecode_backend__bytecode_gen__gen_builtin_5_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_builtin_5_0_i4);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_builtin_5_0_i9) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_builtin_5_0_i13) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_builtin_5_0_i15) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_builtin_5_0_i11));
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode_gen__map_assign_4_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("ref_assign", 10);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(2, MR_r2, 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(bytecode_backend__bytecode_gen__map_test_3_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unknown builtin predicate ", 26);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_2,
		bytecode_backend__bytecode_gen__gen_builtin_5_0_i21);
MR_def_label(bytecode_backend__bytecode_gen__gen_builtin_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module10)
	MR_init_entry1(bytecode_backend__bytecode_gen__get_var_type_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_var_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__get_var_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_tempr1, 1);
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module11)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_uni_modes_4_0);
	MR_init_label8(bytecode_backend__bytecode_gen__map_uni_modes_4_0,3,10,12,14,15,18,21,27)
	MR_init_label2(bytecode_backend__bytecode_gen__map_uni_modes_4_0,28,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_uni_modes'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_uni_modes_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i3);
	}
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i8);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i8);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr3 = MR_r3;
	MR_sv(1) = MR_tempr3;
	MR_tempr4 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 1);
	MR_tempr5 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(8) = MR_ctfield(1, MR_tempr5, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_tempr4;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_ctfield(0, MR_sv(1), 1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i10);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i12);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i15);
	}
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i15);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = (MR_Integer) 0;
	MR_r1 = MR_sv(8);
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__map_uni_modes_4_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i18);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i18);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__map_uni_modes_4_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(3),2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i21);
	}
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_uni_modes_4_0_i21);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_sv(1) = (MR_Integer) 2;
	MR_r1 = MR_sv(8);
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__map_uni_modes_4_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("invalid mode for (de)construct unification", 42);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i27);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__map_uni_modes_4_0,
		bytecode_backend__bytecode_gen__map_uni_modes_4_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_uni_modes_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("map_uni_modes: length mismatch", 30);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module12)
	MR_init_entry1(bytecode_backend__bytecode_gen__all_dirs_same_2_0);
	MR_init_label2(bytecode_backend__bytecode_gen__all_dirs_same_2_0,2,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'all_dirs_same'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__all_dirs_same_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__all_dirs_same_2_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if ((MR_r2 != MR_tempr1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__all_dirs_same_2_0_i1);
	}
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = MR_tempr1;
	MR_np_localtailcall(bytecode_backend__bytecode_gen__all_dirs_same_2_0);
	}
MR_def_label(bytecode_backend__bytecode_gen__all_dirs_same_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__all_dirs_same_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module13)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_cons_tag_2_0);
	MR_init_label8(bytecode_backend__bytecode_gen__map_cons_tag_2_0,36,15,26,9,40,3,5,7)
	MR_init_label8(bytecode_backend__bytecode_gen__map_cons_tag_2_0,11,13,18,20,22,28,30,32)
	MR_init_label1(bytecode_backend__bytecode_gen__map_cons_tag_2_0,34)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_cons_tag'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_cons_tag_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i36) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i26) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i9) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i40));
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i15);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("string_tag cons tag for non-string_constant cons id", 51);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("float_tag cons tag for non-float_constant cons id", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i13) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i11) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i5) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i32) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i3) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i30) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i7) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i28) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i34) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i20) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i18) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i22) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_tag_2_0_i22));
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("base_typeclass_info_tag cons tag for non-base_typeclass_info_constant cons id", 77);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("closure_tag cons tag for non-closure_cons cons id", 49);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("deep_profiling_proc_layout_tag cons tag for non-deep_profiling_proc_static cons id", 82);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("bytecode with foreign tags", 26);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tempr2 = MR_r1;
	MR_tfield(2, MR_tempr1, 0) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(2, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("bytecode with --num-reserved-addresses or --num-reserved-objects", 64);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("table_io_decl_tag cons tag for non-table_io_decl cons id", 56);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("tabling_info_tag cons tag for non-tabling_info_constant cons id", 63);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("type_ctor_info_tag cons tag for non-type_ctor_info_constant cons id", 67);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_tag_2_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(3, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_code_util__cons_id_to_tag_2_0);
MR_decl_entry(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module14)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_cons_id_3_0);
	MR_init_label8(bytecode_backend__bytecode_gen__map_cons_id_3_0,45,75,18,17,20,21,76,39)
	MR_init_label8(bytecode_backend__bytecode_gen__map_cons_id_3_0,40,49,3,5,78,8,9,10)
	MR_init_label8(bytecode_backend__bytecode_gen__map_cons_id_3_0,11,13,14,23,25,27,29,31)
	MR_init_label4(bytecode_backend__bytecode_gen__map_cons_id_3_0,33,35,42,44)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_cons_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_cons_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i45) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i75) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i76) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i49));
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_cons_id_3_0_i18);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(2) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i20);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("map_cons_id: unqualified cons", 29);
	}
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i17);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i20);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_cons_tag_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i21);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(2, MR_r2, 0);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,4,0);
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__hlds__hlds_code_util__cons_id_to_tag_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i39);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_cons_tag_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i40);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_string_const("{}", 2);
	MR_tfield(1, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r2, 0),
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i78) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i29) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i25) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i5) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i31) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i27) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i42) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i3) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i44) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i35) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i33) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0_i23));
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 5;
	MR_tempr2 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 4);
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r2, 1);
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 2);
	MR_r1 = MR_ctfield(3, MR_r2, 1);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__unshroud_pred_proc_id_1_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i8);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__predicate_id_5_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i10);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i11);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_cons_id_3_0_i13);
	}
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Integer) 1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_sv(2) = (MR_Integer) 0;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		bytecode_backend__bytecode_gen__map_cons_id_3_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 6);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("bytecode cannot implement deep profiling", 40);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r2, 1);
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("map_cons_id: impl_defined_const", 31);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_ctfield(3, MR_r2, 1);
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_r2, 1);
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("bytecode cannot implement table io decl", 39);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("bytecode cannot implement tabling", 33);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tempr2 = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_ctfield(3, MR_tempr2, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_ctfield(3, MR_tempr2, 2);
	MR_tfield(3, MR_tempr1, 3) = MR_ctfield(3, MR_tempr2, 3);
	MR_proceed();
	}
MR_def_label(bytecode_backend__bytecode_gen__map_cons_id_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module15)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_vars_2_3_0);
	MR_init_label3(bytecode_backend__bytecode_gen__map_vars_2_3_0,15,5,6)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_vars_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_vars_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__map_vars_2_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__map_vars_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr1 = MR_tempr2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__map_vars_2_3_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__map_vars_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__map_vars_2_3_0,
		bytecode_backend__bytecode_gen__map_vars_2_3_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__map_vars_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module16)
	MR_init_entry1(bytecode_backend__bytecode_gen__map_vars_3_0);
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'map_vars'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__map_vars_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(bytecode_backend__bytecode_gen__map_vars_2_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(counter__allocate_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module17)
	MR_init_entry1(bytecode_backend__bytecode_gen__get_next_label_3_0);
	MR_init_label1(bytecode_backend__bytecode_gen__get_next_label_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_next_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__get_next_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		bytecode_backend__bytecode_gen__get_next_label_3_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__get_next_label_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module18)
	MR_init_entry1(bytecode_backend__bytecode_gen__get_next_temp_3_0);
	MR_init_label1(bytecode_backend__bytecode_gen__get_next_temp_3_0,2)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_next_temp'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__get_next_temp_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 4);
	MR_np_call_localret_ent(counter__allocate_3_0,
		bytecode_backend__bytecode_gen__get_next_temp_3_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__get_next_temp_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr2 = MR_sv(1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 3);
	MR_tfield(0, MR_tempr1, 4) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_context_1_0);
MR_decl_entry(term__context_line_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module19)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_goal_4_0);
	MR_init_label5(bytecode_backend__bytecode_gen__gen_goal_4_0,2,3,4,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_goal'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_goal_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,
		bytecode_backend__bytecode_gen__gen_goal_4_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		bytecode_backend__bytecode_gen__gen_goal_4_0_i3);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		bytecode_backend__bytecode_gen__gen_goal_4_0_i4);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_4_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_4_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__hlds__hlds_goal__goal_info_get_determinism_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_generic_call_0;
MR_decl_entry(deconstruct__functor_4_1);
MR_decl_entry(fn__cord__from_list_1_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module20)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_goal_expr_5_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,153,154,81,80,155,27,28,119)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,156,5,163,9,157,14,13,15)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,16,18,22,23,161,37,38,39)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,40,41,42,44,46,53,57,58)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,59,60,61,62,159,65,66,67)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,69,75,76,160,85,86,87,88)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,89,90,91,93,95,96,162,100)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,158,103,104,105,107,111,112,113)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_goal_expr'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_goal_expr_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i153) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i154) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i155) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i119));
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 3);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i80);
	}
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_ctfield(1, MR_tempr2, 2);
	MR_r1 = MR_r2;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i81);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_call_6_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 1);
	MR_r3 = MR_ctfield(1, MR_tempr1, 2);
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_builtin_5_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r1;
	MR_tempr1 = MR_ctfield(2, MR_tempr3, 0);
	MR_r2 = MR_tempr1;
	if (MR_INT_NE(MR_tag(MR_tempr1),0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i27);
	}
	MR_sv(3) = MR_r3;
	MR_tempr2 = MR_tempr3;
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_ctfield(2, MR_tempr2, 1);
	MR_r3 = MR_ctfield(2, MR_tempr2, 2);
	MR_r4 = MR_ctfield(2, MR_tempr2, 3);
	MR_r5 = MR_sv(3);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_higher_order_call_6_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, generic_call);
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__functor_4_1,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 9);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_ctfield(3, MR_r1, 0),
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i156) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i5) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i157) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i158) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i159) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i160) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i161) MR_AND
		MR_LABEL_AP(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i162));
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 9);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(3, MR_r1, 1);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i163);
	}
	MR_r1 = MR_ctfield(3, MR_r1, 2);
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(bytecode_backend__bytecode_gen__gen_conj_4_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("bytecode_gen of parallel conjunction", 36);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(3, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i13);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 8);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i15);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_disj_5_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i16);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i18);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i22);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i23);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i113);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 2);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_ctfield(3, MR_tempr1, 4);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i37);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i38);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_temp_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i39);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_4_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i40);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_4_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i41);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_4_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i42);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(6);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(8);
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i44);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(8);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i46);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 9;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 10;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i53);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i57);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i58);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i59);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i60);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i61);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i62);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i113);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(3, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_4_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i65);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i66);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_temp_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i67);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 11;
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_sv(3) = MR_tempr2;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i69);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 12;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i75);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i76);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i113);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_ctfield(3, MR_r1, 2);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_4_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i85);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i86);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_determinism_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i87);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i88);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i89);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 != MR_sv(2))) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i90);
	}
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(9);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_temp_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i91);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 13;
	MR_tempr2 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr2;
	MR_sv(2) = MR_tempr2;
	MR_sv(7) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i93);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 14;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i95);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i96);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i113);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,162)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i100);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("goal_expr: unexpected shorthand", 31);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_ctfield(3, MR_tempr1, 3);
	MR_sv(2) = MR_ctfield(3, MR_tempr1, 1);
	MR_r1 = MR_r3;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i103);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i104);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i105);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 4;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tfield(3, MR_tempr1, 2) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i107);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i111);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i112);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_goal_expr_5_0_i113);
MR_def_label(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module21)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_conj_4_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_conj_4_0,3,5,6,7,9,10,11,12)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_conj'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_conj_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_conj_4_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i12);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i10);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__gen_conj_4_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i11);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_conj_4_0_i12);
MR_def_label(bytecode_backend__bytecode_gen__gen_conj_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module22)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_disj_5_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_disj_5_0,4,5,6,8,9,13,15,16)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_disj_5_0,17,11,18,19,22,27,28,29)
	MR_init_label2(bytecode_backend__bytecode_gen__gen_disj_5_0,30,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_disj'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_disj_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_disj_5_0_i3);
	}
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i4);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i8);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_disj_5_0_i11);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,5,0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i13);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i15);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i16);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i17);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__gen_disj_5_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i18);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i19);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr3 = MR_sv(2);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 2;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_sv(5) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i22);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i27);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i28);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i29);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_disj_5_0_i30);
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(bytecode_backend__bytecode_gen__gen_disj_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bytecode_gen.m", 14);
	MR_r2 = (MR_Word) MR_string_const("empty disjunction in disj", 25);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);
MR_decl_entry(varset__lookup_name_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module23)
	MR_init_entry1(bytecode_backend__bytecode_gen__create_varmap_7_0);
	MR_init_label5(bytecode_backend__bytecode_gen__create_varmap_7_0,18,5,6,7,8)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'create_varmap'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__create_varmap_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__create_varmap_7_0_i18);
	}
	MR_r1 = MR_r5;
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(bytecode_backend__bytecode_gen__create_varmap_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r4 = MR_r5;
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(3);
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		bytecode_backend__bytecode_gen__create_varmap_7_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__create_varmap_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(varset__lookup_name_3_0,
		bytecode_backend__bytecode_gen__create_varmap_7_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__create_varmap_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(8);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__create_varmap_7_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__create_varmap_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(6);
	}
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__create_varmap_7_0,
		bytecode_backend__bytecode_gen__create_varmap_7_0_i8);
MR_def_label(bytecode_backend__bytecode_gen__create_varmap_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r2;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module24)
	MR_init_entry1(bytecode_backend__bytecode_gen__get_counts_3_0);
	MR_init_label2(bytecode_backend__bytecode_gen__get_counts_3_0,2,3)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'get_counts'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__get_counts_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		bytecode_backend__bytecode_gen__get_counts_3_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__get_counts_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(counter__allocate_3_0,
		bytecode_backend__bytecode_gen__get_counts_3_0_i3);
MR_def_label(bytecode_backend__bytecode_gen__get_counts_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_goal_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_vartypes_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(hlds__goal_util__goal_vars_2_0);
MR_decl_entry(hlds__hlds_pred__proc_info_get_headvars_2_0);
MR_decl_entry(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(set__to_sorted_list_2_0);
MR_decl_entry(map__init_1_0);
MR_decl_entry(fn__counter__init_1_0);
MR_decl_entry(fn__cord__list_1_0);
MR_decl_entry(list__member_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module25)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_proc_4_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_proc_4_0,2,3,4,5,6,7,8,9)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_proc_4_0,10,12,13,14,15,16,17,19)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_proc_4_0,20,21,22,23,24,25,27,29)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_proc_4_0,30,33,34,35,32,41,42,47)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_proc_4_0,48,49,50,51,52,53,54,55)
	MR_init_label5(bytecode_backend__bytecode_gen__gen_proc_4_0,57,59,56,63,64)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_proc'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_proc_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i3);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_goal_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i4);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_vartypes_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(hlds__code_model__determinism_to_code_model_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i8);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__goal_util__goal_vars_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i9);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_headvars_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i10);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(9);
	}
	MR_np_call_localret_ent(f_115_101_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i12);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(set__to_sorted_list_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i13);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_np_call_localret_ent(map__init_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Integer) 0;
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__create_varmap_7_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i15);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_sv(10) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i16);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(12) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_np_call_localret_ent(fn__counter__init_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i17);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 3) = MR_sv(12);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i19);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i20);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i21);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(ll_backend__call_gen__input_arg_locs_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i22);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ll_backend__call_gen__output_arg_locs_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i23);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(12) = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_sv(12);
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i24);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i25);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i27);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(2);
	MR_sv(13) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i29);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i30);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_proc_4_0_i32);
	}
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_temp_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i33);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(12);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i34);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i35);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr3;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i47);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(12);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i41);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_next_label_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i42);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tempr3 = MR_r1;
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_sv(1) = MR_r2;
	MR_sv(6) = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i47);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(13);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i48);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_pickups_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i49);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_places_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i50);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_counts_3_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i51);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i52);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i53);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i54);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__cord__list_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i55);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 9);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i57);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_proc_4_0_i56);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 9);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i59);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(10);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i63);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 6);
	MR_r2 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(2, MR_tempr1, 3) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 4) = MR_sv(3);
	MR_tfield(2, MR_tempr1, 5) = MR_sv(10);
	MR_sv(1) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i63);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_proc_4_0_i64);
MR_def_label(bytecode_backend__bytecode_gen__gen_proc_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(14);
	MR_decr_sp(14);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__passes_aux__write_proc_progress_message_6_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module26)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_pred_7_0);
	MR_init_label4(bytecode_backend__bytecode_gen__gen_pred_7_0,17,5,6,7)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_pred'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_pred_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_pred_7_0_i17);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_pred_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("% Generating bytecode for ", 26);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		bytecode_backend__bytecode_gen__gen_pred_7_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_pred_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_proc_4_0,
		bytecode_backend__bytecode_gen__gen_pred_7_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_pred_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__gen_pred_7_0,
		bytecode_backend__bytecode_gen__gen_pred_7_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_pred_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_preds_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_orig_arity_1_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module27)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_preds_5_0);
	MR_init_label8(bytecode_backend__bytecode_gen__gen_preds_5_0,45,5,6,7,9,11,12,13)
	MR_init_label8(bytecode_backend__bytecode_gen__gen_preds_5_0,14,15,16,17,18,20,23,24)
	MR_init_label3(bytecode_backend__bytecode_gen__gen_preds_5_0,25,26,27)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_preds'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(bytecode_backend__bytecode_gen__gen_preds_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_preds_5_0_i45);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_tailcall_ent(fn__cord__empty_0_0);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr2, 0);
	MR_sv(3) = MR_ctfield(1, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_preds_2_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i5);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__lookup_3_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i6);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_non_imported_procids_1_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i7);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_preds_5_0_i9);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i26);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_sv(6) = MR_ctfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_ctfield(1, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_string_const("% Generating bytecode for ", 26);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(hlds__passes_aux__write_proc_progress_message_6_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i11);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_proc_4_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i12);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_pred_7_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i13);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i14);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_module__predicate_name_2_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i15);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__length_2_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i16);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_orig_arity_1_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i17);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i18);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(bytecode_backend__bytecode_gen__gen_preds_5_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i23);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(1, MR_tempr1, 3) = MR_sv(6);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i23);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i24);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i25);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i26);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(bytecode_backend__bytecode_gen__gen_preds_5_0,
		bytecode_backend__bytecode_gen__gen_preds_5_0_i27);
MR_def_label(bytecode_backend__bytecode_gen__gen_preds_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(fn__f_99_111_114_100_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_predids_3_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module28)
	MR_init_entry1(bytecode_backend__bytecode_gen__gen_module_5_0);
	MR_init_label3(bytecode_backend__bytecode_gen__gen_module_5_0,2,3,4)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'gen_module'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__bytecode_backend__bytecode_gen__gen_module_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_predids_3_0,
		bytecode_backend__bytecode_gen__gen_module_5_0_i2);
MR_def_label(bytecode_backend__bytecode_gen__gen_module_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_preds_5_0,
		bytecode_backend__bytecode_gen__gen_module_5_0_i3);
MR_def_label(bytecode_backend__bytecode_gen__gen_module_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__cord__list_1_0,
		bytecode_backend__bytecode_gen__gen_module_5_0_i4);
MR_def_label(bytecode_backend__bytecode_gen__gen_module_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);
MR_decl_entry(__Unify___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Unify___counter__counter_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module29)
	MR_init_entry1(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0);
	MR_init_label6(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0,5,7,9,11,15,1)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i15);
	}
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
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
	MR_sv(9) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_tempr1, 0);
	MR_r4 = MR_ctfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i5);
MR_def_label(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i1);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___tree234__tree234_2_0,
		__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i7);
MR_def_label(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___hlds__hlds_module__module_info_0_0,
		__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i9);
MR_def_label(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___counter__counter_0_0,
		__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i11);
MR_def_label(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(__Unify___counter__counter_0_0);
MR_def_label(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___bytecode_backend__bytecode_gen__byte_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);
MR_decl_entry(__Compare___hlds__hlds_module__module_info_0_0);
MR_decl_entry(__Compare___counter__counter_0_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module30)
	MR_init_entry1(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0);
	MR_init_label7(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,3,2,6,11,15,19,47)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i2);
MR_def_label(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,2)
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
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = MR_ctfield(0, MR_tempr3, 0);
	MR_r4 = MR_ctfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i6);
MR_def_label(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i47);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___tree234__tree234_2_0,
		__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i11);
MR_def_label(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i47);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Compare___hlds__hlds_module__module_info_0_0,
		__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i15);
MR_def_label(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i47);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Compare___counter__counter_0_0,
		__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i19);
MR_def_label(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0_i47);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___counter__counter_0_0);
MR_def_label(__Compare___bytecode_backend__bytecode_gen__byte_info_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_dir_0;
MR_decl_entry(parse_tree__prog_type__type_to_ctor_and_args_3_0);
MR_decl_entry(__Unify___parse_tree__prog_data__type_ctor_0_0);
MR_decl_entry(fn__check_hlds__type_util__classify_type_ctor_2_0);

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module31)
	MR_init_entry1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0);
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,11,12,13,14,15,19,21,20)
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,25,30,31,32,33,34,36,35)
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,40,3,4,5,111,45,46,47)
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,48,50,52,56,55,58,49,61)
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,63,64,102,66,68,70,72,74)
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,78,80,82,105,88,93,94,76)
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,84,85,90,91,96,97,99,100)
	MR_init_label3(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,65,8,9)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__gen_unify__[2, 3]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i11) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i30) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i3) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i111));
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr3, 3);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i12);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_vars_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i13);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_cons_id_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i14);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i15);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_uni_modes_4_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i19);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__all_dirs_same_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i21);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i20);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 17;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_dir);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i25);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 19;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 2);
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 3);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i31);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_vars_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i32);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_cons_id_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i33);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_uni_modes_4_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i34);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__all_dirs_same_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i36);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 18;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_dir);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i40);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 20;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(5);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_sv(1) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(2) = MR_ctfield(2, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i4);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i5);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 15;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i8);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_ctfield(3, MR_tempr2, 1);
	MR_sv(3) = MR_ctfield(3, MR_tempr2, 2);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i45);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_var_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i46);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_var_type_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i47);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__get_var_type_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i48);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i50);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__prog_type__type_to_ctor_and_args_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i52);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i49);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__type_ctor_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i56);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i55);
	}
	MR_r2 = MR_sv(3);
	MR_r1 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_ctor_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i64);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i58);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("simple_test between different types", 35);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i63);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i61);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("failed lookup of type id", 24);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i63);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__check_hlds__type_util__classify_type_ctor_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i64);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i102) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i66) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i78) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i105));
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i84) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i90) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i76) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i96) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i99));
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_ctfield(1, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i72) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i70) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i68) MR_AND
		MR_LABEL_AP(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i74));
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 0;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(2, MR_r1, 0);
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i80);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i82);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("foreign enums with bytecode backend", 35);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i65);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_ctfield(3, MR_r1, 0),0)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i93);
	}
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i88);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("system type in simple_test", 26);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i65);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i94);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("user_ctor_type in simple_test", 29);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i65);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 16;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = (MR_Integer) 5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
	}
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i85);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("higher_order_type in simple_test", 32);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i65);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i91);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("tuple_type in simple_test", 25);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i65);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i97);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("variable_type in simple_test", 28);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i65);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i100);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("void_type in simple_test", 24);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i65);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(fn__cord__singleton_1_0);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__bytecode_backend__bytecode_gen__this_file_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0_i9);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_117_110_105_102_121_95_95_91_50_44_32_51_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("complicated unifications should have been handled by polymorphism.m", 67);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_cons_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bytecode_backend__bytecode__type_ctor_info_byte_cons_id_0;

MR_BEGIN_MODULE(bytecode_backend__bytecode_gen_module32)
	MR_init_entry1(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0);
	MR_init_label8(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,3,5,7,8,9,10,12,13)
	MR_init_label7(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,14,15,18,23,24,25,26)
MR_BEGIN_CODE


/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__gen_switch__[2]_0'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i3);
	}
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_np_call_localret_ent(fn__cord__empty_0_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i26);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_r1;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__map_cons_id_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i5);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(bytecode_backend__bytecode_gen__map_cons_id_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, cons_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_cons_id);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i7);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_tempr2 = MR_sv(5);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(bytecode_backend__bytecode_gen__gen_goal_expr_5_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i8);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__hlds__hlds_goal__goal_info_get_context_1_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i9);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(term__context_line_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i10);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 29;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i12);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(6);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i13);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(5);
	}
	MR_np_localcall_lab(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i14);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_ctfield(0, MR_r1, 3);
	MR_np_call_localret_ent(counter__allocate_3_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i15);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tempr3 = MR_sv(6);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr3, 1);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr3, 2);
	MR_tfield(0, MR_tempr1, 3) = MR_r2;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr3, 4);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_r2 = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 5;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(4);
	MR_tfield(3, MR_tempr2, 2) = MR_sv(2);
	MR_tempr4 = MR_r1;
	MR_tfield(3, MR_tempr2, 3) = MR_tempr4;
	MR_sv(2) = MR_tempr1;
	MR_sv(4) = MR_tempr4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__singleton_1_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i18);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	}
	MR_np_call_localret_ent(fn__cord__from_list_1_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i23);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i24);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i25);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(bytecode_backend__bytecode, byte_code);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_99_111_114_100_95_95_43_43_2_0,
		f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0_i26);
MR_def_label(f_98_121_116_101_99_111_100_101_95_98_97_99_107_101_110_100_95_95_98_121_116_101_99_111_100_101_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_115_119_105_116_99_104_95_95_91_50_93_95_48_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__bytecode_backend__bytecode_gen_maybe_bunch_0(void)
{
	bytecode_backend__bytecode_gen_module0();
	bytecode_backend__bytecode_gen_module1();
	bytecode_backend__bytecode_gen_module2();
	bytecode_backend__bytecode_gen_module3();
	bytecode_backend__bytecode_gen_module4();
	bytecode_backend__bytecode_gen_module5();
	bytecode_backend__bytecode_gen_module6();
	bytecode_backend__bytecode_gen_module7();
	bytecode_backend__bytecode_gen_module8();
	bytecode_backend__bytecode_gen_module9();
	bytecode_backend__bytecode_gen_module10();
	bytecode_backend__bytecode_gen_module11();
	bytecode_backend__bytecode_gen_module12();
	bytecode_backend__bytecode_gen_module13();
	bytecode_backend__bytecode_gen_module14();
	bytecode_backend__bytecode_gen_module15();
	bytecode_backend__bytecode_gen_module16();
	bytecode_backend__bytecode_gen_module17();
	bytecode_backend__bytecode_gen_module18();
	bytecode_backend__bytecode_gen_module19();
	bytecode_backend__bytecode_gen_module20();
	bytecode_backend__bytecode_gen_module21();
	bytecode_backend__bytecode_gen_module22();
	bytecode_backend__bytecode_gen_module23();
	bytecode_backend__bytecode_gen_module24();
	bytecode_backend__bytecode_gen_module25();
	bytecode_backend__bytecode_gen_module26();
	bytecode_backend__bytecode_gen_module27();
	bytecode_backend__bytecode_gen_module28();
	bytecode_backend__bytecode_gen_module29();
	bytecode_backend__bytecode_gen_module30();
	bytecode_backend__bytecode_gen_module31();
	bytecode_backend__bytecode_gen_module32();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__bytecode_backend__bytecode_gen__init(void);
void mercury__bytecode_backend__bytecode_gen__init_type_tables(void);
void mercury__bytecode_backend__bytecode_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__bytecode_backend__bytecode_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__bytecode_backend__bytecode_gen__init_complexity_procs(void);
#endif

void mercury__bytecode_backend__bytecode_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__bytecode_backend__bytecode_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0,
		bytecode_backend__bytecode_gen__byte_info_0_0);
	mercury__bytecode_backend__bytecode_gen__init_debugger();
}

void mercury__bytecode_backend__bytecode_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_bytecode_backend__bytecode_gen__type_ctor_info_byte_info_0);
	}
}


void mercury__bytecode_backend__bytecode_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__bytecode_backend__bytecode_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__bytecode_backend__bytecode_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__bytecode_backend__bytecode_gen__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
