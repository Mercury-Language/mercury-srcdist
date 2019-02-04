/*
** Automatically generated from `deconstruct.m'
** by the Mercury compiler,
** version rotd-2007-09-21, configured for i686-pc-linux-gnu.
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
INIT mercury__deconstruct__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 24 "deconstruct.c"
#include "deconstruct.mh"

#line 27 "deconstruct.c"
#line 134 "io.int2"
#include "io.mh"

#line 31 "deconstruct.c"
#line 142 "io.int2"
#include "string.mh"

#line 35 "deconstruct.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 39 "deconstruct.c"
#line 28 "time.int2"
#include "time.mh"

#line 43 "deconstruct.c"
#line 31 "array.int2"
#include "array.mh"

#line 47 "deconstruct.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 51 "deconstruct.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 55 "deconstruct.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 59 "deconstruct.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 63 "deconstruct.c"
#line 148 "io.opt"
#include "dir.mh"

#line 67 "deconstruct.c"
#line 156 "io.opt"
#include "table_builtin.mh"

#line 71 "deconstruct.c"
#line 3 "float.opt"
#include "float.mh"

#line 75 "deconstruct.c"
#line 3 "math.opt"
#include "math.mh"

#line 79 "deconstruct.c"
#line 23 "store.opt"
#include "store.mh"

#line 83 "deconstruct.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 87 "deconstruct.c"
#line 4 "char.opt"
#include "char.mh"

#line 91 "deconstruct.c"
#line 4 "int.opt"
#include "int.mh"

#line 95 "deconstruct.c"
#line 3 "list.opt"
#include "list.mh"

#line 99 "deconstruct.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "deconstruct.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 107 "deconstruct.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 111 "deconstruct.c"
#line 112 "deconstruct.c"
#ifndef DECONSTRUCT_DECL_GUARD
#define DECONSTRUCT_DECL_GUARD

#line 116 "deconstruct.c"
#line 287 "deconstruct.m"


#include "mercury_deconstruct.h"
#include "mercury_deconstruct_macros.h"


#line 124 "deconstruct.c"
#line 125 "deconstruct.c"

#endif
#line 128 "deconstruct.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeCtorInfo_Struct
	mercury_data_deconstruct__type_ctor_info_noncanon_handling_0,
	mercury_data_deconstruct__type_ctor_info_maybe_arg_0;
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0, 1)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1, 1)
MR_decl_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0, 6,1)
MR_decl_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1, 6,1)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0, 2)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1, 2)
MR_decl_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2, 2,3)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0, 2)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1, 2)
MR_decl_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2, 2,3)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0, 1)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1, 1)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0, 1)
MR_decl_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1, 1)
MR_decl_label3(deconstruct__arg_4_2, 3,7,1)
MR_decl_label2(deconstruct__arg_cc_3_0, 2,3)
MR_decl_label2(deconstruct__deconstruct_5_3, 3,4)
MR_decl_label1(deconstruct__deconstruct_du_5_0, 23)
MR_decl_label1(deconstruct__deconstruct_du_5_1, 23)
MR_decl_label1(deconstruct__deconstruct_du_5_2, 23)
MR_decl_label5(deconstruct__deconstruct_du_2_5_2, 5,6,4,10,1)
MR_decl_label6(deconstruct__det_arg_4_3, 3,12,52,15,51,16)
MR_decl_label7(deconstruct__det_named_arg_4_3, 4,48,10,22,11,3,2)
MR_decl_label2(deconstruct__functor_4_3, 3,4)
MR_decl_label1(deconstruct__functor_number_3_0, 1)
MR_decl_label1(deconstruct__functor_number_cc_3_0, 1)
MR_decl_label1(deconstruct__limited_deconstruct_can_5_0, 1)
MR_decl_label1(deconstruct__limited_deconstruct_cc_3_0, 2)
MR_decl_label1(deconstruct__limited_deconstruct_dna_5_0, 1)
MR_decl_label3(deconstruct__named_arg_4_2, 3,7,1)
MR_decl_label2(deconstruct__named_arg_cc_3_0, 2,3)
MR_decl_label1(deconstruct__univ_arg_can_3_0, 1)
MR_decl_label1(deconstruct__univ_arg_dna_3_0, 1)
MR_decl_label1(deconstruct__univ_named_arg_can_3_0, 1)
MR_decl_label1(deconstruct__univ_named_arg_dna_3_0, 1)
MR_decl_label3(__Unify___deconstruct__maybe_arg_0_0, 12,5,1)
MR_decl_label4(__Compare___deconstruct__maybe_arg_0_0, 18,7,5,9)
MR_decl_label2(__Compare___deconstruct__noncanon_handling_0_0, 2,3)
MR_decl_static(deconstruct__functor_dna_3_0)
MR_decl_static(deconstruct__functor_can_3_0)
MR_decl_static(deconstruct__functor_idcc_3_0)
MR_def_extern_entry(deconstruct__functor_4_0)
MR_def_extern_entry(deconstruct__functor_4_1)
MR_def_extern_entry(deconstruct__functor_4_2)
MR_def_extern_entry(deconstruct__functor_4_3)
MR_def_extern_entry(deconstruct__functor_number_3_0)
MR_def_extern_entry(deconstruct__functor_number_cc_3_0)
MR_decl_static(deconstruct__univ_arg_dna_3_0)
MR_decl_static(deconstruct__univ_arg_can_3_0)
MR_def_extern_entry(deconstruct__arg_4_0)
MR_def_extern_entry(deconstruct__arg_4_1)
MR_def_extern_entry(deconstruct__arg_4_2)
MR_decl_static(deconstruct__univ_arg_idcc_5_0)
MR_def_extern_entry(deconstruct__arg_cc_3_0)
MR_decl_static(deconstruct__univ_named_arg_dna_3_0)
MR_decl_static(deconstruct__univ_named_arg_can_3_0)
MR_def_extern_entry(deconstruct__named_arg_4_0)
MR_def_extern_entry(deconstruct__named_arg_4_1)
MR_def_extern_entry(deconstruct__named_arg_4_2)
MR_decl_static(deconstruct__univ_named_arg_idcc_5_0)
MR_def_extern_entry(deconstruct__named_arg_cc_3_0)
MR_def_extern_entry(deconstruct__det_arg_4_0)
MR_def_extern_entry(deconstruct__det_arg_4_1)
MR_def_extern_entry(deconstruct__det_arg_4_2)
MR_def_extern_entry(deconstruct__det_arg_4_3)
MR_def_extern_entry(deconstruct__det_named_arg_4_0)
MR_def_extern_entry(deconstruct__det_named_arg_4_1)
MR_def_extern_entry(deconstruct__det_named_arg_4_2)
MR_def_extern_entry(deconstruct__det_named_arg_4_3)
MR_decl_static(deconstruct__deconstruct_dna_5_0)
MR_decl_static(deconstruct__deconstruct_can_4_0)
MR_decl_static(deconstruct__deconstruct_idcc_5_0)
MR_def_extern_entry(deconstruct__deconstruct_5_0)
MR_def_extern_entry(deconstruct__deconstruct_5_1)
MR_def_extern_entry(deconstruct__deconstruct_5_2)
MR_def_extern_entry(deconstruct__deconstruct_5_3)
MR_def_extern_entry(deconstruct__deconstruct_du_2_5_0)
MR_def_extern_entry(deconstruct__deconstruct_du_2_5_1)
MR_def_extern_entry(deconstruct__deconstruct_du_2_5_2)
MR_def_extern_entry(deconstruct__deconstruct_du_5_0)
MR_def_extern_entry(deconstruct__deconstruct_du_5_1)
MR_def_extern_entry(deconstruct__deconstruct_du_5_2)
MR_decl_static(deconstruct__limited_deconstruct_dna_5_0)
MR_decl_static(deconstruct__limited_deconstruct_can_5_0)
MR_def_extern_entry(deconstruct__limited_deconstruct_6_0)
MR_def_extern_entry(deconstruct__limited_deconstruct_6_1)
MR_def_extern_entry(deconstruct__limited_deconstruct_idcc_5_0)
MR_def_extern_entry(deconstruct__limited_deconstruct_cc_3_0)
MR_def_extern_entry(__Unify___deconstruct__maybe_arg_0_0)
MR_def_extern_entry(__Compare___deconstruct__maybe_arg_0_0)
MR_def_extern_entry(__Unify___deconstruct__noncanon_handling_0_0)
MR_def_extern_entry(__Compare___deconstruct__noncanon_handling_0_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_1)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_2)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_1)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_2)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0)
MR_def_extern_entry(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1)
MR_decl_static(fn__f_100_101_99_111_110_115_116_114_117_99_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const MR_EnumFunctorDesc mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_0 = {
	"do_not_allow",
	0
};

static const MR_EnumFunctorDesc mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_1 = {
	"canonicalize",
	1
};

static const MR_EnumFunctorDesc mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_2 = {
	"include_details_cc",
	2
};

const MR_EnumFunctorDescPtr mercury_data_deconstruct__enum_value_ordered_noncanon_handling_0[] = {
	&mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_0,
	&mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_1,
	&mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_2
};

const MR_EnumFunctorDescPtr mercury_data_deconstruct__enum_name_ordered_noncanon_handling_0[] = {
	&mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_1,
	&mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_0,
	&mercury_data_deconstruct__enum_functor_desc_noncanon_handling_0_2
};

const MR_Integer mercury_data_deconstruct__functor_number_map_noncanon_handling_0[] = {
	1,
	0,
	2 };
	
const MR_TypeCtorInfo_Struct mercury_data_deconstruct__type_ctor_info_noncanon_handling_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___deconstruct__noncanon_handling_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___deconstruct__noncanon_handling_0_0)),
	"deconstruct",
	"noncanon_handling",
	{ (void *)mercury_data_deconstruct__enum_name_ordered_noncanon_handling_0 },
	{ (void *)mercury_data_deconstruct__enum_value_ordered_noncanon_handling_0 },
	3,
	4,
	mercury_data_deconstruct__functor_number_map_noncanon_handling_0
};

const MR_PseudoTypeInfo mercury_data_deconstruct__field_types_maybe_arg_0_0[] = {
	(MR_PseudoTypeInfo) 513
};

const MR_DuExistLocn mercury_data_deconstruct__exist_locns_maybe_arg_0_0[] = {
	{ 0, -1 }
};

static const MR_DuExistInfo mercury_data_deconstruct__exist_info_maybe_arg_0_0 = {
	1,
	0,
	0,
	mercury_data_deconstruct__exist_locns_maybe_arg_0_0,
	
};

static const MR_DuFunctorDesc mercury_data_deconstruct__du_functor_desc_maybe_arg_0_0 = {
	"arg",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_deconstruct__field_types_maybe_arg_0_0,
	NULL,
	&mercury_data_deconstruct__exist_info_maybe_arg_0_0
};

static const MR_DuFunctorDesc mercury_data_deconstruct__du_functor_desc_maybe_arg_0_1 = {
	"no_arg",
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

const MR_DuFunctorDescPtr mercury_data_deconstruct__du_stag_ordered_maybe_arg_0_0[] = {
	&mercury_data_deconstruct__du_functor_desc_maybe_arg_0_1

};

const MR_DuFunctorDescPtr mercury_data_deconstruct__du_stag_ordered_maybe_arg_0_1[] = {
	&mercury_data_deconstruct__du_functor_desc_maybe_arg_0_0

};

const MR_DuPtagLayout mercury_data_deconstruct__du_ptag_ordered_maybe_arg_0[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_deconstruct__du_stag_ordered_maybe_arg_0_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_deconstruct__du_stag_ordered_maybe_arg_0_1 }

};

const MR_DuFunctorDescPtr mercury_data_deconstruct__du_name_ordered_maybe_arg_0[] = {
	&mercury_data_deconstruct__du_functor_desc_maybe_arg_0_0,
	&mercury_data_deconstruct__du_functor_desc_maybe_arg_0_1
};

const MR_Integer mercury_data_deconstruct__functor_number_map_maybe_arg_0[] = {
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_deconstruct__type_ctor_info_maybe_arg_0 = {
	0,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___deconstruct__maybe_arg_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___deconstruct__maybe_arg_0_0)),
	"deconstruct",
	"maybe_arg",
	{ (void *)mercury_data_deconstruct__du_name_ordered_maybe_arg_0 },
	{ (void *)mercury_data_deconstruct__du_ptag_ordered_maybe_arg_0 },
	2,
	4,
	mercury_data_deconstruct__functor_number_map_maybe_arg_0
};


MR_BEGIN_MODULE(deconstruct_module0)
	MR_init_entry1(deconstruct__functor_dna_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__functor_dna_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_dna_3_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 499 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 420 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module1)
	MR_init_entry1(deconstruct__functor_can_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__functor_can_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_can_3_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 516 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 466 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module2)
	MR_init_entry1(deconstruct__functor_idcc_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__functor_idcc_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_idcc_3_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 533 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 512 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module3)
	MR_init_entry1(deconstruct__functor_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__functor_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module4)
	MR_init_entry1(deconstruct__functor_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__functor_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module5)
	MR_init_entry1(deconstruct__functor_4_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__functor_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module6)
	MR_init_entry1(deconstruct__functor_4_3);
	MR_init_label2(deconstruct__functor_4_3,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__functor_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__functor_4_3_i3);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_4_3
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 499 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 616 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(deconstruct__functor_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(deconstruct__functor_4_3_i4);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_4_3
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 516 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 650 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(deconstruct__functor_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_4_3
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 533 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 681 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module7)
	MR_init_entry1(deconstruct__functor_number_3_0);
	MR_init_label1(deconstruct__functor_number_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__functor_number_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_number_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 562 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#undef  FUNCTOR_ARG
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  NONCANON

SUCCESS_INDICATOR = (FunctorNumber >= 0);
};}
#line 734 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__functor_number_3_0_i1);
	MR_r2 = FunctorNumber;
	MR_r3 = Arity;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__functor_number_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module8)
	MR_init_entry1(deconstruct__functor_number_cc_3_0);
	MR_init_label1(deconstruct__functor_number_cc_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__functor_number_cc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__deconstruct__functor_number_cc_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 582 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#undef  FUNCTOR_ARG
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  NONCANON

SUCCESS_INDICATOR = (FunctorNumber >= 0);
};}
#line 795 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__functor_number_cc_3_0_i1);
	MR_r2 = FunctorNumber;
	MR_r3 = Arity;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__functor_number_cc_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module9)
	MR_init_entry1(deconstruct__univ_arg_dna_3_0);
	MR_init_label1(deconstruct__univ_arg_dna_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__univ_arg_dna_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__univ_arg_dna_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r3;
{
#line 649 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 858 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__univ_arg_dna_3_0_i1);
	MR_r2 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__univ_arg_dna_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module10)
	MR_init_entry1(deconstruct__univ_arg_can_3_0);
	MR_init_label1(deconstruct__univ_arg_can_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__univ_arg_can_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__univ_arg_can_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r3;
{
#line 670 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 920 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__univ_arg_can_3_0_i1);
	MR_r2 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__univ_arg_can_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module11)
	MR_init_entry1(deconstruct__arg_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__arg_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module12)
	MR_init_entry1(deconstruct__arg_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__arg_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module13)
	MR_init_entry1(deconstruct__arg_4_2);
	MR_init_label3(deconstruct__arg_4_2,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__arg_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__arg_4_2_i3);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__arg_4_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r4;
{
#line 649 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 1023 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__arg_4_2_i1);
	MR_r4 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(deconstruct__arg_4_2_i7);
MR_def_label(deconstruct__arg_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__arg_4_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r4;
{
#line 670 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 1064 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__arg_4_2_i1);
	MR_r4 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(deconstruct__arg_4_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(deconstruct__arg_4_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module14)
	MR_init_entry1(deconstruct__univ_arg_idcc_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__univ_arg_idcc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__deconstruct__univ_arg_idcc_5_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r3;
	DummyUniv = MR_r4;
{
#line 692 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
};}
#line 1138 "deconstruct.c"
	MR_r1 = Argument;
	MR_r2 = Success;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
MR_decl_entry(univ__type_to_univ_2_0);

MR_BEGIN_MODULE(deconstruct_module15)
	MR_init_entry1(deconstruct__arg_cc_3_0);
	MR_init_label2(deconstruct__arg_cc_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__arg_cc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		deconstruct__arg_cc_3_0_i2);
MR_def_label(deconstruct__arg_cc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__deconstruct__arg_cc_3_0
	TypeInfo_for_T = MR_sv(3);
	Term = MR_sv(1);
	Index = MR_sv(2);
	DummyUniv = MR_r1;
{
#line 692 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
};}
#line 1213 "deconstruct.c"
	MR_tempr1 = Argument;
	MR_r3 = Success;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__arg_cc_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(deconstruct__arg_cc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module16)
	MR_init_entry1(deconstruct__univ_named_arg_dna_3_0);
	MR_init_label1(deconstruct__univ_named_arg_dna_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__univ_named_arg_dna_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__univ_named_arg_dna_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r3;
{
#line 718 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 1282 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__univ_named_arg_dna_3_0_i1);
	MR_r2 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__univ_named_arg_dna_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module17)
	MR_init_entry1(deconstruct__univ_named_arg_can_3_0);
	MR_init_label1(deconstruct__univ_named_arg_can_3_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__univ_named_arg_can_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__univ_named_arg_can_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r3;
{
#line 741 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 1346 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__univ_named_arg_can_3_0_i1);
	MR_r2 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__univ_named_arg_can_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module18)
	MR_init_entry1(deconstruct__named_arg_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__named_arg_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module19)
	MR_init_entry1(deconstruct__named_arg_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__named_arg_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module20)
	MR_init_entry1(deconstruct__named_arg_4_2);
	MR_init_label3(deconstruct__named_arg_4_2,3,7,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__named_arg_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__named_arg_4_2_i3);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__named_arg_4_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r4;
{
#line 718 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 1451 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__named_arg_4_2_i1);
	MR_r4 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(deconstruct__named_arg_4_2_i7);
MR_def_label(deconstruct__named_arg_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__named_arg_4_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r4;
{
#line 741 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 1494 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__named_arg_4_2_i1);
	MR_r4 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(deconstruct__named_arg_4_2,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r4;
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(deconstruct__named_arg_4_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module21)
	MR_init_entry1(deconstruct__univ_named_arg_idcc_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__univ_named_arg_idcc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__deconstruct__univ_named_arg_idcc_5_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r3;
	DummyUniv = MR_r4;
{
#line 765 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

};}
#line 1571 "deconstruct.c"
	MR_r1 = Argument;
	MR_r2 = Success;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module22)
	MR_init_entry1(deconstruct__named_arg_cc_3_0);
	MR_init_label2(deconstruct__named_arg_cc_3_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__named_arg_cc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		deconstruct__named_arg_cc_3_0_i2);
MR_def_label(deconstruct__named_arg_cc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__deconstruct__named_arg_cc_3_0
	TypeInfo_for_T = MR_sv(3);
	Term = MR_sv(1);
	Name = (MR_String) MR_sv(2);
	DummyUniv = MR_r1;
{
#line 765 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

};}
#line 1647 "deconstruct.c"
	MR_tempr1 = Argument;
	MR_r3 = Success;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_tempr1;
	if (MR_INT_EQ(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__named_arg_cc_3_0_i3);
	}
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r1, 0) = MR_ctfield(0, MR_tempr1, 0);
	MR_tfield(1, MR_r1, 1) = MR_ctfield(0, MR_tempr1, 1);
	MR_decr_sp_and_return(4);
	}
MR_def_label(deconstruct__named_arg_cc_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module23)
	MR_init_entry1(deconstruct__det_arg_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_arg_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module24)
	MR_init_entry1(deconstruct__det_arg_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_arg_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module25)
	MR_init_entry1(deconstruct__det_arg_4_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_arg_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(require__error_1_0);

MR_BEGIN_MODULE(deconstruct_module26)
	MR_init_entry1(deconstruct__det_arg_4_3);
	MR_init_label6(deconstruct__det_arg_4_3,3,12,52,15,51,16)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_arg_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__det_arg_4_3_i3);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__det_arg_4_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r4;
{
#line 649 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 1775 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__det_arg_4_3_i51);
	MR_r3 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(deconstruct__det_arg_4_3_i12);
MR_def_label(deconstruct__det_arg_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(deconstruct__det_arg_4_3_i52);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__det_arg_4_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r4;
{
#line 670 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 1819 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__det_arg_4_3_i51);
	MR_r3 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
MR_def_label(deconstruct__det_arg_4_3,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(deconstruct__det_arg_4_3,52)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		deconstruct__det_arg_4_3_i15);
MR_def_label(deconstruct__det_arg_4_3,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__deconstruct__det_arg_4_3
	TypeInfo_for_T = MR_sv(3);
	Term = MR_sv(1);
	Index = MR_sv(2);
	DummyUniv = MR_r1;
{
#line 692 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
};}
#line 1886 "deconstruct.c"
	MR_tempr1 = Argument;
	MR_r4 = Success;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(deconstruct__det_arg_4_3_i16);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(deconstruct__det_arg_4_3,51)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(deconstruct__det_arg_4_3,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_arg: argument number out of range", 37);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module27)
	MR_init_entry1(deconstruct__det_named_arg_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_named_arg_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module28)
	MR_init_entry1(deconstruct__det_named_arg_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_named_arg_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module29)
	MR_init_entry1(deconstruct__det_named_arg_4_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_named_arg_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module30)
	MR_init_entry1(deconstruct__det_named_arg_4_3);
	MR_init_label7(deconstruct__det_named_arg_4_3,4,48,10,22,11,3,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__det_named_arg_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i4);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__det_named_arg_4_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r4;
{
#line 718 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 2020 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i2);
	MR_r3 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i22);
MR_def_label(deconstruct__det_named_arg_4_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i48);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__deconstruct__det_named_arg_4_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r4;
{
#line 741 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 2068 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i2);
	MR_r3 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i22);
MR_def_label(deconstruct__det_named_arg_4_3,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		deconstruct__det_named_arg_4_3_i10);
MR_def_label(deconstruct__det_named_arg_4_3,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__deconstruct__det_named_arg_4_3
	TypeInfo_for_T = MR_sv(3);
	Term = MR_sv(1);
	Name = (MR_String) MR_sv(2);
	DummyUniv = MR_r1;
{
#line 765 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

};}
#line 2130 "deconstruct.c"
	MR_r3 = Argument;
	MR_r4 = Success;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i11);
	}
MR_def_label(deconstruct__det_named_arg_4_3,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_GOTO_LAB(deconstruct__det_named_arg_4_3_i3);
MR_def_label(deconstruct__det_named_arg_4_3,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_named_arg: no argument with that name", 41);
	MR_np_call_localret_ent(require__error_1_0,
		deconstruct__det_named_arg_4_3_i3);
MR_def_label(deconstruct__det_named_arg_4_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_ctfield(0, MR_r1, 1);
	MR_r1 = MR_ctfield(0, MR_r1, 0);
	MR_decr_sp_and_return(4);
MR_def_label(deconstruct__det_named_arg_4_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_named_arg: no argument with that name", 41);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module31)
	MR_init_entry1(deconstruct__deconstruct_dna_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__deconstruct_dna_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_dna_5_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 834 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2206 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = FunctorNumber;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module32)
	MR_init_entry1(deconstruct__deconstruct_can_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__deconstruct_can_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_can_4_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 859 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2262 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module33)
	MR_init_entry1(deconstruct__deconstruct_idcc_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__deconstruct_idcc_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_idcc_5_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 884 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2319 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = FunctorNumber;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module34)
	MR_init_entry1(deconstruct__deconstruct_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module35)
	MR_init_entry1(deconstruct__deconstruct_5_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module36)
	MR_init_entry1(deconstruct__deconstruct_5_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module37)
	MR_init_entry1(deconstruct__deconstruct_5_3);
	MR_init_label2(deconstruct__deconstruct_5_3,3,4)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__deconstruct_5_3_i3);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_5_3
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 834 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2435 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(deconstruct__deconstruct_5_3,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(deconstruct__deconstruct_5_3_i4);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_5_3
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 859 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2478 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(deconstruct__deconstruct_5_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_5_3
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 884 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2520 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module38)
	MR_init_entry1(deconstruct__deconstruct_du_2_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_du_2_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module39)
	MR_init_entry1(deconstruct__deconstruct_du_2_5_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_du_2_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module40)
	MR_init_entry1(deconstruct__deconstruct_du_2_5_2);
	MR_init_label5(deconstruct__deconstruct_du_2_5_2,5,6,4,10,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_du_2_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_du_2_5_2
	TypeInfo_for_T = MR_r1;
{
#line 47 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 2604 "deconstruct.c"
	MR_r4 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_du_2_5_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r4;
{
#line 46 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 2624 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__deconstruct_du_2_5_2_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(deconstruct__deconstruct_du_2_5_2_i5);
	}
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_du_2_5_2
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 834 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2668 "deconstruct.c"
	MR_r3 = FunctorNumber;
	MR_r4 = Arity;
	MR_r5 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
	MR_GOTO_LAB(deconstruct__deconstruct_du_2_5_2_i4);
MR_def_label(deconstruct__deconstruct_du_2_5_2,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r3,1)) {
		MR_GOTO_LAB(deconstruct__deconstruct_du_2_5_2_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("deconstruct_du: canonicalize not supported", 42);
	MR_np_call_localret_ent(require__error_1_0,
		deconstruct__deconstruct_du_2_5_2_i4);
MR_def_label(deconstruct__deconstruct_du_2_5_2,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_du_2_5_2
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 884 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 2721 "deconstruct.c"
	MR_r3 = FunctorNumber;
	MR_r4 = Arity;
	MR_r5 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_r5;
MR_def_label(deconstruct__deconstruct_du_2_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(deconstruct__deconstruct_du_2_5_2_i10);
	}
	MR_r1 = (MR_Word) MR_string_const("deconstruct_du: internal error (recompile needed?)", 50);
	MR_np_call_localret_ent(require__error_1_0,
		deconstruct__deconstruct_du_2_5_2_i10);
MR_def_label(deconstruct__deconstruct_du_2_5_2,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(deconstruct__deconstruct_du_2_5_2,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erlang_rtti_implementation__deconstruct_du_5_0);

MR_BEGIN_MODULE(deconstruct_module41)
	MR_init_entry1(deconstruct__deconstruct_du_5_0);
	MR_init_label1(deconstruct__deconstruct_du_5_0,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_du_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_du_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 81 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 2775 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__deconstruct_du_5_0_i23);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(erlang_rtti_implementation__deconstruct_du_5_0);
MR_def_label(deconstruct__deconstruct_du_5_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erlang_rtti_implementation__deconstruct_du_5_1);

MR_BEGIN_MODULE(deconstruct_module42)
	MR_init_entry1(deconstruct__deconstruct_du_5_1);
	MR_init_label1(deconstruct__deconstruct_du_5_1,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_du_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_du_5_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 81 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 2814 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__deconstruct_du_5_1_i23);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(erlang_rtti_implementation__deconstruct_du_5_1);
MR_def_label(deconstruct__deconstruct_du_5_1,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(erlang_rtti_implementation__deconstruct_du_5_2);

MR_BEGIN_MODULE(deconstruct_module43)
	MR_init_entry1(deconstruct__deconstruct_du_5_2);
	MR_init_label1(deconstruct__deconstruct_du_5_2,23)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__deconstruct_du_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
#define	MR_PROC_LABEL	mercury__deconstruct__deconstruct_du_5_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
{
#line 81 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;
;}
#line 2853 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__deconstruct_du_5_2_i23);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_np_tailcall_ent(erlang_rtti_implementation__deconstruct_du_5_2);
MR_def_label(deconstruct__deconstruct_du_5_2,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(deconstruct__deconstruct_du_2_5_2);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module44)
	MR_init_entry1(deconstruct__limited_deconstruct_dna_5_0);
	MR_init_label1(deconstruct__limited_deconstruct_dna_5_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__limited_deconstruct_dna_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	MaxArity;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__limited_deconstruct_dna_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	MaxArity = MR_r3;
{
#line 910 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 2920 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__limited_deconstruct_dna_5_0_i1);
	MR_r2 = (MR_Word) Functor;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__limited_deconstruct_dna_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module45)
	MR_init_entry1(deconstruct__limited_deconstruct_can_5_0);
	MR_init_label1(deconstruct__limited_deconstruct_can_5_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(deconstruct__limited_deconstruct_can_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	MaxArity;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__limited_deconstruct_can_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	MaxArity = MR_r3;
{
#line 938 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 2992 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(deconstruct__limited_deconstruct_can_5_0_i1);
	MR_r2 = (MR_Word) Functor;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(deconstruct__limited_deconstruct_can_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module46)
	MR_init_entry1(deconstruct__limited_deconstruct_6_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__limited_deconstruct_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module47)
	MR_init_entry1(deconstruct__limited_deconstruct_6_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__limited_deconstruct_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r4;
	MR_np_tailcall_ent(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module48)
	MR_init_entry1(deconstruct__limited_deconstruct_idcc_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__limited_deconstruct_idcc_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	MaxArity;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__limited_deconstruct_idcc_5_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	MaxArity = MR_r3;
{
#line 966 "deconstruct.m"
{
    #define EXPAND_INFO_TYPE    MR_Expand_Functor_Args_Limit_Info
    #define EXPAND_INFO_CALL    MR_expand_functor_args_limit
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define MAX_ARITY_ARG       MaxArity
    #define FUNCTOR_ARG         Functor
    #define ARITY_ARG           Arity
    #define ARGUMENTS_ARG       Arguments
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_deconstruct_body.h"
    #undef  EXPAND_INFO_TYPE
    #undef  EXPAND_INFO_CALL
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  MAX_ARITY_ARG
    #undef  FUNCTOR_ARG
    #undef  ARITY_ARG
    #undef  ARGUMENTS_ARG
    #undef  NONCANON

    if (!success) {
        /*
        ** Fill in some dummy values, to ensure that we don't try to return
        ** uninitialized memory to Mercury. It doesn't matter what we put here,
        ** except that we must have Arity > MaxArity. The casts cast away
        ** const.
        */

        Arity = MaxArity + 1;
        Functor = (MR_String) (MR_Integer) "";
        Arguments = MR_list_empty();
    }
};}
#line 3109 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module49)
	MR_init_entry1(deconstruct__limited_deconstruct_cc_3_0);
	MR_init_label1(deconstruct__limited_deconstruct_cc_3_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__deconstruct__limited_deconstruct_cc_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	MaxArity;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__deconstruct__limited_deconstruct_cc_3_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	MaxArity = MR_r3;
{
#line 966 "deconstruct.m"
{
    #define EXPAND_INFO_TYPE    MR_Expand_Functor_Args_Limit_Info
    #define EXPAND_INFO_CALL    MR_expand_functor_args_limit
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define MAX_ARITY_ARG       MaxArity
    #define FUNCTOR_ARG         Functor
    #define ARITY_ARG           Arity
    #define ARGUMENTS_ARG       Arguments
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_deconstruct_body.h"
    #undef  EXPAND_INFO_TYPE
    #undef  EXPAND_INFO_CALL
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  MAX_ARITY_ARG
    #undef  FUNCTOR_ARG
    #undef  ARITY_ARG
    #undef  ARGUMENTS_ARG
    #undef  NONCANON

    if (!success) {
        /*
        ** Fill in some dummy values, to ensure that we don't try to return
        ** uninitialized memory to Mercury. It doesn't matter what we put here,
        ** except that we must have Arity > MaxArity. The casts cast away
        ** const.
        */

        Arity = MaxArity + 1;
        Functor = (MR_String) (MR_Integer) "";
        Arguments = MR_list_empty();
    }
};}
#line 3183 "deconstruct.c"
	MR_r2 = (MR_Word) Functor;
	MR_tempr1 = Arity;
	MR_r5 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_r4 = MR_tempr1;
	if (((MR_Integer) MR_tempr1 > (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(deconstruct__limited_deconstruct_cc_3_0_i2);
	}
	MR_tag_alloc_heap(MR_tempr2, 0, (MR_Integer) 3);
	MR_tfield(0, MR_tempr2, 0) = MR_r2;
	MR_tfield(0, MR_tempr2, 1) = MR_tempr1;
	MR_tfield(0, MR_tempr2, 2) = MR_r5;
	MR_tag_alloc_heap(MR_r1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_r1, 0) = MR_tempr2;
	MR_proceed();
	}
MR_def_label(deconstruct__limited_deconstruct_cc_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_unify_2_0);

MR_BEGIN_MODULE(deconstruct_module50)
	MR_init_entry1(__Unify___deconstruct__maybe_arg_0_0);
	MR_init_label3(__Unify___deconstruct__maybe_arg_0_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___deconstruct__maybe_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Unify___deconstruct__maybe_arg_0_0_i12);
	}
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___deconstruct__maybe_arg_0_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(3);
	MR_proceed();
	}
