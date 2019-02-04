/*
** Automatically generated from `prog_foreign.m'
** by the Mercury compiler,
** version rotd-2009-12-12, configured for i686-pc-linux-gnu.
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
INIT mercury__parse_tree__prog_foreign__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "parse_tree.prog_foreign.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "parse_tree.prog_foreign.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 35 "parse_tree.prog_foreign.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 39 "parse_tree.prog_foreign.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 43 "parse_tree.prog_foreign.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 47 "parse_tree.prog_foreign.c"
#line 48 "parse_tree.prog_foreign.c"
#include "parse_tree.prog_foreign.mh"

#line 51 "parse_tree.prog_foreign.c"
#line 52 "parse_tree.prog_foreign.c"
#ifndef PARSE_TREE__PROG_FOREIGN_DECL_GUARD
#define PARSE_TREE__PROG_FOREIGN_DECL_GUARD

#line 56 "parse_tree.prog_foreign.c"
#line 57 "parse_tree.prog_foreign.c"

#endif
#line 60 "parse_tree.prog_foreign.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_1 {
	MR_Word * f1;
	MR_Word * f2;
	MR_Integer f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_5 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_3 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_vector_common_3_0[];

struct mercury_type_4 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_vector_common_4_0[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_info_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_info_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0,
	mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0;
MR_decl_label3(parse_tree__prog_foreign__valid_foreign_language_1_1, 2,3,4)
MR_decl_label3(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0, 3,2,5)
MR_decl_label8(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0, 3,9,72,19,20,24,73,25)
MR_decl_label10(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0, 4,50,6,7,8,9,10,11,12,13)
MR_decl_label10(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0, 14,15,16,17,18,19,20,21,22,23)
MR_decl_label6(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0, 4,6,7,8,9,2)
MR_decl_label1(fn__parse_tree__prog_foreign__foreign_import_module_name_1_0, 8)
MR_decl_label10(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0, 3,93,5,7,11,96,17,21,95,27)
MR_decl_label5(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0, 31,94,37,41,36)
MR_decl_label3(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0, 3,4,1)
MR_decl_label1(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1, 3)
MR_decl_label9(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0, 3,4,6,7,8,11,10,13,1)
MR_decl_label6(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1, 2,3,4,7,6,9)
MR_decl_label4(fn__parse_tree__prog_foreign__foreign_type_language_1_0, 5,3,6,4)
MR_decl_label2(fn__parse_tree__prog_foreign__make_init_name_1_0, 2,3)
MR_decl_label4(fn__parse_tree__prog_foreign__name_mangle_1_0, 4,7,6,2)
MR_decl_label6(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0, 3,5,9,12,11,2)
MR_decl_label3(fn__parse_tree__prog_foreign__sym_name_mangle_1_0, 19,5,6)
MR_decl_label2(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0, 6,1)
MR_decl_label2(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0, 6,1)
MR_decl_label2(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0, 4,1)
MR_decl_label3(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0, 4,8,1)
MR_decl_label2(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0, 6,1)
MR_decl_label5(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0, 3,2,5,9,29)
MR_decl_label6(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0, 3,2,5,9,13,37)
MR_decl_label6(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0, 3,2,5,9,13,37)
MR_decl_label4(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0, 3,2,5,21)
MR_decl_label5(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0, 3,2,5,9,29)
MR_def_extern_entry(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1)
MR_def_extern_entry(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1)
MR_def_extern_entry(fn__parse_tree__prog_foreign__foreign_import_module_name_1_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__prefer_foreign_language_4_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__all_foreign_languages_0_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__foreign_type_language_1_0)
MR_decl_static(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__name_mangle_1_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__qualify_name_2_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__sym_name_mangle_1_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__make_init_name_1_0)
MR_def_extern_entry(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0)
MR_decl_static(parse_tree__prog_foreign__valid_foreign_language_1_1)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_body_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_body_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_decl_info_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_decl_info_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_export_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_export_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__foreign_export_defns_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__foreign_export_defns_0_0)
MR_def_extern_entry(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0)
MR_def_extern_entry(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0)
MR_decl_static(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0)
MR_def_extern_entry(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
MR_string_const("mercury", 7)
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_foreign__all_foreign_languages_0_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
static const struct mercury_type_1 mercury_common_1[1] =
{
{
(MR_Word *) &mercury_data__closure_layout__fn__parse_tree__prog_foreign__all_foreign_languages_0_0_1,
(MR_Word *) (MR_Integer) 0,
1,
MR_CTOR0_ADDR(libs__globals, foreign_language)
},
};

static const struct mercury_type_2 mercury_common_2[1] =
{
{
MR_COMMON(1,0),
MR_ENTRY_AP(parse_tree__prog_foreign__valid_foreign_language_1_1),
0
},
};

static const struct mercury_type_5 mercury_common_5[2] =
{
{
1,
MR_tbmkword(0, 0)
},
{
3,
MR_TAG_COMMON(1,5,0)
},
};

static const struct mercury_type_3 mercury_vector_common_3_0[32] =
{
{
MR_string_const("!", 1),
-1
},
{
MR_string_const(">=", 2),
-1
},
{
MR_string_const("=<", 2),
-1
},
{
MR_string_const("\\=", 2),
2
},
{
MR_string_const("{}", 2),
5
},
{
MR_string_const("[]", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("+", 1),
-1
},
{
MR_string_const("*", 1),
-1
},
{
MR_string_const("-", 1),
-1
},
{
MR_string_const(",", 1),
-1
},
{
MR_string_const("/", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("[|]", 3),
-1
},
{
MR_string_const(";", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("=", 1),
-1
},
{
MR_string_const("<", 1),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const(">", 1),
-1
},
};

static const struct mercury_type_4 mercury_vector_common_4_0[5] =
{
{
0
},
{
2
},
{
1
},
{
3
},
{
4
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;
extern const MR_TypeCtorInfo_Struct mercury_data_libs__globals__type_ctor_info_foreign_language_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_context_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_foreign__field_types_foreign_body_code_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_parse_tree__prog_foreign__field_names_foreign_body_code_0_0[] = {
	"fbody_lang",
	"fbody_code",
	"fbody_context"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0 = {
	"foreign_body_code",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_foreign__field_types_foreign_body_code_0_0,
	mercury_data_parse_tree__prog_foreign__field_names_foreign_body_code_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_body_code_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_body_code_0_0
};

const MR_Integer mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_body_code_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0)),
	"parse_tree.prog_foreign",
	"foreign_body_code",
	{ (void *)mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_body_code_0 },
	{ (void *)mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_body_code_0 },
	1,
	4,
	mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_body_code_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_body_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_body_info_0_0)),
	"parse_tree.prog_foreign",
	"foreign_body_info",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0;

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_foreign__field_types_foreign_decl_code_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_parse_tree__prog_data__type_ctor_info_foreign_decl_is_local_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

const MR_ConstString mercury_data_parse_tree__prog_foreign__field_names_foreign_decl_code_0_0[] = {
	"fdecl_lang",
	"fdecl_is_local",
	"fdecl_code",
	"fdecl_context"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0 = {
	"foreign_decl_code",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_foreign__field_types_foreign_decl_code_0_0,
	mercury_data_parse_tree__prog_foreign__field_names_foreign_decl_code_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_decl_code_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_decl_code_0_0
};

const MR_Integer mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0)),
	"parse_tree.prog_foreign",
	"foreign_decl_code",
	{ (void *)mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_decl_code_0 },
	{ (void *)mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_decl_code_0 },
	1,
	4,
	mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_decl_code_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_info_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_decl_info_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_decl_info_0_0)),
	"parse_tree.prog_foreign",
	"foreign_decl_info",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_export_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_export_0_0)),
	"parse_tree.prog_foreign",
	"foreign_export",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_foreign__field_types_foreign_export_decl_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

const MR_ConstString mercury_data_parse_tree__prog_foreign__field_names_foreign_export_decl_0_0[] = {
	"fexp_decl_lang",
	"fexp_decl_ret_type",
	"fexp_decl_func_name",
	"fexp_decl_arg_decls"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0 = {
	"foreign_export_decl",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_foreign__field_types_foreign_export_decl_0_0,
	mercury_data_parse_tree__prog_foreign__field_names_foreign_export_decl_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_export_decl_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_export_decl_0_0
};

const MR_Integer mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0)),
	"parse_tree.prog_foreign",
	"foreign_export_decl",
	{ (void *)mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_export_decl_0 },
	{ (void *)mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decl_0 },
	1,
	4,
	mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_export_decl_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
}};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_foreign__field_types_foreign_export_decls_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0
};

const MR_ConstString mercury_data_parse_tree__prog_foreign__field_names_foreign_export_decls_0_0[] = {
	"fexp_decls_info",
	"fexp_decls_list"
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0 = {
	"foreign_export_decls",
	2,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_foreign__field_types_foreign_export_decls_0_0,
	mercury_data_parse_tree__prog_foreign__field_names_foreign_export_decls_0_0,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_foreign__du_stag_ordered_foreign_export_decls_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_foreign_export_decls_0_0
};

const MR_Integer mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0)),
	"parse_tree.prog_foreign",
	"foreign_export_decls",
	{ (void *)mercury_data_parse_tree__prog_foreign__du_name_ordered_foreign_export_decls_0 },
	{ (void *)mercury_data_parse_tree__prog_foreign__du_ptag_ordered_foreign_export_decls_0 },
	1,
	4,
	mercury_data_parse_tree__prog_foreign__functor_number_map_foreign_export_decls_0
};

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__foreign_export_defns_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__foreign_export_defns_0_0)),
	"parse_tree.prog_foreign",
	"foreign_export_defns",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_parse_tree__prog_foreign__field_types_user_foreign_code_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_libs__globals__type_ctor_info_foreign_language_0,
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc mercury_data_parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0 = {
	"user_foreign_code",
	3,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_parse_tree__prog_foreign__field_types_user_foreign_code_0_0,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0

};

const MR_DuPtagLayout mercury_data_parse_tree__prog_foreign__du_ptag_ordered_user_foreign_code_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_parse_tree__prog_foreign__du_stag_ordered_user_foreign_code_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_parse_tree__prog_foreign__du_name_ordered_user_foreign_code_0[] = {
	&mercury_data_parse_tree__prog_foreign__du_functor_desc_user_foreign_code_0_0
};

const MR_Integer mercury_data_parse_tree__prog_foreign__functor_number_map_user_foreign_code_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0 = {
	0,
	13,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0)),
	"parse_tree.prog_foreign",
	"user_foreign_code",
	{ (void *)mercury_data_parse_tree__prog_foreign__du_name_ordered_user_foreign_code_0 },
	{ (void *)mercury_data_parse_tree__prog_foreign__du_ptag_ordered_user_foreign_code_0 },
	1,
	4,
	mercury_data_parse_tree__prog_foreign__functor_number_map_user_foreign_code_0
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__parse_tree__prog_foreign__all_foreign_languages_0_0_1 = {
{
MR_PREDICATE,
"parse_tree.prog_foreign",
"parse_tree.prog_foreign",
"valid_foreign_language",
1,
1
},
"parse_tree.prog_foreign",
"prog_foreign.m",
349,
"d1;c2;"
};



MR_BEGIN_MODULE(parse_tree__prog_foreign_module0)
	MR_init_entry1(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0);
	MR_init_label3(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0,3,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_language_file_extension'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0_i3);
	}
	MR_r2 = (MR_Word) MR_string_const(".c", 2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0_i4);
	}
	MR_r2 = (MR_Word) MR_string_const(".cs", 3);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0_i1);
	}
	MR_r2 = (MR_Word) MR_string_const(".java", 5);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module1)
	MR_init_entry1(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1);
	MR_init_label1(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_language_file_extension'/2 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1_i3);
	}
	MR_r1 = (MR_Word) MR_string_const(".c", 2);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_file_extension_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".cs", 3);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__libs__globals__simple_foreign_language_string_1_0);
MR_decl_entry(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module2)
	MR_init_entry1(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__foreign_language_module_name_2_0);
	MR_init_label9(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,3,4,6,7,8,11,10,13,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_language_module_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__foreign_language_module_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i3);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__simple_foreign_language_string_1_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i6);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i4);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__simple_foreign_language_string_1_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i6);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,2)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i1);
	}
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__simple_foreign_language_string_1_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i6);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i7);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i8);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i10);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i11);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr1;
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_0_i13);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r2, 0) = MR_r1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module3)
	MR_init_entry1(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__foreign_language_module_name_2_1);
	MR_init_label6(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,2,3,4,7,6,9)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_language_module_name'/3 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__foreign_language_module_name_2_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__libs__globals__simple_foreign_language_string_1_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_1_i2);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("_code", 5);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_1_i3);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("__", 2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_1_i4);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1_i6);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_r1;
	MR_r1 = MR_tfield(1, MR_tempr1, 1);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_1_i7);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__foreign_language_module_name_2_1_i9);
MR_def_label(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module4)
	MR_init_entry1(fn__parse_tree__prog_foreign__foreign_import_module_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__foreign_import_module_name_1_0);
	MR_init_label1(fn__parse_tree__prog_foreign__foreign_import_module_name_1_0,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_import_module_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__foreign_import_module_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r2,1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_1_0_i8);
	}
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(parse_tree__file_names__mercury_std_library_module_name_1_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module5)
	MR_init_entry1(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0);
	MR_init_label10(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,3,93,5,7,11,96,17,21,95,27)
	MR_init_label5(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,31,94,37,41,36)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_import_module_name_from_module'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_tfield(0, MR_r1, 0);
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i3) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i93) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i94) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i95) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i96));
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_r1 = MR_tfield(0, MR_r1, 1);
	MR_r2 = MR_r3;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__foreign_language_module_name_2_1,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i5);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i7);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i11);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i17);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i21);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,95)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i27);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i31);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,94)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 1);
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i37);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(parse_tree__file_names__mercury_std_library_module_name_1_0,
		fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i41);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0_i36);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,0);
	MR_decr_sp_and_return(3);
MR_def_label(fn__parse_tree__prog_foreign__foreign_import_module_name_from_module_2_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module6)
	MR_init_entry1(fn__parse_tree__prog_foreign__prefer_foreign_language_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__prefer_foreign_language_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'prefer_foreign_language'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__prefer_foreign_language_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r2;
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(solutions__solutions_2_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module7)
	MR_init_entry1(fn__parse_tree__prog_foreign__all_foreign_languages_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__all_foreign_languages_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'all_foreign_languages'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__all_foreign_languages_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = (MR_Word) MR_TAG_COMMON(0,2,0);
	MR_np_tailcall_ent(solutions__solutions_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module8)
	MR_init_entry1(fn__parse_tree__prog_foreign__foreign_type_language_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__foreign_type_language_1_0);
	MR_init_label4(fn__parse_tree__prog_foreign__foreign_type_language_1_0,5,3,6,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foreign_type_language'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__foreign_type_language_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_r1),
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_type_language_1_0_i5) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_type_language_1_0_i3) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_type_language_1_0_i6) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__foreign_type_language_1_0_i4));
MR_def_label(fn__parse_tree__prog_foreign__foreign_type_language_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_type_language_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_type_language_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(fn__parse_tree__prog_foreign__foreign_type_language_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__first_char_3_3);
MR_decl_entry(char__to_int_2_0);
MR_decl_entry(string__int_to_string_2_0);
MR_decl_entry(string__append_3_2);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module9)
	MR_init_entry1(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0);
	MR_init_label6(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,4,6,7,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_to_valid_c_identifier_2'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__first_char_3_3,
		fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0_i4);
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0_i2);
	}
	MR_sv(1) = MR_r3;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__to_int_2_0,
		fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0_i6);
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(string__int_to_string_2_0,
		fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0_i7);
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("_", 1);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_3_2,
		fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0_i8);
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_localcall_lab(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,
		fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0_i9);
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_3_2);
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module10)
	MR_init_entry1(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0);
	MR_init_label10(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,4,50,6,7,8,9,10,11,12,13)
	MR_init_label10(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,14,15,16,17,18,19,20,21,22,23)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'convert_to_valid_c_identifier'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_hash_string((MR_String) MR_r1) & (MR_Integer) 31);
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r2 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_3_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r1) == 0))) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i6);
	}
	MR_r2 = ((MR_Word *) &mercury_vector_common_3_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r2,0))
		continue;
	}
	break; } /* end while */
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_2_1_0,
		fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i23);
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r2,
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i22) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i11) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i13) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i8) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i7) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i10) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i20) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i21) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i18) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i19) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i17) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i9) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i16) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i14) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i15) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i50) MR_AND
		MR_LABEL_AP(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0_i12));
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_tuple", 7);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_not_equal", 11);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_cons", 6);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_nil", 5);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_greater_or_equal", 18);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_greater_than", 14);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_less_or_equal", 15);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_equal", 7);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_less_than", 11);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_semicolon", 11);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_slash", 7);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_minus", 7);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_comma", 7);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_plus", 6);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_times", 7);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f_cut", 5);
	MR_proceed();
	}
