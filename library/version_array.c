/*
** Automatically generated from `version_array.m'
** by the Mercury compiler,
** version rotd-2011-09-09, configured for x86_64-unknown-linux-gnu.
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
INIT mercury__version_array__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "version_array.c"
#include "version_array.mh"

#line 28 "version_array.c"
#line 140 "io.int2"
#include "io.mh"

#line 32 "version_array.c"
#line 150 "io.int2"
#include "string.mh"

#line 36 "version_array.c"
#line 31 "bitmap.int2"
#include "bitmap.mh"

#line 40 "version_array.c"
#line 30 "time.int2"
#include "time.mh"

#line 44 "version_array.c"
#line 33 "array.int2"
#include "array.mh"

#line 48 "version_array.c"
#line 4 "builtin.opt"
#include "builtin.mh"

#line 52 "version_array.c"
#line 55 "array.opt"
#include "stm_builtin.mh"

#line 56 "version_array.c"
#line 57 "array.opt"
#include "store.mh"

#line 60 "version_array.c"
#line 14 "exception.opt"
#include "exception.mh"

#line 64 "version_array.c"
#line 156 "io.opt"
#include "dir.mh"

#line 68 "version_array.c"
#line 170 "io.opt"
#include "table_builtin.mh"

#line 72 "version_array.c"
#line 6 "benchmarking.opt"
#include "benchmarking.mh"

#line 76 "version_array.c"
#line 3 "float.opt"
#include "float.mh"

#line 80 "version_array.c"
#line 3 "math.opt"
#include "math.mh"

#line 84 "version_array.c"
#line 4 "char.opt"
#include "char.mh"

#line 88 "version_array.c"
#line 3 "construct.opt"
#include "construct.mh"

#line 92 "version_array.c"
#line 6 "type_desc.opt"
#include "type_desc.mh"

#line 96 "version_array.c"
#line 130 "rtti_implementation.opt"
#include "rtti_implementation.mh"

#line 100 "version_array.c"
#line 4 "int.opt"
#include "int.mh"

#line 104 "version_array.c"
#line 12 "pretty_printer.opt"
#include "pretty_printer.mh"

#line 108 "version_array.c"
#line 9 "private_builtin.opt"
#include "private_builtin.mh"

#line 112 "version_array.c"
#line 889 "version_array.m"


/*
** Returns the number of items in a version array.
*/
static MR_Integer
ML_va_size(ML_va_ptr);

/*
** If I is in range then ML_va_get(VA, I, &X) sets X to the Ith item
** in VA (counting from zero) and returns MR_TRUE.  Otherwise it
** returns MR_FALSE.
*/
static MR_bool
ML_va_get(ML_va_ptr VA, MR_Integer I, MR_Word *Xptr);

/*
** If I is in range then ML_va_set(VA0, I, X, VA) sets VA to be VA0
** updated with the Ith item as X (counting from zero) and
** returns MR_TRUE.  Otherwise it returns MR_FALSE.
*/
static MR_bool
ML_va_set(ML_va_ptr, MR_Integer, MR_Word, ML_va_ptr *,
    MR_AllocSiteInfoPtr alloc_id);
    
/*
** Create a copy of VA0 as a new array.
*/
static ML_va_ptr
ML_va_flat_copy(const ML_va_ptr VA0, MR_AllocSiteInfoPtr alloc_id);
    
/*
** Update the array VA using the override values in VA0
** i.e. recreate the state of the version array as captured in VA0.
*/
static void
ML_va_rewind_into(ML_va_ptr VA, const ML_va_ptr VA0);

/*
** `Rewinds' a version array, invalidating all extant successors
** including the argument.
*/
static ML_va_ptr
ML_va_rewind(ML_va_ptr VA);

/*
** Resize a version array.
*/
static ML_va_ptr
ML_va_resize(ML_va_ptr, MR_Integer, MR_Word, MR_AllocSiteInfoPtr);


#line 166 "version_array.c"
#line 167 "version_array.c"
#ifndef VERSION_ARRAY_DECL_GUARD
#define VERSION_ARRAY_DECL_GUARD

#line 171 "version_array.c"
#line 822 "version_array.m"

/*
** If index is -1 then value is undefined and rest is the latest
** array value.
**
** Otherwise value is the overwritten value at index and rest is
** a pointer to the next version in the chain.
*/

typedef struct ML_va    *ML_va_ptr;

struct ML_va {
    MR_Integer          index;  /* -1 for latest, >= 0 for older */
    MR_Word             value;  /* Valid if index >= 0           */
    union {
        MR_ArrayPtr     array;  /* Valid if index == -1          */
        ML_va_ptr       next;   /* Valid if index >= 0           */
    } rest;
#ifdef MR_THREAD_SAFE
    MercuryLock         *lock;  /* NULL or lock                  */
#endif
};

/*
** Returns a pointer to the latest version of the array.
*/
extern ML_va_ptr
ML_va_get_latest(ML_va_ptr VA);

/*
** Returns the number of items in a version array.
*/
extern MR_Integer
ML_va_size_dolock(ML_va_ptr);

/*
** If I is in range then ML_va_get(VA, I, &X) sets X to the Ith item
** in VA (counting from zero) and returns MR_TRUE.  Otherwise it
** returns MR_FALSE.
*/
extern MR_bool
ML_va_get_dolock(ML_va_ptr, MR_Integer, MR_Word *);

/*
** If I is in range then ML_va_set(VA0, I, X, VA) sets VA to be VA0
** updated with the Ith item as X (counting from zero) and
** returns MR_TRUE.  Otherwise it returns MR_FALSE.
*/
extern MR_bool
ML_va_set_dolock(ML_va_ptr, MR_Integer, MR_Word, ML_va_ptr *,
    MR_AllocSiteInfoPtr);

/*
** `Rewinds' a version array, invalidating all extant successors
** including the argument.
*/
extern ML_va_ptr
ML_va_rewind_dolock(ML_va_ptr);

/*
** Resize a version array.
*/
extern ML_va_ptr
ML_va_resize_dolock(ML_va_ptr, MR_Integer, MR_Word, MR_AllocSiteInfoPtr);


#line 239 "version_array.c"
#line 240 "version_array.c"

#endif
#line 243 "version_array.c"

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
	MR_Word * f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_1 mercury_common_1[];

struct mercury_type_2 {
	MR_Integer f1;
	MR_Word * f2;
};
MR_STATIC_LINKAGE const struct mercury_type_2 mercury_common_2[];

struct mercury_type_3 {
	MR_Word * f1;
};
MR_STATIC_LINKAGE const struct mercury_type_3 mercury_common_3[];

struct mercury_type_4 {
	MR_Word * f1;
	MR_Integer f2;
};
MR_STATIC_LINKAGE const struct mercury_type_4 mercury_common_4[];

struct mercury_type_5 {
	MR_Unsigned f1[2];
};
MR_STATIC_LINKAGE const struct mercury_type_5 mercury_common_5[];

struct mercury_type_6 {
	MR_Word * f1[2];
	MR_Integer f2;
	MR_Word * f3[4];
};
MR_STATIC_LINKAGE const struct mercury_type_6 mercury_common_6[];

extern const MR_TypeCtorInfo_Struct
	mercury_data_version_array__type_ctor_info_version_array_1;
