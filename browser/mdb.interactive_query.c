/*
** Automatically generated from `interactive_query.m'
** by the Mercury compiler,
** version rotd-2011-07-19, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__mdb__interactive_query__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "mdb.interactive_query.c"
#include "mdb.interactive_query.mh"

#line 28 "mdb.interactive_query.c"
#line 3 "mdb.int0"
#include "mdb.mh"

#line 32 "mdb.interactive_query.c"
#line 526 "../library/io.int"
#include "io.mh"

#line 36 "mdb.interactive_query.c"
#line 536 "../library/io.int"
#include "string.mh"

#line 40 "mdb.interactive_query.c"
#line 31 "../library/bitmap.int2"
#include "bitmap.mh"

#line 44 "mdb.interactive_query.c"
#line 30 "../library/time.int2"
#include "time.mh"

#line 48 "mdb.interactive_query.c"
#line 49 "mdb.interactive_query.c"
#ifndef MDB__INTERACTIVE_QUERY_DECL_GUARD
#define MDB__INTERACTIVE_QUERY_DECL_GUARD

#line 53 "mdb.interactive_query.c"
#line 516 "interactive_query.m"

    #include "mercury_grade.h"
    #include "mercury_string.h"

#line 59 "mdb.interactive_query.c"
#line 60 "mdb.interactive_query.c"

#endif
#line 63 "mdb.interactive_query.c"

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
	MR_Word * f1;
	MR_Code * f2;
	MR_Integer f3;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_String f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_String f1;
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Integer f1;
	MR_Word * f2;
	MR_String f3;
	MR_Integer f4;
	MR_Integer f5;
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

struct mercury_type_7 {
	MR_Word * f1;
	MR_Integer f2;
	MR_Word * f3;
	MR_Word * f4;
};
MR_STATIC_LINKAGE const struct mercury_type_7 mercury_common_7[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_mdb__interactive_query__type_ctor_info_imports_0,
	mercury_data_mdb__interactive_query__type_ctor_info_interactive_query_response_0,
	mercury_data_mdb__interactive_query__type_ctor_info_io_pred_0,
	mercury_data_mdb__interactive_query__type_ctor_info_options_0,
	mercury_data_mdb__interactive_query__type_ctor_info_prog_0,
	mercury_data_mdb__interactive_query__type_ctor_info_query_type_0;
MR_decl_label9(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0, 2,3,4,5,6,7,8,9,10)
MR_decl_label5(mdb__interactive_query__compile_file_4_0, 11,12,14,16,18)
MR_decl_label10(mdb__interactive_query__dynamically_load_and_run_2_0, 2,5,4,11,14,15,13,17,18,21)
MR_decl_label2(mdb__interactive_query__dynamically_load_and_run_2_0, 22,3)
MR_decl_label10(mdb__interactive_query__query_7_0, 30,16,3,2,5,7,10,11,12,9)
MR_decl_label1(mdb__interactive_query__query_7_0, 14)
MR_decl_label10(mdb__interactive_query__query_2_8_0, 140,6,5,9,24,25,15,30,32,33)
MR_decl_label4(mdb__interactive_query__query_2_8_0, 35,28,38,40)
MR_decl_label10(mdb__interactive_query__query_external_7_0, 141,2,3,4,6,12,13,10,21,22)
MR_decl_label7(mdb__interactive_query__query_external_7_0, 16,24,37,39,35,44,45)
MR_decl_label10(mdb__interactive_query__run_query_4_0, 2,4,6,7,10,11,19,20,9,8)
MR_decl_label7(mdb__interactive_query__run_query_4_0, 22,23,24,25,26,27,30)
MR_decl_label2(mdb__interactive_query__send_term_to_socket_4_0, 2,3)
MR_decl_label4(mdb__interactive_query__term_to_list_2_0, 88,13,87,1)
MR_decl_label3(mdb__interactive_query__write_args_4_0, 4,7,19)
MR_decl_label4(mdb__interactive_query__write_code_to_print_one_var_4_0, 2,3,4,5)
MR_decl_label2(mdb__interactive_query__write_import_list_4_0, 2,4)
MR_decl_label3(mdb__interactive_query__write_line_directive_2_0, 2,3,4)
MR_decl_label10(mdb__interactive_query__write_prog_to_stream_3_0, 2,3,5,6,9,11,12,13,14,16)
MR_decl_label10(mdb__interactive_query__write_prog_to_stream_3_0, 17,18,19,20,21,8,25,24,28,30)
MR_decl_label10(mdb__interactive_query__write_prog_to_stream_3_0, 31,32,33,34,35,36,37,38,40,41)
MR_decl_label9(mdb__interactive_query__write_prog_to_stream_3_0, 42,43,44,45,46,47,48,49,50)
MR_decl_label6(__Unify___mdb__interactive_query__interactive_query_response_0_0, 5,6,7,23,8,1)
MR_decl_label4(__Unify___mdb__interactive_query__prog_0_0, 4,6,10,1)
MR_decl_label10(__Compare___mdb__interactive_query__interactive_query_response_0_0, 7,8,9,5,13,14,15,11,19,20)
MR_decl_label10(__Compare___mdb__interactive_query__interactive_query_response_0_0, 76,21,17,25,26,27,23,31,59,32)
MR_decl_label3(__Compare___mdb__interactive_query__interactive_query_response_0_0, 33,61,34)
MR_decl_label6(__Compare___mdb__interactive_query__prog_0_0, 3,2,5,9,13,37)
MR_decl_static(mdb__interactive_query__term_to_list_2_0)
MR_decl_static(mdb__interactive_query__write_line_directive_2_0)
MR_decl_static(mdb__interactive_query__write_args_4_0)
MR_decl_static(mdb__interactive_query__write_import_list_4_0)
MR_decl_static(mdb__interactive_query__write_prog_to_stream_3_0)
MR_decl_static(fn__mdb__interactive_query__grade_option_0_0)
MR_decl_static(mdb__interactive_query__compile_file_4_0)
MR_decl_static(fn__mdb__interactive_query__inst_cast_1_0)
MR_decl_static(mdb__interactive_query__dynamically_load_and_run_2_0)
MR_decl_static(mdb__interactive_query__run_query_4_0)
MR_def_extern_entry(mdb__interactive_query__query_7_0)
MR_decl_static(mdb__interactive_query__query_2_8_0)
MR_decl_static(mdb__interactive_query__send_term_to_socket_4_0)
MR_def_extern_entry(mdb__interactive_query__query_external_7_0)
MR_decl_static(mdb__interactive_query__write_code_to_print_one_var_4_0)
MR_decl_static(mdb__interactive_query__write_one_var_4_0)
MR_def_extern_entry(__Unify___mdb__interactive_query__imports_0_0)
MR_def_extern_entry(__Compare___mdb__interactive_query__imports_0_0)
MR_decl_static(__Unify___mdb__interactive_query__interactive_query_response_0_0)
MR_decl_static(__Compare___mdb__interactive_query__interactive_query_response_0_0)
MR_decl_static(__Unify___mdb__interactive_query__io_pred_0_0)
MR_decl_static(__Compare___mdb__interactive_query__io_pred_0_0)
MR_def_extern_entry(__Unify___mdb__interactive_query__options_0_0)
MR_def_extern_entry(__Compare___mdb__interactive_query__options_0_0)
MR_decl_static(__Unify___mdb__interactive_query__prog_0_0)
MR_decl_static(__Compare___mdb__interactive_query__prog_0_0)
MR_def_extern_entry(__Unify___mdb__interactive_query__query_type_0_0)
MR_def_extern_entry(__Compare___mdb__interactive_query__query_type_0_0)
MR_decl_static(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0)

extern const MR_TypeCtorInfo_Struct mercury_data_varset__type_ctor_info_varset_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_var_1;
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_generic_0;
static const struct mercury_type_0 mercury_common_0[3] =
{
{
{
MR_CTOR1_ADDR(varset, varset),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
{
{
MR_CTOR1_ADDR(term, var),
MR_CTOR0_ADDR(term, generic)
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_args_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_prog_to_stream_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_prog_to_stream_3_0_2;
static const struct mercury_type_1 mercury_common_1[3] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__interactive_query__write_args_4_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__interactive_query__write_prog_to_stream_3_0_1,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__interactive_query__write_prog_to_stream_3_0_2,
(MR_Word *) (MR_Integer) 0
},
4,
{
MR_COMMON(0,0),
MR_COMMON(0,1),
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_import_list_4_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__query_2_8_0_1;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__mdb__interactive_query__write_import_list_4_0_1,
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
(MR_Word *) &mercury_data__closure_layout__mdb__interactive_query__query_2_8_0_1,
(MR_Word *) (MR_Integer) 0
},
3,
{
MR_STRING_CTOR_ADDR,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
}
},
};

MR_decl_entry(term_io__quote_atom_3_0);
static const struct mercury_type_3 mercury_common_3[2] =
{
{
MR_COMMON(2,0),
MR_ENTRY_AP(term_io__quote_atom_3_0),
0
},
{
MR_COMMON(2,1),
MR_ENTRY_AP(term_io__quote_atom_3_0),
0
},
};

static const struct mercury_type_4 mercury_common_4[3] =
{
{
MR_string_const("mdb_query", 9),
MR_tbmkword(0, 0)
},
{
MR_string_const(" --pic-reg --compile-to-shared-lib ", 35),
MR_TAG_COMMON(1,4,0)
},
{
MR_string_const("\n", 1),
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
MR_string_const("mdb_query", 9)
},
};

static const struct mercury_type_6 mercury_common_6[1] =
{
{
0,
MR_TAG_COMMON(1,5,0),
MR_string_const("run", 3),
2,
0
},
};

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;
static const struct mercury_type_7 mercury_common_7[1] =
{
{
MR_CTOR0_ADDR(builtin, pred),
2,
MR_IO_CTOR_ADDR,
MR_IO_CTOR_ADDR
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_builtin__type_ctor_info_string_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__interactive_query__type_ctor_info_imports_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__interactive_query__imports_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__interactive_query__imports_0_0)),
	"mdb.interactive_query",
	"imports",
	{ 0 },
	{ (void *)&mercury_data_list__ti_list_1builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_0 = {
	"iq_ok",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	0,
	0,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__interactive_query__field_types_interactive_query_response_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_1 = {
	"iq_imported",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_mdb__interactive_query__field_types_interactive_query_response_0_1,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_2 = {
	"iq_quit",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_3 = {
	"iq_eof",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_mdb__interactive_query__field_types_interactive_query_response_0_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_4 = {
	"iq_error",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_mdb__interactive_query__field_types_interactive_query_response_0_4,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0[] = {
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_2,
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_3

};

const MR_DuFunctorDescPtr mercury_data_mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1[] = {
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_1

};

const MR_DuFunctorDescPtr mercury_data_mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2[] = {
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_4

};

const MR_DuPtagLayout mercury_data_mdb__interactive_query__du_ptag_ordered_interactive_query_response_0[] = {
	{ 3, MR_SECTAG_LOCAL,
	mercury_data_mdb__interactive_query__du_stag_ordered_interactive_query_response_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__interactive_query__du_stag_ordered_interactive_query_response_0_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__interactive_query__du_stag_ordered_interactive_query_response_0_2 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__interactive_query__du_name_ordered_interactive_query_response_0[] = {
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_3,
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_4,
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_1,
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_0,
	&mercury_data_mdb__interactive_query__du_functor_desc_interactive_query_response_0_2
};

const MR_Integer mercury_data_mdb__interactive_query__functor_number_map_interactive_query_response_0[] = {
	3,
	2,
	4,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__interactive_query__type_ctor_info_interactive_query_response_0 = {
	0,
	15,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__interactive_query__interactive_query_response_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__interactive_query__interactive_query_response_0_0)),
	"mdb.interactive_query",
	"interactive_query_response",
	{ (void *)mercury_data_mdb__interactive_query__du_name_ordered_interactive_query_response_0 },
	{ (void *)mercury_data_mdb__interactive_query__du_ptag_ordered_interactive_query_response_0 },
	5,
	4,
	mercury_data_mdb__interactive_query__functor_number_map_interactive_query_response_0
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_pred_0;
extern const MR_TypeCtorInfo_Struct mercury_data_io__type_ctor_info_state_0;

static const MR_VA_TypeInfo_Struct2 mercury_data___vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0 = {
	&mercury_data_builtin__type_ctor_info_pred_0,
	2,
{	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0,
	(MR_TypeInfo) &mercury_data_io__type_ctor_info_state_0
}};

const MR_TypeCtorInfo_Struct mercury_data_mdb__interactive_query__type_ctor_info_io_pred_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__interactive_query__io_pred_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__interactive_query__io_pred_0_0)),
	"mdb.interactive_query",
	"io_pred",
	{ 0 },
	{ (void *)&mercury_data___vti_pred_2io__type_ctor_info_state_0io__type_ctor_info_state_0 },
	-1,
	0,
	NULL
};

const MR_TypeCtorInfo_Struct mercury_data_mdb__interactive_query__type_ctor_info_options_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__interactive_query__options_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__interactive_query__options_0_0)),
	"mdb.interactive_query",
	"options",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_term__type_ctor_info_term_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_term__ti_term_1term__type_ctor_info_generic_0 = {
	&mercury_data_term__type_ctor_info_term_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};

static const MR_FA_TypeInfo_Struct1 mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0 = {
	&mercury_data_varset__type_ctor_info_varset_1,
{	(MR_TypeInfo) &mercury_data_term__type_ctor_info_generic_0
}};
extern const MR_TypeCtorInfo_Struct mercury_data_mdb__interactive_query__type_ctor_info_query_type_0;

const MR_PseudoTypeInfo mercury_data_mdb__interactive_query__field_types_prog_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_mdb__interactive_query__type_ctor_info_query_type_0,
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1builtin__type_ctor_info_string_0,
	(MR_PseudoTypeInfo) &mercury_data_term__ti_term_1term__type_ctor_info_generic_0,
	(MR_PseudoTypeInfo) &mercury_data_varset__ti_varset_1term__type_ctor_info_generic_0
};

static const MR_DuFunctorDesc mercury_data_mdb__interactive_query__du_functor_desc_prog_0_0 = {
	"prog",
	4,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_mdb__interactive_query__field_types_prog_0_0,
	NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_mdb__interactive_query__du_stag_ordered_prog_0_0[] = {
	&mercury_data_mdb__interactive_query__du_functor_desc_prog_0_0

};

const MR_DuPtagLayout mercury_data_mdb__interactive_query__du_ptag_ordered_prog_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_mdb__interactive_query__du_stag_ordered_prog_0_0 }

};

const MR_DuFunctorDescPtr mercury_data_mdb__interactive_query__du_name_ordered_prog_0[] = {
	&mercury_data_mdb__interactive_query__du_functor_desc_prog_0_0
};

const MR_Integer mercury_data_mdb__interactive_query__functor_number_map_prog_0[] = {
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__interactive_query__type_ctor_info_prog_0 = {
	0,
	15,
	1,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__interactive_query__prog_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__interactive_query__prog_0_0)),
	"mdb.interactive_query",
	"prog",
	{ (void *)mercury_data_mdb__interactive_query__du_name_ordered_prog_0 },
	{ (void *)mercury_data_mdb__interactive_query__du_ptag_ordered_prog_0 },
	1,
	4,
	mercury_data_mdb__interactive_query__functor_number_map_prog_0
};

static const MR_EnumFunctorDesc mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_0 = {
	"normal_query",
	0
};

static const MR_EnumFunctorDesc mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_1 = {
	"cc_query",
	1
};

static const MR_EnumFunctorDesc mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_2 = {
	"io_query",
	2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__interactive_query__enum_value_ordered_query_type_0[] = {
	&mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_0,
	&mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_1,
	&mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_2
};

const MR_EnumFunctorDescPtr mercury_data_mdb__interactive_query__enum_name_ordered_query_type_0[] = {
	&mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_1,
	&mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_2,
	&mercury_data_mdb__interactive_query__enum_functor_desc_query_type_0_0
};

const MR_Integer mercury_data_mdb__interactive_query__functor_number_map_query_type_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_mdb__interactive_query__type_ctor_info_query_type_0 = {
	0,
	15,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___mdb__interactive_query__query_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___mdb__interactive_query__query_type_0_0)),
	"mdb.interactive_query",
	"query_type",
	{ (void *)mercury_data_mdb__interactive_query__enum_name_ordered_query_type_0 },
	{ (void *)mercury_data_mdb__interactive_query__enum_value_ordered_query_type_0 },
	3,
	4,
	mercury_data_mdb__interactive_query__functor_number_map_query_type_0
};


static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__query_2_8_0_1 = {
{
MR_PREDICATE,
"term_io",
"term_io",
"quote_atom",
3,
0
},
"mdb.interactive_query",
"interactive_query.m",
448,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_prog_to_stream_3_0_2 = {
{
MR_PREDICATE,
"mdb.interactive_query",
"mdb.interactive_query",
"write_code_to_print_one_var",
4,
0
},
"mdb.interactive_query",
"interactive_query.m",
329,
"31"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_prog_to_stream_3_0_1 = {
{
MR_PREDICATE,
"mdb.interactive_query",
"mdb.interactive_query",
"write_code_to_print_one_var",
4,
0
},
"mdb.interactive_query",
"interactive_query.m",
383,
"59"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_import_list_4_0_1 = {
{
MR_PREDICATE,
"term_io",
"term_io",
"quote_atom",
3,
0
},
"mdb.interactive_query",
"interactive_query.m",
448,
"9"
};

static const MR_UserClosureId
mercury_data__closure_layout__mdb__interactive_query__write_args_4_0_1 = {
{
MR_PREDICATE,
"mdb.interactive_query",
"mdb.interactive_query",
"write_one_var",
4,
0
},
"mdb.interactive_query",
"interactive_query.m",
432,
"12"
};



MR_BEGIN_MODULE(mdb__interactive_query_module0)
	MR_init_entry1(mdb__interactive_query__term_to_list_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__term_to_list_2_0);
	MR_init_label4(mdb__interactive_query__term_to_list_2_0,88,13,87,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'term_to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__term_to_list_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i87);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	MR_r3 = MR_tempr1;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i87);
	}
	MR_r4 = MR_tfield(0, MR_r1, 1);
	if (MR_LTAGS_TESTR(MR_r4,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i88);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("[]", 2)) != 0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i87);
	}
	MR_r2 = (MR_Word) MR_tbmkword(0, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(mdb__interactive_query__term_to_list_2_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_r2 = MR_tfield(0, MR_r3, 0);
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("[|]", 3)) != 0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r4;
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_r2,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i1);
	}
	MR_tempr1 = MR_tfield(0, MR_r2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i1);
	}
	MR_r2 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_r2,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i1);
	}
	MR_tempr2 = MR_tfield(1, MR_r2, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i1);
	}
	MR_sv(1) = MR_tfield(0, MR_tempr1, 0);
	MR_r1 = MR_tfield(1, MR_r2, 0);
	}
	MR_np_localcall_lab(mdb__interactive_query__term_to_list_2_0,
		mdb__interactive_query__term_to_list_2_0_i13);
MR_def_label(mdb__interactive_query__term_to_list_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__interactive_query__term_to_list_2_0_i1);
	}
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_r2 = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(2);
	}
MR_def_label(mdb__interactive_query__term_to_list_2_0,87)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
MR_def_label(mdb__interactive_query__term_to_list_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_3_0);
MR_decl_entry(io__get_line_number_3_0);
MR_decl_entry(io__write_int_3_0);
MR_decl_entry(io__nl_2_0);

MR_BEGIN_MODULE(mdb__interactive_query_module1)
	MR_init_entry1(mdb__interactive_query__write_line_directive_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__write_line_directive_2_0);
	MR_init_label3(mdb__interactive_query__write_line_directive_2_0,2,3,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_line_directive'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__write_line_directive_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("\n#", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_line_directive_2_0_i2);
MR_def_label(mdb__interactive_query__write_line_directive_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__get_line_number_3_0,
		mdb__interactive_query__write_line_directive_2_0_i3);
MR_def_label(mdb__interactive_query__write_line_directive_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_int_3_0,
		mdb__interactive_query__write_line_directive_2_0_i4);
MR_def_label(mdb__interactive_query__write_line_directive_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__nl_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_list_5_0);

MR_BEGIN_MODULE(mdb__interactive_query_module2)
	MR_init_entry1(mdb__interactive_query__write_args_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__write_args_4_0);
	MR_init_label3(mdb__interactive_query__write_args_4_0,4,7,19)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_args'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__write_args_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__write_args_4_0_i19);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("(", 1);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_args_4_0_i4);
MR_def_label(mdb__interactive_query__write_args_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r4 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,0);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__interactive_query__write_one_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(2);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,0,2);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(", ", 2);
	}
	MR_np_call_localret_ent(io__write_list_5_0,
		mdb__interactive_query__write_args_4_0_i7);
MR_def_label(mdb__interactive_query__write_args_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(")", 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_3_0);
MR_def_label(mdb__interactive_query__write_args_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_string_4_0);
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
MR_decl_entry(io__write_list_6_0);

MR_BEGIN_MODULE(mdb__interactive_query_module3)
	MR_init_entry1(mdb__interactive_query__write_import_list_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__write_import_list_4_0);
	MR_init_label2(mdb__interactive_query__write_import_list_4_0,2,4)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_import_list'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__write_import_list_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const(":- import_module ", 17);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__interactive_query__write_import_list_4_0_i2);
MR_def_label(mdb__interactive_query__write_import_list_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const(", ", 2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,0);
	MR_np_call_localret_ent(io__write_list_6_0,
		mdb__interactive_query__write_import_list_4_0_i4);
MR_def_label(mdb__interactive_query__write_import_list_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(io__write_string_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__output_stream_3_0);
MR_decl_entry(term__vars_2_0);
MR_decl_entry(list__remove_dups_2_0);
MR_decl_entry(list__foldl_4_2);
MR_decl_entry(term_io__write_term_4_0);

MR_BEGIN_MODULE(mdb__interactive_query_module4)
	MR_init_entry1(mdb__interactive_query__write_prog_to_stream_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__write_prog_to_stream_3_0);
	MR_init_label10(mdb__interactive_query__write_prog_to_stream_3_0,2,3,5,6,9,11,12,13,14,16)
	MR_init_label10(mdb__interactive_query__write_prog_to_stream_3_0,17,18,19,20,21,8,25,24,28,30)
	MR_init_label10(mdb__interactive_query__write_prog_to_stream_3_0,31,32,33,34,35,36,37,38,40,41)
	MR_init_label9(mdb__interactive_query__write_prog_to_stream_3_0,42,43,44,45,46,47,48,49,50)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_prog_to_stream'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__write_prog_to_stream_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_sv(2) = MR_tfield(0, MR_r1, 1);
	MR_sv(3) = MR_tfield(0, MR_r1, 2);
	MR_sv(4) = MR_tfield(0, MR_r1, 3);
	MR_r1 = (MR_Word) MR_string_const("\n        :- module mdb_query.\n        :- interface.\n        :- import_module io.\n        :- pred run(io.state::di, io.state::uo) is cc_multi.\n        :- impleme" "ntation.\n        ", 177);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i2);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__output_stream_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i3);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("solutions", 9);
	MR_tfield(1, MR_tempr1, 1) = MR_sv(2);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__interactive_query__write_import_list_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i5);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n            :- pragma source_file(\"<stdin>\").\n            run -->\n    ", 71);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i6);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),1)) {
		MR_GOTO_LAB(mdb__interactive_query__write_prog_to_stream_3_0_i8);
	}
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(term__vars_2_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i9);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__remove_dups_2_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i11);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("(if { query", 11);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i12);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i13);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" } then\n", 8);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i14);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,1);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__interactive_query__write_code_to_print_one_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		mdb__interactive_query__write_prog_to_stream_3_0_i16);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n                    io.write_string(\"true.\\n\")\n                else\n                    io.write_string(\"No solution.\\n\")\n                ).\n        ", 150);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i17);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("query", 5);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i18);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i19);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :-\n", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i20);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__interactive_query__write_line_directive_2_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i21);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_term_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i50);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_sv(1),2)) {
		MR_GOTO_LAB(mdb__interactive_query__write_prog_to_stream_3_0_i24);
	}
	MR_np_call_localret_ent(mdb__interactive_query__write_line_directive_2_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i25);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_term_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i50);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_np_call_localret_ent(term__vars_2_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i28);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = (MR_Word) MR_TAG_COMMON(0,0,2);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__remove_dups_2_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i30);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_r1 = (MR_Word) MR_string_const("\n            unsorted_aggregate(\n                (pred(res", 58);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i31);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i32);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("::out) is nondet :-\n            query", 37);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i33);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i34);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("),", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i35);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("(pred(res", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i36);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i37);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("::in, di, uo) is cc_multi -->\n            ", 42);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i38);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 4);
	MR_r3 = MR_tempr1;
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_COMMON(1,2);
	MR_tfield(0, MR_tempr1, 1) = (MR_Word) MR_ENTRY_AP(mdb__interactive_query__write_code_to_print_one_var_4_0);
	MR_tfield(0, MR_tempr1, 2) = (MR_Integer) 1;
	MR_tfield(0, MR_tempr1, 3) = MR_sv(4);
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_IO_CTOR_ADDR;
	MR_r4 = MR_sv(1);
	}
	MR_np_call_localret_ent(list__foldl_4_2,
		mdb__interactive_query__write_prog_to_stream_3_0_i40);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n                    io.write_string(\"true ;\n\"))\n                ),\n                io.write_string(\"fail.\n\"),\n                io.write_string(\"No (more) soluti" "ons.\n\").\n\n            :- type res", 193);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i41);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i42);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,42)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" ---> res", 9);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i43);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,43)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i44);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i45);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("\n            query", 18);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i46);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(4);
	MR_np_call_localret_ent(mdb__interactive_query__write_args_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i47);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,47)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" :- ", 4);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i48);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(mdb__interactive_query__write_line_directive_2_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i49);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,49)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(term_io__write_term_4_0,
		mdb__interactive_query__write_prog_to_stream_3_0_i50);
MR_def_label(mdb__interactive_query__write_prog_to_stream_3_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" .\n", 3);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__write_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__interactive_query_module5)
	MR_init_entry1(fn__mdb__interactive_query__grade_option_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__interactive_query__grade_option_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'grade_option'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__interactive_query__grade_option_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	GradeOpt;
#define	MR_PROC_LABEL	mercury__fn__mdb__interactive_query__grade_option_0_0
{
#line 523 "interactive_query.m"

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);
;}
#line 1324 "mdb.interactive_query.c"
	MR_r1 = (MR_Word) GradeOpt;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(string__append_list_2_0);
MR_decl_entry(io__call_system_4_0);
MR_decl_entry(io__print_3_0);

MR_BEGIN_MODULE(mdb__interactive_query_module6)
	MR_init_entry1(mdb__interactive_query__compile_file_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__compile_file_4_0);
	MR_init_label5(mdb__interactive_query__compile_file_4_0,11,12,14,16,18)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'compile_file'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__compile_file_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_String	GradeOpt;
#define	MR_PROC_LABEL	mercury__mdb__interactive_query__compile_file_4_0
{
#line 523 "interactive_query.m"

    MR_make_aligned_string(GradeOpt, (MR_String) MR_GRADE_OPT);
;}
#line 1365 "mdb.interactive_query.c"
	MR_tempr1 = (MR_Word) GradeOpt;
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = (MR_Word) MR_TAG_COMMON(1,4,1);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const(" --grade ", 9);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_r1;
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("--allow-undefined ", 18);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = (MR_Word) MR_string_const("--output-compile-error-lines 10000 ", 35);
	MR_tfield(1, MR_tempr2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("--no-warn-simple-code --no-warn-det-decls-too-lax ", 50);
	MR_tfield(1, MR_tempr1, 1) = MR_tempr2;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = (MR_Word) MR_string_const("mmc --infer-all --no-verbose-make -O0 --no-c-optimize ", 54);
	MR_tfield(1, MR_r1, 1) = MR_tempr1;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__interactive_query__compile_file_4_0_i11);
MR_def_label(mdb__interactive_query__compile_file_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__call_system_4_0,
		mdb__interactive_query__compile_file_4_0_i12);
MR_def_label(mdb__interactive_query__compile_file_4_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__interactive_query__compile_file_4_0_i14);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Error: unable to invoke the compiler.\n", 38);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__compile_file_4_0_i18);
MR_def_label(mdb__interactive_query__compile_file_4_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r4 = MR_tfield(0, MR_r1, 0);
	if (MR_INT_NE(MR_r4,0)) {
		MR_GOTO_LAB(mdb__interactive_query__compile_file_4_0_i16);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(1);
MR_def_label(mdb__interactive_query__compile_file_4_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Compilation error(s) occurred.\n", 31);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__compile_file_4_0_i18);
MR_def_label(mdb__interactive_query__compile_file_4_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__interactive_query_module7)
	MR_init_entry1(fn__mdb__interactive_query__inst_cast_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__mdb__interactive_query__inst_cast_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'inst_cast'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__mdb__interactive_query__inst_cast_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__fn__mdb__interactive_query__inst_cast_1_0
	X = MR_r1;
{
#line 645 "interactive_query.m"

    Y = X
;}
#line 1454 "mdb.interactive_query.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__dl__open_6_0);
MR_decl_entry(mdb__dl__mercury_sym_5_0);
MR_declare_entry(mercury__do_call_closure_1);
MR_decl_entry(mdb__dl__close_4_0);

MR_BEGIN_MODULE(mdb__interactive_query_module8)
	MR_init_entry1(mdb__interactive_query__dynamically_load_and_run_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__dynamically_load_and_run_2_0);
	MR_init_label10(mdb__interactive_query__dynamically_load_and_run_2_0,2,5,4,11,14,15,13,17,18,21)
	MR_init_label2(mdb__interactive_query__dynamically_load_and_run_2_0,22,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'dynamically_load_and_run'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__dynamically_load_and_run_2_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("./libmdb_query.so", 17);
	MR_r2 = (MR_Integer) 0;
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(mdb__dl__open_6_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i2);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__interactive_query__dynamically_load_and_run_2_0_i4);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("dlopen failed: ", 15);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i5);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i22);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_tfield(0, MR_r1, 0);
	MR_r1 = (MR_Word) MR_TAG_COMMON(0,7,0);
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_TAG_COMMON(0,6,0);
	MR_np_call_localret_ent(mdb__dl__mercury_sym_5_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i11);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__interactive_query__dynamically_load_and_run_2_0_i13);
	}
	MR_sv(2) = MR_tfield(1, MR_r1, 0);
	MR_sv(3) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Word) MR_string_const("dlsym failed: ", 14);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i14);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i15);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__nl_2_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i17);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(0, MR_r1, 0);
	{
	MR_Word	X;
	MR_Word	Y;
#define	MR_PROC_LABEL	mercury__mdb__interactive_query__dynamically_load_and_run_2_0
	X = MR_tempr1;
{
#line 645 "interactive_query.m"

    Y = X
;}
#line 1553 "mdb.interactive_query.c"
	MR_r1 = Y;
#undef	MR_PROC_LABEL
	}
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(mdb__interactive_query__dynamically_load_and_run_2_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_1),
		mercury__mdb__interactive_query__dynamically_load_and_run_2_0_i17);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__dl__close_4_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i18);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__dynamically_load_and_run_2_0_i3);
	}
	MR_sv(1) = MR_tfield(1, MR_r1, 0);
	MR_sv(2) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(2);
	MR_r2 = (MR_Word) MR_string_const("dlclose failed: ", 16);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i21);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_r2 = MR_sv(1);
	MR_np_call_localret_ent(io__print_3_0,
		mdb__interactive_query__dynamically_load_and_run_2_0_i22);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__nl_2_0);
MR_def_label(mdb__interactive_query__dynamically_load_and_run_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__get_environment_var_4_0);
MR_decl_entry(io__set_environment_var_4_0);
MR_decl_entry(io__open_output_4_0);
MR_decl_entry(io__progname_4_0);
MR_decl_entry(io__error_message_2_0);
MR_decl_entry(io__stdout_stream_3_0);
MR_decl_entry(io__set_output_stream_4_0);
MR_decl_entry(io__close_output_3_0);

MR_BEGIN_MODULE(mdb__interactive_query_module9)
	MR_init_entry1(mdb__interactive_query__run_query_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__run_query_4_0);
	MR_init_label10(mdb__interactive_query__run_query_4_0,2,4,6,7,10,11,19,20,9,8)
	MR_init_label7(mdb__interactive_query__run_query_4_0,22,23,24,25,26,27,30)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'run_query'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__run_query_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("MERCURY_OPTIONS", 15);
	MR_np_call_localret_ent(io__get_environment_var_4_0,
		mdb__interactive_query__run_query_4_0_i2);
MR_def_label(mdb__interactive_query__run_query_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__run_query_4_0_i4);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("Unable to unset MERCURY_OPTIONS environment variable", 52);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__print_3_0);
MR_def_label(mdb__interactive_query__run_query_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("MERCURY_OPTIONS", 15);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_np_call_localret_ent(io__set_environment_var_4_0,
		mdb__interactive_query__run_query_4_0_i6);
MR_def_label(mdb__interactive_query__run_query_4_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdb_query.m", 11);
	MR_np_call_localret_ent(io__open_output_4_0,
		mdb__interactive_query__run_query_4_0_i7);
MR_def_label(mdb__interactive_query__run_query_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,1)) {
		MR_GOTO_LAB(mdb__interactive_query__run_query_4_0_i9);
	}
	MR_sv(4) = MR_tfield(1, MR_r1, 0);
	MR_r1 = (MR_Word) MR_string_const("interactive", 11);
	MR_np_call_localret_ent(io__progname_4_0,
		mdb__interactive_query__run_query_4_0_i10);
MR_def_label(mdb__interactive_query__run_query_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(4);
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__error_message_2_0,
		mdb__interactive_query__run_query_4_0_i11);
MR_def_label(mdb__interactive_query__run_query_4_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,4,2);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("\' for output:\n\t", 15);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const("mdb_query.m", 11);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_string_const("error opening file \140", 20);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_string_const(": ", 2);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_sv(4);
	MR_tfield(1, MR_r1, 1) = MR_r2;
	}
	MR_np_call_localret_ent(string__append_list_2_0,
		mdb__interactive_query__run_query_4_0_i19);
MR_def_label(mdb__interactive_query__run_query_4_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__run_query_4_0_i20);
MR_def_label(mdb__interactive_query__run_query_4_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(io__stdout_stream_3_0,
		mdb__interactive_query__run_query_4_0_i8);
MR_def_label(mdb__interactive_query__run_query_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(0, MR_r1, 0);
MR_def_label(mdb__interactive_query__run_query_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r1;
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__interactive_query__run_query_4_0_i22);
MR_def_label(mdb__interactive_query__run_query_4_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(2);
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdb__interactive_query__write_prog_to_stream_3_0,
		mdb__interactive_query__run_query_4_0_i23);
MR_def_label(mdb__interactive_query__run_query_4_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(io__set_output_stream_4_0,
		mdb__interactive_query__run_query_4_0_i24);
MR_def_label(mdb__interactive_query__run_query_4_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_np_call_localret_ent(io__close_output_3_0,
		mdb__interactive_query__run_query_4_0_i25);
MR_def_label(mdb__interactive_query__run_query_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_np_call_localret_ent(mdb__interactive_query__compile_file_4_0,
		mdb__interactive_query__run_query_4_0_i26);
MR_def_label(mdb__interactive_query__run_query_4_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_r1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__run_query_4_0_i27);
	}
	MR_np_call_localret_ent(mdb__interactive_query__dynamically_load_and_run_2_0,
		mdb__interactive_query__run_query_4_0_i27);
MR_def_label(mdb__interactive_query__run_query_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_call_localret_ent(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,
		mdb__interactive_query__run_query_4_0_i30);
MR_def_label(mdb__interactive_query__run_query_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("MERCURY_OPTIONS", 15);
	MR_r2 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(io__set_environment_var_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(mdb__util__trace_getline_6_0);
MR_decl_entry(io__nl_3_0);
MR_decl_entry(parser__read_term_from_string_4_0);

MR_BEGIN_MODULE(mdb__interactive_query_module10)
	MR_init_entry1(mdb__interactive_query__query_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__query_7_0);
	MR_init_label10(mdb__interactive_query__query_7_0,30,16,3,2,5,7,10,11,12,9)
	MR_init_label1(mdb__interactive_query__query_7_0,14)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'query'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__interactive_query__query_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(mdb__interactive_query__query_7_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,1)) {
		MR_GOTO_LAB(mdb__interactive_query__query_7_0_i3);
	}
MR_def_label(mdb__interactive_query__query_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("\?- ", 3);
	MR_GOTO_LAB(mdb__interactive_query__query_7_0_i2);
MR_def_label(mdb__interactive_query__query_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,2)) {
		MR_GOTO_LAB(mdb__interactive_query__query_7_0_i16);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_r2 = MR_r4;
	MR_r3 = MR_r5;
	MR_r1 = (MR_Word) MR_string_const("run <-- ", 8);
MR_def_label(mdb__interactive_query__query_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_sv(5) = MR_r3;
	MR_np_call_localret_ent(mdb__util__trace_getline_6_0,
		mdb__interactive_query__query_7_0_i5);
MR_def_label(mdb__interactive_query__query_7_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_7_0_i7);
	}
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(io__nl_3_0);
MR_def_label(mdb__interactive_query__query_7_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_r1,2)) {
		MR_GOTO_LAB(mdb__interactive_query__query_7_0_i9);
	}
	MR_r1 = MR_tfield(2, MR_r1, 0);
	MR_np_call_localret_ent(io__error_message_2_0,
		mdb__interactive_query__query_7_0_i10);
MR_def_label(mdb__interactive_query__query_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__interactive_query__query_7_0_i11);
MR_def_label(mdb__interactive_query__query_7_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__nl_3_0,
		mdb__interactive_query__query_7_0_i12);
MR_def_label(mdb__interactive_query__query_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(mdb__interactive_query__query_7_0_i30);
MR_def_label(mdb__interactive_query__query_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = (MR_Word) MR_string_const("", 0);
	MR_r3 = MR_tfield(1, MR_tempr1, 0);
	}
	MR_np_call_localret_ent(parser__read_term_from_string_4_0,
		mdb__interactive_query__query_7_0_i14);
MR_def_label(mdb__interactive_query__query_7_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(mdb__interactive_query__query_2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__print_4_0);
MR_decl_entry(list__append_3_1);
MR_decl_entry(io__flush_output_3_0);

MR_BEGIN_MODULE(mdb__interactive_query_module11)
	MR_init_entry1(mdb__interactive_query__query_2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__query_2_8_0);
	MR_init_label10(mdb__interactive_query__query_2_8_0,140,6,5,9,24,25,15,30,32,33)
	MR_init_label4(mdb__interactive_query__query_2_8_0,35,28,38,40)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'query_2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__query_2_8_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i140);
	}
	MR_r1 = MR_r5;
	MR_np_tailcall_ent(io__nl_3_0);
MR_def_label(mdb__interactive_query__query_2_8_0,140)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
	if (MR_PTAG_TESTR(MR_r6,1)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i5);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_sv(5) = MR_tempr1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_tfield(1, MR_r6, 0);
	}
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__interactive_query__query_2_8_0_i6);
MR_def_label(mdb__interactive_query__query_2_8_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__nl_3_0,
		mdb__interactive_query__query_2_8_0_i40);
MR_def_label(mdb__interactive_query__query_2_8_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r6;
	MR_tempr1 = MR_tfield(2, MR_tempr4, 1);
	MR_sv(7) = MR_tempr1;
	MR_sv(6) = MR_tfield(2, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i9);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i9);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i9);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i9);
	}
	MR_r1 = MR_r5;
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__nl_3_0);
	}
MR_def_label(mdb__interactive_query__query_2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("options", 7)) != 0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i15);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(4) = MR_r4;
	MR_tempr4 = MR_r5;
	MR_sv(5) = MR_tempr4;
	MR_sv(3) = MR_tfield(2, MR_tempr1, 0);
	MR_sv(6) = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_tempr4;
	MR_r3 = (MR_Word) MR_string_const("Compilation options: ", 21);
	}
	MR_np_call_localret_ent(io__print_4_0,
		mdb__interactive_query__query_2_8_0_i24);
MR_def_label(mdb__interactive_query__query_2_8_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__interactive_query__query_2_8_0_i25);
MR_def_label(mdb__interactive_query__query_2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__nl_3_0,
		mdb__interactive_query__query_2_8_0_i40);
MR_def_label(mdb__interactive_query__query_2_8_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_sv(3) = MR_r3;
	MR_sv(4) = MR_r4;
	MR_sv(5) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(mdb__interactive_query__term_to_list_2_0,
		mdb__interactive_query__query_2_8_0_i30);
MR_def_label(mdb__interactive_query__query_2_8_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__interactive_query__query_2_8_0_i28);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__interactive_query__query_2_8_0_i32);
MR_def_label(mdb__interactive_query__query_2_8_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(2) = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(":- import_module ", 17);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__interactive_query__query_2_8_0_i33);
MR_def_label(mdb__interactive_query__query_2_8_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(2);
	MR_r4 = (MR_Word) MR_string_const(", ", 2);
	MR_r5 = (MR_Word) MR_TAG_COMMON(0,3,1);
	MR_np_call_localret_ent(io__write_list_6_0,
		mdb__interactive_query__query_2_8_0_i35);
MR_def_label(mdb__interactive_query__query_2_8_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_r2 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__write_string_4_0,
		mdb__interactive_query__query_2_8_0_i40);
MR_def_label(mdb__interactive_query__query_2_8_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_sv(3);
	MR_tempr2 = MR_sv(4);
	MR_tempr3 = MR_sv(5);
	MR_r1 = MR_tempr3;
	}
	MR_np_call_localret_ent(io__flush_output_3_0,
		mdb__interactive_query__query_2_8_0_i38);
MR_def_label(mdb__interactive_query__query_2_8_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_r2, 0) = MR_sv(1);
	MR_tfield(0, MR_r2, 1) = MR_sv(2);
	MR_tfield(0, MR_r2, 2) = MR_sv(7);
	MR_tfield(0, MR_r2, 3) = MR_sv(6);
	MR_r1 = MR_sv(3);
	MR_np_call_localret_ent(mdb__interactive_query__run_query_4_0,
		mdb__interactive_query__query_2_8_0_i40);
MR_def_label(mdb__interactive_query__query_2_8_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(mdb__interactive_query__query_7_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__write_4_0);

MR_BEGIN_MODULE(mdb__interactive_query_module12)
	MR_init_entry1(mdb__interactive_query__send_term_to_socket_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__send_term_to_socket_4_0);
	MR_init_label2(mdb__interactive_query__send_term_to_socket_4_0,2,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'send_term_to_socket'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__send_term_to_socket_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(2);
	MR_sv(2) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__interactive_query, interactive_query_response);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__interactive_query__send_term_to_socket_4_0_i2);
MR_def_label(mdb__interactive_query__send_term_to_socket_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__interactive_query__send_term_to_socket_4_0_i3);
MR_def_label(mdb__interactive_query__send_term_to_socket_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_succip_word = MR_sv(2);
	MR_decr_sp(2);
	MR_np_tailcall_ent(io__flush_output_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__set_input_stream_4_0);
MR_decl_entry(term_io__read_term_3_0);

MR_BEGIN_MODULE(mdb__interactive_query_module13)
	MR_init_entry1(mdb__interactive_query__query_external_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__query_external_7_0);
	MR_init_label10(mdb__interactive_query__query_external_7_0,141,2,3,4,6,12,13,10,21,22)
	MR_init_label7(mdb__interactive_query__query_external_7_0,16,24,37,39,35,44,45)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'query_external'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__mdb__interactive_query__query_external_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(mdb__interactive_query__query_external_7_0,141)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__interactive_query__query_external_7_0_i2);
MR_def_label(mdb__interactive_query__query_external_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_np_call_localret_ent(term_io__read_term_3_0,
		mdb__interactive_query__query_external_7_0_i3);
MR_def_label(mdb__interactive_query__query_external_7_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(6);
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(io__set_input_stream_4_0,
		mdb__interactive_query__query_external_7_0_i4);
MR_def_label(mdb__interactive_query__query_external_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(6),0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i6);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__interactive_query, interactive_query_response);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 2);
	MR_np_call_localret_ent(io__write_4_0,
		mdb__interactive_query__query_external_7_0_i21);
MR_def_label(mdb__interactive_query__query_external_7_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(6),1)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i10);
	}
	MR_tag_alloc_heap(MR_r3, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r3, 0) = MR_tfield(1, MR_sv(6), 0);
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__interactive_query, interactive_query_response);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(io__write_4_0,
		mdb__interactive_query__query_external_7_0_i12);
MR_def_label(mdb__interactive_query__query_external_7_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__interactive_query__query_external_7_0_i13);
MR_def_label(mdb__interactive_query__query_external_7_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_np_call_localret_ent(io__flush_output_3_0,
		mdb__interactive_query__query_external_7_0_i45);
MR_def_label(mdb__interactive_query__query_external_7_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_sv(6);
	MR_tempr1 = MR_tfield(2, MR_tempr4, 1);
	MR_sv(7) = MR_tempr1;
	MR_r5 = MR_tfield(2, MR_tempr4, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i16);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i16);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i16);
	}
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr3, MR_string_const("quit", 4)) != 0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i16);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(mdb__interactive_query, interactive_query_response);
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_tbmkword(0, 1);
	}
	MR_np_call_localret_ent(io__write_4_0,
		mdb__interactive_query__query_external_7_0_i21);
MR_def_label(mdb__interactive_query__query_external_7_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(5);
	MR_r3 = (MR_Word) MR_string_const(".\n", 2);
	MR_np_call_localret_ent(io__print_4_0,
		mdb__interactive_query__query_external_7_0_i22);
MR_def_label(mdb__interactive_query__query_external_7_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_decr_sp(8);
	MR_np_tailcall_ent(io__flush_output_3_0);
MR_def_label(mdb__interactive_query__query_external_7_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(7),0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_sv(7);
	MR_tempr1 = MR_tfield(0, MR_tempr3, 0);
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	MR_tempr2 = MR_tfield(0, MR_tempr1, 0);
	if ((strcmp((char *) (MR_Word *) MR_tempr2, MR_string_const("options", 7)) != 0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr3, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 0);
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	MR_tempr1 = MR_tfield(0, MR_tempr2, 0);
	if (MR_PTAG_TESTR(MR_tempr1,2)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i24);
	}
	MR_sv(3) = MR_tfield(2, MR_tempr1, 0);
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__interactive_query__send_term_to_socket_4_0,
		mdb__interactive_query__query_external_7_0_i45);
MR_def_label(mdb__interactive_query__query_external_7_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r5;
	MR_r1 = MR_sv(7);
	MR_np_call_localret_ent(mdb__interactive_query__term_to_list_2_0,
		mdb__interactive_query__query_external_7_0_i37);
MR_def_label(mdb__interactive_query__query_external_7_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i35);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_tempr1;
	}
	MR_np_call_localret_ent(list__append_3_1,
		mdb__interactive_query__query_external_7_0_i39);
MR_def_label(mdb__interactive_query__query_external_7_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_r1;
	MR_sv(2) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = MR_sv(5);
	}
	MR_np_call_localret_ent(mdb__interactive_query__send_term_to_socket_4_0,
		mdb__interactive_query__query_external_7_0_i45);
MR_def_label(mdb__interactive_query__query_external_7_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(6);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 4);
	MR_tfield(0, MR_tempr2, 0) = MR_sv(1);
	MR_tfield(0, MR_tempr2, 1) = MR_sv(2);
	MR_tfield(0, MR_tempr2, 2) = MR_sv(7);
	MR_tfield(0, MR_tempr2, 3) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tempr2;
	}
	MR_np_call_localret_ent(mdb__interactive_query__run_query_4_0,
		mdb__interactive_query__query_external_7_0_i44);
MR_def_label(mdb__interactive_query__query_external_7_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_sv(5);
	MR_np_call_localret_ent(mdb__interactive_query__send_term_to_socket_4_0,
		mdb__interactive_query__query_external_7_0_i45);
MR_def_label(mdb__interactive_query__query_external_7_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(1);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_sv(4);
	MR_r5 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(mdb__interactive_query__query_external_7_0_i141);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(term_io__write_variable_4_0);

MR_BEGIN_MODULE(mdb__interactive_query_module14)
	MR_init_entry1(mdb__interactive_query__write_code_to_print_one_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__write_code_to_print_one_var_4_0);
	MR_init_label4(mdb__interactive_query__write_code_to_print_one_var_4_0,2,3,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_code_to_print_one_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__write_code_to_print_one_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_r1 = (MR_Word) MR_string_const("io.write_string(\"", 17);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_code_to_print_one_var_4_0_i2);
MR_def_label(mdb__interactive_query__write_code_to_print_one_var_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_variable_4_0,
		mdb__interactive_query__write_code_to_print_one_var_4_0_i3);
MR_def_label(mdb__interactive_query__write_code_to_print_one_var_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const(" = \"), io.write_cc(", 19);
	MR_np_call_localret_ent(io__write_string_3_0,
		mdb__interactive_query__write_code_to_print_one_var_4_0_i4);
MR_def_label(mdb__interactive_query__write_code_to_print_one_var_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_np_call_localret_ent(term_io__write_variable_4_0,
		mdb__interactive_query__write_code_to_print_one_var_4_0_i5);
MR_def_label(mdb__interactive_query__write_code_to_print_one_var_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = (MR_Word) MR_string_const("), io.write_string(\", \"), ", 26);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(io__print_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__interactive_query_module15)
	MR_init_entry1(mdb__interactive_query__write_one_var_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__mdb__interactive_query__write_one_var_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'write_one_var'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(mdb__interactive_query__write_one_var_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r3 = MR_tempr1;
	MR_np_tailcall_ent(term_io__write_variable_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(mdb__interactive_query_module16)
	MR_init_entry1(__Unify___mdb__interactive_query__imports_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__interactive_query__imports_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__interactive_query__imports_0_0);
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

MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(mdb__interactive_query_module17)
	MR_init_entry1(__Compare___mdb__interactive_query__imports_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__interactive_query__imports_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__interactive_query__imports_0_0);
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


MR_BEGIN_MODULE(mdb__interactive_query_module18)
	MR_init_entry1(__Unify___mdb__interactive_query__interactive_query_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__interactive_query__interactive_query_response_0_0);
	MR_init_label6(__Unify___mdb__interactive_query__interactive_query_response_0_0,5,6,7,23,8,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__interactive_query__interactive_query_response_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__interactive_query_response_0_0_i23);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,2)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__interactive_query_response_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___mdb__interactive_query__interactive_query_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__interactive_query_response_0_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__interactive_query__interactive_query_response_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__interactive_query_response_0_0_i7);
	}
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__interactive_query__interactive_query_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__interactive_query_response_0_0_i8);
	}
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__interactive_query_response_0_0_i1);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___mdb__interactive_query__interactive_query_response_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__interactive_query__interactive_query_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__interactive_query_response_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___mdb__interactive_query__interactive_query_response_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_string_3_0);

MR_BEGIN_MODULE(mdb__interactive_query_module19)
	MR_init_entry1(__Compare___mdb__interactive_query__interactive_query_response_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__interactive_query__interactive_query_response_0_0);
	MR_init_label10(__Compare___mdb__interactive_query__interactive_query_response_0_0,7,8,9,5,13,14,15,11,19,20)
	MR_init_label10(__Compare___mdb__interactive_query__interactive_query_response_0_0,76,21,17,25,26,27,23,31,59,32)
	MR_init_label3(__Compare___mdb__interactive_query__interactive_query_response_0_0,33,61,34)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__interactive_query__interactive_query_response_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i76);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i7);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp(3);
	MR_proceed();
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i8);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i11);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i13);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i14);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i61);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(1),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i17);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i19);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i20);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i21);
	}
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i59);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i23);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i25);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i26);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i27);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i59);
	}
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i31);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i32);
	}
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,1)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i33);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__interactive_query_response_0_0_i34);
	}
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___mdb__interactive_query__interactive_query_response_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_unify_pred_2_0);

MR_BEGIN_MODULE(mdb__interactive_query_module20)
	MR_init_entry1(__Unify___mdb__interactive_query__io_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__interactive_query__io_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__interactive_query__io_pred_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_unify_pred_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_pred_3_0);

MR_BEGIN_MODULE(mdb__interactive_query_module21)
	MR_init_entry1(__Compare___mdb__interactive_query__io_pred_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__interactive_query__io_pred_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__interactive_query__io_pred_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_pred_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__interactive_query_module22)
	MR_init_entry1(__Unify___mdb__interactive_query__options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__interactive_query__options_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__interactive_query__options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__interactive_query_module23)
	MR_init_entry1(__Compare___mdb__interactive_query__options_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__interactive_query__options_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__interactive_query__options_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_string_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(__Unify___term__term_1_0);
MR_decl_entry(__Unify___varset__varset_1_0);

MR_BEGIN_MODULE(mdb__interactive_query_module24)
	MR_init_entry1(__Unify___mdb__interactive_query__prog_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__interactive_query__prog_0_0);
	MR_init_label4(__Unify___mdb__interactive_query__prog_0_0,4,6,10,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Unify___mdb__interactive_query__prog_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__prog_0_0_i10);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr4 = MR_tfield(0, MR_tempr2, 0);
	if ((MR_tempr3 != MR_tempr4)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__prog_0_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_tfield(0, MR_tempr3, 2);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_tfield(0, MR_tempr3, 3);
	MR_sv(3) = MR_tfield(0, MR_tempr4, 2);
	MR_sv(4) = MR_tfield(0, MR_tempr4, 3);
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_tfield(0, MR_tempr3, 1);
	MR_r3 = MR_tfield(0, MR_tempr4, 1);
	}
	MR_np_call_localret_ent(__Unify___list__list_1_0,
		__Unify___mdb__interactive_query__prog_0_0_i4);
MR_def_label(__Unify___mdb__interactive_query__prog_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__prog_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_call_localret_ent(__Unify___term__term_1_0,
		__Unify___mdb__interactive_query__prog_0_0_i6);
MR_def_label(__Unify___mdb__interactive_query__prog_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___mdb__interactive_query__prog_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(__Unify___varset__varset_1_0);
MR_def_label(__Unify___mdb__interactive_query__prog_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___mdb__interactive_query__prog_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___term__term_1_0);
MR_decl_entry(__Compare___varset__varset_1_0);

MR_BEGIN_MODULE(mdb__interactive_query_module25)
	MR_init_entry1(__Compare___mdb__interactive_query__prog_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__interactive_query__prog_0_0);
	MR_init_label6(__Compare___mdb__interactive_query__prog_0_0,3,2,5,9,13,37)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(__Compare___mdb__interactive_query__prog_0_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__prog_0_0_i3);
	}
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___mdb__interactive_query__prog_0_0_i2);
MR_def_label(__Compare___mdb__interactive_query__prog_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___mdb__interactive_query__prog_0_0,2)
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
		__Compare___mdb__interactive_query__prog_0_0_i5);
MR_def_label(__Compare___mdb__interactive_query__prog_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__prog_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_STRING_CTOR_ADDR;
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(4);
	MR_np_call_localret_ent(__Compare___list__list_1_0,
		__Compare___mdb__interactive_query__prog_0_0_i9);
MR_def_label(__Compare___mdb__interactive_query__prog_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__prog_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(5);
	MR_np_call_localret_ent(__Compare___term__term_1_0,
		__Compare___mdb__interactive_query__prog_0_0_i13);
MR_def_label(__Compare___mdb__interactive_query__prog_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___mdb__interactive_query__prog_0_0_i37);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(term, generic);
	MR_r2 = MR_sv(3);
	MR_r3 = MR_sv(6);
	MR_succip_word = MR_sv(7);
	MR_decr_sp(7);
	MR_np_tailcall_ent(__Compare___varset__varset_1_0);
MR_def_label(__Compare___mdb__interactive_query__prog_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__interactive_query_module26)
	MR_init_entry1(__Unify___mdb__interactive_query__query_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___mdb__interactive_query__query_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___mdb__interactive_query__query_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(mdb__interactive_query_module27)
	MR_init_entry1(__Compare___mdb__interactive_query__query_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___mdb__interactive_query__query_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___mdb__interactive_query__query_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(io__remove_file_4_0);

MR_BEGIN_MODULE(mdb__interactive_query_module28)
	MR_init_entry1(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0);
	MR_init_label9(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,2,3,4,5,6,7,8,9,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__cleanup_query__[1]_0'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	MR_r1 = (MR_Word) MR_string_const("mdb_query.m", 11);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i2);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdb_query.d", 11);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i3);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Mercury/ds/mdb_query.d", 22);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i4);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdb_query.c", 11);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i5);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Mercury/cs/mdb_query.c", 22);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i6);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdb_query.c_date", 16);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i7);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Mercury/c_dates/mdb_query.c_date", 32);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i8);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("mdb_query.o", 11);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i9);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("Mercury/os/mdb_query.o", 22);
	MR_np_call_localret_ent(io__remove_file_4_0,
		f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0_i10);
MR_def_label(f_109_100_98_95_95_105_110_116_101_114_97_99_116_105_118_101_95_113_117_101_114_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_110_117_112_95_113_117_101_114_121_95_95_91_49_93_95_48_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("libmdb_query.so", 15);
	MR_succip_word = MR_sv(1);
	MR_decr_sp(1);
	MR_np_tailcall_ent(io__remove_file_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__mdb__interactive_query__query_external_7_0);

void
ML_query_external(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5);

void
ML_query_external(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__interactive_query__query_external_7_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = (MR_Word) Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__interactive_query__query_external_7_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


MR_declare_entry(mercury__mdb__interactive_query__query_7_0);

void
ML_query(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5);

void
ML_query(MR_Word Mercury__argument1, MR_Word Mercury__argument2, MR_String Mercury__argument3, MR_Word Mercury__argument4, MR_Word Mercury__argument5)
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
	MR_setup_callback(MR_ENTRY(mercury__mdb__interactive_query__query_7_0));
#endif
	MR_restore_registers();
	MR_r1 = Mercury__argument1;
	MR_r2 = Mercury__argument2;
	MR_r3 = (MR_Word) Mercury__argument3;
	MR_r4 = Mercury__argument4;
	MR_r5 = Mercury__argument5;
	MR_save_transient_registers();
	(void) MR_call_engine(MR_ENTRY(mercury__mdb__interactive_query__query_7_0), MR_FALSE);
	MR_restore_transient_registers();
#if MR_DEEP_PROFILING
	MR_current_call_site_dynamic = saved_cur_csd;
	MR_current_callback_site = saved_cur_callback;
#endif
#if MR_THREAD_SAFE
	if (must_finalize_engine) {
		 MR_finalize_thread_engine();
	}
#endif
	MR_restore_regs_from_mem(c_regs);
}


static void mercury__mdb__interactive_query_maybe_bunch_0(void)
{
	mdb__interactive_query_module0();
	mdb__interactive_query_module1();
	mdb__interactive_query_module2();
	mdb__interactive_query_module3();
	mdb__interactive_query_module4();
	mdb__interactive_query_module5();
	mdb__interactive_query_module6();
	mdb__interactive_query_module7();
	mdb__interactive_query_module8();
	mdb__interactive_query_module9();
	mdb__interactive_query_module10();
	mdb__interactive_query_module11();
	mdb__interactive_query_module12();
	mdb__interactive_query_module13();
	mdb__interactive_query_module14();
	mdb__interactive_query_module15();
	mdb__interactive_query_module16();
	mdb__interactive_query_module17();
	mdb__interactive_query_module18();
	mdb__interactive_query_module19();
	mdb__interactive_query_module20();
	mdb__interactive_query_module21();
	mdb__interactive_query_module22();
	mdb__interactive_query_module23();
	mdb__interactive_query_module24();
	mdb__interactive_query_module25();
	mdb__interactive_query_module26();
	mdb__interactive_query_module27();
	mdb__interactive_query_module28();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__mdb__interactive_query__init(void);
void mercury__mdb__interactive_query__init_type_tables(void);
void mercury__mdb__interactive_query__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__mdb__interactive_query__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__mdb__interactive_query__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__mdb__interactive_query__init_threadscope_string_table(void);
#endif

void mercury__mdb__interactive_query__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__mdb__interactive_query_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__interactive_query__type_ctor_info_imports_0,
		mdb__interactive_query__imports_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__interactive_query__type_ctor_info_interactive_query_response_0,
		mdb__interactive_query__interactive_query_response_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__interactive_query__type_ctor_info_io_pred_0,
		mdb__interactive_query__io_pred_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__interactive_query__type_ctor_info_options_0,
		mdb__interactive_query__options_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__interactive_query__type_ctor_info_prog_0,
		mdb__interactive_query__prog_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_mdb__interactive_query__type_ctor_info_query_type_0,
		mdb__interactive_query__query_type_0_0);
	mercury__mdb__interactive_query__init_debugger();
}

void mercury__mdb__interactive_query__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__interactive_query__type_ctor_info_imports_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__interactive_query__type_ctor_info_interactive_query_response_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__interactive_query__type_ctor_info_io_pred_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__interactive_query__type_ctor_info_options_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__interactive_query__type_ctor_info_prog_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_mdb__interactive_query__type_ctor_info_query_type_0);
	}
}


void mercury__mdb__interactive_query__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__mdb__interactive_query__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__mdb__interactive_query);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__mdb__interactive_query__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__mdb__interactive_query__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