MR_def_label(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("f", 1);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__is_all_alnum_or_underscore_1_0);
MR_decl_entry(string__append_3_1);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module11)
	MR_init_entry1(fn__parse_tree__prog_foreign__name_mangle_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__name_mangle_1_0);
	MR_init_label4(fn__parse_tree__prog_foreign__name_mangle_1_0,4,7,6,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name_mangle'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__name_mangle_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		fn__parse_tree__prog_foreign__name_mangle_1_0_i4);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__name_mangle_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		fn__parse_tree__prog_foreign__name_mangle_1_0_i7);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__name_mangle_1_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("f__", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module12)
	MR_init_entry1(fn__parse_tree__prog_foreign__qualify_name_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__qualify_name_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'qualify_name'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__qualify_name_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_r1 = MR_tempr1;
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module13)
	MR_init_entry1(fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
	MR_init_label3(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,19,5,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'sym_name_mangle'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__sym_name_mangle_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__sym_name_mangle_1_0_i19);
	}
	MR_r1 = MR_tfield(0, MR_r1, 0);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__name_mangle_1_0);
MR_def_label(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r1, 1);
	MR_r1 = MR_tfield(1, MR_r1, 0);
	MR_np_localcall_lab(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__parse_tree__prog_foreign__sym_name_mangle_1_0_i5);
