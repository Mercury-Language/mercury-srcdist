/*
** Automatically generated from `export.m'
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
INIT mercury__backend_libs__export__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 530 "../library/io.int"
#include "io.mh"

#line 27 "backend_libs.export.c"
#line 538 "../library/io.int"
#include "string.mh"

#line 31 "backend_libs.export.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "backend_libs.export.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "backend_libs.export.c"
#line 30 "../library/array.int2"
#include "array.mh"

#line 43 "backend_libs.export.c"
#line 44 "backend_libs.export.c"
#include "backend_libs.export.mh"

#line 47 "backend_libs.export.c"
#line 48 "backend_libs.export.c"
#ifndef BACKEND_LIBS__EXPORT_DECL_GUARD
#define BACKEND_LIBS__EXPORT_DECL_GUARD

#line 52 "backend_libs.export.c"
#line 53 "backend_libs.export.c"

#endif
#line 56 "backend_libs.export.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
	MR_Word * f5;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];
MR_decl_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0, 2,3,9,7,11,6,5,13)
MR_decl_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0, 14,15,16,17,18,21,22,20)
MR_decl_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0, 23,24,30,34,36,37,39,40)
MR_decl_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0, 38,42,43,45,46,47,49,51)
MR_decl_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0, 52,53,54,48,55,56,27,28)
MR_decl_label5(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0, 26,60,59,25,62)
MR_decl_label7(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0, 6,8,9,18,4,20,3)
MR_decl_label1(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0, 2)
MR_decl_label3(backend_libs__export__convert_type_from_mercury_3_0, 2,9,35)
MR_decl_label5(backend_libs__export__convert_type_to_mercury_3_0, 25,7,9,11,24)
MR_decl_label8(backend_libs__export__copy_output_args_4_0, 31,5,7,8,10,11,9,13)
MR_decl_label8(backend_libs__export__copy_output_args_4_0, 14,16,17,19,21,18,23,24)
MR_decl_label4(backend_libs__export__copy_output_args_4_0, 25,26,28,3)
MR_decl_label8(backend_libs__export__get_argument_declarations_2_5_0, 41,5,6,7,4,8,9,15)
MR_decl_label3(backend_libs__export__get_argument_declarations_2_5_0, 16,17,40)
MR_decl_label1(backend_libs__export__get_argument_declarations_for_lang_c_4_0, 3)
MR_decl_label7(backend_libs__export__get_foreign_export_decls_2_0, 2,3,4,5,6,7,8)
MR_decl_label3(backend_libs__export__get_foreign_export_defns_2_0, 2,3,4)
MR_decl_label8(backend_libs__export__get_input_args_4_0, 6,7,8,10,11,9,13,14)
MR_decl_label8(backend_libs__export__get_input_args_4_0, 16,18,20,17,22,23,24,25)
MR_decl_label3(backend_libs__export__get_input_args_4_0, 5,28,3)
MR_decl_label2(backend_libs__export__include_arg_2_0, 6,1)
MR_decl_label8(backend_libs__export__output_foreign_decl_4_0, 5,4,6,7,8,9,27,29)
MR_decl_label8(backend_libs__export__produce_header_file_4_0, 2,3,4,7,8,9,10,11)
MR_decl_label8(backend_libs__export__produce_header_file_4_0, 12,13,14,15,16,17,18,19)
MR_decl_label8(backend_libs__export__produce_header_file_4_0, 20,21,22,23,5,25,26,27)
MR_decl_label4(backend_libs__export__produce_header_file_4_0, 28,29,30,31)
MR_decl_label8(backend_libs__export__produce_header_file_2_3_0, 33,6,7,8,9,10,11,20)
MR_decl_label2(backend_libs__export__produce_header_file_2_3_0, 35,36)
MR_decl_label8(backend_libs__export__to_c_4_0, 4,5,6,7,8,9,10,11)
MR_decl_label4(backend_libs__export__to_c_4_0, 12,13,14,3)
MR_def_extern_entry(backend_libs__export__convert_type_from_mercury_3_0)
MR_decl_static(fn__backend_libs__export__this_file_0_0)
MR_decl_static(backend_libs__export__get_argument_declarations_2_5_0)
MR_decl_static(backend_libs__export__get_argument_declarations_for_lang_c_4_0)
MR_def_extern_entry(backend_libs__export__get_foreign_export_decls_2_0)
MR_def_extern_entry(backend_libs__export__convert_type_to_mercury_3_0)
MR_decl_static(backend_libs__export__get_input_args_4_0)
MR_decl_static(backend_libs__export__copy_output_args_4_0)
MR_decl_static(backend_libs__export__to_c_4_0)
MR_def_extern_entry(backend_libs__export__get_foreign_export_defns_2_0)
MR_decl_static(backend_libs__export__produce_header_file_2_3_0)
MR_def_extern_entry(backend_libs__export__produce_header_file_4_0)
MR_def_extern_entry(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0)
MR_decl_static(backend_libs__export__include_arg_2_0)
MR_decl_static(backend_libs__export__output_foreign_decl_4_0)
MR_decl_static(backend_libs__export__IntroducedFrom__pred__to_c__277__1_2_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0)

static const struct mercury_type_0 mercury_common_0[27] =
{
{
MR_string_const(");\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("}\n\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("*/\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("** Do not edit.\n", 16),
MR_TAG_COMMON(1,0,2)
},
{
MR_string_const(".\n", 2),
MR_TAG_COMMON(1,0,3)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
{
MR_string_const("#endif\n", 7),
MR_TAG_COMMON(1,0,5)
},
{
MR_string_const("#include \"mercury_deep_profiling.h\"\n", 36),
MR_TAG_COMMON(1,0,6)
},
{
MR_string_const("#ifdef MR_DEEP_PROFILING\n", 25),
MR_TAG_COMMON(1,0,7)
},
{
MR_string_const("#endif\n", 7),
MR_TAG_COMMON(1,0,8)
},
{
MR_string_const("  #endif\n", 9),
MR_TAG_COMMON(1,0,9)
},
{
MR_string_const("  #include \"mercury_imp.h\"\n", 27),
MR_TAG_COMMON(1,0,10)
},
{
MR_string_const("  #ifndef MERCURY_HDR_EXCLUDE_IMP_H\n", 36),
MR_TAG_COMMON(1,0,11)
},
{
MR_string_const("#else\n", 6),
MR_TAG_COMMON(1,0,12)
},
{
MR_string_const("#include \"mercury.h\"\n", 21),
MR_TAG_COMMON(1,0,13)
},
{
MR_string_const("#ifdef MR_HIGHLEVEL_CODE\n", 25),
MR_TAG_COMMON(1,0,14)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,0,15)
},
{
MR_string_const("#endif\n", 7),
MR_TAG_COMMON(1,0,16)
},
{
MR_string_const("extern \"C\" {\n", 13),
MR_TAG_COMMON(1,0,17)
},
{
MR_string_const("#ifdef __cplusplus\n", 19),
MR_TAG_COMMON(1,0,18)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,0,19)
},
{
MR_string_const("\n", 1),
MR_TAG_COMMON(1,0,20)
},
{
MR_string_const(" */\n", 4),
MR_tbmkword(0, 0)
},
{
MR_string_const("\t}\n", 3),
MR_tbmkword(0, 0)
},
{
MR_string_const("\treturn MR_FALSE;\n", 18),
MR_TAG_COMMON(1,0,23)
},
{
MR_string_const("\t\tMR_restore_regs_from_mem(c_regs);\n", 36),
MR_TAG_COMMON(1,0,24)
},
{
MR_string_const("\tif (!MR_r1) {\n", 15),
MR_TAG_COMMON(1,0,25)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__export__to_c_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_module__type_ctor_info_module_info_0;
static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_3;
static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_4;
static const struct mercury_type_1 mercury_common_1[5] =
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__export__to_c_4_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(libs__globals, foreign_language),
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
{
(MR_Word *) &mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_1,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(6,1)
},
{
(MR_Word *) &mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_2,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(6,1)
},
{
(MR_Word *) &mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_3,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(6,1)
},
{
(MR_Word *) &mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_4,
(MR_Word *) (MR_Integer) 0,
2,
MR_CTOR0_ADDR(hlds__hlds_module, module_info),
MR_COMMON(6,1)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
1
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_maybe__type_ctor_info_maybe_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;
static const struct mercury_type_3 mercury_common_3[1] =
{
{
{
MR_CTOR1_ADDR(maybe, maybe),
MR_CTOR0_ADDR(parse_tree__prog_data, foreign_decl_is_local)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__export__produce_header_file_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__backend_libs__export__produce_header_file_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(3,0),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_COMMON(4,0),
MR_ENTRY_AP(backend_libs__export__output_foreign_decl_4_0),
1,
MR_TAG_COMMON(1,2,0)
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_pair__type_ctor_info_pair_2;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_arg_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_mer_type_0;
static const struct mercury_type_6 mercury_common_6[2] =
{
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
{
{
MR_CTOR_ADDR(pair, pair, 2),
MR_CTOR0_ADDR(hlds__hlds_pred, arg_info),
MR_CTOR0_ADDR(parse_tree__prog_data, mer_type)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__export__to_c_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.export",
"backend_libs.export",
"lambda_export_m_277",
2,
0
},
"backend_libs.export",
"export.m",
277,
"d2;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__backend_libs__export__produce_header_file_4_0_1 = {
{
MR_PREDICATE,
"backend_libs.export",
"backend_libs.export",
"output_foreign_decl",
4,
0
},
"backend_libs.export",
"export.m",
680,
"d1;c12;t;c88;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_1 = {
{
MR_PREDICATE,
"backend_libs.export",
"backend_libs.export",
"include_arg",
2,
0
},
"backend_libs.export",
"export.m",
451,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_2 = {
{
MR_PREDICATE,
"backend_libs.export",
"backend_libs.export",
"include_arg",
2,
0
},
"backend_libs.export",
"export.m",
451,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_3 = {
{
MR_PREDICATE,
"backend_libs.export",
"backend_libs.export",
"include_arg",
2,
0
},
"backend_libs.export",
"export.m",
451,
"d1;c24;"
};

static const MR_UserClosureId
mercury_data__closure_layout__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_4 = {
{
MR_PREDICATE,
"backend_libs.export",
"backend_libs.export",
"include_arg",
2,
0
},
"backend_libs.export",
"export.m",
451,
"d1;c24;"
};

MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(backend_libs__export_module0)
	MR_init_entry1(backend_libs__export__convert_type_from_mercury_3_0);
	MR_init_label3(backend_libs__export__convert_type_from_mercury_3_0,2,9,35)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__export__convert_type_from_mercury_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(backend_libs__export__convert_type_from_mercury_3_0_i2);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,2)) {
		MR_GOTO_LAB(backend_libs__export__convert_type_from_mercury_3_0_i2);
	}
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(MR_String) ", 12);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
MR_def_label(backend_libs__export__convert_type_from_mercury_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(backend_libs__export__convert_type_from_mercury_3_0_i35);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(2, MR_r2, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(backend_libs__export__convert_type_from_mercury_3_0_i35);
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__convert_type_from_mercury_3_0_i9);
MR_def_label(backend_libs__export__convert_type_from_mercury_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_word_to_float(", 17);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(backend_libs__export__convert_type_from_mercury_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module1)
	MR_init_entry1(fn__backend_libs__export__this_file_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__backend_libs__export__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("export.m", 8);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_3_2);
MR_decl_entry(fn__backend_libs__foreign__to_type_string_3_0);

MR_BEGIN_MODULE(backend_libs__export_module2)
	MR_init_entry1(backend_libs__export__get_argument_declarations_2_5_0);
	MR_init_label8(backend_libs__export__get_argument_declarations_2_5_0,41,5,6,7,4,8,9,15)
	MR_init_label3(backend_libs__export__get_argument_declarations_2_5_0,16,17,40)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__get_argument_declarations_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__get_argument_declarations_2_5_0_i41);
	}
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(backend_libs__export__get_argument_declarations_2_5_0_i5);
	}
	MR_sv(1) = MR_r3;
	MR_r5 = MR_r2;
	MR_r2 = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_tempr1;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = ((MR_Integer) MR_r5 + (MR_Integer) 1);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 1);
	MR_r1 = (MR_Integer) 0;
	MR_GOTO_LAB(backend_libs__export__get_argument_declarations_2_5_0_i4);
	}
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_ctfield(1, MR_r1, 1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(5) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(6) = MR_ctfield(0, MR_ctfield(0, MR_tempr1, 0), 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		backend_libs__export__get_argument_declarations_2_5_0_i6);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" Mercury__argument", 18);
	MR_np_call_localret_ent(string__append_3_2,
		backend_libs__export__get_argument_declarations_2_5_0_i7);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Integer) 0;
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_type_string_3_0,
		backend_libs__export__get_argument_declarations_2_5_0_i8);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(6),1)) {
		MR_GOTO_LAB(backend_libs__export__get_argument_declarations_2_5_0_i9);
	}
	MR_r2 = (MR_Word) MR_string_const(" *", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_argument_declarations_2_5_0_i9);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	if (MR_LTAGS_TEST(MR_sv(3),0,0)) {
		MR_GOTO_LAB(backend_libs__export__get_argument_declarations_2_5_0_i40);
	}
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_localcall_lab(backend_libs__export__get_argument_declarations_2_5_0,
		backend_libs__export__get_argument_declarations_2_5_0_i15);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_argument_declarations_2_5_0_i16);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_argument_declarations_2_5_0_i17);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(backend_libs__export__get_argument_declarations_2_5_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module3)
	MR_init_entry1(backend_libs__export__get_argument_declarations_for_lang_c_4_0);
	MR_init_label1(backend_libs__export__get_argument_declarations_for_lang_c_4_0,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__get_argument_declarations_for_lang_c_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__get_argument_declarations_for_lang_c_4_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_proceed();
MR_def_label(backend_libs__export__get_argument_declarations_for_lang_c_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_r3;
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_np_tailcall_ent(backend_libs__export__get_argument_declarations_2_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(hlds__hlds_module__module_info_get_predicate_table_2_0);
MR_decl_entry(hlds__pred_table__predicate_table_get_preds_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_foreign_decl_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0);
MR_decl_entry(hlds__hlds_module__module_info_get_globals_2_0);

MR_BEGIN_MODULE(backend_libs__export_module4)
	MR_init_entry1(backend_libs__export__get_foreign_export_decls_2_0);
	MR_init_label7(backend_libs__export__get_foreign_export_decls_2_0,2,3,4,5,6,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__export__get_foreign_export_decls_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		backend_libs__export__get_foreign_export_decls_2_0_i2);
MR_def_label(backend_libs__export__get_foreign_export_decls_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		backend_libs__export__get_foreign_export_decls_2_0_i3);
MR_def_label(backend_libs__export__get_foreign_export_decls_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_foreign_decl_2_0,
		backend_libs__export__get_foreign_export_decls_2_0_i4);
MR_def_label(backend_libs__export__get_foreign_export_decls_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		backend_libs__export__get_foreign_export_decls_2_0_i5);
MR_def_label(backend_libs__export__get_foreign_export_decls_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0,
		backend_libs__export__get_foreign_export_decls_2_0_i6);
MR_def_label(backend_libs__export__get_foreign_export_decls_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		backend_libs__export__get_foreign_export_decls_2_0_i7);
MR_def_label(backend_libs__export__get_foreign_export_decls_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,
		backend_libs__export__get_foreign_export_decls_2_0_i8);
MR_def_label(backend_libs__export__get_foreign_export_decls_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module5)
	MR_init_entry1(backend_libs__export__convert_type_to_mercury_3_0);
	MR_init_label5(backend_libs__export__convert_type_to_mercury_3_0,25,7,9,11,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__export__convert_type_to_mercury_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r2,2)) {
		MR_GOTO_LAB(backend_libs__export__convert_type_to_mercury_3_0_i24);
	}
	MR_r3 = MR_ctfield(2, MR_r2, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(backend_libs__export__convert_type_to_mercury_3_0_i24) MR_AND
		MR_LABEL_AP(backend_libs__export__convert_type_to_mercury_3_0_i25) MR_AND
		MR_LABEL_AP(backend_libs__export__convert_type_to_mercury_3_0_i9) MR_AND
		MR_LABEL_AP(backend_libs__export__convert_type_to_mercury_3_0_i11));
MR_def_label(backend_libs__export__convert_type_to_mercury_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__convert_type_to_mercury_3_0_i7);
MR_def_label(backend_libs__export__convert_type_to_mercury_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_float_to_word(", 17);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(backend_libs__export__convert_type_to_mercury_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(MR_Word) ", 10);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(backend_libs__export__convert_type_to_mercury_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(UnsignedChar) ", 15);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(backend_libs__export__convert_type_to_mercury_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__string__int_to_string_1_0);
MR_decl_entry(fn__backend_libs__foreign__to_exported_type_2_0);
MR_decl_entry(fn__backend_libs__foreign__is_foreign_type_1_0);
MR_decl_entry(fn__backend_libs__foreign__to_type_string_2_0);
MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(backend_libs__export_module6)
	MR_init_entry1(backend_libs__export__get_input_args_4_0);
	MR_init_label8(backend_libs__export__get_input_args_4_0,6,7,8,10,11,9,13,14)
	MR_init_label8(backend_libs__export__get_input_args_4_0,16,18,20,17,22,23,24,25)
	MR_init_label3(backend_libs__export__get_input_args_4_0,5,28,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__get_input_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__get_input_args_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_ctfield(0, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr3,0)) {
		MR_GOTO_LAB(backend_libs__export__get_input_args_4_0_i5);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 0);
	MR_sv(5) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r1 = MR_sv(5);
	}
	MR_np_call_localret_ent(string__int_to_string_2_0,
		backend_libs__export__get_input_args_4_0_i6);
MR_def_label(backend_libs__export__get_input_args_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Mercury__argument", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i7);
MR_def_label(backend_libs__export__get_input_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__export__convert_type_to_mercury_3_0,
		backend_libs__export__get_input_args_4_0_i8);
MR_def_label(backend_libs__export__get_input_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(4),32)) {
		MR_GOTO_LAB(backend_libs__export__get_input_args_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		backend_libs__export__get_input_args_4_0_i10);
MR_def_label(backend_libs__export__get_input_args_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i11);
MR_def_label(backend_libs__export__get_input_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_r(", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i14);
MR_def_label(backend_libs__export__get_input_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		backend_libs__export__get_input_args_4_0_i13);
MR_def_label(backend_libs__export__get_input_args_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_r", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i14);
MR_def_label(backend_libs__export__get_input_args_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		backend_libs__export__get_input_args_4_0_i16);
MR_def_label(backend_libs__export__get_input_args_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		backend_libs__export__get_input_args_4_0_i18);
MR_def_label(backend_libs__export__get_input_args_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__get_input_args_4_0_i17);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_type_string_2_0,
		backend_libs__export__get_input_args_4_0_i20);
MR_def_label(backend_libs__export__get_input_args_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\tMR_MAYBE_BOX_FOREIGN_TYPE(", 27);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		backend_libs__export__get_input_args_4_0_i25);
MR_def_label(backend_libs__export__get_input_args_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i22);
MR_def_label(backend_libs__export__get_input_args_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i23);
MR_def_label(backend_libs__export__get_input_args_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i24);
MR_def_label(backend_libs__export__get_input_args_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__get_input_args_4_0_i25);
MR_def_label(backend_libs__export__get_input_args_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(backend_libs__export__get_input_args_4_0,
		backend_libs__export__get_input_args_4_0_i28);
MR_def_label(backend_libs__export__get_input_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_np_localcall_lab(backend_libs__export__get_input_args_4_0,
		backend_libs__export__get_input_args_4_0_i28);
MR_def_label(backend_libs__export__get_input_args_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(backend_libs__export__get_input_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module7)
	MR_init_entry1(backend_libs__export__copy_output_args_4_0);
	MR_init_label8(backend_libs__export__copy_output_args_4_0,31,5,7,8,10,11,9,13)
	MR_init_label8(backend_libs__export__copy_output_args_4_0,14,16,17,19,21,18,23,24)
	MR_init_label4(backend_libs__export__copy_output_args_4_0,25,26,28,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__copy_output_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__copy_output_args_4_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_r5 = MR_ctfield(1, MR_r1, 0);
	MR_r6 = MR_ctfield(0, MR_r5, 0);
	MR_r4 = MR_ctfield(0, MR_r6, 1);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(backend_libs__export__copy_output_args_4_0_i5);
	}
MR_def_label(backend_libs__export__copy_output_args_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_ctfield(1, MR_r1, 1);
	MR_r2 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_sv(1) = (MR_Word) MR_string_const("", 0);
	MR_np_localcall_lab(backend_libs__export__copy_output_args_4_0,
		backend_libs__export__copy_output_args_4_0_i28);
MR_def_label(backend_libs__export__copy_output_args_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r4,1)) {
		MR_GOTO_LAB(backend_libs__export__copy_output_args_4_0_i31);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_ctfield(1, MR_r1, 1);
	MR_sv(3) = MR_ctfield(0, MR_r5, 1);
	MR_sv(4) = MR_ctfield(0, MR_r6, 0);
	MR_sv(5) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(string__int_to_string_2_0,
		backend_libs__export__copy_output_args_4_0_i7);
MR_def_label(backend_libs__export__copy_output_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("Mercury__argument", 17);
	MR_np_call_localret_ent(string__append_3_2,
		backend_libs__export__copy_output_args_4_0_i8);
MR_def_label(backend_libs__export__copy_output_args_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(4),32)) {
		MR_GOTO_LAB(backend_libs__export__copy_output_args_4_0_i9);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		backend_libs__export__copy_output_args_4_0_i10);
MR_def_label(backend_libs__export__copy_output_args_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__copy_output_args_4_0_i11);
MR_def_label(backend_libs__export__copy_output_args_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_r(", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__copy_output_args_4_0_i14);
MR_def_label(backend_libs__export__copy_output_args_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		backend_libs__export__copy_output_args_4_0_i13);
MR_def_label(backend_libs__export__copy_output_args_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_r", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__copy_output_args_4_0_i14);
MR_def_label(backend_libs__export__copy_output_args_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__export__convert_type_from_mercury_3_0,
		backend_libs__export__copy_output_args_4_0_i16);
MR_def_label(backend_libs__export__copy_output_args_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(3);
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		backend_libs__export__copy_output_args_4_0_i17);
MR_def_label(backend_libs__export__copy_output_args_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		backend_libs__export__copy_output_args_4_0_i19);
MR_def_label(backend_libs__export__copy_output_args_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__copy_output_args_4_0_i18);
	}
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_type_string_2_0,
		backend_libs__export__copy_output_args_4_0_i21);
MR_def_label(backend_libs__export__copy_output_args_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", * ", 4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const(", ", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", 29);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		backend_libs__export__copy_output_args_4_0_i26);
MR_def_label(backend_libs__export__copy_output_args_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__copy_output_args_4_0_i23);
MR_def_label(backend_libs__export__copy_output_args_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__copy_output_args_4_0_i24);
MR_def_label(backend_libs__export__copy_output_args_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__copy_output_args_4_0_i25);
MR_def_label(backend_libs__export__copy_output_args_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t*", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__copy_output_args_4_0_i26);
MR_def_label(backend_libs__export__copy_output_args_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(backend_libs__export__copy_output_args_4_0,
		backend_libs__export__copy_output_args_4_0_i28);
MR_def_label(backend_libs__export__copy_output_args_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(string__append_3_2);
MR_def_label(backend_libs__export__copy_output_args_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("", 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__expect_3_0);
MR_decl_entry(fn__backend_libs__proc_label__make_proc_label_3_0);
MR_decl_entry(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0);

MR_BEGIN_MODULE(backend_libs__export_module8)
	MR_init_entry1(backend_libs__export__to_c_4_0);
	MR_init_label8(backend_libs__export__to_c_4_0,4,5,6,7,8,9,10,11)
	MR_init_label4(backend_libs__export__to_c_4_0,12,13,14,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__to_c_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(backend_libs__export__to_c_4_0_i3);
	}
	MR_incr_sp(14);
	MR_sv(14) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__export__IntroducedFrom__pred__to_c__277__1_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tempr3 = MR_r2;
	MR_tempr2 = MR_ctfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr1, 3) = MR_ctfield(0, MR_tempr2, 0);
	MR_tfield(0, MR_tempr1, 4) = (MR_Integer) 0;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr2, 1);
	MR_sv(5) = MR_ctfield(0, MR_tempr2, 2);
	MR_sv(6) = MR_ctfield(0, MR_tempr2, 3);
	}
	MR_np_call_localret_ent(fn__backend_libs__export__this_file_0_0,
		backend_libs__export__to_c_4_0_i4);
MR_def_label(backend_libs__export__to_c_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r3 = (MR_Word) MR_string_const("foreign language other than C", 29);
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		backend_libs__export__to_c_4_0_i5);
MR_def_label(backend_libs__export__to_c_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_globals_2_0,
		backend_libs__export__to_c_4_0_i6);
MR_def_label(backend_libs__export__to_c_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,
		backend_libs__export__to_c_4_0_i7);
MR_def_label(backend_libs__export__to_c_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_sv(8) = MR_r2;
	MR_sv(9) = MR_r3;
	MR_sv(10) = MR_r4;
	MR_sv(11) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r6;
	MR_sv(12) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(backend_libs__export__get_argument_declarations_for_lang_c_4_0,
		backend_libs__export__to_c_4_0_i8);
MR_def_label(backend_libs__export__to_c_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(13) = MR_r1;
	MR_r1 = MR_sv(12);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__export__get_input_args_4_0,
		backend_libs__export__to_c_4_0_i9);
MR_def_label(backend_libs__export__to_c_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(12);
	MR_sv(12) = MR_tempr1;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = MR_sv(2);
	}
	MR_np_call_localret_ent(backend_libs__export__copy_output_args_4_0,
		backend_libs__export__to_c_4_0_i10);
MR_def_label(backend_libs__export__to_c_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(fn__backend_libs__proc_label__make_proc_label_3_0,
		backend_libs__export__to_c_4_0_i11);
MR_def_label(backend_libs__export__to_c_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__backend_libs__name_mangle__proc_label_to_c_string_2_0,
		backend_libs__export__to_c_4_0_i12);
MR_def_label(backend_libs__export__to_c_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7, MR_tempr8, MR_tempr9, MR_tempr10;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(11);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\tMR_restore_regs_from_mem(c_regs);\n", 35);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\t}\n", 3);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\t\t MR_finalize_thread_engine();\n", 32);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\tif (must_finalize_engine) {\n", 29);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("#if MR_THREAD_SAFE\n", 19);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(4);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(10);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\tMR_current_callback_site = saved_cur_callback;\n", 48);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\tMR_current_call_site_dynamic = saved_cur_csd;\n", 47);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("#if MR_DEEP_PROFILING\n", 22);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\tMR_restore_transient_registers();\n", 35);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("), MR_FALSE);\n", 14);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\t(void) MR_call_engine(MR_ENTRY(", 32);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\tMR_save_transient_registers();\n", 32);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(12);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\tMR_restore_registers();\n", 25);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("));\n", 4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\tMR_setup_callback(MR_ENTRY(", 28);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("\tsaved_cur_csd = MR_current_call_site_dynamic;\n", 47);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\tsaved_cur_callback = MR_current_callback_site;\n", 48);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("#if MR_DEEP_PROFILING\n", 22);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("\tmust_finalize_engine = MR_init_thread(MR_use_now);\n", 52);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#if MR_THREAD_SAFE\n", 19);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("\tMR_save_regs_to_mem(c_regs);\n", 30);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_sv(9);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("\tMR_CallSiteDynamic *saved_cur_csd;\n", 36);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\tMR_CallSiteDynList **saved_cur_callback;\n", 42);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("#if MR_DEEP_PROFILING\n", 22);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("\tMR_bool must_finalize_engine;\n", 31);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#if MR_THREAD_SAFE\n", 19);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\tMR_Word c_regs[MR_NUM_REAL_REGS];\n", 35);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("#if MR_NUM_REAL_REGS > 0\n", 25);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const(")\n{\n", 4);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tempr8 = MR_sv(13);
	MR_tfield(1, MR_tempr4, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 1, (MR_Integer) 2);
	MR_tempr9 = MR_sv(6);
	MR_tfield(1, MR_tempr5, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr5, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr5;
	MR_tag_alloc_heap(MR_tempr6, 1, (MR_Integer) 2);
	MR_tempr10 = MR_sv(8);
	MR_tfield(1, MR_tempr6, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr6, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr6;
	MR_tag_alloc_heap(MR_tempr7, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr7, 0) = (MR_Word) MR_string_const(");\n", 3);
	MR_tfield(1, MR_tempr7, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr8;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr7;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr9;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = MR_tempr10;
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const(");\n", 3);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr4, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr4, 0) = MR_r1;
	MR_tfield(1, MR_tempr4, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("(", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		backend_libs__export__to_c_4_0_i13);
MR_def_label(backend_libs__export__to_c_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(2);
	}
	MR_np_localcall_lab(backend_libs__export__to_c_4_0,
		backend_libs__export__to_c_4_0_i14);
MR_def_label(backend_libs__export__to_c_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(14);
	}
MR_def_label(backend_libs__export__to_c_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module9)
	MR_init_entry1(backend_libs__export__get_foreign_export_defns_2_0);
	MR_init_label3(backend_libs__export__get_foreign_export_defns_2_0,2,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__export__get_foreign_export_defns_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_pragma_exported_procs_2_0,
		backend_libs__export__get_foreign_export_defns_2_0_i2);
MR_def_label(backend_libs__export__get_foreign_export_defns_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_module__module_info_get_predicate_table_2_0,
		backend_libs__export__get_foreign_export_defns_2_0_i3);
MR_def_label(backend_libs__export__get_foreign_export_defns_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__pred_table__predicate_table_get_preds_2_0,
		backend_libs__export__get_foreign_export_defns_2_0_i4);
MR_def_label(backend_libs__export__get_foreign_export_defns_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__export__to_c_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);

MR_BEGIN_MODULE(backend_libs__export_module10)
	MR_init_entry1(backend_libs__export__produce_header_file_2_3_0);
	MR_init_label8(backend_libs__export__produce_header_file_2_3_0,33,6,7,8,9,10,11,20)
	MR_init_label2(backend_libs__export__produce_header_file_2_3_0,35,36)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__produce_header_file_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(backend_libs__export__produce_header_file_2_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__produce_header_file_2_3_0_i36);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(backend_libs__export__produce_header_file_2_3_0_i20);
	}
	MR_sv(1) = MR_ctfield(1, MR_r1, 1);
	MR_sv(2) = MR_ctfield(0, MR_tempr1, 2);
	MR_sv(3) = MR_ctfield(0, MR_tempr1, 3);
	MR_r1 = MR_ctfield(0, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_2_3_0_i6);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_2_3_0_i7);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_2_3_0_i8);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_2_3_0_i9);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_2_3_0_i10);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(");\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_2_3_0_i11);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__export__produce_header_file_2_3_0_i33);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("export.m", 8);
	MR_r2 = (MR_Word) MR_string_const("foreign languages other than C unimplemented", 44);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		backend_libs__export__produce_header_file_2_3_0_i35);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(backend_libs__export__produce_header_file_2_3_0_i33);
MR_def_label(backend_libs__export__produce_header_file_2_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__modules__module_name_to_file_name_6_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(library__version_1_0);
MR_decl_entry(io__write_strings_3_0);
MR_decl_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
MR_decl_entry(string__to_upper_2_0);
MR_decl_entry(fn__backend_libs__foreign__decl_guard_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_0);
MR_decl_entry(io__close_output_3_0);
MR_decl_entry(parse_tree__modules__update_interface_3_0);
MR_decl_entry(io__progname_base_4_0);
MR_decl_entry(io__set_exit_status_3_0);

MR_BEGIN_MODULE(backend_libs__export_module11)
	MR_init_entry1(backend_libs__export__produce_header_file_4_0);
	MR_init_label8(backend_libs__export__produce_header_file_4_0,2,3,4,7,8,9,10,11)
	MR_init_label8(backend_libs__export__produce_header_file_4_0,12,13,14,15,16,17,18,19)
	MR_init_label8(backend_libs__export__produce_header_file_4_0,20,21,22,23,5,25,26,27)
	MR_init_label4(backend_libs__export__produce_header_file_4_0,28,29,30,31)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__export__produce_header_file_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_ctfield(0, MR_r1, 0);
	MR_sv(3) = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const(".mh", 3);
	MR_r3 = (MR_Integer) 1;
	}
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		backend_libs__export__produce_header_file_4_0_i2);
MR_def_label(backend_libs__export__produce_header_file_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r2 = (MR_Word) MR_string_const(".tmp", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__produce_header_file_4_0_i3);
MR_def_label(backend_libs__export__produce_header_file_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__open_output_4_0,
		backend_libs__export__produce_header_file_4_0_i4);
MR_def_label(backend_libs__export__produce_header_file_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(backend_libs__export__produce_header_file_4_0_i5);
	}
	MR_sv(5) = MR_ctfield(0, MR_r1, 0);
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		backend_libs__export__produce_header_file_4_0_i7);
MR_def_label(backend_libs__export__produce_header_file_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".m", 2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(parse_tree__modules__module_name_to_file_name_6_0,
		backend_libs__export__produce_header_file_4_0_i8);
MR_def_label(backend_libs__export__produce_header_file_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		backend_libs__export__produce_header_file_4_0_i9);
MR_def_label(backend_libs__export__produce_header_file_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,4);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** version ", 11);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("** by the Mercury compiler,\n", 28);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("\'\n", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("** Automatically generated from \140", 33);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("/*\n", 3);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		backend_libs__export__produce_header_file_4_0_i10);
MR_def_label(backend_libs__export__produce_header_file_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		backend_libs__export__produce_header_file_4_0_i11);
MR_def_label(backend_libs__export__produce_header_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__to_upper_2_0,
		backend_libs__export__produce_header_file_4_0_i12);
MR_def_label(backend_libs__export__produce_header_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_MH", 3);
	MR_np_call_localret_ent(string__append_3_2,
		backend_libs__export__produce_header_file_4_0_i13);
MR_def_label(backend_libs__export__produce_header_file_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,21);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#define ", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("#ifndef ", 8);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_sv(7) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(1,0,5);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		backend_libs__export__produce_header_file_4_0_i14);
MR_def_label(backend_libs__export__produce_header_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__backend_libs__foreign__decl_guard_1_0,
		backend_libs__export__produce_header_file_4_0_i15);
MR_def_label(backend_libs__export__produce_header_file_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__decl_guard_1_0,
		backend_libs__export__produce_header_file_4_0_i16);
MR_def_label(backend_libs__export__produce_header_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(8);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#define ", 8);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("#ifndef ", 8);
	MR_tfield(1, MR_r1, 1) = MR_tempr2;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		backend_libs__export__produce_header_file_4_0_i17);
MR_def_label(backend_libs__export__produce_header_file_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,5,0);
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(list__foldl_4_0,
		backend_libs__export__produce_header_file_4_0_i18);
MR_def_label(backend_libs__export__produce_header_file_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n#endif\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_4_0_i19);
MR_def_label(backend_libs__export__produce_header_file_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(backend_libs__export__produce_header_file_2_3_0,
		backend_libs__export__produce_header_file_4_0_i20);
MR_def_label(backend_libs__export__produce_header_file_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(7);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,22);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#endif /* ", 10);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#endif\n", 7);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("}\n", 2);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("#ifdef __cplusplus\n", 19);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\n", 1);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		backend_libs__export__produce_header_file_4_0_i21);
MR_def_label(backend_libs__export__produce_header_file_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		backend_libs__export__produce_header_file_4_0_i22);
MR_def_label(backend_libs__export__produce_header_file_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__close_output_3_0,
		backend_libs__export__produce_header_file_4_0_i23);
MR_def_label(backend_libs__export__produce_header_file_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(parse_tree__modules__update_interface_3_0);
MR_def_label(backend_libs__export__produce_header_file_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("export.m", 8);
	MR_np_call_localret_ent(io__progname_base_4_0,
		backend_libs__export__produce_header_file_4_0_i25);
MR_def_label(backend_libs__export__produce_header_file_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_4_0_i26);
MR_def_label(backend_libs__export__produce_header_file_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_4_0_i27);
MR_def_label(backend_libs__export__produce_header_file_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(": can\'t open \140", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_4_0_i28);
MR_def_label(backend_libs__export__produce_header_file_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = (MR_Word) MR_string_const(".tmp", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		backend_libs__export__produce_header_file_4_0_i29);
MR_def_label(backend_libs__export__produce_header_file_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_4_0_i30);
MR_def_label(backend_libs__export__produce_header_file_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\' for output\n", 13);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__produce_header_file_4_0_i31);
MR_def_label(backend_libs__export__produce_header_file_4_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__set_exit_status_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module12)
	MR_init_entry1(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0);
	MR_init_label1(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("MR_BaseTypeclassInfo", 20)) == 0)) {
		MR_GOTO_LAB(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0_i2);
	}
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("MR_TypeClassInfo", 16)) == 0)) {
		MR_GOTO_LAB(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0_i2);
	}
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("MR_TypeCtorInfo", 15)) == 0)) {
		MR_GOTO_LAB(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0_i2);
	}
	if ((strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("MR_TypeInfo", 11)) == 0)) {
		MR_GOTO_LAB(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0_i2);
	}
	MR_r1 = (strcmp((char *)MR_r1, (char *)(MR_Word) MR_string_const("MR_Word", 7)) == 0);
	MR_proceed();
MR_def_label(backend_libs__export__c_type_is_word_sized_int_or_ptr_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(check_hlds__type_util__is_dummy_argument_type_2_0);

MR_BEGIN_MODULE(backend_libs__export_module13)
	MR_init_entry1(backend_libs__export__include_arg_2_0);
	MR_init_label2(backend_libs__export__include_arg_2_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__include_arg_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 1);
	MR_tempr2 = MR_ctfield(0, MR_ctfield(0, MR_tempr3, 0), 1);
	if (MR_INT_EQ(MR_tempr2,2)) {
		MR_GOTO_LAB(backend_libs__export__include_arg_2_0_i1);
	}
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		backend_libs__export__include_arg_2_0_i6);
MR_def_label(backend_libs__export__include_arg_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(backend_libs__export__include_arg_2_0_i1);
	}
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(backend_libs__export__include_arg_2_0,1)
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

MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(backend_libs__c_util__set_line_num_4_0);
MR_decl_entry(io__nl_2_0);
MR_decl_entry(backend_libs__c_util__reset_line_num_2_0);

MR_BEGIN_MODULE(backend_libs__export_module14)
	MR_init_entry1(backend_libs__export__output_foreign_decl_4_0);
	MR_init_label8(backend_libs__export__output_foreign_decl_4_0,5,4,6,7,8,9,27,29)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__output_foreign_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_ctfield(0, MR_r2, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(backend_libs__export__output_foreign_decl_4_0_i29);
	}
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(backend_libs__export__output_foreign_decl_4_0_i5);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr1, 2);
	MR_r1 = MR_ctfield(0, MR_tempr1, 3);
	MR_GOTO_LAB(backend_libs__export__output_foreign_decl_4_0_i4);
	}
MR_def_label(backend_libs__export__output_foreign_decl_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_tempr2 = MR_ctfield(0, MR_r2, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(backend_libs__export__output_foreign_decl_4_0_i29);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_ctfield(0, MR_tempr3, 2);
	MR_r1 = MR_ctfield(0, MR_tempr3, 3);
	}
MR_def_label(backend_libs__export__output_foreign_decl_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(term__context_file_2_0,
		backend_libs__export__output_foreign_decl_4_0_i6);
MR_def_label(backend_libs__export__output_foreign_decl_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_sv(2) = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		backend_libs__export__output_foreign_decl_4_0_i7);
MR_def_label(backend_libs__export__output_foreign_decl_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_4_0,
		backend_libs__export__output_foreign_decl_4_0_i8);
MR_def_label(backend_libs__export__output_foreign_decl_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		backend_libs__export__output_foreign_decl_4_0_i9);
MR_def_label(backend_libs__export__output_foreign_decl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		backend_libs__export__output_foreign_decl_4_0_i27);
MR_def_label(backend_libs__export__output_foreign_decl_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__c_util__reset_line_num_2_0);
MR_def_label(backend_libs__export__output_foreign_decl_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module15)
	MR_init_entry1(backend_libs__export__IntroducedFrom__pred__to_c__277__1_2_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(backend_libs__export__IntroducedFrom__pred__to_c__277__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__export_module16)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0);
	MR_init_label7(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,6,8,9,18,4,20,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(1, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 0);
	if (MR_INT_NE(MR_tempr2,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(4) = MR_tempr2;
	MR_sv(5) = MR_ctfield(0, MR_tempr1, 3);
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r3 = MR_ctfield(0, MR_tempr1, 2);
	MR_r4 = MR_sv(2);
	}
	MR_np_call_localret_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i6);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i8);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_r2;
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = (MR_Word) MR_string_const("void", 4);
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r1 = MR_r6;
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_r4 = MR_sv(2);
	MR_np_call_localret_ent(backend_libs__export__get_argument_declarations_2_5_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i9);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = MR_sv(4);
	MR_tfield(0, MR_tempr1, 1) = MR_sv(6);
	MR_tfield(0, MR_tempr1, 2) = MR_sv(5);
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("export.m", 8);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(":- pragma foreign_export for non-C backends.", 44);
	}
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i4);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_localcall_lab(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0_i20);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(7);
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_102_111_114_101_105_103_110_95_101_120_112_111_114_116_95_100_101_99_108_115_95_50_95_95_91_51_93_95_48_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_pred_info_0;
MR_decl_entry(map__lookup_3_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_import_status_2_0);
MR_decl_entry(hlds__hlds_pred__procedure_is_exported_3_0);
MR_decl_entry(fn__hlds__hlds_pred__status_defined_in_this_module_1_0);
MR_decl_entry(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_procedures_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_id_0;
extern const MR_TypeCtorInfo_Struct mercury_data_hlds__hlds_pred__type_ctor_info_proc_info_0;
MR_decl_entry(hlds__hlds_pred__proc_info_maybe_arg_info_2_0);
MR_decl_entry(hlds__hlds_pred__pred_info_get_arg_types_2_0);
MR_decl_entry(hlds__arg_info__generate_proc_arg_info_4_0);
MR_decl_entry(hlds__hlds_pred__proc_info_arg_info_2_0);
MR_decl_entry(hlds__code_model__proc_info_interface_code_model_2_0);
MR_decl_entry(assoc_list__from_corresponding_lists_3_0);
MR_decl_entry(parse_tree__prog_util__pred_args_to_func_args_3_0);
MR_decl_entry(list__filter_3_0);
MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(backend_libs__export_module17)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0);
	MR_init_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,2,3,9,7,11,6,5,13)
	MR_init_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,14,15,16,17,18,21,22,20)
	MR_init_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,23,24,30,34,36,37,39,40)
	MR_init_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,38,42,43,45,46,47,49,51)
	MR_init_label8(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,52,53,54,48,55,56,27,28)
	MR_init_label5(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,26,60,59,25,62)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_id);
	MR_r4 = MR_r2;
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, pred_info);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i2);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_import_status_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i3);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__hlds_pred__procedure_is_exported_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i9);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i6);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__hlds__hlds_pred__status_defined_in_this_module_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i11);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i5);
	}
	MR_r1 = MR_sv(4);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_string_const("MR_declare_entry", 16);
	MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i13);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_string_const("MR_declare_static", 17);
	MR_r1 = MR_sv(4);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(fn__hlds__hlds_pred__pred_info_is_pred_or_func_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i14);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_procedures_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i15);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_id);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, proc_info);
	MR_r4 = MR_sv(1);
	MR_np_call_localret_ent(map__lookup_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i16);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_maybe_arg_info_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i17);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__hlds_pred__pred_info_get_arg_types_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i18);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(4),0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i20);
	}
	MR_sv(4) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(hlds__arg_info__generate_proc_arg_info_4_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i21);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(hlds__hlds_pred__proc_info_arg_info_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i22);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_sv(1) = MR_tempr1;
	}
	MR_np_call_localret_ent(hlds__code_model__proc_info_interface_code_model_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i23);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_tempr2 = MR_sv(4);
	MR_sv(4) = MR_tempr1;
	MR_sv(1) = MR_ctfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(hlds__code_model__proc_info_interface_code_model_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i23);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(hlds__hlds_pred, arg_info);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_data, mer_type);
	MR_r4 = MR_sv(4);
	MR_np_call_localret_ent(assoc_list__from_corresponding_lists_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i24);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i26);
	}
	if (MR_INT_NE(MR_sv(5),1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i28);
	}
	MR_sv(1) = MR_r1;
	MR_sv(8) = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_util__pred_args_to_func_args_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i30);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r2;
	MR_tempr1 = MR_ctfield(0, MR_tempr3, 0);
	MR_tempr2 = MR_ctfield(0, MR_tempr1, 1);
	if (MR_INT_NE(MR_tempr2,1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i27);
	}
	MR_tempr2 = MR_ctfield(0, MR_tempr3, 1);
	MR_sv(4) = MR_ctfield(0, MR_tempr1, 0);
	MR_sv(5) = MR_r1;
	MR_sv(6) = MR_tempr2;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(check_hlds__type_util__is_dummy_argument_type_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i34);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i27);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_exported_type_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i36);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r2 = MR_sv(7);
	MR_np_call_localret_ent(fn__backend_libs__foreign__to_type_string_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i37);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LE(MR_sv(4),32)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i38);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i39);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i40);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_r(", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i43);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(fn__string__int_to_string_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i42);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("MR_r", 4);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i43);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_sv(6);
	MR_np_call_localret_ent(backend_libs__export__convert_type_from_mercury_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i45);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(" return_value;\n", 15);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i46);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\t", 1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i47);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(fn__backend_libs__foreign__is_foreign_type_1_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i49);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i48);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const(", return_value);\n", 17);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i51);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const(", ", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i52);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i53);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", 29);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i54);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__export__include_arg_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_string_const("\treturn return_value;\n", 22);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i62);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = (MR_Word) MR_string_const(";\n", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i55);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\treturn_value = ", 16);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i56);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__export__include_arg_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r3 = MR_sv(5);
	MR_sv(5) = (MR_Word) MR_string_const("\treturn return_value;\n", 22);
	MR_r1 = MR_sv(8);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i62);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__export__include_arg_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_sv(1) = (MR_Word) MR_string_const("void", 4);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_sv(2) = (MR_Word) MR_string_const("", 0);
	MR_sv(5) = (MR_Word) MR_string_const("", 0);
	MR_r3 = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i62);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i59);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,26);
	MR_np_call_localret_ent(string__append_list_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i60);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,60)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r2 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(backend_libs__export__include_arg_2_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_sv(1) = (MR_Word) MR_string_const("MR_bool", 7);
	MR_sv(4) = (MR_Word) MR_string_const("", 0);
	MR_sv(2) = MR_r1;
	MR_sv(5) = (MR_Word) MR_string_const("\treturn MR_TRUE;\n", 17);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,6,0);
	}
	MR_np_call_localret_ent(list__filter_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i62);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("export.m", 8);
	MR_r2 = (MR_Word) MR_string_const("Attempt to export model_non procedure.", 38);
	MR_np_call_localret_ent(libs__compiler_util__unexpected_2_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i25);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(list__filter_3_0,
		f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0_i62);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_101_120_112_111_114_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_116_95_101_120_112_111_114_116_95_105_110_102_111_95_102_111_114_95_108_97_110_103_95_99_95_95_91_52_93_95_48_11_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_decr_sp_and_return(9);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__export_maybe_bunch_0(void)
{
	backend_libs__export_module0();
	backend_libs__export_module1();
	backend_libs__export_module2();
	backend_libs__export_module3();
	backend_libs__export_module4();
	backend_libs__export_module5();
	backend_libs__export_module6();
	backend_libs__export_module7();
	backend_libs__export_module8();
	backend_libs__export_module9();
	backend_libs__export_module10();
	backend_libs__export_module11();
	backend_libs__export_module12();
	backend_libs__export_module13();
	backend_libs__export_module14();
	backend_libs__export_module15();
	backend_libs__export_module16();
	backend_libs__export_module17();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__export__init(void);
void mercury__backend_libs__export__init_type_tables(void);
void mercury__backend_libs__export__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__export__write_out_proc_statics(FILE *fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__export__init_complexity_procs(void);
#endif

void mercury__backend_libs__export__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__export_maybe_bunch_0();
	mercury__backend_libs__export__init_debugger();
}

void mercury__backend_libs__export__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__backend_libs__export__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__export__write_out_proc_statics(FILE *fp)
{
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__export__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
