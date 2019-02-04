/*
** Automatically generated from `ml_foreign_proc_gen.m'
** by the Mercury compiler,
** version rotd-2011-08-13, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ml_foreign_proc_gen__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 140 "../library/io.int2"
#include "io.mh"

#line 28 "ml_backend.ml_foreign_proc_gen.c"
#line 150 "../library/io.int2"
#include "string.mh"

#line 32 "ml_backend.ml_foreign_proc_gen.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 36 "ml_backend.ml_foreign_proc_gen.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 40 "ml_backend.ml_foreign_proc_gen.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "ml_backend.ml_foreign_proc_gen.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "ml_backend.ml_foreign_proc_gen.c"
#line 49 "ml_backend.ml_foreign_proc_gen.c"
#include "ml_backend.ml_foreign_proc_gen.mh"

#line 52 "ml_backend.ml_foreign_proc_gen.c"
#line 53 "ml_backend.ml_foreign_proc_gen.c"
#ifndef ML_BACKEND__ML_FOREIGN_PROC_GEN_DECL_GUARD
#define ML_BACKEND__ML_FOREIGN_PROC_GEN_DECL_GUARD

#line 57 "ml_backend.ml_foreign_proc_gen.c"
#line 58 "ml_backend.ml_foreign_proc_gen.c"

#endif
#line 61 "ml_backend.ml_foreign_proc_gen.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[8];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[9];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

struct mercury_type_10 {
	MR_Integer f1;
	MR_Integer f2;
	MR_Word * f3;
};
MR_STATIC_LINKAGE const struct mercury_type_10 mercury_common_10[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0,
	mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0;
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0, 2,3,4,5,6,7,8,10,11,41)
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0, 13,48,75,47,85,117,12,129,132,136)
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0, 2,3,4,5,7,6,9,10,12,13)
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0, 14,16,28,27,45,47,48,49,68,71)
MR_decl_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0, 77,80,88)
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0, 3,4,5,6,7,8,9,10,11,13)
MR_decl_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0, 14,16,18,20,22,24,25,32,34)
MR_decl_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0, 2,4,5,6,7,8,10,11,12,13)
MR_decl_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0, 15,21,25,19)
MR_decl_label3(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0, 14,3,5)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0, 81,8,10,11,13,80,16,18,19,21)
MR_decl_label6(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0, 22,3,23,84,2,1)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0, 2,3,9,10,7,12,13,14,15,16)
MR_decl_label4(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0, 17,18,19,5)
MR_decl_label4(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0, 2,3,4,5)
MR_decl_label9(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0, 2,3,4,8,9,10,14,16,5)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0, 2,4,6,34,8,5,10,11,12,13)
MR_decl_label8(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0, 3,17,20,22,24,19,27,29)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0, 78,4,5,6,8,9,7,13,16,18)
MR_decl_label2(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0, 20,11)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0, 51,4,9,12,13,14,15,16,17,6)
MR_decl_label1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0, 21)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0, 2,3,5,6,7,8,9,13,14,12)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0, 16,22,21,20,18,26,27,28,29,30)
MR_decl_label7(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0, 31,32,11,39,40,41,42)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0, 54,4,9,11,13,14,6,16,17,18)
MR_decl_label1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0, 19)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0, 2,7,9,10,11,12,13,16,17,15)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0, 25,14,26,27,28,29,32,34,35,36)
MR_decl_label7(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0, 37,31,44,45,48,49,4)
MR_decl_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0, 4,5)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0, 64,4,9,14,15,13,12,20,22,23)
MR_decl_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0, 6,28)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0, 83,4,9,11,13,14,15,17,18,19)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0, 20,26,27,48,25,23,35,6,38,39)
MR_decl_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0, 40,41)
MR_decl_label9(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0, 3,4,7,8,9,12,11,22,1)
MR_decl_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0, 3,4,6,5,10,11,13,12,17,16)
MR_decl_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0, 21,20)
MR_decl_label3(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0, 2,3,4)
MR_decl_label7(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0, 4,3,11,10,14,15,17)
MR_decl_label4(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0, 9,10,4,2)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0)
MR_def_extern_entry(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0)
MR_decl_static(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0)
MR_def_extern_entry(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0)
MR_decl_static(__Unify___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0)
MR_decl_static(__Compare___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0)
MR_decl_static(__Unify___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0)
MR_decl_static(__Compare___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__205__1_2_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_0)
MR_decl_static(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__379__1_2_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0)

static const struct mercury_type_0 mercury_common_0[2] =
{
{
0
},
{
7
},
};

static const struct mercury_type_1 mercury_common_1[3] =
{
{
0,
MR_TAG_COMMON(2,0,0)
},
{
1,
MR_tbmkword(0, 2)
},
{
1,
MR_tbmkword(0, 5)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_target_code_component_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_prog_var_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
static const struct mercury_type_2 mercury_common_2[23] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, target_code_component)
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
MR_TAG_COMMON(1,4,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,6),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,7),
MR_tbmkword(0, 0)
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
}
},
{
{
MR_TAG_COMMON(1,4,8),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,10),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,11),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,12),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,2,11),
MR_tbmkword(0, 0)
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
MR_CTOR1_ADDR(varset, varset),
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
MR_COMMON(2,13)
}
},
{
{
MR_TAG_COMMON(1,4,15),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,17),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,18),
MR_TAG_COMMON(1,2,18)
}
},
{
{
MR_TAG_COMMON(1,4,19),
MR_TAG_COMMON(1,2,3)
}
},
{
{
MR_TAG_COMMON(1,4,20),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,4,11),
MR_TAG_COMMON(1,2,18)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0_1,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(2,0),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info),
MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info)
}
},
};

static const struct mercury_type_4 mercury_common_4[21] =
{
{
MR_string_const("\");\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("#define MR_ALLOC_ID ", 20),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("#undef MR_ALLOC_ID\n", 19),
MR_tbmkword(0, 0)
},
{
MR_string_const("#define MR_PROC_LABEL ", 22),
MR_tbmkword(0, 0)
},
{
MR_string_const("", 0),
MR_tbmkword(0, 0)
},
{
MR_string_const(");\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const(";\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("{\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = false;\n", 10),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = SUCCESS_INDICATOR;\n", 22),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t}\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("SUCCESS_INDICATOR", 17),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t\t{\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("\n\t\t;}\n", 6),
MR_tbmkword(0, 0)
},
{
MR_string_const("#undef MR_PROC_LABEL\n", 21),
MR_tbmkword(0, 0)
},
{
MR_string_const("}\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const(" = MR_FALSE;\n", 13),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tMR_bool SUCCESS_INDICATOR;\n", 28),
MR_tbmkword(0, 0)
},
{
MR_string_const("\tif (SUCCESS_INDICATOR) {\n", 26),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_4;
static const struct mercury_type_5 mercury_common_5[4] =
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,7),
MR_COMMON(2,7)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,7),
MR_COMMON(2,7)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_COMMON(2,7),
MR_COMMON(2,7)
},
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg),
MR_COMMON(2,15)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
static const struct mercury_type_6 mercury_common_6[1] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_COMMON(2,13),
MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_module_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_3;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_2,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_COMMON(6,0),
MR_COMMON(2,14),
MR_CTOR0_ADDR(term, context),
MR_BOOL_CTOR_ADDR,
MR_COMMON(2,15),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_3,
(MR_Word *) (MR_Integer) 0
},
8,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_COMMON(6,0),
MR_COMMON(2,14),
MR_CTOR0_ADDR(term, context),
MR_BOOL_CTOR_ADDR,
MR_COMMON(2,15),
MR_CTOR0_ADDR(ml_backend__mlds, statement)
}
},
};

MR_decl_entry(fn__hlds__hlds_goal__foreign_arg_var_1_0);
static const struct mercury_type_8 mercury_common_8[1] =
{
{
MR_COMMON(5,3),
MR_ENTRY_AP(fn__hlds__hlds_goal__foreign_arg_var_1_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_5;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const struct mercury_type_9 mercury_common_9[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_5,
(MR_Word *) (MR_Integer) 0
},
9,
{
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_module_name),
MR_COMMON(6,0),
MR_COMMON(2,14),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_context),
MR_COMMON(2,16),
MR_COMMON(2,16),
MR_COMMON(2,15),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn)
}
},
};

static const struct mercury_type_10 mercury_common_10[1] =
{
{
6,
0,
MR_TAG_COMMON(1,2,18)
},
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0 = {
	"mutable_special_case",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1 = {
	"not_mutable_special_case",
	1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[] = {
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[] = {
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

const MR_Integer mercury_data_ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0)),
	"ml_backend.ml_foreign_proc_gen",
	"mutable_special_case",
	{ (void *)mercury_data_ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0 },
	{ (void *)mercury_data_ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0 },
	2,
	4,
	mercury_data_ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0 = {
	"kind_det",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1 = {
	"kind_semi",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2 = {
	"kind_failure",
	2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[] = {
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1,
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[] = {
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2,
	&mercury_data_ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1
};

const MR_Integer mercury_data_ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[] = {
	0,
	2,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0)),
	"ml_backend.ml_foreign_proc_gen",
	"ordinary_pragma_kind",
	{ (void *)mercury_data_ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0 },
	{ (void *)mercury_data_ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0 },
	3,
	4,
	mercury_data_ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_5 = {
{
MR_PREDICATE,
"ml_backend.ml_foreign_proc_gen",
"ml_backend.ml_foreign_proc_gen",
"ml_gen_pragma_il_proc_var_decl_defn",
9,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
423,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_4 = {
{
MR_FUNCTION,
"hlds.hlds_goal",
"hlds.hlds_goal",
"foreign_arg_var",
2,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
420,
"37"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_3 = {
{
MR_PREDICATE,
"ml_backend.ml_foreign_proc_gen",
"ml_backend.ml_foreign_proc_gen",
"ml_gen_pragma_il_proc_assign_output",
8,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
416,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_2 = {
{
MR_PREDICATE,
"ml_backend.ml_foreign_proc_gen",
"ml_backend.ml_foreign_proc_gen",
"ml_gen_pragma_il_proc_assign_output",
8,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
411,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_foreign_proc_gen",
"ml_backend.ml_foreign_proc_gen",
"lambda_ml_foreign_proc_gen_m_379",
2,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
379,
"14"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_foreign_proc_gen",
"ml_backend.ml_foreign_proc_gen",
"lambda_ml_foreign_proc_gen_m_293",
2,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
293,
"15"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_foreign_proc_gen",
"ml_backend.ml_foreign_proc_gen",
"lambda_ml_foreign_proc_gen_m_205",
2,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
205,
"26"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ml_foreign_proc_gen",
"ml_backend.ml_foreign_proc_gen",
"ml_gen_pragma_ccsj_input_arg",
5,
0
},
"ml_backend.ml_foreign_proc_gen",
"ml_foreign_proc_gen.m",
937,
"7"
};


MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module0)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0);
	MR_init_label7(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,4,3,11,10,14,15,17)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_generate_runtime_cond_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_0,
		ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 13);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tempr2;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0_i10);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0_i11);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(3,0,1);
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_sv(2) = MR_tfield(2, MR_r1, 2);
	MR_r1 = MR_tfield(2, MR_r1, 1);
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0_i15);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0_i17);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 10);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 11);
	MR_tfield(3, MR_tempr1, 2) = MR_sv(2);
	MR_tfield(3, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds__mlds_make_context_1_0);
MR_decl_entry(ml_backend__ml_code_util__ml_success_lval_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module1)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0);
	MR_init_label3(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_trace_runtime_cond'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(2, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0);
MR_decl_entry(string__first_char_3_2);
MR_decl_entry(fn__parse_tree__builtin_lib_types__int_type_0_0);
MR_decl_entry(__Unify___parse_tree__prog_data__mer_type_0_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0);
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module2)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,64,4,9,14,15,13,12,20,22,23)
	MR_init_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,6,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_csharp_java_decls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i64);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_sv(6), 0), 0);
	MR_sv(6) = MR_r1;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i6);
	}
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i12);
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i15);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i13);
	}
	MR_r1 = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,1);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i22);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,2);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i22);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i20);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i22);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i23);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i28);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0_i28);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_108_105_115_116_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_goal__type_ctor_info_foreign_arg_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0;
MR_decl_entry(list__map_foldl_5_1);
MR_decl_entry(list__condense_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module3)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0);
	MR_init_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_ccsj_input_arg_list'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_gen_info, ml_gen_info);
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	}
	MR_np_call_localret_ent(list__map_foldl_5_1,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__condense_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0_i5);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__check_hlds__type_util__check_dummy_type_2_0);
MR_decl_entry(check_hlds__mode_util__mode_to_arg_mode_4_0);
MR_decl_entry(ml_backend__ml_code_util__ml_variable_type_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_3_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0);
MR_decl_entry(hlds__hlds_module__module_info_get_name_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_assign_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module4)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,83,4,9,11,13,14,15,17,18,19)
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,20,26,27,48,25,23,35,6,38,39)
	MR_init_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_csharp_java_output_arg_list'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i83);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(3) = MR_tempr2;
	MR_sv(4) = MR_tfield(1, MR_r2, 1);
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(8) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(6), 0);
	MR_sv(10) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(9) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i6);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i11);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i6);
	}
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(10);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i6);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i15);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(2);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i17);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_sv(6) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i18);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(9);
	MR_sv(9) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i19);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i20);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_tfield(0, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 2) = MR_sv(10);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(10) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = MR_r2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i48);
	}
	}
	MR_np_call_localret_ent(fn__parse_tree__builtin_lib_types__int_type_0_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i26);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(__Unify___parse_tree__prog_data__mer_type_0_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i27);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i25);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i23);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(10);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tfield(3, MR_r2, 2) = MR_tempr2;
	MR_r3 = MR_sv(2);
	MR_r1 = MR_sv(8);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i35);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(1) = MR_tempr1;
	MR_r4 = MR_sv(3);
	}
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i38);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_sv(1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(6) = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i38);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i39);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i40);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0_i41);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(3);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_type_3_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module5)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,78,4,5,6,8,9,7,13,16,18)
	MR_init_label2(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,20,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_outline_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i78);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tfield(1, MR_r1, 1);
	}
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i5);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i6);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i8);
	}
	MR_r2 = MR_sv(3);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = (MR_Word) MR_tbmkword(0, 5);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i7);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_type_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i11);
	}
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i11);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Integer) 95;
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i11);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i18);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i20);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 3);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr2, 1) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0_i11);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 3);
	MR_tfield(2, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(2, MR_tempr1, 1) = MR_sv(7);
	MR_tfield(2, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_r1, 1) = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module6)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__build_arg_map_3_0);
	MR_init_label3(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0,14,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'build_arg_map'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0_i3);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r4 = MR_tfield(0, MR_tfield(1, MR_tempr1, 0), 0);
	MR_r5 = MR_tfield(1, MR_tempr1, 0);
	MR_r6 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_4_0,
		ml_backend__ml_foreign_proc_gen__build_arg_map_3_0_i5);
MR_def_label(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0_i14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module7)
	MR_init_entry1(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0);
	MR_init_label4(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0,9,10,4,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_target_code_attributes'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0_i2);
	}
	MR_r3 = (MR_Word) MR_sp;
MR_def_label(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	MR_incr_sp(2);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_r2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r2,0,0))
		continue;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	break;
	} /* end while */