MR_def_label(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__name_mangle_1_0,
		fn__parse_tree__prog_foreign__sym_name_mangle_1_0_i6);
MR_def_label(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("__", 2);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r1 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr3, 1) = MR_tempr2;
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(string__append_list_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module14)
	MR_init_entry1(fn__parse_tree__prog_foreign__make_init_name_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__make_init_name_1_0);
	MR_init_label2(fn__parse_tree__prog_foreign__make_init_name_1_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_init_name'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__make_init_name_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__sym_name_mangle_1_0,
		fn__parse_tree__prog_foreign__make_init_name_1_0_i2);
MR_def_label(fn__parse_tree__prog_foreign__make_init_name_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("__", 2);
	MR_np_call_localret_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0,
		fn__parse_tree__prog_foreign__make_init_name_1_0_i3);
MR_def_label(fn__parse_tree__prog_foreign__make_init_name_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("mercury__", 9);
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__index_3_0);
MR_decl_entry(char__is_digit_1_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module15)
	MR_init_entry1(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0);
	MR_init_label6(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,3,5,9,12,11,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'name_mangle_no_leading_digit'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_np_call_localret_ent(string__is_all_alnum_or_underscore_1_0,
		fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i3);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i2);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(string__index_3_0,
		fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i5);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i2);
	}
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(char__is_digit_1_0,
		fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i9);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_r1) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i2);
	}
	MR_r1 = (MR_Word) MR_string_const("f_", 2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(string__append_3_1,
		fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i12);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0_i11);
	}
	MR_r1 = (MR_Word) MR_string_const("f__", 3);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__f_115_116_114_105_110_103_95_95_43_43_2_0);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_decr_sp_and_return(2);
