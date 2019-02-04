/*
** Automatically generated from `builtin_ops.m'
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
INIT mercury__backend_libs__builtin_ops__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "../library/io.int2"
#include "io.mh"

#line 27 "backend_libs.builtin_ops.c"
#line 144 "../library/io.int2"
#include "string.mh"

#line 31 "backend_libs.builtin_ops.c"
#line 31 "../library/array.int2"
#include "array.mh"

#line 35 "backend_libs.builtin_ops.c"
#line 33 "../mdbcomp/mdbcomp.rtti_access.int2"
#include "mdbcomp.rtti_access.mh"

#line 39 "backend_libs.builtin_ops.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 43 "backend_libs.builtin_ops.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 47 "backend_libs.builtin_ops.c"
#line 48 "backend_libs.builtin_ops.c"
#include "backend_libs.builtin_ops.mh"

#line 51 "backend_libs.builtin_ops.c"
#line 52 "backend_libs.builtin_ops.c"
#ifndef BACKEND_LIBS__BUILTIN_OPS_DECL_GUARD
#define BACKEND_LIBS__BUILTIN_OPS_DECL_GUARD

#line 56 "backend_libs.builtin_ops.c"
#line 57 "backend_libs.builtin_ops.c"

#endif
#line 60 "backend_libs.builtin_ops.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

struct mercury_type_0 {
	MR_Integer f1;
};
MR_STATIC_LINKAGE const struct mercury_type_0 mercury_common_0[];

struct mercury_type_2 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_1 {
	MR_String f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_0[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_1[];

MR_STATIC_LINKAGE const struct mercury_type_1 mercury_vector_common_1_2[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_backend_libs__builtin_ops__type_ctor_info_array_elem_type_0,
	mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0,
	mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0,
	mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_code_1,
	mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
	mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0;
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0, 7,9,10,14,19,29,37,45,53,61)
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0, 69,77,85,93,99,106,113,120,127,135)
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0, 139,137,149,163,167,165,175,189,4,201)
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0, 203,204,211,217,223,229,235,237,247,249)
MR_decl_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0, 257,197,264,274,427,276,277,282,285,288)
MR_decl_label6(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0, 292,296,303,310,317,271)
MR_decl_label3(backend_libs__builtin_ops__translate_builtin_5_0, 2,3,1)
MR_decl_label3(__Unify___backend_libs__builtin_ops__array_elem_type_0_0, 14,5,1)
MR_decl_label3(__Unify___backend_libs__builtin_ops__binary_op_0_0, 46,48,1)
MR_decl_label8(__Unify___backend_libs__builtin_ops__simple_code_1_0, 5,7,15,17,21,11,29,1)
MR_decl_label10(__Unify___backend_libs__builtin_ops__simple_expr_1_0, 76,17,15,13,28,5,7,9,30,1)
MR_decl_label10(__Index___backend_libs__builtin_ops__binary_op_0_0, 3,4,5,6,7,8,9,10,11,12)
MR_decl_label10(__Index___backend_libs__builtin_ops__binary_op_0_0, 13,14,15,16,17,18,19,20,21,22)
MR_decl_label10(__Index___backend_libs__builtin_ops__binary_op_0_0, 23,24,25,26,27,28,29,30,31,32)
MR_decl_label9(__Index___backend_libs__builtin_ops__binary_op_0_0, 33,34,35,36,37,38,39,40,41)
MR_decl_label5(__Compare___backend_libs__builtin_ops__array_elem_type_0_0, 3,2,7,5,10)
MR_decl_label6(__Compare___backend_libs__builtin_ops__binary_op_0_0, 4,5,6,7,50,8)
MR_decl_label10(__Compare___backend_libs__builtin_ops__simple_code_1_0, 3,5,9,32,36,38,48,53,51,21)
MR_decl_label3(__Compare___backend_libs__builtin_ops__simple_code_1_0, 27,24,96)
MR_decl_label10(__Compare___backend_libs__builtin_ops__simple_expr_1_0, 150,3,54,59,65,41,45,123,28,31)
MR_decl_label8(__Compare___backend_libs__builtin_ops__simple_expr_1_0, 88,75,5,98,7,9,13,160)
MR_def_extern_entry(backend_libs__builtin_ops__translate_builtin_5_0)
MR_def_extern_entry(__Unify___backend_libs__builtin_ops__array_elem_type_0_0)
MR_def_extern_entry(__Compare___backend_libs__builtin_ops__array_elem_type_0_0)
MR_def_extern_entry(__Unify___backend_libs__builtin_ops__binary_op_0_0)
MR_def_extern_entry(__Index___backend_libs__builtin_ops__binary_op_0_0)
MR_def_extern_entry(__Compare___backend_libs__builtin_ops__binary_op_0_0)
MR_def_extern_entry(__Unify___backend_libs__builtin_ops__scalar_array_elem_type_0_0)
MR_def_extern_entry(__Compare___backend_libs__builtin_ops__scalar_array_elem_type_0_0)
MR_def_extern_entry(__Unify___backend_libs__builtin_ops__simple_code_1_0)
MR_def_extern_entry(__Compare___backend_libs__builtin_ops__simple_code_1_0)
MR_def_extern_entry(__Unify___backend_libs__builtin_ops__simple_expr_1_0)
MR_def_extern_entry(__Compare___backend_libs__builtin_ops__simple_expr_1_0)
MR_def_extern_entry(__Unify___backend_libs__builtin_ops__unary_op_0_0)
MR_def_extern_entry(__Compare___backend_libs__builtin_ops__unary_op_0_0)
MR_decl_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0)

static const struct mercury_type_0 mercury_common_0[1] =
{
{
0
},
};

static const MR_Float mercury_float_const_0pt0000000000000000 = 0.0000000000000000;
static const struct mercury_type_2 mercury_common_2[2] =
{
{
(MR_Word *) &mercury_float_const_0pt0000000000000000
},
{
MR_tbmkword(0, 0)
},
};

static const struct mercury_type_1 mercury_vector_common_1_0[64] =
{
{
(MR_String) (MR_Integer) 0,
-2
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
MR_string_const("xor", 3),
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
MR_string_const("unchecked_right_shift", 21),
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
MR_string_const("/\\", 2),
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
MR_string_const("unchecked_rem", 13),
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
MR_string_const("unchecked_quotient", 18),
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
MR_string_const("\\", 1),
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
MR_string_const("times", 5),
2
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
MR_string_const("minus", 5),
-1
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
MR_string_const("\\/", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("unchecked_left_shift", 20),
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
MR_string_const("<", 1),
-1
},
{
MR_string_const("plus", 4),
-1
},
{
MR_string_const(">", 1),
-1
},
};

static const struct mercury_type_1 mercury_vector_common_1_1[16] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const(">=", 2),
-1
},
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("=<", 2),
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
MR_string_const("unchecked_quotient", 18),
-1
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

static const struct mercury_type_1 mercury_vector_common_1_2[32] =
{
{
(MR_String) (MR_Integer) 0,
-2
},
{
MR_string_const("store_at_ref_impure", 19),
-1
},
{
MR_string_const("builtin_compound_eq", 19),
-1
},
{
MR_string_const("builtin_compound_lt", 19),
-1
},
{
MR_string_const("builtin_int_lt", 14),
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
MR_string_const("unsafe_type_cast", 16),
2
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
MR_string_const("trace_get_io_state", 18),
3
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
MR_string_const("builtin_int_gt", 14),
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
MR_string_const("store_at_ref", 12),
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
MR_string_const("trace_set_io_state", 18),
-1
},
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_array_elem_type_0_0[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0 = {
	"array_elem_scalar",
	1,
	0,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_array_elem_type_0_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_list__type_ctor_info_list_1;

static const MR_FA_TypeInfo_Struct1 mercury_data_list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_TypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_array_elem_type_0_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__ti_list_1backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1 = {
	"array_elem_struct",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_array_elem_type_0_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1

};

const MR_DuPtagLayout mercury_data_backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_array_elem_type_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_name_ordered_array_elem_type_0[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_0,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_array_elem_type_0_1
};

const MR_Integer mercury_data_backend_libs__builtin_ops__functor_number_map_array_elem_type_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_array_elem_type_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__builtin_ops__array_elem_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__builtin_ops__array_elem_type_0_0)),
	"backend_libs.builtin_ops",
	"array_elem_type",
	{ (void *)mercury_data_backend_libs__builtin_ops__du_name_ordered_array_elem_type_0 },
	{ (void *)mercury_data_backend_libs__builtin_ops__du_ptag_ordered_array_elem_type_0 },
	2,
	4,
	mercury_data_backend_libs__builtin_ops__functor_number_map_array_elem_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_0 = {
	"int_add",
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

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_1 = {
	"int_sub",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	1,
	1,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_2 = {
	"int_mul",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	2,
	2,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_3 = {
	"int_div",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	3,
	3,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_4 = {
	"int_mod",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	4,
	4,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_5 = {
	"unchecked_left_shift",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	5,
	5,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_6 = {
	"unchecked_right_shift",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	6,
	6,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_7 = {
	"bitwise_and",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	7,
	7,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_8 = {
	"bitwise_or",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	8,
	8,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_9 = {
	"bitwise_xor",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	9,
	9,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_10 = {
	"logical_and",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	10,
	10,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_11 = {
	"logical_or",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	11,
	11,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_12 = {
	"eq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	12,
	12,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_13 = {
	"ne",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	13,
	13,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_14 = {
	"body",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	14,
	14,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_array_elem_type_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_binary_op_0_15[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_array_elem_type_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_15 = {
	"array_index",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	15,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_binary_op_0_15,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_16 = {
	"str_eq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	15,
	16,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_17 = {
	"str_ne",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	16,
	17,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_18 = {
	"str_lt",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	17,
	18,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_19 = {
	"str_gt",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	18,
	19,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_20 = {
	"str_le",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	19,
	20,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_21 = {
	"str_ge",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	20,
	21,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_22 = {
	"int_lt",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	21,
	22,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_23 = {
	"int_gt",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	22,
	23,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_24 = {
	"int_le",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	23,
	24,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_25 = {
	"int_ge",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	24,
	25,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_26 = {
	"unsigned_le",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	25,
	26,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_27 = {
	"float_plus",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	26,
	27,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_28 = {
	"float_minus",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	27,
	28,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_29 = {
	"float_times",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	28,
	29,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_30 = {
	"float_divide",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	29,
	30,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_31 = {
	"float_eq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	30,
	31,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_32 = {
	"float_ne",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	31,
	32,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_33 = {
	"float_lt",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	32,
	33,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_34 = {
	"float_gt",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	33,
	34,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_35 = {
	"float_le",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	34,
	35,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_36 = {
	"float_ge",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	35,
	36,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_37 = {
	"compound_eq",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	36,
	37,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_38 = {
	"compound_lt",
	0,
	0,
	MR_SECTAG_LOCAL,
	0,
	37,
	38,
	(MR_PseudoTypeInfo *) NULL,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_24,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_25,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_26,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_27,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_28,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_29,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_38

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_15

};

const MR_DuPtagLayout mercury_data_backend_libs__builtin_ops__du_ptag_ordered_binary_op_0[] = {
	{ 38, MR_SECTAG_LOCAL,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_binary_op_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_binary_op_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_name_ordered_binary_op_0[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_15,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_7,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_8,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_9,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_14,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_37,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_38,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_12,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_30,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_31,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_36,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_34,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_35,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_33,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_28,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_32,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_27,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_29,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_0,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_3,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_25,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_23,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_24,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_22,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_4,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_2,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_1,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_10,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_11,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_13,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_16,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_21,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_19,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_20,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_18,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_17,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_5,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_6,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_binary_op_0_26
};

const MR_Integer mercury_data_backend_libs__builtin_ops__functor_number_map_binary_op_0[] = {
	18,
	26,
	25,
	19,
	24,
	36,
	37,
	1,
	2,
	3,
	27,
	28,
	7,
	29,
	4,
	0,
	30,
	35,
	34,
	32,
	33,
	31,
	23,
	21,
	22,
	20,
	38,
	16,
	14,
	17,
	8,
	9,
	15,
	13,
	11,
	12,
	10,
	5,
	6 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__builtin_ops__binary_op_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__builtin_ops__binary_op_0_0)),
	"backend_libs.builtin_ops",
	"binary_op",
	{ (void *)mercury_data_backend_libs__builtin_ops__du_name_ordered_binary_op_0 },
	{ (void *)mercury_data_backend_libs__builtin_ops__du_ptag_ordered_binary_op_0 },
	39,
	4,
	mercury_data_backend_libs__builtin_ops__functor_number_map_binary_op_0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0 = {
	"scalar_elem_string",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1 = {
	"scalar_elem_int",
	1
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2 = {
	"scalar_elem_generic",
	2
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0[] = {
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0[] = {
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_2,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_1,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_scalar_array_elem_type_0_0
};

const MR_Integer mercury_data_backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0[] = {
	2,
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__builtin_ops__scalar_array_elem_type_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__builtin_ops__scalar_array_elem_type_0_0)),
	"backend_libs.builtin_ops",
	"scalar_array_elem_type",
	{ (void *)mercury_data_backend_libs__builtin_ops__enum_name_ordered_scalar_array_elem_type_0 },
	{ (void *)mercury_data_backend_libs__builtin_ops__enum_value_ordered_scalar_array_elem_type_0 },
	3,
	4,
	mercury_data_backend_libs__builtin_ops__functor_number_map_scalar_array_elem_type_0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1 = {
	&mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_0[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_0 = {
	"assign",
	2,
	3,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_1 = {
	"ref_assign",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_1,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_2 = {
	"test",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_2,
	NULL,
	NULL
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury_data_list__pti_list_1__pseudo_1 = {
	&mercury_data_list__type_ctor_info_list_1,
{	(MR_PseudoTypeInfo) 1
}};

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_3 = {
	"noop",
	1,
	1,
	MR_SECTAG_NONE,
	3,
	-1,
	3,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_code_1_3,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_0

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_1

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_2

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_3

};

const MR_DuPtagLayout mercury_data_backend_libs__builtin_ops__du_ptag_ordered_simple_code_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_2 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_code_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_name_ordered_simple_code_1[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_0,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_3,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_1,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_code_1_2
};

const MR_Integer mercury_data_backend_libs__builtin_ops__functor_number_map_simple_code_1[] = {
	0,
	2,
	3,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_code_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__builtin_ops__simple_code_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0)),
	"backend_libs.builtin_ops",
	"simple_code",
	{ (void *)mercury_data_backend_libs__builtin_ops__du_name_ordered_simple_code_1 },
	{ (void *)mercury_data_backend_libs__builtin_ops__du_ptag_ordered_simple_code_1 },
	4,
	4,
	mercury_data_backend_libs__builtin_ops__functor_number_map_simple_code_1
};

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0 = {
	"leaf",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_0,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_1[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1 = {
	"int_const",
	1,
	0,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_1,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_float_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_2[] = {
	(MR_PseudoTypeInfo) &mercury_data_builtin__type_ctor_info_float_0
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2 = {
	"float_const",
	1,
	0,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_2,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_3[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3 = {
	"unary",
	2,
	2,
	MR_SECTAG_REMOTE,
	3,
	0,
	3,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_3,
	NULL,
	NULL
};
extern const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0;

const MR_PseudoTypeInfo mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_4[] = {
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1,
	(MR_PseudoTypeInfo) &mercury_data_backend_libs__builtin_ops__pti_simple_expr_1__pseudo_1
};

static const MR_DuFunctorDesc mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4 = {
	"binary",
	3,
	6,
	MR_SECTAG_REMOTE,
	3,
	1,
	4,
	(MR_PseudoTypeInfo *) mercury_data_backend_libs__builtin_ops__field_types_simple_expr_1_4,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4

};

const MR_DuPtagLayout mercury_data_backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_2 },
	{ 2, MR_SECTAG_REMOTE,
	mercury_data_backend_libs__builtin_ops__du_stag_ordered_simple_expr_1_3 }

};

const MR_DuFunctorDescPtr mercury_data_backend_libs__builtin_ops__du_name_ordered_simple_expr_1[] = {
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_4,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_2,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_1,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_0,
	&mercury_data_backend_libs__builtin_ops__du_functor_desc_simple_expr_1_3
};

const MR_Integer mercury_data_backend_libs__builtin_ops__functor_number_map_simple_expr_1[] = {
	3,
	2,
	1,
	4,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_expr_1 = {
	1,
	13,
	4,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__builtin_ops__simple_expr_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0)),
	"backend_libs.builtin_ops",
	"simple_expr",
	{ (void *)mercury_data_backend_libs__builtin_ops__du_name_ordered_simple_expr_1 },
	{ (void *)mercury_data_backend_libs__builtin_ops__du_ptag_ordered_simple_expr_1 },
	5,
	4,
	mercury_data_backend_libs__builtin_ops__functor_number_map_simple_expr_1
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0 = {
	"mktag",
	0
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1 = {
	"tag",
	1
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2 = {
	"unmktag",
	2
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3 = {
	"strip_tag",
	3
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4 = {
	"mkbody",
	4
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5 = {
	"unmkbody",
	5
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6 = {
	"hash_string",
	6
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7 = {
	"bitwise_complement",
	7
};

static const MR_EnumFunctorDesc mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8 = {
	"logical_not",
	8
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__builtin_ops__enum_value_ordered_unary_op_0[] = {
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8
};

const MR_EnumFunctorDescPtr mercury_data_backend_libs__builtin_ops__enum_name_ordered_unary_op_0[] = {
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_7,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_6,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_8,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_4,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_0,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_3,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_1,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_5,
	&mercury_data_backend_libs__builtin_ops__enum_functor_desc_unary_op_0_2
};

const MR_Integer mercury_data_backend_libs__builtin_ops__functor_number_map_unary_op_0[] = {
	4,
	6,
	8,
	5,
	3,
	7,
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___backend_libs__builtin_ops__unary_op_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___backend_libs__builtin_ops__unary_op_0_0)),
	"backend_libs.builtin_ops",
	"unary_op",
	{ (void *)mercury_data_backend_libs__builtin_ops__enum_name_ordered_unary_op_0 },
	{ (void *)mercury_data_backend_libs__builtin_ops__enum_value_ordered_unary_op_0 },
	9,
	4,
	mercury_data_backend_libs__builtin_ops__functor_number_map_unary_op_0
};



MR_decl_entry(hlds__hlds_pred__proc_id_to_int_2_0);
MR_decl_entry(mdbcomp__prim_data__is_std_lib_module_name_2_0);

MR_BEGIN_MODULE(backend_libs__builtin_ops_module0)
	MR_init_entry1(backend_libs__builtin_ops__translate_builtin_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__backend_libs__builtin_ops__translate_builtin_5_0);
	MR_init_label3(backend_libs__builtin_ops__translate_builtin_5_0,2,3,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'translate_builtin'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__backend_libs__builtin_ops__translate_builtin_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r5;
	MR_r1 = MR_r4;
	MR_np_call_localret_ent(hlds__hlds_pred__proc_id_to_int_2_0,
		backend_libs__builtin_ops__translate_builtin_5_0_i2);
MR_def_label(backend_libs__builtin_ops__translate_builtin_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_r1;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(mdbcomp__prim_data__is_std_lib_module_name_2_0,
		backend_libs__builtin_ops__translate_builtin_5_0_i3);
MR_def_label(backend_libs__builtin_ops__translate_builtin_5_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(backend_libs__builtin_ops__translate_builtin_5_0_i1);
	}
	MR_r1 = MR_r2;
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0);
MR_def_label(backend_libs__builtin_ops__translate_builtin_5_0,1)
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

MR_decl_entry(__Unify___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__builtin_ops_module1)
	MR_init_entry1(__Unify___backend_libs__builtin_ops__array_elem_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__builtin_ops__array_elem_type_0_0);
	MR_init_label3(__Unify___backend_libs__builtin_ops__array_elem_type_0_0,14,5,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__builtin_ops__array_elem_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__array_elem_type_0_0_i14);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	if (MR_PTAG_TESTR(MR_tempr1,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__array_elem_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__array_elem_type_0_0_i1);
	}
	MR_r1 = MR_tfield(0, MR_tempr1, 0);
	MR_tempr3 = MR_tfield(0, MR_tempr2, 0);
	MR_r1 = (MR_r1 == MR_tempr3);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___backend_libs__builtin_ops__array_elem_type_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__builtin_ops__array_elem_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__array_elem_type_0_0_i1);
	}
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__builtin_ops, scalar_array_elem_type);
	MR_r2 = MR_tfield(1, MR_sv(1), 0);
	MR_r3 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___backend_libs__builtin_ops__array_elem_type_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_int_3_0);
MR_decl_entry(__Compare___list__list_1_0);

MR_BEGIN_MODULE(backend_libs__builtin_ops_module2)
	MR_init_entry1(__Compare___backend_libs__builtin_ops__array_elem_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__builtin_ops__array_elem_type_0_0);
	MR_init_label5(__Compare___backend_libs__builtin_ops__array_elem_type_0_0,3,2,7,5,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__builtin_ops__array_elem_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__array_elem_type_0_0_i3);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__array_elem_type_0_0_i2);
MR_def_label(__Compare___backend_libs__builtin_ops__array_elem_type_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__builtin_ops__array_elem_type_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__array_elem_type_0_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__array_elem_type_0_0_i7);
	}
	MR_r1 = MR_tfield(0, MR_sv(1), 0);
	MR_r2 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__builtin_ops__array_elem_type_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__builtin_ops__array_elem_type_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__array_elem_type_0_0_i10);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___backend_libs__builtin_ops__array_elem_type_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_CTOR0_ADDR(backend_libs__builtin_ops, scalar_array_elem_type);
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


MR_BEGIN_MODULE(backend_libs__builtin_ops_module3)
	MR_init_entry1(__Unify___backend_libs__builtin_ops__binary_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__builtin_ops__binary_op_0_0);
	MR_init_label3(__Unify___backend_libs__builtin_ops__binary_op_0_0,46,48,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__builtin_ops__binary_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__binary_op_0_0_i48);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r2;
	MR_sv(2) = MR_tempr2;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__binary_op_0_0_i46);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__binary_op_0_0_i1);
	}
	MR_r1 = MR_tfield(1, MR_tempr1, 0);
	MR_r2 = MR_tfield(1, MR_tempr2, 0);
	MR_decr_sp(3);
	MR_np_tailcall_ent(__Unify___backend_libs__builtin_ops__array_elem_type_0_0);
	}
MR_def_label(__Unify___backend_libs__builtin_ops__binary_op_0_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_sv(2) == MR_sv(1));
	MR_decr_sp_and_return(3);
MR_def_label(__Unify___backend_libs__builtin_ops__binary_op_0_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__builtin_ops__binary_op_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__builtin_ops_module4)
	MR_init_entry1(__Index___backend_libs__builtin_ops__binary_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Index___backend_libs__builtin_ops__binary_op_0_0);
	MR_init_label10(__Index___backend_libs__builtin_ops__binary_op_0_0,3,4,5,6,7,8,9,10,11,12)
	MR_init_label10(__Index___backend_libs__builtin_ops__binary_op_0_0,13,14,15,16,17,18,19,20,21,22)
	MR_init_label10(__Index___backend_libs__builtin_ops__binary_op_0_0,23,24,25,26,27,28,29,30,31,32)
	MR_init_label9(__Index___backend_libs__builtin_ops__binary_op_0_0,33,34,35,36,37,38,39,40,41)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Index__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Index___backend_libs__builtin_ops__binary_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r2 = MR_tag(MR_tempr1);
	if ((MR_r2 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Index___backend_libs__builtin_ops__binary_op_0_0_i3);
	}
	MR_COMPUTED_GOTO((MR_Unsigned) MR_unmkbody(MR_tempr1),
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i21) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i29) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i28) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i22) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i27) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i39) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i40) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i4) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i5) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i6) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i30) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i31) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i10) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i32) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i7) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i33) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i38) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i37) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i35) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i36) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i34) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i26) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i24) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i25) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i23) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i41) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i19) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i17) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i20) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i11) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i12) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i18) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i16) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i14) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i15) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i13) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i8) MR_AND
		MR_LABEL_AP(__Index___backend_libs__builtin_ops__binary_op_0_0_i9));
	}
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 15;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 7;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 8;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 9;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 14;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 37;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 38;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 12;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 30;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 31;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 36;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 34;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 35;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 33;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 28;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 32;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 27;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 29;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 3;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 25;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 23;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 24;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 22;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 4;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 10;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 11;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 13;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,33)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 16;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 21;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,35)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 19;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 20;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 18;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 17;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 5;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,40)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 6;
	MR_proceed();
MR_def_label(__Index___backend_libs__builtin_ops__binary_op_0_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 26;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__compare_error_0_0);

MR_BEGIN_MODULE(backend_libs__builtin_ops_module5)
	MR_init_entry1(__Compare___backend_libs__builtin_ops__binary_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__builtin_ops__binary_op_0_0);
	MR_init_label6(__Compare___backend_libs__builtin_ops__binary_op_0_0,4,5,6,7,50,8)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__builtin_ops__binary_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__binary_op_0_0_i50);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	MR_np_call_localret_ent(__Index___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___backend_libs__builtin_ops__binary_op_0_0_i4);
MR_def_label(__Compare___backend_libs__builtin_ops__binary_op_0_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_r1 = MR_sv(2);
	MR_np_call_localret_ent(__Index___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___backend_libs__builtin_ops__binary_op_0_0_i5);
MR_def_label(__Compare___backend_libs__builtin_ops__binary_op_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) >= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__binary_op_0_0_i6);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___backend_libs__builtin_ops__binary_op_0_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_sv(3) <= (MR_Integer) MR_r1)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__binary_op_0_0_i7);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___backend_libs__builtin_ops__binary_op_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(1);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__binary_op_0_0_i50);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__binary_op_0_0_i8);
	}
	MR_r1 = MR_tfield(1, MR_tempr2, 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___backend_libs__builtin_ops__array_elem_type_0_0);
	}
MR_def_label(__Compare___backend_libs__builtin_ops__binary_op_0_0,50)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___backend_libs__builtin_ops__binary_op_0_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(private_builtin__compare_error_0_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__builtin_ops_module6)
	MR_init_entry1(__Unify___backend_libs__builtin_ops__scalar_array_elem_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__builtin_ops__scalar_array_elem_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__builtin_ops__scalar_array_elem_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__builtin_ops_module7)
	MR_init_entry1(__Compare___backend_libs__builtin_ops__scalar_array_elem_type_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__builtin_ops__scalar_array_elem_type_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__builtin_ops__scalar_array_elem_type_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(backend_libs__builtin_ops_module8)
	MR_init_entry1(__Unify___backend_libs__builtin_ops__simple_code_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__builtin_ops__simple_code_1_0);
	MR_init_label8(__Unify___backend_libs__builtin_ops__simple_code_1_0,5,7,15,17,21,11,29,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__builtin_ops__simple_code_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_code_1_0_i29);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_code_1_0_i5) MR_AND
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_code_1_0_i15) MR_AND
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_code_1_0_i21) MR_AND
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_code_1_0_i11));
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_code_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(0, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(0, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr1, 0);
	MR_r3 = MR_tfield(0, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___backend_libs__builtin_ops__simple_code_1_0_i7);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_code_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___backend_libs__builtin_ops__simple_expr_1_0);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_code_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(1, MR_tempr1, 1);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(1, MR_tempr2, 1);
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr1, 0);
	MR_r3 = MR_tfield(1, MR_tempr2, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___backend_libs__builtin_ops__simple_code_1_0_i17);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_code_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_code_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___backend_libs__builtin_ops__simple_expr_1_0);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),3)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_code_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Unify___list__list_1_0);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___backend_libs__builtin_ops__simple_code_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(backend_libs__builtin_ops_module9)
	MR_init_entry1(__Compare___backend_libs__builtin_ops__simple_code_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__builtin_ops__simple_code_1_0);
	MR_init_label10(__Compare___backend_libs__builtin_ops__simple_code_1_0,3,5,9,32,36,38,48,53,51,21)
	MR_init_label3(__Compare___backend_libs__builtin_ops__simple_code_1_0,27,24,96)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__builtin_ops__simple_code_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_code_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i5) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i32) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i48) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i21));
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_code_1_0_i51);
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_tempr3, 0);
	MR_r3 = MR_tfield(0, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___backend_libs__builtin_ops__simple_code_1_0_i9);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_code_1_0_i96);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___backend_libs__builtin_ops__simple_expr_1_0);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,32)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i27) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i36) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i51) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i51));
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,36)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
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
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(1, MR_tempr3, 0);
	MR_r3 = MR_tfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___backend_libs__builtin_ops__simple_code_1_0_i38);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,38)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_code_1_0_i96);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i27) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i27) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i53) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_code_1_0_i51));
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(2, MR_sv(1), 0);
	MR_r3 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___backend_libs__builtin_ops__simple_expr_1_0);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_EQ(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_code_1_0_i24);
	}
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(3, MR_sv(1), 0);
	MR_r3 = MR_tfield(3, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(__Compare___list__list_1_0);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_code_1_0,96)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__builtin_ops_module10)
	MR_init_entry1(__Unify___backend_libs__builtin_ops__simple_expr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__builtin_ops__simple_expr_1_0);
	MR_init_label10(__Unify___backend_libs__builtin_ops__simple_expr_1_0,76,17,15,13,28,5,7,9,30,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__builtin_ops__simple_expr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,76)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i30);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(5) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i17) MR_AND
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i15) MR_AND
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i13) MR_AND
		MR_LABEL_AP(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i28));
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,17)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(1, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(1, MR_sv(2), 0);
	MR_r1 = (MR_tempr1 == MR_tempr2);
	MR_decr_sp_and_return(6);
	}
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_tfield(2, MR_sv(1), 0);
	MR_tempr2 = MR_tfield(2, MR_sv(2), 0);
	MR_r1 = (MR_word_to_float(MR_tempr1) == MR_word_to_float(MR_tempr2));
	MR_decr_sp_and_return(6);
	}
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i5);
	}
	if (MR_RTAGS_TESTR(MR_sv(2),3,0)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr3 = MR_sv(1);
	MR_tempr1 = MR_tfield(3, MR_tempr3, 1);
	MR_tempr4 = MR_sv(2);
	MR_tempr2 = MR_tfield(3, MR_tempr4, 1);
	if ((MR_tempr1 != MR_tempr2)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_tfield(3, MR_tempr3, 2);
	MR_r3 = MR_tfield(3, MR_tempr4, 2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i76);
	}
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_RTAGS_TESTR(MR_sv(2),3,1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_sv(1) = MR_tfield(3, MR_tempr1, 2);
	MR_tempr2 = MR_sv(2);
	MR_sv(2) = MR_tfield(3, MR_tempr1, 3);
	MR_sv(3) = MR_tfield(3, MR_tempr2, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr2, 3);
	MR_r1 = MR_tfield(3, MR_tempr1, 1);
	MR_r2 = MR_tfield(3, MR_tempr2, 1);
	}
	MR_np_call_localret_ent(__Unify___backend_libs__builtin_ops__binary_op_0_0,
		__Unify___backend_libs__builtin_ops__simple_expr_1_0_i7);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_np_localcall_lab(__Unify___backend_libs__builtin_ops__simple_expr_1_0,
		__Unify___backend_libs__builtin_ops__simple_expr_1_0_i9);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(4);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(__Unify___backend_libs__builtin_ops__simple_expr_1_0_i76);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(__Unify___backend_libs__builtin_ops__simple_expr_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__builtin_compare_float_3_0);

MR_BEGIN_MODULE(backend_libs__builtin_ops_module11)
	MR_init_entry1(__Compare___backend_libs__builtin_ops__simple_expr_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__builtin_ops__simple_expr_1_0);
	MR_init_label10(__Compare___backend_libs__builtin_ops__simple_expr_1_0,150,3,54,59,65,41,45,123,28,31)
	MR_init_label8(__Compare___backend_libs__builtin_ops__simple_expr_1_0,88,75,5,98,7,9,13,160)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__builtin_ops__simple_expr_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,150)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i3);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(1)),
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i54) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i41) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i28) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i88));
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,54)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i59) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i123) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i123) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i65));
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,59)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_tfield(0, MR_sv(1), 0);
	MR_r3 = MR_tfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,65)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i123);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,41)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i98) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i45) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i123) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i123));
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(1, MR_sv(1), 0);
	MR_r2 = MR_tfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,123)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_tag(MR_sv(2)),
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i98) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i98) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i31) MR_AND
		MR_LABEL_AP(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i123));
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,31)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_tfield(2, MR_sv(1), 0);
	MR_r2 = MR_tfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(6);
	MR_decr_sp(6);
	MR_np_tailcall_ent(private_builtin__builtin_compare_float_3_0);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,88)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tfield(3, MR_sv(1), 0),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i5);
	}
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i98);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i123);
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
	MR_np_call_localret_ent(private_builtin__builtin_compare_int_3_0,
		__Compare___backend_libs__builtin_ops__simple_expr_1_0_i75);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,75)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i160);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i150);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_tag(MR_sv(2)),3)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i98);
	}
	if (MR_INT_NE(MR_tfield(3, MR_sv(2), 0),0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i7);
	}
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,98)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(6);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_sv(5) = MR_tfield(3, MR_tempr5, 2);
	MR_sv(4) = MR_tfield(3, MR_tempr5, 3);
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
	MR_np_call_localret_ent(__Compare___backend_libs__builtin_ops__binary_op_0_0,
		__Compare___backend_libs__builtin_ops__simple_expr_1_0_i9);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i160);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_np_localcall_lab(__Compare___backend_libs__builtin_ops__simple_expr_1_0,
		__Compare___backend_libs__builtin_ops__simple_expr_1_0_i13);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i160);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(__Compare___backend_libs__builtin_ops__simple_expr_1_0_i150);
MR_def_label(__Compare___backend_libs__builtin_ops__simple_expr_1_0,160)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__builtin_ops_module12)
	MR_init_entry1(__Unify___backend_libs__builtin_ops__unary_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___backend_libs__builtin_ops__unary_op_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___backend_libs__builtin_ops__unary_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__builtin_ops_module13)
	MR_init_entry1(__Compare___backend_libs__builtin_ops__unary_op_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___backend_libs__builtin_ops__unary_op_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___backend_libs__builtin_ops__unary_op_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(private_builtin__builtin_compare_int_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(backend_libs__builtin_ops_module14)
	MR_init_entry1(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0);
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,7,9,10,14,19,29,37,45,53,61)
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,69,77,85,93,99,106,113,120,127,135)
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,139,137,149,163,167,165,175,189,4,201)
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,203,204,211,217,223,229,235,237,247,249)
	MR_init_label10(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,257,197,264,274,427,276,277,282,285,288)
	MR_init_label6(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,292,296,303,310,317,271)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__pred__builtin_translation__[1]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_r4,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("int", 3)) != 0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i4);
	}
	MR_r5 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TEST(MR_r5,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_r6 = (MR_hash_string((MR_String) MR_r2) & (MR_Integer) 63);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r6 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_1_0)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r2) == 0))) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i9);
	}
	MR_r6 = ((MR_Word *) &mercury_vector_common_1_0)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r6,0))
		continue;
	MR_r1 = MR_FALSE;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r6,
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i99) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i113) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i10) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i29) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i127) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i37) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i45) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i93) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i61) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i77) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i163) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i189) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i135) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i85) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i53) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i120) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i69) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i106));
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6, MR_tempr7;
	MR_tempr7 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr7, 1);
	MR_r6 = MR_tempr1;
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i14);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr7, 0);
	MR_tag_alloc_heap(MR_tempr5, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr5, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr5, 1) = (MR_Word) MR_tbmkword(0, 9);
	MR_tfield(3, MR_tempr5, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr5, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr6, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr6;
	MR_tfield(0, MR_tempr6, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr6, 1) = MR_tempr5;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i19);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r6, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 9);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_r5, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r5, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r6, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 9);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_r4, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 6);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,37)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 4);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 3);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,53)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 5);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,61)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,69)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,77)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,85)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 8);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,93)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 3);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_tempr2, 1) = (MR_Integer) 7;
	MR_tfield(3, MR_tempr2, 2) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,99)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 24);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,106)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 22);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,113)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 23);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,120)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 21);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,127)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 7);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,135)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i137);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r5;
	MR_r3 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i139);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(1,0,0);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,139)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r5, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,137)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i149);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_r4, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,149)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,163)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i165);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r5;
	MR_r3 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i167);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,167)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r5, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,165)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i175);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_r4, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,175)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,2)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 1);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,189)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 2);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("float", 5)) != 0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i197);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_r3 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TEST(MR_r3,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_r5 = (MR_hash_string((MR_String) MR_r2) & (MR_Integer) 15);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,201)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r5 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_1_1)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r2) == 0))) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i203);
	}
	MR_r5 = ((MR_Word *) &mercury_vector_common_1_1)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r5,0))
		continue;
	MR_r1 = MR_FALSE;
	MR_proceed();
	}
	break; } /* end while */
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,203)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r5,
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i211) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i223) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i204) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i247) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i257) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i235) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i229) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i217));
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,204)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 29);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,211)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 35);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,217)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 33);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,223)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 34);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,229)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 32);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,235)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r3;
	MR_r5 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i237);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr2, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr2, 1) = (MR_Word) MR_tbmkword(0, 27);
	MR_tfield(3, MR_tempr2, 2) = (MR_Word) MR_TAG_COMMON(2,2,0);
	MR_tfield(3, MR_tempr2, 3) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,237)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 27);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,247)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr3 = MR_r3;
	MR_r5 = MR_tfield(1, MR_tempr3, 1);
	if (MR_LTAGS_TESTR(MR_r5,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i249);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr2;
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr3, 0);
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,249)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5;
	MR_tempr5 = MR_r5;
	MR_tempr1 = MR_tfield(1, MR_tempr5, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr1, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r3, 0);
	MR_tag_alloc_heap(MR_tempr3, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr3, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr3, 1) = (MR_Word) MR_tbmkword(0, 26);
	MR_tfield(3, MR_tempr3, 2) = MR_tempr1;
	MR_tfield(3, MR_tempr3, 3) = MR_tempr2;
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr4;
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr5, 0);
	MR_tfield(0, MR_tempr4, 1) = MR_tempr3;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,257)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r3;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_r4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr4, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr4, 1) = (MR_Word) MR_tbmkword(0, 28);
	MR_tfield(3, MR_tempr4, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr4, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr4;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,197)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("builtin", 7)) != 0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i264);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("unsafe_promise_unique", 21)) != 0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,264)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("private_builtin", 15)) != 0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i271);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_r3 = (MR_hash_string((MR_String) MR_r2) & (MR_Integer) 31);
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,274)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = ((MR_Integer) MR_r3 * (MR_Integer) 2);
	MR_tempr2 = ((MR_Word *) &mercury_vector_common_1_2)[(MR_Integer) MR_tempr1];
	if (((MR_Integer) MR_tempr2 && (strcmp((char *) (MR_Word *) MR_tempr2, (char *) (MR_Word *) MR_r2) == 0))) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i276);
	}
	MR_r3 = ((MR_Word *) &mercury_vector_common_1_2)[((MR_Integer) MR_tempr1 + (MR_Integer) 1)];
	if (MR_INT_GE(MR_r3,0))
		continue;
	}
	break; } /* end while */
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,427)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,276)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_COMPUTED_GOTO((MR_Unsigned) MR_r3,
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i288) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i317) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i310) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i296) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i277) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i285) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i303) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i292) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427) MR_AND
		MR_LABEL_AP(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i282));
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,277)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tfield(0, MR_tempr3, 1) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,282)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tfield(1, MR_r4, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_r2 = (MR_Word) MR_TAG_COMMON(3,2,1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,285)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 1);
	MR_tfield(3, MR_r2, 0) = MR_tempr2;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,288)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,292)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr3, 1, (MR_Integer) 2);
	MR_r2 = MR_tempr3;
	MR_tfield(1, MR_tempr3, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tfield(1, MR_tempr3, 1) = MR_tfield(1, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,296)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 21);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,303)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 22);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,310)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 37);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,317)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr4 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr4, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TESTR(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr2, 0) = MR_tfield(1, MR_tempr4, 0);
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 36);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr2;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr3;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0,271)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((strcmp((char *) (MR_Word *) MR_r1, MR_string_const("term_size_prof_builtin", 22)) != 0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	if ((strcmp((char *) (MR_Word *) MR_r2, MR_string_const("term_size_plus", 14)) != 0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr6 = MR_r4;
	MR_tempr1 = MR_tfield(1, MR_tempr6, 1);
	if (MR_LTAGS_TEST(MR_tempr1,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr2 = MR_tfield(1, MR_tempr1, 1);
	if (MR_LTAGS_TEST(MR_tempr2,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tempr3 = MR_tfield(1, MR_tempr2, 1);
	if (MR_LTAGS_TESTR(MR_tempr3,0,0)) {
		MR_GOTO_LAB(f_98_97_99_107_101_110_100_95_108_105_98_115_95_95_98_117_105_108_116_105_110_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_116_105_110_95_116_114_97_110_115_108_97_116_105_111_110_95_95_91_49_93_95_48_5_0_i427);
	}
	MR_tag_alloc_heap(MR_tempr3, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr3, 0) = MR_tfield(1, MR_tempr6, 0);
	MR_tag_alloc_heap(MR_tempr4, 0, (MR_Integer) 1);
	MR_tfield(0, MR_tempr4, 0) = MR_tfield(1, MR_tempr1, 0);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 4);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 1;
	MR_tfield(3, MR_tempr1, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tfield(3, MR_tempr1, 2) = MR_tempr3;
	MR_tfield(3, MR_tempr1, 3) = MR_tempr4;
	MR_tag_alloc_heap(MR_tempr5, 0, (MR_Integer) 2);
	MR_r2 = MR_tempr5;
	MR_tfield(0, MR_tempr5, 0) = MR_tfield(1, MR_tempr2, 0);
	MR_tfield(0, MR_tempr5, 1) = MR_tempr1;
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__backend_libs__builtin_ops_maybe_bunch_0(void)
{
	backend_libs__builtin_ops_module0();
	backend_libs__builtin_ops_module1();
	backend_libs__builtin_ops_module2();
	backend_libs__builtin_ops_module3();
	backend_libs__builtin_ops_module4();
	backend_libs__builtin_ops_module5();
	backend_libs__builtin_ops_module6();
	backend_libs__builtin_ops_module7();
	backend_libs__builtin_ops_module8();
	backend_libs__builtin_ops_module9();
	backend_libs__builtin_ops_module10();
	backend_libs__builtin_ops_module11();
	backend_libs__builtin_ops_module12();
	backend_libs__builtin_ops_module13();
	backend_libs__builtin_ops_module14();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__backend_libs__builtin_ops__init(void);
void mercury__backend_libs__builtin_ops__init_type_tables(void);
void mercury__backend_libs__builtin_ops__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__backend_libs__builtin_ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__backend_libs__builtin_ops__init_complexity_procs(void);
#endif

void mercury__backend_libs__builtin_ops__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__backend_libs__builtin_ops_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__builtin_ops__type_ctor_info_array_elem_type_0,
		backend_libs__builtin_ops__array_elem_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0,
		backend_libs__builtin_ops__binary_op_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0,
		backend_libs__builtin_ops__scalar_array_elem_type_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_code_1,
		backend_libs__builtin_ops__simple_code_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_expr_1,
		backend_libs__builtin_ops__simple_expr_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0,
		backend_libs__builtin_ops__unary_op_0_0);
	mercury__backend_libs__builtin_ops__init_debugger();
}

void mercury__backend_libs__builtin_ops__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__builtin_ops__type_ctor_info_array_elem_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__builtin_ops__type_ctor_info_binary_op_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__builtin_ops__type_ctor_info_scalar_array_elem_type_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_code_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__builtin_ops__type_ctor_info_simple_expr_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_backend_libs__builtin_ops__type_ctor_info_unary_op_0);
	}
}


void mercury__backend_libs__builtin_ops__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__backend_libs__builtin_ops__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__backend_libs__builtin_ops);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__backend_libs__builtin_ops__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