MR_decl_label4(version_array__cmp_version_array_3_0, 2,3,5,25)
MR_decl_label8(version_array__cmp_version_array_2_5_0, 45,2,4,8,10,14,15,48)
MR_decl_label5(version_array__do_foldl2_8_0, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldl2_8_1, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldl2_8_2, 25,4,8,9,2)
MR_decl_label6(version_array__do_foldl2_8_3, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldl2_8_4, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldl2_8_5, 34,4,8,9,2,1)
MR_decl_label5(version_array__do_foldl_pred_6_0, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldl_pred_6_1, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldl_pred_6_2, 25,4,8,9,2)
MR_decl_label6(version_array__do_foldl_pred_6_3, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldl_pred_6_4, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldl_pred_6_5, 34,4,8,9,2,1)
MR_decl_label5(version_array__do_foldr2_7_0, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldr2_7_1, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldr2_7_2, 25,4,8,9,2)
MR_decl_label6(version_array__do_foldr2_7_3, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldr2_7_4, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldr2_7_5, 34,4,8,9,2,1)
MR_decl_label5(version_array__do_foldr_pred_5_0, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldr_pred_5_1, 25,4,8,9,2)
MR_decl_label5(version_array__do_foldr_pred_5_2, 25,4,8,9,2)
MR_decl_label6(version_array__do_foldr_pred_5_3, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldr_pred_5_4, 34,4,8,9,2,1)
MR_decl_label6(version_array__do_foldr_pred_5_5, 34,4,8,9,2,1)
MR_decl_label1(version_array__eq_version_array_2_0, 1)
MR_decl_label8(version_array__eq_version_array_2_3_0, 45,4,8,10,14,15,19,1)
MR_decl_label1(version_array__get_if_in_range_3_0, 1)
MR_decl_label1(version_array__set_4_0, 3)
MR_decl_label1(version_array__set_if_in_range_4_0, 1)
MR_decl_label6(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0, 3,6,10,11,13,15)
MR_decl_label4(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0, 25,4,27,2)
MR_decl_label3(fn__version_array__copy_1_0, 28,6,10)
MR_decl_label5(fn__version_array__do_foldl_func_5_0, 25,4,8,9,2)
MR_decl_label5(fn__version_array__do_foldr_func_4_0, 25,4,8,9,2)
MR_decl_label1(fn__version_array__elem_2_0, 3)
MR_decl_label1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0, 3)
MR_decl_label1(fn__version_array__lookup_2_0, 3)
MR_decl_label3(fn__version_array__version_array_1_0, 14,4,5)
MR_decl_label4(fn__version_array__version_array_2_3_0, 25,3,5,28)
MR_decl_label6(fn__version_array__version_array_to_doc_1_0, 4,19,23,24,26,28)
MR_decl_label1(__Unify___version_array__version_array_1_0, 6)
MR_decl_label2(__Compare___version_array__version_array_1_0, 3,2)
MR_def_extern_entry(fn__version_array__empty_0_0)
MR_def_extern_entry(fn__version_array__init_2_0)
MR_def_extern_entry(fn__version_array__new_2_0)
MR_def_extern_entry(fn__version_array__unsafe_empty_0_0)
MR_def_extern_entry(fn__version_array__unsafe_new_2_0)
MR_def_extern_entry(version_array__set_if_in_range_4_0)
MR_def_extern_entry(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0)
MR_decl_static(fn__version_array__version_array_2_3_0)
MR_def_extern_entry(fn__version_array__version_array_1_0)
MR_def_extern_entry(fn__version_array__from_list_1_0)
MR_def_extern_entry(version_array__get_if_in_range_3_0)
MR_def_extern_entry(fn__version_array__elem_2_0)
MR_def_extern_entry(fn__version_array__lookup_2_0)
MR_def_extern_entry(version_array__set_4_0)
MR_def_extern_entry(fn__version_array__size_1_0)
MR_def_extern_entry(fn__version_array__max_1_0)
MR_def_extern_entry(fn__version_array__resize_3_0)
MR_def_extern_entry(version_array__resize_4_0)
MR_def_extern_entry(fn__version_array__do_foldr_func_4_0)
MR_def_extern_entry(fn__version_array__foldr_3_0)
MR_def_extern_entry(fn__version_array__list_1_0)
MR_def_extern_entry(fn__version_array__to_list_1_0)
MR_def_extern_entry(fn__version_array__do_foldl_func_5_0)
MR_def_extern_entry(fn__version_array__foldl_3_0)
MR_def_extern_entry(version_array__do_foldl_pred_6_0)
MR_def_extern_entry(version_array__do_foldl_pred_6_1)
MR_def_extern_entry(version_array__do_foldl_pred_6_2)
MR_def_extern_entry(version_array__do_foldl_pred_6_3)
MR_def_extern_entry(version_array__do_foldl_pred_6_4)
MR_def_extern_entry(version_array__do_foldl_pred_6_5)
MR_def_extern_entry(version_array__foldl_4_0)
MR_def_extern_entry(version_array__foldl_4_1)
MR_def_extern_entry(version_array__foldl_4_2)
MR_def_extern_entry(version_array__foldl_4_3)
MR_def_extern_entry(version_array__foldl_4_4)
MR_def_extern_entry(version_array__foldl_4_5)
MR_def_extern_entry(version_array__do_foldl2_8_0)
MR_def_extern_entry(version_array__do_foldl2_8_1)
MR_def_extern_entry(version_array__do_foldl2_8_2)
MR_def_extern_entry(version_array__do_foldl2_8_3)
MR_def_extern_entry(version_array__do_foldl2_8_4)
MR_def_extern_entry(version_array__do_foldl2_8_5)
MR_def_extern_entry(version_array__foldl2_6_0)
MR_def_extern_entry(version_array__foldl2_6_1)
MR_def_extern_entry(version_array__foldl2_6_2)
MR_def_extern_entry(version_array__foldl2_6_3)
MR_def_extern_entry(version_array__foldl2_6_4)
MR_def_extern_entry(version_array__foldl2_6_5)
MR_def_extern_entry(version_array__do_foldr_pred_5_0)
MR_def_extern_entry(version_array__do_foldr_pred_5_1)
MR_def_extern_entry(version_array__do_foldr_pred_5_2)
MR_def_extern_entry(version_array__do_foldr_pred_5_3)
MR_def_extern_entry(version_array__do_foldr_pred_5_4)
MR_def_extern_entry(version_array__do_foldr_pred_5_5)
MR_def_extern_entry(version_array__foldr_4_0)
MR_def_extern_entry(version_array__foldr_4_1)
MR_def_extern_entry(version_array__foldr_4_2)
MR_def_extern_entry(version_array__foldr_4_3)
MR_def_extern_entry(version_array__foldr_4_4)
MR_def_extern_entry(version_array__foldr_4_5)
MR_def_extern_entry(version_array__do_foldr2_7_0)
MR_def_extern_entry(version_array__do_foldr2_7_1)
MR_def_extern_entry(version_array__do_foldr2_7_2)
MR_def_extern_entry(version_array__do_foldr2_7_3)
MR_def_extern_entry(version_array__do_foldr2_7_4)
MR_def_extern_entry(version_array__do_foldr2_7_5)
MR_def_extern_entry(version_array__foldr2_6_0)
MR_def_extern_entry(version_array__foldr2_6_1)
MR_def_extern_entry(version_array__foldr2_6_2)
MR_def_extern_entry(version_array__foldr2_6_3)
MR_def_extern_entry(version_array__foldr2_6_4)
MR_def_extern_entry(version_array__foldr2_6_5)
MR_def_extern_entry(fn__version_array__copy_1_0)
MR_def_extern_entry(fn__version_array__unsafe_rewind_1_0)
MR_def_extern_entry(version_array__unsafe_rewind_2_0)
MR_def_extern_entry(fn__version_array__version_array_to_doc_1_0)
MR_decl_static(version_array__eq_version_array_2_3_0)
MR_def_extern_entry(version_array__eq_version_array_2_0)
MR_decl_static(version_array__cmp_version_array_2_5_0)
MR_def_extern_entry(version_array__cmp_version_array_3_0)
MR_def_extern_entry(__Unify___version_array__version_array_1_0)
MR_def_extern_entry(__Compare___version_array__version_array_1_0)
MR_decl_static(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
MR_decl_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)

static const struct mercury_type_0 mercury_common_0[5] =
{
{
MR_string_const("version_array([", 15)
},
{
MR_string_const("", 0)
},
{
MR_string_const("])", 2)
},
{
MR_string_const("  ", 2)
},
{
MR_string_const(", ", 2)
},
};

static const struct mercury_type_1 mercury_common_1[11] =
{
{
{
MR_TAG_COMMON(1,0,2),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,1),
MR_TAG_COMMON(1,1,0)
}
},
{
{
MR_TAG_COMMON(1,0,0),
MR_TAG_COMMON(1,1,1)
}
},
{
{
MR_TAG_COMMON(3,2,1),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,3,0),
MR_TAG_COMMON(1,1,3)
}
},
{
{
MR_TAG_COMMON(3,2,0),
MR_TAG_COMMON(1,1,4)
}
},
{
{
MR_tbmkword(0, 0),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(1,0,4),
MR_TAG_COMMON(1,1,6)
}
},
{
{
MR_TAG_COMMON(3,2,3),
MR_tbmkword(0, 0)
}
},
{
{
MR_TAG_COMMON(2,3,2),
MR_TAG_COMMON(1,1,8)
}
},
{
{
MR_TAG_COMMON(3,2,2),
MR_TAG_COMMON(1,1,9)
}
},
};

static const struct mercury_type_2 mercury_common_2[4] =
{
{
4,
MR_TAG_COMMON(1,0,3)
},
{
4,
MR_tbmkword(0, 2)
},
{
4,
MR_tbmkword(0, 0)
},
{
4,
MR_tbmkword(0, 1)
},
};

static const struct mercury_type_3 mercury_common_3[4] =
{
{
MR_TAG_COMMON(1,1,2)
},
{
MR_TAG_COMMON(1,1,5)
},
{
MR_TAG_COMMON(1,1,7)
},
{
MR_TAG_COMMON(1,1,10)
},
};

static const struct mercury_type_4 mercury_common_4[1] =
{
{
MR_CTOR1_ADDR(version_array, version_array),
1
},
};

static const struct mercury_type_5 mercury_common_5[1] =
{
{
{
1,
17
}
},
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__version_array_to_doc_1_0_1;
extern const MR_TypeCtorInfo_Struct mercury_data_private_builtin__type_ctor_info_type_info_0;
extern const MR_TypeCtorInfo_Struct mercury_data_builtin__type_ctor_info_int_0;
extern const MR_TypeCtorInfo_Struct mercury_data_pretty_printer__type_ctor_info_doc_0;
static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__version_array_to_doc_1_0_2;
static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_1;
static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_2;
static const struct mercury_type_6 mercury_common_6[4] =
{
{
{
(MR_Word *) &mercury_data__closure_layout__fn__version_array__version_array_to_doc_1_0_1,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__version_array__version_array_to_doc_1_0_2,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_1,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
{
{
(MR_Word *) &mercury_data__closure_layout__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_2,
MR_COMMON(5,0)
},
4,
{
MR_CTOR0_ADDR(private_builtin, type_info),
MR_INT_CTOR_ADDR,
MR_COMMON(4,0),
MR_CTOR0_ADDR(pretty_printer, doc)
}
},
};

const MR_TypeCtorInfo_Struct mercury_data_version_array__type_ctor_info_version_array_1 = {
	1,
	15,
	-1,
	MR_TYPECTOR_REP_FOREIGN,
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Unify___version_array__version_array_1_0)),
	MR_MAYBE_STATIC_CODE(MR_ENTRY_AP(__Compare___version_array__version_array_1_0)),
	"version_array",
	"version_array",
	{ 0 },
	{ 0 },
	-1,
	0,
	NULL
};


static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_2 = {
{
MR_FUNCTION,
"version_array",
"version_array",
"lambda_version_array_m_1820",
4,
0
},
"version_array",
"version_array.m",
1820,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_1 = {
{
MR_FUNCTION,
"version_array",
"version_array",
"lambda_version_array_m_1820",
4,
0
},
"version_array",
"version_array.m",
1820,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__version_array_to_doc_1_0_2 = {
{
MR_FUNCTION,
"version_array",
"version_array",
"lambda_version_array_m_1820",
4,
0
},
"version_array",
"version_array.m",
1820,
"33"
};

static const MR_UserClosureId
mercury_data__closure_layout__fn__version_array__version_array_to_doc_1_0_1 = {
{
MR_FUNCTION,
"version_array",
"version_array",
"lambda_version_array_m_1820",
4,
0
},
"version_array",
"version_array.m",
1820,
"33"
};



MR_BEGIN_MODULE(version_array_module0)
	MR_init_entry1(fn__version_array__empty_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__empty_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__empty_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__empty_0_0
	MR_OBTAIN_GLOBAL_LOCK("empty");
{
#line 511 "version_array.m"

    MR_Word array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = 0;

#ifdef MR_THREAD_SAFE
    MR_incr_hp_type_msg(VA->lock, MercuryLock, MR_ALLOC_ID, NULL);
    pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
#endif
;}
#line 752 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("empty");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module1)
	MR_init_entry1(fn__version_array__init_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__init_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'init'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__init_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__init_2_0
	N = MR_r2;
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("init");
{
#line 588 "version_array.m"

    MR_Integer  i;
    MR_Word     array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, N + 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }

#ifdef MR_THREAD_SAFE
    MR_incr_hp_type_msg(VA->lock, MercuryLock, MR_ALLOC_ID, NULL);
    pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
#endif
;}
#line 811 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("init");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module2)
	MR_init_entry1(fn__version_array__new_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__new_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'new'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__new_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_array__init_2_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module3)
	MR_init_entry1(fn__version_array__unsafe_empty_0_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__unsafe_empty_0_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_empty'/1 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__unsafe_empty_0_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__unsafe_empty_0_0
	MR_OBTAIN_GLOBAL_LOCK("unsafe_empty");
{
#line 550 "version_array.m"

    MR_Word array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = 0;

#ifdef MR_THREAD_SAFE
    VA->lock             = NULL;
#endif
;}
#line 881 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_empty");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module4)
	MR_init_entry1(fn__version_array__unsafe_new_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__unsafe_new_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_new'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__unsafe_new_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__unsafe_new_2_0
	N = MR_r2;
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("unsafe_new");
{
#line 632 "version_array.m"

    MR_Integer  i;
    MR_Word     array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array,  N + 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }

#ifdef MR_THREAD_SAFE
    VA->lock             = NULL;
#endif
;}
#line 939 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_new");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module5)
	MR_init_entry1(version_array__set_if_in_range_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__set_if_in_range_4_0);
	MR_init_label1(version_array__set_if_in_range_4_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set_if_in_range'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__set_if_in_range_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_array__set_if_in_range_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	I = MR_r3;
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 766 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 984 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__set_if_in_range_4_0_i1);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(version_array__set_if_in_range_4_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(fn__require__func_error_1_0);

MR_BEGIN_MODULE(version_array_module6)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_init_label1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem :='/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA0);
	I = MR_r2;
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 766 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 1038 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0_i3);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_101_108_101_109_32_58_61_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module7)
	MR_init_entry1(fn__version_array__version_array_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__version_array_2_3_0);
	MR_init_label4(fn__version_array__version_array_2_3_0,25,3,5,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'version_array_2'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_array__version_array_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
MR_def_label(fn__version_array__version_array_2_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r3,0,0)) {
		MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i3);
	}
	MR_r1 = MR_r4;
	MR_decr_sp_and_return(4);
MR_def_label(fn__version_array__version_array_2_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3, MR_tempr4;
	MR_tempr1 = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	MR_tempr4 = MR_r3;
	MR_tempr2 = MR_tfield(1, MR_tempr4, 1);
	MR_tempr3 = MR_tfield(1, MR_tempr4, 0);
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__version_array_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA0);
	I = MR_r2;
	X = MR_tempr3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 766 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 1115 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i5);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r4);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r3 = MR_tempr2;
	MR_r2 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i25);
	}