MR_def_label(fn__parse_tree__prog_foreign__name_mangle_no_leading_digit_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(fn__parse_tree__prog_foreign__convert_to_valid_c_identifier_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(MR_do_fail);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module16)
	MR_init_entry1(parse_tree__prog_foreign__valid_foreign_language_1_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__parse_tree__prog_foreign__valid_foreign_language_1_1);
	MR_init_label3(parse_tree__prog_foreign__valid_foreign_language_1_1,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'valid_foreign_language'/1 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(parse_tree__prog_foreign__valid_foreign_language_1_1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_mkframe("pred parse_tree.prog_foreign.valid_foreign_language/1-1", 1,
		MR_LABEL_AP(parse_tree__prog_foreign__valid_foreign_language_1_1_i2));
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, 0);
	MR_fv(1) = (MR_Integer) 1;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_succeed();
	}
MR_def_label(parse_tree__prog_foreign__valid_foreign_language_1_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_fv(1);
	if (MR_INT_GE(MR_r2,4)) {
		MR_GOTO_LAB(parse_tree__prog_foreign__valid_foreign_language_1_1_i3);
	}
	MR_fv(1) = ((MR_Integer) MR_fv(1) + (MR_Integer) 1);
	MR_GOTO_LAB(parse_tree__prog_foreign__valid_foreign_language_1_1_i4);
MR_def_label(parse_tree__prog_foreign__valid_foreign_language_1_1,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_redoip_slot_word(MR_curfr) = (MR_Word) MR_ENTRY(MR_do_fail);
MR_def_label(parse_tree__prog_foreign__valid_foreign_language_1_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = (MR_Word) &MR_tfield(0, (MR_Word *) &mercury_vector_common_4_0, (MR_Integer) MR_r2);
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_succeed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module17)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_body_code_0_0);
	MR_init_label2(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_body_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
	}
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_body_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(private_builtin__builtin_compare_string_3_0);
MR_decl_entry(__Compare___term__context_0_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module18)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_body_code_0_0);
	MR_init_label5(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_body_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_foreign__foreign_body_code_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_foreign__foreign_body_code_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_body_code_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module19)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_body_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_body_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_body_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module20)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_body_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_body_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_body_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_body_code);
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


