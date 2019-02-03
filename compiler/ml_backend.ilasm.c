/*
** Automatically generated from `ilasm.m'
** by the Mercury compiler,
** version 11.07.1, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__ml_backend__ilasm__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 526 "../library/io.int"
#include "io.mh"

#line 28 "ml_backend.ilasm.c"
#line 536 "../library/io.int"
#include "time.mh"

#line 32 "ml_backend.ilasm.c"
#line 537 "../library/io.int"
#include "string.mh"

#line 36 "ml_backend.ilasm.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "ml_backend.ilasm.c"
#line 39 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 44 "ml_backend.ilasm.c"
#line 33 "../library/array.int2"
#include "array.mh"

#line 48 "ml_backend.ilasm.c"
#line 49 "ml_backend.ilasm.c"
#include "ml_backend.ilasm.mh"

#line 52 "ml_backend.ilasm.c"
#line 53 "ml_backend.ilasm.c"
#ifndef ML_BACKEND__ILASM_DECL_GUARD
#define ML_BACKEND__ILASM_DECL_GUARD

#line 57 "ml_backend.ilasm.c"
#line 58 "ml_backend.ilasm.c"

#endif
#line 61 "ml_backend.ilasm.c"

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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Integer f4;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[3];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];

struct mercury_type_9 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_9 mercury_common_9[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_byte_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_custom_type_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_data_body_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_extends_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_field_init_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ilasm__type_ctor_info_field_initializer_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_float32_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_float64_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_info_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_out_info_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_implattr_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_implements_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_int16_0;

extern const MR_TypeCtorInfo_Struct
	mercury_data_ml_backend__ilasm__type_ctor_info_int32_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_int64_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_int8_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_method_defn_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_qstring_or_bytes_0,
	mercury_data_ml_backend__ilasm__type_ctor_info_ref_or_value_0;
MR_decl_label6(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0, 4,5,6,3,2,10)
MR_decl_label2(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0, 2,3)
MR_decl_label1(ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0, 2)
MR_decl_label6(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0, 24,3,5,6,8,9)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0, 18,3,4,6,7)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0, 18,3,4,6,7)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0, 18,3,4,6,7)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0, 18,3,4,6,7)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0, 17,3,4,12,6)
MR_decl_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0, 18,3,4,6,7)
MR_decl_label5(ml_backend__ilasm__ilasm_output_4_0, 2,3,4,5,7)
MR_decl_label2(ml_backend__ilasm__ilasm_output_6_0, 2,3)
MR_decl_label7(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0, 7,10,11,15,16,34,36)
MR_decl_label10(ml_backend__ilasm__name_to_simple_type_2_0, 9,11,13,15,17,19,21,23,25,27)
MR_decl_label7(ml_backend__ilasm__name_to_simple_type_2_0, 29,31,33,35,37,39,1)
MR_decl_label10(ml_backend__ilasm__output_assembly_decl_6_0, 49,6,8,5,11,13,10,15,16,17)
MR_decl_label9(ml_backend__ilasm__output_assembly_decl_6_0, 18,19,20,21,22,23,24,25,26)
MR_decl_label5(ml_backend__ilasm__output_bound_3_0, 4,5,3,8,7)
MR_decl_label2(ml_backend__ilasm__output_bounds_3_0, 2,4)
MR_decl_label10(ml_backend__ilasm__output_class_member_6_0, 4,6,8,9,11,12,13,14,15,3)
MR_decl_label10(ml_backend__ilasm__output_class_member_6_0, 19,17,26,27,28,29,30,32,33,34)
MR_decl_label10(ml_backend__ilasm__output_class_member_6_0, 31,73,38,39,40,43,25,161,44,163)
MR_decl_label10(ml_backend__ilasm__output_class_member_6_0, 51,52,53,48,165,59,60,61,62,55)
MR_decl_label1(ml_backend__ilasm__output_class_member_6_0, 63)
MR_decl_label4(ml_backend__ilasm__output_class_member_name_5_0, 2,3,5,7)
MR_decl_label1(ml_backend__ilasm__output_class_name_6_0, 2)
MR_decl_label10(ml_backend__ilasm__output_classattr_3_0, 3,5,7,9,11,13,15,17,19,21)
MR_decl_label10(ml_backend__ilasm__output_classattr_3_0, 23,25,27,29,31,33,35,37,39,41)
MR_decl_label5(ml_backend__ilasm__output_comment_string_3_0, 2,4,6,8,9)
MR_decl_label10(ml_backend__ilasm__output_custom_decl_6_0, 2,4,5,7,10,11,12,13,16,18)
MR_decl_label4(ml_backend__ilasm__output_custom_decl_6_0, 19,15,14,21)
MR_decl_label2(ml_backend__ilasm__output_custom_type_6_0, 18,6)
MR_decl_label3(ml_backend__ilasm__output_data_body_3_0, 19,5,7)
MR_decl_label10(ml_backend__ilasm__output_data_item_3_0, 4,3,8,7,12,11,16,15,20,19)
MR_decl_label8(ml_backend__ilasm__output_data_item_3_0, 25,24,29,28,33,32,36,37)
MR_decl_label10(ml_backend__ilasm__output_debug_instruction_6_0, 2,108,9,10,11,12,6,17,18,19)
MR_decl_label10(ml_backend__ilasm__output_debug_instruction_6_0, 20,21,23,24,25,62,27,28,29,31)
MR_decl_label10(ml_backend__ilasm__output_debug_instruction_6_0, 32,30,34,35,36,37,38,40,41,42)
MR_decl_label8(ml_backend__ilasm__output_debug_instruction_6_0, 43,44,45,14,47,48,49,50)
MR_decl_label10(ml_backend__ilasm__output_decl_6_0, 4,6,89,8,10,12,13,14,11,16)
MR_decl_label10(ml_backend__ilasm__output_decl_6_0, 17,18,92,20,19,22,23,24,3,27)
MR_decl_label10(ml_backend__ilasm__output_decl_6_0, 28,29,30,26,210,36,37,38,39,32)
MR_decl_label10(ml_backend__ilasm__output_decl_6_0, 42,43,41,213,45,215,52,53,54,49)
MR_decl_label10(ml_backend__ilasm__output_decl_6_0, 217,60,61,62,56,219,67,105,69,68)
MR_decl_label10(ml_backend__ilasm__output_decl_6_0, 73,74,71,66,77,78,79,81,82,76)
MR_decl_label4(ml_backend__ilasm__output_decl_6_0, 84,83,86,87)
MR_decl_label10(ml_backend__ilasm__output_field_initializer_3_0, 5,4,7,10,9,14,15,13,19,18)
MR_decl_label3(ml_backend__ilasm__output_field_initializer_3_0, 24,25,64)
MR_decl_label8(ml_backend__ilasm__output_fieldref_6_0, 3,4,5,6,7,9,11,13)
MR_decl_label1(ml_backend__ilasm__output_hexbyte_3_0, 2)
MR_decl_label4(ml_backend__ilasm__output_id_3_0, 2,5,6,10)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 4,5,3,7,10,9,13,14,15,12)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 18,19,20,17,22,24,26,28,31,32)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 33,30,36,37,38,35,41,42,43,40)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 45,49,48,51,54,53,57,56,59,63)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 62,65,79,69,68,83,86,85,88,91)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 90,93,1173,98,99,100,101,95,104,103)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 106,108,112,111,114,119,120,121,118,124)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 125,126,123,128,129,116,131,133,135,137)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 139,142,145,149,148,155,154,158,157,160)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 153,164,151,167,169,166,175,174,177,179)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 178,181,185,184,187,173,195,192,200,197)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 205,202,172,213,212,215,218,221,224,228)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 227,230,233,235,232,239,241,238,244,246)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 249,252,256,255,258,262,261,264,266,270)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 271,269,273,275,279,278,281,283,285,287)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 291,290,293,295,297,300,299,302,306,308)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 305,314,315,313,318,319,320,321,317,323)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 324,325,486,327,328,329,330,311,332,331)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 334,338,337,341,343,340,346,350,349,353)
MR_decl_label10(ml_backend__ilasm__output_instr_6_0, 354,352,357,359,356,361,363,365,368,367)
MR_decl_label1(ml_backend__ilasm__output_instr_6_0, 370)
MR_decl_label4(ml_backend__ilasm__output_instruction_6_0, 19,5,6,7)
MR_decl_label1(ml_backend__ilasm__output_int64_3_0, 2)
MR_decl_label4(ml_backend__ilasm__output_local_6_0, 3,4,5,6)
MR_decl_label2(ml_backend__ilasm__output_member_name_3_0, 3,5)
MR_decl_label10(ml_backend__ilasm__output_method_body_decl_6_0, 3,5,7,11,10,13,17,70,22,23)
MR_decl_label5(ml_backend__ilasm__output_method_param_6_0, 3,4,7,8,5)
MR_decl_label5(ml_backend__ilasm__output_methodhead_6_0, 3,12,5,9,11)
MR_decl_label10(ml_backend__ilasm__output_methodref_6_0, 5,6,4,9,8,10,11,12,15,14)
MR_decl_label10(ml_backend__ilasm__output_methodref_6_0, 16,18,19,47,21,22,24,25,27,28)
MR_decl_label10(ml_backend__ilasm__output_methodref_6_0, 3,32,33,31,34,35,36,39,38,40)
MR_decl_label2(ml_backend__ilasm__output_methodref_6_0, 41,42)
MR_decl_label2(ml_backend__ilasm__output_modifier_3_0, 3,5)
MR_decl_label10(ml_backend__ilasm__output_name_signature_and_call_conv_8_0, 4,3,6,7,8,11,10,12,9,14)
MR_decl_label10(ml_backend__ilasm__output_name_signature_and_call_conv_8_0, 16,17,19,21,13,26,25,27,28,44)
MR_decl_label6(ml_backend__ilasm__output_name_signature_and_call_conv_8_0, 30,31,32,34,35,37)
MR_decl_label1(ml_backend__ilasm__output_overflow_3_0, 13)
MR_decl_label2(ml_backend__ilasm__output_ret_type_6_0, 4,3)
MR_decl_label1(ml_backend__ilasm__output_signed_3_0, 12)
MR_decl_label10(ml_backend__ilasm__output_simple_type_6_0, 208,3,5,7,9,11,13,15,17,19)
MR_decl_label10(ml_backend__ilasm__output_simple_type_6_0, 21,23,25,27,29,31,33,35,37,42)
MR_decl_label10(ml_backend__ilasm__output_simple_type_6_0, 46,40,49,39,55,125,58,53,61,52)
MR_decl_label9(ml_backend__ilasm__output_simple_type_6_0, 65,64,68,67,71,72,70,73,74)
MR_decl_label10(ml_backend__ilasm__output_simple_type_opcode_3_0, 3,5,7,9,11,13,15,17,19,21)
MR_decl_label10(ml_backend__ilasm__output_simple_type_opcode_3_0, 23,25,27,29,31,33,35,37,39,41)
MR_decl_label3(ml_backend__ilasm__output_simple_type_opcode_3_0, 43,45,47)
MR_decl_label5(ml_backend__ilasm__output_string_constant_3_0, 2,3,6,7,8)
MR_decl_label10(ml_backend__ilasm__output_structured_name_5_0, 9,12,13,17,18,3,28,30,31,32)
MR_decl_label6(ml_backend__ilasm__output_structured_name_5_0, 33,24,25,23,37,38)
MR_decl_label1(ml_backend__ilasm__output_target_3_0, 3)
MR_decl_label3(ml_backend__ilasm__output_trace_3_0, 2,3,4)
MR_decl_label10(ml_backend__ilasm__output_trace_instr_6_0, 2,5,6,9,10,11,3,15,16,13)
MR_decl_label4(ml_backend__ilasm__output_trace_instr_6_0, 17,20,21,22)
MR_decl_label1(ml_backend__ilasm__output_type_6_0, 3)
MR_decl_label3(ml_backend__ilasm__quote_id_2_0, 2,5,6)
MR_decl_label5(__Unify___ml_backend__ilasm__assembly_decl_0_0, 5,9,28,13,1)
MR_decl_label1(__Unify___ml_backend__ilasm__byte_0_0, 3)
MR_decl_label10(__Unify___ml_backend__ilasm__class_member_0_0, 7,9,11,5,17,15,23,25,21,29)
MR_decl_label8(__Unify___ml_backend__ilasm__class_member_0_0, 31,35,82,39,44,46,48,1)
MR_decl_label4(__Unify___ml_backend__ilasm__custom_decl_0_0, 4,6,10,1)
MR_decl_label3(__Unify___ml_backend__ilasm__custom_type_0_0, 16,5,1)
MR_decl_label3(__Unify___ml_backend__ilasm__data_body_0_0, 16,5,1)
MR_decl_label10(__Unify___ml_backend__ilasm__data_item_0_0, 5,10,15,19,21,25,27,70,32,1)
MR_decl_label3(__Unify___ml_backend__ilasm__extends_0_0, 12,5,1)
MR_decl_label5(__Unify___ml_backend__ilasm__field_init_0_0, 5,10,30,14,1)
MR_decl_label4(__Unify___ml_backend__ilasm__field_initializer_0_0, 5,17,6,1)
MR_decl_label1(__Unify___ml_backend__ilasm__float32_0_0, 4)
MR_decl_label1(__Unify___ml_backend__ilasm__float64_0_0, 4)
MR_decl_label10(__Unify___ml_backend__ilasm__il_decl_0_0, 7,9,11,5,17,15,23,21,27,29)
MR_decl_label9(__Unify___ml_backend__ilasm__il_decl_0_0, 31,35,39,45,43,49,99,53,1)
MR_decl_label1(__Unify___ml_backend__ilasm__ilasm_info_0_0, 4)
MR_decl_label2(__Unify___ml_backend__ilasm__ilasm_out_info_0_0, 4,1)
MR_decl_label1(__Unify___ml_backend__ilasm__implements_0_0, 6)
MR_decl_label1(__Unify___ml_backend__ilasm__int16_0_0, 4)
MR_decl_label1(__Unify___ml_backend__ilasm__int32_0_0, 4)
MR_decl_label1(__Unify___ml_backend__ilasm__int64_0_0, 6)
MR_decl_label1(__Unify___ml_backend__ilasm__int8_0_0, 4)
MR_decl_label8(__Unify___ml_backend__ilasm__method_body_decl_0_0, 5,6,7,12,17,45,21,1)
MR_decl_label5(__Unify___ml_backend__ilasm__methodhead_0_0, 4,6,8,12,1)
MR_decl_label4(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0, 5,17,6,1)
MR_decl_label3(__Unify___ml_backend__ilasm__ref_or_value_0_0, 16,5,1)
MR_decl_label10(__Compare___ml_backend__ilasm__assembly_decl_0_0, 3,2,7,9,5,13,14,11,19,74)
MR_decl_label9(__Compare___ml_backend__ilasm__assembly_decl_0_0, 20,17,24,25,26,28,32,36,152)
MR_decl_label10(__Compare___ml_backend__ilasm__class_member_0_0, 3,2,9,13,17,21,7,29,30,31)
MR_decl_label10(__Compare___ml_backend__ilasm__class_member_0_0, 32,33,5,37,40,38,45,46,47,48)
MR_decl_label10(__Compare___ml_backend__ilasm__class_member_0_0, 35,52,53,56,60,64,54,71,72,73)
MR_decl_label10(__Compare___ml_backend__ilasm__class_member_0_0, 50,77,78,79,80,82,83,75,87,88)
MR_decl_label10(__Compare___ml_backend__ilasm__class_member_0_0, 89,90,91,93,85,97,98,99,100,101)
MR_decl_label10(__Compare___ml_backend__ilasm__class_member_0_0, 102,95,107,108,109,110,111,112,105,116)
MR_decl_label10(__Compare___ml_backend__ilasm__class_member_0_0, 117,212,118,119,120,121,216,122,124,128)
MR_decl_label3(__Compare___ml_backend__ilasm__class_member_0_0, 132,136,503)
MR_decl_label5(__Compare___ml_backend__ilasm__custom_decl_0_0, 3,2,5,9,29)
MR_decl_label5(__Compare___ml_backend__ilasm__custom_type_0_0, 3,2,7,5,10)
MR_decl_label5(__Compare___ml_backend__ilasm__data_body_0_0, 3,2,7,5,10)
MR_decl_label10(__Compare___ml_backend__ilasm__data_item_0_0, 3,2,7,9,10,11,12,13,14,5)
MR_decl_label10(__Compare___ml_backend__ilasm__data_item_0_0, 18,19,21,22,23,24,25,16,29,30)
MR_decl_label10(__Compare___ml_backend__ilasm__data_item_0_0, 31,33,34,35,36,27,40,41,42,43)
MR_decl_label10(__Compare___ml_backend__ilasm__data_item_0_0, 45,46,47,38,51,52,53,54,55,57)
MR_decl_label10(__Compare___ml_backend__ilasm__data_item_0_0, 58,49,62,63,64,65,66,67,69,60)
MR_decl_label10(__Compare___ml_backend__ilasm__data_item_0_0, 73,74,75,76,77,78,79,71,84,85)
MR_decl_label10(__Compare___ml_backend__ilasm__data_item_0_0, 86,87,88,89,90,257,82,94,95,96)
MR_decl_label6(__Compare___ml_backend__ilasm__data_item_0_0, 97,98,182,99,100,184)
MR_decl_label4(__Compare___ml_backend__ilasm__extends_0_0, 18,7,5,9)
MR_decl_label10(__Compare___ml_backend__ilasm__field_init_0_0, 3,2,7,9,5,13,14,11,19,20)
MR_decl_label6(__Compare___ml_backend__ilasm__field_init_0_0, 17,24,43,25,44,26)
MR_decl_label7(__Compare___ml_backend__ilasm__field_initializer_0_0, 30,31,5,11,9,15,16)
MR_decl_label2(__Compare___ml_backend__ilasm__float32_0_0, 3,2)
MR_decl_label2(__Compare___ml_backend__ilasm__float64_0_0, 3,2)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 3,2,9,13,17,21,7,29,30,31)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 32,33,34,35,36,37,5,41,44,42)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 49,50,51,52,53,54,55,56,39,60)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 61,64,62,69,70,71,72,73,74,75)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 58,79,80,81,82,84,85,86,87,88)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 89,77,93,94,95,96,97,99,100,101)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 102,103,91,107,108,109,110,111,112,114)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 115,116,117,105,121,122,123,124,125,126)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 127,129,130,131,119,135,136,137,138,139)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 140,141,142,144,145,133,149,150,151,152)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 153,154,155,156,159,163,157,169,147,173)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 174,175,176,177,178,179,180,181,184,182)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 171,192,193,194,195,196,197,198,199,200)
MR_decl_label10(__Compare___ml_backend__ilasm__il_decl_0_0, 201,512,190,205,206,207,208,209,210,211)
MR_decl_label6(__Compare___ml_backend__ilasm__il_decl_0_0, 212,368,213,214,370,1107)
MR_decl_label2(__Compare___ml_backend__ilasm__ilasm_info_0_0, 3,2)
MR_decl_label6(__Compare___ml_backend__ilasm__ilasm_out_info_0_0, 3,2,5,9,13,37)
MR_decl_label2(__Compare___ml_backend__ilasm__implements_0_0, 3,2)
MR_decl_label2(__Compare___ml_backend__ilasm__int16_0_0, 3,2)
MR_decl_label2(__Compare___ml_backend__ilasm__int32_0_0, 3,2)
MR_decl_label2(__Compare___ml_backend__ilasm__int64_0_0, 3,2)
MR_decl_label2(__Compare___ml_backend__ilasm__int8_0_0, 3,2)
MR_decl_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0, 7,8,9,10,11,5,15,125,16,17)
MR_decl_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0, 18,19,13,23,24,25,27,28,21,32)
MR_decl_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0, 33,34,35,37,238,30,41,42,43,44)
MR_decl_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0, 39,50,51,52,53,54,48,58,59,60)
MR_decl_label3(__Compare___ml_backend__ilasm__method_body_decl_0_0, 61,62,63)
MR_decl_label6(__Compare___ml_backend__ilasm__methodhead_0_0, 3,2,5,9,13,37)
MR_decl_label7(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0, 30,31,5,11,9,15,16)
MR_decl_label5(__Compare___ml_backend__ilasm__ref_or_value_0_0, 3,2,19,7,5)
MR_decl_static(ml_backend__ilasm__ilasm_output_6_0)
MR_def_extern_entry(ml_backend__ilasm__ilasm_output_4_0)
MR_decl_static(ml_backend__ilasm__quote_id_2_0)
MR_decl_static(ml_backend__ilasm__output_id_3_0)
MR_decl_static(ml_backend__ilasm__output_member_name_3_0)
MR_decl_static(ml_backend__ilasm__name_to_simple_type_2_0)
MR_decl_static(ml_backend__ilasm__output_bounds_3_0)
MR_decl_static(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0)
MR_decl_static(ml_backend__ilasm__output_dotted_name_3_0)
MR_decl_static(ml_backend__ilasm__output_nested_class_quals_3_0)
MR_decl_static(ml_backend__ilasm__output_structured_name_5_0)
MR_decl_static(ml_backend__ilasm__output_type_6_0)
MR_decl_static(ml_backend__ilasm__output_simple_type_6_0)
MR_decl_static(ml_backend__ilasm__output_ret_type_6_0)
MR_decl_static(ml_backend__ilasm__output_name_signature_and_call_conv_8_0)
MR_decl_static(ml_backend__ilasm__output_methodhead_6_0)
MR_decl_static(ml_backend__ilasm__output_class_name_6_0)
MR_decl_static(ml_backend__ilasm__output_class_member_name_5_0)
MR_decl_static(ml_backend__ilasm__output_methodref_6_0)
MR_decl_static(ml_backend__ilasm__output_custom_type_6_0)
MR_decl_static(ml_backend__ilasm__output_custom_decl_6_0)
MR_decl_static(ml_backend__ilasm__output_float64_3_0)
MR_decl_static(ml_backend__ilasm__output_int64_3_0)
MR_decl_static(ml_backend__ilasm__output_int32_3_0)
MR_decl_static(ml_backend__ilasm__output_int16_3_0)
MR_decl_static(ml_backend__ilasm__output_int8_3_0)
MR_decl_static(ml_backend__ilasm__output_data_item_3_0)
MR_decl_static(ml_backend__ilasm__output_data_body_3_0)
MR_decl_static(ml_backend__ilasm__output_comment_string_3_0)
MR_decl_static(ml_backend__ilasm__output_decl_6_0)
MR_decl_static(ml_backend__ilasm__output_field_initializer_3_0)
MR_decl_static(ml_backend__ilasm__output_class_member_6_0)
MR_decl_static(ml_backend__ilasm__output_label_3_0)
MR_decl_static(ml_backend__ilasm__output_method_body_decl_6_0)
MR_decl_static(ml_backend__ilasm__output_local_6_0)
MR_decl_static(ml_backend__ilasm__output_method_param_6_0)
MR_decl_static(ml_backend__ilasm__output_simple_type_opcode_3_0)
MR_decl_static(ml_backend__ilasm__output_bound_3_0)
MR_decl_static(ml_backend__ilasm__output_modifier_3_0)
MR_decl_static(ml_backend__ilasm__output_overflow_3_0)
MR_decl_static(ml_backend__ilasm__output_signed_3_0)
MR_decl_static(ml_backend__ilasm__output_target_3_0)
MR_decl_static(ml_backend__ilasm__output_fieldref_6_0)
MR_decl_static(ml_backend__ilasm__output_index_3_0)
MR_decl_static(ml_backend__ilasm__output_string_constant_3_0)
MR_decl_static(ml_backend__ilasm__output_instr_6_0)
MR_decl_static(ml_backend__ilasm__output_trace_instr_6_0)
MR_decl_static(ml_backend__ilasm__output_trace_3_0)
MR_decl_static(ml_backend__ilasm__output_debug_instruction_6_0)
MR_decl_static(ml_backend__ilasm__output_instruction_6_0)
MR_decl_static(ml_backend__ilasm__output_classattr_3_0)
MR_decl_static(ml_backend__ilasm__output_assembly_decl_6_0)
MR_decl_static(ml_backend__ilasm__output_hexbyte_3_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__assembly_decl_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__assembly_decl_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__byte_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__byte_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__class_member_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__class_member_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__classattr_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__classattr_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__custom_decl_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__custom_decl_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__custom_type_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__custom_type_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__data_body_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__data_body_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__data_item_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__data_item_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__extends_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__extends_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__field_init_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__field_init_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__field_initializer_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__field_initializer_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__fieldattr_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__fieldattr_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__float32_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__float32_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__float64_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__float64_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__il_decl_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__il_decl_0_0)
MR_decl_static(__Unify___ml_backend__ilasm__ilasm_info_0_0)
MR_decl_static(__Compare___ml_backend__ilasm__ilasm_info_0_0)
MR_decl_static(__Unify___ml_backend__ilasm__ilasm_out_info_0_0)
MR_decl_static(__Compare___ml_backend__ilasm__ilasm_out_info_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__implattr_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__implattr_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__implements_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__implements_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__int16_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__int16_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__int32_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__int32_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__int64_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__int64_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__int8_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__int8_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__methattr_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__methattr_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__method_body_decl_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__method_body_decl_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__method_defn_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__method_defn_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__methodhead_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__methodhead_0_0)
MR_def_extern_entry(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0)
MR_def_extern_entry(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0)
MR_decl_static(__Unify___ml_backend__ilasm__ref_or_value_0_0)
MR_decl_static(__Compare___ml_backend__ilasm__ref_or_value_0_0)
MR_decl_static(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0)
MR_decl_static(ml_backend__ilasm__IntroducedFrom__pred__output_class_member__571__1_3_0)
MR_decl_static(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__647__1_3_0)
MR_decl_static(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__656__1_3_0)
MR_decl_static(ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0)
MR_decl_static(ml_backend__ilasm__IntroducedFrom__pred__output_comment_string__2096__1_1_0)
MR_decl_static(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0)

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
extern const MR_BaseTypeclassInfo mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__[];
extern const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_doc_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
MR_LIST_CTOR_ADDR,
MR_CHAR_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data_base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__,
MR_CTOR0_ADDR(pprint, doc)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__quote_id_2_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_character_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_id_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_structured_name_5_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_string_constant_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_trace_instr_6_0_1;
static const struct mercury_type_1 mercury_common_1[6] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__quote_id_2_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_id_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_structured_name_5_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_string_constant_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_trace_instr_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CHAR_CTOR_ADDR,
MR_CHAR_CTOR_ADDR,
MR_COMMON(0,0),
MR_COMMON(0,0)
}
},
};

static const struct mercury_type_2 mercury_common_2[6] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0),
1,
39
},
{
MR_COMMON(1,1),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0),
1,
39
},
{
MR_COMMON(1,2),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0),
1,
39
},
{
MR_COMMON(1,3),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0),
1,
39
},
{
MR_COMMON(1,4),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0),
1,
34
},
{
MR_COMMON(1,5),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0),
1,
34
},
};

static const struct mercury_type_3 mercury_common_3[1] =
{
{
MR_string_const("\'", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_4 mercury_common_4[17] =
{
{
MR_tbmkword(0, 4)
},
{
MR_tbmkword(0, 14)
},
{
MR_tbmkword(0, 1)
},
{
MR_tbmkword(0, 2)
},
{
MR_tbmkword(0, 3)
},
{
MR_tbmkword(0, 0)
},
{
MR_tbmkword(0, 11)
},
{
MR_tbmkword(0, 8)
},
{
MR_tbmkword(0, 15)
},
{
MR_tbmkword(0, 10)
},
{
MR_tbmkword(0, 16)
},
{
MR_tbmkword(0, 5)
},
{
MR_tbmkword(0, 6)
},
{
MR_tbmkword(0, 7)
},
{
MR_tbmkword(0, 13)
},
{
MR_tbmkword(0, 9)
},
{
MR_tbmkword(0, 17)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_bounds_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_bound_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_dotted_name_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_nested_class_quals_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_type_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodhead_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodhead_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_implattr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodref_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodref_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_custom_type_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_custom_decl_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_custom_decl_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int8_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_data_item_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_data_body_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_decl_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_class_member_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_class_member_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_local_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_method_param_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_fieldref_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_instr_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_target_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_assembly_decl_6_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_assembly_decl_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_1;
static const struct mercury_type_5 mercury_common_5[23] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_bounds_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, bound),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_dotted_name_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_nested_class_quals_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_type_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_methodhead_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, methattr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_methodhead_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, implattr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_methodref_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_methodref_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_custom_type_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_custom_decl_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_custom_decl_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, int8),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_data_item_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, int8),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_data_body_3_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, data_item),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_decl_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, classattr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_class_member_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_class_member_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_local_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_method_param_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_fieldref_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_instr_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, target),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_assembly_decl_6_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, int8),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_assembly_decl_6_0_2,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilasm, int8),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_CTOR0_ADDR(ml_backend__ilds, type_modifier),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(fn__pprint__text_1_0);
static const struct mercury_type_6 mercury_common_6[25] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(ml_backend__ilasm__output_bound_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(ml_backend__ilasm__output_id_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__647__1_3_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__656__1_3_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,7),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,8),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,9),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,10),
MR_ENTRY_AP(ml_backend__ilasm__output_hexbyte_3_0),
0
},
{
MR_COMMON(5,11),
MR_ENTRY_AP(ml_backend__ilasm__output_hexbyte_3_0),
0
},
{
MR_COMMON(5,12),
MR_ENTRY_AP(ml_backend__ilasm__output_data_item_3_0),
0
},
{
MR_COMMON(7,0),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__output_comment_string__2096__1_1_0),
0
},
{
MR_COMMON(8,0),
MR_ENTRY_AP(fn__pprint__text_1_0),
0
},
{
MR_COMMON(5,13),
MR_ENTRY_AP(ml_backend__ilasm__output_classattr_3_0),
0
},
{
MR_COMMON(5,14),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__output_class_member__571__1_3_0),
0
},
{
MR_COMMON(5,15),
MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__output_class_member__571__1_3_0),
0
},
{
MR_COMMON(5,16),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,17),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,18),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
{
MR_COMMON(5,19),
MR_ENTRY_AP(ml_backend__ilasm__output_target_3_0),
0
},
{
MR_COMMON(5,20),
MR_ENTRY_AP(ml_backend__ilasm__output_hexbyte_3_0),
0
},
{
MR_COMMON(5,21),
MR_ENTRY_AP(ml_backend__ilasm__output_hexbyte_3_0),
0
},
{
MR_COMMON(5,22),
MR_ENTRY_AP(ml_backend__ilasm__output_modifier_3_0),
0
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_comment_string_3_0_1;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_comment_string_3_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CHAR_CTOR_ADDR
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_comment_string_3_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_pprint__type_ctor_info_doc_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_comment_string_3_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_STRING_CTOR_ADDR,
MR_CTOR0_ADDR(pprint, doc)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_decl_6_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_out_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_method_body_decl_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_method_body_decl_6_0_2;
static const struct mercury_type_9 mercury_common_9[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_decl_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_out_info),
MR_CTOR0_ADDR(ml_backend__ilasm, assembly_decl),
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info),
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_method_body_decl_6_0_1,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_out_info),
MR_CTOR0_ADDR(ml_backend__ilds, instr),
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info),
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__ilasm__output_method_body_decl_6_0_2,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_out_info),
MR_CTOR0_ADDR(ml_backend__ilds, instr),
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info),
MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_0 = {
	"version",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int8_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_int8_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int8_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_int8_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_1 = {
	"hash",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_int8_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_2 = {
	"public_key_token",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_3 = {
	"custom",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_assembly_decl_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_2

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_3[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_3

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_assembly_decl_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_assembly_decl_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_assembly_decl_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_assembly_decl_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_assembly_decl_0[] = {
	3,
	1,
	2,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__assembly_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__assembly_decl_0_0)),
	"ml_backend.ilasm",
	"assembly_decl",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_assembly_decl_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_assembly_decl_0 },
	4,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_assembly_decl_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_byte_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__byte_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__byte_0_0)),
	"ml_backend.ilasm",
	"byte",
	{ 0 },
	{ (void *)&mercury_data_ml_backend__ilasm__type_ctor_info_int8_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_method_body_decl_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_method_body_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_0 = {
	"member_method",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_fieldattr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int32_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ml_backend__ilasm__type_ctor_info_int32_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int32_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_field_initializer_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_fieldattr_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ml_backend__ilasm__type_ctor_info_int32_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_field_initializer_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_1 = {
	"member_field",
	5,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_1,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ml_backend__ilasm__type_ctor_info_methodhead_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ml_backend__ilasm__type_ctor_info_methodhead_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ml_backend__ilasm__type_ctor_info_methodhead_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_2 = {
	"member_property",
	4,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_classattr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_class_member_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_extends_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_implements_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_classattr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_extends_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_implements_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_class_member_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_3 = {
	"member_nested_class",
	5,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_4 = {
	"member_custom",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_5 = {
	"member_comment_term",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_6 = {
	"member_comment",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_class_member_0_7[] = {
	(MR_PseudoTypeInfo) 513
};

const MR_DuExistLocn mercury_data_ml_backend__ilasm__exist_locns_class_member_0_7[] = {
	{ 0, -1 }
};

static const MR_DuExistInfo mercury_data_ml_backend__ilasm__exist_info_class_member_0_7 = {
	1,
	0,
	0,
	mercury_data_ml_backend__ilasm__exist_locns_class_member_0_7,
	
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_7 = {
	"member_comment_thing",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_class_member_0_7,
	NULL,
	&mercury_data_ml_backend__ilasm__exist_info_class_member_0_7
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_2

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_3[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_5,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_6,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_7

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_class_member_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_2 },
	{ 5, MR_SECTAG_REMOTE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_class_member_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_class_member_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_6,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_5,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_7,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_0,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_class_member_0_2
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_class_member_0[] = {
	5,
	4,
	7,
	6,
	3,
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__class_member_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__class_member_0_0)),
	"ml_backend.ilasm",
	"class_member",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_class_member_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_class_member_0 },
	8,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_class_member_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_0 = {
	"abstract",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_1 = {
	"ansi",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_2 = {
	"auto",
	2
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_3 = {
	"autochar",
	3
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_4 = {
	"beforefieldinit",
	4
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_5 = {
	"explicit",
	5
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_6 = {
	"interface",
	6
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_7 = {
	"nestedassembly",
	7
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_8 = {
	"nestedfamandassem",
	8
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_9 = {
	"nestedfamily",
	9
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_10 = {
	"nestedfamorassem",
	10
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_11 = {
	"nestedprivate",
	11
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_12 = {
	"nestedpublic",
	12
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_13 = {
	"private",
	13
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_14 = {
	"public",
	14
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_15 = {
	"rtspecialname",
	15
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_16 = {
	"sealed",
	16
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_17 = {
	"sequential",
	17
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_18 = {
	"serializable",
	18
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_19 = {
	"specialname",
	19
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_20 = {
	"unicode",
	20
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_value_ordered_classattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_8,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_9,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_10,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_11,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_12,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_13,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_14,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_15,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_16,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_17,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_18,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_19,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_20
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_name_ordered_classattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_8,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_9,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_10,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_11,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_12,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_13,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_14,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_15,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_16,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_17,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_18,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_19,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_classattr_0_20
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_classattr_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__classattr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__classattr_0_0)),
	"ml_backend.ilasm",
	"classattr",
	{ (void *)mercury_data_ml_backend__ilasm__enum_name_ordered_classattr_0 },
	{ (void *)mercury_data_ml_backend__ilasm__enum_value_ordered_classattr_0 },
	21,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_classattr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_custom_type_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1ml_backend__ilasm__type_ctor_info_custom_type_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_custom_type_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_qstring_or_bytes_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_custom_decl_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_custom_type_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1ml_backend__ilasm__type_ctor_info_custom_type_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_qstring_or_bytes_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_custom_decl_0_0 = {
	"custom_decl",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_custom_decl_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_custom_decl_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_custom_decl_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_custom_decl_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_custom_decl_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_custom_decl_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_custom_decl_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_custom_decl_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__custom_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__custom_decl_0_0)),
	"ml_backend.ilasm",
	"custom_decl",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_custom_decl_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_custom_decl_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_custom_decl_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_custom_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_il_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_custom_type_0_0 = {
	"type",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_custom_type_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_methodref_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_methodref_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_custom_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_methodref_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_custom_type_0_1 = {
	"methodref",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_custom_type_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_custom_type_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_custom_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_custom_type_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_custom_type_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_custom_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_custom_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_custom_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_custom_type_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_custom_type_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_custom_type_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_custom_type_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_custom_type_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__custom_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__custom_type_0_0)),
	"ml_backend.ilasm",
	"custom_type",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_custom_type_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_custom_type_0 },
	2,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_custom_type_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_data_item_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_body_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_data_item_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_body_0_0 = {
	"itemlist",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_body_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_body_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_body_0_1 = {
	"item",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_body_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_data_body_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_body_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_data_body_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_body_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_data_body_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_data_body_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_data_body_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_data_body_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_body_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_body_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_data_body_0[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_data_body_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__data_body_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__data_body_0_0)),
	"ml_backend.ilasm",
	"data_body",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_data_body_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_data_body_0 },
	2,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_data_body_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_float32_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_float32_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_0 = {
	"float32",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_float64_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_float64_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_1 = {
	"float64",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int64_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int64_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_2 = {
	"int64",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int32_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_3 = {
	"int32",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int16_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int16_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_4 = {
	"int16",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int8_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_5 = {
	"int8",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_6 = {
	"char_ptr",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_7 = {
	"&",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_data_item_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_int8_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_8 = {
	"bytearray",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_data_item_0_8,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_2

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_3[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_5,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_6,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_7,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_8

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_data_item_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_2 },
	{ 6, MR_SECTAG_REMOTE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_data_item_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_data_item_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_7,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_8,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_6,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_0,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_data_item_0_5
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_data_item_0[] = {
	3,
	4,
	7,
	6,
	5,
	8,
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__data_item_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__data_item_0_0)),
	"ml_backend.ilasm",
	"data_item",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_data_item_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_data_item_0 },
	9,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_data_item_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_extends_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_extends_0_0 = {
	"extends",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_extends_0_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_extends_0_1 = {
	"extends_nothing",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_extends_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_extends_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_extends_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_extends_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_extends_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilasm__du_stag_ordered_extends_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_extends_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_extends_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_extends_0_0,
	&mercury_data_ml_backend__ilasm__du_functor_desc_extends_0_1
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_extends_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_extends_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__extends_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__extends_0_0)),
	"ml_backend.ilasm",
	"extends",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_extends_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_extends_0 },
	2,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_extends_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_field_init_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_0 = {
	"data_item",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_field_init_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_field_init_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_1 = {
	"wchar_ptr",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_field_init_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_field_init_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int32_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_2 = {
	"binary_float32",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_field_init_0_2,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_field_init_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int64_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_3 = {
	"binary_float64",
	1,
	0,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_field_init_0_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_2

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_3[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_3

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_field_init_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_field_init_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_field_init_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_0,
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_init_0_1
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_field_init_0[] = {
	2,
	3,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_field_init_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__field_init_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__field_init_0_0)),
	"ml_backend.ilasm",
	"field_init",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_field_init_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_field_init_0 },
	4,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_field_init_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_0 = {
	"none",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_field_initializer_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_1 = {
	"at",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_field_initializer_0_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_field_init_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_field_initializer_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_field_init_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_2 = {
	"equals",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_field_initializer_0_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_field_initializer_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_field_initializer_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_field_initializer_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_2

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_field_initializer_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilasm__du_stag_ordered_field_initializer_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_field_initializer_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_field_initializer_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_field_initializer_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_field_initializer_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_field_initializer_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_field_initializer_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__field_initializer_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__field_initializer_0_0)),
	"ml_backend.ilasm",
	"field_initializer",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_field_initializer_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_field_initializer_0 },
	3,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_field_initializer_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_0 = {
	"assembly",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_1 = {
	"famandassem",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_2 = {
	"family",
	2
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_3 = {
	"famorassem",
	3
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_4 = {
	"initonly",
	4
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_5 = {
	"literal",
	5
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_6 = {
	"notserialized",
	6
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_7 = {
	"pinvokeimpl",
	7
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_8 = {
	"private",
	8
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_9 = {
	"privatescope",
	9
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_10 = {
	"public",
	10
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_11 = {
	"static",
	11
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_12 = {
	"volatile",
	12
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_value_ordered_fieldattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_8,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_9,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_10,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_11,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_12
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_name_ordered_fieldattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_8,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_9,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_10,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_11,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_fieldattr_0_12
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_fieldattr_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__fieldattr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__fieldattr_0_0)),
	"ml_backend.ilasm",
	"fieldattr",
	{ (void *)mercury_data_ml_backend__ilasm__enum_name_ordered_fieldattr_0 },
	{ (void *)mercury_data_ml_backend__ilasm__enum_value_ordered_fieldattr_0 },
	13,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_fieldattr_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_float32_0 = {
	"float32",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_float32_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_float32_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__float32_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__float32_0_0)),
	"ml_backend.ilasm",
	"float32",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_float32_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_float32_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_float32_0
};

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_float64_0 = {
	"float64",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_float64_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_float64_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__float64_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__float64_0_0)),
	"ml_backend.ilasm",
	"float64",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_float64_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_float64_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_float64_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_classattr_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_extends_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_implements_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_class_member_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_0 = {
	"ildecl_class",
	5,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_0,
	NULL,
	NULL
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_il_decl_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_il_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_1 = {
	"ildecl_namespace",
	2,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_method_body_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_2 = {
	"ildecl_method",
	2,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
	&mercury_data_maybe__type_ctor_info_maybe_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_bool__type_ctor_info_bool_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_data_body_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_maybe__ti_maybe_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_data_body_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_3 = {
	"ildecl_data",
	3,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_3,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_4 = {
	"ildecl_file",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_4,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_5 = {
	"ildecl_extern_module",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_5,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_assembly_decl_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_assembly_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_6 = {
	"ildecl_extern_assembly",
	2,
	0,
	MR_SECTAG_REMOTE,
	3,
	3,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_6,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_7[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_7 = {
	"ildecl_assembly",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	4,
	7,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_7,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_8[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_8 = {
	"ildecl_custom",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	5,
	8,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_8,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_9[] = {
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_9 = {
	"ildecl_comment_term",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	6,
	9,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_9,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_10[] = {
	(MR_PseudoTypeInfo) 513
};

const MR_DuExistLocn mercury_data_ml_backend__ilasm__exist_locns_il_decl_0_10[] = {
	{ 0, -1 }
};

static const MR_DuExistInfo mercury_data_ml_backend__ilasm__exist_info_il_decl_0_10 = {
	1,
	0,
	0,
	mercury_data_ml_backend__ilasm__exist_locns_il_decl_0_10,
	
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_10 = {
	"ildecl_comment_thing",
	1,
	1,
	MR_SECTAG_REMOTE,
	3,
	7,
	10,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_10,
	NULL,
	&mercury_data_ml_backend__ilasm__exist_info_il_decl_0_10
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_il_decl_0_11[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_11 = {
	"ildecl_comment",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	8,
	11,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_il_decl_0_11,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_2

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_3[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_5,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_6,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_7,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_8,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_9,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_10,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_11

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_il_decl_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_2 },
	{ 9, MR_SECTAG_REMOTE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_il_decl_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_il_decl_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_7,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_0,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_11,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_9,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_10,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_8,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_3,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_6,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_5,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_il_decl_0_1
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_il_decl_0[] = {
	1,
	11,
	10,
	6,
	9,
	8,
	7,
	0,
	5,
	3,
	4,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__il_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__il_decl_0_0)),
	"ml_backend.ilasm",
	"il_decl",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_il_decl_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_il_decl_0 },
	12,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_il_decl_0
};

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_ilasm_info_0 = {
	"ilasm_info",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	"current_assembly"
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_ilasm_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_info_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__ilasm_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__ilasm_info_0_0)),
	"ml_backend.ilasm",
	"ilasm_info",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_ilasm_info_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_ilasm_info_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_ilasm_info_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_ilasm_out_info_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0,
	(MR_PseudoTypeInfo) &mercury_data_bool__type_ctor_info_bool_0
};

const MR_ConstString mercury_data_ml_backend__ilasm__field_names_ilasm_out_info_0_0[] = {
	"ilaoi_auto_comments",
	"ilaoi_line_numbers",
	"ilaoi_debug_il_asm",
	"ilaoi_separate_assemblies"
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_ilasm_out_info_0_0 = {
	"ilasm_out_info",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_ilasm_out_info_0_0,
	mercury_data_ml_backend__ilasm__field_names_ilasm_out_info_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_ilasm_out_info_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_ilasm_out_info_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_ilasm_out_info_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_ilasm_out_info_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_ilasm_out_info_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_ilasm_out_info_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_ilasm_out_info_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_out_info_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__ilasm_out_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__ilasm_out_info_0_0)),
	"ml_backend.ilasm",
	"ilasm_out_info",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_ilasm_out_info_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_ilasm_out_info_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_ilasm_out_info_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_0 = {
	"il",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_1 = {
	"implemented",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_2 = {
	"internalcall",
	2
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_3 = {
	"managed",
	3
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_4 = {
	"native",
	4
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_5 = {
	"ole",
	5
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_6 = {
	"optil",
	6
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_7 = {
	"runtime",
	7
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_8 = {
	"unmanaged",
	8
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_value_ordered_implattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_8
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_name_ordered_implattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_implattr_0_8
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_implattr_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	8 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_implattr_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__implattr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__implattr_0_0)),
	"ml_backend.ilasm",
	"implattr",
	{ (void *)mercury_data_ml_backend__ilasm__enum_name_ordered_implattr_0 },
	{ (void *)mercury_data_ml_backend__ilasm__enum_value_ordered_implattr_0 },
	9,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_implattr_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_structured_name_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_structured_name_0
}};

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_implements_0 = {
	"implements",
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_structured_name_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_implements_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_implements_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__implements_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__implements_0_0)),
	"ml_backend.ilasm",
	"implements",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_implements_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_implements_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_implements_0
};

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_int16_0 = {
	"int16",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_int16_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int16_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__int16_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__int16_0_0)),
	"ml_backend.ilasm",
	"int16",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int16_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int16_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_int16_0
};

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_int32_0 = {
	"int32",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_int32_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int32_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__int32_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__int32_0_0)),
	"ml_backend.ilasm",
	"int32",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int32_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int32_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_int32_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_integer__type_ctor_info_integer_0;
extern const MR_TypeCtorInfo_Struct mercury_data_integer__type_ctor_info_integer_0;

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_int64_0 = {
	"int64",
	(MR_PseudoTypeInfo) &mercury_data_integer__type_ctor_info_integer_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_int64_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int64_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__int64_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__int64_0_0)),
	"ml_backend.ilasm",
	"int64",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int64_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int64_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_int64_0
};

static const MR_NotagFunctorDesc mercury_data_ml_backend__ilasm__notag_functor_desc_int8_0 = {
	"int8",
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0,
	NULL
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_int8_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_int8_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_NOTAG_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__int8_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__int8_0_0)),
	"ml_backend.ilasm",
	"int8",
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int8_0 },
	{ (void *)&mercury_data_ml_backend__ilasm__notag_functor_desc_int8_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_int8_0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_0 = {
	"abstract",
	0
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_1 = {
	"assembly",
	1
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_2 = {
	"famandassem",
	2
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_3 = {
	"family",
	3
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_4 = {
	"famorassem",
	4
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_5 = {
	"final",
	5
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_6 = {
	"hidebysig",
	6
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_7 = {
	"newslot",
	7
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_8 = {
	"private",
	8
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_9 = {
	"privatescope",
	9
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_10 = {
	"public",
	10
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_11 = {
	"rtspecialname",
	11
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_12 = {
	"specialname",
	12
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_13 = {
	"static",
	13
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_14 = {
	"synchronized",
	14
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_15 = {
	"virtual",
	15
};

static const MR_EnumFunctorDesc mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_16 = {
	"pinvokeimpl",
	16
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_value_ordered_methattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_8,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_9,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_10,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_11,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_12,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_13,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_14,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_15,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_16
};

const MR_EnumFunctorDescPtr mercury_data_ml_backend__ilasm__enum_name_ordered_methattr_0[] = {
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_0,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_1,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_2,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_3,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_4,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_5,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_6,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_7,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_16,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_8,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_9,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_10,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_11,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_12,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_13,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_14,
	&mercury_data_ml_backend__ilasm__enum_functor_desc_methattr_0_15
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_methattr_0[] = {
	0,
	1,
	2,
	3,
	4,
	5,
	6,
	7,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	8 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__methattr_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__methattr_0_0)),
	"ml_backend.ilasm",
	"methattr",
	{ (void *)mercury_data_ml_backend__ilasm__enum_name_ordered_methattr_0 },
	{ (void *)mercury_data_ml_backend__ilasm__enum_value_ordered_methattr_0 },
	17,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_methattr_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int32_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_0 = {
	"emitbyte",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_int32_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_1 = {
	"maxstack",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_2 = {
	"entrypoint",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_3 = {
	"zeroinit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_4 = {
	"custom",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	0,
	4,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_4,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_instr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_instr_0
}};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_5[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilds__type_ctor_info_instr_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_5 = {
	"instrs",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	1,
	5,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_5,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_6[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_6 = {
	"label",
	1,
	0,
	MR_SECTAG_REMOTE,
	3,
	2,
	6,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_method_body_decl_0_6,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_3

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_1

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_3[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_5,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_6

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_method_body_decl_0[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_2 },
	{ 3, MR_SECTAG_REMOTE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_method_body_decl_0_3 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_method_body_decl_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_4,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_0,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_5,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_6,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_method_body_decl_0_3
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_method_body_decl_0[] = {
	1,
	5,
	2,
	6,
	0,
	3,
	4 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0 = {
	0,
	14,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__method_body_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__method_body_decl_0_0)),
	"ml_backend.ilasm",
	"method_body_decl",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_method_body_decl_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_method_body_decl_0 },
	7,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_method_body_decl_0
};

const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_method_defn_0 = {
	0,
	14,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__method_defn_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__method_defn_0_0)),
	"ml_backend.ilasm",
	"method_defn",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_method_body_decl_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_methattr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_member_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signature_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_implattr_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_implattr_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_ml_backend__ilasm__type_ctor_info_implattr_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_member_name_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_signature_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_methodhead_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_methattr_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_member_name_0,
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_signature_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_implattr_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_methodhead_0_0 = {
	"methodhead",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_methodhead_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_methodhead_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_methodhead_0_0

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_methodhead_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_methodhead_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_methodhead_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_methodhead_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_methodhead_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0 = {
	0,
	14,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__methodhead_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__methodhead_0_0)),
	"ml_backend.ilasm",
	"methodhead",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_methodhead_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_methodhead_0 },
	1,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_methodhead_0
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_qstring_or_bytes_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_0 = {
	"qstring",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_qstring_or_bytes_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_qstring_or_bytes_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1ml_backend__ilasm__type_ctor_info_int8_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_1 = {
	"bytes",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_qstring_or_bytes_0_1,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_2 = {
	"no_initalizer",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_qstring_or_bytes_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_2

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_qstring_or_bytes_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_qstring_or_bytes_0_2[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_qstring_or_bytes_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_ml_backend__ilasm__du_stag_ordered_qstring_or_bytes_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_qstring_or_bytes_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_qstring_or_bytes_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_qstring_or_bytes_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_1,
	&mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_2,
	&mercury_data_ml_backend__ilasm__du_functor_desc_qstring_or_bytes_0_0
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_qstring_or_bytes_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_qstring_or_bytes_0 = {
	0,
	14,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0)),
	"ml_backend.ilasm",
	"qstring_or_bytes",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_qstring_or_bytes_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_qstring_or_bytes_0 },
	3,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_qstring_or_bytes_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0;

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_ref_or_value_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_ref_or_value_0_0 = {
	"reference",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_ref_or_value_0_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_ml_backend__ilasm__field_types_ref_or_value_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_ml_backend__ilds__type_ctor_info_simple_type_0
};

static const MR_DuFunctorDesc mercury_data_ml_backend__ilasm__du_functor_desc_ref_or_value_0_1 = {
	"value",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_ml_backend__ilasm__field_types_ref_or_value_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_ref_or_value_0_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_ref_or_value_0_0

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_stag_ordered_ref_or_value_0_1[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_ref_or_value_0_1

};

const MR_DuPtagLayout mercury_data_ml_backend__ilasm__du_ptag_ordered_ref_or_value_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_ref_or_value_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_ml_backend__ilasm__du_stag_ordered_ref_or_value_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_ml_backend__ilasm__du_name_ordered_ref_or_value_0[] = {
	&mercury_data_ml_backend__ilasm__du_functor_desc_ref_or_value_0_0,
	&mercury_data_ml_backend__ilasm__du_functor_desc_ref_or_value_0_1
};

const MR_Integer mercury_data_ml_backend__ilasm__functor_number_map_ref_or_value_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilasm__type_ctor_info_ref_or_value_0 = {
	0,
	14,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___ml_backend__ilasm__ref_or_value_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___ml_backend__ilasm__ref_or_value_0_0)),
	"ml_backend.ilasm",
	"ref_or_value",
	{ (void *)mercury_data_ml_backend__ilasm__du_name_ordered_ref_or_value_0 },
	{ (void *)mercury_data_ml_backend__ilasm__du_ptag_ordered_ref_or_value_0 },
	2,
	4,
	mercury_data_ml_backend__ilasm__functor_number_map_ref_or_value_0
};


static const MR_UserClosureId
mercury_data__closure_layout__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_assembly_decl_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_hexbyte",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
1831,
"21"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_assembly_decl_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_hexbyte",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
1836,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_trace_instr_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_2129",
4,
0
},
"ml_backend.ilasm",
"ilasm.m",
2125,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_instr_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_target",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
1564,
"573"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_string_constant_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_2129",
4,
0
},
"ml_backend.ilasm",
"ilasm.m",
2125,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_fieldref_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_method_param_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_local_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_method_body_decl_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_debug_instruction",
6,
0
},
"ml_backend.ilasm",
"ilasm.m",
1070,
"12"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_method_body_decl_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_instruction",
6,
0
},
"ml_backend.ilasm",
"ilasm.m",
1074,
"16"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_class_member_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_571",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
571,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_class_member_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_571",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
571,
"38"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_decl_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_520",
6,
0
},
"ml_backend.ilasm",
"ilasm.m",
520,
"158"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_decl_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_classattr",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
417,
"17"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_comment_string_3_0_2 = {
{
MR_FUNCTION,
"pprint",
"pprint",
"text",
2,
0
},
"ml_backend.ilasm",
"ilasm.m",
2095,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_comment_string_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_2096",
1,
0
},
"ml_backend.ilasm",
"ilasm.m",
2096,
"11"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_data_body_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_data_item",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
2006,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_data_item_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_hexbyte",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
2047,
"80"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_custom_decl_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_hexbyte",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
1861,
"30"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_custom_decl_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_custom_type_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodref_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodref_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodhead_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_656",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
656,
"24"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_methodhead_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_647",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
647,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_type_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_modifier",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
795,
"10"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_structured_name_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_2129",
4,
0
},
"ml_backend.ilasm",
"ilasm.m",
2125,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_nested_class_quals_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_1957",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
1957,
"5"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_dotted_name_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_id",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
1951,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_2129",
4,
0
},
"ml_backend.ilasm",
"ilasm.m",
2125,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_bounds_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"output_bound",
3,
0
},
"ml_backend.ilasm",
"ilasm.m",
1038,
"8"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__output_id_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_2129",
4,
0
},
"ml_backend.ilasm",
"ilasm.m",
2125,
"6"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__ilasm__quote_id_2_0_1 = {
{
MR_PREDICATE,
"ml_backend.ilasm",
"ml_backend.ilasm",
"lambda_ilasm_m_2129",
4,
0
},
"ml_backend.ilasm",
"ilasm.m",
2125,
"6"
};


MR_decl_entry(io__write_string_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module0)
	MR_init_entry1(ml_backend__ilasm__ilasm_output_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__ilasm_output_6_0);
	MR_init_label2(ml_backend__ilasm__ilasm_output_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ilasm_output'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__ilasm_output_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = (MR_Word) MR_string_const("\n\n", 2);
	MR_r4 = MR_tempr1;
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__ilasm_output_6_0_i2);
MR_def_label(ml_backend__ilasm__ilasm_output_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__ilasm_output_6_0_i3);
MR_def_label(ml_backend__ilasm__ilasm_output_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module1)
	MR_init_entry1(ml_backend__ilasm__ilasm_output_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__ilasm_output_4_0);
	MR_init_label5(ml_backend__ilasm__ilasm_output_4_0,2,3,4,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'ilasm_output'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__ilasm__ilasm_output_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Integer) 130;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ilasm__ilasm_output_4_0_i2);
MR_def_label(ml_backend__ilasm__ilasm_output_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 129;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ilasm__ilasm_output_4_0_i3);
MR_def_label(ml_backend__ilasm__ilasm_output_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 71;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ilasm__ilasm_output_4_0_i4);
MR_def_label(ml_backend__ilasm__ilasm_output_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 151;
	}
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__ilasm__ilasm_output_4_0_i5);
MR_def_label(ml_backend__ilasm__ilasm_output_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const("\n\n", 2);
	MR_r4 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__ilasm_output_4_0_i7);
MR_def_label(ml_backend__ilasm__ilasm_output_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__to_char_list_2_0);
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(string__from_rev_char_list_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module2)
	MR_init_entry1(ml_backend__ilasm__quote_id_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__quote_id_2_0);
	MR_init_label3(ml_backend__ilasm__quote_id_2_0,2,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'quote_id'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__quote_id_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ml_backend__ilasm__quote_id_2_0_i2);
MR_def_label(ml_backend__ilasm__quote_id_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ilasm__quote_id_2_0_i5);
MR_def_label(ml_backend__ilasm__quote_id_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		ml_backend__ilasm__quote_id_2_0_i6);
MR_def_label(ml_backend__ilasm__quote_id_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(string__append_list_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module3)
	MR_init_entry1(ml_backend__ilasm__output_id_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_id_3_0);
	MR_init_label4(ml_backend__ilasm__output_id_3_0,2,5,6,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_id'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_id_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ml_backend__ilasm__output_id_3_0_i2);
MR_def_label(ml_backend__ilasm__output_id_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,1);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ilasm__output_id_3_0_i5);
MR_def_label(ml_backend__ilasm__output_id_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		ml_backend__ilasm__output_id_3_0_i6);
MR_def_label(ml_backend__ilasm__output_id_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ilasm__output_id_3_0_i10);
MR_def_label(ml_backend__ilasm__output_id_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module4)
	MR_init_entry1(ml_backend__ilasm__output_member_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_member_name_3_0);
	MR_init_label2(ml_backend__ilasm__output_member_name_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_member_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_member_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_member_name_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const(".cctor", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_member_name_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_member_name_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const(".ctor", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_member_name_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__ilasm__output_id_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module5)
	MR_init_entry1(ml_backend__ilasm__name_to_simple_type_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__name_to_simple_type_2_0);
	MR_init_label10(ml_backend__ilasm__name_to_simple_type_2_0,9,11,13,15,17,19,21,23,25,27)
	MR_init_label7(ml_backend__ilasm__name_to_simple_type_2_0,29,31,33,35,37,39,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name_to_simple_type'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__name_to_simple_type_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("mscorlib", 8)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_r1, 1);
	MR_r3 = MR_tempr3;
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("System", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i1);
	}
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Byte", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i9);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Char", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i11);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Int16", 5)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i13);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Int32", 5)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i15);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Int64", 5)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i17);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,4);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("SByte", 5)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i19);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Double", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i21);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,6);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("IntPtr", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i23);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,7);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Object", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i25);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,8);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Single", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i27);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,9);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("String", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i29);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,4,10);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("UInt16", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i31);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,11);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("UInt32", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i33);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,12);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("UInt64", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i35);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,13);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("Boolean", 7)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i37);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,14);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("UIntPtr", 7)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i39);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,15);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r3, MR_string_const("TypedReference", 14)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__name_to_simple_type_2_0_i1);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(1,4,16);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(ml_backend__ilasm__name_to_simple_type_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_bound_0;
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module6)
	MR_init_entry1(ml_backend__ilasm__output_bounds_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_bounds_3_0);
	MR_init_label2(ml_backend__ilasm__output_bounds_3_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_bounds'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_bounds_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_bounds_3_0_i2);
MR_def_label(ml_backend__ilasm__output_bounds_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, bound);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_bounds_3_0_i4);
MR_def_label(ml_backend__ilasm__output_bounds_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module7)
	MR_init_entry1(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0);
	MR_init_label7(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,7,10,11,15,16,34,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'maybe_output_quoted_assembly_name'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i36);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i36);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i7);
MR_def_label(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,2);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i10);
MR_def_label(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i11);
MR_def_label(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i15);
MR_def_label(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i16);
MR_def_label(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0_i34);
MR_def_label(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(ml_backend__ilasm_module8)
	MR_init_entry1(ml_backend__ilasm__output_dotted_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_dotted_name_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_dotted_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_dotted_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ml_backend__ilasm_module9)
	MR_init_entry1(ml_backend__ilasm__output_nested_class_quals_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_nested_class_quals_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_nested_class_quals'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_nested_class_quals_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,2);
	MR_r4 = MR_tempr1;
	MR_np_tailcall_ent(list__foldl_4_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__prefix_2_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module10)
	MR_init_entry1(ml_backend__ilasm__output_structured_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_structured_name_5_0);
	MR_init_label10(ml_backend__ilasm__output_structured_name_5_0,9,12,13,17,18,3,28,30,31,32)
	MR_init_label6(ml_backend__ilasm__output_structured_name_5_0,33,24,25,23,37,38)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_structured_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_structured_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_structured_name_5_0_i3);
	}
	MR_sv(3) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_structured_name_5_0_i37);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_structured_name_5_0_i37);
	}
	}
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i9);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,3);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ilasm__output_structured_name_5_0_i12);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i13);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,3,0);
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\'", 1);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	MR_np_call_localret_ent(string__append_list_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i17);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i18);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i33);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 3);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_structured_name_5_0_i23);
	}
	MR_tempr2 = MR_r5;
	MR_sv(5) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr3 = MR_r3;
	MR_sv(3) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(2) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("", 0)) == 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_structured_name_5_0_i25);
	}
	MR_sv(1) = MR_r2;
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(string__prefix_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i28);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_structured_name_5_0_i24);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(".dll", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i30);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__ilasm__quote_id_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i31);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("]", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i32);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("[.module ", 9);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_structured_name_5_0_i33);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_structured_name_5_0_i37);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,
		ml_backend__ilasm__output_structured_name_5_0_i37);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_tfield(0, MR_r5, 0);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__maybe_output_quoted_assembly_name_4_0,
		ml_backend__ilasm__output_structured_name_5_0_i37);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_dotted_name_3_0,
		ml_backend__ilasm__output_structured_name_5_0_i38);
MR_def_label(ml_backend__ilasm__output_structured_name_5_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(ml_backend__ilasm__output_nested_class_quals_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0;

MR_BEGIN_MODULE(ml_backend__ilasm_module11)
	MR_init_entry1(ml_backend__ilasm__output_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_type_6_0);
	MR_init_label1(ml_backend__ilasm__output_type_6_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,3);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_type_6_0_i3);
MR_def_label(ml_backend__ilasm__output_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__ilasm__output_simple_type_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__unexpected_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module12)
	MR_init_entry1(ml_backend__ilasm__output_simple_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_simple_type_6_0);
	MR_init_label10(ml_backend__ilasm__output_simple_type_6_0,208,3,5,7,9,11,13,15,17,19)
	MR_init_label10(ml_backend__ilasm__output_simple_type_6_0,21,23,25,27,29,31,33,35,37,42)
	MR_init_label10(ml_backend__ilasm__output_simple_type_6_0,46,40,49,39,55,125,58,53,61,52)
	MR_init_label9(ml_backend__ilasm__output_simple_type_6_0,65,64,68,67,71,72,70,73,74)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_simple_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_simple_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,13)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i3);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("bool", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,14)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i5);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,10)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i7);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("float32", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,11)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i9);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("float64", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i11);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("int16", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i13);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("int32", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i15);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("int64", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i17);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("int8", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,12)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i19);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("native float", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i21);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("native int", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,9)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i23);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("native unsigned int", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,15)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i25);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("object", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,17)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i27);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("refany", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,16)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i29);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i31);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("unsigned int16", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i33);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("unsigned int32", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,7)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i35);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("unsigned int64", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i37);
	}
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("unsigned int8", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i39);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ilasm__name_to_simple_type_2_0,
		ml_backend__ilasm__output_simple_type_6_0_i42);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i40);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i125);
	}
	MR_r1 = (MR_Word) MR_string_const("class ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i46);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("class ", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i49);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i52);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(2, MR_r2, 0);
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r3;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ilasm__name_to_simple_type_2_0,
		ml_backend__ilasm__output_simple_type_6_0_i55);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i53);
	}
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i58);
	}
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_mask_field(MR_r2, 0);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i208);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ilasm", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ilasm.output_simple_type\'/6", 49);
	MR_r3 = (MR_Word) MR_string_const("builtin reference type", 22);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_tempr2 = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("valuetype ", 10);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i61);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i64);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_type_6_0,
		ml_backend__ilasm__output_simple_type_6_0_i65);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("&", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i72);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i67);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_type_6_0,
		ml_backend__ilasm__output_simple_type_6_0_i68);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("*", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i72);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_6_0_i70);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_type_6_0,
		ml_backend__ilasm__output_simple_type_6_0_i71);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_bounds_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i72);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("interface ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_simple_type_6_0_i73);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_simple_type_6_0_i74);
MR_def_label(ml_backend__ilasm__output_simple_type_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module13)
	MR_init_entry1(ml_backend__ilasm__output_ret_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_ret_type_6_0);
	MR_init_label2(ml_backend__ilasm__output_ret_type_6_0,4,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_ret_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_ret_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_ret_type_6_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_ret_type_6_0_i4);
MR_def_label(ml_backend__ilasm__output_ret_type_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(ml_backend__ilasm__output_ret_type_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__ilasm__output_simple_type_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_il_call_kind_0;
MR_decl_entry(io__write_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module14)
	MR_init_entry1(ml_backend__ilasm__output_name_signature_and_call_conv_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_name_signature_and_call_conv_8_0);
	MR_init_label10(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,4,3,6,7,8,11,10,12,9,14)
	MR_init_label10(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,16,17,19,21,13,26,25,27,28,44)
	MR_init_label6(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,30,31,32,34,35,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_name_signature_and_call_conv'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_name_signature_and_call_conv_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i3);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, il_call_kind);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(io__write_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i4);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i6);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_tfield(0, MR_r2, 1);
	MR_sv(5) = MR_tfield(0, MR_r2, 2);
	MR_sv(6) = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("instance ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i6);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i7);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i8);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i11);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_sv(6);
	MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i9);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(4), 0);
	MR_r3 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i12);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i13);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i16);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i17);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const(".cctor", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i13);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const(".ctor", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i13);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i13);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("()", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i26);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(7);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i27);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(5);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_method_param_6_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i28);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i30);
	}
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t)", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i37);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i31);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_method_param_6_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i32);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i34);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t", 4);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i44);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i35);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_name_signature_and_call_conv_8_0_i44);
MR_def_label(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module15)
	MR_init_entry1(ml_backend__ilasm__output_methodhead_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_methodhead_6_0);
	MR_init_label5(ml_backend__ilasm__output_methodhead_6_0,3,12,5,9,11)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_methodhead'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_methodhead_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_r3;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methattr);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,4);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_methodhead_6_0_i3);
MR_def_label(ml_backend__ilasm__output_methodhead_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodhead_6_0_i5);
	}
MR_def_label(ml_backend__ilasm__output_methodhead_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(3);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r5 = MR_sv(6);
	MR_r4 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,
		ml_backend__ilasm__output_methodhead_6_0_i9);
MR_def_label(ml_backend__ilasm__output_methodhead_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodhead_6_0_i12);
MR_def_label(ml_backend__ilasm__output_methodhead_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, implattr);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,5);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_methodhead_6_0_i11);
MR_def_label(ml_backend__ilasm__output_methodhead_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module16)
	MR_init_entry1(ml_backend__ilasm__output_class_name_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_class_name_6_0);
	MR_init_label1(ml_backend__ilasm__output_class_name_6_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_class_name'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_class_name_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r3;
	MR_sv(1) = MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_class_name_6_0_i2);
MR_def_label(ml_backend__ilasm__output_class_name_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module17)
	MR_init_entry1(ml_backend__ilasm__output_class_member_name_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_class_member_name_5_0);
	MR_init_label4(ml_backend__ilasm__output_class_member_name_5_0,2,3,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_class_member_name'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_class_member_name_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r3, 1);
	MR_r3 = MR_tfield(0, MR_r3, 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_class_member_name_5_0_i2);
MR_def_label(ml_backend__ilasm__output_class_member_name_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("::", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_name_5_0_i3);
MR_def_label(ml_backend__ilasm__output_class_member_name_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_name_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const(".cctor", 6);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_class_member_name_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_name_5_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const(".ctor", 5);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_class_member_name_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ilasm__output_id_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module18)
	MR_init_entry1(ml_backend__ilasm__output_methodref_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_methodref_6_0);
	MR_init_label10(ml_backend__ilasm__output_methodref_6_0,5,6,4,9,8,10,11,12,15,14)
	MR_init_label10(ml_backend__ilasm__output_methodref_6_0,16,18,19,47,21,22,24,25,27,28)
	MR_init_label10(ml_backend__ilasm__output_methodref_6_0,3,32,33,31,34,35,36,39,38,40)
	MR_init_label2(ml_backend__ilasm__output_methodref_6_0,41,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_methodref'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_methodref_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i3);
	}
	MR_r5 = MR_tfield(0, MR_tfield(1, MR_r2, 0), 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i5);
	}
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 3);
	MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i4);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 2);
	MR_sv(5) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 3);
	MR_r1 = (MR_Word) MR_string_const("instance ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i6);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(5);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i8);
	}
	MR_sv(1) = MR_r1;
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i9);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_sv(5);
	MR_r1 = (MR_Word) MR_string_const("\n\t\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i11);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_methodref_6_0_i10);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i11);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_member_name_3_0,
		ml_backend__ilasm__output_methodref_6_0_i12);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i14);
	}
	MR_r1 = (MR_Word) MR_string_const("()\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i15);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n\t\t\t", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i16);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(4);
	MR_sv(2) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr1 = MR_tempr3;
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,6);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_methodref_6_0_i18);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_methodref_6_0_i19);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i21);
	}
MR_def_label(ml_backend__ilasm__output_methodref_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t\t)", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i42);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t\t", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i22);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,7);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_methodref_6_0_i24);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_methodref_6_0_i25);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i27);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t\t", 5);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_methodref_6_0_i47);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t\t", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i28);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t\t", 5);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_methodref_6_0_i47);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r5 = MR_tfield(0, MR_tfield(0, MR_r2, 0), 0);
	if (MR_INT_NE(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i32);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r5 = MR_tempr1;
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i31);
	}
MR_def_label(ml_backend__ilasm__output_methodref_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_tfield(0, MR_r2, 3);
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("instance ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i33);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__ilasm__output_ret_type_6_0,
		ml_backend__ilasm__output_methodref_6_0_i34);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i35);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_class_member_name_5_0,
		ml_backend__ilasm__output_methodref_6_0_i36);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_methodref_6_0_i38);
	}
	MR_r1 = (MR_Word) MR_string_const("()\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i39);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(\n\t\t\t", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i40);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t\t", 5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_methodref_6_0_i41);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t\t)", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_methodref_6_0_i42);
MR_def_label(ml_backend__ilasm__output_methodref_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module19)
	MR_init_entry1(ml_backend__ilasm__output_custom_type_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_custom_type_6_0);
	MR_init_label2(ml_backend__ilasm__output_custom_type_6_0,18,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_custom_type'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_custom_type_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_custom_type_6_0_i18);
	}
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__ilasm__output_methodref_6_0);
MR_def_label(ml_backend__ilasm__output_custom_type_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,8);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_custom_type_6_0_i6);
MR_def_label(ml_backend__ilasm__output_custom_type_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(ml_backend__ilasm__output_simple_type_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__sorry_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module20)
	MR_init_entry1(ml_backend__ilasm__output_custom_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_custom_decl_6_0);
	MR_init_label10(ml_backend__ilasm__output_custom_decl_6_0,2,4,5,7,10,11,12,13,16,18)
	MR_init_label4(ml_backend__ilasm__output_custom_decl_6_0,19,15,14,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_custom_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_custom_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".custom ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i2);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_custom_decl_6_0_i4);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ilasm__output_custom_type_6_0,
		ml_backend__ilasm__output_custom_decl_6_0_i13);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_sv(3), 0);
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i5);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(3),1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_custom_decl_6_0_i7);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ilasm__output_methodref_6_0,
		ml_backend__ilasm__output_custom_decl_6_0_i11);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,9);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_custom_decl_6_0_i10);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_custom_decl_6_0_i11);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i12);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_custom_type_6_0,
		ml_backend__ilasm__output_custom_decl_6_0_i13);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(4),2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_custom_decl_6_0_i15);
	}
	MR_sv(1) = MR_tfield(2, MR_sv(4), 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = (", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i16);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,10);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_custom_decl_6_0_i18);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i19);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i21);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ilasm", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ilasm.output_custom_decl\'/6", 49);
	MR_r3 = (MR_Word) MR_string_const("unexpected custom_decl", 22);
	MR_np_call_localret_ent(require__sorry_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i14);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_custom_decl_6_0_i21);
MR_def_label(ml_backend__ilasm__output_custom_decl_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_float_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module21)
	MR_init_entry1(ml_backend__ilasm__output_float64_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_float64_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_float64'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_float64_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__integer__to_string_1_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module22)
	MR_init_entry1(ml_backend__ilasm__output_int64_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_int64_3_0);
	MR_init_label1(ml_backend__ilasm__output_int64_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_int64'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_int64_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__integer__to_string_1_0,
		ml_backend__ilasm__output_int64_3_0_i2);
MR_def_label(ml_backend__ilasm__output_int64_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module23)
	MR_init_entry1(ml_backend__ilasm__output_int32_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_int32_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_int32'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_int32_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module24)
	MR_init_entry1(ml_backend__ilasm__output_int16_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_int16_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_int16'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_int16_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module25)
	MR_init_entry1(ml_backend__ilasm__output_int8_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_int8_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_int8'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_int8_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module26)
	MR_init_entry1(ml_backend__ilasm__output_data_item_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_data_item_3_0);
	MR_init_label10(ml_backend__ilasm__output_data_item_3_0,4,3,8,7,12,11,16,15,20,19)
	MR_init_label8(ml_backend__ilasm__output_data_item_3_0,25,24,29,28,33,32,36,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_data_item'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_data_item_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i3);
	}
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("float32(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i4);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_float_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i7);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("float64(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i8);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_float64_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i11);
	}
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("int64(", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i12);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_int64_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i15);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("&(", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i16);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,5)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i19);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("bytearray(", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i20);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,11);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i24);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("char *(", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i25);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i28);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("int16(", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i29);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_int16_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_item_3_0_i32);
	}
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("int32(", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i33);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_int32_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("int8(", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_item_3_0_i36);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_int8_3_0,
		ml_backend__ilasm__output_data_item_3_0_i37);
MR_def_label(ml_backend__ilasm__output_data_item_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module27)
	MR_init_entry1(ml_backend__ilasm__output_data_body_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_data_body_3_0);
	MR_init_label3(ml_backend__ilasm__output_data_body_3_0,19,5,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_data_body'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_data_body_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_data_body_3_0_i19);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__ilasm__output_data_item_3_0);
MR_def_label(ml_backend__ilasm__output_data_body_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("{", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_data_body_3_0_i5);
MR_def_label(ml_backend__ilasm__output_data_body_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, data_item);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,12);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_data_body_3_0_i7);
MR_def_label(ml_backend__ilasm__output_data_body_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__pprint__line_0_0);
MR_decl_entry(fn__string__words_separator_2_0);
MR_decl_entry(fn__pprint__separated_3_0);
MR_decl_entry(fn__pprint__label_2_0);
MR_decl_entry(pprint__write_4_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module28)
	MR_init_entry1(ml_backend__ilasm__output_comment_string_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_comment_string_3_0);
	MR_init_label5(ml_backend__ilasm__output_comment_string_3_0,2,4,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_comment_string'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_comment_string_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("// ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_comment_string_3_0_i2);
MR_def_label(ml_backend__ilasm__output_comment_string_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_np_call_localret_ent(fn__pprint__line_0_0,
		ml_backend__ilasm__output_comment_string_3_0_i4);
MR_def_label(ml_backend__ilasm__output_comment_string_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,13);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__words_separator_2_0,
		ml_backend__ilasm__output_comment_string_3_0_i6);
MR_def_label(ml_backend__ilasm__output_comment_string_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,14);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__separated_3_0,
		ml_backend__ilasm__output_comment_string_3_0_i8);
MR_def_label(ml_backend__ilasm__output_comment_string_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("\t// ", 4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__label_2_0,
		ml_backend__ilasm__output_comment_string_3_0_i9);
MR_def_label(ml_backend__ilasm__output_comment_string_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Integer) 70;
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(pprint__write_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(varset__init_1_0);
MR_decl_entry(term_io__write_term_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(fn__pprint__to_doc_1_0);
MR_decl_entry(list__foldl2_6_2);

MR_BEGIN_MODULE(ml_backend__ilasm_module29)
	MR_init_entry1(ml_backend__ilasm__output_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_decl_6_0);
	MR_init_label10(ml_backend__ilasm__output_decl_6_0,4,6,89,8,10,12,13,14,11,16)
	MR_init_label10(ml_backend__ilasm__output_decl_6_0,17,18,92,20,19,22,23,24,3,27)
	MR_init_label10(ml_backend__ilasm__output_decl_6_0,28,29,30,26,210,36,37,38,39,32)
	MR_init_label10(ml_backend__ilasm__output_decl_6_0,42,43,41,213,45,215,52,53,54,49)
	MR_init_label10(ml_backend__ilasm__output_decl_6_0,217,60,61,62,56,219,67,105,69,68)
	MR_init_label10(ml_backend__ilasm__output_decl_6_0,73,74,71,66,77,78,79,81,82,76)
	MR_init_label4(ml_backend__ilasm__output_decl_6_0,84,83,86,87)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_r2, 2);
	MR_sv(5) = MR_tfield(0, MR_r2, 3);
	MR_sv(6) = MR_tfield(0, MR_r2, 4);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".class ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i4);
MR_def_label(ml_backend__ilasm__output_decl_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,15);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_decl_6_0_i6);
MR_def_label(ml_backend__ilasm__output_decl_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i8);
	}
MR_def_label(ml_backend__ilasm__output_decl_6_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_decl_6_0_i10);
MR_def_label(ml_backend__ilasm__output_decl_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i89);
MR_def_label(ml_backend__ilasm__output_decl_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i12);
	}
	MR_sv(2) = MR_sv(5);
	MR_sv(3) = MR_sv(7);
	MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i11);
MR_def_label(ml_backend__ilasm__output_decl_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_tfield(1, MR_sv(4), 0);
	MR_r1 = (MR_Word) MR_string_const(" extends ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i13);
MR_def_label(ml_backend__ilasm__output_decl_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ilasm__output_class_name_6_0,
		ml_backend__ilasm__output_decl_6_0_i14);
MR_def_label(ml_backend__ilasm__output_decl_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_sv(5);
	MR_sv(3) = MR_r1;
MR_def_label(ml_backend__ilasm__output_decl_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i16);
	}
	MR_sv(2) = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i23);
MR_def_label(ml_backend__ilasm__output_decl_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" implements ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i17);
MR_def_label(ml_backend__ilasm__output_decl_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_decl_6_0_i18);
MR_def_label(ml_backend__ilasm__output_decl_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i20);
	}
MR_def_label(ml_backend__ilasm__output_decl_6_0,92)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i19);
MR_def_label(ml_backend__ilasm__output_decl_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i92);
MR_def_label(ml_backend__ilasm__output_decl_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_decl_6_0_i22);
MR_def_label(ml_backend__ilasm__output_decl_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i23);
MR_def_label(ml_backend__ilasm__output_decl_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_decl_6_0_i24);
MR_def_label(ml_backend__ilasm__output_decl_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n}", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i82);
MR_def_label(ml_backend__ilasm__output_decl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i26);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 0);
	MR_sv(3) = MR_tfield(2, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".method ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i27);
MR_def_label(ml_backend__ilasm__output_decl_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ilasm__output_methodhead_6_0,
		ml_backend__ilasm__output_decl_6_0_i28);
MR_def_label(ml_backend__ilasm__output_decl_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n{\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i29);
MR_def_label(ml_backend__ilasm__output_decl_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_decl_6_0_i30);
MR_def_label(ml_backend__ilasm__output_decl_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i82);
MR_def_label(ml_backend__ilasm__output_decl_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i32);
	}
	MR_r5 = MR_tfield(1, MR_r2, 0);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i210);
	}
	MR_r2 = MR_tfield(1, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__ilasm__ilasm_output_6_0);
MR_def_label(ml_backend__ilasm__output_decl_6_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r5;
	MR_sv(7) = MR_r3;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const(".namespace ", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i36);
MR_def_label(ml_backend__ilasm__output_decl_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_dotted_name_3_0,
		ml_backend__ilasm__output_decl_6_0_i37);
MR_def_label(ml_backend__ilasm__output_decl_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" {\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i38);
MR_def_label(ml_backend__ilasm__output_decl_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ilasm__ilasm_output_6_0,
		ml_backend__ilasm__output_decl_6_0_i39);
MR_def_label(ml_backend__ilasm__output_decl_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i82);
MR_def_label(ml_backend__ilasm__output_decl_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i41);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const(".assembly ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i42);
MR_def_label(ml_backend__ilasm__output_decl_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_decl_6_0_i43);
MR_def_label(ml_backend__ilasm__output_decl_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" { }", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i82);
MR_def_label(ml_backend__ilasm__output_decl_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i213);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_decl_6_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_comment_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i87);
MR_def_label(ml_backend__ilasm__output_decl_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i49);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i215);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_decl_6_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("// ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i52);
MR_def_label(ml_backend__ilasm__output_decl_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(varset__init_1_0,
		ml_backend__ilasm__output_decl_6_0_i53);
MR_def_label(ml_backend__ilasm__output_decl_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(term_io__write_term_4_0,
		ml_backend__ilasm__output_decl_6_0_i54);
MR_def_label(ml_backend__ilasm__output_decl_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__ilasm__output_decl_6_0_i87);
MR_def_label(ml_backend__ilasm__output_decl_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i56);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i217);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_decl_6_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r3;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__pprint__to_doc_1_0,
		ml_backend__ilasm__output_decl_6_0_i60);
MR_def_label(ml_backend__ilasm__output_decl_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("// ", 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__label_2_0,
		ml_backend__ilasm__output_decl_6_0_i61);
MR_def_label(ml_backend__ilasm__output_decl_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 70;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(pprint__write_4_0,
		ml_backend__ilasm__output_decl_6_0_i62);
MR_def_label(ml_backend__ilasm__output_decl_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__ilasm__output_decl_6_0_i87);
MR_def_label(ml_backend__ilasm__output_decl_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i219);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__ilasm__output_custom_decl_6_0);
MR_def_label(ml_backend__ilasm__output_decl_6_0,219)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i66);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(3, MR_r2, 3);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".data ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i67);
MR_def_label(ml_backend__ilasm__output_decl_6_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i69);
	}
MR_def_label(ml_backend__ilasm__output_decl_6_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i68);
MR_def_label(ml_backend__ilasm__output_decl_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("tls ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i105);
MR_def_label(ml_backend__ilasm__output_decl_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i71);
	}
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tfield(1, MR_sv(2), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_decl_6_0_i73);
MR_def_label(ml_backend__ilasm__output_decl_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i74);
MR_def_label(ml_backend__ilasm__output_decl_6_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
MR_def_label(ml_backend__ilasm__output_decl_6_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__ilasm__output_data_body_3_0,
		ml_backend__ilasm__output_decl_6_0_i87);
MR_def_label(ml_backend__ilasm__output_decl_6_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i76);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(3) = MR_tfield(3, MR_r2, 2);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".assembly extern ", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i77);
MR_def_label(ml_backend__ilasm__output_decl_6_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_decl_6_0_i78);
MR_def_label(ml_backend__ilasm__output_decl_6_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i79);
MR_def_label(ml_backend__ilasm__output_decl_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, assembly_decl);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info);
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(7);
	}
	MR_np_call_localret_ent(list__foldl2_6_2,
		ml_backend__ilasm__output_decl_6_0_i81);
MR_def_label(ml_backend__ilasm__output_decl_6_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n}\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i82);
MR_def_label(ml_backend__ilasm__output_decl_6_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ilasm__output_decl_6_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_decl_6_0_i83);
	}
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".module extern ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i84);
MR_def_label(ml_backend__ilasm__output_decl_6_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_decl_6_0_i87);
MR_def_label(ml_backend__ilasm__output_decl_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".file ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_decl_6_0_i86);
MR_def_label(ml_backend__ilasm__output_decl_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_decl_6_0_i87);
MR_def_label(ml_backend__ilasm__output_decl_6_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module30)
	MR_init_entry1(ml_backend__ilasm__output_field_initializer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_field_initializer_3_0);
	MR_init_label10(ml_backend__ilasm__output_field_initializer_3_0,5,4,7,10,9,14,15,13,19,18)
	MR_init_label3(ml_backend__ilasm__output_field_initializer_3_0,24,25,64)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_field_initializer'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_field_initializer_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_field_initializer_3_0_i64);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_field_initializer_3_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const(" at ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i5);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ilasm__output_id_3_0);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i7);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_field_initializer_3_0_i9);
	}
	MR_sv(1) = MR_tfield(2, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("float32(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i10);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i25);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_field_initializer_3_0_i13);
	}
	MR_sv(1) = MR_tfield(3, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("float64(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i14);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__integer__to_string_1_0,
		ml_backend__ilasm__output_field_initializer_3_0_i15);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i25);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_field_initializer_3_0_i18);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_sv(1), 0);
	MR_r4 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_field_initializer_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_3_0);
	}
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r4;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ilasm__output_data_item_3_0);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("wchar *(", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i24);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__write_3_0,
		ml_backend__ilasm__output_field_initializer_3_0_i25);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_field_initializer_3_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module31)
	MR_init_entry1(ml_backend__ilasm__output_class_member_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_class_member_6_0);
	MR_init_label10(ml_backend__ilasm__output_class_member_6_0,4,6,8,9,11,12,13,14,15,3)
	MR_init_label10(ml_backend__ilasm__output_class_member_6_0,19,17,26,27,28,29,30,32,33,34)
	MR_init_label10(ml_backend__ilasm__output_class_member_6_0,31,73,38,39,40,43,25,161,44,163)
	MR_init_label10(ml_backend__ilasm__output_class_member_6_0,51,52,53,48,165,59,60,61,62,55)
	MR_init_label1(ml_backend__ilasm__output_class_member_6_0,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_class_member'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_class_member_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i3);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_r2, 0);
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_tfield(1, MR_r2, 2);
	MR_sv(5) = MR_tfield(1, MR_r2, 3);
	MR_sv(6) = MR_tfield(1, MR_r2, 4);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".field ", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i4);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(5),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i6);
	}
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,16);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_class_member_6_0_i11);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(5), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_int32_3_0,
		ml_backend__ilasm__output_class_member_6_0_i8);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i9);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,17);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_class_member_6_0_i11);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i12);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ilasm__output_type_6_0,
		ml_backend__ilasm__output_class_member_6_0_i13);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i14);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_class_member_6_0_i15);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(ml_backend__ilasm__output_field_initializer_3_0,
		ml_backend__ilasm__output_class_member_6_0_i43);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i17);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 2);
	MR_r5 = MR_tempr1;
	MR_tfield(2, MR_tempr1, 0) = MR_tfield(0, MR_r2, 0);
	MR_tfield(2, MR_tempr1, 1) = MR_tfield(0, MR_r2, 1);
	MR_tempr2 = MR_tfield(0, MR_tfield(2, MR_tempr1, 0), 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i19);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(0, MR_r1, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tfield(0, MR_r1, 1);
	MR_tfield(0, MR_tempr2, 2) = (MR_Integer) 0;
	MR_tfield(0, MR_tempr2, 3) = MR_tfield(0, MR_r1, 3);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__ilasm__output_decl_6_0);
	}
MR_def_label(ml_backend__ilasm__output_class_member_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r5;
	MR_np_tailcall_ent(ml_backend__ilasm__output_decl_6_0);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i25);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_r2, 1);
	MR_sv(3) = MR_tfield(2, MR_r2, 2);
	MR_sv(4) = MR_tfield(2, MR_r2, 3);
	MR_sv(7) = MR_r3;
	MR_sv(5) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const(".property instance ", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i26);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__ilasm__output_type_6_0,
		ml_backend__ilasm__output_class_member_6_0_i27);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i28);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_class_member_6_0_i29);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("() {", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i30);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i32);
	}
	MR_r1 = MR_sv(5);
	MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i31);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_sv(3), 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__ilasm__output_class_member_6_0_i33);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t.get instance ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i34);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r5 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,
		ml_backend__ilasm__output_class_member_6_0_i31);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i38);
	}
MR_def_label(ml_backend__ilasm__output_class_member_6_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n}\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i43);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_sv(4), 0);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_r1;
	}
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__ilasm__output_class_member_6_0_i39);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t.set instance ", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i40);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r3, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r3, 0) = MR_sv(2);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r5 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ilasm__output_name_signature_and_call_conv_8_0,
		ml_backend__ilasm__output_class_member_6_0_i73);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i44);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i161);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_class_member_6_0,161)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_comment_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i62);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i48);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i163);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_class_member_6_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(7) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("// ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_class_member_6_0_i51);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(varset__init_1_0,
		ml_backend__ilasm__output_class_member_6_0_i52);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(term_io__write_term_4_0,
		ml_backend__ilasm__output_class_member_6_0_i53);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__ilasm__output_class_member_6_0_i62);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i55);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i165);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_class_member_6_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(7) = MR_r3;
	MR_sv(1) = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_r2 = MR_tfield(3, MR_r2, 2);
	MR_np_call_localret_ent(fn__pprint__to_doc_1_0,
		ml_backend__ilasm__output_class_member_6_0_i59);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const("// ", 3);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__pprint__label_2_0,
		ml_backend__ilasm__output_class_member_6_0_i60);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 70;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(pprint__write_4_0,
		ml_backend__ilasm__output_class_member_6_0_i61);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__ilasm__output_class_member_6_0_i62);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(7);
	MR_decr_sp_and_return(8);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_class_member_6_0_i63);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__ilasm__output_custom_decl_6_0);
MR_def_label(ml_backend__ilasm__output_class_member_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(3, MR_r2, 1);
	MR_tfield(0, MR_tempr1, 1) = MR_tfield(3, MR_r2, 2);
	MR_tfield(0, MR_tempr1, 2) = MR_tfield(3, MR_r2, 3);
	MR_tfield(0, MR_tempr1, 3) = MR_tfield(3, MR_r2, 4);
	MR_tfield(0, MR_tempr1, 4) = MR_tfield(3, MR_r2, 5);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(ml_backend__ilasm__output_decl_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module32)
	MR_init_entry1(ml_backend__ilasm__output_label_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_label_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_label'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_label_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module33)
	MR_init_entry1(ml_backend__ilasm__output_method_body_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_method_body_decl_6_0);
	MR_init_label10(ml_backend__ilasm__output_method_body_decl_6_0,3,5,7,11,10,13,17,70,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_method_body_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_method_body_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_body_decl_6_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".entrypoint ", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_method_body_decl_6_0_i23);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_body_decl_6_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".zeroinit ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_method_body_decl_6_0_i23);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_body_decl_6_0_i7);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".emitbyte ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_method_body_decl_6_0_i11);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_body_decl_6_0_i10);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_r1 = (MR_Word) MR_string_const(".maxstack ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_method_body_decl_6_0_i11);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_method_body_decl_6_0_i23);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_body_decl_6_0_i13);
	}
	MR_r2 = MR_tfield(3, MR_r2, 1);
	MR_np_tailcall_ent(ml_backend__ilasm__output_custom_decl_6_0);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_body_decl_6_0_i70);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_r1, 2);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_body_decl_6_0_i17);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ilasm__output_instruction_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(9,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__ilasm__output_debug_instruction_6_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_tempr2 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, ilasm_info);
	MR_tempr3 = MR_r3;
	MR_r3 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tfield(3, MR_tempr2, 1);
	MR_r6 = MR_tempr3;
	MR_np_tailcall_ent(list__foldl2_6_2);
	}
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_method_body_decl_6_0_i22);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_method_body_decl_6_0_i23);
MR_def_label(ml_backend__ilasm__output_method_body_decl_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module34)
	MR_init_entry1(ml_backend__ilasm__output_local_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_local_6_0);
	MR_init_label4(ml_backend__ilasm__output_local_6_0,3,4,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_local'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_local_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 0);
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,18);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_local_6_0_i3);
MR_def_label(ml_backend__ilasm__output_local_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_local_6_0_i4);
MR_def_label(ml_backend__ilasm__output_local_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_local_6_0_i5);
MR_def_label(ml_backend__ilasm__output_local_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_local_6_0_i6);
MR_def_label(ml_backend__ilasm__output_local_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module35)
	MR_init_entry1(ml_backend__ilasm__output_method_param_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_method_param_6_0);
	MR_init_label5(ml_backend__ilasm__output_method_param_6_0,3,4,7,8,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_method_param'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_method_param_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,19);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_method_param_6_0_i3);
MR_def_label(ml_backend__ilasm__output_method_param_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_method_param_6_0_i4);
MR_def_label(ml_backend__ilasm__output_method_param_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_method_param_6_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(2), 0);
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_method_param_6_0_i7);
MR_def_label(ml_backend__ilasm__output_method_param_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_method_param_6_0_i8);
MR_def_label(ml_backend__ilasm__output_method_param_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
MR_def_label(ml_backend__ilasm__output_method_param_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module36)
	MR_init_entry1(ml_backend__ilasm__output_simple_type_opcode_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_simple_type_opcode_3_0);
	MR_init_label10(ml_backend__ilasm__output_simple_type_opcode_3_0,3,5,7,9,11,13,15,17,19,21)
	MR_init_label10(ml_backend__ilasm__output_simple_type_opcode_3_0,23,25,27,29,31,33,35,37,39,41)
	MR_init_label3(ml_backend__ilasm__output_simple_type_opcode_3_0,43,45,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_simple_type_opcode'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_simple_type_opcode_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,13)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("i4", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,14)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("i2", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,10)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("r4", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,11)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("r8", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("i2", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("i4", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("i8", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("i1", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r1,3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("i", 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,9)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("u", 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,15)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,17)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i35);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,16)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,5)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("u2", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,6)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("u4", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,7)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i43);
	}
	MR_r1 = (MR_Word) MR_string_const("u8", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i45);
	}
	MR_r1 = (MR_Word) MR_string_const("u1", 2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_simple_type_opcode_3_0_i47);
	}
	MR_r1 = (MR_Word) MR_string_const("ref", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_simple_type_opcode_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ilasm", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ilasm.output_simple_type_opcode\'/3", 56);
	MR_r3 = (MR_Word) MR_string_const("unable to create opcode for native_float", 40);
	MR_np_tailcall_ent(require__unexpected_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module37)
	MR_init_entry1(ml_backend__ilasm__output_bound_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_bound_3_0);
	MR_init_label5(ml_backend__ilasm__output_bound_3_0,4,5,3,8,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_bound'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_bound_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_bound_3_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 1);
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_bound_3_0_i4);
MR_def_label(ml_backend__ilasm__output_bound_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("...", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_bound_3_0_i5);
MR_def_label(ml_backend__ilasm__output_bound_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__ilasm__output_bound_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_bound_3_0_i7);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_bound_3_0_i8);
MR_def_label(ml_backend__ilasm__output_bound_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("...", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_bound_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module38)
	MR_init_entry1(ml_backend__ilasm__output_modifier_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_modifier_3_0);
	MR_init_label2(ml_backend__ilasm__output_modifier_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_modifier'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_modifier_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_modifier_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("const", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_modifier_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_modifier_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("readonly", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_modifier_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("volatile", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module39)
	MR_init_entry1(ml_backend__ilasm__output_overflow_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_overflow_3_0);
	MR_init_label1(ml_backend__ilasm__output_overflow_3_0,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_overflow'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_overflow_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_overflow_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const(".ovf", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_overflow_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module40)
	MR_init_entry1(ml_backend__ilasm__output_signed_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_signed_3_0);
	MR_init_label1(ml_backend__ilasm__output_signed_3_0,12)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_signed'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_signed_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_signed_3_0_i12);
	}
	MR_r1 = (MR_Word) MR_string_const(".un", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_signed_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module41)
	MR_init_entry1(ml_backend__ilasm__output_target_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_target_3_0);
	MR_init_label1(ml_backend__ilasm__output_target_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_target'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_target_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_target_3_0_i3);
	}
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_target_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module42)
	MR_init_entry1(ml_backend__ilasm__output_fieldref_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_fieldref_6_0);
	MR_init_label8(ml_backend__ilasm__output_fieldref_6_0,3,4,5,6,7,9,11,13)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_fieldref'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_fieldref_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,20);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_fieldref_6_0_i3);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		ml_backend__ilasm__output_fieldref_6_0_i4);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_fieldref_6_0_i5);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_tempr2 = MR_sv(2);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		ml_backend__ilasm__output_fieldref_6_0_i6);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("::", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_fieldref_6_0_i7);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_fieldref_6_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const(".cctor", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_fieldref_6_0_i13);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_fieldref_6_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const(".ctor", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_fieldref_6_0_i13);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_fieldref_6_0_i13);
MR_def_label(ml_backend__ilasm__output_fieldref_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module43)
	MR_init_entry1(ml_backend__ilasm__output_index_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_index_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_index'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_index_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(io__write_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module44)
	MR_init_entry1(ml_backend__ilasm__output_string_constant_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_string_constant_3_0);
	MR_init_label5(ml_backend__ilasm__output_string_constant_3_0,2,3,6,7,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_string_constant'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_string_constant_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_string_constant_3_0_i2);
MR_def_label(ml_backend__ilasm__output_string_constant_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ml_backend__ilasm__output_string_constant_3_0_i3);
MR_def_label(ml_backend__ilasm__output_string_constant_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,4);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ilasm__output_string_constant_3_0_i6);
MR_def_label(ml_backend__ilasm__output_string_constant_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		ml_backend__ilasm__output_string_constant_3_0_i7);
MR_def_label(ml_backend__ilasm__output_string_constant_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_string_constant_3_0_i8);
MR_def_label(ml_backend__ilasm__output_string_constant_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__output_float_literal_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_target_0;

MR_BEGIN_MODULE(ml_backend__ilasm_module45)
	MR_init_entry1(ml_backend__ilasm__output_instr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_instr_6_0);
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,4,5,3,7,10,9,13,14,15,12)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,18,19,20,17,22,24,26,28,31,32)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,33,30,36,37,38,35,41,42,43,40)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,45,49,48,51,54,53,57,56,59,63)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,62,65,79,69,68,83,86,85,88,91)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,90,93,1173,98,99,100,101,95,104,103)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,106,108,112,111,114,119,120,121,118,124)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,125,126,123,128,129,116,131,133,135,137)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,139,142,145,149,148,155,154,158,157,160)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,153,164,151,167,169,166,175,174,177,179)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,178,181,185,184,187,173,195,192,200,197)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,205,202,172,213,212,215,218,221,224,228)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,227,230,233,235,232,239,241,238,244,246)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,249,252,256,255,258,262,261,264,266,270)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,271,269,273,275,279,278,281,283,285,287)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,291,290,293,295,297,300,299,302,306,308)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,305,314,315,313,318,319,320,321,317,323)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,324,325,486,327,328,329,330,311,332,331)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,334,338,337,341,343,340,346,350,349,353)
	MR_init_label10(ml_backend__ilasm__output_instr_6_0,354,352,357,359,356,361,363,365,368,367)
	MR_init_label1(ml_backend__ilasm__output_instr_6_0,370)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_instr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("add", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i4);
MR_def_label(ml_backend__ilasm__output_instr_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_overflow_3_0,
		ml_backend__ilasm__output_instr_6_0_i5);
MR_def_label(ml_backend__ilasm__output_instr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i7);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("arglist", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,5)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i9);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("beq ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i10);
MR_def_label(ml_backend__ilasm__output_instr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,6)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i12);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("bge", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i13);
MR_def_label(ml_backend__ilasm__output_instr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i14);
MR_def_label(ml_backend__ilasm__output_instr_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i15);
MR_def_label(ml_backend__ilasm__output_instr_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,7)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i17);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("bgt", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i18);
MR_def_label(ml_backend__ilasm__output_instr_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i19);
MR_def_label(ml_backend__ilasm__output_instr_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i20);
MR_def_label(ml_backend__ilasm__output_instr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i22);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("and", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,14)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i24);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("not", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,15)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i26);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("or", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,21)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i28);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("xor", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i30);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("ble", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i31);
MR_def_label(ml_backend__ilasm__output_instr_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i32);
MR_def_label(ml_backend__ilasm__output_instr_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i33);
MR_def_label(ml_backend__ilasm__output_instr_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,9)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i35);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("blt", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i36);
MR_def_label(ml_backend__ilasm__output_instr_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i37);
MR_def_label(ml_backend__ilasm__output_instr_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i38);
MR_def_label(ml_backend__ilasm__output_instr_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,10)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i40);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("bne", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i41);
MR_def_label(ml_backend__ilasm__output_instr_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i42);
MR_def_label(ml_backend__ilasm__output_instr_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i43);
MR_def_label(ml_backend__ilasm__output_instr_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,38)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i45);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("box\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,11)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i48);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("br\t", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i49);
MR_def_label(ml_backend__ilasm__output_instr_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i51);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("break", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,12)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i53);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("brfalse\t", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i54);
MR_def_label(ml_backend__ilasm__output_instr_6_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,13)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i56);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("brtrue\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i57);
MR_def_label(ml_backend__ilasm__output_instr_6_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,14)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i59);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("call\t", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i279);
MR_def_label(ml_backend__ilasm__output_instr_6_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,15)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i62);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("calli\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i63);
MR_def_label(ml_backend__ilasm__output_instr_6_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = (MR_Word) MR_string_const("\t\t", 2);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ilasm__output_name_signature_and_call_conv_8_0);
MR_def_label(ml_backend__ilasm__output_instr_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,39)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i65);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("callvirt\t", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i279);
MR_def_label(ml_backend__ilasm__output_instr_6_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,40)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i68);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_tfield(0, MR_sv(2), 1);
	if (MR_RTAGS_TESTR(MR_tempr1,3,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr2 = MR_tfield(0, MR_tfield(3, MR_tempr1, 1), 1);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("mscorlib", 8)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("System", 6)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, MR_string_const("Type", 4)) != 0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i69);
	}
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("// ", 3);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i79);
MR_def_label(ml_backend__ilasm__output_instr_6_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("castclass\t", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("castclass\t", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,68)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i83);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ceq", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,16)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i85);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("cgt", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i86);
MR_def_label(ml_backend__ilasm__output_instr_6_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i88);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ckfinite", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,17)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i90);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("clt", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i91);
MR_def_label(ml_backend__ilasm__output_instr_6_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i93);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(1, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_comment_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i95);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i1173);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_instr_6_0,1173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\n\t.line ", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i98);
MR_def_label(ml_backend__ilasm__output_instr_6_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i99);
MR_def_label(ml_backend__ilasm__output_instr_6_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" \'", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i100);
MR_def_label(ml_backend__ilasm__output_instr_6_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i101);
MR_def_label(ml_backend__ilasm__output_instr_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,18)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i103);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("conv.", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i104);
MR_def_label(ml_backend__ilasm__output_instr_6_0,104)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_opcode_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,5)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i106);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("cpblk", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,41)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i108);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("cpobj\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,19)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i111);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("div", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i112);
MR_def_label(ml_backend__ilasm__output_instr_6_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,6)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i114);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("dup", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i116);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i118);
	}
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i119);
MR_def_label(ml_backend__ilasm__output_instr_6_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t// #", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i120);
MR_def_label(ml_backend__ilasm__output_instr_6_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i121);
MR_def_label(ml_backend__ilasm__output_instr_6_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (try block)", 12);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i123);
	}
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i124);
MR_def_label(ml_backend__ilasm__output_instr_6_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t// #", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i125);
MR_def_label(ml_backend__ilasm__output_instr_6_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i126);
MR_def_label(ml_backend__ilasm__output_instr_6_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (catch block)", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i128);
MR_def_label(ml_backend__ilasm__output_instr_6_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t// #", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i129);
MR_def_label(ml_backend__ilasm__output_instr_6_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,7)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i131);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("endfilter", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i133);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("endfinally", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i135);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,9)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i137);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("initblk", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,42)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i139);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("initobj\t", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,43)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i142);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("isinst\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,20)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i145);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("jmp\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i279);
MR_def_label(ml_backend__ilasm__output_instr_6_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i148);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_label_3_0,
		ml_backend__ilasm__output_instr_6_0_i149);
MR_def_label(ml_backend__ilasm__output_instr_6_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,148)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,21)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i151);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r5 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i153);
	}
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	if (MR_INT_GE(MR_sv(1),4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i154);
	}
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldarg.", 6);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i155);
MR_def_label(ml_backend__ilasm__output_instr_6_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),256)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i157);
	}
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldarg.s\t", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i158);
MR_def_label(ml_backend__ilasm__output_instr_6_0,158)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_index_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldarg\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i160);
MR_def_label(ml_backend__ilasm__output_instr_6_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_index_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_r5, 0);
	MR_r1 = (MR_Word) MR_string_const("ldarg\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i164);
MR_def_label(ml_backend__ilasm__output_instr_6_0,164)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,22)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i166);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldarga\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i167);
MR_def_label(ml_backend__ilasm__output_instr_6_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i169);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_index_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,166)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,23)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i172);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(3, MR_r2, 2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,13)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i175);
	}
	MR_r1 = MR_tempr1;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_r5;
	MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i174);
	}
MR_def_label(ml_backend__ilasm__output_instr_6_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i173);
	}
	MR_r1 = MR_r6;
	MR_sv(4) = MR_r3;
	MR_r3 = MR_r5;
MR_def_label(ml_backend__ilasm__output_instr_6_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TEST(MR_r3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i177);
	}
	MR_r6 = MR_r1;
	MR_r5 = MR_r3;
	MR_r3 = MR_sv(4);
	MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i173);
MR_def_label(ml_backend__ilasm__output_instr_6_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r3, 0);
	MR_sv(1) = MR_tempr1;
	if (MR_INT_GE(MR_tempr1,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i178);
	}
	if (MR_INT_LT(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i178);
	}
	MR_r1 = (MR_Word) MR_string_const("ldc.i4.", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i179);
MR_def_label(ml_backend__ilasm__output_instr_6_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),-1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i181);
	}
	MR_r1 = (MR_Word) MR_string_const("ldc.i4.m1", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_sv(1),128)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i184);
	}
	if (MR_INT_LE(MR_sv(1),-128)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i184);
	}
	MR_r1 = (MR_Word) MR_string_const("ldc.i4.s\t", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i185);
MR_def_label(ml_backend__ilasm__output_instr_6_0,185)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ldc.i4\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i187);
MR_def_label(ml_backend__ilasm__output_instr_6_0,187)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i192);
	}
	if (MR_PTAG_TESTR(MR_r5,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i192);
	}
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(0, MR_r5, 0);
	MR_r1 = (MR_Word) MR_string_const("ldc.i8\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i195);
MR_def_label(ml_backend__ilasm__output_instr_6_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,10)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i197);
	}
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i197);
	}
	MR_sv(1) = MR_tfield(1, MR_r5, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldc.r4\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i200);
MR_def_label(ml_backend__ilasm__output_instr_6_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_float_literal_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,11)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i202);
	}
	if (MR_PTAG_TESTR(MR_r5,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i202);
	}
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(1, MR_r5, 0);
	MR_r1 = (MR_Word) MR_string_const("ldc.r8\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i205);
MR_def_label(ml_backend__ilasm__output_instr_6_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_float_literal_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,202)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ilasm", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ilasm.output_instr\'/6", 43);
	MR_r3 = (MR_Word) MR_string_const("Inconsistent arguments in ldc instruction", 41);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(require__unexpected_3_0);
MR_def_label(ml_backend__ilasm__output_instr_6_0,172)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,44)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i212);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldelem.", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i213);
MR_def_label(ml_backend__ilasm__output_instr_6_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_opcode_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,45)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i215);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldelema\t", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,215)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,46)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i218);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldfld\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i350);
MR_def_label(ml_backend__ilasm__output_instr_6_0,218)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,47)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i221);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldflda\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i350);
MR_def_label(ml_backend__ilasm__output_instr_6_0,221)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,24)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i224);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldftn\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i279);
MR_def_label(ml_backend__ilasm__output_instr_6_0,224)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,25)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i227);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldind.", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i228);
MR_def_label(ml_backend__ilasm__output_instr_6_0,228)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_opcode_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,227)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,22)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i230);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldlen", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,230)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,26)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i232);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldloc\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i233);
MR_def_label(ml_backend__ilasm__output_instr_6_0,233)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i235);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_index_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,232)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,27)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i238);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldloca\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i239);
MR_def_label(ml_backend__ilasm__output_instr_6_0,239)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i241);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_index_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,241)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,10)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i244);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldnull", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,244)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,48)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i246);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldobj\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,246)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,49)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i249);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldsfld\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i350);
MR_def_label(ml_backend__ilasm__output_instr_6_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,50)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i252);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldsflda\t", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i350);
MR_def_label(ml_backend__ilasm__output_instr_6_0,252)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,51)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i255);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ldstr\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i256);
MR_def_label(ml_backend__ilasm__output_instr_6_0,256)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_string_constant_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,255)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,53)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i258);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("ldvirtftn\t", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i279);
MR_def_label(ml_backend__ilasm__output_instr_6_0,258)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,28)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i261);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("leave\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i262);
MR_def_label(ml_backend__ilasm__output_instr_6_0,262)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_target_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,261)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,11)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i264);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("localloc", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,54)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i266);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("mkrefany\t", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,266)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,29)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i269);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("mul", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i270);
MR_def_label(ml_backend__ilasm__output_instr_6_0,270)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_overflow_3_0,
		ml_backend__ilasm__output_instr_6_0_i271);
MR_def_label(ml_backend__ilasm__output_instr_6_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,269)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,12)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i273);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("neg", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,273)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,55)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i275);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("newarr\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,275)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,56)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i278);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("newobj\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i279);
MR_def_label(ml_backend__ilasm__output_instr_6_0,279)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ilasm__output_methodref_6_0);
MR_def_label(ml_backend__ilasm__output_instr_6_0,278)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,13)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i281);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("nop", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,281)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,16)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i283);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("pop", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,283)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,23)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i285);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("refanytype", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,57)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i287);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("refanyval\t", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,287)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,30)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i290);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("rem", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i291);
MR_def_label(ml_backend__ilasm__output_instr_6_0,291)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,290)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,17)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i293);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("ret", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,293)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,24)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i295);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("rethrow", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,295)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,18)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i297);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("shl", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,297)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,31)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i299);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("shr", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i300);
MR_def_label(ml_backend__ilasm__output_instr_6_0,300)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,299)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,58)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i302);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("sizeof\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,302)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,32)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i305);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("starg\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i306);
MR_def_label(ml_backend__ilasm__output_instr_6_0,306)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i308);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_index_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,308)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,305)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i311);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_r5 = MR_tfield(3, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i313);
	}
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".try {", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i314);
MR_def_label(ml_backend__ilasm__output_instr_6_0,314)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t// #", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i315);
MR_def_label(ml_backend__ilasm__output_instr_6_0,315)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,313)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r5,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i317);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(2, MR_r5, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("catch ", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i318);
MR_def_label(ml_backend__ilasm__output_instr_6_0,318)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__ilasm__output_class_name_6_0,
		ml_backend__ilasm__output_instr_6_0_i319);
MR_def_label(ml_backend__ilasm__output_instr_6_0,319)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" {", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i320);
MR_def_label(ml_backend__ilasm__output_instr_6_0,320)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t// #", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i321);
MR_def_label(ml_backend__ilasm__output_instr_6_0,321)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i330);
MR_def_label(ml_backend__ilasm__output_instr_6_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_sv(3) = MR_tfield(1, MR_r5, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("{", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i323);
MR_def_label(ml_backend__ilasm__output_instr_6_0,323)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t// #", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i324);
MR_def_label(ml_backend__ilasm__output_instr_6_0,324)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__ilasm__output_instr_6_0_i325);
MR_def_label(ml_backend__ilasm__output_instr_6_0,325)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i327);
	}
MR_def_label(ml_backend__ilasm__output_instr_6_0,486)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ilasm__output_instr_6_0,327)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n\t.locals (\n\t\t", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i328);
MR_def_label(ml_backend__ilasm__output_instr_6_0,328)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_instr_6_0_i329);
MR_def_label(ml_backend__ilasm__output_instr_6_0,329)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t)\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i330);
MR_def_label(ml_backend__ilasm__output_instr_6_0,330)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ilasm__output_instr_6_0,311)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,59)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i331);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("stelem.", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i332);
MR_def_label(ml_backend__ilasm__output_instr_6_0,332)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_opcode_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,331)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,60)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i334);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("stfld\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i350);
MR_def_label(ml_backend__ilasm__output_instr_6_0,334)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,33)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i337);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("stind.", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i338);
MR_def_label(ml_backend__ilasm__output_instr_6_0,338)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_opcode_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,337)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,34)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i340);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("stloc\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i341);
MR_def_label(ml_backend__ilasm__output_instr_6_0,341)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i343);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_index_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,343)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_np_call_localret_ent(ml_backend__ilasm__output_id_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,340)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,61)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i346);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("stobj\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,346)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,62)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i349);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("stsfld\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i350);
MR_def_label(ml_backend__ilasm__output_instr_6_0,350)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ilasm__output_fieldref_6_0);
MR_def_label(ml_backend__ilasm__output_instr_6_0,349)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,35)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i352);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 2);
	MR_r1 = (MR_Word) MR_string_const("sub", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i353);
MR_def_label(ml_backend__ilasm__output_instr_6_0,353)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__ilasm__output_overflow_3_0,
		ml_backend__ilasm__output_instr_6_0_i354);
MR_def_label(ml_backend__ilasm__output_instr_6_0,354)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_signed_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,352)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,36)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i356);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r2, 1);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("switch (", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i357);
MR_def_label(ml_backend__ilasm__output_instr_6_0,357)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, target);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,21);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_instr_6_0_i359);
MR_def_label(ml_backend__ilasm__output_instr_6_0,359)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,356)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,19)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i361);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("tail.", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,361)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,25)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i363);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("throw", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,363)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,37)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i365);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("unaligned.", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,365)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,63)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i367);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(4) = MR_r3;
	MR_sv(2) = MR_tfield(3, MR_r2, 1);
	MR_r1 = (MR_Word) MR_string_const("unbox\t", 6);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i368);
MR_def_label(ml_backend__ilasm__output_instr_6_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__ilasm__output_type_6_0);
MR_def_label(ml_backend__ilasm__output_instr_6_0,367)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,20)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instr_6_0_i370);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("volatile", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instr_6_0_i486);
MR_def_label(ml_backend__ilasm__output_instr_6_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ml_backend.ilasm", 16);
	MR_r2 = (MR_Word) MR_string_const("predicate \140ml_backend.ilasm.output_instr\'/6", 43);
	MR_r3 = (MR_Word) MR_string_const("ldtoken not implemented", 23);
	MR_np_tailcall_ent(require__sorry_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module46)
	MR_init_entry1(ml_backend__ilasm__output_trace_instr_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_trace_instr_6_0);
	MR_init_label10(ml_backend__ilasm__output_trace_instr_6_0,2,5,6,9,10,11,3,15,16,13)
	MR_init_label4(ml_backend__ilasm__output_trace_instr_6_0,17,20,21,22)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_trace_instr'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_trace_instr_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\t\tldstr \"", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i2);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,51)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_trace_instr_6_0_i3);
	}
	MR_sv(1) = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (MR_Word) MR_string_const("ldstr \\\"", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i5);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(string__to_char_list_2_0,
		ml_backend__ilasm__output_trace_instr_6_0_i6);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CHAR_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,0,1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,2,5);
	MR_r4 = MR_tempr1;
	MR_r5 = (MR_Word) MR_tbmkword(0, 0);
	}
	MR_np_call_localret_ent(list__foldl_4_0,
		ml_backend__ilasm__output_trace_instr_6_0_i9);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__from_rev_char_list_2_0,
		ml_backend__ilasm__output_trace_instr_6_0_i10);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i11);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\\\"", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i16);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_trace_instr_6_0_i13);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("comment: ", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i15);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i16);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_sv(3);
	MR_r1 = (MR_Word) MR_string_const("\\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i20);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_instr_6_0,
		ml_backend__ilasm__output_trace_instr_6_0_i17);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i20);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\"\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i21);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tcall void [\'mscorlib\']System.Console::Write(class [\'mscorlib\']System.String)\n", 79);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_instr_6_0_i22);
MR_def_label(ml_backend__ilasm__output_trace_instr_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module47)
	MR_init_entry1(ml_backend__ilasm__output_trace_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_trace_3_0);
	MR_init_label3(ml_backend__ilasm__output_trace_3_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_trace'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_trace_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t\tldstr \"", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_3_0_i2);
MR_def_label(ml_backend__ilasm__output_trace_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_3_0_i3);
MR_def_label(ml_backend__ilasm__output_trace_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\\n\"\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_trace_3_0_i4);
MR_def_label(ml_backend__ilasm__output_trace_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tcall void [\'mscorlib\']System.Console::Write(class System.String)\n", 67);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module48)
	MR_init_entry1(ml_backend__ilasm__output_debug_instruction_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_debug_instruction_6_0);
	MR_init_label10(ml_backend__ilasm__output_debug_instruction_6_0,2,108,9,10,11,12,6,17,18,19)
	MR_init_label10(ml_backend__ilasm__output_debug_instruction_6_0,20,21,23,24,25,62,27,28,29,31)
	MR_init_label10(ml_backend__ilasm__output_debug_instruction_6_0,32,30,34,35,36,37,38,40,41,42)
	MR_init_label8(ml_backend__ilasm__output_debug_instruction_6_0,43,44,45,14,47,48,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_debug_instruction'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_debug_instruction_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,19)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i2);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i108);
	}
	MR_r1 = MR_r3;
	MR_proceed();
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i6);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i6);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_instr_6_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i9);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i10);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i11);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_trace_instr_6_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i12);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i50);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r2,3,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i14);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r2, 1);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i14);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(1, MR_tempr1, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(3, MR_r2, 2);
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i17);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("{\t// #", 6);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i18);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i19);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i20);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_trace_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i21);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i23);
	}
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t.locals (\n\t\t", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i24);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_local_6_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i25);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i27);
	}
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t)", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i34);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i28);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(4);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_local_6_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i29);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i31);
	}
	MR_r6 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r6;
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i30);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\n\t\t", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i32);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const(",\n\t\t", 4);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i62);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i35);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tldstr \"", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i36);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".locals (\\n\\t\\t", 15);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i37);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_local_6_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i38);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_debug_instruction_6_0_i40);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(",\\n\\t\\t", 7);
	}
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i42);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(",\\n\\t\\t", 7);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i41);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r3 = (MR_Word) MR_string_const(",\\n\\t\\t", 7);
	MR_np_call_localret_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i42);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i43);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\\n\"", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i44);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i45);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\t\tcall void [\'mscorlib\']System.Console::Write(class [\'mscorlib\']System.String)\n", 79);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i50);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(ml_backend__ilasm__output_trace_instr_6_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i47);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i48);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_instr_6_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i49);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_debug_instruction_6_0_i50);
MR_def_label(ml_backend__ilasm__output_debug_instruction_6_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module49)
	MR_init_entry1(ml_backend__ilasm__output_instruction_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_instruction_6_0);
	MR_init_label4(ml_backend__ilasm__output_instruction_6_0,19,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_instruction'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_instruction_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instruction_6_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_instruction_6_0_i19);
	}
	MR_r1 = MR_r3;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__output_instruction_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instruction_6_0_i5);
MR_def_label(ml_backend__ilasm__output_instruction_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__ilasm__output_instr_6_0,
		ml_backend__ilasm__output_instruction_6_0_i6);
MR_def_label(ml_backend__ilasm__output_instruction_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_instruction_6_0_i7);
MR_def_label(ml_backend__ilasm__output_instruction_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module50)
	MR_init_entry1(ml_backend__ilasm__output_classattr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_classattr_3_0);
	MR_init_label10(ml_backend__ilasm__output_classattr_3_0,3,5,7,9,11,13,15,17,19,21)
	MR_init_label10(ml_backend__ilasm__output_classattr_3_0,23,25,27,29,31,33,35,37,39,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_classattr'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_classattr_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("abstract", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("ansi", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i7);
	}
	MR_r1 = (MR_Word) MR_string_const("auto", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("autochar", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,4)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("beforefieldinit", 15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,5)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i13);
	}
	MR_r1 = (MR_Word) MR_string_const("explicit", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i15);
	}
	MR_r1 = (MR_Word) MR_string_const("interface", 9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,7)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i17);
	}
	MR_r1 = (MR_Word) MR_string_const("nested assembly", 15);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i19);
	}
	MR_r1 = (MR_Word) MR_string_const("nested famandassem", 18);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,9)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i21);
	}
	MR_r1 = (MR_Word) MR_string_const("nested family", 13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,10)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i23);
	}
	MR_r1 = (MR_Word) MR_string_const("nested famorassem", 17);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,11)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("nested private", 14);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,12)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i27);
	}
	MR_r1 = (MR_Word) MR_string_const("nested public", 13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,13)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i29);
	}
	MR_r1 = (MR_Word) MR_string_const("private", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,14)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i31);
	}
	MR_r1 = (MR_Word) MR_string_const("public", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,15)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i33);
	}
	MR_r1 = (MR_Word) MR_string_const("rtspecialname", 13);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,16)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i35);
	}
	MR_r1 = (MR_Word) MR_string_const("sealed", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,17)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i37);
	}
	MR_r1 = (MR_Word) MR_string_const("sequential", 10);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,18)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i39);
	}
	MR_r1 = (MR_Word) MR_string_const("serializable", 12);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,19)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_classattr_3_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("specialname", 11);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__ilasm__output_classattr_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("unicode", 7);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module51)
	MR_init_entry1(ml_backend__ilasm__output_assembly_decl_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_assembly_decl_6_0);
	MR_init_label10(ml_backend__ilasm__output_assembly_decl_6_0,49,6,8,5,11,13,10,15,16,17)
	MR_init_label9(ml_backend__ilasm__output_assembly_decl_6_0,18,19,20,21,22,23,24,25,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_assembly_decl'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_assembly_decl_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,3)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_assembly_decl_6_0_i49);
	}
	MR_r2 = MR_tfield(3, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__ilasm__output_custom_decl_6_0);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r2,1)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_assembly_decl_6_0_i5);
	}
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".hash = ( ", 10);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i6);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,22);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i8);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ) ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i26);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(ml_backend__ilasm__output_assembly_decl_6_0_i10);
	}
	MR_sv(1) = MR_tfield(2, MR_r2, 0);
	MR_sv(4) = MR_r3;
	MR_r1 = (MR_Word) MR_string_const(".publickeytoken = ( ", 20);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i11);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,23);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i13);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ) ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i26);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r2, 2);
	MR_sv(4) = MR_r3;
	MR_r1 = MR_tfield(0, MR_r2, 3);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i15);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i16);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i17);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i18);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i19);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i20);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i21);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(":", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i22);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i23);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i24);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(".ver ", 5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i25);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__output_assembly_decl_6_0_i26);
MR_def_label(ml_backend__ilasm__output_assembly_decl_6_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_base_string_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module52)
	MR_init_entry1(ml_backend__ilasm__output_hexbyte_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__output_hexbyte_3_0);
	MR_init_label1(ml_backend__ilasm__output_hexbyte_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_hexbyte'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__output_hexbyte_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Integer) 16;
	MR_np_call_localret_ent(string__int_to_base_string_3_0,
		ml_backend__ilasm__output_hexbyte_3_0_i2);
MR_def_label(ml_backend__ilasm__output_hexbyte_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module53)
	MR_init_entry1(__Unify___ml_backend__ilasm__assembly_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__assembly_decl_0_0);
	MR_init_label5(__Unify___ml_backend__ilasm__assembly_decl_0_0,5,9,28,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__assembly_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i28);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	MR_r2 = MR_tfield(3, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__custom_decl_0_0);
	}
MR_def_label(__Unify___ml_backend__ilasm__assembly_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i9);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__assembly_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i13);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__assembly_decl_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__assembly_decl_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 2);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__assembly_decl_0_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 3);
	MR_tempr2 = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__assembly_decl_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___list__list_1_0);
MR_decl_entry(private_builtin__builtin_compare_int_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module54)
	MR_init_entry1(__Compare___ml_backend__ilasm__assembly_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__assembly_decl_0_0);
	MR_init_label10(__Compare___ml_backend__ilasm__assembly_decl_0_0,3,2,7,9,5,13,14,11,19,74)
	MR_init_label9(__Compare___ml_backend__ilasm__assembly_decl_0_0,20,17,24,25,26,28,32,36,152)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__assembly_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i7);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__custom_decl_0_0);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i74);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i14);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i20);
	}
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i74);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i26);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(7);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilasm__assembly_decl_0_0_i28);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i152);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilasm__assembly_decl_0_0_i32);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i152);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilasm__assembly_decl_0_0_i36);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__assembly_decl_0_0_i152);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilasm__assembly_decl_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module55)
	MR_init_entry1(__Unify___ml_backend__ilasm__byte_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__byte_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__byte_0_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__byte_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tempr2;
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__byte_0_0_i3);
	}
	MR_r1 = (MR_tempr2 == MR_tempr1);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__byte_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module56)
	MR_init_entry1(__Compare___ml_backend__ilasm__byte_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__byte_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__byte_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__ilds__il_type_0_0);
MR_decl_entry(__Unify___maybe__maybe_1_0);
MR_decl_entry(__Unify___term__term_1_0);
MR_decl_entry(private_builtin__typed_unify_2_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module57)
	MR_init_entry1(__Unify___ml_backend__ilasm__class_member_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__class_member_0_0);
	MR_init_label10(__Unify___ml_backend__ilasm__class_member_0_0,7,9,11,5,17,15,23,25,21,29)
	MR_init_label8(__Unify___ml_backend__ilasm__class_member_0_0,31,35,82,39,44,46,48,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__class_member_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i82);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(1, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(1, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(1, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(1, MR_tempr4, 1);
	MR_sv(6) = MR_tfield(1, MR_tempr4, 2);
	MR_sv(7) = MR_tfield(1, MR_tempr4, 3);
	MR_sv(8) = MR_tfield(1, MR_tempr4, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i7);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__il_type_0_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i9);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(2), (char *) (MR_Word *) MR_sv(6)) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int32);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i11);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__field_initializer_0_0);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilasm__methodhead_0_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i17);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i21);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(2, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(2, MR_tempr2, 3);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__il_type_0_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i23);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(4)) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_sv(1) = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methodhead);
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i25);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___maybe__maybe_1_0);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___term__term_1_0);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i35);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i39);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__custom_decl_0_0);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr1, 4);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 5);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(3, MR_tempr2, 3);
	MR_sv(7) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(8) = MR_tfield(3, MR_tempr2, 5);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_r2 = MR_tfield(3, MR_tempr1, 1);
	MR_r3 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i44);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(5)) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ml_backend__ilasm__extends_0_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i46);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___ml_backend__ilasm__implements_0_0,
		__Unify___ml_backend__ilasm__class_member_0_0_i48);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__class_member_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__class_member_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__ilds__il_type_0_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___maybe__maybe_1_0);
MR_decl_entry(__Compare___term__term_1_0);
MR_decl_entry(private_builtin__typed_compare_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module58)
	MR_init_entry1(__Compare___ml_backend__ilasm__class_member_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__class_member_0_0);
	MR_init_label10(__Compare___ml_backend__ilasm__class_member_0_0,3,2,9,13,17,21,7,29,30,31)
	MR_init_label10(__Compare___ml_backend__ilasm__class_member_0_0,32,33,5,37,40,38,45,46,47,48)
	MR_init_label10(__Compare___ml_backend__ilasm__class_member_0_0,35,52,53,56,60,64,54,71,72,73)
	MR_init_label10(__Compare___ml_backend__ilasm__class_member_0_0,50,77,78,79,80,82,83,75,87,88)
	MR_init_label10(__Compare___ml_backend__ilasm__class_member_0_0,89,90,91,93,85,97,98,99,100,101)
	MR_init_label10(__Compare___ml_backend__ilasm__class_member_0_0,102,95,107,108,109,110,111,112,105,116)
	MR_init_label10(__Compare___ml_backend__ilasm__class_member_0_0,117,212,118,119,120,121,216,122,124,128)
	MR_init_label3(__Compare___ml_backend__ilasm__class_member_0_0,132,136,503)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__class_member_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(1, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(1, MR_tempr5, 4);
	MR_tempr6 = MR_sv(2);
	MR_sv(4) = MR_tfield(1, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(1, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(1, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__il_type_0_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i13);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i17);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int32);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i21);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__field_initializer_0_0);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i216);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i35);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i38);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ml_backend__ilasm__methodhead_0_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i40);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i46);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i47);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i48);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i216);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i50);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i52);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i53);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i54);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(6) = MR_tfield(2, MR_tempr5, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(2, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_sv(3) = MR_tfield(2, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(2, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(2, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(2, MR_tempr3, 0);
	MR_r2 = MR_tfield(2, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__il_type_0_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i56);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i60);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methodhead);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i64);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methodhead);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___maybe__maybe_1_0);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i71);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i72);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i73);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i216);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i75);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i77);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i78);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i79);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i80);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i82);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i83);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,83)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i212);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i85);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i87);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i88);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i89);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i90);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i91);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___term__term_1_0);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i93);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i212);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i95);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i97);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i98);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i99);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i100);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i101);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i102);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
	}
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i212);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i105);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i107);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i108);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i109);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i110);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i111);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i112);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i212);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__custom_decl_0_0);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i116);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i117);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i118);
	}
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,118)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i119);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i120);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i121);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i122);
	}
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,216)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(7) = MR_tfield(3, MR_tempr5, 3);
	MR_sv(6) = MR_tfield(3, MR_tempr5, 4);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 5);
	MR_tempr6 = MR_sv(2);
	MR_sv(4) = MR_tfield(3, MR_tempr6, 5);
	MR_sv(3) = MR_tfield(3, MR_tempr6, 4);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_r2 = MR_tfield(3, MR_tempr3, 1);
	MR_r3 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i124);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i128);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,128)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___ml_backend__ilasm__extends_0_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i132);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,132)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ml_backend__ilasm__implements_0_0,
		__Compare___ml_backend__ilasm__class_member_0_0_i136);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__class_member_0_0_i503);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__class_member_0_0,503)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module59)
	MR_init_entry1(__Unify___ml_backend__ilasm__classattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__classattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__classattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module60)
	MR_init_entry1(__Compare___ml_backend__ilasm__classattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__classattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__classattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module61)
	MR_init_entry1(__Unify___ml_backend__ilasm__custom_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__custom_decl_0_0);
	MR_init_label4(__Unify___ml_backend__ilasm__custom_decl_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__custom_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__custom_decl_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilasm__custom_type_0_0,
		__Unify___ml_backend__ilasm__custom_decl_0_0_i4);
MR_def_label(__Unify___ml_backend__ilasm__custom_decl_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__custom_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, custom_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ml_backend__ilasm__custom_decl_0_0_i6);
MR_def_label(__Unify___ml_backend__ilasm__custom_decl_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__custom_decl_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0);
MR_def_label(__Unify___ml_backend__ilasm__custom_decl_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__custom_decl_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module62)
	MR_init_entry1(__Compare___ml_backend__ilasm__custom_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__custom_decl_0_0);
	MR_init_label5(__Compare___ml_backend__ilasm__custom_decl_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__custom_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_decl_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_decl_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__custom_decl_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__custom_decl_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___ml_backend__ilasm__custom_type_0_0,
		__Compare___ml_backend__ilasm__custom_decl_0_0_i5);
MR_def_label(__Compare___ml_backend__ilasm__custom_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_decl_0_0_i29);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, custom_type);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ml_backend__ilasm__custom_decl_0_0_i9);
MR_def_label(__Compare___ml_backend__ilasm__custom_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_decl_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0);
MR_def_label(__Compare___ml_backend__ilasm__custom_decl_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__ilds__methodref_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module63)
	MR_init_entry1(__Unify___ml_backend__ilasm__custom_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__custom_type_0_0);
	MR_init_label3(__Unify___ml_backend__ilasm__custom_type_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__custom_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__custom_type_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__custom_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__custom_type_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__methodref_0_0);
	}
MR_def_label(__Unify___ml_backend__ilasm__custom_type_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__custom_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__custom_type_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__il_type_0_0);
MR_def_label(__Unify___ml_backend__ilasm__custom_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__ilds__methodref_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module64)
	MR_init_entry1(__Compare___ml_backend__ilasm__custom_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__custom_type_0_0);
	MR_init_label5(__Compare___ml_backend__ilasm__custom_type_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__custom_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_type_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__custom_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__custom_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_type_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__methodref_0_0);
MR_def_label(__Compare___ml_backend__ilasm__custom_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__custom_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__custom_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__custom_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__il_type_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module65)
	MR_init_entry1(__Unify___ml_backend__ilasm__data_body_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__data_body_0_0);
	MR_init_label3(__Unify___ml_backend__ilasm__data_body_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__data_body_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_body_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_body_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_body_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__data_item_0_0);
	}
MR_def_label(__Unify___ml_backend__ilasm__data_body_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__data_body_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_body_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, data_item);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__data_body_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module66)
	MR_init_entry1(__Compare___ml_backend__ilasm__data_body_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__data_body_0_0);
	MR_init_label5(__Compare___ml_backend__ilasm__data_body_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__data_body_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_body_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_body_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__data_body_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__data_body_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_body_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_body_0_0_i7);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__data_item_0_0);
MR_def_label(__Compare___ml_backend__ilasm__data_body_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_body_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_body_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_body_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, data_item);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module67)
	MR_init_entry1(__Unify___ml_backend__ilasm__data_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__data_item_0_0);
	MR_init_label10(__Unify___ml_backend__ilasm__data_item_0_0,5,10,15,19,21,25,27,70,32,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__data_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i70);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr1, 0);
	if ((MR_tempr4 == MR_tempr3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i70);
	}
	MR_sv(1) = MR_tempr4;
	MR_sv(2) = MR_tempr3;
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(1), 0);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i70);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__int64_0_0);
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i19);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i25);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i27);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(1), 1);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i70);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i32);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(1), 1);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i70);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(2), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(1), 1);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__data_item_0_0_i70);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__data_item_0_0,1)
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

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module68)
	MR_init_entry1(__Compare___ml_backend__ilasm__data_item_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__data_item_0_0);
	MR_init_label10(__Compare___ml_backend__ilasm__data_item_0_0,3,2,7,9,10,11,12,13,14,5)
	MR_init_label10(__Compare___ml_backend__ilasm__data_item_0_0,18,19,21,22,23,24,25,16,29,30)
	MR_init_label10(__Compare___ml_backend__ilasm__data_item_0_0,31,33,34,35,36,27,40,41,42,43)
	MR_init_label10(__Compare___ml_backend__ilasm__data_item_0_0,45,46,47,38,51,52,53,54,55,57)
	MR_init_label10(__Compare___ml_backend__ilasm__data_item_0_0,58,49,62,63,64,65,66,67,69,60)
	MR_init_label10(__Compare___ml_backend__ilasm__data_item_0_0,73,74,75,76,77,78,79,71,84,85)
	MR_init_label10(__Compare___ml_backend__ilasm__data_item_0_0,86,87,88,89,90,257,82,94,95,96)
	MR_init_label6(__Compare___ml_backend__ilasm__data_item_0_0,97,98,182,99,100,184)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__data_item_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i12);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i14);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i182);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i16);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i19);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i21);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i22);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i182);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i27);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i29);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i30);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i31);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__int64_0_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i182);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i38);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i40);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i43);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i45);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i46);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i47);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i184);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i49);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i52);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i53);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i55);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i57);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i58);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i184);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i60);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i64);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i65);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i66);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,66)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i67);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,67)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i69);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i184);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i71);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i73);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i74);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i75);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i76);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i77);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i78);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i79);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i182);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i82);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i84);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i85);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i86);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i87);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i88);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i89);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i90);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,90)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i182);
	}
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i94);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i95);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i96);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i97);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i98);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i99);
	}
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i100);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__data_item_0_0_i257);
	}
MR_def_label(__Compare___ml_backend__ilasm__data_item_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__ilds__structured_name_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module69)
	MR_init_entry1(__Unify___ml_backend__ilasm__extends_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__extends_0_0);
	MR_init_label3(__Unify___ml_backend__ilasm__extends_0_0,12,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__extends_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__extends_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__extends_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__extends_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__extends_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__extends_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__structured_name_0_0);
MR_def_label(__Unify___ml_backend__ilasm__extends_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__ilds__structured_name_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module70)
	MR_init_entry1(__Compare___ml_backend__ilasm__extends_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__extends_0_0);
	MR_init_label4(__Compare___ml_backend__ilasm__extends_0_0,18,7,5,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__extends_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__extends_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__extends_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__extends_0_0_i7);
	}
MR_def_label(__Compare___ml_backend__ilasm__extends_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__extends_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__extends_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__extends_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__extends_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__structured_name_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module71)
	MR_init_entry1(__Unify___ml_backend__ilasm__field_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__field_init_0_0);
	MR_init_label5(__Unify___ml_backend__ilasm__field_init_0_0,5,10,30,14,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__field_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i30);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_tempr2, 0);
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	if ((MR_r2 == MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__field_init_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i10);
	}
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__int64_0_0);
MR_def_label(__Unify___ml_backend__ilasm__field_init_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i14);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__data_item_0_0);
MR_def_label(__Unify___ml_backend__ilasm__field_init_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__field_init_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_init_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__field_init_0_0,1)
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


MR_BEGIN_MODULE(ml_backend__ilasm_module72)
	MR_init_entry1(__Compare___ml_backend__ilasm__field_init_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__field_init_0_0);
	MR_init_label10(__Compare___ml_backend__ilasm__field_init_0_0,3,2,7,9,5,13,14,11,19,20)
	MR_init_label6(__Compare___ml_backend__ilasm__field_init_0_0,17,24,43,25,44,26)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__field_init_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i7);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i11);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i13);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i14);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 0);
	MR_r2 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__int64_0_0);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i17);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i20);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i43);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__data_item_0_0);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i25);
	}
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_init_0_0_i26);
	}
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_init_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module73)
	MR_init_entry1(__Unify___ml_backend__ilasm__field_initializer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__field_initializer_0_0);
	MR_init_label4(__Unify___ml_backend__ilasm__field_initializer_0_0,5,17,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__field_initializer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_initializer_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_initializer_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__field_initializer_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_initializer_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_initializer_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ml_backend__ilasm__field_initializer_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__field_initializer_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__field_initializer_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__field_init_0_0);
MR_def_label(__Unify___ml_backend__ilasm__field_initializer_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module74)
	MR_init_entry1(__Compare___ml_backend__ilasm__field_initializer_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__field_initializer_0_0);
	MR_init_label7(__Compare___ml_backend__ilasm__field_initializer_0_0,30,31,5,11,9,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__field_initializer_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i31);
	}
MR_def_label(__Compare___ml_backend__ilasm__field_initializer_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_initializer_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_initializer_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i11);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_initializer_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i31);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilasm__field_initializer_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_initializer_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__field_initializer_0_0_i16);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__field_initializer_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__field_init_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module75)
	MR_init_entry1(__Unify___ml_backend__ilasm__fieldattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__fieldattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__fieldattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module76)
	MR_init_entry1(__Compare___ml_backend__ilasm__fieldattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__fieldattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__fieldattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module77)
	MR_init_entry1(__Unify___ml_backend__ilasm__float32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__float32_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__float32_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__float32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__float32_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__float32_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module78)
	MR_init_entry1(__Compare___ml_backend__ilasm__float32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__float32_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__float32_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__float32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__float32_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__float32_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__float32_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__float32_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module79)
	MR_init_entry1(__Unify___ml_backend__ilasm__float64_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__float64_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__float64_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__float64_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__float64_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_word_to_float(MR_sv(1)) == MR_word_to_float(MR_sv(2)));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__float64_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module80)
	MR_init_entry1(__Compare___ml_backend__ilasm__float64_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__float64_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__float64_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__float64_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__float64_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__float64_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__float64_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__float64_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module81)
	MR_init_entry1(__Unify___ml_backend__ilasm__il_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__il_decl_0_0);
	MR_init_label10(__Unify___ml_backend__ilasm__il_decl_0_0,7,9,11,5,17,15,23,21,27,29)
	MR_init_label9(__Unify___ml_backend__ilasm__il_decl_0_0,31,35,39,45,43,49,99,53,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__il_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i99);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr3, 4);
	MR_sv(5) = MR_tfield(0, MR_tempr4, 1);
	MR_sv(6) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(7) = MR_tfield(0, MR_tempr4, 3);
	MR_sv(8) = MR_tfield(0, MR_tempr4, 4);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ilasm__il_decl_0_0_i7);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	if ((strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(5)) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(__Unify___ml_backend__ilasm__extends_0_0,
		__Unify___ml_backend__ilasm__il_decl_0_0_i9);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(__Unify___ml_backend__ilasm__implements_0_0,
		__Unify___ml_backend__ilasm__il_decl_0_0_i11);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(8);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i15);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(2, MR_tempr2, 1);
	MR_r1 = MR_tfield(2, MR_tempr1, 0);
	MR_r2 = MR_tfield(2, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___ml_backend__ilasm__methodhead_0_0,
		__Unify___ml_backend__ilasm__il_decl_0_0_i17);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i21);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ilasm__il_decl_0_0_i23);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, il_decl);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i27);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(9);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i29);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i31);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___term__term_1_0);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i35);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i39);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__custom_decl_0_0);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i43);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_tempr1 = MR_tempr3;
	MR_sv(1) = MR_tfield(3, MR_tempr1, 3);
	MR_tempr2 = MR_tempr4;
	MR_sv(2) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(3, MR_tempr1, 2);
	MR_r3 = MR_tfield(3, MR_tempr2, 2);
	}
	MR_np_call_localret_ent(__Unify___maybe__maybe_1_0,
		__Unify___ml_backend__ilasm__il_decl_0_0_i45);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__data_body_0_0);
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i49);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) != 0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, assembly_decl);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
	}
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i53);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__il_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(9);
	}
MR_def_label(__Unify___ml_backend__ilasm__il_decl_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module82)
	MR_init_entry1(__Compare___ml_backend__ilasm__il_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__il_decl_0_0);
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,3,2,9,13,17,21,7,29,30,31)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,32,33,34,35,36,37,5,41,44,42)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,49,50,51,52,53,54,55,56,39,60)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,61,64,62,69,70,71,72,73,74,75)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,58,79,80,81,82,84,85,86,87,88)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,89,77,93,94,95,96,97,99,100,101)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,102,103,91,107,108,109,110,111,112,114)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,115,116,117,105,121,122,123,124,125,126)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,127,129,130,131,119,135,136,137,138,139)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,140,141,142,144,145,133,149,150,151,152)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,153,154,155,156,159,163,157,169,147,173)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,174,175,176,177,178,179,180,181,184,182)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,171,192,193,194,195,196,197,198,199,200)
	MR_init_label10(__Compare___ml_backend__ilasm__il_decl_0_0,201,512,190,205,206,207,208,209,210,211)
	MR_init_label6(__Compare___ml_backend__ilasm__il_decl_0_0,212,368,213,214,370,1107)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__il_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i3);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(8) = MR_tfield(0, MR_tempr5, 1);
	MR_sv(7) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 4);
	MR_tempr6 = MR_sv(2);
	MR_sv(4) = MR_tfield(0, MR_tempr6, 4);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, classattr);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i13);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(__Compare___ml_backend__ilasm__extends_0_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i17);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(__Compare___ml_backend__ilasm__implements_0_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i21);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, class_member);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i29);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i30);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i34);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i35);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i36);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i370);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i39);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i42);
	}
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
	MR_np_call_localret_ent(__Compare___ml_backend__ilasm__methodhead_0_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i44);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i49);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i50);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i51);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i52);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i53);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i54);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i55);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i56);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i370);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i58);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i61);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i62);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i64);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,64)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, il_decl);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i69);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i70);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,70)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i71);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i72);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i73);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i74);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,74)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i75);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i370);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i77);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i79);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i80);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i81);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,81)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i82);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,82)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i84);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,84)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i85);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i86);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,86)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i87);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i88);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i89);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,89)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i368);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i91);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i93);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i94);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i95);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i96);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i97);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,97)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i99);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i100);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,100)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i101);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i102);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,102)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i103);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,103)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i368);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,91)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i105);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i107);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i108);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,108)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i109);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,109)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i110);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,110)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i111);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,111)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i112);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___term__term_1_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,112)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i114);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,114)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i115);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,115)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i116);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,116)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i117);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,117)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i368);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i119);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i121);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,121)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i122);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,122)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i123);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i124);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,124)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i125);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i126);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,126)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i127);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	MR_r3 = MR_tfield(3, MR_tempr1, 2);
	MR_r4 = MR_tfield(3, MR_tempr2, 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
	}
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i129);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,129)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i130);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,130)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i131);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,131)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i368);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,119)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i133);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i135);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i136);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,136)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i137);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i138);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,138)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i139);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i140);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i141);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i142);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__custom_decl_0_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,142)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i144);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,144)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i145);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,145)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i368);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,133)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i147);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i149);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i150);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i151);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,151)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i152);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,152)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i153);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,153)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i154);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,154)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i155);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,155)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i156);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,156)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i157);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(3) = MR_tfield(3, MR_tempr5, 3);
	MR_tempr6 = MR_sv(2);
	MR_tempr1 = MR_tfield(3, MR_tempr6, 3);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i159);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,159)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(__Compare___maybe__maybe_1_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i163);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__data_body_0_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,157)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i169);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,169)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i370);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,147)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i171);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i173);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,173)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i174);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,174)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i175);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i176);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,176)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i177);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,177)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i178);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,178)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i179);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,179)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i180);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,180)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i181);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,181)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i182);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr5, 2);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr6, 2);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(3, MR_tempr3, 1);
	MR_r2 = MR_tfield(3, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___ml_backend__ilasm__il_decl_0_0_i184);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,184)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i1107);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, assembly_decl);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,182)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i368);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,171)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i190);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i192);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,192)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i193);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,193)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i194);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,194)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i195);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,195)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i196);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,196)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i197);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i198);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,198)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i199);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,199)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i200);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,200)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i201);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i368);
	}
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,512)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,190)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i205);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,205)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i206);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,206)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i207);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,207)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,4)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i208);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,208)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,8)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i209);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,209)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,6)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i210);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,210)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,7)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i211);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,5)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i212);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,212)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i213);
	}
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,368)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,213)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,3)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i214);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,214)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__il_decl_0_0_i512);
	}
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,370)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(9);
MR_def_label(__Compare___ml_backend__ilasm__il_decl_0_0,1107)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module83)
	MR_init_entry1(__Unify___ml_backend__ilasm__ilasm_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__ilasm_info_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__ilasm_info_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ilasm__ilasm_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ilasm_info_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (strcmp((char *) (MR_Word *) MR_sv(1), (char *) (MR_Word *) MR_sv(2)) == 0);
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__ilasm_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module84)
	MR_init_entry1(__Compare___ml_backend__ilasm__ilasm_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__ilasm_info_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__ilasm_info_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ilasm__ilasm_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ilasm_info_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__ilasm_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__ilasm_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__ilasm_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module85)
	MR_init_entry1(__Unify___ml_backend__ilasm__ilasm_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__ilasm_out_info_0_0);
	MR_init_label2(__Unify___ml_backend__ilasm__ilasm_out_info_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ilasm__ilasm_out_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ilasm_out_info_0_0_i4);
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
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ilasm_out_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_r2 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ilasm_out_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	if ((MR_r1 != MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ilasm_out_info_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_r1 == MR_r2);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__ilasm_out_info_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__ilasm_out_info_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module86)
	MR_init_entry1(__Compare___ml_backend__ilasm__ilasm_out_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__ilasm_out_info_0_0);
	MR_init_label6(__Compare___ml_backend__ilasm__ilasm_out_info_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ilasm__ilasm_out_info_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__ilasm_out_info_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__ilasm_out_info_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tfield(0, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i5);
MR_def_label(__Compare___ml_backend__ilasm__ilasm_out_info_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i9);
MR_def_label(__Compare___ml_backend__ilasm__ilasm_out_info_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i13);
MR_def_label(__Compare___ml_backend__ilasm__ilasm_out_info_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ilasm_out_info_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilasm__ilasm_out_info_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module87)
	MR_init_entry1(__Unify___ml_backend__ilasm__implattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__implattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__implattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module88)
	MR_init_entry1(__Compare___ml_backend__ilasm__implattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__implattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__implattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module89)
	MR_init_entry1(__Unify___ml_backend__ilasm__implements_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__implements_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__implements_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__implements_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__implements_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, structured_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__implements_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module90)
	MR_init_entry1(__Compare___ml_backend__ilasm__implements_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__implements_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__implements_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__implements_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__implements_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__implements_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__implements_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__implements_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, structured_name);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module91)
	MR_init_entry1(__Unify___ml_backend__ilasm__int16_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__int16_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__int16_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__int16_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__int16_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__int16_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module92)
	MR_init_entry1(__Compare___ml_backend__ilasm__int16_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__int16_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__int16_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__int16_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__int16_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__int16_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__int16_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__int16_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module93)
	MR_init_entry1(__Unify___ml_backend__ilasm__int32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__int32_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__int32_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__int32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__int32_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__int32_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module94)
	MR_init_entry1(__Compare___ml_backend__ilasm__int32_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__int32_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__int32_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__int32_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__int32_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__int32_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__int32_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__int32_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___integer__integer_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module95)
	MR_init_entry1(__Unify___ml_backend__ilasm__int64_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__int64_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__int64_0_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__int64_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__int64_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___integer__integer_0_0);
MR_def_label(__Unify___ml_backend__ilasm__int64_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___integer__integer_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module96)
	MR_init_entry1(__Compare___ml_backend__ilasm__int64_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__int64_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__int64_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__int64_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__int64_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__int64_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__int64_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__int64_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___integer__integer_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module97)
	MR_init_entry1(__Unify___ml_backend__ilasm__int8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__int8_0_0);
	MR_init_label1(__Unify___ml_backend__ilasm__int8_0_0,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__int8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__int8_0_0_i4);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp(2);
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__int8_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module98)
	MR_init_entry1(__Compare___ml_backend__ilasm__int8_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__int8_0_0);
	MR_init_label2(__Compare___ml_backend__ilasm__int8_0_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__int8_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__int8_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__int8_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__int8_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__int8_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module99)
	MR_init_entry1(__Unify___ml_backend__ilasm__methattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__methattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__methattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module100)
	MR_init_entry1(__Compare___ml_backend__ilasm__methattr_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__methattr_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__methattr_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module101)
	MR_init_entry1(__Unify___ml_backend__ilasm__method_body_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__method_body_decl_0_0);
	MR_init_label8(__Unify___ml_backend__ilasm__method_body_decl_0_0,5,6,7,12,17,45,21,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__method_body_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i45);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i7);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(2), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(1), 0);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i45);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i12);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(2), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(1), 0);
	if ((MR_tempr2 == MR_tempr1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i45);
	}
	MR_sv(1) = MR_tempr2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_sv(1) == MR_sv(2));
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i17);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i1);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilasm__custom_decl_0_0);
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i21);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__method_body_decl_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_sv(1), 1);
	MR_tempr2 = MR_tfield(3, MR_sv(2), 1);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__method_body_decl_0_0,1)
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


MR_BEGIN_MODULE(ml_backend__ilasm_module102)
	MR_init_entry1(__Compare___ml_backend__ilasm__method_body_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__method_body_decl_0_0);
	MR_init_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0,7,8,9,10,11,5,15,125,16,17)
	MR_init_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0,18,19,13,23,24,25,27,28,21,32)
	MR_init_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0,33,34,35,37,238,30,41,42,43,44)
	MR_init_label10(__Compare___ml_backend__ilasm__method_body_decl_0_0,39,50,51,52,53,54,48,58,59,60)
	MR_init_label3(__Compare___ml_backend__ilasm__method_body_decl_0_0,61,62,63)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__method_body_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i125);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i8);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i238);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i13);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i16);
	}
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,125)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i17);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i18);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i238);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i21);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i23);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i24);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i25);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i27);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i28);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i238);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i30);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i32);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i35);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i37);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,238)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i39);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i41);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i42);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i43);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i44);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i238);
	}
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilasm__custom_decl_0_0);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(1),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i48);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i50);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i51);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i52);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i53);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i54);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i238);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, instr);
	MR_r2 = MR_tfield(3, MR_sv(1), 1);
	MR_r3 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i58);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,58)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i59);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i60);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i61);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i62);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__method_body_decl_0_0_i63);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__method_body_decl_0_0,63)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_sv(1), 1);
	MR_r2 = MR_tfield(3, MR_sv(2), 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module103)
	MR_init_entry1(__Unify___ml_backend__ilasm__method_defn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__method_defn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__method_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
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


MR_BEGIN_MODULE(ml_backend__ilasm_module104)
	MR_init_entry1(__Compare___ml_backend__ilasm__method_defn_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__method_defn_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__method_defn_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, method_body_decl);
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

MR_decl_entry(__Unify___ml_backend__ilds__member_name_0_0);
MR_decl_entry(__Unify___ml_backend__ilds__signature_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module105)
	MR_init_entry1(__Unify___ml_backend__ilasm__methodhead_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__methodhead_0_0);
	MR_init_label5(__Unify___ml_backend__ilasm__methodhead_0_0,4,6,8,12,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__methodhead_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__methodhead_0_0_i12);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_tfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methattr);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___ml_backend__ilasm__methodhead_0_0_i4);
MR_def_label(__Unify___ml_backend__ilasm__methodhead_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__methodhead_0_0_i1);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__member_name_0_0,
		__Unify___ml_backend__ilasm__methodhead_0_0_i6);
MR_def_label(__Unify___ml_backend__ilasm__methodhead_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__methodhead_0_0_i1);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Unify___ml_backend__ilds__signature_0_0,
		__Unify___ml_backend__ilasm__methodhead_0_0_i8);
MR_def_label(__Unify___ml_backend__ilasm__methodhead_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__methodhead_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, implattr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__methodhead_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__methodhead_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__ilds__member_name_0_0);
MR_decl_entry(__Compare___ml_backend__ilds__signature_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module106)
	MR_init_entry1(__Compare___ml_backend__ilasm__methodhead_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__methodhead_0_0);
	MR_init_label6(__Compare___ml_backend__ilasm__methodhead_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__methodhead_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__methodhead_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__methodhead_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__methodhead_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__methodhead_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(2);
	MR_sv(6) = MR_tfield(0, MR_tempr5, 3);
	MR_sv(5) = MR_tfield(0, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr5, 1);
	MR_tempr6 = MR_sv(1);
	MR_sv(3) = MR_tfield(0, MR_tempr6, 3);
	MR_tempr1 = MR_tfield(0, MR_tempr6, 2);
	MR_tempr2 = MR_tfield(0, MR_tempr6, 1);
	MR_tempr3 = MR_tempr6;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr5;
	MR_sv(2) = MR_tempr1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methattr);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___ml_backend__ilasm__methodhead_0_0_i5);
MR_def_label(__Compare___ml_backend__ilasm__methodhead_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__methodhead_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__member_name_0_0,
		__Compare___ml_backend__ilasm__methodhead_0_0_i9);
MR_def_label(__Compare___ml_backend__ilasm__methodhead_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__methodhead_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___ml_backend__ilds__signature_0_0,
		__Compare___ml_backend__ilasm__methodhead_0_0_i13);
MR_def_label(__Compare___ml_backend__ilasm__methodhead_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__methodhead_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, implattr);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__methodhead_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module107)
	MR_init_entry1(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__qstring_or_bytes_0_0);
	MR_init_label4(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0,5,17,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___ml_backend__ilasm__qstring_or_bytes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0_i17);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0_i6);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_tempr1, (char *) (MR_Word *) MR_tempr2) == 0);
	MR_decr_sp_and_return(3);
	}
MR_def_label(__Unify___ml_backend__ilasm__qstring_or_bytes_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module108)
	MR_init_entry1(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__qstring_or_bytes_0_0);
	MR_init_label7(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,30,31,5,11,9,15,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___ml_backend__ilasm__qstring_or_bytes_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i31);
	}
MR_def_label(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i9);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i11);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i31);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, int8);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__qstring_or_bytes_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___ml_backend__ilds__simple_type_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module109)
	MR_init_entry1(__Unify___ml_backend__ilasm__ref_or_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___ml_backend__ilasm__ref_or_value_0_0);
	MR_init_label3(__Unify___ml_backend__ilasm__ref_or_value_0_0,16,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___ml_backend__ilasm__ref_or_value_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ref_or_value_0_0_i16);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ref_or_value_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ref_or_value_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_r2 = MR_tfield(0, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
	}
MR_def_label(__Unify___ml_backend__ilasm__ref_or_value_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___ml_backend__ilasm__ref_or_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___ml_backend__ilasm__ref_or_value_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Unify___ml_backend__ilasm__ref_or_value_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Compare___ml_backend__ilds__simple_type_0_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module110)
	MR_init_entry1(__Compare___ml_backend__ilasm__ref_or_value_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___ml_backend__ilasm__ref_or_value_0_0);
	MR_init_label5(__Compare___ml_backend__ilasm__ref_or_value_0_0,3,2,19,7,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___ml_backend__ilasm__ref_or_value_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ref_or_value_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___ml_backend__ilasm__ref_or_value_0_0_i2);
MR_def_label(__Compare___ml_backend__ilasm__ref_or_value_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___ml_backend__ilasm__ref_or_value_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ref_or_value_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ref_or_value_0_0_i7);
	}
MR_def_label(__Compare___ml_backend__ilasm__ref_or_value_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_sv(1), 0);
	MR_r2 = MR_mask_field(MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___ml_backend__ilds__simple_type_0_0);
MR_def_label(__Compare___ml_backend__ilasm__ref_or_value_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___ml_backend__ilasm__ref_or_value_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___ml_backend__ilasm__ref_or_value_0_0_i19);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module111)
	MR_init_entry1(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0);
	MR_init_label2(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_decl__520__1'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(ml_backend__ilasm__output_assembly_decl_6_0,
		ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0_i2);
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n\t", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0_i3);
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__output_decl__520__1_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module112)
	MR_init_entry1(ml_backend__ilasm__IntroducedFrom__pred__output_class_member__571__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__IntroducedFrom__pred__output_class_member__571__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_class_member__571__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__IntroducedFrom__pred__output_class_member__571__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, fieldattr);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module113)
	MR_init_entry1(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__647__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__647__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_methodhead__647__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__647__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, methattr);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module114)
	MR_init_entry1(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__656__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__656__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_methodhead__656__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__IntroducedFrom__pred__output_methodhead__656__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilasm, implattr);
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(io__write_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_char_3_0);

MR_BEGIN_MODULE(ml_backend__ilasm_module115)
	MR_init_entry1(ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0);
	MR_init_label1(ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_nested_class_quals__1957__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Integer) 47;
	MR_np_call_localret_ent(io__write_char_3_0,
		ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0_i2);
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__output_nested_class_quals__1957__1_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__ilasm__output_id_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module116)
	MR_init_entry1(ml_backend__ilasm__IntroducedFrom__pred__output_comment_string__2096__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__IntroducedFrom__pred__output_comment_string__2096__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_comment_string__2096__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__IntroducedFrom__pred__output_comment_string__2096__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 == (MR_Integer) 10);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module117)
	MR_init_entry1(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0);
	MR_init_label6(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0,4,5,6,3,2,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__escape_string__2129__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,8)) {
		MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i4);
	}
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 98;
	MR_r6 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i3);
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,9)) {
		MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i5);
	}
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 116;
	MR_r6 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i3);
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,10)) {
		MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i6);
	}
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 110;
	MR_r6 = MR_r3;
	MR_r3 = MR_r5;
	MR_r4 = MR_r6;
	MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i3);
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,92)) {
		MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 92;
	MR_tempr2 = MR_r3;
	MR_tempr3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	}
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_tempr1, 1) = MR_r4;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r1)) {
		MR_GOTO_LAB(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0_i10);
	}
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Integer) 92;
	MR_tfield(1, MR_r2, 1) = MR_r3;
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r1 = MR_tempr1;
	MR_proceed();
	}
MR_def_label(ml_backend__ilasm__IntroducedFrom__pred__escape_string__2129__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_r2;
	MR_tfield(1, MR_r1, 1) = MR_r3;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module118)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0);
	MR_init_label6(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,24,3,5,6,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ilasm_write_list__ho1__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r2, 0);
	MR_sv(5) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,24);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_i5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__ilasm__output_simple_type_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_i6);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_i8);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_i24);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_i9);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_r4 = MR_sv(2);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_49_95_95_91_52_93_95_48_7_0_i24);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module119)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,18,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ilasm_write_list__ho2__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ilasm__output_local_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_50_95_95_91_52_93_95_48_7_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module120)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,18,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ilasm_write_list__ho3__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ilasm__output_method_param_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_51_95_95_91_52_93_95_48_7_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module121)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0,18,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ilasm_write_list__ho4__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ilasm__output_method_body_decl_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_52_95_95_91_52_93_95_48_7_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module122)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0,18,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ilasm_write_list__ho5__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ilasm__output_class_member_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_53_95_95_91_52_93_95_48_7_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module123)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0,17,3,4,12,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ilasm_write_list__ho6__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr2;
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__ilasm__output_structured_name_5_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0_i6);
	}
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0_i17);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_54_95_95_91_52_93_95_48_7_0_i12);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__ilasm_module124)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0);
	MR_init_label5(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,18,3,4,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__ilasm_write_list__ho7__[4]_0'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(5);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(4) = MR_r1;
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_r3 = MR_r4;
	MR_np_call_localret_ent(ml_backend__ilasm__output_decl_6_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0_i4);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0_i6);
	}
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0_i18);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0_i7);
MR_def_label(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(f_109_108_95_98_97_99_107_101_110_100_95_95_105_108_97_115_109_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_108_97_115_109_95_119_114_105_116_101_95_108_105_115_116_95_95_104_111_55_95_95_91_52_93_95_48_7_0_i18);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__ilasm_maybe_bunch_0(void)
{
	ml_backend__ilasm_module0();
	ml_backend__ilasm_module1();
	ml_backend__ilasm_module2();
	ml_backend__ilasm_module3();
	ml_backend__ilasm_module4();
	ml_backend__ilasm_module5();
	ml_backend__ilasm_module6();
	ml_backend__ilasm_module7();
	ml_backend__ilasm_module8();
	ml_backend__ilasm_module9();
	ml_backend__ilasm_module10();
	ml_backend__ilasm_module11();
	ml_backend__ilasm_module12();
	ml_backend__ilasm_module13();
	ml_backend__ilasm_module14();
	ml_backend__ilasm_module15();
	ml_backend__ilasm_module16();
	ml_backend__ilasm_module17();
	ml_backend__ilasm_module18();
	ml_backend__ilasm_module19();
	ml_backend__ilasm_module20();
	ml_backend__ilasm_module21();
	ml_backend__ilasm_module22();
	ml_backend__ilasm_module23();
	ml_backend__ilasm_module24();
	ml_backend__ilasm_module25();
	ml_backend__ilasm_module26();
	ml_backend__ilasm_module27();
	ml_backend__ilasm_module28();
	ml_backend__ilasm_module29();
	ml_backend__ilasm_module30();
	ml_backend__ilasm_module31();
	ml_backend__ilasm_module32();
	ml_backend__ilasm_module33();
	ml_backend__ilasm_module34();
	ml_backend__ilasm_module35();
	ml_backend__ilasm_module36();
	ml_backend__ilasm_module37();
	ml_backend__ilasm_module38();
	ml_backend__ilasm_module39();
}

static void mercury__ml_backend__ilasm_maybe_bunch_1(void)
{
	ml_backend__ilasm_module40();
	ml_backend__ilasm_module41();
	ml_backend__ilasm_module42();
	ml_backend__ilasm_module43();
	ml_backend__ilasm_module44();
	ml_backend__ilasm_module45();
	ml_backend__ilasm_module46();
	ml_backend__ilasm_module47();
	ml_backend__ilasm_module48();
	ml_backend__ilasm_module49();
	ml_backend__ilasm_module50();
	ml_backend__ilasm_module51();
	ml_backend__ilasm_module52();
	ml_backend__ilasm_module53();
	ml_backend__ilasm_module54();
	ml_backend__ilasm_module55();
	ml_backend__ilasm_module56();
	ml_backend__ilasm_module57();
	ml_backend__ilasm_module58();
	ml_backend__ilasm_module59();
	ml_backend__ilasm_module60();
	ml_backend__ilasm_module61();
	ml_backend__ilasm_module62();
	ml_backend__ilasm_module63();
	ml_backend__ilasm_module64();
	ml_backend__ilasm_module65();
	ml_backend__ilasm_module66();
	ml_backend__ilasm_module67();
	ml_backend__ilasm_module68();
	ml_backend__ilasm_module69();
	ml_backend__ilasm_module70();
	ml_backend__ilasm_module71();
	ml_backend__ilasm_module72();
	ml_backend__ilasm_module73();
	ml_backend__ilasm_module74();
	ml_backend__ilasm_module75();
	ml_backend__ilasm_module76();
	ml_backend__ilasm_module77();
	ml_backend__ilasm_module78();
	ml_backend__ilasm_module79();
}

static void mercury__ml_backend__ilasm_maybe_bunch_2(void)
{
	ml_backend__ilasm_module80();
	ml_backend__ilasm_module81();
	ml_backend__ilasm_module82();
	ml_backend__ilasm_module83();
	ml_backend__ilasm_module84();
	ml_backend__ilasm_module85();
	ml_backend__ilasm_module86();
	ml_backend__ilasm_module87();
	ml_backend__ilasm_module88();
	ml_backend__ilasm_module89();
	ml_backend__ilasm_module90();
	ml_backend__ilasm_module91();
	ml_backend__ilasm_module92();
	ml_backend__ilasm_module93();
	ml_backend__ilasm_module94();
	ml_backend__ilasm_module95();
	ml_backend__ilasm_module96();
	ml_backend__ilasm_module97();
	ml_backend__ilasm_module98();
	ml_backend__ilasm_module99();
	ml_backend__ilasm_module100();
	ml_backend__ilasm_module101();
	ml_backend__ilasm_module102();
	ml_backend__ilasm_module103();
	ml_backend__ilasm_module104();
	ml_backend__ilasm_module105();
	ml_backend__ilasm_module106();
	ml_backend__ilasm_module107();
	ml_backend__ilasm_module108();
	ml_backend__ilasm_module109();
	ml_backend__ilasm_module110();
	ml_backend__ilasm_module111();
	ml_backend__ilasm_module112();
	ml_backend__ilasm_module113();
	ml_backend__ilasm_module114();
	ml_backend__ilasm_module115();
	ml_backend__ilasm_module116();
	ml_backend__ilasm_module117();
	ml_backend__ilasm_module118();
	ml_backend__ilasm_module119();
}

static void mercury__ml_backend__ilasm_maybe_bunch_3(void)
{
	ml_backend__ilasm_module120();
	ml_backend__ilasm_module121();
	ml_backend__ilasm_module122();
	ml_backend__ilasm_module123();
	ml_backend__ilasm_module124();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__ilasm__init(void);
void mercury__ml_backend__ilasm__init_type_tables(void);
void mercury__ml_backend__ilasm__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__ilasm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__ilasm__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__ml_backend__ilasm__init_threadscope_string_table(void);
#endif

void mercury__ml_backend__ilasm__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__ilasm_maybe_bunch_0();
	mercury__ml_backend__ilasm_maybe_bunch_1();
	mercury__ml_backend__ilasm_maybe_bunch_2();
	mercury__ml_backend__ilasm_maybe_bunch_3();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0,
		ml_backend__ilasm__assembly_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_byte_0,
		ml_backend__ilasm__byte_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0,
		ml_backend__ilasm__class_member_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0,
		ml_backend__ilasm__classattr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0,
		ml_backend__ilasm__custom_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_custom_type_0,
		ml_backend__ilasm__custom_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_data_body_0,
		ml_backend__ilasm__data_body_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0,
		ml_backend__ilasm__data_item_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_extends_0,
		ml_backend__ilasm__extends_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_field_init_0,
		ml_backend__ilasm__field_init_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_field_initializer_0,
		ml_backend__ilasm__field_initializer_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0,
		ml_backend__ilasm__fieldattr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_float32_0,
		ml_backend__ilasm__float32_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_float64_0,
		ml_backend__ilasm__float64_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0,
		ml_backend__ilasm__il_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_info_0,
		ml_backend__ilasm__ilasm_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_out_info_0,
		ml_backend__ilasm__ilasm_out_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_implattr_0,
		ml_backend__ilasm__implattr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_implements_0,
		ml_backend__ilasm__implements_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_int16_0,
		ml_backend__ilasm__int16_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_int32_0,
		ml_backend__ilasm__int32_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_int64_0,
		ml_backend__ilasm__int64_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_int8_0,
		ml_backend__ilasm__int8_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0,
		ml_backend__ilasm__methattr_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0,
		ml_backend__ilasm__method_body_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_method_defn_0,
		ml_backend__ilasm__method_defn_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0,
		ml_backend__ilasm__methodhead_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_qstring_or_bytes_0,
		ml_backend__ilasm__qstring_or_bytes_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_ml_backend__ilasm__type_ctor_info_ref_or_value_0,
		ml_backend__ilasm__ref_or_value_0_0);
	mercury__ml_backend__ilasm__init_debugger();
}

void mercury__ml_backend__ilasm__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_assembly_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_byte_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_class_member_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_classattr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_custom_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_custom_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_data_body_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_data_item_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_extends_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_field_init_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_field_initializer_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_fieldattr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_float32_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_float64_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_il_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_ilasm_out_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_implattr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_implements_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_int16_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_int32_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_int64_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_int8_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_methattr_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_method_body_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_method_defn_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_methodhead_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_qstring_or_bytes_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_ml_backend__ilasm__type_ctor_info_ref_or_value_0);
	}
}


void mercury__ml_backend__ilasm__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__ilasm__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__ilasm);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__ilasm__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__ml_backend__ilasm__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
