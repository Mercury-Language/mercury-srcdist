/*
** Automatically generated from `profiling_builtin.m'
** by the Mercury compiler,
** version rotd-2011-07-01, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__profiling_builtin__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "profiling_builtin.c"
#include "profiling_builtin.mh"

#line 28 "profiling_builtin.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "profiling_builtin.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "profiling_builtin.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "profiling_builtin.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "profiling_builtin.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 48 "profiling_builtin.c"
#line 45 "builtin.opt"
#include "array.mh"

#line 52 "profiling_builtin.c"
#line 59 "array.opt"
#include "stm_builtin.mh"

#line 56 "profiling_builtin.c"
#line 61 "array.opt"
#include "store.mh"

#line 60 "profiling_builtin.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "profiling_builtin.c"
#line 156 "io.opt"
#include "dir.mh"

#line 68 "profiling_builtin.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 72 "profiling_builtin.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "profiling_builtin.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "profiling_builtin.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "profiling_builtin.c"
#line 14 "version_array.opt"
#include "version_array.mh"

#line 88 "profiling_builtin.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 92 "profiling_builtin.c"
#line 4 "char.opt"
#include "char.mh"

#line 96 "profiling_builtin.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 100 "profiling_builtin.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 104 "profiling_builtin.c"
#line 4 "int.opt"
#include "int.mh"

#line 108 "profiling_builtin.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 112 "profiling_builtin.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 116 "profiling_builtin.c"
#line 117 "profiling_builtin.c"
#ifndef PROFILING_BUILTIN_DECL_GUARD
#define PROFILING_BUILTIN_DECL_GUARD

#line 121 "profiling_builtin.c"
#line 260 "profiling_builtin.m"

#ifndef MR_DEEP_PROFILING_GUARD
#define MR_DEEP_PROFILING_GUARD

  #ifdef    MR_DEEP_PROFILING

  #include "mercury_deep_profiling.h"
  #include "mercury_deep_rec_depth_actions.h"
  #include "mercury_ho_call.h"
  #include <stdio.h>

  #endif    /* MR_DEEP_PROFILING */

#endif  /* MR_DEEP_PROFILING_GUARD */

#line 138 "profiling_builtin.c"
#line 139 "profiling_builtin.c"

#endif
#line 142 "profiling_builtin.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_profiling_builtin__type_ctor_info_call_site_dynamic_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_2_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_3_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_4_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_5_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_6_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_7_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_8_0,
	mercury_data_profiling_builtin__type_ctor_info_call_site_nums_9_0,
	mercury_data_profiling_builtin__type_ctor_info_proc_dynamic_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_profiling_builtin__type_ctor_info_proc_layout_0;
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_2_0_0, 4,1)
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_3_0_0, 4,1)
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_4_0_0, 4,1)
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_5_0_0, 4,1)
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_6_0_0, 4,1)
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_7_0_0, 4,1)
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_8_0_0, 4,1)
MR_decl_label2(__Unify___profiling_builtin__call_site_nums_9_0_0, 4,1)
MR_decl_label7(__Compare___profiling_builtin__call_site_nums_2_0_0, 6,7,9,12,23,13,17)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_3_0_0, 6,7,9,14,15,17,20,35,21,26)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_4_0_0, 6,7,9,14,15,17,22,23,25,28)
MR_decl_label3(__Compare___profiling_builtin__call_site_nums_4_0_0, 47,29,35)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_5_0_0, 6,7,9,14,15,17,22,23,25,30)
MR_decl_label6(__Compare___profiling_builtin__call_site_nums_5_0_0, 31,33,36,59,37,44)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_6_0_0, 6,7,9,14,15,17,22,23,25,30)
MR_decl_label9(__Compare___profiling_builtin__call_site_nums_6_0_0, 31,33,38,39,41,44,71,45,53)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_7_0_0, 6,7,9,14,15,17,22,23,25,30)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_7_0_0, 31,33,38,39,41,46,47,49,52,83)
MR_decl_label2(__Compare___profiling_builtin__call_site_nums_7_0_0, 53,62)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_8_0_0, 6,7,9,14,15,17,22,23,25,30)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_8_0_0, 31,33,38,39,41,46,47,49,54,55)
MR_decl_label5(__Compare___profiling_builtin__call_site_nums_8_0_0, 57,60,95,61,71)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_9_0_0, 6,7,9,14,15,17,22,23,25,30)
MR_decl_label10(__Compare___profiling_builtin__call_site_nums_9_0_0, 31,33,38,39,41,46,47,49,54,55)
MR_decl_label8(__Compare___profiling_builtin__call_site_nums_9_0_0, 57,62,63,65,68,107,69,80)
MR_def_extern_entry(profiling_builtin__prepare_for_normal_call_1_0)
MR_def_extern_entry(profiling_builtin__prepare_for_special_call_2_0)
MR_def_extern_entry(profiling_builtin__prepare_for_ho_call_2_0)
MR_def_extern_entry(profiling_builtin__prepare_for_method_call_3_0)
MR_def_extern_entry(profiling_builtin__prepare_for_callback_1_0)
MR_def_extern_entry(profiling_builtin__prepare_for_tail_call_1_0)
MR_def_extern_entry(profiling_builtin__save_and_zero_activation_info_ac_2_0)
MR_def_extern_entry(profiling_builtin__save_and_zero_activation_info_sr_1_0)
MR_def_extern_entry(profiling_builtin__rezero_activation_info_ac_0_0)
MR_def_extern_entry(profiling_builtin__rezero_activation_info_sr_0_0)
MR_def_extern_entry(profiling_builtin__reset_activation_info_ac_2_0)
MR_def_extern_entry(profiling_builtin__reset_activation_info_sr_1_0)
MR_def_extern_entry(profiling_builtin__increment_static_coverage_point_count_2_0)
MR_def_extern_entry(profiling_builtin__increment_dynamic_coverage_point_count_1_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_1_3_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_2_4_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_3_5_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_4_6_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_5_7_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_6_8_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_7_9_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_8_10_0)
MR_def_extern_entry(profiling_builtin__save_recursion_depth_9_11_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_1_3_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_2_4_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_3_5_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_4_6_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_5_7_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_6_8_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_7_9_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_8_10_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_exit_9_11_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_1_3_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_2_4_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_3_5_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_4_6_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_5_7_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_6_8_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_7_9_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_8_10_0)
MR_def_extern_entry(profiling_builtin__restore_recursion_depth_fail_9_11_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_dynamic_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_dynamic_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_2_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_2_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_3_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_3_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_4_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_4_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_5_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_5_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_6_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_6_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_7_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_7_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_8_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_8_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__call_site_nums_9_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__call_site_nums_9_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__proc_dynamic_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__proc_dynamic_0_0)
MR_def_extern_entry(__Unify___profiling_builtin__proc_layout_0_0)
MR_def_extern_entry(__Compare___profiling_builtin__proc_layout_0_0)
MR_decl_static(fn__f_112_114_111_102_105_108_105_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_dynamic_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_dynamic_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_dynamic_0_0)),
	"profiling_builtin",
	"call_site_dynamic",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_2_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_2_0_0 = {
	"call_site_nums_2",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_2_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_2_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_2_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_2_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_2_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_2_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_2_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_2_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_2_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_2_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_2_0_0)),
	"profiling_builtin",
	"call_site_nums_2",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_2_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_2_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_2_0
};

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_3_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_3_0_0 = {
	"call_site_nums_3",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_3_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_3_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_3_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_3_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_3_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_3_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_3_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_3_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_3_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_3_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_3_0_0)),
	"profiling_builtin",
	"call_site_nums_3",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_3_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_3_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_3_0
};

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_4_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_4_0_0 = {
	"call_site_nums_4",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_4_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_4_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_4_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_4_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_4_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_4_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_4_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_4_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_4_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_4_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_4_0_0)),
	"profiling_builtin",
	"call_site_nums_4",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_4_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_4_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_4_0
};

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_5_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_5_0_0 = {
	"call_site_nums_5",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_5_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_5_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_5_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_5_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_5_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_5_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_5_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_5_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_5_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_5_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_5_0_0)),
	"profiling_builtin",
	"call_site_nums_5",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_5_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_5_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_5_0
};

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_6_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_6_0_0 = {
	"call_site_nums_6",
	6,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_6_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_6_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_6_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_6_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_6_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_6_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_6_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_6_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_6_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_6_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_6_0_0)),
	"profiling_builtin",
	"call_site_nums_6",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_6_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_6_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_6_0
};

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_7_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_7_0_0 = {
	"call_site_nums_7",
	7,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_7_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_7_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_7_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_7_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_7_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_7_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_7_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_7_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_7_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_7_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_7_0_0)),
	"profiling_builtin",
	"call_site_nums_7",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_7_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_7_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_7_0
};

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_8_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_8_0_0 = {
	"call_site_nums_8",
	8,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_8_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_8_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_8_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_8_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_8_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_8_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_8_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_8_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_8_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_8_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_8_0_0)),
	"profiling_builtin",
	"call_site_nums_8",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_8_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_8_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_8_0
};