MR_BEGIN_MODULE(parse_tree__prog_foreign_module21)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_decl_code_0_0);
	MR_init_label2(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_decl_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_r2 = MR_tfield(0, MR_tempr2, 3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
	}
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_decl_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module22)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_decl_code_0_0);
	MR_init_label6(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_decl_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0,2)
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
		__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_decl_code_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module23)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_decl_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_decl_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_decl_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
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


MR_BEGIN_MODULE(parse_tree__prog_foreign_module24)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_decl_info_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_decl_info_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_decl_info_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
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


MR_BEGIN_MODULE(parse_tree__prog_foreign_module25)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_export_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_export_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_export_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module26)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_export_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_export_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_export_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module27)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_export_decl_0_0);
	MR_init_label2(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0,4,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_export_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0_i4);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_r1 != MR_tempr3)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 2);
	if ((strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 3);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 3);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_tempr3) == 0);
	MR_decr_sp(2);
	MR_proceed();
	}
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_export_decl_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp(2);
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module28)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_export_decl_0_0);
	MR_init_label6(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_export_decl_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0,2)
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
		__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i37);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i37);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i13);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0_i37);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decl_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module29)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_export_decls_0_0);
	MR_init_label3(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0,4,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_export_decls_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0_i8);
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0_i4);
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_export_decl);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_foreign__foreign_export_decls_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module30)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_export_decls_0_0);
	MR_init_label4(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0,3,2,5,21)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_export_decls_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0,2)
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
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_decl_code);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0_i21);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(parse_tree__prog_foreign, foreign_export_decl);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___parse_tree__prog_foreign__foreign_export_decls_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