MR_def_label(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0_i4);
	}
	if (MR_INT_NE(MR_sv(1),3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0_i4);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tfield(1, MR_sv(2), 0);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
MR_def_label(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	if (((MR_Integer) MR_sp > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0_i10);
	}
	MR_proceed();
MR_def_label(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_info_3_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_name_1_0);
MR_decl_entry(fn__backend_libs__c_util__quote_string_1_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module8)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0);
	MR_init_label9(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,2,3,4,8,9,10,14,16,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_obtain_release_global_lock'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	MR_sv(1) = MR_r3;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 203;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i5);
	}
	if (MR_INT_NE(MR_sv(3),0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i5);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i8);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_name_1_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__backend_libs__c_util__quote_string_1_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i10);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(3) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\tMR_OBTAIN_GLOBAL_LOCK(\"", 24);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("\tMR_RELEASE_GLOBAL_LOCK(\"", 25);
	MR_tfield(1, MR_r2, 1) = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(list__member_2_1);
MR_decl_entry(string__sub_string_search_3_0);
MR_declare_entry(MR_do_redo);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_proc_label_5_0);
MR_decl_entry(ml_backend__ml_global_data__ml_gen_alloc_site_7_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module9)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,2,3,9,10,7,12,13,14,15,16)
	MR_init_label4(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,17,18,19,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_hash_define_mr_alloc_id'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_globals_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 181;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_redoip_slot(MR_maxfr);
	MR_sv(7) = (MR_Word) MR_redofr_slot(MR_maxfr);
	MR_save_maxfr(MR_sv(8));
	MR_redofr_slot_word(MR_maxfr) = (MR_Word) MR_curfr;
	MR_redoip_slot_word(MR_maxfr) = (MR_Word) MR_LABEL_AP(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i7);
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i7);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(list__member_2_1,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("MR_ALLOC_ID", 11);
	MR_np_call_localret_ent(string__sub_string_search_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i10);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO(MR_ENTRY(MR_do_redo));
	}
	MR_restore_maxfr(MR_sv(8));
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i12);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_maxfr) = MR_sv(6);
	MR_redofr_slot_word(MR_maxfr) = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i5);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i15);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_label_5_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i17);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_gen_alloc_site_7_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i18);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0_i19);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,2,4);
	MR_r3 = MR_tempr2;
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(5);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module10)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0);
	MR_init_label4(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_hash_define_mr_proc_label'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_proc_label_5_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0_i5);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_r2;
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 2;
	MR_tfield(3, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_decr_sp_and_return(3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module11)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,51,4,9,12,13,14,15,16,17,6)
	MR_init_label1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_c_decls'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i51);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r1;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(1, MR_sv(7), 0), 0);
	MR_sv(7) = MR_r1;
	MR_sv(6) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i6);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i12);
	}
	MR_r1 = MR_sv(6);
	MR_sv(7) = (MR_Word) MR_string_const("MR_Word", 7);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__backend_libs__foreign__mercury_exported_type_to_string_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i15);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i17);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i21);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_sv(3) = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0_i21);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(3);
	MR_tfield(1, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__backend_libs__foreign__to_exported_type_2_0);