MR_def_label(fn__version_array__version_array_2_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	}
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__version_array_2_3_0_i28);
MR_def_label(fn__version_array__version_array_2_3_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(4);
	MR_GOTO_LAB(fn__version_array__version_array_2_3_0_i25);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(list__length_2_3_0);

MR_BEGIN_MODULE(version_array_module8)
	MR_init_entry1(fn__version_array__version_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__version_array_1_0);
	MR_init_label3(fn__version_array__version_array_1_0,14,4,5)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'version_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__version_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_LTAGS_TESTR(MR_r2,0,0)) {
		MR_GOTO_LAB(fn__version_array__version_array_1_0_i14);
	}
	{
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__version_array_1_0
	MR_OBTAIN_GLOBAL_LOCK("empty");
{
#line 511 "version_array.m"

    MR_Word array;

    MR_incr_hp_type_msg(VA, struct ML_va,
        MR_ALLOC_ID, "version_array.version_array/1");
    MR_incr_hp_msg(array, 1,
        MR_ALLOC_ID, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = 0;

#ifdef MR_THREAD_SAFE
    MR_incr_hp_type_msg(VA->lock, MercuryLock, MR_ALLOC_ID, NULL);
    pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
#endif
;}
#line 1193 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("empty");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
MR_def_label(fn__version_array__version_array_1_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_tfield(1, MR_r2, 0);
	MR_sv(2) = MR_tfield(1, MR_r2, 1);
	MR_sv(3) = MR_r1;
	MR_r2 = MR_sv(2);
	MR_r3 = (MR_Integer) 0;
	MR_np_call_localret_ent(list__length_2_3_0,
		fn__version_array__version_array_1_0_i4);
MR_def_label(fn__version_array__version_array_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = ((MR_Integer) 1 + (MR_Integer) MR_tempr1);
	MR_r3 = MR_sv(1);
	}
	MR_np_call_localret_ent(fn__version_array__init_2_0,
		fn__version_array__version_array_1_0_i5);
MR_def_label(fn__version_array__version_array_1_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(3);
	MR_r2 = (MR_Integer) 1;
	MR_r3 = MR_sv(2);
	MR_r4 = MR_tempr1;
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(fn__version_array__version_array_2_3_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module9)
	MR_init_entry1(fn__version_array__from_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__from_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'from_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__from_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_array__version_array_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module10)
	MR_init_entry1(version_array__get_if_in_range_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__get_if_in_range_3_0);
	MR_init_label1(version_array__get_if_in_range_3_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_if_in_range'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__get_if_in_range_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__get_if_in_range_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1292 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__get_if_in_range_3_0_i1);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_TRUE;
	MR_proceed();
MR_def_label(version_array__get_if_in_range_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module11)
	MR_init_entry1(fn__version_array__elem_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__elem_2_0);
	MR_init_label1(fn__version_array__elem_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'elem'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__elem_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__elem_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1343 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__elem_2_0_i3);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__version_array__elem_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module12)
	MR_init_entry1(fn__version_array__lookup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__lookup_2_0);
	MR_init_label1(fn__version_array__lookup_2_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'lookup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__lookup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__lookup_2_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1394 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__lookup_2_0_i3);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__version_array__lookup_2_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module13)
	MR_init_entry1(version_array__set_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__set_4_0);
	MR_init_label1(version_array__set_4_0,3)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'set'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__set_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	I;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_array__set_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA0);
	I = MR_r2;
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("set_if_in_range");
{
#line 766 "version_array.m"

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);
;}
#line 1447 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("set_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__set_4_0_i3);
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r2);
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(version_array__set_4_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 0, (MR_Integer) 2);
	MR_tfield(0, MR_tempr1, 0) = (MR_Word) MR_CTOR1_ADDR(version_array, version_array);
	MR_tfield(0, MR_tempr1, 1) = MR_r1;
	MR_r1 = MR_tempr1;
	MR_r2 = (MR_Word) MR_string_const("version_array.\'elem :=\': index out of range", 43);
	MR_np_tailcall_ent(fn__require__func_error_1_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module14)
	MR_init_entry1(fn__version_array__size_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__size_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'size'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__size_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__size_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 1499 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r1 = N;
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module15)
	MR_init_entry1(fn__version_array__max_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__max_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'max'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__max_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__max_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 1536 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r2 = N;
#undef	MR_PROC_LABEL
	}
	MR_r1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module16)
	MR_init_entry1(fn__version_array__resize_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__resize_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__resize_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__resize_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	N = MR_r3;
	X = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 675 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);
;}
#line 1578 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module17)
	MR_init_entry1(version_array__resize_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__resize_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'resize'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__resize_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_array__resize_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA0);
	N = MR_r2;
	X = MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 675 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);
;}
#line 1619 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_2);

MR_BEGIN_MODULE(version_array_module18)
	MR_init_entry1(fn__version_array__do_foldr_func_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__do_foldr_func_4_0);
	MR_init_label5(fn__version_array__do_foldr_func_4_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_func'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__do_foldr_func_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(fn__version_array__do_foldr_func_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) 0 > (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(fn__version_array__do_foldr_func_4_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__do_foldr_func_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1670 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__do_foldr_func_4_0_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(fn__version_array__do_foldr_func_4_0_i8);
MR_def_label(fn__version_array__do_foldr_func_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__do_foldr_func_4_0_i8);
MR_def_label(fn__version_array__do_foldr_func_4_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_array__do_foldr_func_4_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__version_array__do_foldr_func_4_0_i9);
MR_def_label(fn__version_array__do_foldr_func_4_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(4) - (MR_Integer) 1);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(fn__version_array__do_foldr_func_4_0_i25);
	}