MR_BEGIN_MODULE(parse_tree__prog_foreign_module31)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__foreign_export_defns_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__foreign_export_defns_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__foreign_export_defns_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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


MR_BEGIN_MODULE(parse_tree__prog_foreign_module32)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__foreign_export_defns_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__foreign_export_defns_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__foreign_export_defns_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
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


MR_BEGIN_MODULE(parse_tree__prog_foreign_module33)
	MR_init_entry1(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___parse_tree__prog_foreign__user_foreign_code_0_0);
	MR_init_label2(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0,6,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___parse_tree__prog_foreign__user_foreign_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0_i6);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0_i1);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr1, 1);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 1);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, (char *) (MR_Word *) MR_tempr4) != 0)) {
		MR_GOTO_LAB(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 2);
	MR_r2 = MR_tfield(0, MR_tempr2, 2);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___term__context_0_0);
	}
MR_def_label(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___parse_tree__prog_foreign__user_foreign_code_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module34)
	MR_init_entry1(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___parse_tree__prog_foreign__user_foreign_code_0_0);
	MR_init_label5(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0,3,2,5,9,29)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___parse_tree__prog_foreign__user_foreign_code_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0_i2);
MR_def_label(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0,2)
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___parse_tree__prog_foreign__user_foreign_code_0_0_i5);
MR_def_label(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0_i29);
	}
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(private_builtin__builtin_compare_string_3_0,
		__Compare___parse_tree__prog_foreign__user_foreign_code_0_0_i9);