MR_decl_entry(fn__backend_libs__foreign__exported_type_to_string_2_0);
MR_decl_entry(fn__backend_libs__foreign__is_foreign_type_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0;
MR_decl_entry(list__member_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module12)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,2,3,5,6,7,8,9,13,14,12)
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,16,22,21,20,18,26,27,28,29,30)
	MR_init_label7(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,31,32,11,39,40,41,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_c_gen_output_arg'/10 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(7) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr2;
	MR_r6 = MR_sv(3);
	MR_r7 = (MR_Integer) 0;
	MR_r8 = (MR_Integer) 0;
	MR_r9 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i5);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_r4;
	MR_sv(3) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(8) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i6);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i7);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__backend_libs__foreign__exported_type_to_string_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i8);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(7);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i13);
	}
	MR_sv(4) = (MR_Integer) 0;
	MR_r1 = MR_sv(8);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i12);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i11);
	}
	MR_sv(4) = (MR_Integer) 1;
	MR_r1 = MR_sv(8);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i18);
	}
	if (MR_PTAG_TESTR(MR_sv(5),0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i22);
	}
	MR_r1 = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i21);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i20);
	}
	MR_r1 = MR_sv(6);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_string_const("", 0);
	MR_sv(5) = (MR_Word) MR_string_const("(MR_Box) ", 9);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i28);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_sv(6) = (MR_Word) MR_string_const("", 0);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i28);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_string_const(" *) &", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i26);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("* (", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i27);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_sv(6) = MR_tempr1;
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i28);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i29);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i30);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i31);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i32);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i39);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i40);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i41);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_BOX_FOREIGN_TYPE(", 27);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0_i42);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,5);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(8);
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module13)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,54,4,9,11,13,14,6,16,17,18)
	MR_init_label1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_c_output_arg_list'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i54);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(3) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_tempr1 = MR_tfield(1, MR_r1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(7), 0);
	MR_sv(9) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_tempr2;
	MR_r1 = MR_tempr2;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i11);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i6);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(9);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 1 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i6);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(6);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_r2 = MR_sv(3);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(3) = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_r4;
	}
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_tempr1;
	}
	MR_np_localcall_lab(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r4;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_tempr2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i17);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i18);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0_i19);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_r4 = MR_sv(1);
	MR_decr_sp_and_return(10);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__parse_tree__prog_data__get_foreign_language_1_0);