MR_def_label(__Unify___deconstruct__maybe_arg_0_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___deconstruct__maybe_arg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___deconstruct__maybe_arg_0_0_i1);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_unify_2_0);
	}
MR_def_label(__Unify___deconstruct__maybe_arg_0_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(private_builtin__typed_compare_3_0);

MR_BEGIN_MODULE(deconstruct_module51)
	MR_init_entry1(__Compare___deconstruct__maybe_arg_0_0);
	MR_init_label4(__Compare___deconstruct__maybe_arg_0_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___deconstruct__maybe_arg_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
	if ((MR_r1 == MR_r2)) {
		MR_GOTO_LAB(__Compare___deconstruct__maybe_arg_0_0_i18);
	}
	MR_sv(1) = MR_r1;
	MR_sv(2) = MR_r2;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___deconstruct__maybe_arg_0_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___deconstruct__maybe_arg_0_0_i7);
	}
MR_def_label(__Compare___deconstruct__maybe_arg_0_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___deconstruct__maybe_arg_0_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___deconstruct__maybe_arg_0_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___deconstruct__maybe_arg_0_0_i9);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(3);
MR_def_label(__Compare___deconstruct__maybe_arg_0_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(1);
	MR_r1 = MR_ctfield(1, MR_tempr1, 0);
	MR_tempr2 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_ctfield(1, MR_tempr1, 1);
	MR_r4 = MR_ctfield(1, MR_tempr2, 1);
	MR_succip_word = MR_sv(3);
	MR_decr_sp(3);
	MR_np_tailcall_ent(private_builtin__typed_compare_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module52)
	MR_init_entry1(__Unify___deconstruct__noncanon_handling_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___deconstruct__noncanon_handling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module53)
	MR_init_entry1(__Compare___deconstruct__noncanon_handling_0_0);
	MR_init_label2(__Compare___deconstruct__noncanon_handling_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___deconstruct__noncanon_handling_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___deconstruct__noncanon_handling_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___deconstruct__noncanon_handling_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___deconstruct__noncanon_handling_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___deconstruct__noncanon_handling_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module54)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_48_4_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 499 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 3422 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module55)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_49_4_1
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 516 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 3468 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module56)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_117_110_99_116_111_114_95_95_91_51_93_95_50_4_2
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 533 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_functor_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  NONCANON
};}
#line 3514 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module57)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r3;
{
#line 649 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 3571 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0_i1);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_48_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module58)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r3;
{
#line 670 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 3638 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1_i1);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_114_103_95_95_91_52_93_95_49_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module59)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r3;
{
#line 718 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 3707 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0_i1);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module60)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r3;
{
#line 741 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 3776 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1_i1);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 0);
	MR_r3 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_TRUE;
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module61)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r3;
{
#line 649 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 3843 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0_i2);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_arg: argument number out of range", 37);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module62)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Index = MR_r3;
{
#line 670 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            Index
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 3909 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1_i2);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_49_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_arg: argument number out of range", 37);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module63)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2);
	MR_init_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2_i2);
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	Index;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2
	TypeInfo_for_T = MR_sv(3);
	Term = MR_sv(1);
	Index = MR_sv(2);
	DummyUniv = MR_r1;
{
#line 692 "deconstruct.m"
{
    #define TYPEINFO_ARG        TypeInfo_for_T
    #define TERM_ARG            Term
    #define SELECTOR_ARG        Index
    #define SELECTED_ARG        Argument
    #define SELECTED_TYPE_INFO  TypeInfo_for_ArgT
    #define NONCANON            MR_NONCANON_CC
    #include "mercury_ml_arg_body.h"
    #undef  TYPEINFO_ARG
    #undef  TERM_ARG
    #undef  SELECTOR_ARG
    #undef  SELECTED_ARG
    #undef  SELECTED_TYPE_INFO
    #undef  NONCANON

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }
};}
#line 3991 "deconstruct.c"
	MR_tempr1 = Argument;
	MR_r4 = Success;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2_i3);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_97_114_103_95_95_91_52_93_95_50_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_arg: argument number out of range", 37);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module64)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r3;
{
#line 718 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ABORT
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 4063 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0_i2);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_named_arg: no argument with that name", 41);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module65)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1,2)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	Argument;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	Name = (MR_String) MR_r3;
{
#line 741 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_ALLOW
#define SELECT_BY_NAME
#define SAVE_SUCCESS
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME
#undef  SAVE_SUCCESS
};}
#line 4131 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1_i2);
	MR_tempr1 = Argument;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_proceed();
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_49_4_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_named_arg: no argument with that name", 41);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module66)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2);
	MR_init_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = (MR_Word) MR_INT_CTOR_ADDR;
	MR_r2 = (MR_Integer) 0;
	MR_np_call_localret_ent(univ__type_to_univ_2_0,
		f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2_i2);
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Name;
	MR_Word	DummyUniv;
	MR_Word	Argument;
	MR_Integer	Success;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2
	TypeInfo_for_T = MR_sv(3);
	Term = MR_sv(1);
	Name = (MR_String) MR_sv(2);
	DummyUniv = MR_r1;
{
#line 765 "deconstruct.m"
{
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define SELECTOR_ARG            (MR_ConstString) Name
#define SELECTED_ARG            Argument
#define SELECTED_TYPE_INFO      TypeInfo_for_ArgT
#define NONCANON                MR_NONCANON_CC
#define SELECT_BY_NAME
#include "mercury_ml_arg_body.h"
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  SELECTOR_ARG
#undef  SELECTED_ARG
#undef  SELECTED_TYPE_INFO
#undef  NONCANON
#undef  SELECT_BY_NAME

    if (success) {
        Success = 1;
    } else {
        Success = 0;
        Argument = DummyUniv;
    }

};}
#line 4216 "deconstruct.c"
	MR_tempr1 = Argument;
	MR_r4 = Success;
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr1;
	if (MR_INT_EQ(MR_r4,0)) {
		MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2_i3);
	}
	MR_r2 = MR_ctfield(0, MR_tempr1, 1);
	MR_r1 = MR_ctfield(0, MR_tempr1, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_116_95_110_97_109_101_100_95_97_114_103_95_95_91_52_93_95_50_4_2,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Word) MR_string_const("det_named_arg: no argument with that name", 41);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(require__error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module67)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_5_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 834 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 4285 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module68)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_5_1
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 859 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#undef FUNCTOR_NUMBER_ARG
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 4340 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module69)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_50_5_2
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 884 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 4397 "deconstruct.c"
	MR_r1 = (MR_Word) Functor;
	MR_r2 = Arity;
	MR_r3 = Arguments;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module70)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	MaxArity;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	MaxArity = MR_r3;
{
#line 910 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#define SAVE_SUCCESS
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 4461 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0_i1);
	MR_r2 = (MR_Word) Functor;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_48_6_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module71)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1);
	MR_init_label1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_Integer	MaxArity;
	MR_String	Functor;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
	MaxArity = MR_r3;
{
#line 938 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Limit_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args_limit
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define MAX_ARITY_ARG           MaxArity
#define FUNCTOR_ARG             Functor
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ALLOW
#define SAVE_SUCCESS
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  MAX_ARITY_ARG
#undef  FUNCTOR_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
#undef  SAVE_SUCCESS
};}
#line 4533 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1_i1);
	MR_r2 = (MR_Word) Functor;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_105_109_105_116_101_100_95_100_101_99_111_110_115_116_114_117_99_116_95_95_91_51_93_95_49_6_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module72)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0);
	MR_init_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0
	TypeInfo_for_T = MR_r1;
{
#line 47 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 4589 "deconstruct.c"
	MR_r5 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r5;
{
#line 46 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 4609 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 834 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_ABORT
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 4650 "deconstruct.c"
	MR_r2 = FunctorNumber;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("deconstruct_du: internal error (recompile needed?)", 50);
	MR_np_call_localret_ent(require__error_1_0,
		f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0_i6);
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_48_5_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module73)
	MR_init_entry1(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1);
	MR_init_label2(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1,6,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	TypeInfo;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1
	TypeInfo_for_T = MR_r1;
{
#line 47 "type_desc.opt"
{
    TypeInfo = TypeInfo_for_T;

    /*
    ** We used to collapse equivalences for efficiency here, but that's not
    ** always desirable, due to the reverse mode of make_type/2, and efficiency
    ** of type_infos probably isn't very important anyway.
    */
#if 0
    MR_save_transient_registers();
    TypeInfo = (MR_Word) MR_collapse_equivalences(
        (MR_TypeInfo) TypeInfo_for_T);
    MR_restore_transient_registers();
#endif

};}
#line 4711 "deconstruct.c"
	MR_r5 = TypeInfo;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word	TypeInfo;
	MR_Integer	Functors;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	TypeInfo = MR_r5;
{
#line 46 "construct.opt"
{
    MR_save_transient_registers();
    Functors = MR_get_num_functors((MR_TypeInfo) TypeInfo);
    MR_restore_transient_registers();
    SUCCESS_INDICATOR = (Functors >= 0);
};}
#line 4731 "deconstruct.c"
if (!MercurySuccessIndicator) MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1_i1);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_incr_sp(1);
	MR_sv(1) = (MR_Word) MR_succip;
	{
	MR_Word	TypeInfo_for_T;
	MR_Word	Term;
	MR_String	Functor;
	MR_Integer	FunctorNumber;
	MR_Integer	Arity;
	MR_Word	Arguments;
#define	MR_PROC_LABEL	mercury__f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1
	TypeInfo_for_T = MR_r1;
	Term = MR_r2;
{
#line 884 "deconstruct.m"
{
#define EXPAND_INFO_TYPE        MR_Expand_Functor_Args_Info
#define EXPAND_INFO_CALL        MR_expand_functor_args
#define TYPEINFO_ARG            TypeInfo_for_T
#define TERM_ARG                Term
#define FUNCTOR_ARG             Functor
#define FUNCTOR_NUMBER_ARG      FunctorNumber
#define ARITY_ARG               Arity
#define ARGUMENTS_ARG           Arguments
#define NONCANON                MR_NONCANON_CC
#include "mercury_ml_deconstruct_body.h"
#undef  EXPAND_INFO_TYPE
#undef  EXPAND_INFO_CALL
#undef  TYPEINFO_ARG
#undef  TERM_ARG
#undef  FUNCTOR_ARG
#undef  FUNCTOR_NUMBER_ARG
#undef  ARITY_ARG
#undef  ARGUMENTS_ARG
#undef  NONCANON
};}
#line 4772 "deconstruct.c"
	MR_r2 = FunctorNumber;
	MR_r3 = Arity;
	MR_r4 = Arguments;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1_i6);
	}
	MR_r1 = (MR_Word) MR_string_const("deconstruct_du: internal error (recompile needed?)", 50);
	MR_np_call_localret_ent(require__error_1_0,
		f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1_i6);
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(1);
MR_def_label(f_100_101_99_111_110_115_116_114_117_99_116_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_99_111_110_115_116_114_117_99_116_95_100_117_95_50_95_95_91_51_93_95_49_5_1,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(deconstruct_module74)
	MR_init_entry1(fn__f_100_101_99_111_110_115_116_114_117_99_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_100_101_99_111_110_115_116_114_117_99_116_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__deconstruct_maybe_bunch_0(void)
{
	deconstruct_module0();
	deconstruct_module1();
	deconstruct_module2();
	deconstruct_module3();
	deconstruct_module4();
	deconstruct_module5();
	deconstruct_module6();
	deconstruct_module7();
	deconstruct_module8();
	deconstruct_module9();
	deconstruct_module10();
	deconstruct_module11();
	deconstruct_module12();
	deconstruct_module13();
	deconstruct_module14();
	deconstruct_module15();
	deconstruct_module16();
	deconstruct_module17();
	deconstruct_module18();
	deconstruct_module19();
	deconstruct_module20();
	deconstruct_module21();
	deconstruct_module22();
	deconstruct_module23();
	deconstruct_module24();
	deconstruct_module25();
	deconstruct_module26();
	deconstruct_module27();
	deconstruct_module28();
	deconstruct_module29();
	deconstruct_module30();
	deconstruct_module31();
	deconstruct_module32();
	deconstruct_module33();
	deconstruct_module34();
	deconstruct_module35();
	deconstruct_module36();
	deconstruct_module37();
	deconstruct_module38();
	deconstruct_module39();
}

static void mercury__deconstruct_maybe_bunch_1(void)
{
	deconstruct_module40();
	deconstruct_module41();
	deconstruct_module42();
	deconstruct_module43();
	deconstruct_module44();
	deconstruct_module45();
	deconstruct_module46();
	deconstruct_module47();
	deconstruct_module48();
	deconstruct_module49();
	deconstruct_module50();
	deconstruct_module51();
	deconstruct_module52();
	deconstruct_module53();
	deconstruct_module54();
	deconstruct_module55();
	deconstruct_module56();
	deconstruct_module57();
	deconstruct_module58();
	deconstruct_module59();
	deconstruct_module60();
	deconstruct_module61();
	deconstruct_module62();
	deconstruct_module63();
	deconstruct_module64();
	deconstruct_module65();
	deconstruct_module66();
	deconstruct_module67();
	deconstruct_module68();
	deconstruct_module69();
	deconstruct_module70();
	deconstruct_module71();
	deconstruct_module72();
	deconstruct_module73();
	deconstruct_module74();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__deconstruct__init(void);
void mercury__deconstruct__init_type_tables(void);
void mercury__deconstruct__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__deconstruct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__deconstruct__init_complexity_procs(void);
#endif

void mercury__deconstruct__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__deconstruct_maybe_bunch_0();
	mercury__deconstruct_maybe_bunch_1();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_deconstruct__type_ctor_info_noncanon_handling_0,
		deconstruct__noncanon_handling_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_deconstruct__type_ctor_info_maybe_arg_0,
		deconstruct__maybe_arg_0_0);
	mercury__deconstruct__init_debugger();
}

void mercury__deconstruct__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_deconstruct__type_ctor_info_noncanon_handling_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_deconstruct__type_ctor_info_maybe_arg_0);
	}
}


void mercury__deconstruct__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__deconstruct__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__deconstruct);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__deconstruct__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
