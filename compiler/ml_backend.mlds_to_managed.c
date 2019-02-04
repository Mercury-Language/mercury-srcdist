/*
** Automatically generated from `mlds_to_managed.m'
** by the Mercury compiler,
** version rotd-2009-10-23, configured for i686-pc-linux-gnu.
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
INIT mercury__ml_backend__mlds_to_managed__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 534 "../library/io.int"
#include "io.mh"

#line 27 "ml_backend.mlds_to_managed.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 31 "ml_backend.mlds_to_managed.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "ml_backend.mlds_to_managed.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "ml_backend.mlds_to_managed.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 43 "ml_backend.mlds_to_managed.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 47 "ml_backend.mlds_to_managed.c"
#line 48 "ml_backend.mlds_to_managed.c"
#include "ml_backend.mlds_to_managed.mh"

#line 51 "ml_backend.mlds_to_managed.c"
#line 52 "ml_backend.mlds_to_managed.c"
#ifndef ML_BACKEND__MLDS_TO_MANAGED_DECL_GUARD
#define ML_BACKEND__MLDS_TO_MANAGED_DECL_GUARD

#line 56 "ml_backend.mlds_to_managed.c"
#line 57 "ml_backend.mlds_to_managed.c"

#endif
#line 60 "ml_backend.mlds_to_managed.c"

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
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1[3];
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[5];
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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

struct mercury_type_8 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[6];
};
MR_STATIC_LINKAGE const struct mercury_type_8 mercury_common_8[];
MR_decl_label7(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0, 2,3,4,7,8,5,10)
MR_decl_label7(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0, 2,3,4,7,8,5,10)
MR_decl_label1(ml_backend__mlds_to_managed__generate_foreign_code_4_0, 2)
MR_decl_label1(ml_backend__mlds_to_managed__generate_foreign_header_code_4_0, 2)
MR_decl_label10(ml_backend__mlds_to_managed__generate_method_code_5_0, 10,11,14,16,19,18,15,22,23,25)
MR_decl_label10(ml_backend__mlds_to_managed__generate_method_code_5_0, 27,28,29,30,32,33,34,35,36,76)
MR_decl_label1(ml_backend__mlds_to_managed__generate_method_code_5_0, 75)
MR_decl_label5(ml_backend__mlds_to_managed__generate_namespace_details_3_0, 2,4,6,8,3)
MR_decl_label2(ml_backend__mlds_to_managed__output_context_4_0, 2,3)
MR_decl_label10(ml_backend__mlds_to_managed__output_csharp_code_4_0, 2,4,5,7,8,9,10,11,12,13)
MR_decl_label10(ml_backend__mlds_to_managed__output_csharp_code_4_0, 14,15,16,17,19,21,22,24,25,26)
MR_decl_label5(ml_backend__mlds_to_managed__output_csharp_code_4_0, 27,29,30,32,33)
MR_decl_label5(ml_backend__mlds_to_managed__output_csharp_header_code_3_0, 2,3,7,8,9)
MR_decl_label2(ml_backend__mlds_to_managed__output_src_end_3_0, 2,3)
MR_decl_label2(ml_backend__mlds_to_managed__output_src_start_3_0, 2,3)
MR_decl_label1(ml_backend__mlds_to_managed__write_class_name_3_0, 2)
MR_decl_label10(ml_backend__mlds_to_managed__write_csharp_initializer_3_0, 53,71,50,51,56,62,9,11,29,47)
MR_decl_label9(ml_backend__mlds_to_managed__write_defn_decl_4_0, 6,8,9,10,11,26,13,14,2)
MR_decl_label10(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0, 59,57,106,7,3,4,9,10,11,14)
MR_decl_label10(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0, 16,18,24,26,30,32,34,35,37,39)
MR_decl_label8(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0, 43,45,47,49,51,53,55,105)
MR_decl_label1(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0, 3)
MR_decl_label2(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0, 3,5)
MR_decl_label8(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0, 2,4,5,6,10,13,7,16)
MR_decl_label10(ml_backend__mlds_to_managed__write_lval_4_0, 47,6,7,8,9,5,11,12,13,14)
MR_decl_label7(ml_backend__mlds_to_managed__write_lval_4_0, 15,19,17,48,22,25,46)
MR_decl_label4(ml_backend__mlds_to_managed__write_outline_arg_final_4_0, 21,5,6,7)
MR_decl_label10(ml_backend__mlds_to_managed__write_outline_arg_init_4_0, 4,6,7,8,9,10,41,14,16,17)
MR_decl_label6(ml_backend__mlds_to_managed__write_outline_arg_init_4_0, 18,19,20,21,22,42)
MR_decl_label2(ml_backend__mlds_to_managed__write_parameter_type_4_0, 2,4)
MR_decl_label10(ml_backend__mlds_to_managed__write_rval_4_0, 18,22,16,51,3,4,7,8,9,10)
MR_decl_label10(ml_backend__mlds_to_managed__write_rval_4_0, 11,5,20,24,26,28,32,33,34,35)
MR_decl_label6(ml_backend__mlds_to_managed__write_rval_4_0, 30,39,40,41,37,46)
MR_decl_label10(ml_backend__mlds_to_managed__write_rval_const_3_0, 45,22,20,49,3,79,9,10,7,13)
MR_decl_label10(ml_backend__mlds_to_managed__write_rval_const_3_0, 14,15,80,18,24,78,27,77,32,35)
MR_decl_label4(ml_backend__mlds_to_managed__write_rval_const_3_0, 37,76,40,41)
MR_decl_label10(ml_backend__mlds_to_managed__write_statement_6_0, 93,7,8,9,10,11,12,2,18,19)
MR_decl_label10(ml_backend__mlds_to_managed__write_statement_6_0, 21,15,28,25,101,36,37,38,33,40)
MR_decl_label1(ml_backend__mlds_to_managed__write_statement_6_0, 41)
MR_def_extern_entry(ml_backend__mlds_to_managed__output_src_start_3_0)
MR_def_extern_entry(ml_backend__mlds_to_managed__output_src_end_3_0)
MR_decl_static(ml_backend__mlds_to_managed__output_csharp_header_code_3_0)
MR_decl_static(ml_backend__mlds_to_managed__generate_foreign_header_code_4_0)
MR_decl_static(ml_backend__mlds_to_managed__generate_namespace_details_3_0)
MR_decl_static(ml_backend__mlds_to_managed__generate_foreign_code_4_0)
MR_decl_static(fn__ml_backend__mlds_to_managed__this_file_0_0)
MR_def_extern_entry(ml_backend__mlds_to_managed__output_csharp_code_4_0)
MR_decl_static(ml_backend__mlds_to_managed__output_context_4_0)
MR_decl_static(ml_backend__mlds_to_managed__output_reset_context_3_0)
MR_decl_static(ml_backend__mlds_to_managed__write_class_name_3_0)
MR_decl_static(ml_backend__mlds_to_managed__write_rval_const_3_0)
MR_decl_static(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0)
MR_decl_static(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0)
MR_decl_static(ml_backend__mlds_to_managed__write_parameter_type_4_0)
MR_decl_static(ml_backend__mlds_to_managed__write_rval_4_0)
MR_decl_static(ml_backend__mlds_to_managed__write_lval_4_0)
MR_decl_static(ml_backend__mlds_to_managed__write_statement_6_0)
MR_decl_static(ml_backend__mlds_to_managed__generate_method_code_5_0)
MR_decl_static(ml_backend__mlds_to_managed__write_csharp_initializer_3_0)
MR_decl_static(ml_backend__mlds_to_managed__write_outline_arg_init_4_0)
MR_decl_static(ml_backend__mlds_to_managed__write_outline_arg_final_4_0)
MR_decl_static(ml_backend__mlds_to_managed__write_defn_decl_4_0)
MR_decl_static(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0)
MR_decl_static(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0)
MR_decl_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__73__1_1_0)
MR_decl_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__75__1_1_0)
MR_decl_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__92__1_4_0)
MR_decl_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__112__1_3_0)
MR_decl_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0)
MR_decl_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0)
MR_decl_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__244__1_1_0)
MR_decl_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_109_97_110_97_103_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_50_95_95_49_95_95_91_49_93_95_48_3_0)

static const struct mercury_type_0 mercury_common_0[4] =
{
{
MR_string_const("\n\n", 2),
MR_tbmkword(0, 0)
},
{
MR_string_const("// Do not edit.\n", 16),
MR_TAG_COMMON(1,0,0)
},
{
MR_string_const(".\n", 2),
MR_TAG_COMMON(1,0,1)
},
{
MR_string_const("{\n", 2),
MR_tbmkword(0, 0)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_foreign_header_code_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_globals_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_foreign_code_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds_to_il__type_ctor_info_il_data_rep_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_outline_arg_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_3;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_method_code_5_0_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
static const struct mercury_type_1 mercury_common_1[7] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_foreign_header_code_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_foreign_code_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_STRING_CTOR_ADDR,
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, outline_arg),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, outline_arg),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_3,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_method_code_5_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_tree234__type_ctor_info_tree234_2;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ml_backend__mlds, ml_scalar_common_type_num),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_scalar_cell_group)
}
},
{
{
MR_CTOR_ADDR(tree234, tree234, 2),
MR_CTOR0_ADDR(ml_backend__mlds, ml_vector_common_type_num),
MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_vector_cell_group)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_method_code_5_0_1;
static const struct mercury_type_3 mercury_common_3[3] =
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,0)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_2,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(2,1)
},
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_method_code_5_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_COMMON(7,1)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_4;
static const struct mercury_type_4 mercury_common_4[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_4,
(MR_Word *) (MR_Integer) 0
},
5,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_5;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_class_name_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_parameter_type_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_outline_arg_init_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_outline_arg_init_4_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_defn_decl_4_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_1;
static const struct mercury_type_5 mercury_common_5[8] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_5,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_class_name_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_parameter_type_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_outline_arg_init_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_outline_arg_init_4_0_2,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_defn_decl_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_1,
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

MR_decl_entry(io__write_string_3_0);
static const struct mercury_type_6 mercury_common_6[8] =
{
{
MR_COMMON(5,0),
MR_ENTRY_AP(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__112__1_3_0),
0
},
{
MR_COMMON(5,1),
MR_ENTRY_AP(io__write_string_3_0),
0
},
{
MR_COMMON(5,2),
MR_ENTRY_AP(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0),
0
},
{
MR_COMMON(5,3),
MR_ENTRY_AP(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0),
0
},
{
MR_COMMON(5,4),
MR_ENTRY_AP(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0),
0
},
{
MR_COMMON(5,5),
MR_ENTRY_AP(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0),
0
},
{
MR_COMMON(5,6),
MR_ENTRY_AP(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0),
0
},
{
MR_COMMON(5,7),
MR_ENTRY_AP(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0),
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;
extern const MR_TypeCtorInfo_Struct mercury_data_set_ordlist__type_ctor_info_set_ordlist_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const struct mercury_type_7 mercury_common_7[2] =
{
{
{
MR_LIST_CTOR_ADDR,
MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument)
}
},
{
{
MR_CTOR1_ADDR(set_ordlist, set_ordlist),
MR_STRING_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_4;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
static const struct mercury_type_8 mercury_common_8[1] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_4,
(MR_Word *) (MR_Integer) 0
},
6,
{
MR_CTOR0_ADDR(libs__globals, globals),
MR_CTOR0_ADDR(ml_backend__mlds_to_il, il_data_rep),
MR_COMMON(7,0),
MR_CTOR0_ADDR(ml_backend__mlds, statement),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};


static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_il_type_modifier_as_foreign_type",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
604,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_defn_decl_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_il_type_modifier_as_foreign_type",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
604,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_outline_arg_init_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_il_type_modifier_as_foreign_type",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
604,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_outline_arg_init_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_il_type_modifier_as_foreign_type",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
604,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_method_code_5_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_input_arg_as_foreign_type",
4,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
269,
"d1;c7;d4;c2;t;c17;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_method_code_5_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"lambda_mlds_to_managed_m_244",
1,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
244,
"d1;c7;d4;c2;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_statement",
6,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
302,
"d1;c7;e;c1;t;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_defn_decl",
4,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
300,
"d1;c7;e;c1;t;c2;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_outline_arg_final",
4,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
296,
"d1;c7;t;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_statement_6_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_outline_arg_init",
4,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
291,
"d1;c7;t;c1;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_parameter_type_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_il_type_modifier_as_foreign_type",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
604,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"write_il_type_modifier_as_foreign_type",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
604,
"d1;c5;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__write_class_name_3_0_1 = {
{
MR_PREDICATE,
"io",
"io",
"write_string",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
738,
"d1;c6;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_5 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"lambda_mlds_to_managed_m_112",
3,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
112,
"d1;c38;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_4 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"generate_method_code",
5,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
107,
"d1;c33;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_3 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"lambda_mlds_to_managed_m_92",
4,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
92,
"d1;c26;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_2 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"lambda_mlds_to_managed_m_75",
1,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
75,
"d1;c11;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__output_csharp_code_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"lambda_mlds_to_managed_m_73",
1,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
73,
"d1;c7;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_foreign_code_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"lambda_mlds_to_managed_m_212",
4,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
212,
"d1;c8;"
};

static const MR_UserClosureId
mercury_data__closure_layout__ml_backend__mlds_to_managed__generate_foreign_header_code_4_0_1 = {
{
MR_PREDICATE,
"ml_backend.mlds_to_managed",
"ml_backend.mlds_to_managed",
"lambda_mlds_to_managed_m_173",
4,
0
},
"ml_backend.mlds_to_managed",
"mlds_to_managed.m",
173,
"d1;c8;"
};


MR_decl_entry(library__version_1_0);
MR_decl_entry(fn__mdbcomp__prim_data__sym_name_to_string_1_0);
MR_decl_entry(io__write_strings_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module0)
	MR_init_entry1(ml_backend__mlds_to_managed__output_src_start_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__output_src_start_3_0);
	MR_init_label2(ml_backend__mlds_to_managed__output_src_start_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_src_start'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_managed__output_src_start_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(library__version_1_0,
		ml_backend__mlds_to_managed__output_src_start_3_0_i2);
MR_def_label(ml_backend__mlds_to_managed__output_src_start_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__mdbcomp__prim_data__sym_name_to_string_1_0,
		ml_backend__mlds_to_managed__output_src_start_3_0_i3);
MR_def_label(ml_backend__mlds_to_managed__output_src_start_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,0,2);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("// Mercury compiler, version ", 29);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(".m\' by the\n", 11);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = (MR_Word) MR_string_const("//\n// Automatically generated from \140", 36);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_strings_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__prog_out__write_sym_name_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module1)
	MR_init_entry1(ml_backend__mlds_to_managed__output_src_end_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__output_src_end_3_0);
	MR_init_label2(ml_backend__mlds_to_managed__output_src_end_3_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_src_end'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_managed__output_src_end_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("// End of module: ", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__output_src_end_3_0_i2);
MR_def_label(ml_backend__mlds_to_managed__output_src_end_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__prog_out__write_sym_name_3_0,
		ml_backend__mlds_to_managed__output_src_end_3_0_i3);
MR_def_label(ml_backend__mlds_to_managed__output_src_end_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(". \n", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__mlds_to_il__get_il_data_rep_2_0);
MR_decl_entry(libs__globals__lookup_bool_option_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module2)
	MR_init_entry1(ml_backend__mlds_to_managed__output_csharp_header_code_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__output_csharp_header_code_3_0);
	MR_init_label5(ml_backend__mlds_to_managed__output_csharp_header_code_3_0,2,3,7,8,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_csharp_header_code'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__output_csharp_header_code_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_il_data_rep_2_0,
		ml_backend__mlds_to_managed__output_csharp_header_code_3_0_i2);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_header_code_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__output_csharp_header_code_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("#define MR_HIGHLEVEL_DATA\n", 26);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__output_csharp_header_code_3_0_i3);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_header_code_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("using mercury;\n\n", 16);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__output_csharp_header_code_3_0_i7);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_header_code_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 139;
	MR_np_call_localret_ent(libs__globals__lookup_bool_option_3_0,
		ml_backend__mlds_to_managed__output_csharp_header_code_3_0_i8);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_header_code_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__output_csharp_header_code_3_0_i9);
	}
	MR_r1 = (MR_Word) MR_string_const("[assembly:System.Reflection.AssemblyKeyFileAttribute(\"mercury.sn\")]\n", 68);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_header_code_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;
MR_decl_entry(fn__list__reverse_1_0);
MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module3)
	MR_init_entry1(ml_backend__mlds_to_managed__generate_foreign_header_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__generate_foreign_header_code_4_0);
	MR_init_label1(ml_backend__mlds_to_managed__generate_foreign_header_code_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foreign_header_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__generate_foreign_header_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_managed__generate_foreign_header_code_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__generate_foreign_header_code_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__ilds__get_class_namespace_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module4)
	MR_init_entry1(ml_backend__mlds_to_managed__generate_namespace_details_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__generate_namespace_details_3_0);
	MR_init_label5(ml_backend__mlds_to_managed__generate_namespace_details_3_0,2,4,6,8,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_namespace_details'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__generate_namespace_details_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__ilds__get_class_namespace_1_0,
		ml_backend__mlds_to_managed__generate_namespace_details_3_0_i2);
MR_def_label(ml_backend__mlds_to_managed__generate_namespace_details_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_managed__generate_namespace_details_3_0_i4);
MR_def_label(ml_backend__mlds_to_managed__generate_namespace_details_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_namespace_details_3_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_r2 = (MR_Word) MR_string_const("__csharp_code", 13);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_managed__generate_namespace_details_3_0_i6);
MR_def_label(ml_backend__mlds_to_managed__generate_namespace_details_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(1);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	}
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_managed__generate_namespace_details_3_0_i8);
MR_def_label(ml_backend__mlds_to_managed__generate_namespace_details_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("namespace \100%s {", 15);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(ml_backend__mlds_to_managed__generate_namespace_details_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("namespace \100%s {", 15);
	MR_r2 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module5)
	MR_init_entry1(ml_backend__mlds_to_managed__generate_foreign_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__generate_foreign_code_4_0);
	MR_init_label1(ml_backend__mlds_to_managed__generate_foreign_code_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_foreign_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__generate_foreign_code_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, user_foreign_code);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(0, MR_r2, 2);
	MR_np_call_localret_ent(fn__list__reverse_1_0,
		ml_backend__mlds_to_managed__generate_foreign_code_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__generate_foreign_code_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr2;
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module6)
	MR_init_entry1(fn__ml_backend__mlds_to_managed__this_file_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__ml_backend__mlds_to_managed__this_file_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'this_file'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__ml_backend__mlds_to_managed__this_file_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_4_0);
MR_decl_entry(libs__compiler_util__expect_3_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_defn_0;
MR_decl_entry(fn__f_108_105_115_116_95_95_43_43_2_0);
MR_decl_entry(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0);
MR_decl_entry(fn__ml_backend__mlds__wrapper_class_name_0_0);
MR_decl_entry(fn__ml_backend__mlds_to_il__class_name_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_foreign_code_0;
MR_decl_entry(fn__map__lookup_2_0);
MR_decl_entry(io__nl_2_0);
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
MR_decl_entry(list__foldl_4_2);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module7)
	MR_init_entry1(ml_backend__mlds_to_managed__output_csharp_code_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__output_csharp_code_4_0);
	MR_init_label10(ml_backend__mlds_to_managed__output_csharp_code_4_0,2,4,5,7,8,9,10,11,12,13)
	MR_init_label10(ml_backend__mlds_to_managed__output_csharp_code_4_0,14,15,16,17,19,21,22,24,25,26)
	MR_init_label5(ml_backend__mlds_to_managed__output_csharp_code_4_0,27,29,30,32,33)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_csharp_code'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__ml_backend__mlds_to_managed__output_csharp_code_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 4);
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	}
	MR_np_call_localret_ent(ml_backend__ml_global_data__ml_global_data_get_all_global_defns_4_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_sv(7) = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__73__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r3;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_managed__this_file_0_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i4);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("output_csharp_code: nonempty ScalarCellGroupMap", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i5);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__75__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(5);
	MR_sv(5) = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_managed__this_file_0_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i7);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const("output_csharp_code: nonempty VectorCellGroupMap", 47);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i8);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r1 = MR_sv(7);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i9);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__output_src_start_3_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i10);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mercury_module_name_to_mlds_1_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i11);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i12);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__class_name_2_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i13);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__output_csharp_header_code_3_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i14);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_foreign_code);
	MR_r3 = MR_sv(3);
	MR_r4 = (MR_Integer) 1;
	MR_np_call_localret_ent(fn__map__lookup_2_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i15);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__generate_foreign_header_code_4_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i16);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__generate_namespace_details_3_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i17);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__92__1_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_r1;
	MR_sv(5) = MR_r2;
	MR_sv(8) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(8);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i19);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = (MR_Word) MR_TAG_COMMON(1,0,3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__wrapper_class_name_0_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i21);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\npublic class ", 14);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i22);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_sv(6);
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_strings_3_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i24);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__generate_foreign_code_4_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i25);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i26);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__get_il_data_rep_2_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i27);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 5);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(4,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__generate_method_code_5_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 2;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_r1;
	MR_r1 = MR_sv(7);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i29);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("};\n", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i30);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(8);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const("\n", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i32);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_managed__output_csharp_code_4_0_i33);
MR_def_label(ml_backend__mlds_to_managed__output_csharp_code_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__output_src_end_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term__context_file_2_0);
MR_decl_entry(term__context_line_2_0);
MR_decl_entry(backend_libs__c_util__set_line_num_5_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module8)
	MR_init_entry1(ml_backend__mlds_to_managed__output_context_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__output_context_4_0);
	MR_init_label2(ml_backend__mlds_to_managed__output_context_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_context'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__output_context_4_0)
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
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_managed__output_context_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__output_context_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_managed__output_context_4_0_i3);
MR_def_label(ml_backend__mlds_to_managed__output_context_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(backend_libs__c_util__set_line_num_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__reset_line_num_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module9)
	MR_init_entry1(ml_backend__mlds_to_managed__output_reset_context_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__output_reset_context_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'output_reset_context'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__output_reset_context_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(backend_libs__c_util__reset_line_num_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module10)
	MR_init_entry1(ml_backend__mlds_to_managed__write_class_name_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_class_name_3_0);
	MR_init_label1(ml_backend__mlds_to_managed__write_class_name_3_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_class_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_class_name_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tfield(0, MR_tempr1, 1);
	MR_r3 = MR_tfield(0, MR_tempr1, 2);
	}
	MR_np_call_localret_ent(fn__f_108_105_115_116_95_95_43_43_2_0,
		ml_backend__mlds_to_managed__write_class_name_3_0_i2);
MR_def_label(ml_backend__mlds_to_managed__write_class_name_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_r3 = (MR_Word) MR_string_const(".", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_list_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_int_3_0);
MR_decl_entry(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0);
MR_decl_entry(libs__compiler_util__sorry_2_0);
MR_decl_entry(io__write_float_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_multi_string_3_0);
MR_decl_entry(backend_libs__c_util__output_quoted_string_3_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module11)
	MR_init_entry1(ml_backend__mlds_to_managed__write_rval_const_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_rval_const_3_0);
	MR_init_label10(ml_backend__mlds_to_managed__write_rval_const_3_0,45,22,20,49,3,79,9,10,7,13)
	MR_init_label10(ml_backend__mlds_to_managed__write_rval_const_3_0,14,15,80,18,24,78,27,77,32,35)
	MR_init_label4(ml_backend__mlds_to_managed__write_rval_const_3_0,37,76,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_rval_const'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_rval_const_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i45) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i49));
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_unmkbody(MR_r1),0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_rval_const_3_0_i22);
	}
	MR_r1 = (MR_Word) MR_string_const("1", 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r1, 0),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i76) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i77) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i78) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i35) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i79) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i80) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_const_3_0_i37));
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,79)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r1, 1);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_rval_const_3_0_i7);
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 1);
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i9);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_class_name_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i10);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i15);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r3, 0);
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__mangle_mlds_proc_label_4_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i13);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_class_name_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i14);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i15);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,80)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_managed__this_file_0_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i18);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("data_addr_const rval", 20);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(io__write_float_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,78)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_managed__this_file_0_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i27);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("mlconst_foreign for managed languages", 37);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i32);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_multi_string_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i41);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("null", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("\"", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i40);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(backend_libs__c_util__output_quoted_string_3_0,
		ml_backend__mlds_to_managed__write_rval_const_3_0_i41);
MR_def_label(ml_backend__mlds_to_managed__write_rval_const_3_0,41)
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

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ilds__type_ctor_info_type_modifier_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module12)
	MR_init_entry1(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0);
	MR_init_label1(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_il_type_as_foreign_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0_i3);
MR_def_label(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module13)
	MR_init_entry1(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0);
	MR_init_label10(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,59,57,106,7,3,4,9,10,11,14)
	MR_init_label10(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,16,18,24,26,30,32,34,35,37,39)
	MR_init_label8(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,43,45,47,49,51,53,55,105)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_il_simple_type_as_foreign_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i59) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i57) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i57) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i106));
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i32) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i26) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i30) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i55) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i49) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i51) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i53) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i39) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i51) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i37) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i43) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i45));
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,57)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_mask_field(MR_r1, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__write_class_name_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 0);
	if (MR_INT_EQ(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i34);
	}
	if (MR_INT_EQ(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i9);
	}
	if (MR_INT_EQ(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i3);
	}
	MR_r1 = MR_tfield(3, MR_r1, 1);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0,
		ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i7);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" *", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 1);
	MR_r1 = (MR_Word) MR_string_const("ref ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i4);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(3, MR_r1, 2);
	MR_r1 = MR_tfield(3, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_il_type_as_foreign_type_3_0,
		ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i10);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[]", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i11);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i105);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_managed__this_file_0_0,
		ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i14);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("arrays with bounds", 18);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("bool", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("char", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("double", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("short", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("long", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("sbyte", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_managed__this_file_0_0,
		ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0_i35);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("interfaces", 10);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("float", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("int", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("object", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mercury.MR_RefAny", 17);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("string", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ushort", 6);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("uint", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("ulong", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,55)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("byte", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,105)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module14)
	MR_init_entry1(ml_backend__mlds_to_managed__write_parameter_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_parameter_type_4_0);
	MR_init_label2(ml_backend__mlds_to_managed__write_parameter_type_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_parameter_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_parameter_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_managed__write_parameter_type_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__write_parameter_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,3);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_parameter_type_4_0_i4);
MR_def_label(ml_backend__mlds_to_managed__write_parameter_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(backend_libs__c_util__binop_category_string_3_0);
MR_decl_entry(backend_libs__c_util__unary_prefix_op_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module15)
	MR_init_entry1(ml_backend__mlds_to_managed__write_rval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_rval_4_0);
	MR_init_label10(ml_backend__mlds_to_managed__write_rval_4_0,18,22,16,51,3,4,7,8,9,10)
	MR_init_label10(ml_backend__mlds_to_managed__write_rval_4_0,11,5,20,24,26,28,32,33,34,35)
	MR_init_label6(ml_backend__mlds_to_managed__write_rval_4_0,30,39,40,41,37,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_rval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_rval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i51));
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r2, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__write_lval_4_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("mkword rval", 11);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_r2, 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__write_rval_const_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tfield(3, MR_r2, 0),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i28) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i3) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i20) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i24) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i46) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i26));
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(4) = MR_tfield(3, MR_tempr1, 2);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	}
	MR_np_call_localret_ent(backend_libs__c_util__binop_category_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i4);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,6)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_rval_4_0_i5);
	}
	MR_sv(3) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i7);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_localcall_lab(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i8);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i9);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i10);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" (", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i11);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_localcall_lab(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i35);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("binop rval", 10);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("mem_addr rval", 13);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("scalar_common rval", 18);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("self rval", 9);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_tempr1 = MR_tfield(3, MR_tempr2, 1);
	MR_sv(2) = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,3)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_rval_4_0_i30);
	}
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tfield(3, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(backend_libs__c_util__unary_prefix_op_2_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i32);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i33);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i34);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_localcall_lab(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i35);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_rval_4_0_i37);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i39);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_parameter_type_4_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i40);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(") ", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_rval_4_0_i41);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i18) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i22) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i16) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_rval_4_0_i51));
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("box or unbox unop", 17);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_rval_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("vector_common_row rval", 22);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module16)
	MR_init_entry1(ml_backend__mlds_to_managed__write_lval_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_lval_4_0);
	MR_init_label10(ml_backend__mlds_to_managed__write_lval_4_0,47,6,7,8,9,5,11,12,13,14)
	MR_init_label7(ml_backend__mlds_to_managed__write_lval_4_0,15,19,17,48,22,25,46)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_lval'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_lval_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r2),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_lval_4_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_lval_4_0_i19) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_lval_4_0_i17) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_lval_4_0_i48));
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tempr2, 2);
	MR_r4 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_lval_4_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i6);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i7);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i8);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i9);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_sv(3), 2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_r2, 1);
	MR_sv(3) = MR_tfield(0, MR_r4, 0);
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i11);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i12);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i13);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("[", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i14);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i15);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("]", 1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(1, MR_r2, 0);
	MR_np_tailcall_ent(ml_backend__mlds_to_managed__write_rval_4_0);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("write_lval: global_var_ref NYI", 30);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_tfield(3, MR_r2, 0), 2);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i22);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_lval_4_0_i46);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_lval_4_0_i25);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_lval_4_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_outline_arg_0;
MR_decl_entry(fn__ml_backend__mlds__mlds_get_prog_context_1_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_statement_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_stmt_0;
MR_decl_entry(deconstruct__functor_4_1);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module17)
	MR_init_entry1(ml_backend__mlds_to_managed__write_statement_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_statement_6_0);
	MR_init_label10(ml_backend__mlds_to_managed__write_statement_6_0,93,7,8,9,10,11,12,2,18,19)
	MR_init_label10(ml_backend__mlds_to_managed__write_statement_6_0,21,15,28,25,101,36,37,38,33,40)
	MR_init_label1(ml_backend__mlds_to_managed__write_statement_6_0,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_statement'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_statement_6_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr1 = MR_tfield(0, MR_r4, 0);
	MR_r6 = MR_tempr1;
	if (MR_RTAGS_TESTR(MR_tempr1,3,8)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i2);
	}
	MR_tempr2 = MR_tfield(3, MR_tempr1, 1);
	if (MR_RTAGS_TESTR(MR_tempr2,3,7)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i2);
	}
	MR_tempr3 = MR_tfield(3, MR_tempr2, 1);
	if (MR_INT_NE(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i2);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = (MR_Word) MR_COMMON(1,3);
	MR_tfield(0, MR_tempr4, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__write_outline_arg_init_4_0);
	MR_tfield(0, MR_tempr4, 2) = (MR_Integer) 1;
	MR_tempr5 = MR_r2;
	MR_tfield(0, MR_tempr4, 3) = MR_tempr5;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr5;
	MR_sv(3) = MR_tfield(0, MR_r4, 1);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(5) = MR_tfield(3, MR_tempr2, 4);
	MR_sv(6) = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, outline_arg);
	MR_sv(7) = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(4);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		ml_backend__mlds_to_managed__write_statement_6_0_i7);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(fn__ml_backend__mlds__mlds_get_prog_context_1_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i8);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__output_context_4_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i9);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i10);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i11);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__output_reset_context_3_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i12);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,4);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__write_outline_arg_final_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r4 = MR_sv(4);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(list__foldl_4_2);
	}
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r6,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i15);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,5);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__write_defn_decl_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tempr2 = MR_r2;
	MR_tfield(0, MR_tempr1, 3) = MR_tempr2;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r3;
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_tfield(0, MR_tempr3, 1);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_defn);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i18);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i19);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 6);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(8,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_LABEL_AP(ml_backend__mlds_to_managed__write_statement_6_0_i93);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(1);
	MR_tfield(0, MR_tempr1, 4) = MR_sv(2);
	MR_tfield(0, MR_tempr1, 5) = MR_sv(3);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, statement);
	MR_r2 = MR_sv(4);
	MR_r3 = (MR_Word) MR_string_const("", 0);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i21);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n}\n", 3);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_r6,3,5)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i101);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i25);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i25);
	}
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	MR_sv(2) = MR_r2;
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_string_const("return ", 7);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i28);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i38);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,101)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_RTAGS_TESTR(MR_r6,3,8)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i33);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(3, MR_r6, 1);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_statement_6_0_i33);
	}
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_sv(1) = MR_tfield(2, MR_tempr1, 1);
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tfield(2, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_lval_4_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i36);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i37);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i38);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_stmt);
	MR_r2 = MR_r6;
	MR_r3 = (MR_Integer) 1;
	MR_np_call_localret_ent(deconstruct__functor_4_1,
		ml_backend__mlds_to_managed__write_statement_6_0_i40);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("foreign code output for ", 24);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		ml_backend__mlds_to_managed__write_statement_6_0_i41);
MR_def_label(ml_backend__mlds_to_managed__write_statement_6_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(ml_backend__ml_util__has_foreign_languages_2_0);
MR_decl_entry(list__member_2_0);
MR_decl_entry(ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_mlds_argument_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module18)
	MR_init_entry1(ml_backend__mlds_to_managed__generate_method_code_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__generate_method_code_5_0);
	MR_init_label10(ml_backend__mlds_to_managed__generate_method_code_5_0,10,11,14,16,19,18,15,22,23,25)
	MR_init_label10(ml_backend__mlds_to_managed__generate_method_code_5_0,27,28,29,30,32,33,34,35,36,76)
	MR_init_label1(ml_backend__mlds_to_managed__generate_method_code_5_0,75)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'generate_method_code'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__generate_method_code_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 0);
	if (MR_INT_NE(MR_tag(MR_tempr1),2)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_method_code_5_0_i76);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr4, 3);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_method_code_5_0_i76);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 2);
	if (MR_LTAGS_TEST(MR_tempr3,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_method_code_5_0_i76);
	}
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(4) = MR_tfield(2, MR_tempr1, 1);
	MR_sv(5) = MR_tfield(2, MR_tempr1, 2);
	MR_sv(6) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(7) = MR_tfield(1, MR_tempr3, 0);
	MR_sv(8) = MR_tfield(1, MR_tempr2, 4);
	MR_r1 = MR_sv(7);
	}
	MR_np_call_localret_ent(ml_backend__ml_util__has_foreign_languages_2_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i10);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__member_2_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i11);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_method_code_5_0_i75);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r1 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(3,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__244__1_1_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(8);
	MR_r2 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r3 = (MR_Word) MR_string_const("generate_method_code: EnvVarNames", 33);
	}
	MR_np_call_localret_ent(libs__compiler_util__expect_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i14);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_sv(6), 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_method_code_5_0_i16);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(6) = MR_tfield(0, MR_sv(6), 0);
	MR_sv(3) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i22);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_method_code_5_0_i18);
	}
	MR_sv(6) = MR_tfield(0, MR_sv(6), 0);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i19);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_tfield(0, MR_r1, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(5);
	MR_sv(3) = MR_tempr1;
	}
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i22);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("multiple return values", 22);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i15);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(ml_backend__mlds_to_il__predlabel_to_csharp_id_4_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i22);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("public static ", 14);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i23);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(3),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__generate_method_code_5_0_i25);
	}
	MR_r1 = (MR_Word) MR_string_const("void", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i27);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(3), 0);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i27);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i28);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i29);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i30);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,6);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, mlds_argument);
	MR_r2 = MR_sv(6);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i32);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i33);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i34);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("{\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i35);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(6);
	MR_r4 = MR_sv(7);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_statement_6_0,
		ml_backend__mlds_to_managed__generate_method_code_5_0_i36);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}\n", 2);
	MR_succip_word = MR_sv(9);
	MR_decr_sp(9);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
MR_def_label(ml_backend__mlds_to_managed__generate_method_code_5_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module19)
	MR_init_entry1(ml_backend__mlds_to_managed__write_csharp_initializer_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_csharp_initializer_3_0);
	MR_init_label10(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,53,71,50,51,56,62,9,11,29,47)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_csharp_initializer'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_csharp_initializer_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i53) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i71) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i56));
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_r1),
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i47) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i29) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i9) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i11) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i62) MR_AND
		MR_LABEL_AP(ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i62));
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,71)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("new ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i50);
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_class_name_3_0,
		ml_backend__mlds_to_managed__write_csharp_initializer_3_0_i51);
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("()", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,56)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(3, MR_r1, 0);
	}
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,62)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("null", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("false", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\'\\0\'", 4);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0.0", 3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("0", 1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module20)
	MR_init_entry1(ml_backend__mlds_to_managed__write_outline_arg_init_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_outline_arg_init_4_0);
	MR_init_label10(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,4,6,7,8,9,10,41,14,16,17)
	MR_init_label6(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,18,19,20,21,22,42)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_outline_arg_init'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_outline_arg_init_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i41);
	}
	if ((MR_tempr1 != MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i42);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_sv(3) = MR_tfield(1, MR_tempr2, 2);
	MR_r2 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i4);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,4);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i6);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i7);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i8);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i9);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i10);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_rval_4_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i22);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(2, MR_tempr1, 1);
	MR_r2 = MR_sv(2);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i14);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(4) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,5);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i16);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i17);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i18);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i19);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i20);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i21);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_csharp_initializer_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_init_4_0_i22);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_init_4_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module21)
	MR_init_entry1(ml_backend__mlds_to_managed__write_outline_arg_final_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_outline_arg_final_4_0);
	MR_init_label4(ml_backend__mlds_to_managed__write_outline_arg_final_4_0,21,5,6,7)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_outline_arg_final'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_outline_arg_final_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_outline_arg_final_4_0_i21);
	}
	MR_proceed();
	}
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_final_4_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(2, MR_r2, 1);
	MR_r2 = MR_tfield(2, MR_r2, 2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_lval_4_0,
		ml_backend__mlds_to_managed__write_outline_arg_final_4_0_i5);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_final_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = ", 3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_final_4_0_i6);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_final_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_outline_arg_final_4_0_i7);
MR_def_label(ml_backend__mlds_to_managed__write_outline_arg_final_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module22)
	MR_init_entry1(ml_backend__mlds_to_managed__write_defn_decl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_defn_decl_4_0);
	MR_init_label9(ml_backend__mlds_to_managed__write_defn_decl_4_0,6,8,9,10,11,26,13,14,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_defn_decl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_defn_decl_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r2;
	MR_tempr1 = MR_tfield(0, MR_tempr4, 3);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_defn_decl_4_0_i2);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_defn_decl_4_0_i2);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr3,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_defn_decl_4_0_i2);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_tempr3, 0);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_managed__write_defn_decl_4_0_i6);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,6);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_defn_decl_4_0_i8);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,
		ml_backend__mlds_to_managed__write_defn_decl_4_0_i9);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_defn_decl_4_0_i10);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_defn_decl_4_0_i11);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_defn_decl_4_0_i13);
	}
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(";\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_defn_decl_4_0_i14);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(io__write_int_3_0,
		ml_backend__mlds_to_managed__write_defn_decl_4_0_i26);
MR_def_label(ml_backend__mlds_to_managed__write_defn_decl_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("data_addr_const rval", 20);
	MR_np_tailcall_ent(libs__compiler_util__sorry_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(libs__compiler_util__unexpected_2_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module23)
	MR_init_entry1(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0);
	MR_init_label8(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,2,4,5,6,10,13,7,16)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_input_arg_as_foreign_type'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r2, 0);
	MR_r2 = MR_tfield(0, MR_r2, 1);
	MR_np_call_localret_ent(fn__ml_backend__mlds_to_il__mlds_type_to_ilds_type_2_0,
		ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r1;
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_tempr1 = MR_tempr2;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ilds, type_modifier);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = (MR_Word) MR_string_const(" ", 1);
	MR_r4 = (MR_Word) MR_TAG_COMMON(0,6,7);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i4);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(ml_backend__mlds_to_managed__write_il_simple_type_as_foreign_type_3_0,
		ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i5);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i6);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i7);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	MR_sv(1) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i10);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(1),0,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i16);
	}
	MR_sv(1) = MR_tfield(1, MR_sv(1), 0);
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0_i13);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_int_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("found a variable in a list", 26);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(libs__compiler_util__unexpected_2_0);
MR_def_label(ml_backend__mlds_to_managed__write_input_arg_as_foreign_type_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module24)
	MR_init_entry1(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0);
	MR_init_label2(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0,3,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_il_type_modifier_as_foreign_type'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_string_const("const", 5);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0_i5);
	}
	MR_r1 = (MR_Word) MR_string_const("readonly", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(ml_backend__mlds_to_managed__write_il_type_modifier_as_foreign_type_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("volatile", 8);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;
MR_decl_entry(map__is_empty_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module25)
	MR_init_entry1(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__73__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__73__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_csharp_code__73__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__73__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_scalar_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_scalar_cell_group);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
extern const MR_TypeCtorInfo_Struct mercury_data_ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module26)
	MR_init_entry1(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__75__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__75__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_csharp_code__75__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__75__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(ml_backend__mlds, ml_vector_common_type_num);
	MR_r2 = (MR_Word) MR_CTOR0_ADDR(ml_backend__ml_global_data, ml_vector_cell_group);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(map__is_empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__format_4_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module27)
	MR_init_entry1(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__92__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__92__1_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_csharp_code__92__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__92__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_np_tailcall_ent(io__format_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module28)
	MR_init_entry1(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__112__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__112__1_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__output_csharp_code__112__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__output_csharp_code__112__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_109_97_110_97_103_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_50_95_95_49_95_95_91_49_93_95_48_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module29)
	MR_init_entry1(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0);
	MR_init_label7(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,2,3,4,7,8,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_foreign_header_code__173__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 3);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0_i3);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_5_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0_i4);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0_i7);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0_i8);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(backend_libs__c_util__reset_line_num_3_0);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("wrong foreign code", 18);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0_i10);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_header_code__173__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(backend_libs__c_util__reset_line_num_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module30)
	MR_init_entry1(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0);
	MR_init_label7(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,2,3,4,7,8,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_foreign_code__212__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(2) = MR_tfield(0, MR_tempr1, 0);
	MR_sv(3) = MR_tfield(0, MR_tempr1, 1);
	MR_sv(4) = MR_tfield(0, MR_tempr1, 2);
	MR_r1 = MR_sv(4);
	}
	MR_np_call_localret_ent(term__context_file_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0_i2);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(term__context_line_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0_i3);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(backend_libs__c_util__set_line_num_5_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0_i4);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(2),1)) {
		MR_GOTO_LAB(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0_i5);
	}
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(io__write_string_3_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0_i7);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0_i8);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(backend_libs__c_util__reset_line_num_3_0);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mlds_to_managed.m", 17);
	MR_r2 = (MR_Word) MR_string_const("wrong foreign code", 18);
	MR_np_call_localret_ent(libs__compiler_util__sorry_2_0,
		ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0_i10);
MR_def_label(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_foreign_code__212__1_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(backend_libs__c_util__reset_line_num_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(set__empty_1_0);

MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module31)
	MR_init_entry1(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__244__1_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__244__1_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__pred__generate_method_code__244__1'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(ml_backend__mlds_to_managed__IntroducedFrom__pred__generate_method_code__244__1_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tempr1;
	MR_np_tailcall_ent(set__empty_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(ml_backend__mlds_to_managed_module32)
	MR_init_entry1(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_109_97_110_97_103_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_50_95_95_49_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_109_97_110_97_103_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_50_95_95_49_95_95_91_49_93_95_48_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__IntroducedFrom__pred__output_csharp_code__112__1__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_108_95_98_97_99_107_101_110_100_95_95_109_108_100_115_95_116_111_95_109_97_110_97_103_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_73_110_116_114_111_100_117_99_101_100_70_114_111_109_95_95_112_114_101_100_95_95_111_117_116_112_117_116_95_99_115_104_97_114_112_95_99_111_100_101_95_95_49_49_50_95_95_49_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("}", 1);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__ml_backend__mlds_to_managed_maybe_bunch_0(void)
{
	ml_backend__mlds_to_managed_module0();
	ml_backend__mlds_to_managed_module1();
	ml_backend__mlds_to_managed_module2();
	ml_backend__mlds_to_managed_module3();
	ml_backend__mlds_to_managed_module4();
	ml_backend__mlds_to_managed_module5();
	ml_backend__mlds_to_managed_module6();
	ml_backend__mlds_to_managed_module7();
	ml_backend__mlds_to_managed_module8();
	ml_backend__mlds_to_managed_module9();
	ml_backend__mlds_to_managed_module10();
	ml_backend__mlds_to_managed_module11();
	ml_backend__mlds_to_managed_module12();
	ml_backend__mlds_to_managed_module13();
	ml_backend__mlds_to_managed_module14();
	ml_backend__mlds_to_managed_module15();
	ml_backend__mlds_to_managed_module16();
	ml_backend__mlds_to_managed_module17();
	ml_backend__mlds_to_managed_module18();
	ml_backend__mlds_to_managed_module19();
	ml_backend__mlds_to_managed_module20();
	ml_backend__mlds_to_managed_module21();
	ml_backend__mlds_to_managed_module22();
	ml_backend__mlds_to_managed_module23();
	ml_backend__mlds_to_managed_module24();
	ml_backend__mlds_to_managed_module25();
	ml_backend__mlds_to_managed_module26();
	ml_backend__mlds_to_managed_module27();
	ml_backend__mlds_to_managed_module28();
	ml_backend__mlds_to_managed_module29();
	ml_backend__mlds_to_managed_module30();
	ml_backend__mlds_to_managed_module31();
	ml_backend__mlds_to_managed_module32();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__ml_backend__mlds_to_managed__init(void);
void mercury__ml_backend__mlds_to_managed__init_type_tables(void);
void mercury__ml_backend__mlds_to_managed__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__ml_backend__mlds_to_managed__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__ml_backend__mlds_to_managed__init_complexity_procs(void);
#endif

void mercury__ml_backend__mlds_to_managed__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__ml_backend__mlds_to_managed_maybe_bunch_0();
	mercury__ml_backend__mlds_to_managed__init_debugger();
}

void mercury__ml_backend__mlds_to_managed__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__ml_backend__mlds_to_managed__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__ml_backend__mlds_to_managed__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__ml_backend__mlds_to_managed);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__ml_backend__mlds_to_managed__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