MR_decl_entry(fn__parse_tree__prog_data__get_ordinary_despite_detism_1_0);
MR_decl_entry(require__unexpected_3_0);
MR_decl_entry(hlds__hlds_module__module_info_pred_proc_info_5_0);
MR_decl_entry(hlds__hlds_pred__proc_info_interface_determinism_2_0);
MR_decl_entry(parse_tree__prog_data__determinism_components_3_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_target_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module14)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,2,4,6,34,8,5,10,11,12,13)
	MR_init_label8(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,3,17,20,22,24,19,27,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_ordinary_pragma_foreign_proc'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(8) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(6) = MR_r7;
	MR_sv(7) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i4);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_sv(8) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r8 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i5);
	}
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_ordinary_despite_detism_1_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i6);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i8);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r1 = (MR_Integer) 1;
	MR_r8 = MR_sv(9);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", 81);
	MR_r3 = (MR_Word) MR_string_const("unexpected code model", 21);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i10);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i11);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_interface_determinism_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i12);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(parse_tree__prog_data__determinism_components_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i34);
	}
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_sv(6);
	MR_r7 = MR_sv(7);
	MR_r1 = (MR_Integer) 2;
	MR_r8 = MR_sv(9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i17);
	}
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i19);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(6) = MR_r6;
	MR_sv(7) = MR_r7;
	MR_sv(8) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r8;
	MR_sv(9) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_target_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i20);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i22);
	}
	MR_r1 = (MR_Integer) 4;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(4);
	MR_r6 = MR_sv(5);
	MR_r7 = MR_sv(6);
	MR_r8 = MR_sv(7);
	MR_r9 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i24);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(5);
	MR_r5 = MR_sv(6);
	MR_r6 = MR_sv(7);
	MR_r7 = MR_sv(9);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", 81);
	MR_r3 = (MR_Word) MR_string_const("C# foreign code not supported for compilation target", 52);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),3)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i27);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),2)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0_i29);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 5;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_tempr1;
	MR_tempr3 = MR_r3;
	MR_r3 = MR_tempr2;
	MR_tempr4 = MR_r4;
	MR_r4 = MR_tempr3;
	MR_tempr5 = MR_r5;
	MR_r5 = MR_tempr4;
	MR_tempr6 = MR_r6;
	MR_r6 = MR_tempr5;
	MR_tempr7 = MR_r7;
	MR_r7 = MR_tempr6;
	MR_tempr8 = MR_r8;
	MR_r8 = MR_tempr7;
	MR_r9 = MR_tempr8;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", 81);
	MR_r3 = (MR_Word) MR_string_const("unexpected language Erlang", 26);
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module15)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0);
	MR_init_label9(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,3,4,7,8,9,12,11,22,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_il_proc_assign_output'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r7;
	MR_sv(5) = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_tfield(0, MR_r1, 1);
	MR_sv(7) = MR_tfield(0, MR_r1, 2);
	MR_sv(8) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i1);
	}
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i7);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i8);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i12);
	}
	MR_tag_alloc_heap(MR_r1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r1, 0) = MR_tempr1;
	MR_tfield(3, MR_r1, 1) = MR_sv(9);
	MR_r3 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i11);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_r4;
	MR_tempr3 = MR_sv(9);
	MR_tfield(3, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r3 = MR_sv(3);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(6),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_sv(6), 0), 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0_i22);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(10);
	MR_decr_sp(10);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__sorry_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_decl_entry(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module16)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,3,4,6,5,10,11,13,12,17,16)
	MR_init_label2(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,21,20)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_il_proc_var_decl_defn'/9 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(12);
	MR_sv(12) = (MR_Word) MR_succip;
	MR_sv(9) = MR_r1;
	MR_sv(1) = MR_r2;
	MR_sv(7) = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r8;
	MR_sv(5) = MR_tempr2;
	MR_sv(10) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, prog_var_type);
	MR_sv(11) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	}
	MR_np_call_localret_ent(f_109_97_112_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i3);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(7);
	MR_sv(7) = MR_tfield(0, MR_r1, 1);
	MR_sv(6) = MR_tfield(0, MR_r1, 2);
	MR_sv(8) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_var_name_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i4);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(7),0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(0, MR_tfield(1, MR_sv(7), 0), 0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_tempr1;
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i5);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_pragma_il_proc_var_decl_defn\'/9", 80);
	MR_r3 = (MR_Word) MR_string_const("no variable name for var", 24);
	MR_np_call_localret_ent(require__sorry_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i5);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(8),1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i10);
	}
	MR_sv(8) = MR_r3;
	MR_sv(9) = (MR_Word) MR_tbmkword(0, 5);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_sv(6) = MR_r2;
	MR_sv(8) = MR_r3;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i11);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(9);
	MR_r2 = MR_sv(6);
	MR_sv(9) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i12);
	}
	MR_r5 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 2);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(8));
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(3);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i17);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i16);
	}
	MR_r5 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(8));
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(10);
	MR_r2 = MR_sv(11);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_108_105_115_116_95_95_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i21);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0_i20);
	}
	MR_r5 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(9);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(8));
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(7);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tempr3 = MR_sv(9);
	MR_tfield(3, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr2;
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_tempr1;
	MR_r5 = MR_sv(2);
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(8));
	MR_r4 = (MR_Word) MR_tbmkword(0, 0);
	MR_succip_word = MR_sv(12);
	MR_decr_sp(12);
	MR_np_tailcall_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module17)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,81,8,10,11,13,80,16,18,19,21)
	MR_init_label6(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,22,3,23,84,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'input_arg_assignable_with_cast'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i3);
	}
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i80);
	}
	if (MR_PTAG_TESTR(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i81);
	}
	MR_r2 = (MR_Word) MR_string_const("(MR_Word)", 9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i8);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i10);
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i11);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i22);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i18);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i21);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, foreign_type_assertion);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(list__member_2_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i19);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i21);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i22);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i23);
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i84);
	}
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.input_arg_assignable_with_cast\'/6", 75);
	MR_r3 = (MR_Word) MR_string_const("unexpected language", 19);
	MR_np_call_localret_ent(require__unexpected_3_0,
		ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module18)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0);
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,2,7,9,10,11,12,13,16,17,15)
	MR_init_label10(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,25,14,26,27,28,29,32,34,35,36)
	MR_init_label7(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,37,31,44,45,48,49,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ml_gen_pragma_ccsj_input_arg'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(6) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(4) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i2);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(6);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i4);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_sv(8) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr3, 0);
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 95;
	}
	MR_np_call_localret_ent(string__first_char_3_2,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i7);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i4);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(check_hlds__mode_util__mode_to_arg_mode_4_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i9);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 != (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i4);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_variable_type_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i10);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i11);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i12);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__check_hlds__type_util__check_dummy_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i13);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i15);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_type_to_mlds_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i16);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_sv(6) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i14);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r1 = MR_sv(5);
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(3,1,0);
	MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i14);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r5, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r5, 0) = MR_sv(7);
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(8);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i25);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(5);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i26);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__backend_libs__foreign__exported_type_to_string_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i27);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i28);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 236;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i29);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(7);
	MR_r5 = MR_sv(8);
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i32);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i31);
	}
	MR_r1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i34);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i35);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i36);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i37);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,6);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_tempr1;
	MR_tfield(1, MR_r1, 1) = MR_tempr3;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i44);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", 29);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i45);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr2, 0) = MR_sv(6);
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(");\n", 3);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i48);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0_i49);
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(1);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
	}