MR_def_label(fn__version_array__do_foldr_func_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module19)
	MR_init_entry1(fn__version_array__foldr_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__foldr_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__foldr_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__foldr_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 1749 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_np_tailcall_ent(fn__version_array__do_foldr_func_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module20)
	MR_init_entry1(fn__version_array__list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__list_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 1790 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_r3 = (MR_Word) MR_tbmkword(0, 0);
	MR_r4 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_np_tailcall_ent(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module21)
	MR_init_entry1(fn__version_array__to_list_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__to_list_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'to_list'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__to_list_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_np_tailcall_ent(fn__version_array__list_1_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module22)
	MR_init_entry1(fn__version_array__do_foldl_func_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__do_foldl_func_5_0);
	MR_init_label5(fn__version_array__do_foldl_func_5_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_func'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__do_foldl_func_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(fn__version_array__do_foldl_func_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(fn__version_array__do_foldl_func_5_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__do_foldl_func_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1864 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__do_foldl_func_5_0_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_r3 = MR_r5;
	MR_sv(4) = MR_r6;
	MR_sv(5) = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(fn__version_array__do_foldl_func_5_0_i8);
MR_def_label(fn__version_array__do_foldl_func_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__do_foldl_func_5_0_i8);
MR_def_label(fn__version_array__do_foldl_func_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(fn__version_array__do_foldl_func_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__fn__version_array__do_foldl_func_5_0_i9);
MR_def_label(fn__version_array__do_foldl_func_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = MR_tempr1;
	MR_r6 = ((MR_Integer) MR_sv(4) + (MR_Integer) 1);
	MR_r7 = MR_sv(5);
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(fn__version_array__do_foldl_func_5_0_i25);
	}
MR_def_label(fn__version_array__do_foldl_func_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r5;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module23)
	MR_init_entry1(fn__version_array__foldl_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__foldl_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__foldl_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__foldl_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 1943 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r7 = N;
#undef	MR_PROC_LABEL
	}
	MR_r6 = (MR_Integer) 0;
	MR_np_tailcall_ent(fn__version_array__do_foldl_func_5_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module24)
	MR_init_entry1(version_array__do_foldl_pred_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl_pred_6_0);
	MR_init_label5(version_array__do_foldl_pred_6_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl_pred_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl_pred_6_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl_pred_6_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 1994 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl_pred_6_0_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__do_foldl_pred_6_0_i8);
MR_def_label(version_array__do_foldl_pred_6_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl_pred_6_0_i8);
MR_def_label(version_array__do_foldl_pred_6_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl_pred_6_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldl_pred_6_0_i9);
MR_def_label(version_array__do_foldl_pred_6_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__do_foldl_pred_6_0_i25);
	}
MR_def_label(version_array__do_foldl_pred_6_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module25)
	MR_init_entry1(version_array__do_foldl_pred_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl_pred_6_1);
	MR_init_label5(version_array__do_foldl_pred_6_1,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl_pred_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl_pred_6_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_1_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl_pred_6_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2086 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl_pred_6_1_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__do_foldl_pred_6_1_i8);
MR_def_label(version_array__do_foldl_pred_6_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl_pred_6_1_i8);
MR_def_label(version_array__do_foldl_pred_6_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl_pred_6_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldl_pred_6_1_i9);
MR_def_label(version_array__do_foldl_pred_6_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__do_foldl_pred_6_1_i25);
	}
MR_def_label(version_array__do_foldl_pred_6_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module26)
	MR_init_entry1(version_array__do_foldl_pred_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl_pred_6_2);
	MR_init_label5(version_array__do_foldl_pred_6_2,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl_pred_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl_pred_6_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_2_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl_pred_6_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2178 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl_pred_6_2_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__do_foldl_pred_6_2_i8);
MR_def_label(version_array__do_foldl_pred_6_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl_pred_6_2_i8);
MR_def_label(version_array__do_foldl_pred_6_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl_pred_6_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldl_pred_6_2_i9);
MR_def_label(version_array__do_foldl_pred_6_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__do_foldl_pred_6_2_i25);
	}
MR_def_label(version_array__do_foldl_pred_6_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module27)
	MR_init_entry1(version_array__do_foldl_pred_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl_pred_6_3);
	MR_init_label6(version_array__do_foldl_pred_6_3,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl_pred_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl_pred_6_3,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_3_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl_pred_6_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2270 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl_pred_6_3_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__do_foldl_pred_6_3_i8);
MR_def_label(version_array__do_foldl_pred_6_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl_pred_6_3_i8);
MR_def_label(version_array__do_foldl_pred_6_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl_pred_6_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldl_pred_6_3_i9);
MR_def_label(version_array__do_foldl_pred_6_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_3_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__do_foldl_pred_6_3_i34);
	}
MR_def_label(version_array__do_foldl_pred_6_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(version_array__do_foldl_pred_6_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module28)
	MR_init_entry1(version_array__do_foldl_pred_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl_pred_6_4);
	MR_init_label6(version_array__do_foldl_pred_6_4,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl_pred_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl_pred_6_4,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_4_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl_pred_6_4
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2370 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl_pred_6_4_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__do_foldl_pred_6_4_i8);
MR_def_label(version_array__do_foldl_pred_6_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl_pred_6_4_i8);
MR_def_label(version_array__do_foldl_pred_6_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl_pred_6_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldl_pred_6_4_i9);
MR_def_label(version_array__do_foldl_pred_6_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_4_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__do_foldl_pred_6_4_i34);
	}
MR_def_label(version_array__do_foldl_pred_6_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(version_array__do_foldl_pred_6_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module29)
	MR_init_entry1(version_array__do_foldl_pred_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl_pred_6_5);
	MR_init_label6(version_array__do_foldl_pred_6_5,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl_pred'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl_pred_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(8);
	MR_sv(8) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl_pred_6_5,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r5 >= (MR_Integer) MR_r6)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_5_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl_pred_6_5
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2470 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl_pred_6_5_i4);
	MR_r8 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_sv(4) = MR_r6;
	MR_r3 = MR_r7;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r8;
	MR_GOTO_LAB(version_array__do_foldl_pred_6_5_i8);
MR_def_label(version_array__do_foldl_pred_6_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl_pred_6_5_i8);
MR_def_label(version_array__do_foldl_pred_6_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl_pred_6_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldl_pred_6_5_i9);
MR_def_label(version_array__do_foldl_pred_6_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldl_pred_6_5_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r6 = MR_sv(4);
	MR_r7 = MR_tempr1;
	MR_succip_word = MR_sv(8);
	MR_GOTO_LAB(version_array__do_foldl_pred_6_5_i34);
	}
MR_def_label(version_array__do_foldl_pred_6_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(8);
MR_def_label(version_array__do_foldl_pred_6_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(8);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module30)
	MR_init_entry1(version_array__foldl_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 2557 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldl_pred_6_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module31)
	MR_init_entry1(version_array__foldl_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 2600 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldl_pred_6_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module32)
	MR_init_entry1(version_array__foldl_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 2643 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldl_pred_6_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module33)
	MR_init_entry1(version_array__foldl_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 2686 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldl_pred_6_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module34)
	MR_init_entry1(version_array__foldl_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 2729 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldl_pred_6_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module35)
	MR_init_entry1(version_array__foldl_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 2772 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r6 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r5;
	MR_r5 = (MR_Integer) 0;
	MR_r7 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldl_pred_6_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_declare_entry(mercury__do_call_closure_3);

MR_BEGIN_MODULE(version_array_module36)
	MR_init_entry1(version_array__do_foldl2_8_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl2_8_0);
	MR_init_label5(version_array__do_foldl2_8_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl2_8_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl2_8_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl2_8_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2829 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl2_8_0_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r10;
	MR_GOTO_LAB(version_array__do_foldl2_8_0_i8);
MR_def_label(version_array__do_foldl2_8_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl2_8_0_i8);
MR_def_label(version_array__do_foldl2_8_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl2_8_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldl2_8_0_i9);
MR_def_label(version_array__do_foldl2_8_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(version_array__do_foldl2_8_0_i25);
	}
MR_def_label(version_array__do_foldl2_8_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module37)
	MR_init_entry1(version_array__do_foldl2_8_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl2_8_1);
	MR_init_label5(version_array__do_foldl2_8_1,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl2_8_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl2_8_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_1_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl2_8_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 2927 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl2_8_1_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r10;
	MR_GOTO_LAB(version_array__do_foldl2_8_1_i8);
MR_def_label(version_array__do_foldl2_8_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl2_8_1_i8);
MR_def_label(version_array__do_foldl2_8_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl2_8_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldl2_8_1_i9);
MR_def_label(version_array__do_foldl2_8_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(version_array__do_foldl2_8_1_i25);
	}
MR_def_label(version_array__do_foldl2_8_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module38)
	MR_init_entry1(version_array__do_foldl2_8_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl2_8_2);
	MR_init_label5(version_array__do_foldl2_8_2,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl2_8_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl2_8_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_2_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl2_8_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3025 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl2_8_2_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r10;
	MR_GOTO_LAB(version_array__do_foldl2_8_2_i8);
MR_def_label(version_array__do_foldl2_8_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl2_8_2_i8);
MR_def_label(version_array__do_foldl2_8_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl2_8_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldl2_8_2_i9);
MR_def_label(version_array__do_foldl2_8_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(7);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(version_array__do_foldl2_8_2_i25);
	}
MR_def_label(version_array__do_foldl2_8_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r8;
	MR_r2 = MR_r9;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module39)
	MR_init_entry1(version_array__do_foldl2_8_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl2_8_3);
	MR_init_label6(version_array__do_foldl2_8_3,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl2_8_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl2_8_3,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_3_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl2_8_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3123 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl2_8_3_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r10;
	MR_GOTO_LAB(version_array__do_foldl2_8_3_i8);
MR_def_label(version_array__do_foldl2_8_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl2_8_3_i8);
MR_def_label(version_array__do_foldl2_8_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl2_8_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldl2_8_3_i9);
MR_def_label(version_array__do_foldl2_8_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_3_i1);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(version_array__do_foldl2_8_3_i34);
	}
MR_def_label(version_array__do_foldl2_8_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(version_array__do_foldl2_8_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module40)
	MR_init_entry1(version_array__do_foldl2_8_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl2_8_4);
	MR_init_label6(version_array__do_foldl2_8_4,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl2_8_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl2_8_4,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_4_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl2_8_4
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3229 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl2_8_4_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r10;
	MR_GOTO_LAB(version_array__do_foldl2_8_4_i8);
MR_def_label(version_array__do_foldl2_8_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl2_8_4_i8);
MR_def_label(version_array__do_foldl2_8_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl2_8_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldl2_8_4_i9);
MR_def_label(version_array__do_foldl2_8_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_4_i1);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(version_array__do_foldl2_8_4_i34);
	}
MR_def_label(version_array__do_foldl2_8_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(version_array__do_foldl2_8_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module41)
	MR_init_entry1(version_array__do_foldl2_8_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldl2_8_5);
	MR_init_label6(version_array__do_foldl2_8_5,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldl2'/8 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldl2_8_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(10);
	MR_sv(10) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldl2_8_5,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r6 >= (MR_Integer) MR_r7)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_5_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldl2_8_5
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3335 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldl2_8_5_i4);
	MR_r10 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(7) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(4) = MR_r7;
	MR_sv(9) = MR_r3;
	MR_r3 = MR_r8;
	MR_r4 = MR_r9;
	MR_sv(8) = MR_r2;
	MR_r2 = MR_r10;
	MR_GOTO_LAB(version_array__do_foldl2_8_5_i8);
MR_def_label(version_array__do_foldl2_8_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(8) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldl2_8_5_i8);
MR_def_label(version_array__do_foldl2_8_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldl2_8_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldl2_8_5_i9);
MR_def_label(version_array__do_foldl2_8_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldl2_8_5_i1);
	}
	MR_r1 = MR_sv(7);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(8);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(9);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) + (MR_Integer) 1);
	MR_r7 = MR_sv(4);
	MR_r8 = MR_tempr1;
	MR_r9 = MR_tempr2;
	MR_succip_word = MR_sv(10);
	MR_GOTO_LAB(version_array__do_foldl2_8_5_i34);
	}
MR_def_label(version_array__do_foldl2_8_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r8;
	MR_r3 = MR_r9;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(10);
MR_def_label(version_array__do_foldl2_8_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(10);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module42)
	MR_init_entry1(version_array__foldl2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl2_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 3430 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(version_array__do_foldl2_8_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module43)
	MR_init_entry1(version_array__foldl2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl2_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 3476 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(version_array__do_foldl2_8_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module44)
	MR_init_entry1(version_array__foldl2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl2_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 3522 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(version_array__do_foldl2_8_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module45)
	MR_init_entry1(version_array__foldl2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl2_6_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl2_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 3568 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(version_array__do_foldl2_8_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module46)
	MR_init_entry1(version_array__foldl2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl2_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl2_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 3614 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(version_array__do_foldl2_8_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module47)
	MR_init_entry1(version_array__foldl2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldl2_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldl2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldl2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldl2_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 3660 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = (MR_Integer) 0;
	MR_tempr3 = MR_r7;
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_r9 = MR_tempr3;
	MR_np_tailcall_ent(version_array__do_foldl2_8_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module48)
	MR_init_entry1(version_array__do_foldr_pred_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr_pred_5_0);
	MR_init_label5(version_array__do_foldr_pred_5_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr_pred_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr_pred_5_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr_pred_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3717 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr_pred_5_0_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(version_array__do_foldr_pred_5_0_i8);
MR_def_label(version_array__do_foldr_pred_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr_pred_5_0_i8);
MR_def_label(version_array__do_foldr_pred_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr_pred_5_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldr_pred_5_0_i9);
MR_def_label(version_array__do_foldr_pred_5_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__do_foldr_pred_5_0_i25);
	}
MR_def_label(version_array__do_foldr_pred_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module49)
	MR_init_entry1(version_array__do_foldr_pred_5_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr_pred_5_1);
	MR_init_label5(version_array__do_foldr_pred_5_1,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/5 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr_pred_5_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr_pred_5_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_1_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr_pred_5_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3807 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr_pred_5_1_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(version_array__do_foldr_pred_5_1_i8);
MR_def_label(version_array__do_foldr_pred_5_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr_pred_5_1_i8);
MR_def_label(version_array__do_foldr_pred_5_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr_pred_5_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldr_pred_5_1_i9);
MR_def_label(version_array__do_foldr_pred_5_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__do_foldr_pred_5_1_i25);
	}
MR_def_label(version_array__do_foldr_pred_5_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module50)
	MR_init_entry1(version_array__do_foldr_pred_5_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr_pred_5_2);
	MR_init_label5(version_array__do_foldr_pred_5_2,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/5 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr_pred_5_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr_pred_5_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_2_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr_pred_5_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3897 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr_pred_5_2_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(version_array__do_foldr_pred_5_2_i8);
MR_def_label(version_array__do_foldr_pred_5_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr_pred_5_2_i8);
MR_def_label(version_array__do_foldr_pred_5_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr_pred_5_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldr_pred_5_2_i9);
MR_def_label(version_array__do_foldr_pred_5_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(5);
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__do_foldr_pred_5_2_i25);
	}
MR_def_label(version_array__do_foldr_pred_5_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r6;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module51)
	MR_init_entry1(version_array__do_foldr_pred_5_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr_pred_5_3);
	MR_init_label6(version_array__do_foldr_pred_5_3,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/5 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr_pred_5_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr_pred_5_3,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_3_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr_pred_5_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 3987 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr_pred_5_3_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(version_array__do_foldr_pred_5_3_i8);
MR_def_label(version_array__do_foldr_pred_5_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr_pred_5_3_i8);
MR_def_label(version_array__do_foldr_pred_5_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr_pred_5_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldr_pred_5_3_i9);
MR_def_label(version_array__do_foldr_pred_5_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_3_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__do_foldr_pred_5_3_i34);
	}
MR_def_label(version_array__do_foldr_pred_5_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(version_array__do_foldr_pred_5_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module52)
	MR_init_entry1(version_array__do_foldr_pred_5_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr_pred_5_4);
	MR_init_label6(version_array__do_foldr_pred_5_4,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/5 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr_pred_5_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr_pred_5_4,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_4_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr_pred_5_4
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4085 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr_pred_5_4_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(version_array__do_foldr_pred_5_4_i8);
MR_def_label(version_array__do_foldr_pred_5_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr_pred_5_4_i8);
MR_def_label(version_array__do_foldr_pred_5_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr_pred_5_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldr_pred_5_4_i9);
MR_def_label(version_array__do_foldr_pred_5_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_4_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__do_foldr_pred_5_4_i34);
	}
MR_def_label(version_array__do_foldr_pred_5_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(version_array__do_foldr_pred_5_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module53)
	MR_init_entry1(version_array__do_foldr_pred_5_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr_pred_5_5);
	MR_init_label6(version_array__do_foldr_pred_5_5,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr_pred'/5 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr_pred_5_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr_pred_5_5,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r5,0)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_5_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr_pred_5_5
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r5;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4183 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr_pred_5_5_i4);
	MR_r7 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(5) = MR_r1;
	MR_r1 = MR_r3;
	MR_sv(2) = MR_r4;
	MR_sv(3) = MR_r5;
	MR_r3 = MR_r6;
	MR_sv(6) = MR_r2;
	MR_r2 = MR_r7;
	MR_GOTO_LAB(version_array__do_foldr_pred_5_5_i8);
MR_def_label(version_array__do_foldr_pred_5_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr_pred_5_5_i8);
MR_def_label(version_array__do_foldr_pred_5_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr_pred_5_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_2),
		mercury__version_array__do_foldr_pred_5_5_i9);
MR_def_label(version_array__do_foldr_pred_5_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldr_pred_5_5_i1);
	}
	MR_r1 = MR_sv(5);
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(6);
	MR_r3 = MR_sv(1);
	MR_r4 = MR_sv(2);
	MR_r5 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r6 = MR_tempr1;
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__do_foldr_pred_5_5_i34);
	}
MR_def_label(version_array__do_foldr_pred_5_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r6;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(7);
MR_def_label(version_array__do_foldr_pred_5_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module54)
	MR_init_entry1(version_array__foldr_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr_4_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr_4_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 4270 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(version_array__do_foldr_pred_5_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module55)
	MR_init_entry1(version_array__foldr_4_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr_4_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr_4_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr_4_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 4313 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(version_array__do_foldr_pred_5_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module56)
	MR_init_entry1(version_array__foldr_4_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr_4_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr_4_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr_4_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 4356 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(version_array__do_foldr_pred_5_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module57)
	MR_init_entry1(version_array__foldr_4_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr_4_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr_4_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr_4_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 4399 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(version_array__do_foldr_pred_5_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module58)
	MR_init_entry1(version_array__foldr_4_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr_4_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr_4_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr_4_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 4442 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(version_array__do_foldr_pred_5_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module59)
	MR_init_entry1(version_array__foldr_4_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr_4_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr'/4 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr_4_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr_4_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 4485 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r5;
	MR_r5 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_r6 = MR_tempr2;
	MR_np_tailcall_ent(version_array__do_foldr_pred_5_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module60)
	MR_init_entry1(version_array__do_foldr2_7_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr2_7_0);
	MR_init_label5(version_array__do_foldr2_7_0,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/7 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr2_7_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr2_7_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_0_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr2_7_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4539 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr2_7_0_i4);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r9;
	MR_GOTO_LAB(version_array__do_foldr2_7_0_i8);
MR_def_label(version_array__do_foldr2_7_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr2_7_0_i8);
MR_def_label(version_array__do_foldr2_7_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr2_7_0));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldr2_7_0_i9);
MR_def_label(version_array__do_foldr2_7_0,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_array__do_foldr2_7_0_i25);
	}
MR_def_label(version_array__do_foldr2_7_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module61)
	MR_init_entry1(version_array__do_foldr2_7_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr2_7_1);
	MR_init_label5(version_array__do_foldr2_7_1,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/7 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr2_7_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr2_7_1,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_1_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr2_7_1
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4635 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr2_7_1_i4);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r9;
	MR_GOTO_LAB(version_array__do_foldr2_7_1_i8);
MR_def_label(version_array__do_foldr2_7_1,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr2_7_1_i8);
MR_def_label(version_array__do_foldr2_7_1,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr2_7_1));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldr2_7_1_i9);
MR_def_label(version_array__do_foldr2_7_1,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_array__do_foldr2_7_1_i25);
	}
MR_def_label(version_array__do_foldr2_7_1,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module62)
	MR_init_entry1(version_array__do_foldr2_7_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr2_7_2);
	MR_init_label5(version_array__do_foldr2_7_2,25,4,8,9,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/7 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr2_7_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr2_7_2,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_2_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr2_7_2
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4731 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr2_7_2_i4);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r9;
	MR_GOTO_LAB(version_array__do_foldr2_7_2_i8);
MR_def_label(version_array__do_foldr2_7_2,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr2_7_2_i8);
MR_def_label(version_array__do_foldr2_7_2,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr2_7_2));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldr2_7_2_i9);
MR_def_label(version_array__do_foldr2_7_2,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r1;
	MR_r1 = MR_sv(6);
	MR_tempr2 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_array__do_foldr2_7_2_i25);
	}
MR_def_label(version_array__do_foldr2_7_2,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r7;
	MR_r2 = MR_r8;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module63)
	MR_init_entry1(version_array__do_foldr2_7_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr2_7_3);
	MR_init_label6(version_array__do_foldr2_7_3,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/7 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr2_7_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr2_7_3,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_3_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr2_7_3
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4827 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr2_7_3_i4);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r9;
	MR_GOTO_LAB(version_array__do_foldr2_7_3_i8);
MR_def_label(version_array__do_foldr2_7_3,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr2_7_3_i8);
MR_def_label(version_array__do_foldr2_7_3,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr2_7_3));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldr2_7_3_i9);
MR_def_label(version_array__do_foldr2_7_3,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_3_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_array__do_foldr2_7_3_i34);
	}
MR_def_label(version_array__do_foldr2_7_3,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(version_array__do_foldr2_7_3,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module64)
	MR_init_entry1(version_array__do_foldr2_7_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr2_7_4);
	MR_init_label6(version_array__do_foldr2_7_4,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/7 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr2_7_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr2_7_4,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_4_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr2_7_4
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 4931 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr2_7_4_i4);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r9;
	MR_GOTO_LAB(version_array__do_foldr2_7_4_i8);
MR_def_label(version_array__do_foldr2_7_4,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr2_7_4_i8);
MR_def_label(version_array__do_foldr2_7_4,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr2_7_4));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldr2_7_4_i9);
MR_def_label(version_array__do_foldr2_7_4,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_4_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_array__do_foldr2_7_4_i34);
	}
MR_def_label(version_array__do_foldr2_7_4,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(version_array__do_foldr2_7_4,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module65)
	MR_init_entry1(version_array__do_foldr2_7_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__do_foldr2_7_5);
	MR_init_label6(version_array__do_foldr2_7_5,34,4,8,9,2,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_foldr2'/7 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__do_foldr2_7_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(9);
	MR_sv(9) = (MR_Word) MR_succip;
MR_def_label(version_array__do_foldr2_7_5,34)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r6,0)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_5_i2);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__do_foldr2_7_5
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	I = MR_r6;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5035 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__do_foldr2_7_5_i4);
	MR_r9 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(6) = MR_r1;
	MR_r1 = MR_r4;
	MR_sv(2) = MR_r5;
	MR_sv(3) = MR_r6;
	MR_sv(8) = MR_r3;
	MR_r3 = MR_r7;
	MR_r4 = MR_r8;
	MR_sv(7) = MR_r2;
	MR_r2 = MR_r9;
	MR_GOTO_LAB(version_array__do_foldr2_7_5_i8);