MR_def_label(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0_i29);
	}
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Compare___term__context_0_0);
MR_def_label(__Compare___parse_tree__prog_foreign__user_foreign_code_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__nth_member_search_3_0);
MR_decl_entry(fn__list__length_1_0);

MR_BEGIN_MODULE(parse_tree__prog_foreign_module35)
	MR_init_entry1(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0);
	MR_init_label3(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0,3,2,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__prefer_foreign_language__318__1'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__nth_member_search_3_0,
		fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0_i3);
MR_def_label(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0_i2);
	}
	MR_r1 = MR_r2;
	MR_decr_sp_and_return(2);
MR_def_label(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(libs__globals, foreign_language);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(fn__list__length_1_0,
		fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0_i5);
MR_def_label(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = ((MR_Integer) MR_r1 + (MR_Integer) 1);
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(parse_tree__prog_foreign_module36)
	MR_init_entry1(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0);
	MR_init_label8(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,3,9,72,19,20,24,73,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__prefer_foreign_language__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r1,
		MR_LABEL_AP(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i9) MR_AND
		MR_LABEL_AP(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i72) MR_AND
		MR_LABEL_AP(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73) MR_AND
		MR_LABEL_AP(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i3) MR_AND
		MR_LABEL_AP(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i24) MR_AND
		MR_LABEL_AP(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73));
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,72)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,5,1);
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0,
		fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i19);
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(fn__parse_tree__prog_foreign__IntroducedFrom__func__prefer_foreign_language__318__1_2_0,
		fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i20);
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r1 >= (MR_Integer) MR_sv(1))) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i25);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73);
	}
	if (MR_INT_EQ(MR_r2,0)) {
		MR_GOTO_LAB(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0_i73);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,73)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__f_112_97_114_115_101_95_116_114_101_101_95_95_112_114_111_103_95_102_111_114_101_105_103_110_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_102_101_114_95_102_111_114_101_105_103_110_95_108_97_110_103_117_97_103_101_95_95_91_49_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__parse_tree__prog_foreign_maybe_bunch_0(void)
{
	parse_tree__prog_foreign_module0();
	parse_tree__prog_foreign_module1();
	parse_tree__prog_foreign_module2();
	parse_tree__prog_foreign_module3();
	parse_tree__prog_foreign_module4();
	parse_tree__prog_foreign_module5();
	parse_tree__prog_foreign_module6();
	parse_tree__prog_foreign_module7();
	parse_tree__prog_foreign_module8();
	parse_tree__prog_foreign_module9();
	parse_tree__prog_foreign_module10();
	parse_tree__prog_foreign_module11();
	parse_tree__prog_foreign_module12();
	parse_tree__prog_foreign_module13();
	parse_tree__prog_foreign_module14();
	parse_tree__prog_foreign_module15();
	parse_tree__prog_foreign_module16();
	parse_tree__prog_foreign_module17();
	parse_tree__prog_foreign_module18();
	parse_tree__prog_foreign_module19();
	parse_tree__prog_foreign_module20();
	parse_tree__prog_foreign_module21();
	parse_tree__prog_foreign_module22();
	parse_tree__prog_foreign_module23();
	parse_tree__prog_foreign_module24();
	parse_tree__prog_foreign_module25();
	parse_tree__prog_foreign_module26();
	parse_tree__prog_foreign_module27();
	parse_tree__prog_foreign_module28();
	parse_tree__prog_foreign_module29();
	parse_tree__prog_foreign_module30();
	parse_tree__prog_foreign_module31();
	parse_tree__prog_foreign_module32();
	parse_tree__prog_foreign_module33();
	parse_tree__prog_foreign_module34();
	parse_tree__prog_foreign_module35();
	parse_tree__prog_foreign_module36();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__parse_tree__prog_foreign__init(void);
void mercury__parse_tree__prog_foreign__init_type_tables(void);
void mercury__parse_tree__prog_foreign__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__parse_tree__prog_foreign__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__parse_tree__prog_foreign__init_complexity_procs(void);
#endif

void mercury__parse_tree__prog_foreign__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__parse_tree__prog_foreign_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0,
		parse_tree__prog_foreign__foreign_body_code_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_info_0,
		parse_tree__prog_foreign__foreign_body_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0,
		parse_tree__prog_foreign__foreign_decl_code_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_info_0,
		parse_tree__prog_foreign__foreign_decl_info_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_0,
		parse_tree__prog_foreign__foreign_export_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0,
		parse_tree__prog_foreign__foreign_export_decl_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0,
		parse_tree__prog_foreign__foreign_export_decls_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0,
		parse_tree__prog_foreign__foreign_export_defns_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0,
		parse_tree__prog_foreign__user_foreign_code_0_0);
	mercury__parse_tree__prog_foreign__init_debugger();
}

void mercury__parse_tree__prog_foreign__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_code_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_body_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_code_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_decl_info_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decl_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_decls_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_foreign_export_defns_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_parse_tree__prog_foreign__type_ctor_info_user_foreign_code_0);
	}
}


void mercury__parse_tree__prog_foreign__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__parse_tree__prog_foreign__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__parse_tree__prog_foreign);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__parse_tree__prog_foreign__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