MR_def_label(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(4);
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module19)
	MR_init_entry1(__Unify___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module20)
	MR_init_entry1(__Compare___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module21)
	MR_init_entry1(__Unify___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module22)
	MR_init_entry1(__Compare___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module23)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__205__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__205__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__205__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__205__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
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


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module24)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
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


MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module25)
	MR_init_entry1(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__379__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__379__1_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__379__1'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__379__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
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

MR_decl_entry(hlds__hlds_pred__pred_info_get_markers_2_0);
MR_decl_entry(hlds__hlds_pred__check_marker_2_0);
MR_decl_entry(require__expect_4_0);
MR_decl_entry(fn__list__condense_1_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module26)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0);
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,2,3,4,5,7,6,9,10,12,13)
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,14,16,28,27,45,47,48,49,68,71)
	MR_init_label3(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,77,80,88)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ml_gen_ordinary_pragma_csharp_java_proc__[5]_0'/13 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(11);
	MR_sv(11) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_sv(8) = MR_r4;
	MR_sv(6) = MR_r5;
	MR_sv(5) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(3) = MR_r8;
	MR_sv(9) = MR_r9;
	MR_r1 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(8);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_info_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_markers_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 22;
	MR_np_call_localret_ent(hlds__hlds_pred__check_marker_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i6);
	}
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Integer) 0;
	MR_r1 = MR_sv(9);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(6);
	MR_r2 = (MR_Integer) 1;
	MR_r1 = MR_sv(9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r3;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__205__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_csharp_java_proc\'/13", 85);
	MR_r4 = (MR_Word) MR_string_const("extra args", 10);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(9);
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(8);
	MR_sv(8) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i16);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr2;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r3;
	MR_sv(8) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(10) = MR_r4;
	MR_r2 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i68);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(4),2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i27);
	}
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i28);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,9);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tfield(1, MR_r2, 1) = MR_tempr4;
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i68);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_sv(7) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_sv(10) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i45);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),4)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i47);
	}
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("bool", 4);
	MR_r2 = (MR_Word) MR_string_const(" SUCCESS_INDICATOR;\n", 20);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i48);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(9) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("boolean", 7);
	MR_r2 = (MR_Word) MR_string_const(" SUCCESS_INDICATOR;\n", 20);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i48);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i49);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(9);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r2;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,10);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,4,9);
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(2);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_tempr3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i68);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(5) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i71);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(8);
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,2,12);
	MR_sv(8) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i77);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = MR_sv(1);
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(1) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(3);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i80);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0_i88);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(10);
	MR_decr_sp_and_return(11);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_0);