MR_def_label(version_array__do_foldr2_7_5,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(7) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__do_foldr2_7_5_i8);
MR_def_label(version_array__do_foldr2_7_5,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r1;
	MR_set_prof_ho_caller_proc(MR_ENTRY_AP(version_array__do_foldr2_7_5));
	MR_noprof_call_localret(MR_ENTRY(mercury__do_call_closure_3),
		mercury__version_array__do_foldr2_7_5_i9);
MR_def_label(version_array__do_foldr2_7_5,9)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__do_foldr2_7_5_i1);
	}
	MR_r1 = MR_sv(6);
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = MR_sv(7);
	MR_tempr2 = MR_r3;
	MR_r3 = MR_sv(8);
	MR_r4 = MR_sv(1);
	MR_r5 = MR_sv(2);
	MR_r6 = ((MR_Integer) MR_sv(3) - (MR_Integer) 1);
	MR_r7 = MR_tempr1;
	MR_r8 = MR_tempr2;
	MR_succip_word = MR_sv(9);
	MR_GOTO_LAB(version_array__do_foldr2_7_5_i34);
	}
MR_def_label(version_array__do_foldr2_7_5,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = MR_r7;
	MR_r3 = MR_r8;
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(9);
MR_def_label(version_array__do_foldr2_7_5,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(9);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module66)
	MR_init_entry1(version_array__foldr2_6_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr2_6_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr2_6_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr2_6_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5128 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldr2_7_0);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module67)
	MR_init_entry1(version_array__foldr2_6_1);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr2_6_1);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 1 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr2_6_1);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr2_6_1
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5173 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldr2_7_1);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module68)
	MR_init_entry1(version_array__foldr2_6_2);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr2_6_2);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 2 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr2_6_2);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr2_6_2
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5218 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldr2_7_2);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module69)
	MR_init_entry1(version_array__foldr2_6_3);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr2_6_3);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 3 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr2_6_3);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr2_6_3
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5263 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldr2_7_3);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module70)
	MR_init_entry1(version_array__foldr2_6_4);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr2_6_4);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 4 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr2_6_4);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr2_6_4
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5308 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldr2_7_4);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module71)
	MR_init_entry1(version_array__foldr2_6_5);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__foldr2_6_5);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'foldr2'/6 mode 5 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__foldr2_6_5);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__foldr2_6_5
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r5, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5353 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr2 = MR_r6;
	MR_r6 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = MR_r7;
	MR_r7 = MR_tempr2;
	MR_r8 = MR_tempr1;
	MR_np_tailcall_ent(version_array__do_foldr2_7_5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module72)
	MR_init_entry1(fn__version_array__copy_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__copy_1_0);
	MR_init_label3(fn__version_array__copy_1_0,28,6,10)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'copy'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__copy_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__copy_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5397 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r3 = N;
