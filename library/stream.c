/*
** Automatically generated from `stream.m'
** by the Mercury compiler,
** version rotd-2009-06-06, configured for i686-pc-linux-gnu.
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
INIT mercury__stream__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 136 "io.int2"
#include "io.mh"

#line 27 "stream.c"
#line 144 "io.int2"
#include "string.mh"

#line 31 "stream.c"
#line 29 "bitmap.int2"
#include "bitmap.mh"

#line 35 "stream.c"
#line 28 "time.int2"
#include "time.mh"

#line 39 "stream.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 43 "stream.c"
#line 37 "builtin.opt"
#include "array.mh"

#line 47 "stream.c"
#line 46 "array.opt"
#include "stm_builtin.mh"

#line 51 "stream.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 55 "stream.c"
#line 150 "io.opt"
#include "dir.mh"

#line 59 "stream.c"
#line 160 "io.opt"
#include "table_builtin.mh"

#line 63 "stream.c"
#line 3 "float.opt"
#include "float.mh"

#line 67 "stream.c"
#line 3 "math.opt"
#include "math.mh"

#line 71 "stream.c"
#line 20 "store.opt"
#include "store.mh"

#line 75 "stream.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 79 "stream.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 83 "stream.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 87 "stream.c"
#line 4 "int.opt"
#include "int.mh"

#line 91 "stream.c"
#line 109 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 95 "stream.c"
#line 4 "char.opt"
#include "char.mh"

#line 99 "stream.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 103 "stream.c"
#line 104 "stream.c"
#include "stream.mh"

#line 107 "stream.c"
#line 108 "stream.c"
#ifndef STREAM_DECL_GUARD
#define STREAM_DECL_GUARD

#line 112 "stream.c"
#line 113 "stream.c"

#endif
#line 116 "stream.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif

extern const MR_TypeClassDeclStruct
	mercury_data_stream__type_class_decl_writer_3,
	mercury_data_stream__type_class_decl_unbounded_putback_4,
	mercury_data_stream__type_class_decl_stream_2,
	mercury_data_stream__type_class_decl_seekable_2,
	mercury_data_stream__type_class_decl_reader_4,
	mercury_data_stream__type_class_decl_putback_4,
	mercury_data_stream__type_class_decl_output_2,
	mercury_data_stream__type_class_decl_line_oriented_2,
	mercury_data_stream__type_class_decl_input_2,
	mercury_data_stream__type_class_decl_error_1;

extern const MR_TypeClassDeclStruct
	mercury_data_stream__type_class_decl_duplex_2,
	mercury_data_stream__type_class_decl_bulk_reader_5;

extern const MR_TypeCtorInfo_Struct
	mercury_data_stream__type_ctor_info_whence_0,
	mercury_data_stream__type_ctor_info_result_2,
	mercury_data_stream__type_ctor_info_result_1,
	mercury_data_stream__type_ctor_info_res_2,
	mercury_data_stream__type_ctor_info_res_1,
	mercury_data_stream__type_ctor_info_name_0,
	mercury_data_stream__type_ctor_info_maybe_partial_res_2;
MR_decl_label7(stream__ignore_whitespace_4_0, 30,2,5,7,10,8,13)
MR_decl_label5(stream__input_stream_fold_6_0, 22,2,6,8,9)
MR_decl_label5(stream__input_stream_fold2_state_6_0, 22,2,6,8,9)
MR_decl_label6(stream__input_stream_fold2_state_maybe_stop_6_0, 29,2,6,8,9,11)
MR_decl_label5(stream__input_stream_fold_state_5_0, 21,2,5,7,8)
MR_decl_label5(stream__put_list_6_0, 16,3,4,7,19)
MR_decl_label4(__Unify___stream__maybe_partial_res_2_0, 7,19,5,1)
MR_decl_label3(__Unify___stream__res_1_0, 12,5,1)
MR_decl_label3(__Unify___stream__res_2_0, 16,5,1)
MR_decl_label3(__Unify___stream__result_1_0, 6,13,1)
MR_decl_label4(__Unify___stream__result_2_0, 6,10,16,1)
MR_decl_label7(__Compare___stream__maybe_partial_res_2_0, 3,2,9,7,5,15,45)
MR_decl_label2(__Compare___stream__name_0_0, 2,3)
MR_decl_label4(__Compare___stream__res_1_0, 18,7,5,9)
MR_decl_label5(__Compare___stream__res_2_0, 3,2,7,5,10)
MR_decl_label5(__Compare___stream__result_1_0, 34,5,8,12,15)
MR_decl_label7(__Compare___stream__result_2_0, 44,12,46,15,20,39,24)
MR_decl_label2(__Compare___stream__whence_0_0, 2,3)
MR_def_extern_entry(fn__stream__error_message_1_0)
MR_def_extern_entry(stream__name_4_0)
MR_def_extern_entry(stream__get_4_0)
MR_def_extern_entry(stream__bulk_get_9_0)
MR_def_extern_entry(stream__flush_3_0)
MR_def_extern_entry(stream__put_4_0)
MR_def_extern_entry(stream__unget_4_0)
MR_def_extern_entry(stream__seek_5_0)
MR_def_extern_entry(stream__get_line_4_0)
MR_def_extern_entry(stream__set_line_4_0)
MR_def_extern_entry(stream__input_stream_fold_6_0)
MR_def_extern_entry(stream__input_stream_fold_6_1)
MR_def_extern_entry(stream__input_stream_fold_state_5_0)
MR_def_extern_entry(stream__input_stream_fold_state_5_1)
MR_def_extern_entry(stream__input_stream_fold2_state_6_0)
MR_def_extern_entry(stream__input_stream_fold2_state_6_1)
MR_def_extern_entry(stream__input_stream_fold2_state_maybe_stop_6_0)
MR_def_extern_entry(stream__input_stream_fold2_state_maybe_stop_6_1)
MR_def_extern_entry(stream__ignore_whitespace_4_0)
MR_def_extern_entry(stream__put_list_6_0)
MR_def_extern_entry(stream__put_list_6_1)
MR_def_extern_entry(stream__put_list_6_2)
MR_def_extern_entry(__Unify___stream__maybe_partial_res_2_0)
MR_def_extern_entry(__Compare___stream__maybe_partial_res_2_0)
MR_def_extern_entry(__Unify___stream__name_0_0)
MR_def_extern_entry(__Compare___stream__name_0_0)
MR_def_extern_entry(__Unify___stream__res_1_0)
MR_def_extern_entry(__Compare___stream__res_1_0)
MR_def_extern_entry(__Unify___stream__res_2_0)
MR_def_extern_entry(__Compare___stream__res_2_0)
MR_def_extern_entry(__Unify___stream__result_1_0)
MR_def_extern_entry(__Compare___stream__result_1_0)
MR_def_extern_entry(__Unify___stream__result_2_0)
MR_def_extern_entry(__Compare___stream__result_2_0)
MR_def_extern_entry(__Unify___stream__whence_0_0)
MR_def_extern_entry(__Compare___stream__whence_0_0)
MR_decl_static(fn__f_115_116_114_101_97_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)

static const MR_EnumFunctorDesc mercury_data_stream__enum_functor_desc_whence_0_0 = {
	"set",
	0
};

static const MR_EnumFunctorDesc mercury_data_stream__enum_functor_desc_whence_0_1 = {
	"cur",
	1
};

static const MR_EnumFunctorDesc mercury_data_stream__enum_functor_desc_whence_0_2 = {
	"end",
	2
};

const MR_EnumFunctorDescPtr mercury_data_stream__enum_value_ordered_whence_0[] = {
	&mercury_data_stream__enum_functor_desc_whence_0_0,
	&mercury_data_stream__enum_functor_desc_whence_0_1,
	&mercury_data_stream__enum_functor_desc_whence_0_2
};

const MR_EnumFunctorDescPtr mercury_data_stream__enum_name_ordered_whence_0[] = {
	&mercury_data_stream__enum_functor_desc_whence_0_1,
	&mercury_data_stream__enum_functor_desc_whence_0_2,
	&mercury_data_stream__enum_functor_desc_whence_0_0
};

const MR_Integer mercury_data_stream__functor_number_map_whence_0[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_stream__type_ctor_info_whence_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_ENUM,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stream__whence_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stream__whence_0_0)),
	"stream",
	"whence",
	{ (void *)mercury_data_stream__enum_name_ordered_whence_0 },
	{ (void *)mercury_data_stream__enum_value_ordered_whence_0 },
	3,
	4,
	mercury_data_stream__functor_number_map_whence_0
};

const MR_PseudoTypeInfo mercury_data_stream__field_types_result_2_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_result_2_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_result_2_0,
	NULL,
	NULL
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_result_2_1 = {
	"eof",
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

const MR_PseudoTypeInfo mercury_data_stream__field_types_result_2_2[] = {
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_result_2_2 = {
	"error",
	1,
	1,
	MR_SECTAG_NONE,
	2,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_result_2_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_result_2_0[] = {
	&mercury_data_stream__du_functor_desc_result_2_1

};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_result_2_1[] = {
	&mercury_data_stream__du_functor_desc_result_2_0

};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_result_2_2[] = {
	&mercury_data_stream__du_functor_desc_result_2_2

};

const MR_DuPtagLayout mercury_data_stream__du_ptag_ordered_result_2[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_stream__du_stag_ordered_result_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_result_2_1 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_result_2_2 }

};

const MR_DuFunctorDescPtr mercury_data_stream__du_name_ordered_result_2[] = {
	&mercury_data_stream__du_functor_desc_result_2_1,
	&mercury_data_stream__du_functor_desc_result_2_2,
	&mercury_data_stream__du_functor_desc_result_2_0
};

const MR_Integer mercury_data_stream__functor_number_map_result_2[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_stream__type_ctor_info_result_2 = {
	2,
	13,
	3,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stream__result_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stream__result_2_0)),
	"stream",
	"result",
	{ (void *)mercury_data_stream__du_name_ordered_result_2 },
	{ (void *)mercury_data_stream__du_ptag_ordered_result_2 },
	3,
	4,
	mercury_data_stream__functor_number_map_result_2
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_result_1_0 = {
	"ok",
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

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_result_1_1 = {
	"eof",
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

const MR_PseudoTypeInfo mercury_data_stream__field_types_result_1_2[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_result_1_2 = {
	"error",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	2,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_result_1_2,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_result_1_0[] = {
	&mercury_data_stream__du_functor_desc_result_1_0,
	&mercury_data_stream__du_functor_desc_result_1_1

};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_result_1_1[] = {
	&mercury_data_stream__du_functor_desc_result_1_2

};

const MR_DuPtagLayout mercury_data_stream__du_ptag_ordered_result_1[] = {
	{ 2, MR_SECTAG_LOCAL,
	mercury_data_stream__du_stag_ordered_result_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_result_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_stream__du_name_ordered_result_1[] = {
	&mercury_data_stream__du_functor_desc_result_1_1,
	&mercury_data_stream__du_functor_desc_result_1_2,
	&mercury_data_stream__du_functor_desc_result_1_0
};

const MR_Integer mercury_data_stream__functor_number_map_result_1[] = {
	2,
	0,
	1 };
	
const MR_TypeCtorInfo_Struct mercury_data_stream__type_ctor_info_result_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stream__result_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stream__result_1_0)),
	"stream",
	"result",
	{ (void *)mercury_data_stream__du_name_ordered_result_1 },
	{ (void *)mercury_data_stream__du_ptag_ordered_result_1 },
	3,
	4,
	mercury_data_stream__functor_number_map_result_1
};

const MR_PseudoTypeInfo mercury_data_stream__field_types_res_2_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_res_2_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_res_2_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_stream__field_types_res_2_1[] = {
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_res_2_1 = {
	"error",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_res_2_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_res_2_0[] = {
	&mercury_data_stream__du_functor_desc_res_2_0

};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_res_2_1[] = {
	&mercury_data_stream__du_functor_desc_res_2_1

};

const MR_DuPtagLayout mercury_data_stream__du_ptag_ordered_res_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_res_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_res_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_stream__du_name_ordered_res_2[] = {
	&mercury_data_stream__du_functor_desc_res_2_1,
	&mercury_data_stream__du_functor_desc_res_2_0
};

const MR_Integer mercury_data_stream__functor_number_map_res_2[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_stream__type_ctor_info_res_2 = {
	2,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stream__res_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stream__res_2_0)),
	"stream",
	"res",
	{ (void *)mercury_data_stream__du_name_ordered_res_2 },
	{ (void *)mercury_data_stream__du_ptag_ordered_res_2 },
	2,
	4,
	mercury_data_stream__functor_number_map_res_2
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_res_1_0 = {
	"ok",
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

const MR_PseudoTypeInfo mercury_data_stream__field_types_res_1_1[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_res_1_1 = {
	"error",
	1,
	1,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_res_1_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_res_1_0[] = {
	&mercury_data_stream__du_functor_desc_res_1_0

};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_res_1_1[] = {
	&mercury_data_stream__du_functor_desc_res_1_1

};

const MR_DuPtagLayout mercury_data_stream__du_ptag_ordered_res_1[] = {
	{ 1, MR_SECTAG_LOCAL,
	mercury_data_stream__du_stag_ordered_res_1_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_res_1_1 }

};

const MR_DuFunctorDescPtr mercury_data_stream__du_name_ordered_res_1[] = {
	&mercury_data_stream__du_functor_desc_res_1_1,
	&mercury_data_stream__du_functor_desc_res_1_0
};

const MR_Integer mercury_data_stream__functor_number_map_res_1[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_stream__type_ctor_info_res_1 = {
	1,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stream__res_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stream__res_1_0)),
	"stream",
	"res",
	{ (void *)mercury_data_stream__du_name_ordered_res_1 },
	{ (void *)mercury_data_stream__du_ptag_ordered_res_1 },
	2,
	4,
	mercury_data_stream__functor_number_map_res_1
};
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_string_0;

const MR_TypeCtorInfo_Struct mercury_data_stream__type_ctor_info_name_0 = {
	0,
	13,
	-1,
	MR_TYPECTOR_REP_EQUIV_GROUND,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stream__name_0_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stream__name_0_0)),
	"stream",
	"name",
	{ 0 },
	{ (void *)&mercury_data_builtin__type_ctor_info_string_0 },
	-1,
	0,
	NULL
};

const MR_PseudoTypeInfo mercury_data_stream__field_types_maybe_partial_res_2_0[] = {
	(MR_PseudoTypeInfo) 1
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_maybe_partial_res_2_0 = {
	"ok",
	1,
	1,
	MR_SECTAG_NONE,
	0,
	-1,
	0,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_maybe_partial_res_2_0,
	NULL,
	NULL
};

const MR_PseudoTypeInfo mercury_data_stream__field_types_maybe_partial_res_2_1[] = {
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
};

static const MR_DuFunctorDesc mercury_data_stream__du_functor_desc_maybe_partial_res_2_1 = {
	"error",
	2,
	3,
	MR_SECTAG_NONE,
	1,
	-1,
	1,
	(MR_PseudoTypeInfo *) mercury_data_stream__field_types_maybe_partial_res_2_1,
	NULL,
	NULL
};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_maybe_partial_res_2_0[] = {
	&mercury_data_stream__du_functor_desc_maybe_partial_res_2_0

};

const MR_DuFunctorDescPtr mercury_data_stream__du_stag_ordered_maybe_partial_res_2_1[] = {
	&mercury_data_stream__du_functor_desc_maybe_partial_res_2_1

};

const MR_DuPtagLayout mercury_data_stream__du_ptag_ordered_maybe_partial_res_2[] = {
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_maybe_partial_res_2_0 },
	{ 1, MR_SECTAG_NONE,
	mercury_data_stream__du_stag_ordered_maybe_partial_res_2_1 }

};

const MR_DuFunctorDescPtr mercury_data_stream__du_name_ordered_maybe_partial_res_2[] = {
	&mercury_data_stream__du_functor_desc_maybe_partial_res_2_1,
	&mercury_data_stream__du_functor_desc_maybe_partial_res_2_0
};

const MR_Integer mercury_data_stream__functor_number_map_maybe_partial_res_2[] = {
	1,
	0 };
	
const MR_TypeCtorInfo_Struct mercury_data_stream__type_ctor_info_maybe_partial_res_2 = {
	2,
	13,
	2,
	MR_TYPECTOR_REP_DU,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___stream__maybe_partial_res_2_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___stream__maybe_partial_res_2_0)),
	"stream",
	"maybe_partial_res",
	{ (void *)mercury_data_stream__du_name_ordered_maybe_partial_res_2 },
	{ (void *)mercury_data_stream__du_ptag_ordered_maybe_partial_res_2 },
	2,
	4,
	mercury_data_stream__functor_number_map_maybe_partial_res_2
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_writer_3[] = {
	"Stream",
	"Unit",
	"State",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_writer_3[] = {
	{ "put", 4, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_writer_3 = {
	"stream",
	"writer",
	3,
	3,
	1,
	mercury_data_stream__type_class_id_var_names_writer_3,
	mercury_data_stream__type_class_id_method_ids_writer_3
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_output_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_writer_3_1 = {
	&mercury_data_stream__type_class_decl_output_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 3
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_writer_3[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_writer_3_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_writer_3 = {
	&mercury_data_stream__type_class_id_writer_3,
	0,
	1,
	mercury_data_stream__type_class_decl_supers_writer_3
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_unbounded_putback_4[] = {
	"Stream",
	"Unit",
	"State",
	"Error",
};

static const MR_TypeClassId mercury_data_stream__type_class_id_unbounded_putback_4 = {
	"stream",
	"unbounded_putback",
	4,
	4,
	0,
	mercury_data_stream__type_class_id_var_names_unbounded_putback_4,
	NULL
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_putback_4;

static const MR_TypeClassConstraint_4Struct mercury_data_stream__type_class_decl_super_unbounded_putback_4_1 = {
	&mercury_data_stream__type_class_decl_putback_4,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) 4
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_unbounded_putback_4[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_unbounded_putback_4_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_unbounded_putback_4 = {
	&mercury_data_stream__type_class_id_unbounded_putback_4,
	0,
	1,
	mercury_data_stream__type_class_decl_supers_unbounded_putback_4
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_stream_2[] = {
	"Stream",
	"State",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_stream_2[] = {
	{ "name", 4, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_stream_2 = {
	"stream",
	"stream",
	2,
	2,
	1,
	mercury_data_stream__type_class_id_var_names_stream_2,
	mercury_data_stream__type_class_id_method_ids_stream_2
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_stream_2 = {
	&mercury_data_stream__type_class_id_stream_2,
	0,
	0,
	NULL
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_seekable_2[] = {
	"Stream",
	"State",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_seekable_2[] = {
	{ "seek", 5, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_seekable_2 = {
	"stream",
	"seekable",
	2,
	2,
	1,
	mercury_data_stream__type_class_id_var_names_seekable_2,
	mercury_data_stream__type_class_id_method_ids_seekable_2
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_stream_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_seekable_2_1 = {
	&mercury_data_stream__type_class_decl_stream_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_seekable_2[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_seekable_2_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_seekable_2 = {
	&mercury_data_stream__type_class_id_seekable_2,
	0,
	1,
	mercury_data_stream__type_class_decl_supers_seekable_2
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_reader_4[] = {
	"Stream",
	"Unit",
	"State",
	"Error",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_reader_4[] = {
	{ "get", 4, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_reader_4 = {
	"stream",
	"reader",
	4,
	4,
	1,
	mercury_data_stream__type_class_id_var_names_reader_4,
	mercury_data_stream__type_class_id_method_ids_reader_4
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_input_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_reader_4_1 = {
	&mercury_data_stream__type_class_decl_input_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 3
	}
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_error_1;

static const MR_TypeClassConstraint_1Struct mercury_data_stream__type_class_decl_super_reader_4_2 = {
	&mercury_data_stream__type_class_decl_error_1,
	{
	(MR_PseudoTypeInfo) 4
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_reader_4[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_reader_4_1,
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_reader_4_2
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_reader_4 = {
	&mercury_data_stream__type_class_id_reader_4,
	0,
	2,
	mercury_data_stream__type_class_decl_supers_reader_4
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_putback_4[] = {
	"Stream",
	"Unit",
	"State",
	"Error",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_putback_4[] = {
	{ "unget", 4, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_putback_4 = {
	"stream",
	"putback",
	4,
	4,
	1,
	mercury_data_stream__type_class_id_var_names_putback_4,
	mercury_data_stream__type_class_id_method_ids_putback_4
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_reader_4;

static const MR_TypeClassConstraint_4Struct mercury_data_stream__type_class_decl_super_putback_4_1 = {
	&mercury_data_stream__type_class_decl_reader_4,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2,
	(MR_PseudoTypeInfo) 3,
	(MR_PseudoTypeInfo) 4
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_putback_4[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_putback_4_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_putback_4 = {
	&mercury_data_stream__type_class_id_putback_4,
	0,
	1,
	mercury_data_stream__type_class_decl_supers_putback_4
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_output_2[] = {
	"Stream",
	"State",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_output_2[] = {
	{ "flush", 3, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_output_2 = {
	"stream",
	"output",
	2,
	2,
	1,
	mercury_data_stream__type_class_id_var_names_output_2,
	mercury_data_stream__type_class_id_method_ids_output_2
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_stream_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_output_2_1 = {
	&mercury_data_stream__type_class_decl_stream_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_output_2[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_output_2_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_output_2 = {
	&mercury_data_stream__type_class_id_output_2,
	0,
	1,
	mercury_data_stream__type_class_decl_supers_output_2
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_line_oriented_2[] = {
	"Stream",
	"State",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_line_oriented_2[] = {
	{ "get_line", 4, MR_PREDICATE },
	{ "set_line", 4, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_line_oriented_2 = {
	"stream",
	"line_oriented",
	2,
	2,
	2,
	mercury_data_stream__type_class_id_var_names_line_oriented_2,
	mercury_data_stream__type_class_id_method_ids_line_oriented_2
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_stream_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_line_oriented_2_1 = {
	&mercury_data_stream__type_class_decl_stream_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_line_oriented_2[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_line_oriented_2_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_line_oriented_2 = {
	&mercury_data_stream__type_class_id_line_oriented_2,
	0,
	1,
	mercury_data_stream__type_class_decl_supers_line_oriented_2
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_input_2[] = {
	"Stream",
	"State",
};

static const MR_TypeClassId mercury_data_stream__type_class_id_input_2 = {
	"stream",
	"input",
	2,
	2,
	0,
	mercury_data_stream__type_class_id_var_names_input_2,
	NULL
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_stream_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_input_2_1 = {
	&mercury_data_stream__type_class_decl_stream_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_input_2[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_input_2_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_input_2 = {
	&mercury_data_stream__type_class_id_input_2,
	0,
	1,
	mercury_data_stream__type_class_decl_supers_input_2
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_error_1[] = {
	"Error",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_error_1[] = {
	{ "error_message", 2, MR_FUNCTION },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_error_1 = {
	"stream",
	"error",
	1,
	1,
	1,
	mercury_data_stream__type_class_id_var_names_error_1,
	mercury_data_stream__type_class_id_method_ids_error_1
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_error_1 = {
	&mercury_data_stream__type_class_id_error_1,
	0,
	0,
	NULL
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_duplex_2[] = {
	"Stream",
	"State",
};

static const MR_TypeClassId mercury_data_stream__type_class_id_duplex_2 = {
	"stream",
	"duplex",
	2,
	2,
	0,
	mercury_data_stream__type_class_id_var_names_duplex_2,
	NULL
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_input_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_duplex_2_1 = {
	&mercury_data_stream__type_class_decl_input_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_output_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_duplex_2_2 = {
	&mercury_data_stream__type_class_decl_output_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 2
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_duplex_2[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_duplex_2_1,
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_duplex_2_2
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_duplex_2 = {
	&mercury_data_stream__type_class_id_duplex_2,
	0,
	2,
	mercury_data_stream__type_class_decl_supers_duplex_2
};

const MR_ConstString mercury_data_stream__type_class_id_var_names_bulk_reader_5[] = {
	"Stream",
	"Index",
	"Store",
	"State",
	"Error",
};

const MR_TypeClassMethod mercury_data_stream__type_class_id_method_ids_bulk_reader_5[] = {
	{ "bulk_get", 9, MR_PREDICATE },
};

static const MR_TypeClassId mercury_data_stream__type_class_id_bulk_reader_5 = {
	"stream",
	"bulk_reader",
	5,
	5,
	1,
	mercury_data_stream__type_class_id_var_names_bulk_reader_5,
	mercury_data_stream__type_class_id_method_ids_bulk_reader_5
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_input_2;

static const MR_TypeClassConstraint_2Struct mercury_data_stream__type_class_decl_super_bulk_reader_5_1 = {
	&mercury_data_stream__type_class_decl_input_2,
	{
	(MR_PseudoTypeInfo) 1,
	(MR_PseudoTypeInfo) 4
	}
};
extern const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_error_1;

static const MR_TypeClassConstraint_1Struct mercury_data_stream__type_class_decl_super_bulk_reader_5_2 = {
	&mercury_data_stream__type_class_decl_error_1,
	{
	(MR_PseudoTypeInfo) 5
	}
};

const MR_TypeClassConstraint mercury_data_stream__type_class_decl_supers_bulk_reader_5[] = {
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_bulk_reader_5_1,
	(MR_TypeClassConstraint) &mercury_data_stream__type_class_decl_super_bulk_reader_5_2
};

const MR_TypeClassDeclStruct mercury_data_stream__type_class_decl_bulk_reader_5 = {
	&mercury_data_stream__type_class_id_bulk_reader_5,
	0,
	2,
	mercury_data_stream__type_class_decl_supers_bulk_reader_5
};

MR_declare_entry(mercury__do_call_class_method_1);

MR_BEGIN_MODULE(stream_module0)
	MR_init_entry1(fn__stream__error_message_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__stream__error_message_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__stream__error_message_1_0));
	MR_np_tailcall_ent(do_call_class_method_1);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_2);

MR_BEGIN_MODULE(stream_module1)
	MR_init_entry1(stream__name_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__name_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__name_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module2)
	MR_init_entry1(stream__get_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__get_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__get_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_5);

MR_BEGIN_MODULE(stream_module3)
	MR_init_entry1(stream__bulk_get_9_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__bulk_get_9_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_tempr4 = MR_r6;
	MR_r6 = MR_tempr3;
	MR_r7 = MR_tempr4;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__bulk_get_9_0));
	MR_np_tailcall_ent(do_call_class_method_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module4)
	MR_init_entry1(stream__flush_3_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__flush_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__flush_3_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_3);

MR_BEGIN_MODULE(stream_module5)
	MR_init_entry1(stream__put_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__put_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__put_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module6)
	MR_init_entry1(stream__unget_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__unget_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__unget_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_class_method_4);

MR_BEGIN_MODULE(stream_module7)
	MR_init_entry1(stream__seek_5_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__seek_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_tempr3 = MR_r5;
	MR_r5 = MR_tempr2;
	MR_r6 = MR_tempr3;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__seek_5_0));
	MR_np_tailcall_ent(do_call_class_method_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module8)
	MR_init_entry1(stream__get_line_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__get_line_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_r4 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__get_line_4_0));
	MR_np_tailcall_ent(do_call_class_method_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module9)
	MR_init_entry1(stream__set_line_4_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__set_line_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_r2;
	MR_tempr2 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_r2 = (MR_Integer) 2;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__set_line_4_0));
	MR_np_tailcall_ent(do_call_class_method_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(stream_module10)
	MR_init_entry1(stream__input_stream_fold_6_0);
	MR_init_label5(stream__input_stream_fold_6_0,22,2,6,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(stream__input_stream_fold_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__stream__input_stream_fold_6_0_i2);
MR_def_label(stream__input_stream_fold_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(stream__input_stream_fold_6_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(stream__input_stream_fold_6_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(6);
	}
MR_def_label(stream__input_stream_fold_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(stream__input_stream_fold_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_sv(3);
	MR_sv(3) = MR_r2;
	MR_tempr2 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_r2 = MR_ctfield(1, MR_tempr2, 0);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__stream__input_stream_fold_6_0_i9);
MR_def_label(stream__input_stream_fold_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(stream__input_stream_fold_6_0_i22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module11)
	MR_init_entry1(stream__input_stream_fold_6_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(stream__input_stream_fold_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module12)
	MR_init_entry1(stream__input_stream_fold_state_5_0);
	MR_init_label5(stream__input_stream_fold_state_5_0,21,2,5,7,8)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold_state_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(stream__input_stream_fold_state_5_0,21)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r3 = MR_tempr1;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold_state_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__stream__input_stream_fold_state_5_0_i2);
MR_def_label(stream__input_stream_fold_state_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(stream__input_stream_fold_state_5_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(stream__input_stream_fold_state_5_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_decr_sp_and_return(4);
	}
MR_def_label(stream__input_stream_fold_state_5_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(4);
	}
MR_def_label(stream__input_stream_fold_state_5_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold_state_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__stream__input_stream_fold_state_5_0_i8);
MR_def_label(stream__input_stream_fold_state_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(stream__input_stream_fold_state_5_0_i21);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module13)
	MR_init_entry1(stream__input_stream_fold_state_5_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold_state_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(stream__input_stream_fold_state_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(stream_module14)
	MR_init_entry1(stream__input_stream_fold2_state_6_0);
	MR_init_label5(stream__input_stream_fold2_state_6_0,22,2,6,8,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold2_state_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(stream__input_stream_fold2_state_6_0,22)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold2_state_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__stream__input_stream_fold2_state_6_0_i2);
MR_def_label(stream__input_stream_fold2_state_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(stream__input_stream_fold2_state_6_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(stream__input_stream_fold2_state_6_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(6);
	}
MR_def_label(stream__input_stream_fold2_state_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(stream__input_stream_fold2_state_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold2_state_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__stream__input_stream_fold2_state_6_0_i9);
MR_def_label(stream__input_stream_fold2_state_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(stream__input_stream_fold2_state_6_0_i22);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module15)
	MR_init_entry1(stream__input_stream_fold2_state_6_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold2_state_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(stream__input_stream_fold2_state_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module16)
	MR_init_entry1(stream__input_stream_fold2_state_maybe_stop_6_0);
	MR_init_label6(stream__input_stream_fold2_state_maybe_stop_6_0,29,2,6,8,9,11)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold2_state_maybe_stop_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(stream__input_stream_fold2_state_maybe_stop_6_0,29)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(4) = MR_tempr1;
	MR_sv(5) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r4 = MR_r6;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold2_state_maybe_stop_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__stream__input_stream_fold2_state_maybe_stop_6_0_i2);
MR_def_label(stream__input_stream_fold2_state_maybe_stop_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(stream__input_stream_fold2_state_maybe_stop_6_0_i8);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(stream__input_stream_fold2_state_maybe_stop_6_0_i6);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_sv(3);
	MR_decr_sp_and_return(6);
	}
MR_def_label(stream__input_stream_fold2_state_maybe_stop_6_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(3);
	MR_tfield(1, MR_tempr1, 1) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(6);
	}
MR_def_label(stream__input_stream_fold2_state_maybe_stop_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(2);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_sv(3);
	MR_r4 = MR_tempr2;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__input_stream_fold2_state_maybe_stop_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__stream__input_stream_fold2_state_maybe_stop_6_0_i9);
MR_def_label(stream__input_stream_fold2_state_maybe_stop_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(stream__input_stream_fold2_state_maybe_stop_6_0_i11);
	}
	MR_tag_alloc_heap(MR_r1, 0, (MR_Integer) 1);
	MR_tfield(0, MR_r1, 0) = MR_r2;
	MR_r2 = MR_r3;
	MR_decr_sp_and_return(6);
MR_def_label(stream__input_stream_fold2_state_maybe_stop_6_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(4);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = MR_tempr2;
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(stream__input_stream_fold2_state_maybe_stop_6_0_i29);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module17)
	MR_init_entry1(stream__input_stream_fold2_state_maybe_stop_6_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__input_stream_fold2_state_maybe_stop_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(stream__input_stream_fold2_state_maybe_stop_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(char__is_whitespace_1_0);

MR_BEGIN_MODULE(stream_module18)
	MR_init_entry1(stream__ignore_whitespace_4_0);
	MR_init_label7(stream__ignore_whitespace_4_0,30,2,5,7,10,8,13)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__ignore_whitespace_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
MR_def_label(stream__ignore_whitespace_4_0,30)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	MR_Word	TypeClassInfo0;
	MR_Integer	Index;
	MR_Word	TypeClassInfo;
#define	MR_PROC_LABEL	mercury__stream__ignore_whitespace_4_0
	TypeClassInfo0 = MR_r1;
	Index = (MR_Integer) 1;
{
#line 146 "private_builtin.opt"

    TypeClassInfo =
        MR_typeclass_info_superclass_info(TypeClassInfo0, Index);
;}
#line 1903 "stream.c"
	MR_tempr1 = TypeClassInfo;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = MR_r2;
	MR_sv(1) = MR_tempr3;
	MR_sv(4) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr3;
	MR_r4 = MR_tempr2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__ignore_whitespace_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_2),
		mercury__stream__ignore_whitespace_4_0_i2);
MR_def_label(stream__ignore_whitespace_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_r1);
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(stream__ignore_whitespace_4_0_i7);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(stream__ignore_whitespace_4_0_i5);
	}
	MR_r1 = (MR_Word) MR_tbmkword(0, 1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(stream__ignore_whitespace_4_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 1);
	MR_tfield(1, MR_tempr1, 0) = MR_ctfield(2, MR_r1, 0);
	MR_r1 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
MR_def_label(stream__ignore_whitespace_4_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_ctfield(1, MR_r1, 0);
	MR_sv(2) = MR_tempr1;
	MR_sv(3) = MR_r2;
	MR_r1 = MR_tempr1;
	}
	MR_np_call_localret_ent(char__is_whitespace_1_0,
		stream__ignore_whitespace_4_0_i10);
MR_def_label(stream__ignore_whitespace_4_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(stream__ignore_whitespace_4_0_i8);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(3);
	MR_succip_word = MR_sv(5);
	MR_GOTO_LAB(stream__ignore_whitespace_4_0_i30);
MR_def_label(stream__ignore_whitespace_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_sv(2);
	MR_r2 = MR_sv(3);
	MR_r1 = MR_sv(4);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r3;
	MR_r3 = MR_sv(1);
	MR_r4 = MR_tempr1;
	MR_r5 = MR_r2;
	MR_r2 = (MR_Integer) 1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__ignore_whitespace_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_class_method_3),
		mercury__stream__ignore_whitespace_4_0_i13);
MR_def_label(stream__ignore_whitespace_4_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Word) MR_tbmkword(0, 0);
	MR_r2 = MR_tempr1;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module19)
	MR_init_entry1(stream__put_list_6_0);
	MR_init_label5(stream__put_list_6_0,16,3,4,7,19)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__put_list_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(stream__put_list_6_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r6,0,0)) {
		MR_GOTO_LAB(stream__put_list_6_0_i3);
	}
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(7);
MR_def_label(stream__put_list_6_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r5;
	MR_tempr3 = MR_r6;
	MR_sv(4) = MR_ctfield(1, MR_tempr3, 1);
	MR_sv(5) = MR_r2;
	MR_sv(6) = MR_r1;
	MR_r1 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_r3 = MR_ctfield(1, MR_tempr3, 0);
	MR_r4 = MR_r7;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__put_list_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__stream__put_list_6_0_i4);
MR_def_label(stream__put_list_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(4),0,0)) {
		MR_GOTO_LAB(stream__put_list_6_0_i19);
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_tempr1;
	}
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(stream__put_list_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__stream__put_list_6_0_i7);
MR_def_label(stream__put_list_6_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(5);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_sv(3);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(stream__put_list_6_0_i16);
	}
MR_def_label(stream__put_list_6_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module20)
	MR_init_entry1(stream__put_list_6_1);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__put_list_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(stream__put_list_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module21)
	MR_init_entry1(stream__put_list_6_2);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__stream__put_list_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(stream__put_list_6_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(stream_module22)
	MR_init_entry1(__Unify___stream__maybe_partial_res_2_0);
	MR_init_label4(__Unify___stream__maybe_partial_res_2_0,7,19,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stream__maybe_partial_res_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___stream__maybe_partial_res_2_0_i19);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___stream__maybe_partial_res_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___stream__maybe_partial_res_2_0_i1);
	}
	MR_tempr3 = MR_tempr1;
	MR_sv(1) = MR_ctfield(1, MR_tempr3, 1);
	MR_tempr4 = MR_tempr2;
	MR_sv(2) = MR_ctfield(1, MR_tempr4, 1);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__unify_2_0,
		__Unify___stream__maybe_partial_res_2_0_i7);
MR_def_label(__Unify___stream__maybe_partial_res_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(__Unify___stream__maybe_partial_res_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___stream__maybe_partial_res_2_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___stream__maybe_partial_res_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___stream__maybe_partial_res_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___stream__maybe_partial_res_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(stream_module23)
	MR_init_entry1(__Compare___stream__maybe_partial_res_2_0);
	MR_init_label7(__Compare___stream__maybe_partial_res_2_0,3,2,9,7,5,15,45)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stream__maybe_partial_res_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___stream__maybe_partial_res_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___stream__maybe_partial_res_2_0_i2);
MR_def_label(__Compare___stream__maybe_partial_res_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___stream__maybe_partial_res_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___stream__maybe_partial_res_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___stream__maybe_partial_res_2_0_i7);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4, MR_tempr5, MR_tempr6;
	MR_tempr5 = MR_sv(1);
	MR_tempr1 = MR_ctfield(1, MR_tempr5, 1);
	MR_tempr6 = MR_sv(2);
	MR_tempr2 = MR_ctfield(1, MR_tempr6, 1);
	MR_tempr3 = MR_tempr5;
	MR_sv(1) = MR_tempr2;
	MR_tempr4 = MR_tempr6;
	MR_sv(2) = MR_tempr1;
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_tempr3, 0);
	MR_r3 = MR_ctfield(1, MR_tempr4, 0);
	}
	MR_np_call_localret_ent(builtin__compare_3_0,
		__Compare___stream__maybe_partial_res_2_0_i9);
MR_def_label(__Compare___stream__maybe_partial_res_2_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(__Compare___stream__maybe_partial_res_2_0_i45);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_sv(2);
	MR_r3 = MR_sv(1);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___stream__maybe_partial_res_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___stream__maybe_partial_res_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___stream__maybe_partial_res_2_0_i15);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___stream__maybe_partial_res_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___stream__maybe_partial_res_2_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module24)
	MR_init_entry1(__Unify___stream__name_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stream__name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (strcmp((char *) (MR_Word *) MR_r1, (char *) (MR_Word *) MR_r2) == 0);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module25)
	MR_init_entry1(__Compare___stream__name_0_0);
	MR_init_label2(__Compare___stream__name_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stream__name_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Res;
	MR_String	S1;
	MR_String	S2;
#define	MR_PROC_LABEL	mercury____Compare___stream__name_0_0
	S1 = (MR_String) MR_r1;
	S2 = (MR_String) MR_r2;
{
#line 137 "private_builtin.opt"

    Res = strcmp(S1, S2);
;}
#line 2321 "stream.c"
	MR_r2 = Res;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_GE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___stream__name_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___stream__name_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r2,0)) {
		MR_GOTO_LAB(__Compare___stream__name_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___stream__name_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module26)
	MR_init_entry1(__Unify___stream__res_1_0);
	MR_init_label3(__Unify___stream__res_1_0,12,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stream__res_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___stream__res_1_0_i12);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_tempr1,0,0)) {
		MR_GOTO_LAB(__Unify___stream__res_1_0_i5);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___stream__res_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___stream__res_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TEST(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Unify___stream__res_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___stream__res_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module27)
	MR_init_entry1(__Compare___stream__res_1_0);
	MR_init_label4(__Compare___stream__res_1_0,18,7,5,9)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stream__res_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___stream__res_1_0_i18);
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	if (MR_LTAGS_TESTR(MR_sv(1),0,0)) {
		MR_GOTO_LAB(__Compare___stream__res_1_0_i5);
	}
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___stream__res_1_0_i7);
	}
MR_def_label(__Compare___stream__res_1_0,18)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___stream__res_1_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___stream__res_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_sv(2),0,0)) {
		MR_GOTO_LAB(__Compare___stream__res_1_0_i9);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___stream__res_1_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module28)
	MR_init_entry1(__Unify___stream__res_2_0);
	MR_init_label3(__Unify___stream__res_2_0,16,5,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stream__res_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___stream__res_2_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r4;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	if (MR_PTAG_TESTR(MR_tempr1,1)) {
		MR_GOTO_LAB(__Unify___stream__res_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_tempr2,1)) {
		MR_GOTO_LAB(__Unify___stream__res_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(1, MR_tempr1, 0);
	MR_r3 = MR_ctfield(1, MR_tempr2, 0);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
	}
MR_def_label(__Unify___stream__res_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___stream__res_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),0)) {
		MR_GOTO_LAB(__Unify___stream__res_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___stream__res_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module29)
	MR_init_entry1(__Compare___stream__res_2_0);
	MR_init_label5(__Compare___stream__res_2_0,3,2,7,5,10)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stream__res_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___stream__res_2_0_i3);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_GOTO_LAB(__Compare___stream__res_2_0_i2);
MR_def_label(__Compare___stream__res_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___stream__res_2_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(1),1)) {
		MR_GOTO_LAB(__Compare___stream__res_2_0_i5);
	}
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___stream__res_2_0_i7);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___stream__res_2_0,7)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___stream__res_2_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Compare___stream__res_2_0_i10);
	}
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___stream__res_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(0, MR_sv(1), 0);
	MR_r3 = MR_ctfield(0, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module30)
	MR_init_entry1(__Unify___stream__result_1_0);
	MR_init_label3(__Unify___stream__result_1_0,6,13,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stream__result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___stream__result_1_0_i13);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_r1 = MR_tag(MR_tempr1);
	if ((MR_r1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Unify___stream__result_1_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(4);
	MR_proceed();
	}
MR_def_label(__Unify___stream__result_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___stream__result_1_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___stream__result_1_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___stream__result_1_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module31)
	MR_init_entry1(__Compare___stream__result_1_0);
	MR_init_label5(__Compare___stream__result_1_0,34,5,8,12,15)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stream__result_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i34);
	}
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	MR_tempr1 = MR_r2;
	MR_sv(1) = MR_tempr1;
	MR_tempr2 = MR_r3;
	MR_sv(2) = MR_tempr2;
	MR_sv(3) = MR_r1;
	MR_tempr3 = MR_tag(MR_tempr1);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i12);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr1),0)) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i5);
	}
	MR_tempr3 = MR_tag(MR_tempr2);
	if ((MR_tempr3 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i8);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i8);
	}
	}
MR_def_label(__Compare___stream__result_1_0,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___stream__result_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr2 = MR_sv(2);
	MR_tempr1 = MR_tag(MR_tempr2);
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i8);
	}
	if (MR_INT_NE(MR_unmkbody(MR_tempr2),0)) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i34);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___stream__result_1_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(4);
MR_def_label(__Compare___stream__result_1_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 != MR_mktag((MR_Integer) 0))) {
		MR_GOTO_LAB(__Compare___stream__result_1_0_i15);
	}
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(4);
	}
MR_def_label(__Compare___stream__result_1_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module32)
	MR_init_entry1(__Unify___stream__result_2_0);
	MR_init_label4(__Unify___stream__result_2_0,6,10,16,1)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stream__result_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Unify___stream__result_2_0_i16);
	}
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r3;
	MR_sv(1) = MR_tempr1;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	MR_tempr2 = MR_tag(MR_tempr1);
	MR_r1 = MR_tempr2;
	if ((MR_tempr2 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Unify___stream__result_2_0_i10);
	}
	if ((MR_tempr2 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Unify___stream__result_2_0_i6);
	}
	MR_r1 = (MR_sv(2) == MR_tempr1);
	MR_decr_sp(5);
	MR_proceed();
	}
MR_def_label(__Unify___stream__result_2_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),2)) {
		MR_GOTO_LAB(__Unify___stream__result_2_0_i1);
	}
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___stream__result_2_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_PTAG_TESTR(MR_sv(2),1)) {
		MR_GOTO_LAB(__Unify___stream__result_2_0_i1);
	}
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__unify_2_0);
MR_def_label(__Unify___stream__result_2_0,16)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(__Unify___stream__result_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(5);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module33)
	MR_init_entry1(__Compare___stream__result_2_0);
	MR_init_label7(__Compare___stream__result_2_0,44,12,46,15,20,39,24)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stream__result_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	if ((MR_r3 == MR_r4)) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i44);
	}
	MR_sv(1) = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r1;
	MR_sv(4) = MR_r2;
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(1));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i20);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i12);
	}
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i46);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i39);
	}
	}
MR_def_label(__Compare___stream__result_2_0,44)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___stream__result_2_0,12)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i46);
	}
	if ((MR_tempr1 == MR_mktag((MR_Integer) 2))) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i15);
	}
	}
MR_def_label(__Compare___stream__result_2_0,46)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___stream__result_2_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(4);
	MR_r2 = MR_ctfield(2, MR_sv(1), 0);
	MR_r3 = MR_ctfield(2, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
MR_def_label(__Compare___stream__result_2_0,20)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_tag(MR_sv(2));
	if ((MR_tempr1 == MR_mktag((MR_Integer) 1))) {
		MR_GOTO_LAB(__Compare___stream__result_2_0_i24);
	}
	}
MR_def_label(__Compare___stream__result_2_0,39)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1;
	MR_decr_sp_and_return(5);
MR_def_label(__Compare___stream__result_2_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_ctfield(1, MR_sv(1), 0);
	MR_r3 = MR_ctfield(1, MR_sv(2), 0);
	MR_succip_word = MR_sv(5);
	MR_decr_sp(5);
	MR_np_tailcall_ent(builtin__compare_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module34)
	MR_init_entry1(__Unify___stream__whence_0_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___stream__whence_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_r1 == MR_r2);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module35)
	MR_init_entry1(__Compare___stream__whence_0_0);
	MR_init_label2(__Compare___stream__whence_0_0,2,3)
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___stream__whence_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r3 = MR_r2;
	MR_r2 = MR_r1;
	if (((MR_Integer) MR_r2 >= (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(__Compare___stream__whence_0_0_i2);
	}
	MR_r1 = (MR_Integer) 1;
	MR_proceed();
MR_def_label(__Compare___stream__whence_0_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 != MR_r3)) {
		MR_GOTO_LAB(__Compare___stream__whence_0_0_i3);
	}
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___stream__whence_0_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 2;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(stream_module36)
	MR_init_entry1(fn__f_115_116_114_101_97_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_115_116_114_101_97_109_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

static void mercury__stream_maybe_bunch_0(void)
{
	stream_module0();
	stream_module1();
	stream_module2();
	stream_module3();
	stream_module4();
	stream_module5();
	stream_module6();
	stream_module7();
	stream_module8();
	stream_module9();
	stream_module10();
	stream_module11();
	stream_module12();
	stream_module13();
	stream_module14();
	stream_module15();
	stream_module16();
	stream_module17();
	stream_module18();
	stream_module19();
	stream_module20();
	stream_module21();
	stream_module22();
	stream_module23();
	stream_module24();
	stream_module25();
	stream_module26();
	stream_module27();
	stream_module28();
	stream_module29();
	stream_module30();
	stream_module31();
	stream_module32();
	stream_module33();
	stream_module34();
	stream_module35();
	stream_module36();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__stream__init(void);
void mercury__stream__init_type_tables(void);
void mercury__stream__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__stream__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__stream__init_complexity_procs(void);
#endif

void mercury__stream__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__stream_maybe_bunch_0();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stream__type_ctor_info_whence_0,
		stream__whence_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stream__type_ctor_info_result_2,
		stream__result_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stream__type_ctor_info_result_1,
		stream__result_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stream__type_ctor_info_res_2,
		stream__res_2_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stream__type_ctor_info_res_1,
		stream__res_1_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stream__type_ctor_info_name_0,
		stream__name_0_0);
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_stream__type_ctor_info_maybe_partial_res_2,
		stream__maybe_partial_res_2_0);
	mercury__stream__init_debugger();
}

void mercury__stream__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_stream__type_ctor_info_whence_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stream__type_ctor_info_result_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stream__type_ctor_info_result_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stream__type_ctor_info_res_2);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stream__type_ctor_info_res_1);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stream__type_ctor_info_name_0);
	}
	{
		MR_register_type_ctor_info(
		&mercury_data_stream__type_ctor_info_maybe_partial_res_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_writer_3);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_unbounded_putback_4);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_stream_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_seekable_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_reader_4);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_putback_4);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_output_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_line_oriented_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_input_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_error_1);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_duplex_2);
	}
	{
		MR_register_type_class_decl(
		&mercury_data_stream__type_class_decl_bulk_reader_5);
	}
}


void mercury__stream__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__stream__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__stream);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__stream__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