MR_decl_entry(ml_backend__ml_code_util__ml_gen_var_list_3_0);
MR_decl_entry(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module27)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0);
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,2,4,5,6,7,8,10,11,12,13)
	MR_init_label4(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,15,21,25,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ml_gen_ordinary_pragma_managed_proc__[3, 4]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(6) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_r1 = MR_r3;
	MR_r2 = MR_r7;
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__293__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(4) = MR_r1;
	MR_sv(7) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_managed_proc\'/12", 81);
	MR_r4 = (MR_Word) MR_string_const("extra args", 10);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_gen_var_list_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 5);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 7;
	MR_tfield(3, MR_r2, 1) = MR_sv(3);
	MR_tfield(3, MR_r2, 2) = MR_sv(4);
	MR_tfield(3, MR_r2, 3) = MR_r1;
	MR_tfield(3, MR_r2, 4) = MR_sv(5);
	MR_sv(3) = MR_r2;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i12);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i19);
	}
	MR_sv(6) = MR_r1;
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,4,13);
	MR_r1 = (MR_Word) MR_tmkword(1, (MR_Word *) MR_sv(5));
	MR_r2 = (MR_Word) MR_tbmkword(0, 1);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i21);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r2, 0) = MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_code_util__ml_gen_assign_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0_i25);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(6);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(0, MR_tempr4, 1) = MR_sv(2);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr4;
	MR_tfield(1, MR_r2, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_r3 = MR_sv(7);
	MR_decr_sp_and_return(8);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_managed_proc\'/12", 81);
	MR_r3 = (MR_Word) MR_string_const("kind_failure not yet implemented", 32);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_pred__proc_info_get_varset_2_0);