#undef	MR_PROC_LABEL
	}
	if (MR_INT_NE(MR_r3,0)) {
		MR_GOTO_LAB(fn__version_array__copy_1_0_i28);
	}
	MR_r1 = MR_r2;
	MR_proceed();
MR_def_label(fn__version_array__copy_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__copy_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5422 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r3 = N;
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__copy_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5443 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__copy_1_0_i6);
	MR_r4 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_r1 = MR_r4;
	MR_GOTO_LAB(fn__version_array__copy_1_0_i10);
MR_def_label(fn__version_array__copy_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__copy_1_0_i10);
MR_def_label(fn__version_array__copy_1_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	MR_Integer	N;
	MR_Word	X;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__copy_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA0);
	N = MR_sv(2);
	X = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("resize");
{
#line 675 "version_array.m"

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);
;}
#line 5478 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("resize");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_decr_sp_and_return(4);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module73)
	MR_init_entry1(fn__version_array__unsafe_rewind_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__unsafe_rewind_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_rewind'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__unsafe_rewind_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__fn__version_array__unsafe_rewind_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 802 "version_array.m"

    VA = ML_va_rewind_dolock(VA0);
;}
#line 5515 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module74)
	MR_init_entry1(version_array__unsafe_rewind_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__unsafe_rewind_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unsafe_rewind'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__unsafe_rewind_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA0;
	struct ML_va *	VA;
#define	MR_PROC_LABEL	mercury__version_array__unsafe_rewind_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA0);
	MR_OBTAIN_GLOBAL_LOCK("unsafe_rewind");
{
#line 802 "version_array.m"

    VA = ML_va_rewind_dolock(VA0);
;}
#line 5552 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("unsafe_rewind");
	MR_MAYBE_BOX_FOREIGN_TYPE(struct ML_va *, VA, MR_r1);
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(univ__type_to_univ_2_1);
MR_decl_entry(fn__pretty_printer__format_arg_1_0);

MR_BEGIN_MODULE(version_array_module75)
	MR_init_entry1(fn__version_array__version_array_to_doc_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__version_array_to_doc_1_0);
	MR_init_label6(fn__version_array__version_array_to_doc_1_0,4,19,23,24,26,28)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'version_array_to_doc'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__fn__version_array__version_array_to_doc_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = (MR_Word) MR_TAG_COMMON(1,0,0);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__version_array_to_doc_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5595 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r3 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r3 - (MR_Integer) 1);
	if (((MR_Integer) 0 <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__version_array__version_array_to_doc_1_0_i4);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(2,3,1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__version_array__version_array_to_doc_1_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__version_array_to_doc_1_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = (MR_Integer) 0;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5627 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__version_array_to_doc_1_0_i19);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_r2 = MR_r3;
	MR_GOTO_LAB(fn__version_array__version_array_to_doc_1_0_i23);
MR_def_label(fn__version_array__version_array_to_doc_1_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__version_array_to_doc_1_0_i23);
MR_def_label(fn__version_array__version_array_to_doc_1_0,23)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__version_array__version_array_to_doc_1_0_i24);
MR_def_label(fn__version_array__version_array_to_doc_1_0,24)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		fn__version_array__version_array_to_doc_1_0_i26);
MR_def_label(fn__version_array__version_array_to_doc_1_0,26)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__version_array_to_doc_1_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5670 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r2 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	if (((MR_Integer) 0 != (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__version_array__version_array_to_doc_1_0_i28);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,0);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__version_array__version_array_to_doc_1_0,28)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,1);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = (MR_Integer) 0;
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,3,3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_tempr1, 0) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_TAG_COMMON(1,1,0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_sv(2);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r2, 0) = MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = MR_r2;
	MR_tfield(1, MR_tempr1, 1) = (MR_Word) MR_TAG_COMMON(1,1,3);
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = (MR_Word) MR_TAG_COMMON(3,2,0);
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__unify_2_0);

MR_BEGIN_MODULE(version_array_module76)
	MR_init_entry1(version_array__eq_version_array_2_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__eq_version_array_2_3_0);
	MR_init_label8(version_array__eq_version_array_2_3_0,45,4,8,10,14,15,19,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eq_version_array_2'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_array__eq_version_array_2_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(6);
	MR_sv(6) = (MR_Word) MR_succip;
MR_def_label(version_array__eq_version_array_2_3_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_LT(MR_r2,0)) {
		MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i19);
	}
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5808 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i4);
	MR_r5 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_r2 = MR_r5;
	MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i8);
MR_def_label(version_array__eq_version_array_2_3_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__eq_version_array_2_3_0_i8);
MR_def_label(version_array__eq_version_array_2_3_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(3), VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 5845 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i10);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i14);
MR_def_label(version_array__eq_version_array_2_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(4) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__eq_version_array_2_3_0_i14);
MR_def_label(version_array__eq_version_array_2_3_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r1;
	MR_np_call_localret_ent(builtin__unify_2_0,
		version_array__eq_version_array_2_3_0_i15);
MR_def_label(version_array__eq_version_array_2_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (!(MR_r1)) {
		MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i1);
	}
	MR_r1 = MR_sv(5);
	MR_r2 = ((MR_Integer) MR_sv(1) - (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_succip_word = MR_sv(6);
	MR_GOTO_LAB(version_array__eq_version_array_2_3_0_i45);
MR_def_label(version_array__eq_version_array_2_3_0,19)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_decr_sp_and_return(6);
MR_def_label(version_array__eq_version_array_2_3_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_decr_sp_and_return(6);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module77)
	MR_init_entry1(version_array__eq_version_array_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__eq_version_array_2_0);
	MR_init_label1(version_array__eq_version_array_2_0,1)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'eq_version_array'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__eq_version_array_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1, MR_tempr2, MR_tempr3;
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5918 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr1 = N;
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__eq_version_array_2_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 5934 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_tempr2 = N;
#undef	MR_PROC_LABEL
	}
	MR_tempr3 = ((MR_Integer) MR_tempr1 - (MR_Integer) 1);
	MR_tempr1 = ((MR_Integer) MR_tempr2 - (MR_Integer) 1);
	if ((MR_tempr3 != MR_tempr1)) {
		MR_GOTO_LAB(version_array__eq_version_array_2_0_i1);
	}
	MR_tempr1 = MR_r2;
	MR_r2 = MR_tempr3;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_tempr1;
	MR_r4 = MR_tempr2;
	MR_np_tailcall_ent(version_array__eq_version_array_2_3_0);
	}
MR_def_label(version_array__eq_version_array_2_0,1)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_FALSE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE

MR_decl_entry(builtin__compare_3_0);

MR_BEGIN_MODULE(version_array_module78)
	MR_init_entry1(version_array__cmp_version_array_2_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__cmp_version_array_2_5_0);
	MR_init_label8(version_array__cmp_version_array_2_5_0,45,2,4,8,10,14,15,48)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmp_version_array_2'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(version_array__cmp_version_array_2_5_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(7);
	MR_sv(7) = (MR_Word) MR_succip;
MR_def_label(version_array__cmp_version_array_2_5_0,45)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (((MR_Integer) MR_r2 < (MR_Integer) MR_r3)) {
		MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i2);
	}
	MR_r1 = (MR_Integer) 0;
	MR_decr_sp_and_return(7);
MR_def_label(version_array__cmp_version_array_2_5_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r4, VA);
	I = MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 6004 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i4);
	MR_r6 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r4;
	MR_sv(4) = MR_r5;
	MR_r2 = MR_r6;
	MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i8);
MR_def_label(version_array__cmp_version_array_2_5_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__cmp_version_array_2_5_0_i8);
MR_def_label(version_array__cmp_version_array_2_5_0,8)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_2_5_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(4), VA);
	I = MR_sv(1);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 6042 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i10);
	MR_r3 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i14);
MR_def_label(version_array__cmp_version_array_2_5_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(5) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		version_array__cmp_version_array_2_5_0_i14);
MR_def_label(version_array__cmp_version_array_2_5_0,14)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(6) = MR_r1;
	MR_np_call_localret_ent(builtin__compare_3_0,
		version_array__cmp_version_array_2_5_0_i15);
