/*
** Automatically generated from `mdbcomp.slice_and_dice.m'
** by the Mercury compiler,
** version rotd-2007-04-03, configured for i686-pc-linux-gnu.
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
INIT mercury__mdbcomp__slice_and_dice__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "mdbcomp.slice_and_dice.c"
#include "mdbcomp.slice_and_dice.mh"

#line 27 "mdbcomp.slice_and_dice.c"
#line 3 "mdbcomp.int0"
#include "mdbcomp.mh"

#line 31 "mdbcomp.slice_and_dice.c"
#line 520 "../library/io.int"
#include "io.mh"

#line 35 "mdbcomp.slice_and_dice.c"
#line 526 "../library/io.int"
#include "string.mh"

#line 39 "mdbcomp.slice_and_dice.c"
#line 27 "mdbcomp.rtti_access.int"
#include "mdbcomp.rtti_access.mh"

#line 43 "mdbcomp.slice_and_dice.c"
#line 23 "../library/bitmap.int2"
#include "bitmap.mh"

#line 47 "mdbcomp.slice_and_dice.c"
#line 26 "../library/time.int2"
#include "time.mh"

#line 51 "mdbcomp.slice_and_dice.c"
#line 28 "../library/array.int2"
#include "array.mh"

#line 55 "mdbcomp.slice_and_dice.c"
#line 56 "mdbcomp.slice_and_dice.c"
#ifndef MDBCOMP__SLICE_AND_DICE_DECL_GUARD
#define MDBCOMP__SLICE_AND_DICE_DECL_GUARD

#line 60 "mdbcomp.slice_and_dice.c"
#line 61 "mdbcomp.slice_and_dice.c"

#endif
#line 64 "mdbcomp.slice_and_dice.c"


struct mercury_type_0 {
	MR_Word * f1[3];
};
static const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
static const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
static const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
static const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
static const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
static const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
};
static const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Integer f1;
	MR_Word * f2;
};
static const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
static const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
static const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
static const struct mercury_type_10 mercury_common_10[];

struct mercury_type_11 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
static const struct mercury_type_11 mercury_common_11[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0,
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_0;
MR_decl_label2(mdbcomp__slice_and_dice__append_dice_label_counts_4_0, 2,3)
MR_decl_label2(mdbcomp__slice_and_dice__append_slice_label_counts_4_0, 2,3)
MR_decl_label3(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0, 2,3,4)
MR_decl_label3(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0, 2,3,4)
MR_decl_label1(mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0, 3)
MR_decl_label1(mdbcomp__slice_and_dice__dice_add_trace_count_4_0, 3)
MR_decl_label8(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0, 95,3,5,8,11,14,19,20)
MR_decl_label8(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0, 17,24,25,22,27,32,30,41)
MR_decl_label3(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0, 45,43,2)
MR_decl_label1(mdbcomp__slice_and_dice__dice_label_count_compare_4_0, 2)
MR_decl_label1(mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0, 4)
MR_decl_label3(mdbcomp__slice_and_dice__dice_merge_path_port_6_0, 3,2,6)
MR_decl_label5(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0, 3,5,2,7,8)
MR_decl_label1(mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0, 3)
MR_decl_label8(mdbcomp__slice_and_dice__read_dice_5_0, 2,5,8,9,10,11,12,4)
MR_decl_label8(mdbcomp__slice_and_dice__read_dice_to_string_12_0, 3,4,5,6,8,11,15,12)
MR_decl_label6(mdbcomp__slice_and_dice__read_dice_to_string_12_0, 17,19,18,22,10,2)
MR_decl_label5(mdbcomp__slice_and_dice__read_slice_4_0, 2,5,6,7,4)
MR_decl_label8(mdbcomp__slice_and_dice__read_slice_to_string_11_0, 3,4,8,9,10,12,15,16)
MR_decl_label8(mdbcomp__slice_and_dice__read_slice_to_string_11_0, 22,24,21,26,28,27,31,14)
MR_decl_label1(mdbcomp__slice_and_dice__read_slice_to_string_11_0, 2)
MR_decl_label8(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0, 59,3,5,8,11,16,14,21)
MR_decl_label3(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0, 25,23,2)
MR_decl_label1(mdbcomp__slice_and_dice__slice_label_count_compare_4_0, 2)
MR_decl_label1(mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0, 4)
MR_decl_label2(mdbcomp__slice_and_dice__slice_merge_path_port_5_0, 3,2)
MR_decl_label5(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0, 3,5,2,7,8)
MR_decl_label8(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0, 2,3,4,5,6,7,8,9)
MR_decl_label4(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0, 10,11,12,13)
MR_decl_label2(fn__mdbcomp__slice_and_dice__bracket_int_1_0, 2,3)
MR_decl_label7(fn__mdbcomp__slice_and_dice__format_path_port_1_0, 28,9,10,11,27,5,6)
MR_decl_label8(fn__mdbcomp__slice_and_dice__format_proc_label_1_0, 4,7,6,8,9,10,11,12)
MR_decl_label8(fn__mdbcomp__slice_and_dice__format_proc_label_1_0, 13,14,15,16,3,18,19,20)
MR_decl_label5(fn__mdbcomp__slice_and_dice__format_proc_label_1_0, 21,22,23,24,25)
MR_decl_label8(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0, 2,3,4,5,6,8,9,10)
MR_decl_label4(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0, 11,12,13,14)
MR_decl_label6(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0, 2,3,4,6,9,5)
MR_decl_label5(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0, 5,6,7,2,10)
MR_decl_label1(fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0, 2)
MR_decl_label8(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0, 26,4,6,7,8,10,11,12)
MR_decl_label1(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0, 13)
MR_decl_label1(__Unify___mdbcomp__slice_and_dice__dice_0_0, 1)
MR_decl_label1(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0, 1)
MR_decl_label3(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0, 2,4,1)
MR_decl_label1(__Unify___mdbcomp__slice_and_dice__slice_0_0, 1)
MR_decl_label1(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0, 1)
MR_decl_label3(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0, 2,4,1)
MR_decl_label3(__Compare___mdbcomp__slice_and_dice__dice_0_0, 3,7,12)
MR_decl_label6(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0, 3,7,11,15,19,27)
MR_decl_label3(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0, 3,7,12)
MR_decl_label2(__Compare___mdbcomp__slice_and_dice__slice_0_0, 3,7)
MR_decl_label4(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0, 3,7,11,17)
MR_decl_label3(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0, 3,7,12)
MR_def_extern_entry(mdbcomp__slice_and_dice__read_slice_4_0)
MR_decl_static(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0)
MR_def_extern_entry(mdbcomp__slice_and_dice__read_slice_to_string_11_0)
MR_def_extern_entry(mdbcomp__slice_and_dice__read_dice_5_0)
MR_def_extern_entry(mdbcomp__slice_and_dice__read_dice_to_string_12_0)
MR_def_extern_entry(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0)
MR_def_extern_entry(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0)
MR_def_extern_entry(fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0)
MR_decl_static(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0)
MR_decl_static(mdbcomp__slice_and_dice__slice_merge_path_port_5_0)
MR_decl_static(mdbcomp__slice_and_dice__slice_add_trace_count_3_0)
MR_decl_static(mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0)
MR_decl_static(mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0)
MR_decl_static(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0)
MR_decl_static(mdbcomp__slice_and_dice__dice_merge_path_port_6_0)
MR_decl_static(mdbcomp__slice_and_dice__dice_add_trace_count_4_0)
MR_decl_static(mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0)
MR_decl_static(mdbcomp__slice_and_dice__slice_label_count_is_zero_1_0)
MR_decl_static(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0)
MR_decl_static(mdbcomp__slice_and_dice__slice_label_count_compare_4_0)
MR_decl_static(mdbcomp__slice_and_dice__append_slice_label_counts_4_0)
MR_decl_static(mdbcomp__slice_and_dice__make_slice_label_count_3_0)
MR_decl_static(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0)
MR_decl_static(mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_0)
MR_decl_static(mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0)
MR_decl_static(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0)
MR_decl_static(mdbcomp__slice_and_dice__dice_label_count_compare_4_0)
MR_decl_static(mdbcomp__slice_and_dice__append_dice_label_counts_4_0)
MR_decl_static(mdbcomp__slice_and_dice__make_dice_label_count_3_0)
MR_decl_static(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0)
MR_decl_static(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0)
MR_decl_static(fn__mdbcomp__slice_and_dice__bracket_int_1_0)
MR_decl_static(fn__mdbcomp__slice_and_dice__format_float_2_0)
MR_decl_static(fn__mdbcomp__slice_and_dice__format_proc_label_1_0)
MR_decl_static(fn__mdbcomp__slice_and_dice__format_path_port_1_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__dice_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__dice_0_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0)
MR_decl_static(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0)
MR_decl_static(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__dice_proc_map_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__dice_proc_map_0_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__proc_dice_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__proc_dice_0_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__proc_slice_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__proc_slice_0_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__slice_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__slice_0_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0)
MR_decl_static(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0)
MR_decl_static(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0)
MR_def_extern_entry(__Unify___mdbcomp__slice_and_dice__slice_proc_map_0_0)
MR_def_extern_entry(__Compare___mdbcomp__slice_and_dice__slice_proc_map_0_0)
MR_decl_static(__Unify___mdbcomp__slice_and_dice__trace_counts_kind_0_0)
MR_decl_static(__Compare___mdbcomp__slice_and_dice__trace_counts_kind_0_0)
MR_decl_static(mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__551__1_2_0)
MR_decl_static(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0)

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_string__type_ctor_info_justified_column_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;
static const struct mercury_type_0 mercury_common_0[17] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_TAG_COMMON(0,0,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_COMMON(0,4)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(string, justified_column),
MR_TAG_COMMON(0,6,0)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_COMMON(0,9)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_TAG_COMMON(0,0,8)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_comparison_result_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_path_port_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_line_no_and_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0;
static const struct mercury_type_1 mercury_common_1[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(0,3),
MR_COMMON(0,5),
MR_COMMON(0,5)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_COMMON(0,7),
MR_COMMON(6,2),
MR_COMMON(6,2)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_5,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_COMMON(0,12),
MR_COMMON(6,4),
MR_COMMON(6,4)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_4,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count),
MR_CTOR0_ADDR(builtin, comparison_result)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_path_port_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, trace_counts_kind),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count)
}
},
};

MR_decl_entry(fn__string__int_to_string_thousands_1_0);
static const struct mercury_type_2 mercury_common_2[16] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0),
0
},
{
MR_COMMON(3,0),
MR_ENTRY_AP(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0),
0
},
{
MR_COMMON(4,0),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__format_proc_label_1_0),
0
},
{
MR_COMMON(4,1),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__format_path_port_1_0),
0
},
{
MR_COMMON(4,2),
MR_ENTRY_AP(fn__string__int_to_string_thousands_1_0),
0
},
{
MR_COMMON(4,4),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__bracket_int_1_0),
0
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(mdbcomp__slice_and_dice__append_slice_label_counts_4_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_label_count_is_zero_1_0),
0
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(mdbcomp__slice_and_dice__append_dice_label_counts_4_0),
0
},
{
MR_COMMON(11,0),
MR_ENTRY_AP(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0),
0
},
{
MR_COMMON(4,7),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__format_proc_label_1_0),
0
},
{
MR_COMMON(4,8),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__format_path_port_1_0),
0
},
{
MR_COMMON(4,9),
MR_ENTRY_AP(fn__string__int_to_string_thousands_1_0),
0
},
{
MR_COMMON(4,10),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__bracket_int_1_0),
0
},
{
MR_COMMON(4,11),
MR_ENTRY_AP(fn__string__int_to_string_thousands_1_0),
0
},
{
MR_COMMON(10,3),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_2;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, trace_counts_kind),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_COMMON(0,12),
MR_COMMON(0,12)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, trace_counts_kind),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_COMMON(0,12),
MR_COMMON(0,12)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_6;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_4;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_6;
static const struct mercury_type_4 mercury_common_4[12] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count)
},
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count)
},
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_5,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_6,
(MR_Word *) (MR_Integer) 0,
2,
MR_INT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
},
};

static const struct mercury_type_5 mercury_common_5[4] =
{
{
MR_COMMON(4,3),
MR_ENTRY_AP(mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__551__1_2_0),
1,
1
},
{
MR_COMMON(9,0),
MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0),
1,
0
},
{
MR_COMMON(9,1),
MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0),
1,
1
},
{
MR_COMMON(10,4),
MR_ENTRY_AP(fn__mdbcomp__slice_and_dice__format_float_2_0),
1,
2
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0;
static const struct mercury_type_6 mercury_common_6[5] =
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
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count)
}
},
};

static const struct mercury_type_7 mercury_common_7[12] =
{
{
84,
MR_tbmkword(0, 0)
},
{
116,
MR_TAG_COMMON(1,7,0)
},
{
67,
MR_TAG_COMMON(1,7,1)
},
{
99,
MR_TAG_COMMON(1,7,2)
},
{
68,
MR_tbmkword(0, 0)
},
{
100,
MR_TAG_COMMON(1,7,4)
},
{
83,
MR_TAG_COMMON(1,7,5)
},
{
115,
MR_TAG_COMMON(1,7,6)
},
{
70,
MR_TAG_COMMON(1,7,7)
},
{
102,
MR_TAG_COMMON(1,7,8)
},
{
80,
MR_TAG_COMMON(1,7,9)
},
{
112,
MR_TAG_COMMON(1,7,10)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_3;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_3,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_5_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_2;
static const struct mercury_type_9 mercury_common_9[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, trace_counts_kind),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(0,3),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_5_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, trace_counts_kind),
MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context),
MR_COMMON(0,3),
MR_COMMON(0,10),
MR_COMMON(0,10)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_2,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_COMMON(0,7),
MR_COMMON(0,7)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_path_port_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__append_slice_label_counts_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__append_dice_label_counts_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_7;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_8;
static const struct mercury_type_10 mercury_common_10[5] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_path_port_5_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__append_slice_label_counts_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_COMMON(0,13),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdbcomp__slice_and_dice__append_dice_label_counts_4_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_COMMON(0,15),
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_7,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_8,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_INT_CTOR_ADDR,
MR_FLOAT_CTOR_ADDR,
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_1;
static const struct mercury_type_11 mercury_common_11[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_1,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count),
MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label),
MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port),
MR_STRING_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR,
MR_INT_CTOR_ADDR
}
},
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0 = {
	"pass_slice",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1 = {
	"fail_slice",
	1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0,
	&mercury_data_mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1
};

const MR_EnumFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_1,
	&mercury_data_mdbcomp__slice_and_dice__enum_functor_desc_trace_counts_kind_0_0
};

const MR_Integer mercury_data_mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__trace_counts_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__trace_counts_kind_0_0)),
	"mdbcomp.slice_and_dice",
	"trace_counts_kind",
	{ (void *)mercury_data_mdbcomp__slice_and_dice__enum_name_ordered_trace_counts_kind_0 },
	{ (void *)mercury_data_mdbcomp__slice_and_dice__enum_value_ordered_trace_counts_kind_0 },
	2,
	4,
	mercury_data_mdbcomp__slice_and_dice__functor_number_map_trace_counts_kind_0
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
}};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__slice_proc_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__slice_proc_map_0_0)),
	"mdbcomp.slice_and_dice",
	"slice_proc_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__slice_and_dice__field_types_slice_label_count_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

const MR_ConstString mercury_data_mdbcomp__slice_and_dice__field_names_slice_label_count_0_0[] = {
	"slc_proc_label",
	"slc_path_port",
	"slc_counts"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0 = {
	"slice_label_count",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__slice_and_dice__field_types_slice_label_count_0_0,
	mercury_data_mdbcomp__slice_and_dice__field_names_slice_label_count_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_slice_label_count_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_label_count_0_0
};

const MR_Integer mercury_data_mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0)),
	"mdbcomp.slice_and_dice",
	"slice_label_count",
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_name_ordered_slice_label_count_0 },
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_slice_label_count_0 },
	1,
	4,
	mercury_data_mdbcomp__slice_and_dice__functor_number_map_slice_label_count_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0[] = {
	"slice_filename",
	"slice_linenumber",
	"slice_count",
	"slice_tests"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0 = {
	"slice_exec_count",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__slice_and_dice__field_types_slice_exec_count_0_0,
	mercury_data_mdbcomp__slice_and_dice__field_names_slice_exec_count_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_slice_exec_count_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_exec_count_0_0
};

const MR_Integer mercury_data_mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0)),
	"mdbcomp.slice_and_dice",
	"slice_exec_count",
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_name_ordered_slice_exec_count_0 },
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_slice_exec_count_0 },
	1,
	4,
	mercury_data_mdbcomp__slice_and_dice__functor_number_map_slice_exec_count_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__slice_and_dice__field_types_slice_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0
};

const MR_ConstString mercury_data_mdbcomp__slice_and_dice__field_names_slice_0_0[] = {
	"num_tests",
	"slice_proc_map"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_0_0 = {
	"slice",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__slice_and_dice__field_types_slice_0_0,
	mercury_data_mdbcomp__slice_and_dice__field_names_slice_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_slice_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_slice_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_name_ordered_slice_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_slice_0_0
};

const MR_Integer mercury_data_mdbcomp__slice_and_dice__functor_number_map_slice_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__slice_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__slice_0_0)),
	"mdbcomp.slice_and_dice",
	"slice",
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_name_ordered_slice_0 },
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_slice_0 },
	1,
	4,
	mercury_data_mdbcomp__slice_and_dice__functor_number_map_slice_0
};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__proc_slice_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__proc_slice_0_0)),
	"mdbcomp.slice_and_dice",
	"proc_slice",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	(MR_TypeInfo) &mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__proc_dice_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__proc_dice_0_0)),
	"mdbcomp.slice_and_dice",
	"proc_dice",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 },
	-1,
	0,
	NULL
};

static const MR_FA_TypeInfo_Struct2 mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
	&mercury_data_tree234__type_ctor_info_tree234_2,
{	(MR_TypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_TypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__dice_proc_map_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__dice_proc_map_0_0)),
	"mdbcomp.slice_and_dice",
	"dice_proc_map",
	{ 0 },
	{ (void *)&mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__slice_and_dice__field_types_dice_label_count_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__prim_data__type_ctor_info_proc_label_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__trace_counts__type_ctor_info_path_port_0,
	(MR_PseudoTypeInfo) &mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

const MR_ConstString mercury_data_mdbcomp__slice_and_dice__field_names_dice_label_count_0_0[] = {
	"dlc_proc_label",
	"dlc_path_port",
	"dlc_counts"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0 = {
	"dice_label_count",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__slice_and_dice__field_types_dice_label_count_0_0,
	mercury_data_mdbcomp__slice_and_dice__field_names_dice_label_count_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_dice_label_count_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_label_count_0_0
};

const MR_Integer mercury_data_mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0)),
	"mdbcomp.slice_and_dice",
	"dice_label_count",
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_name_ordered_dice_label_count_0 },
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_dice_label_count_0 },
	1,
	4,
	mercury_data_mdbcomp__slice_and_dice__functor_number_map_dice_label_count_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

const MR_ConstString mercury_data_mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0[] = {
	"dice_filename",
	"dice_linenumber",
	"pass_count",
	"pass_tests",
	"fail_count",
	"fail_tests"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0 = {
	"dice_exec_count",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__slice_and_dice__field_types_dice_exec_count_0_0,
	mercury_data_mdbcomp__slice_and_dice__field_names_dice_exec_count_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_dice_exec_count_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_exec_count_0_0
};

const MR_Integer mercury_data_mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0)),
	"mdbcomp.slice_and_dice",
	"dice_exec_count",
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_name_ordered_dice_exec_count_0 },
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_dice_exec_count_0 },
	1,
	4,
	mercury_data_mdbcomp__slice_and_dice__functor_number_map_dice_exec_count_0
};

const MR_PseudoTypeInfo mercury_data_mdbcomp__slice_and_dice__field_types_dice_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_tree234__ti_tree234_2mdbcomp__prim_data__type_ctor_info_proc_label_0tree234__ti_tree234_2mdbcomp__trace_counts__type_ctor_info_path_port_0mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0
};

const MR_ConstString mercury_data_mdbcomp__slice_and_dice__field_names_dice_0_0[] = {
	"num_pass_tests",
	"num_fail_tests",
	"dice_proc_map"
};

static const MR_DuFunctorDesc mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_0_0 = {
	"dice",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdbcomp__slice_and_dice__field_types_dice_0_0,
	mercury_data_mdbcomp__slice_and_dice__field_names_dice_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_0_0

};

const MR_DuPtagLayout mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_dice_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdbcomp__slice_and_dice__du_stag_ordered_dice_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdbcomp__slice_and_dice__du_name_ordered_dice_0[] = {
	&mercury_data_mdbcomp__slice_and_dice__du_functor_desc_dice_0_0
};

const MR_Integer mercury_data_mdbcomp__slice_and_dice__functor_number_map_dice_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdbcomp__slice_and_dice__dice_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdbcomp__slice_and_dice__dice_0_0)),
	"mdbcomp.slice_and_dice",
	"dice",
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_name_ordered_dice_0 },
	{ (void *)mercury_data_mdbcomp__slice_and_dice__du_ptag_ordered_dice_0 },
	1,
	4,
	mercury_data_mdbcomp__slice_and_dice__functor_number_map_dice_0
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_4_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_merge_proc_trace_counts",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
224,
"d1;c4;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"deconstruct_slice_label_count",
6,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
541,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_2 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"format_proc_label",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
543,
"d1;c10;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_3 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"format_path_port",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
544,
"d1;c12;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_4 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string_thousands",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
545,
"d1;c14;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_5 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"lambda_slice_and_dice_m_551",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
551,
"d1;c37;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_6 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"bracket_int",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
560,
"d1;c40;d2;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"append_slice_label_counts",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
517,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_2 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_label_count_is_for_module",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
402,
"d1;c12;t;c2;d1;c4;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_3 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_label_count_is_zero",
1,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
409,
"d1;c12;t;c2;d1;c5;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_4 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_label_count_compare",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
415,
"d1;c12;t;c2;d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_slice_to_string_11_0_5 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_label_count_compare",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
415,
"d1;c12;t;c2;d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_5_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_merge_proc_trace_counts",
5,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
328,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_5_0_2 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_merge_proc_trace_counts",
5,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
328,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"append_dice_label_counts",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
734,
"d1;c3;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_2 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_label_count_is_for_module",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
609,
"d1;c13;t;c2;d1;c4;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_3 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_label_count_compare",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
614,
"d1;c13;t;c2;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__read_dice_to_string_12_0_4 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_label_count_compare",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
614,
"d1;c13;t;c2;d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_merge_path_port",
5,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
234,
"d1;c6;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_2 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_merge_path_port",
5,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
238,
"d1;c6;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__slice_merge_path_port_5_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"slice_add_trace_count",
3,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
248,
"d1;c6;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_merge_path_port",
6,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
339,
"d1;c7;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_2 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_merge_path_port",
6,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
343,
"d1;c7;e;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__dice_merge_path_port_6_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"dice_add_trace_count",
4,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
353,
"d1;c7;?;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__append_slice_label_counts_4_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"make_slice_label_count",
3,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
524,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdbcomp__slice_and_dice__append_dice_label_counts_4_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"make_dice_label_count",
3,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
741,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_1 = {
{
MR_PREDICATE,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"deconstruct_dice_label_count",
8,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
757,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_2 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"format_proc_label",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
760,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_3 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"format_path_port",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
761,
"d1;c13;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_4 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string_thousands",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
762,
"d1;c15;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_5 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"bracket_int",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
763,
"d1;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_6 = {
{
MR_FUNCTION,
"string",
"string",
"int_to_string_thousands",
2,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
764,
"d1;c19;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_7 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"suspicion_ratio",
3,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
765,
"d1;c21;"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_8 = {
{
MR_FUNCTION,
"mdbcomp.slice_and_dice",
"mdbcomp.slice_and_dice",
"format_float",
3,
0
},
"mdbcomp.slice_and_dice",
"slice_and_dice.m",
767,
"d1;c23;"
};

MR_decl_entry(mdbcomp__trace_counts__read_trace_counts_source_4_0);
MR_decl_entry(fn__map__init_0_0);
extern const MR_TypeCtorInfo_Struct mercury_data_mdbcomp__trace_counts__type_ctor_info_proc_label_in_context_0;
MR_decl_entry(map__foldl_4_0);
MR_decl_entry(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module0)
	MR_init_entry1(mdbcomp__slice_and_dice__read_slice_4_0);
	MR_init_label5(mdbcomp__slice_and_dice__read_slice_4_0,2,5,6,7,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__slice_and_dice__read_slice_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_source_4_0,
		mdbcomp__slice_and_dice__read_slice_4_0_i2);
MR_def_label(mdbcomp__slice_and_dice__read_slice_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_4_0_i4);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__slice_and_dice__read_slice_4_0_i5);
MR_def_label(mdbcomp__slice_and_dice__read_slice_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__read_slice_4_0_i6);
MR_def_label(mdbcomp__slice_and_dice__read_slice_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0,
		mdbcomp__slice_and_dice__read_slice_4_0_i7);
MR_def_label(mdbcomp__slice_and_dice__read_slice_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(mdbcomp__slice_and_dice__read_slice_4_0,4)
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

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__map5_7_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__filter_4_0);
MR_decl_entry(fn__string__format_table_max_2_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module1)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0);
	MR_init_label8(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,2,3,4,5,6,8,9,10)
	MR_init_label4(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,11,12,13,14)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r8 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r4 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r6 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r7 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_np_call_localret_ent(list__map5_7_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i2);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i3);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i4);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i5);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Procedure", 9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Path/Port", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("File:Line", 9);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("Count", 5);
	MR_tfield(1, MR_tempr4, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_sv(2) = MR_tempr6;
	MR_tfield(1, MR_tempr6, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r3 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__filter_4_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i6);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i8);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__string__format_table_max_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i14);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i9);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i10);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i11);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i12);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,6);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i13);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__string__format_table_max_2_0,
		fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0_i14);
MR_def_label(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__to_char_list_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
MR_decl_entry(fn__set__list_to_set_1_0);
MR_decl_entry(set__subset_2_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(string__append_3_1);
MR_decl_entry(list__sort_3_0);
MR_decl_entry(list__take_3_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module2)
	MR_init_entry1(mdbcomp__slice_and_dice__read_slice_to_string_11_0);
	MR_init_label8(mdbcomp__slice_and_dice__read_slice_to_string_11_0,3,4,8,9,10,12,15,16)
	MR_init_label8(mdbcomp__slice_and_dice__read_slice_to_string_11_0,22,24,21,26,28,27,31,14)
	MR_init_label1(mdbcomp__slice_and_dice__read_slice_to_string_11_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__slice_and_dice__read_slice_to_string_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i3);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_to_string_11_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,122)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_to_string_11_0_i4);
	}
	MR_r2 = MR_ctfield(1, MR_r1, 1);
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i8);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i8);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,3);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i9);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(set__subset_2_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i10);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_to_string_11_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__slice_and_dice__read_slice_4_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i12);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_to_string_11_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,6);
	MR_r5 = MR_ctfield(0, MR_tempr1, 1);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i15);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(7), (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_to_string_11_0_i16);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(7);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i16);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("z", 1);
	MR_np_call_localret_ent(string__append_3_1,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i22);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_to_string_11_0_i21);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,7);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(list__filter_3_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i24);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_label_count_compare_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i26);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_label_count_compare_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i26);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__take_3_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i28);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_slice_to_string_11_0_i27);
	}
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i31);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__mdbcomp__slice_and_dice__format_slice_label_counts_5_0,
		mdbcomp__slice_and_dice__read_slice_to_string_11_0_i31);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(9);
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(mdbcomp__slice_and_dice__read_slice_to_string_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("Invalid sort string", 19);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module3)
	MR_init_entry1(mdbcomp__slice_and_dice__read_dice_5_0);
	MR_init_label8(mdbcomp__slice_and_dice__read_dice_5_0,2,5,8,9,10,11,12,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__slice_and_dice__read_dice_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_source_4_0,
		mdbcomp__slice_and_dice__read_dice_5_0_i2);
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_dice_5_0_i4);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(mdbcomp__trace_counts__read_trace_counts_source_4_0,
		mdbcomp__slice_and_dice__read_dice_5_0_i5);
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_dice_5_0_i4);
	}
	MR_sv(3) = MR_ctfield(0, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_r1, 1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__slice_and_dice__read_dice_5_0_i8);
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,11);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,1);
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__read_dice_5_0_i9);
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, proc_label_in_context);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,5,2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__read_dice_5_0_i10);
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0,
		mdbcomp__slice_and_dice__read_dice_5_0_i11);
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__mdbcomp__trace_counts__num_tests_for_file_type_1_0,
		mdbcomp__slice_and_dice__read_dice_5_0_i12);
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(mdbcomp__slice_and_dice__read_dice_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(1, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module4)
	MR_init_entry1(mdbcomp__slice_and_dice__read_dice_to_string_12_0);
	MR_init_label8(mdbcomp__slice_and_dice__read_dice_to_string_12_0,3,4,5,6,8,11,15,12)
	MR_init_label6(mdbcomp__slice_and_dice__read_dice_to_string_12_0,17,19,18,22,10,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdbcomp__slice_and_dice__read_dice_to_string_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r8;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__to_char_list_1_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i3);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i4);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,7,11);
	MR_np_call_localret_ent(fn__set__list_to_set_1_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i5);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(set__subset_2_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i6);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_dice_to_string_12_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(mdbcomp__slice_and_dice__read_dice_5_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i8);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_dice_to_string_12_0_i10);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,8);
	MR_r5 = MR_ctfield(0, MR_tempr1, 2);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i11);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_sv(8), (char *)(MR_Word) MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_dice_to_string_12_0_i12);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i15);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_label_count_compare_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count);
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i17);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_label_count_compare_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count);
	}
	MR_np_call_localret_ent(list__sort_3_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i17);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(list__take_3_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i19);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__read_dice_to_string_12_0_i18);
	}
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i22);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,
		mdbcomp__slice_and_dice__read_dice_to_string_12_0_i22);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(10);
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_decr_sp_and_return(10);
	}
MR_def_label(mdbcomp__slice_and_dice__read_dice_to_string_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("Invalid sort string", 19);
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__float_1_0);
MR_decl_entry(fn__f_102_108_111_97_116_95_95_47_2_0);
static const MR_Float mercury_float_const_0pt20000000000000001 = 0.20000000000000001;
static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module5)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0);
	MR_init_label5(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,5,6,7,2,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = ((MR_Integer) MR_r1 + (MR_Integer) MR_tempr1);
	if (MR_INT_EQ(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0_i2);
	}
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0_i5);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0_i6);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0_i7);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_word_to_float(MR_r1) >= (MR_Float) 0.20000000000000001)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0_i10);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_decr_sp_and_return(2);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__float__max_2_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module6)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0);
	MR_init_label8(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,26,4,6,7,8,10,11,12)
	MR_init_label1(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i26);
	}
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_proceed();
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i4);
	}
	MR_r1 = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(1) = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i10);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i6);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i7);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i8);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i10);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__float__float_1_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i11);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_102_108_111_97_116_95_95_47_2_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i12);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_float_to_word((MR_word_to_float(MR_r1) - MR_word_to_float(MR_tempr1)));
	MR_r2 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	}
	MR_np_call_localret_ent(fn__float__max_2_0,
		fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0_i13);
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_normalised_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__f_102_108_111_97_116_95_95_47_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static const MR_Float mercury_float_const_1pt0000000000000000 = 1.0000000000000000;

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module7)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0);
	MR_init_label1(fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r2,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0_i2);
	}
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0_i2);
	}
	MR_r1 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_proceed();
MR_def_label(fn__mdbcomp__slice_and_dice__suspicion_ratio_binary_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__search_3_0);
MR_decl_entry(svmap__det_update_4_0);
MR_decl_entry(svmap__det_insert_4_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module8)
	MR_init_entry1(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0);
	MR_init_label5(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0,3,5,2,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_r4 = MR_ctfield(0, MR_r1, 2);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r3;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(map__search_3_0,
		mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_i3);
MR_def_label(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_merge_path_port_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(5);
	MR_r5 = MR_sv(1);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_i5);
MR_def_label(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_update_4_0);
MR_def_label(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_merge_path_port_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_i7);
MR_def_label(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0_i8);
MR_def_label(mdbcomp__slice_and_dice__slice_merge_proc_trace_counts_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__transform_value_4_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module9)
	MR_init_entry1(mdbcomp__slice_and_dice__slice_merge_path_port_5_0);
	MR_init_label2(mdbcomp__slice_and_dice__slice_merge_path_port_5_0,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__slice_merge_path_port_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__slice_add_trace_count_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r3;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_r4;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	}
	MR_np_call_localret_ent(map__transform_value_4_0,
		mdbcomp__slice_and_dice__slice_merge_path_port_5_0_i3);
MR_def_label(mdbcomp__slice_and_dice__slice_merge_path_port_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_merge_path_port_5_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(5);
MR_def_label(mdbcomp__slice_and_dice__slice_merge_path_port_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count);
	MR_r3 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module10)
	MR_init_entry1(mdbcomp__slice_and_dice__slice_add_trace_count_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__slice_add_trace_count_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) + (MR_Integer) MR_ctfield(0, MR_r1, 1));
	MR_tfield(0, MR_tempr1, 3) = ((MR_Integer) MR_ctfield(0, MR_tempr2, 3) + (MR_Integer) MR_ctfield(0, MR_r1, 2));
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module11)
	MR_init_entry1(mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0);
	MR_init_label1(mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module12)
	MR_init_entry1(mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0);
	MR_init_label1(mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0_i3);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_proceed();
MR_def_label(mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_maybe_dice_error_to_dice: result is error", 45);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module13)
	MR_init_entry1(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0);
	MR_init_label5(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0,3,5,2,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_tempr3 = MR_r4;
	MR_sv(5) = MR_tempr3;
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(map__search_3_0,
		mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_i3);
MR_def_label(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_merge_path_port_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r6 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(6);
	MR_r5 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_i5);
MR_def_label(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__det_update_4_0);
MR_def_label(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_merge_path_port_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	}
	MR_np_call_localret_ent(fn__map__init_0_0,
		mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_i7);
MR_def_label(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r6 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, line_no_and_count);
	MR_r3 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_np_call_localret_ent(map__foldl_4_0,
		mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0_i8);
MR_def_label(mdbcomp__slice_and_dice__dice_merge_proc_trace_counts_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module14)
	MR_init_entry1(mdbcomp__slice_and_dice__dice_merge_path_port_6_0);
	MR_init_label3(mdbcomp__slice_and_dice__dice_merge_path_port_6_0,3,2,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__dice_merge_path_port_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,7);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__dice_add_trace_count_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_tempr3 = MR_r4;
	MR_tfield(0, MR_tempr1, 4) = MR_tempr3;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_tempr3;
	MR_sv(5) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_call_localret_ent(map__transform_value_4_0,
		mdbcomp__slice_and_dice__dice_merge_path_port_6_0_i3);
MR_def_label(mdbcomp__slice_and_dice__dice_merge_path_port_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_merge_path_port_6_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(6);
MR_def_label(mdbcomp__slice_and_dice__dice_merge_path_port_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_merge_path_port_6_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 2);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 5) = (MR_Integer) 0;
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
MR_def_label(mdbcomp__slice_and_dice__dice_merge_path_port_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 3) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 4) = MR_ctfield(0, MR_tempr2, 1);
	MR_tfield(0, MR_tempr1, 5) = MR_ctfield(0, MR_tempr2, 2);
	MR_r3 = MR_sv(3);
	MR_r5 = MR_sv(5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(svmap__det_insert_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module15)
	MR_init_entry1(mdbcomp__slice_and_dice__dice_add_trace_count_4_0);
	MR_init_label1(mdbcomp__slice_and_dice__dice_add_trace_count_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__dice_add_trace_count_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_add_trace_count_4_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_r1, 2) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 2) + (MR_Integer) MR_ctfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_r1, 3) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 3) + (MR_Integer) MR_ctfield(0, MR_tempr2, 2));
	MR_tfield(0, MR_r1, 4) = MR_ctfield(0, MR_tempr1, 4);
	MR_tfield(0, MR_r1, 5) = MR_ctfield(0, MR_tempr1, 5);
	MR_proceed();
	}
MR_def_label(mdbcomp__slice_and_dice__dice_add_trace_count_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_tfield(0, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(0, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_tfield(0, MR_r1, 2) = MR_ctfield(0, MR_tempr1, 2);
	MR_tfield(0, MR_r1, 3) = MR_ctfield(0, MR_tempr1, 3);
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_r1, 4) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 4) + (MR_Integer) MR_ctfield(0, MR_tempr2, 1));
	MR_tfield(0, MR_r1, 5) = ((MR_Integer) MR_ctfield(0, MR_tempr1, 5) + (MR_Integer) MR_ctfield(0, MR_tempr2, 2));
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__string_to_sym_name_1_0);
MR_decl_entry(mdbcomp__prim_data__is_submodule_2_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module16)
	MR_init_entry1(mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0);
	MR_init_label1(mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_sv(1) = MR_const_mask_field(MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0_i4);
MR_def_label(mdbcomp__slice_and_dice__slice_label_count_is_for_module_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdbcomp__prim_data__is_submodule_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module17)
	MR_init_entry1(mdbcomp__slice_and_dice__slice_label_count_is_zero_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__slice_label_count_is_zero_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_ctfield(0, MR_r1, 2), 2);
	MR_r1 = ((MR_Integer) MR_tempr1 > (MR_Integer) 0);
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__first_char_3_3);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(fn__string__length_1_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module18)
	MR_init_entry1(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0);
	MR_init_label8(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,59,3,5,8,11,16,14,21)
	MR_init_label3(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,25,23,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(string__first_char_3_3,
		mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i3);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i2);
	}
	if (MR_INT_NE(MR_r2,99)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i5);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(1), 2);
	MR_r2 = MR_ctfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i16);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,67)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i8);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(2), 2);
	MR_r2 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i16);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,116)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i11);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(1), 3);
	MR_r2 = MR_ctfield(0, MR_sv(2), 3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i16);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,84)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i14);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(2), 3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i16);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i21);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("slice_exec_count_compare: invalid sort string", 45);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i21);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i23);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i25);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i23);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0_i59);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("slice_exec_count_compare: empty sort string", 43);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module19)
	MR_init_entry1(mdbcomp__slice_and_dice__slice_label_count_compare_4_0);
	MR_init_label1(mdbcomp__slice_and_dice__slice_label_count_compare_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__slice_label_count_compare_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__slice_label_count_compare_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0);
MR_def_label(mdbcomp__slice_and_dice__slice_label_count_compare_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_np_tailcall_ent(mdbcomp__slice_and_dice__slice_exec_count_compare_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(map__to_assoc_list_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(list__append_3_1);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module20)
	MR_init_entry1(mdbcomp__slice_and_dice__append_slice_label_counts_4_0);
	MR_init_label2(mdbcomp__slice_and_dice__append_slice_label_counts_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__append_slice_label_counts_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		mdbcomp__slice_and_dice__append_slice_label_counts_4_0_i2);
MR_def_label(mdbcomp__slice_and_dice__append_slice_label_counts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__make_slice_label_count_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdbcomp__slice_and_dice__append_slice_label_counts_4_0_i3);
MR_def_label(mdbcomp__slice_and_dice__append_slice_label_counts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_label_count);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module21)
	MR_init_entry1(mdbcomp__slice_and_dice__make_slice_label_count_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__make_slice_label_count_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module22)
	MR_init_entry1(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0);
	MR_init_label3(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0_i2);
MR_def_label(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0_i3);
MR_def_label(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0_i4);
MR_def_label(mdbcomp__slice_and_dice__deconstruct_slice_label_count_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_decr_sp_and_return(6);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module23)
	MR_init_entry1(mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r8 = MR_r5;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	MR_r6 = (MR_Word) MR_tbmkword(0, 0);
	MR_r7 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(mdbcomp__slice_and_dice__read_dice_to_string_12_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module24)
	MR_init_entry1(mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0);
	MR_init_label1(mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r2, 0);
	MR_sv(1) = MR_const_mask_field(MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__string_to_sym_name_1_0,
		mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0_i4);
MR_def_label(mdbcomp__slice_and_dice__dice_label_count_is_for_module_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(mdbcomp__prim_data__is_submodule_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module25)
	MR_init_entry1(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0);
	MR_init_label8(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,95,3,5,8,11,14,19,20)
	MR_init_label8(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,17,24,25,22,27,32,30,41)
	MR_init_label3(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,45,43,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(string__first_char_3_3,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i3);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i2);
	}
	if (MR_INT_NE(MR_r2,112)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i5);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(1), 2);
	MR_r2 = MR_ctfield(0, MR_sv(2), 2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,80)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i8);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(2), 2);
	MR_r2 = MR_ctfield(0, MR_sv(1), 2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,102)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i11);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(1), 4);
	MR_r2 = MR_ctfield(0, MR_sv(2), 4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,70)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i14);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = MR_ctfield(0, MR_sv(2), 4);
	MR_r2 = MR_ctfield(0, MR_sv(1), 4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,115)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i17);
	}
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i19);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i20);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,83)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i22);
	}
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i24);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 2);
	MR_r2 = MR_ctfield(0, MR_tempr1, 4);
	}
	MR_np_call_localret_ent(fn__mdbcomp__slice_and_dice__suspicion_ratio_2_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i25);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_float_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,100)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i27);
	}
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 2) - (MR_Integer) MR_ctfield(0, MR_tempr1, 4));
	MR_tempr2 = MR_sv(2);
	MR_r2 = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) - (MR_Integer) MR_ctfield(0, MR_tempr2, 4));
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,68)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i30);
	}
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_r1 = ((MR_Integer) MR_ctfield(0, MR_tempr1, 2) - (MR_Integer) MR_ctfield(0, MR_tempr1, 4));
	MR_tempr2 = MR_sv(1);
	MR_r2 = ((MR_Integer) MR_ctfield(0, MR_tempr2, 2) - (MR_Integer) MR_ctfield(0, MR_tempr2, 4));
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i32);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i41);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dice_exec_count_compare: invalid sort string", 44);
	MR_np_call_localret_ent(require__error_1_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i41);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i43);
	}
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(fn__string__length_1_0,
		mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i45);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_r1,0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i43);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0_i95);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("dice_exec_count_compare: empty sort string", 42);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module26)
	MR_init_entry1(mdbcomp__slice_and_dice__dice_label_count_compare_4_0);
	MR_init_label1(mdbcomp__slice_and_dice__dice_label_count_compare_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__dice_label_count_compare_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("", 0)) != 0)) {
		MR_GOTO_LAB(mdbcomp__slice_and_dice__dice_label_count_compare_4_0_i2);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_np_tailcall_ent(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0);
MR_def_label(mdbcomp__slice_and_dice__dice_label_count_compare_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r2, 2);
	MR_r3 = MR_ctfield(0, MR_r3, 2);
	MR_np_tailcall_ent(mdbcomp__slice_and_dice__dice_exec_count_compare_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module27)
	MR_init_entry1(mdbcomp__slice_and_dice__append_dice_label_counts_4_0);
	MR_init_label2(mdbcomp__slice_and_dice__append_dice_label_counts_4_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__append_dice_label_counts_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	MR_np_call_localret_ent(map__to_assoc_list_2_0,
		mdbcomp__slice_and_dice__append_dice_label_counts_4_0_i2);
MR_def_label(mdbcomp__slice_and_dice__append_dice_label_counts_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(10,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdbcomp__slice_and_dice__make_dice_label_count_3_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,16);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count);
	}
	MR_np_call_localret_ent(list__map_3_0,
		mdbcomp__slice_and_dice__append_dice_label_counts_4_0_i3);
MR_def_label(mdbcomp__slice_and_dice__append_dice_label_counts_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(list__append_3_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module28)
	MR_init_entry1(mdbcomp__slice_and_dice__make_dice_label_count_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__make_dice_label_count_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 2) = MR_ctfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module29)
	MR_init_entry1(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0);
	MR_init_label3(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 0);
	MR_sv(2) = MR_ctfield(0, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0_i2);
MR_def_label(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0_i3);
MR_def_label(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0_i4);
MR_def_label(mdbcomp__slice_and_dice__deconstruct_dice_label_count_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_decr_sp_and_return(8);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0);
MR_decl_entry(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0);
MR_decl_entry(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module30)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0);
	MR_init_label6(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0,2,3,4,6,9,5)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_0,
		fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i2);
MR_def_label(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_proc_label_from_layout_1_0,
		fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i3);
MR_def_label(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__rtti_access__get_path_port_from_label_layout_1_0,
		fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i4);
MR_def_label(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(map__search_3_0,
		fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i6);
MR_def_label(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i5);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r3 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__search_3_0,
		fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i9);
MR_def_label(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i5);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 4);
	if (MR_INT_LE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i5);
	}
	MR_tempr1 = MR_ctfield(0, MR_tempr2, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0_i5);
	}
	MR_r1 = (MR_Word) &mercury_float_const_1pt0000000000000000;
	MR_decr_sp_and_return(3);
	}
MR_def_label(fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) &mercury_float_const_0pt0000000000000000;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module31)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__bracket_int_1_0);
	MR_init_label2(fn__mdbcomp__slice_and_dice__bracket_int_1_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__slice_and_dice__bracket_int_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__mdbcomp__slice_and_dice__bracket_int_1_0_i2);
MR_def_label(fn__mdbcomp__slice_and_dice__bracket_int_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__bracket_int_1_0_i3);
MR_def_label(fn__mdbcomp__slice_and_dice__bracket_int_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__format_2_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module32)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__format_float_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__slice_and_dice__format_float_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = (MR_Word) MR_string_const("%.*f", 4);
	MR_np_tailcall_ent(fn__string__format_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(mdbcomp__prim_data__special_pred_name_arity_4_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module33)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__format_proc_label_1_0);
	MR_init_label8(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,4,7,6,8,9,10,11,12)
	MR_init_label8(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,13,14,15,16,3,18,19,20)
	MR_init_label5(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,21,22,23,24,25)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__slice_and_dice__format_proc_label_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i3);
	}
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 3);
	MR_sv(3) = MR_ctfield(0, MR_r1, 4);
	MR_sv(4) = MR_ctfield(0, MR_r1, 5);
	MR_r1 = MR_ctfield(0, MR_r1, 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i4);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i7);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_string_const("pred", 4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i9);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i8);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = (MR_Word) MR_string_const("func", 4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i9);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("-", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i10);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i11);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i12);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i13);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i14);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i15);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i16);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(1, MR_r1, 3);
	MR_r1 = MR_ctfield(1, MR_r1, 2);
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i18);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdbcomp__prim_data__special_pred_name_arity_4_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i19);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i20);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("/", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i21);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i22);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i23);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i24);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" for ", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_proc_label_1_0_i25);
MR_def_label(fn__mdbcomp__slice_and_dice__format_proc_label_1_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdbcomp__trace_counts__string_to_trace_port_2_1);
MR_decl_entry(fn__mdbcomp__program_representation__string_from_path_1_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module34)
	MR_init_entry1(fn__mdbcomp__slice_and_dice__format_path_port_1_0);
	MR_init_label7(fn__mdbcomp__slice_and_dice__format_path_port_1_0,28,9,10,11,27,5,6)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdbcomp__slice_and_dice__format_path_port_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r1,1)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__format_path_port_1_0_i27);
	}
	if (MR_PTAG_TEST(MR_r1,2)) {
		MR_GOTO_LAB(fn__mdbcomp__slice_and_dice__format_path_port_1_0_i28);
	}
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_np_tailcall_ent(mdbcomp__trace_counts__string_to_trace_port_2_1);
MR_def_label(fn__mdbcomp__slice_and_dice__format_path_port_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_sv(1) = MR_ctfield(2, MR_r1, 1);
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__mdbcomp__slice_and_dice__format_path_port_1_0,
		fn__mdbcomp__slice_and_dice__format_path_port_1_0_i9);
MR_def_label(fn__mdbcomp__slice_and_dice__format_path_port_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__mdbcomp__slice_and_dice__format_path_port_1_0,
		fn__mdbcomp__slice_and_dice__format_path_port_1_0_i10);
MR_def_label(fn__mdbcomp__slice_and_dice__format_path_port_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_path_port_1_0_i11);
MR_def_label(fn__mdbcomp__slice_and_dice__format_path_port_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__mdbcomp__slice_and_dice__format_path_port_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_ctfield(1, MR_r1, 0);
	MR_np_call_localret_ent(fn__mdbcomp__program_representation__string_from_path_1_0,
		fn__mdbcomp__slice_and_dice__format_path_port_1_0_i5);
MR_def_label(fn__mdbcomp__slice_and_dice__format_path_port_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(">", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__mdbcomp__slice_and_dice__format_path_port_1_0_i6);
MR_def_label(fn__mdbcomp__slice_and_dice__format_path_port_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("<", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module35)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__dice_0_0);
	MR_init_label1(__Unify___mdbcomp__slice_and_dice__dice_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__dice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_0_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_ctfield(0, MR_tempr2, 2);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___mdbcomp__slice_and_dice__dice_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___tree234__tree234_2_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module36)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__dice_0_0);
	MR_init_label3(__Compare___mdbcomp__slice_and_dice__dice_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__dice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__dice_0_0_i3);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_0_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__dice_0_0_i7);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_0_0_i12);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module37)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0);
	MR_init_label1(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 4);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 5);
	MR_r1 = MR_ctfield(0, MR_tempr3, 5);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__slice_and_dice__dice_exec_count_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module38)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0);
	MR_init_label6(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0,3,7,11,15,19,27)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(10) = MR_ctfield(0, MR_tempr1, 5);
	MR_sv(9) = MR_ctfield(0, MR_tempr1, 4);
	MR_sv(8) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(7) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_ctfield(0, MR_r1, 5);
	MR_sv(4) = MR_ctfield(0, MR_r1, 4);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i3);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i27);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i7);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i27);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i11);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i27);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i15);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i27);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(9);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i19);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0_i27);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(10);
	MR_succip_word = MR_sv(11);
	MR_decr_sp(11);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(11);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Unify___mdbcomp__trace_counts__path_port_0_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module39)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0);
	MR_init_label3(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i2);
MR_def_label(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__trace_counts__path_port_0_0,
		__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i4);
MR_def_label(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 3);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 4);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 4);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 5);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 5);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___mdbcomp__slice_and_dice__dice_label_count_0_0,1)
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

MR_decl_entry(__Compare___mdbcomp__prim_data__proc_label_0_0);
MR_decl_entry(__Compare___mdbcomp__trace_counts__path_port_0_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module40)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0);
	MR_init_label3(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0_i3);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__trace_counts__path_port_0_0,
		__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0_i7);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__slice_and_dice__dice_exec_count_0_0);
MR_def_label(__Compare___mdbcomp__slice_and_dice__dice_label_count_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module41)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__dice_proc_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__dice_proc_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module42)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__dice_proc_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__dice_proc_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,8);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module43)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__proc_dice_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__proc_dice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module44)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__proc_dice_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__proc_dice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_exec_count);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module45)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__proc_slice_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__proc_slice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module46)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__proc_slice_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__proc_slice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, slice_exec_count);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module47)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__slice_0_0);
	MR_init_label1(__Unify___mdbcomp__slice_and_dice__slice_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__slice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_0_0_i1);
	}
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_tempr2 = MR_tempr3;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r4 = MR_ctfield(0, MR_tempr2, 1);
	MR_np_tailcall_ent(__Unify___tree234__tree234_2_0);
	}
MR_def_label(__Unify___mdbcomp__slice_and_dice__slice_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module48)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__slice_0_0);
	MR_init_label2(__Compare___mdbcomp__slice_and_dice__slice_0_0,3,7)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__slice_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_ctfield(0, MR_r2, 1);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__slice_0_0_i3);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__slice_0_0_i7);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___tree234__tree234_2_0);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module49)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0);
	MR_init_label1(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(0, MR_r1, 0);
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_tempr1, (char *)MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 1);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 2);
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0_i1);
	}
	MR_tempr1 = MR_ctfield(0, MR_r1, 3);
	MR_r1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r1 = (MR_tempr1 == MR_r1);
	MR_proceed();
	}
MR_def_label(__Unify___mdbcomp__slice_and_dice__slice_exec_count_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module50)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0);
	MR_init_label4(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0,3,7,11,17)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(6) = MR_ctfield(0, MR_tempr1, 3);
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r1, 3);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0_i3);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0_i17);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0_i7);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0_i17);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0_i11);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0_i17);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module51)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0);
	MR_init_label3(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0,2,4,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Unify___mdbcomp__prim_data__proc_label_0_0,
		__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0_i2);
MR_def_label(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___mdbcomp__trace_counts__path_port_0_0,
		__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0_i4);
MR_def_label(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr2 = MR_sv(2);
	MR_r1 = MR_ctfield(0, MR_tempr2, 0);
	MR_tempr3 = MR_sv(4);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	if ((strcmp((char *)MR_r1, (char *)MR_tempr1) != 0)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 2);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 2);
	if ((MR_r1 != MR_tempr1)) {
		MR_GOTO_LAB(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0_i1);
	}
	MR_r1 = MR_ctfield(0, MR_tempr2, 3);
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 3);
	MR_r1 = (MR_r1 == MR_tempr1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(__Unify___mdbcomp__slice_and_dice__slice_label_count_0_0,1)
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


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module52)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0);
	MR_init_label3(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0,3,7,12)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(2) = MR_ctfield(0, MR_r1, 2);
	MR_sv(1) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_r2 = MR_ctfield(0, MR_r2, 0);
	}
	MR_np_call_localret_ent(__Compare___mdbcomp__prim_data__proc_label_0_0,
		__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0_i3);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0_i12);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___mdbcomp__trace_counts__path_port_0_0,
		__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0_i7);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0_i12);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___mdbcomp__slice_and_dice__slice_exec_count_0_0);
MR_def_label(__Compare___mdbcomp__slice_and_dice__slice_label_count_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module53)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__slice_proc_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdbcomp__slice_and_dice__slice_proc_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
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


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module54)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__slice_proc_map_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdbcomp__slice_and_dice__slice_proc_map_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
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


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module55)
	MR_init_entry1(__Unify___mdbcomp__slice_and_dice__trace_counts_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdbcomp__slice_and_dice__trace_counts_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module56)
	MR_init_entry1(__Compare___mdbcomp__slice_and_dice__trace_counts_kind_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdbcomp__slice_and_dice__trace_counts_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module57)
	MR_init_entry1(mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__551__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdbcomp__slice_and_dice__IntroducedFrom__pred__format_slice_label_counts__551__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__map7_9_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
MR_decl_entry(fn__list__map_corresponding_3_0);

MR_BEGIN_MODULE(mdbcomp__slice_and_dice_module58)
	MR_init_entry1(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0);
	MR_init_label8(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,2,3,4,5,6,7,8,9)
	MR_init_label4(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,10,11,12,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r10 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__slice_and_dice, dice_label_count);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r4 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r5 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r6 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r7 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r8 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r9 = (MR_Word) MR_TAG_COMMON(0,2,9);
	MR_np_call_localret_ent(list__map7_9_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i2);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	MR_sv(7) = MR_r4;
	MR_sv(8) = MR_r5;
	MR_sv(9) = MR_r6;
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__prim_data, proc_label);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,10);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i3);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdbcomp__trace_counts, path_port);
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,11);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i4);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,12);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i5);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,13);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i6);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(11) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,14);
	MR_r4 = MR_sv(9);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i7);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,2,15);
	MR_r6 = MR_sv(9);
	MR_np_call_localret_ent(fn__list__map_corresponding_3_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i8);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r1;
	MR_r1 = (MR_Word) MR_FLOAT_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,3);
	MR_np_call_localret_ent(fn__list__map_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i9);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_thousands_1_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i10);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i11);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i12);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("Procedure", 9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("Path/Port", 9);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("File:Line", 9);
	MR_tfield(1, MR_tempr3, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(0, MR_tempr3, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("Pass", 4);
	MR_tfield(1, MR_tempr4, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr5;
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_r1;
	MR_tfield(1, MR_tempr5, 1) = MR_sv(11);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr5, 0) = MR_tempr6;
	MR_tfield(0, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = (MR_Word) MR_string_const("Fail", 4);
	MR_tfield(1, MR_tempr6, 1) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr6, 0) = MR_tempr7;
	MR_tfield(0, MR_tempr6, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = (MR_Word) MR_string_const("Suspicion", 9);
	MR_tfield(1, MR_tempr7, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr7, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr7, 0) = MR_tempr8;
	MR_tfield(0, MR_tempr7, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr8, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr8, 0) = MR_tempr7;
	MR_tfield(1, MR_tempr8, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = MR_tempr6;
	MR_tfield(1, MR_tempr7, 1) = MR_tempr8;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr5;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	}
	MR_np_call_localret_ent(fn__string__format_table_max_2_0,
		fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0_i13);
MR_def_label(fn__f_109_100_98_99_111_109_112_95_95_115_108_105_99_101_95_97_110_100_95_100_105_99_101_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_114_109_97_116_95_100_105_99_101_95_108_97_98_101_108_95_99_111_117_110_116_115_95_95_91_51_93_95_48_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_static(mercury__fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0);

MR_Float
MR_DD_get_suspicion_for_label_layout(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2);

MR_Float
MR_DD_get_suspicion_for_label_layout(MR_Word Mercury__argument1, const MR_LabelLayout * Mercury__argument2)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif
	MR_Float return_value;

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, Mercury__argument2, MR_r2);
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__fn__mdbcomp__slice_and_dice__get_suspicion_for_label_layout_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	return_value = MR_word_to_float(MR_r1);
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
	return return_value;
}


MR_declare_static(mercury__mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_0);

void
MR_MDB_read_dice_to_string(MR_String Mercury__argument1, MR_String Mercury__argument2, MR_String Mercury__argument3, MR_Integer Mercury__argument4, MR_String Mercury__argument5, MR_String * Mercury__argument6, MR_String * Mercury__argument7);

void
MR_MDB_read_dice_to_string(MR_String Mercury__argument1, MR_String Mercury__argument2, MR_String Mercury__argument3, MR_Integer Mercury__argument4, MR_String Mercury__argument5, MR_String * Mercury__argument6, MR_String * Mercury__argument7)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = (MR_Word) Mercury__argument2;
	MR_r3 = (MR_Word) Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = (MR_Word) Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdbcomp__slice_and_dice__read_dice_to_string_no_limit_9_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument6 = (MR_String) MR_r1;
	*Mercury__argument7 = (MR_String) MR_r2;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0);

void
MR_DD_det_maybe_dice_error_to_dice(MR_Word Mercury__argument1, MR_Word * Mercury__argument2);

void
MR_DD_det_maybe_dice_error_to_dice(MR_Word Mercury__argument1, MR_Word * Mercury__argument2)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdbcomp__slice_and_dice__det_maybe_dice_error_to_dice_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_static(mercury__mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0);

void
MR_DD_maybe_dice_error_to_problem_string(MR_Word Mercury__argument1, MR_String * Mercury__argument2);

void
MR_DD_maybe_dice_error_to_problem_string(MR_Word Mercury__argument1, MR_String * Mercury__argument2)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdbcomp__slice_and_dice__maybe_dice_error_to_problem_string_2_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument2 = (MR_String) MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdbcomp__slice_and_dice__read_dice_5_0);

void
MR_MDB_read_dice(MR_String Mercury__argument1, MR_String Mercury__argument2, MR_Word * Mercury__argument3);

void
MR_MDB_read_dice(MR_String Mercury__argument1, MR_String Mercury__argument2, MR_Word * Mercury__argument3)
{
#if MR_NUM_REAL_REGS > 0
	MR_Word c_regs[MR_NUM_REAL_REGS];
#endif
#if MR_THREAD_SAFE
	MR_bool must_finalize_engine;
#endif
#if MR_DEEP_PROFILING
	MR_CallSiteDynList **saved_cur_callback;
	MR_CallSiteDynamic *saved_cur_csd;
#endif

	MR_save_regs_to_mem(c_regs);
#if MR_THREAD_SAFE
	must_finalize_engine = MR_init_thread(MR_use_now);
#endif
#if MR_DEEP_PROFILING
	saved_cur_callback = MR_current_callback_site;
	saved_cur_csd = MR_current_call_site_dynamic;
	MR_setup_callback(MR_ENTRY(mercury__mdbcomp__slice_and_dice__read_dice_5_0));
#endif
	MR_restore_registers();
	MR_r1 = (MR_Word) Mercury__argument1;
	MR_r2 = (MR_Word) Mercury__argument2;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdbcomp__slice_and_dice__read_dice_5_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
	*Mercury__argument3 = MR_r1;
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdbcomp__slice_and_dice_maybe_bunch_0(void)
{
	mdbcomp__slice_and_dice_module0();
	mdbcomp__slice_and_dice_module1();
	mdbcomp__slice_and_dice_module2();
	mdbcomp__slice_and_dice_module3();
	mdbcomp__slice_and_dice_module4();
	mdbcomp__slice_and_dice_module5();
	mdbcomp__slice_and_dice_module6();
	mdbcomp__slice_and_dice_module7();
	mdbcomp__slice_and_dice_module8();
	mdbcomp__slice_and_dice_module9();
	mdbcomp__slice_and_dice_module10();
	mdbcomp__slice_and_dice_module11();
	mdbcomp__slice_and_dice_module12();
	mdbcomp__slice_and_dice_module13();
	mdbcomp__slice_and_dice_module14();
	mdbcomp__slice_and_dice_module15();
	mdbcomp__slice_and_dice_module16();
	mdbcomp__slice_and_dice_module17();
	mdbcomp__slice_and_dice_module18();
	mdbcomp__slice_and_dice_module19();
	mdbcomp__slice_and_dice_module20();
	mdbcomp__slice_and_dice_module21();
	mdbcomp__slice_and_dice_module22();
	mdbcomp__slice_and_dice_module23();
	mdbcomp__slice_and_dice_module24();
	mdbcomp__slice_and_dice_module25();
	mdbcomp__slice_and_dice_module26();
	mdbcomp__slice_and_dice_module27();
	mdbcomp__slice_and_dice_module28();
	mdbcomp__slice_and_dice_module29();
	mdbcomp__slice_and_dice_module30();
	mdbcomp__slice_and_dice_module31();
	mdbcomp__slice_and_dice_module32();
	mdbcomp__slice_and_dice_module33();
	mdbcomp__slice_and_dice_module34();
	mdbcomp__slice_and_dice_module35();
	mdbcomp__slice_and_dice_module36();
	mdbcomp__slice_and_dice_module37();
	mdbcomp__slice_and_dice_module38();
	mdbcomp__slice_and_dice_module39();
}

static void mercury__mdbcomp__slice_and_dice_maybe_bunch_1(void)
{
	mdbcomp__slice_and_dice_module40();
	mdbcomp__slice_and_dice_module41();
	mdbcomp__slice_and_dice_module42();
	mdbcomp__slice_and_dice_module43();
	mdbcomp__slice_and_dice_module44();
	mdbcomp__slice_and_dice_module45();
	mdbcomp__slice_and_dice_module46();
	mdbcomp__slice_and_dice_module47();
	mdbcomp__slice_and_dice_module48();
	mdbcomp__slice_and_dice_module49();
	mdbcomp__slice_and_dice_module50();
	mdbcomp__slice_and_dice_module51();
	mdbcomp__slice_and_dice_module52();
	mdbcomp__slice_and_dice_module53();
	mdbcomp__slice_and_dice_module54();
	mdbcomp__slice_and_dice_module55();
	mdbcomp__slice_and_dice_module56();
	mdbcomp__slice_and_dice_module57();
	mdbcomp__slice_and_dice_module58();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdbcomp__slice_and_dice__init(void);
void mercury__mdbcomp__slice_and_dice__init_type_tables(void);
void mercury__mdbcomp__slice_and_dice__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdbcomp__slice_and_dice__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdbcomp__slice_and_dice__init_complexity_procs(void);
#endif

void mercury__mdbcomp__slice_and_dice__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdbcomp__slice_and_dice_maybe_bunch_0();
	mercury__mdbcomp__slice_and_dice_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0,
		mdbcomp__slice_and_dice__trace_counts_kind_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0,
		mdbcomp__slice_and_dice__slice_proc_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0,
		mdbcomp__slice_and_dice__slice_label_count_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0,
		mdbcomp__slice_and_dice__slice_exec_count_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_0,
		mdbcomp__slice_and_dice__slice_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0,
		mdbcomp__slice_and_dice__proc_slice_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0,
		mdbcomp__slice_and_dice__proc_dice_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0,
		mdbcomp__slice_and_dice__dice_proc_map_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0,
		mdbcomp__slice_and_dice__dice_label_count_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0,
		mdbcomp__slice_and_dice__dice_exec_count_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_0,
		mdbcomp__slice_and_dice__dice_0_0);
	mercury__mdbcomp__slice_and_dice__init_debugger();
}

void mercury__mdbcomp__slice_and_dice__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_trace_counts_kind_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_proc_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_label_count_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_exec_count_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_slice_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_slice_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_proc_dice_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_proc_map_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_label_count_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_exec_count_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdbcomp__slice_and_dice__type_ctor_info_dice_0);
	}
}


void mercury__mdbcomp__slice_and_dice__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdbcomp__slice_and_dice__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdbcomp__slice_and_dice__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