MR_decl_entry(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0);
MR_decl_entry(fn__map__init_0_0);
MR_decl_entry(list__filter_map_3_0);
MR_decl_entry(fn__list__map_2_0);
MR_decl_entry(list__map_3_0);
MR_decl_entry(fn__parse_tree__prog_data__get_extra_attributes_1_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module28)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0);
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,3,4,5,6,7,8,9,10,11,13)
	MR_init_label9(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,14,16,18,20,22,24,25,32,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ml_gen_ordinary_pragma_il_proc__[1]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(17);
	MR_sv(17) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(5,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__379__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_r5;
	MR_tfield(0, MR_tempr1, 4) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(11) = MR_r1;
	MR_sv(13) = MR_r2;
	MR_sv(4) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(12) = MR_r8;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("ml_backend.ml_foreign_proc_gen", 30);
	MR_r3 = (MR_Word) MR_string_const("predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_il_proc\'/12", 76);
	MR_r4 = (MR_Word) MR_string_const("extra args", 10);
	}
	MR_np_call_localret_ent(require__expect_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(13);
	MR_sv(13) = MR_r1;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(hlds__hlds_module__module_info_pred_proc_info_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_get_varset_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(13);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_name_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(14) = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_sv(15) = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(15);
	MR_np_call_localret_ent(fn__map__init_0_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i13);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(10);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__build_arg_map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i14);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_r1;
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 1;
	MR_sv(8) = MR_r1;
	MR_sv(16) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(16);
	MR_r4 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i16);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 9);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(7,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 6;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 8) = (MR_Integer) 0;
	MR_sv(9) = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = MR_sv(16);
	MR_r4 = MR_sv(6);
	}
	MR_np_call_localret_ent(list__filter_map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(10);
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(15);
	MR_r2 = MR_sv(14);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,8,0);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__list__map_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i20);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 10);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 7;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(8);
	MR_tfield(0, MR_tempr1, 6) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 7) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 8) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 9) = MR_sv(6);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(14);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r4 = MR_tempr2;
	}
	MR_np_call_localret_ent(list__map_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i22);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_sv(13), 1, (MR_Integer) 1);
	MR_tfield(1, MR_sv(13), 0) = MR_sv(2);
	MR_r2 = MR_sv(11);
	MR_sv(11) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_extra_attributes_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i24);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 3;
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i25);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(13);
	MR_tfield(0, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_tempr2;
	MR_tfield(0, MR_tempr1, 1) = MR_sv(3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = MR_sv(9);
	MR_r1 = MR_sv(16);
	MR_r3 = MR_sv(10);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i32);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(11);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	MR_sv(11) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0_i34);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(17);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__append_3_1);
MR_decl_entry(fn__parse_tree__prog_data__get_thread_safe_1_0);