MR_def_label(version_array__cmp_version_array_2_5_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((((MR_Integer) MR_r1 == (MR_Integer) 1) || ((MR_Integer) MR_r1 == (MR_Integer) 2))) {
		MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i48);
	}
	MR_r1 = MR_sv(6);
	MR_r2 = ((MR_Integer) MR_sv(1) + (MR_Integer) 1);
	MR_r3 = MR_sv(2);
	MR_r4 = MR_sv(3);
	MR_r5 = MR_sv(4);
	MR_succip_word = MR_sv(7);
	MR_GOTO_LAB(version_array__cmp_version_array_2_5_0_i45);
MR_def_label(version_array__cmp_version_array_2_5_0,48)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_decr_sp_and_return(7);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module79)
	MR_init_entry1(version_array__cmp_version_array_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__version_array__cmp_version_array_3_0);
	MR_init_label4(version_array__cmp_version_array_3_0,2,3,5,25)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'cmp_version_array'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__version_array__cmp_version_array_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 6109 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r4 = N;
#undef	MR_PROC_LABEL
	}
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__version_array__cmp_version_array_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 6125 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r5 = N;
#undef	MR_PROC_LABEL
	}
	if (((MR_Integer) MR_r4 >= (MR_Integer) MR_r5)) {
		MR_GOTO_LAB(version_array__cmp_version_array_3_0_i2);
	}
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 1;
	MR_r5 = MR_r6;
	MR_GOTO_LAB(version_array__cmp_version_array_3_0_i5);
MR_def_label(version_array__cmp_version_array_3_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r4 != MR_r5)) {
		MR_GOTO_LAB(version_array__cmp_version_array_3_0_i3);
	}
	MR_r6 = MR_r1;
	MR_r1 = (MR_Integer) 0;
	MR_r5 = MR_r6;
	MR_GOTO_LAB(version_array__cmp_version_array_3_0_i5);
MR_def_label(version_array__cmp_version_array_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word MR_tempr1;
	MR_tempr1 = MR_r1;
	MR_r1 = (MR_Integer) 2;
	MR_r5 = MR_tempr1;
	}
MR_def_label(version_array__cmp_version_array_3_0,5)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(version_array__cmp_version_array_3_0_i25);
	}
	MR_r1 = MR_r5;
	{
	MR_Word MR_tempr1, MR_tempr2;
	MR_tempr1 = MR_r2;
	MR_r2 = (MR_Integer) 0;
	MR_tempr2 = MR_r3;
	MR_r3 = MR_r4;
	MR_r4 = MR_tempr1;
	MR_r5 = MR_tempr2;
	MR_np_tailcall_ent(version_array__cmp_version_array_2_5_0);
	}
MR_def_label(version_array__cmp_version_array_3_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module80)
	MR_init_entry1(__Unify___version_array__version_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Unify___version_array__version_array_1_0);
	MR_init_label1(__Unify___version_array__version_array_1_0,6)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Unify__'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Unify___version_array__version_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Unify___version_array__version_array_1_0_i6);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_decr_sp(4);
	MR_np_tailcall_ent(version_array__eq_version_array_2_0);
MR_def_label(__Unify___version_array__version_array_1_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_TRUE;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module81)
	MR_init_entry1(__Compare___version_array__version_array_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury____Compare___version_array__version_array_1_0);
	MR_init_label2(__Compare___version_array__version_array_1_0,3,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for '__Compare__'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury____Compare___version_array__version_array_1_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if ((MR_r2 == MR_r3)) {
		MR_GOTO_LAB(__Compare___version_array__version_array_1_0_i3);
	}
	MR_incr_sp(4);
	MR_sv(4) = (MR_Word) MR_succip;
	MR_sv(1) = MR_r2;
	MR_sv(2) = MR_r3;
	MR_sv(3) = MR_r1;
	MR_GOTO_LAB(__Compare___version_array__version_array_1_0_i2);
MR_def_label(__Compare___version_array__version_array_1_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 0;
	MR_proceed();
MR_def_label(__Compare___version_array__version_array_1_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_sv(3);
	MR_r2 = MR_sv(1);
	MR_r3 = MR_sv(2);
	MR_succip_word = MR_sv(4);
	MR_decr_sp(4);
	MR_np_tailcall_ent(version_array__cmp_version_array_3_0);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module82)
	MR_init_entry1(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0);
	MR_init_label6(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0,3,6,10,11,13,15)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'IntroducedFrom__func__version_array_to_doc_2__1820__1'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(5);
	MR_sv(5) = (MR_Word) MR_succip;
	MR_sv(2) = ((MR_Integer) MR_r2 + (MR_Integer) 1);
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 6285 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r2 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	if (((MR_Integer) MR_sv(2) <= (MR_Integer) MR_tempr1)) {
		MR_GOTO_LAB(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_i3);
	}
	MR_r1 = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0,3)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r3, VA);
	I = MR_sv(2);
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 6317 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_i6);
	MR_r2 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_sv(1) = MR_r3;
	MR_GOTO_LAB(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_i10);
MR_def_label(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0,6)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_i10);
MR_def_label(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0,10)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(3) = MR_r1;
	MR_np_call_localret_ent(univ__type_to_univ_2_1,
		fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_i11);
MR_def_label(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0,11)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 3, (MR_Integer) 2);
	MR_tfield(3, MR_r2, 0) = (MR_Integer) 0;
	MR_tfield(3, MR_r2, 1) = MR_r1;
	MR_r1 = MR_r2;
	MR_np_call_localret_ent(fn__pretty_printer__format_arg_1_0,
		fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_i13);
MR_def_label(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0,13)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	struct ML_va *	VA;
	MR_Integer	N;
#define	MR_PROC_LABEL	mercury__fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_sv(1), VA);
	MR_OBTAIN_GLOBAL_LOCK("size");
{
#line 701 "version_array.m"

    N = ML_va_size_dolock(VA);
;}
#line 6358 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("size");
	MR_r2 = N;
#undef	MR_PROC_LABEL
	}
	{
	MR_Word MR_tempr1;
	MR_tempr1 = ((MR_Integer) MR_r2 - (MR_Integer) 1);
	if ((MR_sv(2) != MR_tempr1)) {
		MR_GOTO_LAB(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0_i15);
	}
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,2);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(1,0,1);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
MR_def_label(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0,15)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_tag_alloc_heap(MR_r2, 0, (MR_Integer) 6);
	MR_tfield(0, MR_r2, 0) = (MR_Word) MR_COMMON(6,3);
	MR_tfield(0, MR_r2, 1) = (MR_Word) MR_ENTRY_AP(fn__version_array__IntroducedFrom__func__version_array_to_doc_2__1820__1_3_0);
	MR_tfield(0, MR_r2, 2) = (MR_Integer) 3;
	MR_tfield(0, MR_r2, 3) = MR_sv(3);
	MR_tfield(0, MR_r2, 4) = MR_sv(2);
	MR_tfield(0, MR_r2, 5) = MR_sv(1);
	{
	MR_Word MR_tempr1;
	MR_tag_alloc_heap(MR_tempr1, 3, (MR_Integer) 2);
	MR_tfield(3, MR_tempr1, 0) = (MR_Integer) 3;
	MR_tfield(3, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_tempr1;
	MR_tfield(1, MR_r2, 1) = (MR_Word) MR_tbmkword(0, 0);
	MR_tag_alloc_heap(MR_tempr1, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr1, 0) = (MR_Word) MR_TAG_COMMON(2,3,3);
	MR_tfield(1, MR_tempr1, 1) = MR_r2;
	MR_tag_alloc_heap(MR_r2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_r2, 0) = MR_r1;
	MR_tfield(1, MR_r2, 1) = MR_tempr1;
	MR_tag_alloc_heap(MR_r1, 2, (MR_Integer) 1);
	MR_tfield(2, MR_r1, 0) = MR_r2;
	MR_decr_sp_and_return(5);
	}
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module83)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__ClassMethod_for_ops__op_table____ops__mercury_op_table__arity0______ops__max_priority_1__[1]_0'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_111_112_115_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = (MR_Integer) 1200;
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(version_array_module84)
	MR_init_entry1(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0);
	MR_init_label4(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25,4,27,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'UnusedArgs__func__do_foldr_func__ho7__[1, 2, 4, 5]_0'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_incr_sp(3);
	MR_sv(3) = (MR_Word) MR_succip;
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,25)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	while (1) {
	if (((MR_Integer) 0 > (MR_Integer) MR_r4)) {
		MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i2);
	}
	{
	MR_Word MR_tempr1, MR_tempr2;
	{
	struct ML_va *	VA;
	MR_Integer	I;
	MR_Word	X;
#define	MR_PROC_LABEL	mercury__fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0
	MR_bool MercurySuccessIndicator;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MercurySuccessIndicator
	MR_MAYBE_UNBOX_FOREIGN_TYPE(struct ML_va *, MR_r2, VA);
	I = MR_r4;
	MR_OBTAIN_GLOBAL_LOCK("get_if_in_range");
{
#line 727 "version_array.m"

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);
;}
#line 6488 "version_array.c"
	MR_RELEASE_GLOBAL_LOCK("get_if_in_range");
if (!MercurySuccessIndicator) MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i4);
	MR_tempr1 = X;
#undef SUCCESS_INDICATOR
#define SUCCESS_INDICATOR MR_r1
#undef	MR_PROC_LABEL
	}
	MR_tag_alloc_heap(MR_tempr2, 1, (MR_Integer) 2);
	MR_tfield(1, MR_tempr2, 0) = MR_tempr1;
	MR_tfield(1, MR_tempr2, 1) = MR_r3;
	MR_r3 = MR_tempr2;
	MR_r4 = ((MR_Integer) MR_r4 - (MR_Integer) 1);
	MR_succip_word = MR_sv(3);
	continue;
	}
	break;
	} /* end while */
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,4)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_sv(1) = MR_r2;
	MR_r2 = (MR_Word) MR_string_const("version_array.elem: index out of range", 38);
	MR_np_call_localret_ent(fn__require__func_error_1_0,
		fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i27);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,27)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_succip_word = MR_sv(3);
	MR_GOTO_LAB(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0_i25);