const MR_PseudoTypeInfo mercury_data_profiling_builtin__field_types_call_site_nums_9_0_0[] = {
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

static const MR_DuFunctorDesc mercury_data_profiling_builtin__du_functor_desc_call_site_nums_9_0_0 = {
	"call_site_nums_9",
	9,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_profiling_builtin__field_types_call_site_nums_9_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_9_0_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_9_0_0

};

const MR_DuPtagLayout mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_9_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_profiling_builtin__du_stag_ordered_call_site_nums_9_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_profiling_builtin__du_name_ordered_call_site_nums_9_0[] = {
	&mercury_data_profiling_builtin__du_functor_desc_call_site_nums_9_0_0
};

const MR_Integer mercury_data_profiling_builtin__functor_number_map_call_site_nums_9_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_call_site_nums_9_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__call_site_nums_9_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__call_site_nums_9_0_0)),
	"profiling_builtin",
	"call_site_nums_9",
	{ (void *)mercury_data_profiling_builtin__du_name_ordered_call_site_nums_9_0 },
	{ (void *)mercury_data_profiling_builtin__du_ptag_ordered_call_site_nums_9_0 },
	1,
	4,
	mercury_data_profiling_builtin__functor_number_map_call_site_nums_9_0
};

const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_proc_dynamic_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__proc_dynamic_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__proc_dynamic_0_0)),
	"profiling_builtin",
	"proc_dynamic",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_profiling_builtin__type_ctor_info_proc_layout_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___profiling_builtin__proc_layout_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___profiling_builtin__proc_layout_0_0)),
	"profiling_builtin",
	"proc_layout",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};




MR_BEGIN_MODULE(profiling_builtin_module0)
	MR_init_entry1(profiling_builtin__prepare_for_normal_call_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__prepare_for_normal_call_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_normal_call'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__prepare_for_normal_call_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	CSN;
#define	MR_PROC_LABEL	mercury__profiling_builtin__prepare_for_normal_call_1_0
	CSN = MR_r1;
{
#line 309 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynamic  *child_csd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_normal_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    child_csd = pd->MR_pd_call_site_ptr_ptrs[CSN];

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (child_csd == NULL) {
        MR_deep_prof_prep_normal_new++;
    } else {
        MR_deep_prof_prep_normal_old++;
    }
  #endif

    if (child_csd == NULL) {
        MR_new_call_site_dynamic(child_csd);
        pd->MR_pd_call_site_ptr_ptrs[CSN] = child_csd;
    }

    MR_next_call_site_dynamic = child_csd;
    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_normal_call: deep profiling not enabled");
#endif
};}
#line 811 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module1)
	MR_init_entry1(profiling_builtin__prepare_for_special_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__prepare_for_special_call_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_special_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__prepare_for_special_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	CSN;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__profiling_builtin__prepare_for_special_call_2_0
	CSN = MR_r1;
	TypeInfo = MR_r2;
{
#line 354 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynList  *csdlist;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif
    MR_TypeCtorInfo     type_ctor_info;
    MR_TypeInfo         type_info;
    void                *void_key;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_special_call");
        printf("call site number: %d\n", CSN);
        type_info = (MR_TypeInfo) TypeInfo;
        type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);
        printf("type constructor: %s:%s/%d\n",
            type_ctor_info->MR_type_ctor_module_name,
            type_ctor_info->MR_type_ctor_name,
            type_ctor_info->MR_type_ctor_arity);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    type_info = (MR_TypeInfo) TypeInfo;
    type_ctor_info = MR_TYPEINFO_GET_TYPE_CTOR_INFO(type_info);

    void_key = (void *) type_ctor_info;
    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_special_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_special_old++;
    } else {
        MR_deep_prof_prep_special_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "prepare_for_special_call: deep profiling not enabled");