MR_BEGIN_MODULE(ml_backend__ml_foreign_proc_gen_module29)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0);
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,2,3,4,5,6,7,8,10,11,41)
	MR_init_label10(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,13,48,75,47,85,117,12,129,132,136)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ml_gen_ordinary_pragma_c_proc__[4]_0'/12 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	MR_sv(10) = MR_r1;
	MR_sv(3) = MR_r2;
	MR_sv(7) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_sv(1) = MR_r6;
	MR_sv(2) = MR_r7;
	MR_sv(11) = MR_r8;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_foreign_language_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i2);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_goal, foreign_arg);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(5);
	}
	MR_np_call_localret_ent(list__append_3_1,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i3);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(11);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(11);
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(5);
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_sv(11) = MR_r1;
	MR_sv(6) = MR_r3;
	MR_sv(13) = MR_r4;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_data__get_thread_safe_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(13);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i8);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_sv(7) = MR_r1;
	MR_tempr2 = MR_sv(13);
	MR_sv(13) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i10);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r1;
	MR_sv(9) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i11);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i13);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,2,17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,4,14);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_r1;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i41);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_r2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 2) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_sv(2);
	MR_sv(10) = (MR_Word) MR_TAG_COMMON(3,10,0);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i12);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(10),2)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i47);
	}
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i48);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,2,17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,4,14);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,2,3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i75);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_r3 = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r4 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,2,19);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 3);
	MR_r3 = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr3, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr3, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 3);
	MR_sv(10) = MR_tempr4;
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr4, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr5;
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr5, 1) = MR_tempr3;
	MR_r1 = MR_sv(2);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i12);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(10) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_np_call_localret_ent(ml_backend__ml_code_util__ml_success_lval_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i85);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(2);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_tfield(0, MR_tempr3, 2) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr3;
	MR_tfield(1, MR_tempr4, 1) = (MR_Word) MR_TAG_COMMON(1,2,17);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,4,14);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(13);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_TAG_COMMON(1,2,21);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,4,16);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr4;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(5);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_TAG_COMMON(1,2,20);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(8);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,2,8);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_sv(10) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, target_code_component);
	}
	MR_np_call_localret_ent(fn__list__condense_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i117);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_sv(10);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,2,22);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(1,4,12);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr1, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr1, 2) = MR_r1;
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_sv(10) = MR_tempr2;
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 6;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 2) = MR_r2;
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr3;
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr3, 1) = MR_tempr1;
	MR_r1 = MR_sv(2);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i129);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 2);
	MR_tfield(0, MR_r2, 0) = MR_sv(7);
	MR_tfield(0, MR_r2, 1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_sv(7) = MR_tempr1;
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 8;
	MR_tfield(3, MR_tempr1, 1) = MR_sv(10);
	MR_sv(10) = MR_r2;
	MR_r1 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_make_context_1_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i132);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_sv(10);
	MR_tfield(1, MR_r2, 1) = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r3 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0_i136);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_95_102_111_114_101_105_103_110_95_112_114_111_99_95_103_101_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(12);
	MR_decr_sp_and_return(14);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ml_foreign_proc_gen_maybe_bunch_0(void)
{
	ml_backend__ml_foreign_proc_gen_module0();
	ml_backend__ml_foreign_proc_gen_module1();
	ml_backend__ml_foreign_proc_gen_module2();
	ml_backend__ml_foreign_proc_gen_module3();
	ml_backend__ml_foreign_proc_gen_module4();
	ml_backend__ml_foreign_proc_gen_module5();
	ml_backend__ml_foreign_proc_gen_module6();
	ml_backend__ml_foreign_proc_gen_module7();
	ml_backend__ml_foreign_proc_gen_module8();
	ml_backend__ml_foreign_proc_gen_module9();
	ml_backend__ml_foreign_proc_gen_module10();
	ml_backend__ml_foreign_proc_gen_module11();
	ml_backend__ml_foreign_proc_gen_module12();
	ml_backend__ml_foreign_proc_gen_module13();
	ml_backend__ml_foreign_proc_gen_module14();
	ml_backend__ml_foreign_proc_gen_module15();
	ml_backend__ml_foreign_proc_gen_module16();
	ml_backend__ml_foreign_proc_gen_module17();
	ml_backend__ml_foreign_proc_gen_module18();
	ml_backend__ml_foreign_proc_gen_module19();
	ml_backend__ml_foreign_proc_gen_module20();
	ml_backend__ml_foreign_proc_gen_module21();
	ml_backend__ml_foreign_proc_gen_module22();
	ml_backend__ml_foreign_proc_gen_module23();
	ml_backend__ml_foreign_proc_gen_module24();
	ml_backend__ml_foreign_proc_gen_module25();
	ml_backend__ml_foreign_proc_gen_module26();
	ml_backend__ml_foreign_proc_gen_module27();
	ml_backend__ml_foreign_proc_gen_module28();
	ml_backend__ml_foreign_proc_gen_module29();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ml_foreign_proc_gen__init(void);
void mercury__ml_backend__ml_foreign_proc_gen__init_type_tables(void);
void mercury__ml_backend__ml_foreign_proc_gen__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ml_foreign_proc_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ml_foreign_proc_gen__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ml_foreign_proc_gen__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ml_foreign_proc_gen__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ml_foreign_proc_gen_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0,
		ml_backend__ml_foreign_proc_gen__mutable_special_case_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0,
		ml_backend__ml_foreign_proc_gen__ordinary_pragma_kind_0_0);
	mercury__ml_backend__ml_foreign_proc_gen__init_debugger();
}

void mercury__ml_backend__ml_foreign_proc_gen__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0);
	}
}


void mercury__ml_backend__ml_foreign_proc_gen__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ml_foreign_proc_gen__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ml_foreign_proc_gen);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ml_foreign_proc_gen__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ml_foreign_proc_gen__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