MR_def_label(fn__f_118_101_114_115_105_111_110_95_97_114_114_97_121_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_100_111_95_102_111_108_100_114_95_102_117_110_99_95_95_104_111_55_95_95_91_49_44_32_50_44_32_52_44_32_53_93_95_48_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_r1 = MR_r3;
	MR_decr_sp_and_return(3);
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
#line 942 "version_array.m"


#define ML_va_latest_version(VA)   ((VA)->index == -1)

#ifdef MR_THREAD_SAFE
    #define ML_maybe_lock(lock)                                 do {                                                        if (lock) {                                                 MR_LOCK(lock, "ML_maybe_lock");                   }                                                   } while (0)

    #define ML_maybe_unlock(lock)                               do {                                                        if (lock) {                                                 MR_UNLOCK(lock, "ML_maybe_unlock");               }                                                   } while (0)
#else
    #define ML_maybe_lock(lock)     ((void) 0)
    #define ML_maybe_unlock(lock)   ((void) 0)
#endif

ML_va_ptr
ML_va_get_latest(ML_va_ptr VA)
{
    while (!ML_va_latest_version(VA)) {
        VA = VA->rest.next;
    }

    return VA;
}

MR_Integer
ML_va_size_dolock(ML_va_ptr VA)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA->lock;
#endif
    MR_Integer  size;

    ML_maybe_lock(lock);

    size = ML_va_size(VA);

    ML_maybe_unlock(lock);

    return size;
}

static MR_Integer
ML_va_size(ML_va_ptr VA)
{
    VA = ML_va_get_latest(VA);

    return VA->rest.array->size;
}

int
ML_va_get_dolock(ML_va_ptr VA, MR_Integer I, MR_Word *Xptr)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA->lock;
#endif
    int         ret;

    ML_maybe_lock(lock);

    ret = ML_va_get(VA, I, Xptr);

    ML_maybe_unlock(lock);

    return ret;
}

static int
ML_va_get(ML_va_ptr VA, MR_Integer I, MR_Word *Xptr)
{
    while (!ML_va_latest_version(VA)) {
        if (I == VA->index) {
            *Xptr = VA->value;
            return MR_TRUE;
        }

        VA = VA->rest.next;
    }

    if (0 <= I && I < VA->rest.array->size) {
        *Xptr = VA->rest.array->elements[I];
        return MR_TRUE;
    } else {
        return MR_FALSE;
    }
}

int
ML_va_set_dolock(ML_va_ptr VA0, MR_Integer I, MR_Word X, ML_va_ptr *VAptr,
    MR_AllocSiteInfoPtr alloc_id)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA0->lock;
#endif
    int         ret;

    ML_maybe_lock(lock);

    ret = ML_va_set(VA0, I, X, VAptr, alloc_id);

    ML_maybe_unlock(lock);

    return ret;
}

static int
ML_va_set(ML_va_ptr VA0, MR_Integer I, MR_Word X, ML_va_ptr *VAptr,
    MR_AllocSiteInfoPtr alloc_id)
{
    ML_va_ptr VA1;

    if (ML_va_latest_version(VA0)) {
        if (I < 0 || I >= VA0->rest.array->size) {
            return MR_FALSE;
        }

        MR_incr_hp_type_msg(VA1, struct ML_va, alloc_id,
            "version_array.version_array/1");
        VA1->index      = -1;
        VA1->value      = (MR_Word) NULL;
        VA1->rest.array = VA0->rest.array;
#ifdef MR_THREAD_SAFE
        VA1->lock       = VA0->lock;
#endif

        VA0->index     = I;
        VA0->value     = VA0->rest.array->elements[I];
        VA0->rest.next = VA1;

        VA1->rest.array->elements[I] = X;
    } else {
        VA1 = ML_va_flat_copy(VA0, alloc_id);

        if (I < 0 || I >= VA1->rest.array->size) {
            return MR_FALSE;
        }

        VA1->rest.array->elements[I] = X;
    }

    *VAptr = VA1;
    return MR_TRUE;
}

static ML_va_ptr
ML_va_flat_copy(const ML_va_ptr VA0, MR_AllocSiteInfoPtr alloc_id)
{
    ML_va_ptr   latest;
    ML_va_ptr   VA;
    MR_Word     array;
    MR_Integer  N;
    MR_Integer  i;

    latest = ML_va_get_latest(VA0);
    N = latest->rest.array->size;

    MR_incr_hp_type_msg(VA, struct ML_va,
        alloc_id, "version_array.version_array/1");
    MR_incr_hp_msg(array, N + 1,
        alloc_id, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

    for (i = 0; i < N; i++) {
        VA->rest.array->elements[i] = latest->rest.array->elements[i];
    }

#ifdef MR_THREAD_SAFE
    if (VA0->lock != NULL) {
        MR_incr_hp_type_msg(VA->lock, MercuryLock, alloc_id, NULL);
        pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
    } else {
        VA->lock = NULL;
    }
#endif

    ML_va_rewind_into(VA, VA0);

    return VA;
}

static void
ML_va_rewind_into(ML_va_ptr VA, const ML_va_ptr VA0)
{
    MR_Integer I;
    MR_Word    X;

    if (ML_va_latest_version(VA0)) {
        return;
    }

    ML_va_rewind_into(VA, VA0->rest.next);

    I  = VA0->index;
    X  = VA0->value;
    if (I < VA->rest.array->size) {
        VA->rest.array->elements[I] = X;
    }
}

ML_va_ptr
ML_va_rewind_dolock(ML_va_ptr VA)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA->lock;
#endif
    ML_maybe_lock(lock);

    VA = ML_va_rewind(VA);

    ML_maybe_unlock(lock);

    return VA;
}

static ML_va_ptr
ML_va_rewind(ML_va_ptr VA)
{
    MR_Integer I;
    MR_Word    X;

    if (ML_va_latest_version(VA)) {
        return VA;
    }

    I  = VA->index;
    X  = VA->value;
    VA = ML_va_rewind(VA->rest.next);
    VA->rest.array->elements[I] = X;

    return VA;
}

ML_va_ptr
ML_va_resize_dolock(ML_va_ptr VA0, MR_Integer N, MR_Word X,
    MR_AllocSiteInfoPtr alloc_id)
{
#ifdef MR_THREAD_SAFE
    MercuryLock *lock = VA0->lock;
#endif
    ML_va_ptr   VA;

    ML_maybe_lock(lock);

    VA = ML_va_resize(VA0, N, X, alloc_id);

    ML_maybe_unlock(lock);

    return VA;
}

static ML_va_ptr
ML_va_resize(ML_va_ptr VA0, MR_Integer N, MR_Word X,
    MR_AllocSiteInfoPtr alloc_id)
{
    ML_va_ptr   latest;
    ML_va_ptr   VA;
    MR_Integer  i;
    MR_Integer  size_VA0;
    MR_Integer  min;
    MR_Word     array;

    latest = ML_va_get_latest(VA0);

    size_VA0 = ML_va_size(latest);
    min      = (N <= size_VA0 ? N : size_VA0);
    MR_incr_hp_type_msg(VA, struct ML_va,
        alloc_id, "version_array.version_array/1");
    MR_incr_hp_msg(array, N + 1,
        alloc_id, "version_array.version_array/1");

    VA->index            = -1;
    VA->value            = (MR_Word) NULL;
    VA->rest.array       = (MR_ArrayPtr) array;
    VA->rest.array->size = N;

    for (i = 0; i < min; i++) {
        VA->rest.array->elements[i] = latest->rest.array->elements[i];
    }

#ifdef MR_THREAD_SAFE
    if (VA0->lock != NULL) {
        MR_incr_hp_type_msg(VA->lock, MercuryLock, alloc_id, NULL);
        pthread_mutex_init(VA->lock, MR_MUTEX_ATTR);
    } else {
        VA->lock = NULL;
    }
#endif

    ML_va_rewind_into(VA, VA0);

    for (i = min; i < N; i++) {
        VA->rest.array->elements[i] = X;
    }

    return VA;
}


#line 6826 "version_array.c"

static void mercury__version_array_maybe_bunch_0(void)
{
	version_array_module0();
	version_array_module1();
	version_array_module2();
	version_array_module3();
	version_array_module4();
	version_array_module5();
	version_array_module6();
	version_array_module7();
	version_array_module8();
	version_array_module9();
	version_array_module10();
	version_array_module11();
	version_array_module12();
	version_array_module13();
	version_array_module14();
	version_array_module15();
	version_array_module16();
	version_array_module17();
	version_array_module18();
	version_array_module19();
	version_array_module20();
	version_array_module21();
	version_array_module22();
	version_array_module23();
	version_array_module24();
	version_array_module25();
	version_array_module26();
	version_array_module27();
	version_array_module28();
	version_array_module29();
	version_array_module30();
	version_array_module31();
	version_array_module32();
	version_array_module33();
	version_array_module34();
	version_array_module35();
	version_array_module36();
	version_array_module37();
	version_array_module38();
	version_array_module39();
}

static void mercury__version_array_maybe_bunch_1(void)
{
	version_array_module40();
	version_array_module41();
	version_array_module42();
	version_array_module43();
	version_array_module44();
	version_array_module45();
	version_array_module46();
	version_array_module47();
	version_array_module48();
	version_array_module49();
	version_array_module50();
	version_array_module51();
	version_array_module52();
	version_array_module53();
	version_array_module54();
	version_array_module55();
	version_array_module56();
	version_array_module57();
	version_array_module58();
	version_array_module59();
	version_array_module60();
	version_array_module61();
	version_array_module62();
	version_array_module63();
	version_array_module64();
	version_array_module65();
	version_array_module66();
	version_array_module67();
	version_array_module68();
	version_array_module69();
	version_array_module70();
	version_array_module71();
	version_array_module72();
	version_array_module73();
	version_array_module74();
	version_array_module75();
	version_array_module76();
	version_array_module77();
	version_array_module78();
	version_array_module79();
}

static void mercury__version_array_maybe_bunch_2(void)
{
	version_array_module80();
	version_array_module81();
	version_array_module82();
	version_array_module83();
	version_array_module84();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__version_array__init(void);
void mercury__version_array__init_type_tables(void);
void mercury__version_array__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__version_array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__version_array__init_complexity_procs(void);
#endif
#ifdef MR_THREADSCOPE
void mercury__version_array__init_threadscope_string_table(void);
#endif

void mercury__version_array__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__version_array_maybe_bunch_0();
	mercury__version_array_maybe_bunch_1();
	mercury__version_array_maybe_bunch_2();
	MR_INIT_TYPE_CTOR_INFO(
		mercury_data_version_array__type_ctor_info_version_array_1,
		version_array__version_array_1_0);
	mercury__version_array__init_debugger();
}

void mercury__version_array__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	{
		MR_register_type_ctor_info(
		&mercury_data_version_array__type_ctor_info_version_array_1);
	}
}


void mercury__version_array__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__version_array__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__version_array);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__version_array__init_complexity_procs(void)
{
}

#endif

#ifdef MR_THREADSCOPE

void mercury__version_array__init_threadscope_string_table(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