#endif
};}
#line 906 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module2)
	MR_init_entry1(profiling_builtin__prepare_for_ho_call_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__prepare_for_ho_call_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_ho_call'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__prepare_for_ho_call_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	CSN;
	MR_Word	Closure;
#define	MR_PROC_LABEL	mercury__profiling_builtin__prepare_for_ho_call_2_0
	CSN = MR_r1;
	Closure = MR_r2;
{
#line 421 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_Closure          *closure;
    MR_CallSiteDynList  *csdlist;
    void                *void_key;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_ho_call");
        printf("call site number: %d\n", CSN);
        closure = (MR_Closure *) Closure;
        printf("closure: layout %p, code %p\n",
            (void *) closure->MR_closure_layout,
            (void *) closure->MR_closure_code);
    }
  #endif

    closure = (MR_Closure *) Closure;
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

  #ifdef MR_DEEP_PROFILING_KEY_USES_ID
    void_key = (void *) (closure->MR_closure_layout);
  #else
    void_key = (void *) (closure->MR_closure_code);
  #endif

    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_closure_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_ho_old++;
    } else {
        MR_deep_prof_prep_ho_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_ho_call: deep profiling not enabled");
#endif
};}
#line 1000 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module3)
	MR_init_entry1(profiling_builtin__prepare_for_method_call_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__prepare_for_method_call_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_method_call'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__prepare_for_method_call_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	CSN;
	MR_Word	TypeClassInfo;
	MR_Integer	MethodNum;
#define	MR_PROC_LABEL	mercury__profiling_builtin__prepare_for_method_call_3_0
	CSN = MR_r1;
	TypeClassInfo = MR_r2;
	MethodNum = MR_r3;
{
#line 487 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;
    MR_CallSiteDynList  *csdlist;
    void                *void_key;
  #ifdef MR_DEEP_PROFILING_MOVE_TO_FRONT_LISTS
    MR_CallSiteDynList  *prev = NULL;
  #endif

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_method_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    void_key = (void *)
        MR_typeclass_info_class_method(TypeClassInfo, MethodNum);
    MR_search_csdlist(csdlist, prev, pd, CSN, void_key);
    MR_maybe_deep_profile_update_method_history();

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (csdlist != NULL) {
        MR_deep_prof_prep_method_old++;
    } else {
        MR_deep_prof_prep_method_new++;
    }
  #endif

    if (csdlist != NULL) {
        MR_next_call_site_dynamic = csdlist->MR_csdlist_call_site;
    } else {
        MR_CallSiteDynamic  *newcsd;

        MR_new_call_site_dynamic(newcsd);
        MR_make_and_link_csdlist(csdlist, newcsd, pd, CSN, void_key);
        MR_next_call_site_dynamic = newcsd;
    }

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_method_call: deep profiling not enabled");
#endif
};}
#line 1086 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module4)
	MR_init_entry1(profiling_builtin__prepare_for_callback_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__prepare_for_callback_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_callback'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__prepare_for_callback_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	CSN;
#define	MR_PROC_LABEL	mercury__profiling_builtin__prepare_for_callback_1_0
	CSN = MR_r1;
{
#line 543 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_callback");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    MR_current_callback_site = (MR_CallSiteDynList **)
        &(pd->MR_pd_call_site_ptr_ptrs[CSN]);
    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_callback: deep profiling not enabled");
#endif
};}
#line 1142 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module5)
	MR_init_entry1(profiling_builtin__prepare_for_tail_call_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__prepare_for_tail_call_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prepare_for_tail_call'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__prepare_for_tail_call_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	CSN;
#define	MR_PROC_LABEL	mercury__profiling_builtin__prepare_for_tail_call_1_0
	CSN = MR_r1;
{
#line 577 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
    MR_CallSiteDynamic  *child_csd;
    MR_CallSiteDynamic  *csd;
    MR_ProcDynamic      *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "prepare_for_tail_call");
        printf("call site number: %d\n", CSN);
    }
  #endif

    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);

    child_csd = pd->MR_pd_call_site_ptr_ptrs[CSN];

  #ifdef MR_DEEP_PROFILING_STATISTICS
    if (child_csd == NULL) {
        MR_deep_prof_prep_tail_new++;
    } else {
        MR_deep_prof_prep_tail_old++;
    }
  #endif
    if (child_csd == NULL) {
        MR_new_call_site_dynamic(child_csd);
        child_csd->MR_csd_callee_ptr = pd;
        pd->MR_pd_call_site_ptr_ptrs[CSN] = child_csd;
    }

    child_csd->MR_csd_depth_count++;
    MR_current_call_site_dynamic = child_csd;

    MR_leave_instrumentation();
#else
    MR_fatal_error("prepare_for_tail_call: deep profiling not enabled");
#endif
};}
#line 1215 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module6)
	MR_init_entry1(profiling_builtin__save_and_zero_activation_info_ac_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_and_zero_activation_info_ac_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_and_zero_activation_info_ac'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_and_zero_activation_info_ac_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Count;
	MR_ProcDynamic *	Ptr;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_and_zero_activation_info_ac_2_0
{
#line 624 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    Count = ps->MR_ps_activation_count;
    ps->MR_ps_activation_count = 0;
    Ptr = ps->MR_ps_outermost_activation_ptr;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("save_and_zero_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("save_and_zero_activation_info_ac: deep profiling not enabled");
#endif
};}
#line 1275 "profiling_builtin.c"
	MR_r1 = Count;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr, MR_r2);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module7)
	MR_init_entry1(profiling_builtin__save_and_zero_activation_info_sr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_and_zero_activation_info_sr_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_and_zero_activation_info_sr'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_and_zero_activation_info_sr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcDynamic *	Ptr;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_and_zero_activation_info_sr_1_0
{
#line 658 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    Ptr = ps->MR_ps_outermost_activation_ptr;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("save_and_zero_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("save_and_zero_activation_info_sr: deep profiling not enabled");
#endif
};}
#line 1334 "profiling_builtin.c"
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ProcDynamic *, Ptr, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module8)
	MR_init_entry1(profiling_builtin__rezero_activation_info_ac_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__rezero_activation_info_ac_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rezero_activation_info_ac'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__rezero_activation_info_ac_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__profiling_builtin__rezero_activation_info_ac_0_0
{
#line 690 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_activation_count = 0;
    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("rezero_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("rezero_activation_info_ac: deep profiling not enabled");
#endif
};}
#line 1391 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module9)
	MR_init_entry1(profiling_builtin__rezero_activation_info_sr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__rezero_activation_info_sr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'rezero_activation_info_sr'/0 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__rezero_activation_info_sr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__profiling_builtin__rezero_activation_info_sr_0_0
{
#line 722 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_outermost_activation_ptr = NULL;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("rezero_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("rezero_activation_info_sr: deep profiling not enabled");
#endif
};}
#line 1446 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module10)
	MR_init_entry1(profiling_builtin__reset_activation_info_ac_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__reset_activation_info_ac_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_activation_info_ac'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__reset_activation_info_ac_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Count;
	MR_ProcDynamic *	Ptr;
#define	MR_PROC_LABEL	mercury__profiling_builtin__reset_activation_info_ac_2_0
	Count = MR_r1;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcDynamic *, MR_r2, Ptr);
{
#line 753 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifdef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_activation_count = Count;
    ps->MR_ps_outermost_activation_ptr = Ptr;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("reset_activation_info_ac called when not using activation counts!");
  #endif
#else
    MR_fatal_error("reset_activation_info_ac: deep profiling not enabled");
#endif
};}
#line 1506 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module11)
	MR_init_entry1(profiling_builtin__reset_activation_info_sr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__reset_activation_info_sr_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'reset_activation_info_sr'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__reset_activation_info_sr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcDynamic *	Ptr;
#define	MR_PROC_LABEL	mercury__profiling_builtin__reset_activation_info_sr_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcDynamic *, MR_r1, Ptr);
{
#line 785 "profiling_builtin.m"
{
#ifdef MR_DEEP_PROFILING
  #ifndef MR_USE_ACTIVATION_COUNTS
    MR_CallSiteDynamic      *csd;
    MR_ProcDynamic          *pd;
    const MR_ProcLayout     *pl;
    MR_ProcStatic           *ps;

    MR_enter_instrumentation();
    csd = MR_current_call_site_dynamic;
    MR_deep_assert(csd, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;
    MR_deep_assert(csd, NULL, NULL, pd != NULL);
    pl = pd->MR_pd_proc_layout;
    MR_deep_assert(csd, pl, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(csd, pl, ps, ps != NULL);

    ps->MR_ps_outermost_activation_ptr = Ptr;
    MR_leave_instrumentation();
  #else
    MR_fatal_error("reset_activation_info_sr called when using activation counts!");
  #endif
#else
    MR_fatal_error("reset_activation_info_sr: deep profiling not enabled");
#endif
};}
#line 1563 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module12)
	MR_init_entry1(profiling_builtin__increment_static_coverage_point_count_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__increment_static_coverage_point_count_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'increment_static_coverage_point_count'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__increment_static_coverage_point_count_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_ProcLayout *	ProcLayout;
	MR_Integer	CPIndex;
#define	MR_PROC_LABEL	mercury__profiling_builtin__increment_static_coverage_point_count_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ProcLayout *, MR_r1, ProcLayout);
	CPIndex = MR_r2;
{
#line 822 "profiling_builtin.m"

#ifdef MR_DEEP_PROFILING_COVERAGE_STATIC
    const MR_ProcLayout *pl;
    MR_ProcStatic       *ps;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "increment_coverage_point_count");
        printf(", ProcLayout: 0x%x, CPIndex: %d\n", ProcLayout, CPIndex);
    }
  #endif

    pl = (const MR_ProcLayout *) ProcLayout;

    MR_deep_assert(NULL, NULL, NULL, pl != NULL);
    ps = pl->MR_sle_proc_static;
    MR_deep_assert(NULL, pl, NULL, ps != NULL);

    MR_deep_assert(NULL, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points);
    MR_deep_assert(NULL, pl, ps, ps->MR_ps_coverage_points != NULL);

    ps->MR_ps_coverage_points[CPIndex]++;

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "increment_static_coverage_point_count:  "
            "static coverage profiling not enabled");
#endif /* MR_DEEP_PROFILING_COVERAGE_STATIC */
;}
#line 1627 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module13)
	MR_init_entry1(profiling_builtin__increment_dynamic_coverage_point_count_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__increment_dynamic_coverage_point_count_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'increment_dynamic_coverage_point_count'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__increment_dynamic_coverage_point_count_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	CPIndex;
#define	MR_PROC_LABEL	mercury__profiling_builtin__increment_dynamic_coverage_point_count_1_0
	CPIndex = MR_r1;
{
#line 860 "profiling_builtin.m"

#ifdef MR_DEEP_PROFILING_COVERAGE_DYNAMIC
    const MR_CallSiteDynamic *csd;
    const MR_ProcDynamic *pd;

    MR_enter_instrumentation();

  #ifdef MR_DEEP_PROFILING_LOWLEVEL_DEBUG
    if (MR_calldebug && MR_lld_print_enabled) {
        MR_print_deep_prof_vars(stdout, "increment_coverage_point_count");
        printf(", CallSiteDynamic: 0x%x, CPIndex: %d\n", 
            MR_current_call_site_dynamic, CPIndex);
    }
  #endif

    csd = MR_current_call_site_dynamic;

    MR_deep_assert(NULL, NULL, NULL, csd != NULL);
    pd = csd->MR_csd_callee_ptr;

    MR_deep_assert(csd, NULL, NULL, pd != NULL);

#ifdef MR_DEEP_CHECKS
    /*
    ** Check that CPIndex is within bounds.
    */
    {
        const MR_ProcLayout *pl;
        const MR_ProcStatic *ps;

        pl = pd->MR_pd_proc_layout;
        MR_deep_assert(csd, NULL, NULL, pl != NULL);
        ps = pl->MR_sle_proc_static;
        MR_deep_assert(csd, pl, NULL, ps != NULL);
        MR_deep_assert(csd, pl, ps, CPIndex >= ps->MR_ps_num_coverage_points);
    }
#endif

    MR_deep_assert(csd, NULL, NULL, pd->MR_pd_coverage_points != NULL);

    pd->MR_pd_coverage_points[CPIndex]++;

    MR_leave_instrumentation();
#else
    MR_fatal_error(
        "increment_dynamic_coverage_point_count:  "
            "dynamic deep profiling not enabled");
#endif /* MR_DEEP_PROFILING_COVERAGE_DYNAMIC */
;}
#line 1706 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module14)
	MR_init_entry1(profiling_builtin__save_recursion_depth_1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_1_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Integer	CSN;
	MR_Integer	OuterCount1;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSN = MR_r2;
{
#line 918 "profiling_builtin.m"
{
/* shut up warning: CSD, CSN, OuterCount1 */
#define MR_PROCNAME     "save_recursion_depth_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1, CSN);                 \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 1749 "profiling_builtin.c"
	MR_r1 = OuterCount1;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module15)
	MR_init_entry1(profiling_builtin__save_recursion_depth_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 933 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2 */
#define MR_PROCNAME     "save_recursion_depth_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 1797 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module16)
	MR_init_entry1(profiling_builtin__save_recursion_depth_3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_3_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_3_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_3_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 951 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
#define MR_PROCNAME     "save_recursion_depth_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 1849 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
	MR_r3 = OuterCount3;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module17)
	MR_init_entry1(profiling_builtin__save_recursion_depth_4_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_4_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_4'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_4_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_4_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 972 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4 */
#define MR_PROCNAME     "save_recursion_depth_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 1906 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
	MR_r3 = OuterCount3;
	MR_r4 = OuterCount4;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module18)
	MR_init_entry1(profiling_builtin__save_recursion_depth_5_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_5_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_5'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_5_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_5_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 996 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5 */
#define MR_PROCNAME     "save_recursion_depth_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 1967 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
	MR_r3 = OuterCount3;
	MR_r4 = OuterCount4;
	MR_r5 = OuterCount5;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module19)
	MR_init_entry1(profiling_builtin__save_recursion_depth_6_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_6_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_6'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_6_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_6_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 1022 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6 */
#define MR_PROCNAME     "save_recursion_depth_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2032 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
	MR_r3 = OuterCount3;
	MR_r4 = OuterCount4;
	MR_r5 = OuterCount5;
	MR_r6 = OuterCount6;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module20)
	MR_init_entry1(profiling_builtin__save_recursion_depth_7_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_7_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_7'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_7_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_7_9_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 1051 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
#define MR_PROCNAME     "save_recursion_depth_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2101 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
	MR_r3 = OuterCount3;
	MR_r4 = OuterCount4;
	MR_r5 = OuterCount5;
	MR_r6 = OuterCount6;
	MR_r7 = OuterCount7;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module21)
	MR_init_entry1(profiling_builtin__save_recursion_depth_8_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_8_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_8'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_8_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
	MR_Integer	OuterCount8;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_8_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 1082 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8 */
#define MR_PROCNAME     "save_recursion_depth_8"
#define MR_REC_DEPTH_BODY   {                                       \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_SAVE_DEPTH_ACTION(OuterCount8,                       \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2175 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
	MR_r3 = OuterCount3;
	MR_r4 = OuterCount4;
	MR_r5 = OuterCount5;
	MR_r6 = OuterCount6;
	MR_r7 = OuterCount7;
	MR_r8 = OuterCount8;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module22)
	MR_init_entry1(profiling_builtin__save_recursion_depth_9_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__save_recursion_depth_9_11_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'save_recursion_depth_9'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__save_recursion_depth_9_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
	MR_Integer	OuterCount8;
	MR_Integer	OuterCount9;
#define	MR_PROC_LABEL	mercury__profiling_builtin__save_recursion_depth_9_11_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
{
#line 1116 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8, OuterCount9 */
#define MR_PROCNAME     "save_recursion_depth_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_SAVE_DEPTH_ACTION(OuterCount1,                       \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_SAVE_DEPTH_ACTION(OuterCount2,                       \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_SAVE_DEPTH_ACTION(OuterCount3,                       \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_SAVE_DEPTH_ACTION(OuterCount4,                       \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_SAVE_DEPTH_ACTION(OuterCount5,                       \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_SAVE_DEPTH_ACTION(OuterCount6,                       \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_SAVE_DEPTH_ACTION(OuterCount7,                       \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_SAVE_DEPTH_ACTION(OuterCount8,                       \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_SAVE_DEPTH_ACTION(OuterCount9,                       \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2253 "profiling_builtin.c"
	MR_r1 = OuterCount1;
	MR_r2 = OuterCount2;
	MR_r3 = OuterCount3;
	MR_r4 = OuterCount4;
	MR_r5 = OuterCount5;
	MR_r6 = OuterCount6;
	MR_r7 = OuterCount7;
	MR_r8 = OuterCount8;
	MR_r9 = OuterCount9;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module23)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_1_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Integer	CSN;
	MR_Integer	OuterCount1;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSN = MR_r2;
	OuterCount1 = MR_r3;
{
#line 1154 "profiling_builtin.m"
{
/* shut up warning: CSD, CSN, OuterCount1 */
#define MR_PROCNAME     "restore_recursion_depth_exit_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1, CSN);                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2306 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module24)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
{
#line 1169 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2 */
#define MR_PROCNAME     "restore_recursion_depth_exit_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2355 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module25)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_3_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_3_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_3_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
{
#line 1187 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
#define MR_PROCNAME     "restore_recursion_depth_exit_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2408 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module26)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_4_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_4_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_4'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_4_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_4_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
{
#line 1208 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4 */
#define MR_PROCNAME     "restore_recursion_depth_exit_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2466 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module27)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_5_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_5_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_5'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_5_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_5_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
{
#line 1232 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5 */
#define MR_PROCNAME     "restore_recursion_depth_exit_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2528 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module28)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_6_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_6_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_6'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_6_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_6_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
{
#line 1258 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6 */
#define MR_PROCNAME     "restore_recursion_depth_exit_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2594 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module29)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_7_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_7_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_7'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_7_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_7_9_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
	OuterCount7 = MR_r9;
{
#line 1287 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
#define MR_PROCNAME     "restore_recursion_depth_exit_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2664 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module30)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_8_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_8_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_8'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_8_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
	MR_Integer	OuterCount8;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_8_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
	OuterCount7 = MR_r9;
	OuterCount8 = MR_r10;
{
#line 1318 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8 */
#define MR_PROCNAME     "restore_recursion_depth_exit_8"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2739 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module31)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_exit_9_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_exit_9_11_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_exit_9'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_exit_9_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
	MR_Integer	OuterCount8;
	MR_Integer	OuterCount9;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_exit_9_11_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
	OuterCount7 = MR_r9;
	OuterCount8 = MR_r10;
	OuterCount9 = MR_r11;
{
#line 1352 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8, OuterCount9 */
#define MR_PROCNAME     "restore_recursion_depth_exit_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_EXIT(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_RESTORE_DEPTH_EXIT(OuterCount9,                      \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2818 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module32)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_1_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Integer	CSN;
	MR_Integer	OuterCount1;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSN = MR_r2;
	OuterCount1 = MR_r3;
{
#line 1390 "profiling_builtin.m"
{
/* shut up warning: CSD, CSN, OuterCount1 */
#define MR_PROCNAME     "restore_recursion_depth_fail_1"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1, CSN);                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2862 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module33)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_2_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_2_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_2_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_2_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
{
#line 1405 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2 */
#define MR_PROCNAME     "restore_recursion_depth_fail_2"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2911 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module34)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_3_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_3_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_3'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_3_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_3_5_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
{
#line 1423 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
#define MR_PROCNAME     "restore_recursion_depth_fail_3"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 2964 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module35)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_4_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_4_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_4'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_4_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_4_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
{
#line 1444 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4 */
#define MR_PROCNAME     "restore_recursion_depth_fail_4"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 3022 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module36)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_5_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_5_7_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_5'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_5_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_5_7_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
{
#line 1468 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5 */
#define MR_PROCNAME     "restore_recursion_depth_fail_5"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 3084 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module37)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_6_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_6_8_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_6'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_6_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_6_8_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
{
#line 1494 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6 */
#define MR_PROCNAME     "restore_recursion_depth_fail_6"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 3150 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module38)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_7_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_7_9_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_7'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_7_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_7_9_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
	OuterCount7 = MR_r9;
{
#line 1523 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
#define MR_PROCNAME     "restore_recursion_depth_fail_7"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 3220 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module39)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_8_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_8_10_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_8'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_8_10_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
	MR_Integer	OuterCount8;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_8_10_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
	OuterCount7 = MR_r9;
	OuterCount8 = MR_r10;
{
#line 1554 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8 */
#define MR_PROCNAME     "restore_recursion_depth_fail_8"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 3295 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module40)
	MR_init_entry1(profiling_builtin__restore_recursion_depth_fail_9_11_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__profiling_builtin__restore_recursion_depth_fail_9_11_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'restore_recursion_depth_fail_9'/11 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__profiling_builtin__restore_recursion_depth_fail_9_11_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_CallSiteDynamic *	CSD;
	MR_Word	CSNsVector;
	MR_Integer	OuterCount1;
	MR_Integer	OuterCount2;
	MR_Integer	OuterCount3;
	MR_Integer	OuterCount4;
	MR_Integer	OuterCount5;
	MR_Integer	OuterCount6;
	MR_Integer	OuterCount7;
	MR_Integer	OuterCount8;
	MR_Integer	OuterCount9;
#define	MR_PROC_LABEL	mercury__profiling_builtin__restore_recursion_depth_fail_9_11_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_CallSiteDynamic *, MR_r1, CSD);
	CSNsVector = MR_r2;
	OuterCount1 = MR_r3;
	OuterCount2 = MR_r4;
	OuterCount3 = MR_r5;
	OuterCount4 = MR_r6;
	OuterCount5 = MR_r7;
	OuterCount6 = MR_r8;
	OuterCount7 = MR_r9;
	OuterCount8 = MR_r10;
	OuterCount9 = MR_r11;
{
#line 1588 "profiling_builtin.m"
{
/* shut up warning: CSD, CSNsVector, OuterCount1, OuterCount2, OuterCount3 */
/* shut up warning: OuterCount4, OuterCount5, OuterCount6, OuterCount7 */
/* shut up warning: OuterCount8, OuterCount9 */
#define MR_PROCNAME     "restore_recursion_depth_fail_9"
#define MR_REC_DEPTH_BODY   {                                           \
                MR_RESTORE_DEPTH_FAIL(OuterCount1,                      \
                    MR_csn_vector_field(CSNsVector, 0));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount2,                      \
                    MR_csn_vector_field(CSNsVector, 1));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount3,                      \
                    MR_csn_vector_field(CSNsVector, 2));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount4,                      \
                    MR_csn_vector_field(CSNsVector, 3));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount5,                      \
                    MR_csn_vector_field(CSNsVector, 4));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount6,                      \
                    MR_csn_vector_field(CSNsVector, 5));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount7,                      \
                    MR_csn_vector_field(CSNsVector, 6));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount8,                      \
                    MR_csn_vector_field(CSNsVector, 7));                \
                MR_RESTORE_DEPTH_FAIL(OuterCount9,                      \
                    MR_csn_vector_field(CSNsVector, 8));                \
                }
#include "mercury_deep_rec_depth_body.h"
#undef MR_PROCNAME
#undef MR_REC_DEPTH_BODY
};}
#line 3374 "profiling_builtin.c"
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(profiling_builtin_module41)
	MR_init_entry1(__Unify___profiling_builtin__call_site_dynamic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_dynamic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___builtin__c_pointer_0_0);

MR_BEGIN_MODULE(profiling_builtin_module42)
	MR_init_entry1(__Compare___profiling_builtin__call_site_dynamic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_dynamic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module43)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_2_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_2_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_2_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_2_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_2_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_2_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_2_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_2_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module44)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_2_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_2_0_0);
	MR_init_label7(__Compare___profiling_builtin__call_site_nums_2_0_0,6,7,9,12,23,13,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_2_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i23);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_2_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_2_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_2_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i17);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_2_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_2_0_0_i13);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_2_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_2_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_2_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module45)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_3_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_3_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_3_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_3_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_3_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_3_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_3_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_3_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_3_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module46)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_3_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_3_0_0);
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_3_0_0,6,7,9,14,15,17,20,35,21,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_3_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i35);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i26);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(3))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(3))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i26);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(4);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_3_0_0_i21);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(4);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_3_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(4);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module47)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_4_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_4_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_4_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_4_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_4_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_4_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_4_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_4_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_4_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_4_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module48)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_4_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_4_0_0);
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_4_0_0,6,7,9,14,15,17,22,23,25,28)
	MR_init_label3(__Compare___profiling_builtin__call_site_nums_4_0_0,47,29,35)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_4_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i47);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i35);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(4))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(4))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i35);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i35);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_4_0_0_i29);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(6);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_4_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(6);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module49)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_5_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_5_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_5_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_5_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_5_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_5_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_5_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_5_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_5_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_5_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_5_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module50)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_5_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_5_0_0);
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_5_0_0,6,7,9,14,15,17,22,23,25,30)
	MR_init_label6(__Compare___profiling_builtin__call_site_nums_5_0_0,31,33,36,59,37,44)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_5_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i59);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(8) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i44);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(5))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(5))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i44);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i44);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(7))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i44);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(8);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_5_0_0_i37);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(8);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_5_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module51)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_6_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_6_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_6_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_6_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_6_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_6_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_6_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_6_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_6_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_6_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_6_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_6_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module52)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_6_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_6_0_0);
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_6_0_0,6,7,9,14,15,17,22,23,25,30)
	MR_init_label9(__Compare___profiling_builtin__call_site_nums_6_0_0,31,33,38,39,41,44,71,45,53)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_6_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i71);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(10) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i53);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(6))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(6))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i53);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(7))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i53);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i53);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i53);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i44);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(10);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_6_0_0_i45);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(10);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_6_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module53)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_7_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_7_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_7_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_7_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_7_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_7_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_7_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_7_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_7_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_7_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_7_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_7_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_7_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module54)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_7_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_7_0_0);
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_7_0_0,6,7,9,14,15,17,22,23,25,30)
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_7_0_0,31,33,38,39,41,46,47,49,52,83)
	MR_init_label2(__Compare___profiling_builtin__call_site_nums_7_0_0,53,62)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_7_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i83);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(12) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i62);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(7))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(7))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i62);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i62);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i62);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i62);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i49);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i49);
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i62);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(12);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_7_0_0_i53);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(12);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_7_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(12);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module55)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_8_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_8_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_8_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_8_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_8_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module56)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_8_0_0);
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_8_0_0,6,7,9,14,15,17,22,23,25,30)
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_8_0_0,31,33,38,39,41,46,47,49,54,55)
	MR_init_label5(__Compare___profiling_builtin__call_site_nums_8_0_0,57,60,95,61,71)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i95);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(14) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i71);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(8))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i71);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i71);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i71);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i71);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i49);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i49);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i71);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(13))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i57);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(13))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i57);
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i71);
	}
	if (((MR_Integer) MR_sv(7) >= (MR_Integer) MR_sv(14))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i60);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(14);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_sv(14))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_8_0_0_i61);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(14);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_8_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(14);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module57)
	MR_init_entry1(__Unify___profiling_builtin__call_site_nums_9_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__call_site_nums_9_0_0);
	MR_init_label2(__Unify___profiling_builtin__call_site_nums_9_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__call_site_nums_9_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i4);
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
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 4);
	MR_r2 = MR_tfield(0, MR_tempr2, 4);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 5);
	MR_r2 = MR_tfield(0, MR_tempr2, 5);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 6);
	MR_r2 = MR_tfield(0, MR_tempr2, 6);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 7);
	MR_r2 = MR_tfield(0, MR_tempr2, 7);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___profiling_builtin__call_site_nums_9_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 8);
	MR_r2 = MR_tfield(0, MR_tempr2, 8);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___profiling_builtin__call_site_nums_9_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___profiling_builtin__call_site_nums_9_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module58)
	MR_init_entry1(__Compare___profiling_builtin__call_site_nums_9_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__call_site_nums_9_0_0);
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_9_0_0,6,7,9,14,15,17,22,23,25,30)
	MR_init_label10(__Compare___profiling_builtin__call_site_nums_9_0_0,31,33,38,39,41,46,47,49,54,55)
	MR_init_label8(__Compare___profiling_builtin__call_site_nums_9_0_0,57,62,63,65,68,107,69,80)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__call_site_nums_9_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(16);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i107);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(16) = MR_tfield(0, MR_tempr2, 8);
	MR_sv(15) = MR_tfield(0, MR_tempr2, 7);
	MR_sv(14) = MR_tfield(0, MR_tempr2, 6);
	MR_sv(13) = MR_tfield(0, MR_tempr2, 5);
	MR_sv(12) = MR_tfield(0, MR_tempr2, 4);
	MR_sv(11) = MR_tfield(0, MR_tempr2, 3);
	MR_sv(10) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(9) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 8);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 7);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 6);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 5);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr1, 2);
	MR_r3 = MR_tfield(0, MR_tempr1, 1);
	MR_r4 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tfield(0, MR_tempr1, 0);
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i6);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i9);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r5 != MR_r4)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i7);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i9);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r3 >= (MR_Integer) MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 != MR_sv(9))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i15);
	}
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i17);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	MR_r2 = MR_sv(2);
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_sv(10))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i23);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i25);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_sv(11))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(3) != MR_sv(11))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i31);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i33);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	if (((MR_Integer) MR_sv(4) >= (MR_Integer) MR_sv(12))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i38);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(4) != MR_sv(12))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i39);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i41);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	if (((MR_Integer) MR_sv(5) >= (MR_Integer) MR_sv(13))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i49);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(5) != MR_sv(13))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i47);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i49);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	if (((MR_Integer) MR_sv(6) >= (MR_Integer) MR_sv(14))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i57);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(6) != MR_sv(14))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i55);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i57);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	if (((MR_Integer) MR_sv(7) >= (MR_Integer) MR_sv(15))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i62);
	}
	MR_r1 = (MR_Integer) 1;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i65);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(7) != MR_sv(15))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i63);
	}
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i65);
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i80);
	}
	if (((MR_Integer) MR_sv(8) >= (MR_Integer) MR_sv(16))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i68);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp(16);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_sv(8) != MR_sv(16))) {
		MR_GOTO_LAB(__Compare___profiling_builtin__call_site_nums_9_0_0_i69);
	}
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(16);
	MR_proceed();
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
MR_def_label(__Compare___profiling_builtin__call_site_nums_9_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(16);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module59)
	MR_init_entry1(__Unify___profiling_builtin__proc_dynamic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__proc_dynamic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__proc_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module60)
	MR_init_entry1(__Compare___profiling_builtin__proc_dynamic_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__proc_dynamic_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__proc_dynamic_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module61)
	MR_init_entry1(__Unify___profiling_builtin__proc_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___profiling_builtin__proc_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___profiling_builtin__proc_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Unify___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module62)
	MR_init_entry1(__Compare___profiling_builtin__proc_layout_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___profiling_builtin__proc_layout_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___profiling_builtin__proc_layout_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(__Compare___builtin__c_pointer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(profiling_builtin_module63)
	MR_init_entry1(fn__f_112_114_111_102_105_108_105_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_114_111_102_105_108_105_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_112_114_111_102_105_108_105_110_103_95_98_117_105_108_116_105_110_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__profiling_builtin_maybe_bunch_0(void)
{
	profiling_builtin_module0();
	profiling_builtin_module1();
	profiling_builtin_module2();
	profiling_builtin_module3();
	profiling_builtin_module4();
	profiling_builtin_module5();
	profiling_builtin_module6();
	profiling_builtin_module7();
	profiling_builtin_module8();
	profiling_builtin_module9();
	profiling_builtin_module10();
	profiling_builtin_module11();
	profiling_builtin_module12();
	profiling_builtin_module13();
	profiling_builtin_module14();
	profiling_builtin_module15();
	profiling_builtin_module16();
	profiling_builtin_module17();
	profiling_builtin_module18();
	profiling_builtin_module19();
	profiling_builtin_module20();
	profiling_builtin_module21();
	profiling_builtin_module22();
	profiling_builtin_module23();
	profiling_builtin_module24();
	profiling_builtin_module25();
	profiling_builtin_module26();
	profiling_builtin_module27();
	profiling_builtin_module28();
	profiling_builtin_module29();
	profiling_builtin_module30();
	profiling_builtin_module31();
	profiling_builtin_module32();
	profiling_builtin_module33();
	profiling_builtin_module34();
	profiling_builtin_module35();
	profiling_builtin_module36();
	profiling_builtin_module37();
	profiling_builtin_module38();
	profiling_builtin_module39();
}

static void mercury__profiling_builtin_maybe_bunch_1(void)
{
	profiling_builtin_module40();
	profiling_builtin_module41();
	profiling_builtin_module42();
	profiling_builtin_module43();
	profiling_builtin_module44();
	profiling_builtin_module45();
	profiling_builtin_module46();
	profiling_builtin_module47();
	profiling_builtin_module48();
	profiling_builtin_module49();
	profiling_builtin_module50();
	profiling_builtin_module51();
	profiling_builtin_module52();
	profiling_builtin_module53();
	profiling_builtin_module54();
	profiling_builtin_module55();
	profiling_builtin_module56();
	profiling_builtin_module57();
	profiling_builtin_module58();
	profiling_builtin_module59();
	profiling_builtin_module60();
	profiling_builtin_module61();
	profiling_builtin_module62();
	profiling_builtin_module63();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__profiling_builtin__init(void);
void mercury__profiling_builtin__init_type_tables(void);
void mercury__profiling_builtin__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__profiling_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__profiling_builtin__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__profiling_builtin__init_threadscope_string_table(void);
#endif

void mercury__profiling_builtin__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__profiling_builtin_maybe_bunch_0();
	mercury__profiling_builtin_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_dynamic_0,
		profiling_builtin__call_site_dynamic_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_2_0,
		profiling_builtin__call_site_nums_2_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_3_0,
		profiling_builtin__call_site_nums_3_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_4_0,
		profiling_builtin__call_site_nums_4_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_5_0,
		profiling_builtin__call_site_nums_5_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_6_0,
		profiling_builtin__call_site_nums_6_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_7_0,
		profiling_builtin__call_site_nums_7_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_8_0,
		profiling_builtin__call_site_nums_8_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_call_site_nums_9_0,
		profiling_builtin__call_site_nums_9_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_proc_dynamic_0,
		profiling_builtin__proc_dynamic_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_profiling_builtin__type_ctor_info_proc_layout_0,
		profiling_builtin__proc_layout_0_0);
	mercury__profiling_builtin__init_debugger();
}

void mercury__profiling_builtin__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_dynamic_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_2_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_3_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_4_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_5_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_6_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_7_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_8_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_call_site_nums_9_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_proc_dynamic_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_profiling_builtin__type_ctor_info_proc_layout_0);
	}
}


void mercury__profiling_builtin__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__profiling_builtin__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__profiling_builtin);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__profiling_builtin__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__profiling_builtin__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
